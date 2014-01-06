#pragma once

#include "cocos2d.h"
#include <Box2D/Box2D.h>
#include "object/IPhysicsMovableObject.h"
#include "object/IPhysicsStaticObject.h"

using namespace cocos2d;
using namespace framework;

class CreatureHeaderModel;

struct CreaturePhysicsSteeings : public physics::ObjectSettings
{
	CreaturePhysicsSteeings()
	{
		mIsHeroDorping = false;
		mIsOriJump = false;
		mUsingVerticeCount = 0;
	}
	bool mIsHeroDorping;
	bool mIsOriJump;
	b2Vec2 mVertices[b2_maxPolygonVertices];
	int8 mUsingVerticeCount;
};

class ICreatue
{
public:
	static const int MoveBodyContactMask = 0x0002;
	static const int WeaponBodyContactMask = 0x0004;
	static const int BodyBodyContactMask = 0x0008;
	static const int LandContactMask = 0x0010;
	static const int WallContactMask = 0x0020;
	ICreatue(b2World* pWorld);
	virtual ~ICreatue();
	template<class T>
	static T* createWithBox(b2World* pWorld, const Point& pos, const Size& size)
	{
		T* pRet = new T(pWorld);
		if(NULL != pRet)
		{
			if(!pRet->init() || !pRet->initWithBox(pos, size))
			{
				delete pRet;
				return NULL;
			}
			return pRet;
		}
		return NULL;
	}
	virtual bool initWithBox(const Point& pos, const Size& size);
	virtual const CCPoint& getMovedBodyPos();
	virtual void move(float dir, float speed);
	virtual void updateBody(physics::ObjectSettings* settings);
	b2ContactEdge* getHeroBodyContactList();
	bool isAttacking();
	bool isBeAttacking();
	bool isDeathing();
	const Point& getPosition();

	void updateTimer(float dt);

	void setModel(CreatureHeaderModel* pModel);
	CreatureHeaderModel* getModel() const;
	void onCreaturePosChanged(const Point& pos);

public:
	b2World* mWorld;
	b2Body* mMoveBody;
	b2Body* mWeaponBody;
	b2Body* mBodyBody;
	float mMoveDir;
	float mMoveSpeed;

protected:
	bool mAttacking;
	bool mBeAttacking;
	bool mDeathing;
	float mBeAttackTimeout;
	CreatureHeaderModel* mModel;

	bool mAttackActBegining;
};

template<uint8 typeValue, size_t rttiLength>
class DynamicPhysicsCreature : public ICreatue, public object::IPhysicsMovableObject<typeValue, rttiLength>
{
public:
	DynamicPhysicsCreature(const char* ascType, b2World* pWorld) :
		ICreatue(pWorld),
		object::IPhysicsMovableObject<typeValue, rttiLength>(ascType)
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