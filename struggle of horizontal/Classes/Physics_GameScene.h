#pragma once
#include "PhysicsBase.h"

namespace cocos2d
{
	class TMXTiledMap;
}

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

private:
	b2Body* createGround(const b2Vec2& pos, const b2Vec2& p1, const b2Vec2& p2);
	b2Body* createGround(const b2Vec2& pos, float width, float height);

	virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold) override;

public:
	b2Body* mHeroBody;
	b2Body* mHeroWeaponBody;
	GroundList mGroundList;
	b2MouseJoint* mHeroMoveJoint;

	float mHeroMoveSpeed;
};

