#include "Physics_GameScene.h"
#include "cocos2d.h"

using namespace cocos2d;

GameScenePhysics::GameScenePhysics()
{
	mHeroMoveJoint = NULL;
	mHeroWeaponBody = NULL;
	//// edge
	//{
	//	b2EdgeShape shape;
	//	b2FixtureDef fd;
	//	fd.shape = &shape;
	//	fd.density = 0.0f;
	//	fd.friction = 1.0f;
	//	shape.Set(b2Vec2(10.0f, 10.0f), b2Vec2(50.0f, 10.0f));
	//	mEdgeGround->CreateFixture(&fd);
	//}
	// hero box
	{
		b2BodyDef bd;
		bd.type = b2_dynamicBody;
		bd.position.Set(25, 15);
		mHeroBody = mWorld->CreateBody(&bd);
		b2PolygonShape shape;
		b2FixtureDef fd;
		fd.shape = &shape;
		fd.density = 10.0f;
		fd.friction = 1.0f;
		shape.SetAsBox(2, 0.1, b2Vec2(0, 0), 0.0);
		mHeroBody->CreateFixture(&fd);
		mHeroBody->SetFixedRotation(true); // ����Ϊ�̶��Ƕȣ�����ת��
	}
	mHeroMoveSpeed = 0;
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
		int width = ((String*)pGroundDict->objectForKey("width"))->intValue();
		int height = ((String*)pGroundDict->objectForKey("height"))->intValue();
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
					mGroundList.push_back(pBody);
			}
		}
		else
		{
			b2Body* pBody = this->createGround(b2Vec2(x, y), width, height);
			if(NULL != pBody)
				mGroundList.push_back(pBody);
		}
	}
	return true;
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

void GameScenePhysics::Step(Settings* settings)
{
	b2Vec2 vel = mHeroBody->GetLinearVelocity();
	vel.x = mHeroMoveSpeed;
	mHeroBody->SetLinearVelocity(vel);
	PhysicsBase::Step(settings);
}

void GameScenePhysics::PreSolve(b2Contact* contact, const b2Manifold* oldManifold)
{
	const b2Manifold* manifold = contact->GetManifold();
	if (manifold->pointCount <= 0)
		return;
	b2Fixture* fixtureA = contact->GetFixtureA();
	b2Fixture* fixtureB = contact->GetFixtureB();
	if(NULL == fixtureA || NULL == fixtureB)
	{
		b2Body* body1 = fixtureA->GetBody();
		b2Body* body2 = fixtureB->GetBody();
		if(body1 == mHeroWeaponBody || body2 == mHeroWeaponBody)
		{
			if(body1 == mEdgeGround || body2 == mEdgeGround)
			{

			}
		}
	}
	PhysicsBase::PreSolve(contact, oldManifold);
}