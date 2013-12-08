#pragma once
#include "PhysicsBase.h"

namespace cocos2d
{
	class TMXTiledMap;
}

enum class JumpState : int8
{
	none,		// ��غ��״̬
	gouping,	// ����״̬������
	floated,	// ˲ʱ״̬������
	droping,	// ˲ʱ״̬������
	landed,		// ˲ʱ״̬�����
};

class GameScenePhysics : public PhysicsBase, public cocos2d::Object
{
public:
	GameScenePhysics();
	~GameScenePhysics();
	typedef std::vector<b2Body*> GroundList;
    void Step(Settings* settings);
	
	bool initBoxWithTiledMap(const cocos2d::TMXTiledMap* pTiledMap);

	const cocos2d::CCPoint& getHeroBodyPos();
	void changeMoveDirection(float dir, float speed);
	void setIsHeroDorping(bool b);
	bool getIsHeroDorping();
	void jump(float speed);
	b2ContactEdge* getHeroBodyContactList();

private:
	b2Body* createGround(const b2Vec2& pos, const b2Vec2& p1, const b2Vec2& p2);
	b2Body* createGround(const b2Vec2& pos, float width, float height);

	virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold) override;
	virtual void BeginContact(b2Contact* contact) override;
	virtual void EndContact(b2Contact* contact) override;

public:
	b2Body* mHeroBody;
	b2Body* mHeroWeaponBody;
	GroundList mGroundList;
	b2MouseJoint* mHeroMoveJoint;

	float mHeroMoveDir;
	float mHeroMoveSpeed;
	bool mIsHeroDorping;
	bool mIsOriJump;
	JumpState mJumpState;
};

