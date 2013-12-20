#include "Physics_GameScene.h"
#include "cocos2d.h"
#include "luaext/LuaHelper.h"

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
		shape.SetAsBox(0.3f, 0.1f, b2Vec2(0, 0), 0.0);
		mHeroBody->CreateFixture(&fd);
		mHeroBody->SetFixedRotation(true); // 设置为固定角度（不旋转）
	}
	mHeroMoveDir = 0;
	mHeroMoveSpeed = 0;
	mIsHeroDorping = false;
	mIsOriJump = true;
	mIsJumping = false;
	mJumpState = JumpState::none;
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

const CCPoint& GameScenePhysics::getHeroBodyPos()
{
	static CCPoint finalPos;
	b2Vec2 heroPos = mHeroBody->GetWorldCenter();
	const b2Fixture* fixture = mHeroBody->GetFixtureList();
	const b2AABB& aabb = fixture->GetAABB(0);
	finalPos = CCPoint((heroPos.x - (aabb.upperBound.x - aabb.lowerBound.x)/2.0f) * PTM_RATIO, (heroPos.y - (aabb.upperBound.y - aabb.lowerBound.y)/2.0f) * PTM_RATIO);
	return finalPos;
}

void GameScenePhysics::changeMoveDirection(float dir, float speed)
{
	mHeroMoveDir = dir;
	mHeroMoveSpeed = speed;
}

void GameScenePhysics::setIsHeroDorping(bool b)
{
	if(mIsHeroDorping)
	{
		if(!b)
			mIsOriJump = true;
	}
	else if(b)
	{
		mIsJumping = true;
	}
	mIsHeroDorping = b;
}
bool GameScenePhysics::getIsHeroDorping()
{
	return mIsHeroDorping;
}
void GameScenePhysics::jump(float speed)
{
	if(mIsHeroDorping || mIsJumping)
		return;
	b2Vec2 vel = mHeroBody->GetLinearVelocity();
	vel.y = speed;
	mHeroBody->SetLinearVelocity(vel);
	if(fabs(mHeroMoveDir) > 0.001f)
		mIsOriJump = false;
	mIsJumping = true;
}

b2ContactEdge* GameScenePhysics::getHeroBodyContactList()
{
	return mHeroBody->GetContactList();
}

void GameScenePhysics::Step(Settings* settings)
{
	b2Vec2 vel = mHeroBody->GetLinearVelocity();
	//if(vel.y <= 0.001f && vel.y >= -0.001f)
	//	vel.y = 1.0f; 
	if(fabs(mHeroMoveDir) > 0.001f)
	{
		vel.x = mHeroMoveDir * mHeroMoveSpeed / PTM_RATIO + mHeroMoveDir;
		if(mIsHeroDorping && mIsOriJump)
			vel.x /= 2.0f;
		mHeroBody->SetLinearVelocity(vel);
	}
	else
	{
		vel.x = 0.0f;
		mHeroBody->SetLinearVelocity(vel);
	}
	if(mIsJumping)
	{
		mHeroBody->SetFixedRotation(true); // 起跳后设置为固定角度（不旋转），否则会产生多余的位移
		if(!mWorld->IsLocked())
		{
			b2Vec2 pos = mHeroBody->GetWorldCenter();
			mHeroBody->SetTransform(pos, 0.0f);
		}
	}
	PhysicsBase::Step(settings);
}

void GameScenePhysics::PreSolve(b2Contact* contact, const b2Manifold* oldManifold)
{
	PhysicsBase::PreSolve(contact, oldManifold);
	const b2Manifold* manifold = contact->GetManifold();
	if (manifold->pointCount <= 0)
		return;
	b2Fixture* fixtureA = contact->GetFixtureA();
	b2Fixture* fixtureB = contact->GetFixtureB();
	if(NULL != fixtureA && NULL != fixtureB)
	{
		b2Body* body1 = fixtureA->GetBody();
		b2Body* body2 = fixtureB->GetBody();
		if(body1 == mHeroBody || body2 == mHeroBody)
		{
			contact->SetEnabled(true);
			bool isLand = false;
			for(PhysicsBodyList::iterator it = mLandList.begin();
				it != mLandList.end(); ++ it)
			{
				isLand = (body1 == *it) || (body2 == *it);
				if(isLand)
					break;
			}
			if(isLand)
			{
				if(mIsJumping)
				{
					b2Vec2 vel = mHeroBody->GetLinearVelocity();
					if(vel.y > 0)
						contact->SetEnabled(false);
					else
					{
						mIsJumping = false;
						mHeroBody->SetFixedRotation(false); // 行走时设为旋转，否则根据body的形状会有不同频率的抖动
					}
				}
			}
			else
			{
				callLuaFuncNoResult("LUAGameScenePhysicsHeroHitWall");
				mHeroBody->SetFixedRotation(true); // 起跳后设置为固定角度（不旋转），否则会产生多余的位移
				if(!mWorld->IsLocked())
				{
					b2Vec2 pos = mHeroBody->GetWorldCenter();
					mHeroBody->SetTransform(pos, 0.0f);
				}
			}
		}
	}
}

void GameScenePhysics::BeginContact(b2Contact* contact)
{
}

void GameScenePhysics::EndContact(b2Contact* contact)
{
}