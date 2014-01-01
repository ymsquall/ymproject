#include "ICreature.h"
#include "Monster.h"
#include "LocalPlayer.h"

ICreatue::ICreatue(b2World* pWorld)
{
	mWorld = pWorld;
	mMoveBody = NULL;
	mWeaponBody = NULL;
	mBodyBody = NULL;
	mMoveDir = 0;
	mMoveSpeed = 0;
	mAttacking = false;
	mBeAttacking = false;
	mDeathing = false;
	mBeAttackTimeout = 0.0f;
	mMaxHP = 8000;
	mNowHP = mMaxHP;
}
ICreatue::~ICreatue()
{

}
bool ICreatue::initWithBox(const Point& pos, const Size& size)
{
	{
		b2BodyDef bd;
		bd.type = b2_dynamicBody;
		bd.position.Set(pos.x / PTM_RATIO, pos.y / PTM_RATIO);
		mMoveBody = mWorld->CreateBody(&bd);
		b2PolygonShape shape;
		b2FixtureDef fd;
		fd.shape = &shape;
		fd.density = 10.0f;
		fd.friction = 1.0f;
		fd.filter.categoryBits = MoveBodyContactMask;
		fd.filter.maskBits = LandContactMask | WallContactMask;
		shape.SetAsBox(size.width / 2.0f / PTM_RATIO, size.height / 2.0f / PTM_RATIO, b2Vec2(0, 0), 0.0);
		mMoveBody->CreateFixture(&fd);
		mMoveBody->SetFixedRotation(true); // ����Ϊ�̶��Ƕȣ�����ת��
	}
	return true;
}
void ICreatue::updateTimer(float dt)
{
	if(this->isBeAttacking())
	{
		mBeAttackTimeout += dt;
		if(mBeAttackTimeout >= 1.0f)
		{
			mBeAttacking = false;
			mBeAttackTimeout = 0.0f;
		}
	}
	else
		mBeAttackTimeout = 0.0f;
}
const CCPoint& ICreatue::getMovedBodyPos()
{
	static CCPoint finalPos;
	b2Vec2 heroPos = mMoveBody->GetWorldCenter();
	const b2Fixture* fixture = mMoveBody->GetFixtureList();
	const b2AABB& aabb = fixture->GetAABB(0);
	finalPos = CCPoint((heroPos.x - (aabb.upperBound.x - aabb.lowerBound.x)/2.0f) * PTM_RATIO, (heroPos.y - (aabb.upperBound.y - aabb.lowerBound.y)/2.0f) * PTM_RATIO);
	return finalPos;
}
void ICreatue::move(float dir, float speed)
{
	mMoveDir = dir;
	mMoveSpeed = speed;
}
void ICreatue::updateBody(physics::ObjectSettings* settings)
{
	if(NULL == settings)
		return;
	const CreaturePhysicsSteeings* pSettings = dynamic_cast<const CreaturePhysicsSteeings*>(settings);
	if(NULL != pSettings)
	{
		//if(NULL != mBodyBody)
		//{
		//	mWorld->DestroyBody(mBodyBody);
		//	mBodyBody = NULL;
		//}
		//if(pSettings->mUsingVerticeCount > 0)
		//{
		//	b2BodyDef bd;
		//	bd.type = b2_staticBody;
		//	bd.position.Set(0, 0);
		//	mBodyBody = mWorld->CreateBody(&bd);
		//	for(int i = 0; i < pSettings->mUsingVerticeCount/2; ++ i)
		//	{
		//		b2PolygonShape shape;
		//		shape.m_vertexCount = 3;
		//		shape.m_vertices[0] = pSettings->mVertices[0+i*2];
		//		shape.m_vertices[1] = pSettings->mVertices[1+i*2];
		//		if(2+i*2 >= pSettings->mUsingVerticeCount)
		//			shape.m_vertices[2] = pSettings->mVertices[0];
		//		else
		//			shape.m_vertices[2] = pSettings->mVertices[2+i*2];
		//		b2FixtureDef fd;
		//		fd.shape = &shape;
		//		fd.density = 0.0f;
		//		fd.friction = 0.0f;
		//		fd.filter.categoryBits = BodyBodyContactMask;
		//		fd.filter.maskBits = WeaponBodyContactMask;
		//		mBodyBody->CreateFixture(&fd);
		//		mBodyBody->SetUserData(this);
		//	}
		//}
		b2Vec2 vel = mMoveBody->GetLinearVelocity();
		if(fabs(mMoveDir) > 0.001f)
		{
			vel.x = mMoveDir * mMoveSpeed / PTM_RATIO + mMoveDir;
			if(pSettings->mIsHeroDorping && pSettings->mIsOriJump)
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
b2ContactEdge* ICreatue::getHeroBodyContactList()
{
	return mMoveBody->GetContactList();
}
bool ICreatue::isAttacking()
{
	return mAttacking;
}
bool ICreatue::isBeAttacking()
{
	return mBeAttacking;
}
bool ICreatue::isDeathing()
{
	return mDeathing;
}