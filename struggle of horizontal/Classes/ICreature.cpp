#include "ICreature.h"
#include "Monster.h"
#include "LocalPlayer.h"
#include "Model_CreatureHeader.h"
#include "ViewModel_CreatureHeader.h"

ICreature::ICreature(b2World* pWorld)
{
	mWorld = pWorld;
	mMoveBody = NULL;
	mWeaponBody = NULL;
	mBodyBody = NULL;
	mAttacking = false;
	mBeAttacking = false;
	mDeathing = false;
	mSkilling = false;
	mBeAttackTimeout = 0.0f;
	mComboCountdownTimer = 1000.0f;
	mNowComboCount = 0;
	mFaceNormal = Point::ZERO;
	mAnimView = NULL;
	mFaceNormal.x = 1.0f;
}
ICreature::~ICreature()
{
	CreatureHeaderViewModel::point()->removeCreatureHeader(this);
}
bool ICreature::initWithBox(const Point& pos, const Size& size, bool showTitle)
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
		mMoveBody->SetFixedRotation(true); // 设置为固定角度（不旋转）
	}
	if(showTitle)
		CreatureHeaderViewModel::point()->addCreatureHeader(this);
	return true;
}
void ICreature::updateTimer(float dt)
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
const CCPoint& ICreature::getMovedBodyPos()
{
	static CCPoint finalPos;
	b2Vec2 heroPos = mMoveBody->GetWorldCenter();
	const b2Fixture* fixture = mMoveBody->GetFixtureList();
	const b2AABB& aabb = fixture->GetAABB(0);
	finalPos = CCPoint((heroPos.x - (aabb.upperBound.x - aabb.lowerBound.x)/2.0f) * PTM_RATIO, (heroPos.y - (aabb.upperBound.y - aabb.lowerBound.y)/2.0f) * PTM_RATIO);
	return finalPos;
}
void ICreature::move(float dir, float speed)
{
	mMoveDir.x = dir;
	mMoveSpeed.x = speed;
}
void ICreature::updateBody(physics::ObjectSettings* settings)
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
		if(fabs(mMoveDir.x) > 0.001f)
		{
			vel.x = mMoveDir.x * mMoveSpeed.x / PTM_RATIO + mMoveDir.x;
			//vel.y = mMoveDir.y * mMoveSpeed.y / PTM_RATIO + mMoveDir.y;
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
b2ContactEdge* ICreature::getHeroBodyContactList()
{
	return mMoveBody->GetContactList();
}
bool ICreature::isAttacking()
{
	return mAttacking;
}
bool ICreature::isBeAttacking()
{
	return mBeAttacking;
}
bool ICreature::isClobber()
{
	static const std::string clobber1 = "clobber01";
	std::string act = mAnimView->getAnimation()->getCurrentMovementID();
	return act == clobber1;
}
bool ICreature::isDeathing()
{
	return mDeathing;
}

void ICreature::setModel(CreatureHeaderModel* pModel)
{
	mModel = pModel;
}
CreatureHeaderModel* ICreature::getModel() const
{
	return mModel;
}
void ICreature::onCreaturePosChanged(const Point& pos)
{
	if(NULL != mModel)
		mModel->Position = pos;
}

void ICreature::setFaceNormalX(float dirX)
{
	this->setFaceNormal(dirX, mFaceNormal.y);
}
void ICreature::setFaceNormalY(float dirY)
{
	this->setFaceNormal(mFaceNormal.x, dirY);
}
void ICreature::setFaceNormal(float dirX, float dirY)
{
	mFaceNormal.x = dirX;
	mFaceNormal.y = dirY;
	if(mFaceNormal.x >= 0.0f)
		mAnimView->setRotationY(0.0f);
	else if(mFaceNormal.x < 0.0f)
		mAnimView->setRotationY(180.0f);
}
float ICreature::getFaceNormalX() const
{
	return mFaceNormal.x;
}
float ICreature::getFaceNormalY() const
{
	return mFaceNormal.y;
}
const CCPoint& ICreature::getFaceNormal() const
{
	return mFaceNormal;
}

cocostudio::Armature* ICreature::getAnimView() const
{
	return mAnimView;
}

void ICreature::changeAnimAction(const std::string& actionName)
{
	static const std::string stand1 = "stand01";
	static const std::string run1 = "run01";
	static const std::string jumping1 = "jumping01";
	static const std::string jumpup1 = "jumpup01";
	static const std::string landdown1 = "landdown01";
	static const std::string attack1 = "attack01";
	static const std::string attack2 = "attack02";
	static const std::string attack3 = "attack03";
	static const std::string death1 = "death01";
	static const std::string beattack1 = "beattack01";
	static const std::string clobber1 = "clobber01";
	static const std::string assault1 = "assault01";
	static const std::string jumpattack1 = "jumpattack01";
	cocostudio::ArmatureAnimation* pAnim = mAnimView->getAnimation();
	const std::string& nowActionName = pAnim->getCurrentMovementID();
	if(nowActionName == actionName)
		return;
	std::string playActName = actionName;
	if(actionName == "attack")
	{
		if(0 == mNowComboCount)
			playActName = attack1;
		else if(1 == mNowComboCount)
			playActName = attack2;
		else if(2 == mNowComboCount)
			playActName = attack3;
	}
	if(nowActionName == attack1 || nowActionName == attack2 || nowActionName == attack3 ||
		nowActionName == assault1 || nowActionName == jumpattack1)
	{
		if(NULL != mWeaponBody)
		{
			mWorld->DestroyBody(mWeaponBody);
			mWeaponBody = NULL;
		}
	}
	if(nowActionName == playActName)
		return;
	if(actionName == "attack")
	{
		if(playActName == attack3)
			mNowComboCount = 0;
		else
			mNowComboCount ++;
		mComboCountdownTimer = 1.0f + 0.1f;
	}
	pAnim->play(playActName.c_str());
}