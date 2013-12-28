#pragma once
#include "unity/singleton.h"
#include "physics/PhysicsWorld.h"
#include "physics/PhysicsObject.h"

using namespace framework;
using namespace engine;
class LocalPlayer;

namespace cocos2d
{
	class TMXTiledMap;
}

class GameScenePhysics : public physics::PhysicsWorld, public cocos2d::Object
	, public unity::SingletonAutoT<GameScenePhysics>
{
public:
	GameScenePhysics();
	~GameScenePhysics();
    void Step(physics::WorldSettings* settings);
	
	bool initBoxWithTiledMap(const cocos2d::TMXTiledMap* pTiledMap);
	void setLocalPlayerPhysics(LocalPlayer* player);
	void addPlayerPhysics(physics::PhysicsObject* player);
	void addMonsterPhysics(physics::PhysicsObject* monster);

private:
	b2Body* createGround(const b2Vec2& pos, const b2Vec2& p1, const b2Vec2& p2);
	b2Body* createGround(const b2Vec2& pos, float width, float height);

	virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold) override;
	virtual void BeginContact(b2Contact* contact) override;
	virtual void EndContact(b2Contact* contact) override;

public:
	physics::PhysicsBodyList mLandList;
	physics::PhysicsBodyList mWallList;
	LocalPlayer* mLocalPlayerPhysics;
	physics::PhysicsObjectList mPlayerPhysicsList;
	physics::PhysicsObjectList mMonsterPhysicsList;
};

