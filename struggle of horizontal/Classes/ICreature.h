#pragma once

#include "cocos2d.h"
#include <Box2D/Box2D.h>
#include "object/IPhysicsMovableObject.h"
#include "object/IPhysicsStaticObject.h"

using namespace cocos2d;
using namespace framework;

struct PlayerPhysicsSteeings : public physics::ObjectSettings
{
	PlayerPhysicsSteeings()
	{
		mIsHeroDorping = false;
		mIsOriJump = false;
	}
	bool mIsHeroDorping;
	bool mIsOriJump;
};

class ICreatue
{
public:
	ICreatue(b2World* pWorld)
	{
		mWorld = pWorld;
		mHeroWeaponBody = NULL;
		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(25, 15);
			mMoveBody = mWorld->CreateBody(&bd);
			b2PolygonShape shape;
			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 10.0f;
			fd.friction = 1.0f;
			shape.SetAsBox(0.3f, 0.1f, b2Vec2(0, 0), 0.0);
			mMoveBody->CreateFixture(&fd);
			mMoveBody->SetFixedRotation(true); // 设置为固定角度（不旋转）
		}
		mMoveDir = 0;
		mMoveSpeed = 0;
	}
	virtual ~ICreatue()
	{

	}

	virtual const CCPoint& getMovedBodyPos()
	{
		static CCPoint finalPos;
		b2Vec2 heroPos = mMoveBody->GetWorldCenter();
		const b2Fixture* fixture = mMoveBody->GetFixtureList();
		const b2AABB& aabb = fixture->GetAABB(0);
		finalPos = CCPoint((heroPos.x - (aabb.upperBound.x - aabb.lowerBound.x)/2.0f) * PTM_RATIO, (heroPos.y - (aabb.upperBound.y - aabb.lowerBound.y)/2.0f) * PTM_RATIO);
		return finalPos;
	}
	virtual void move(float dir, float speed)
	{
		mMoveDir = dir;
		mMoveSpeed = speed;
	}
	virtual void Step(physics::ObjectSettings* settings)
	{
		if(NULL == settings)
			return;
		const PlayerPhysicsSteeings* pPlayerSettings = dynamic_cast<const PlayerPhysicsSteeings*>(settings);
		if(NULL != pPlayerSettings)
		{
			b2Vec2 vel = mMoveBody->GetLinearVelocity();
			//if(vel.y <= 0.001f && vel.y >= -0.001f)
			//	vel.y = 1.0f; 
			if(fabs(mMoveDir) > 0.001f)
			{
				vel.x = mMoveDir * mMoveSpeed / PTM_RATIO + mMoveDir;
				if(pPlayerSettings->mIsHeroDorping && pPlayerSettings->mIsOriJump)
					vel.x /= 2.0f;
				mMoveBody->SetLinearVelocity(vel);
			}
			else
			{
				vel.x = 0.0f;
				mMoveBody->SetLinearVelocity(vel);
			}
		}
	}
	b2ContactEdge* getHeroBodyContactList()
	{
		return mMoveBody->GetContactList();
	}

public:
	b2World* mWorld;
	b2Body* mMoveBody;
	b2Body* mHeroWeaponBody;
	float mMoveDir;
	float mMoveSpeed;
};

template<uint8 typeValue, size_t rttiLength>
class DynamicPhysicsCreature : public object::IPhysicsMovableObject<typeValue, rttiLength>, public ICreatue
{
public:
	DynamicPhysicsCreature(const char* ascType, b2World* pWorld) :
		object::IPhysicsMovableObject<typeValue, rttiLength>(ascType),
		ICreatue(pWorld)
	{
	}
	virtual ~DynamicPhysicsCreature(){}
};

//////////////////////////////////////////////////////////////////////////
template<uint8 typeValue, size_t rttiLength>
class StaticPhysicsCreature : public object::IPhysicsStaticObject<typeValue, rttiLength>
{
public:
	StaticPhysicsCreature(const char* ascType) : object::IPhysicsStaticObject<typeValue, rttiLength>(ascType){}
	virtual ~StaticPhysicsCreature(){}

protected:
};