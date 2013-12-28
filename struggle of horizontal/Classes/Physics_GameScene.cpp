#include "Physics_GameScene.h"
#include "cocos2d.h"
#include "luaext/LuaHelper.h"
#include "LocalPlayer.h"

using namespace cocos2d;

GameScenePhysics::GameScenePhysics()
{
	mLocalPlayerPhysics = NULL;
}

GameScenePhysics::~GameScenePhysics()
{
}

bool GameScenePhysics::initBoxWithTiledMap(const TMXTiledMap* pTiledMap)
{
	// ground
	TMXObjectGroup* groundGroup = pTiledMap->getObjectGroup("ground");
	auto gtoundObjects = groundGroup->getObjects();
	Dictionary* pGroundDict = NULL;
	Object* pGuoundObj = NULL;
	CCARRAY_FOREACH(gtoundObjects, pGuoundObj)
	{
		pGroundDict = static_cast<Dictionary*>(pGuoundObj);
		//Array* pKeys = pGroundDict->allKeys();
		//Object* pKey = NULL;
		//CCARRAY_FOREACH(pKeys, pKey)
		//{
		//	String* pKeyStr = static_cast<String*>(pKey);
		//	CCLOG("%s", pKeyStr->getCString());
		//}
		int x = ((String*)pGroundDict->objectForKey("x"))->intValue();
		int y = ((String*)pGroundDict->objectForKey("y"))->intValue();
		std::string oType = ((String*)pGroundDict->objectForKey("type"))->getCString();
		Object* pPointObj = pGroundDict->objectForKey("polylinePoints");// points
		if(NULL != pPointObj)
		{
			Array* pPoints = static_cast<Array*>(pPointObj);
			for(int i = 0; i < pPoints->count()-1; ++ i)
			{
				Dictionary* dPoint1 = static_cast<Dictionary*>(pPoints->objectAtIndex(i));
				Dictionary* dPoint2 = static_cast<Dictionary*>(pPoints->objectAtIndex(i+1));
				int pt1X = ((String*)dPoint1->objectForKey("x"))->intValue();
				int pt1Y = ((String*)dPoint1->objectForKey("y"))->intValue();
				int pt2X = ((String*)dPoint2->objectForKey("x"))->intValue();
				int pt2Y = ((String*)dPoint2->objectForKey("y"))->intValue();
				b2Body* pBody = this->createGround(b2Vec2(x, y), b2Vec2(pt1X / PTM_RATIO, -pt1Y / PTM_RATIO), b2Vec2(pt2X / PTM_RATIO, -pt2Y / PTM_RATIO));
				if(NULL != pBody)
				{
					if("land" == oType)
						mLandList.push_back(pBody);
					else if("wall" == oType)
						mWallList.push_back(pBody);
				}
			}
		}
		else
		{
			int width = ((String*)pGroundDict->objectForKey("width"))->intValue();
			int height = ((String*)pGroundDict->objectForKey("height"))->intValue();
			b2Body* pBody = this->createGround(b2Vec2(x, y), width, height);
			if(NULL != pBody)
			{
				if("land" == oType)
					mLandList.push_back(pBody);
				else if("wall" == oType)
					mWallList.push_back(pBody);
			}
		}
	}
	return true;
}

void GameScenePhysics::setLocalPlayerPhysics(LocalPlayer* player)
{
	mLocalPlayerPhysics = player;
}

void GameScenePhysics::addPlayerPhysics(physics::PhysicsObject* player)
{
	if(std::find(mPlayerPhysicsList.begin(), mPlayerPhysicsList.end(), player) != mPlayerPhysicsList.end())
		mPlayerPhysicsList.push_back(player);
}

void GameScenePhysics::addMonsterPhysics(physics::PhysicsObject* monster)
{
	if(std::find(mPlayerPhysicsList.begin(), mPlayerPhysicsList.end(), monster) != mPlayerPhysicsList.end())
		mPlayerPhysicsList.push_back(monster);
}

b2Body* GameScenePhysics::createGround(const b2Vec2& pos, const b2Vec2& p1, const b2Vec2& p2)
{
	b2BodyDef bd;
	bd.position.Set(pos.x / PTM_RATIO, pos.y / PTM_RATIO);
	b2Body* pBody = mWorld->CreateBody(&bd);
	b2EdgeShape shape;
	b2FixtureDef fd;
	fd.shape = &shape;
	fd.density = 0.0f;
	fd.friction = 1.0f;
	shape.Set(p1, p2);
	pBody->CreateFixture(&fd);
	return pBody;
}

b2Body* GameScenePhysics::createGround(const b2Vec2& pos, float width, float height)
{
	b2BodyDef bd;
	bd.position.Set((pos.x + width/2.0f) / PTM_RATIO, (pos.y + height /2.0f) / PTM_RATIO);
	b2Body* pBody = mWorld->CreateBody(&bd);
	b2PolygonShape shape;
	b2FixtureDef fd;
	fd.shape = &shape;
	fd.density = 0.0f;
	fd.friction = 1.0f;
	shape.SetAsBox(width / 2 / PTM_RATIO, height / 2 / PTM_RATIO, b2Vec2(0, 0), 0.0);
	pBody->CreateFixture(&fd);
	return pBody;
}

void GameScenePhysics::Step(physics::WorldSettings* settings)
{
	if(NULL != mLocalPlayerPhysics)
		mLocalPlayerPhysics->Step(settings);
	for(physics::PhysicsObjectList::const_iterator it = mPlayerPhysicsList.begin();
		it != mPlayerPhysicsList.end(); ++ it)
	{
		if(NULL != (*it))
			(*it)->Step(settings);
	}
	for(physics::PhysicsObjectList::const_iterator it = mMonsterPhysicsList.begin();
		it != mMonsterPhysicsList.end(); ++ it)
	{
		if(NULL != (*it))
			(*it)->Step(settings);
	}
	PhysicsWorld::Step(settings);
}

void GameScenePhysics::PreSolve(b2Contact* contact, const b2Manifold* oldManifold)
{
	PhysicsWorld::PreSolve(contact, oldManifold);
	const b2Manifold* manifold = contact->GetManifold();
	if (manifold->pointCount <= 0)
		return;
	if(NULL != mLocalPlayerPhysics)
		mLocalPlayerPhysics->PhysicsPreSolve(contact, oldManifold, mLandList);
	for(physics::PhysicsObjectList::const_iterator it = mPlayerPhysicsList.begin();
		it != mPlayerPhysicsList.end(); ++ it)
	{
		if(NULL != (*it))
			(*it)->PreSolve(contact, oldManifold);
	}
	for(physics::PhysicsObjectList::const_iterator it = mMonsterPhysicsList.begin();
		it != mMonsterPhysicsList.end(); ++ it)
	{
		if(NULL != (*it))
			(*it)->PreSolve(contact, oldManifold);
	}
}

void GameScenePhysics::BeginContact(b2Contact* contact)
{
}

void GameScenePhysics::EndContact(b2Contact* contact)
{
}