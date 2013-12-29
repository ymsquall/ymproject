#pragma once
#include "unity/singleton.h"
#include "physics/PhysicsWorld.h"
#include "physics/PhysicsObject.h"

using namespace framework;
using namespace engine;
class LocalPlayer;
class ICreatue;

namespace cocos2d
{
	class TMXTiledMap;
}

struct CreaturePhysicsInfo
{
	CreaturePhysicsInfo()
	{
		x = 0.0f;	y = 0.0f; w = 0.0f; h = 0.0f;
	}
	CreaturePhysicsInfo(float _x, float _y, float _w, float _h)
	{
		x = _x;	y = _y; w = _w; h = _h;
	}
	float x, y, w, h;
};
typedef std::vector<CreaturePhysicsInfo> CreaturePhysicsInfoList;
typedef std::map<ICreatue*, CreaturePhysicsInfo*> PhysicsCreatureList;

class GameScenePhysics : public physics::PhysicsWorld, public cocos2d::Object
	, public unity::SingletonAutoT<GameScenePhysics>
{
public:
	GameScenePhysics();
	~GameScenePhysics();
    void Step(physics::WorldSettings* settings);
	
	bool initBoxWithTiledMap(const cocos2d::TMXTiledMap* pTiledMap);
	void setLocalPlayerPhysics(LocalPlayer* player);

private:
	b2Body* createGround(const b2Vec2& pos, const b2Vec2& p1, const b2Vec2& p2, bool isWall);
	b2Body* createGround(const b2Vec2& pos, float width, float height, bool isWall);

	virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold) override;
	virtual void BeginContact(b2Contact* contact) override;
	virtual void EndContact(b2Contact* contact) override;

public:
	physics::PhysicsBodyList mLandList;
	physics::PhysicsBodyList mWallList;
	LocalPlayer* mLocalPlayerPhysics;
	PhysicsCreatureList mPlayerPhysicsList;
	PhysicsCreatureList mMonsterPhysicsList;
	PhysicsCreatureList mNPCPhysicsList;
	CreaturePhysicsInfoList mMonsterPhysicsInfoList;
	CreaturePhysicsInfoList mNPCPhysicsInfoList;
};

