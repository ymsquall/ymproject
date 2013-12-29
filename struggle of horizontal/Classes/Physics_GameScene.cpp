#include "Physics_GameScene.h"
#include "cocos2d.h"
#include "luaext/LuaHelper.h"
#include "LocalPlayer.h"
#include "Monster.h"

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
				bool isWall = "wall" == oType;
				b2Body* pBody = this->createGround(b2Vec2(x, y), b2Vec2(pt1X / PTM_RATIO, -pt1Y / PTM_RATIO), b2Vec2(pt2X / PTM_RATIO, -pt2Y / PTM_RATIO), isWall);
				if(NULL != pBody)
				{
					if(!isWall)
						mLandList.push_back(pBody);
					else
						mWallList.push_back(pBody);
				}
			}
		}
		else
		{
			int width = ((String*)pGroundDict->objectForKey("width"))->intValue();
			int height = ((String*)pGroundDict->objectForKey("height"))->intValue();
			bool isWall = "wall" == oType;
			b2Body* pBody = this->createGround(b2Vec2(x, y), width, height, isWall);
			if(NULL != pBody)
			{
				if(!isWall)
					mLandList.push_back(pBody);
				else 
					mWallList.push_back(pBody);
			}
		}
	}
	for(PhysicsCreatureList::iterator it = mMonsterPhysicsList.begin();
		it != mMonsterPhysicsList.end(); ++ it)
	{
		delete it->first;
	}
	for(PhysicsCreatureList::iterator it = mNPCPhysicsList.begin();
		it != mNPCPhysicsList.end(); ++ it)
	{
		delete it->first;
	}
	mMonsterPhysicsList.clear();
	mMonsterPhysicsInfoList.clear();
	mNPCPhysicsList.clear();
	mNPCPhysicsInfoList.clear();
	// monster
	TMXObjectGroup* monsterGroup = pTiledMap->getObjectGroup("monster");
	auto monsterObjects = monsterGroup->getObjects();
	Dictionary* pMonsterDict = NULL;
	Object* pMonsterObj = NULL;
	CCARRAY_FOREACH(monsterObjects, pMonsterObj)
	{
		CreaturePhysicsInfo cpInfo;
		pMonsterDict = static_cast<Dictionary*>(pMonsterObj);
		cpInfo.x = ((String*)pMonsterDict->objectForKey("x"))->intValue();
		cpInfo.y = ((String*)pMonsterDict->objectForKey("y"))->intValue();
		cpInfo.w = ((String*)pMonsterDict->objectForKey("width"))->intValue();
		cpInfo.h = ((String*)pMonsterDict->objectForKey("height"))->intValue();
		mMonsterPhysicsInfoList.push_back(cpInfo);
		Monster* pMonster = ICreatue::createWithBox<Monster>(mWorld, Point(cpInfo.x, cpInfo.y), Size(19.2f, 6.4f));
		if(NULL != pMonster)
			mMonsterPhysicsList[pMonster] = &cpInfo;
	}
	// npcs
	TMXObjectGroup* pNpcGroup = pTiledMap->getObjectGroup("npcs");
	auto pNpcObjects = pNpcGroup->getObjects();
	Dictionary* pNpcDict = NULL;
	Object* pNpcObj = NULL;
	CCARRAY_FOREACH(pNpcObjects, pNpcObj)
	{
		CreaturePhysicsInfo cpInfo;
		pNpcDict = static_cast<Dictionary*>(pNpcObj);
		cpInfo.x = ((String*)pNpcDict->objectForKey("x"))->intValue();
		cpInfo.y = ((String*)pNpcDict->objectForKey("y"))->intValue();
		cpInfo.w = ((String*)pNpcDict->objectForKey("width"))->intValue();
		cpInfo.h = ((String*)pNpcDict->objectForKey("height"))->intValue();
		mNPCPhysicsInfoList.push_back(cpInfo);
	}
	return true;
}

void GameScenePhysics::setLocalPlayerPhysics(LocalPlayer* player)
{
	mLocalPlayerPhysics = player;
}

b2Body* GameScenePhysics::createGround(const b2Vec2& pos, const b2Vec2& p1, const b2Vec2& p2, bool isWall)
{
	b2BodyDef bd;
	bd.position.Set(pos.x / PTM_RATIO, pos.y / PTM_RATIO);
	b2Body* pBody = mWorld->CreateBody(&bd);
	b2EdgeShape shape;
	b2FixtureDef fd;
	fd.shape = &shape;
	fd.density = 0.0f;
	fd.friction = 1.0f;
	if(isWall)
		fd.filter.categoryBits = ICreatue::WallContactMask;
	else
		fd.filter.categoryBits = ICreatue::LandContactMask;
	fd.filter.maskBits = ICreatue::MoveBodyContactMask;
	shape.Set(p1, p2);
	pBody->CreateFixture(&fd);
	return pBody;
}

b2Body* GameScenePhysics::createGround(const b2Vec2& pos, float width, float height, bool isWall)
{
	b2BodyDef bd;
	bd.position.Set((pos.x + width/2.0f) / PTM_RATIO, (pos.y + height /2.0f) / PTM_RATIO);
	b2Body* pBody = mWorld->CreateBody(&bd);
	b2PolygonShape shape;
	b2FixtureDef fd;
	fd.shape = &shape;
	fd.density = 0.0f;
	fd.friction = 1.0f;
	if(isWall)
		fd.filter.categoryBits = ICreatue::WallContactMask;
	else
		fd.filter.categoryBits = ICreatue::LandContactMask;
	fd.filter.maskBits = ICreatue::MoveBodyContactMask;
	shape.SetAsBox(width / 2 / PTM_RATIO, height / 2 / PTM_RATIO, b2Vec2(0, 0), 0.0);
	pBody->CreateFixture(&fd);
	return pBody;
}

void GameScenePhysics::Step(physics::WorldSettings* settings)
{
	if(NULL != mLocalPlayerPhysics)
		mLocalPlayerPhysics->Step(settings);
	for(PhysicsCreatureList::const_iterator it = mPlayerPhysicsList.begin();
		it != mPlayerPhysicsList.end(); ++ it)
	{
		if(NULL != it->first)
			it->first->Step(settings);
	}
	for(PhysicsCreatureList::const_iterator it = mMonsterPhysicsList.begin();
		it != mMonsterPhysicsList.end(); ++ it)
	{
		if(NULL != it->first)
			it->first->Step(settings);
	}
	for(PhysicsCreatureList::const_iterator it = mNPCPhysicsList.begin();
		it != mNPCPhysicsList.end(); ++ it)
	{
		if(NULL != it->first)
			it->first->Step(settings);
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
	for(PhysicsCreatureList::const_iterator it = mPlayerPhysicsList.begin();
		it != mPlayerPhysicsList.end(); ++ it)
	{
		Player* pPlayer = dynamic_cast<Player*>(it->first);
		if(NULL != pPlayer)
			pPlayer->PhysicsPreSolve(contact, oldManifold, mLandList);
	}
	for(PhysicsCreatureList::const_iterator it = mMonsterPhysicsList.begin();
		it != mMonsterPhysicsList.end(); ++ it)
	{
		Monster* pMonster = dynamic_cast<Monster*>(it->first);
		if(NULL != pMonster)
			pMonster->PhysicsPreSolve(contact, oldManifold, mLandList);
	}
}

void GameScenePhysics::BeginContact(b2Contact* contact)
{
}

void GameScenePhysics::EndContact(b2Contact* contact)
{
}