#pragma once
#include "physics/PhysicsBase.h"

using namespace engine;

namespace cocos2d
{
	class TMXTiledMap;
}

enum class JumpState : int8
{
	none,		// ÂäµØºóµÄ×´Ì¬
	jumpup,		// Ë²Ê±×´Ì¬£¬ÆðÌø
	jumping,	// ³ÖÐø×´Ì¬£¬ÉÏÉý
	floated,	// Ë²Ê±×´Ì¬£¬Ðü¸¡
	droping,	// Ë²Ê±×´Ì¬£¬ÏÂÂä
	landdown,	// Ë²Ê±×´Ì¬£¬ÂäµØ
};
typedef std::vector<b2Body*> PhysicsBodyList;

class GameScenePhysics : public physics::PhysicsBase, public cocos2d::Object
{
public:
	GameScenePhysics();
	~GameScenePhysics();
    void Step(physics::Settings* settings);
	
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
	PhysicsBodyList mLandList;
	PhysicsBodyList mWallList;

	b2MouseJoint* mHeroMoveJoint;

	float mHeroMoveDir;
	float mHeroMoveSpeed;
	bool mIsHeroDorping;
	bool mIsOriJump;
	bool mIsJumping;
	JumpState mJumpState;
};

