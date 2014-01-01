#include "LocalPlayer.h"
#include "luaext/LuaHelper.h"
#include "math/Math.h"
#include "ViewModel_GameScene.h"
#include "Monster.h"

using namespace framework;

LocalPlayer* LocalPlayer::mInstance = NULL;
LocalPlayer::LocalPlayer(b2World* pWorld) :
	SuperT(object::ObjectType::TN_LocalPlayer, pWorld),
	JumpDelegate(this)
{
	mInstance = this;
	mAnimView = NULL;
	mComboCountdownTimer = 1000.0f;
	mNowComboCount = 0;
}
LocalPlayer::~LocalPlayer()
{
	mInstance = NULL;
}
LocalPlayer* LocalPlayer::create(b2World* pWorld)
{
	if(NULL == mInstance)
		new LocalPlayer(pWorld);
	if(!mInstance->init())
	{
		delete mInstance;
		return NULL;
	}
	return mInstance;
}
void LocalPlayer::destory()
{
	delete LocalPlayer::instance();
}
LocalPlayer* LocalPlayer::instance()
{
	return mInstance;
}
bool LocalPlayer::init()
{		
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
		fd.filter.categoryBits = ICreatue::MoveBodyContactMask;
		fd.filter.maskBits = ICreatue::LandContactMask | ICreatue::WallContactMask;
		shape.SetAsBox(0.3f, 0.1f, b2Vec2(0, 0), 0.0);
		mMoveBody->CreateFixture(&fd);
		mMoveBody->SetFixedRotation(true); // 设置为固定角度（不旋转）
	}
	CCDirector::getInstance()->getScheduler()->scheduleSelector(schedule_selector(LocalPlayer::comboTimer), this, 0, false);
	return true;
}
bool LocalPlayer::finalize()
{
	CCDirector::getInstance()->getScheduler()->unscheduleSelector(schedule_selector(LocalPlayer::comboTimer), this);
	return true;
}
void LocalPlayer::loop(float dt)
{

}
void LocalPlayer::comboTimer(float dt)
{
	this->updateTimer(dt);
	mComboCountdownTimer -= dt;
	if(mComboCountdownTimer <= 0)
	{
		mNowComboCount = 0;
	}
}
void LocalPlayer::setAnimView(cocostudio::Armature* anim)
{
	mAnimView = anim;
	mAnimView->getAnimation()->setFrameEventCallFunc(this, frameEvent_selector(LocalPlayer::onFrameEvent));
	mAnimView->getAnimation()->setMovementEventCallFunc(this, movementEvent_selector(LocalPlayer::animationEvent));
}
void LocalPlayer::beAttacked(ICreatue* who, bool clobber)
{
	mBeAttacking = true;
	callLuaFuncNoResult("LUAGameSceneViewBeAttacked", clobber);
}
void LocalPlayer::onFrameEvent(cocostudio::Bone *bone, const char *evt, int originFrameIndex, int currentFrameIndex)
{
	// weapon box
	b2Vec2 weaponVertices[5];
	for(int i = 0; i < 5; ++ i)
	{
		CCString* pWeaponName = CCString::createWithFormat("weapon%d", i);
		cocostudio::CCBone* pBone = mAnimView->getBone(pWeaponName->getCString());
		if(NULL == pBone)
			return;
		cocostudio::BaseData* pBoneData = pBone->getWorldInfo();
		Point pos = mAnimView->getParent()->convertToWorldSpaceAR(mAnimView->getPosition());
		if(mAnimView->getRotationY() >= 179.0f)
			pos.x -= pBoneData->x;
		else
			pos.x += pBoneData->x;
		pos.y += pBoneData->y;
		Point titledMapPos = GameSceneViewModel::point()->getTiledMap()->getPosition();
		pos.x -= titledMapPos.x;
		pos.y -= titledMapPos.y;
		weaponVertices[i] = b2Vec2(pos.x / PTM_RATIO, pos.y / PTM_RATIO);
	}
	{
		if(NULL != mWeaponBody)
		{
			mWorld->DestroyBody(mWeaponBody);
			mWeaponBody = NULL;
		}
		b2BodyDef bd;
		bd.type = b2_dynamicBody;
		bd.position.Set(0, 0);
		mWeaponBody = mWorld->CreateBody(&bd);
		b2PolygonShape shape1;
		b2PolygonShape shape2;
		shape1.m_vertexCount = 3;
		shape2.m_vertexCount = 3;
		shape1.m_vertices[0] = weaponVertices[0];
		shape1.m_vertices[1] = weaponVertices[1];
		shape1.m_vertices[2] = weaponVertices[2];
		shape2.m_vertices[0] = weaponVertices[0];
		shape2.m_vertices[1] = weaponVertices[4];
		shape2.m_vertices[2] = weaponVertices[3];
		b2FixtureDef fd1, fd2;
		fd1.shape = &shape1;
		fd1.density = 0.0f;
		fd1.friction = 0.0f;
		fd2.shape = &shape2;
		fd2.density = 0.0f;
		fd2.friction = 0.0f;
		fd1.filter.categoryBits = WeaponBodyContactMask;
		fd1.filter.maskBits = BodyBodyContactMask;
		fd2.filter.categoryBits = WeaponBodyContactMask;
		fd2.filter.maskBits = BodyBodyContactMask;
		mWeaponBody->CreateFixture(&fd1);
		mWeaponBody->CreateFixture(&fd2);
		mWeaponBody->SetUserData(this);
	}
}
void LocalPlayer::animationEvent(cocostudio::Armature *armature, cocostudio::MovementEventType movementType, const char *movementID)
{
	static const std::string beattack1 = "beattack01";
	static const std::string clobber1 = "clobber01";
	static const std::string attack1 = "attack01";
	static const std::string attack2 = "attack02";
	if(movementType == cocostudio::COMPLETE)
	{
		if(attack1 == movementID || attack2 == movementID)
		{
			if(NULL != mWeaponBody)
			{
				mWorld->DestroyBody(mWeaponBody);
				mWeaponBody = NULL;
			}
			callLuaFuncNoResult("LUAGameSceneViewAttackAnimEnded");
		}
		else if(beattack1 == movementID || clobber1 == movementID)
		{
			callLuaFuncNoResult("LUAGameSceneViewBeAttackAnimEnded");
			mBeAttacking = false;
		}
	}
}
int LocalPlayer::PhysicsPreSolve(b2Contact* contact, const b2Manifold* oldManifold, const physics::PhysicsBodyList& landList)
{
	int ret = 0;
	b2Fixture* fixtureA = contact->GetFixtureA();
	b2Fixture* fixtureB = contact->GetFixtureB();
	if(NULL != fixtureA && NULL != fixtureB)
	{
		b2Body* body1 = fixtureA->GetBody();
		b2Body* body2 = fixtureB->GetBody();
		if(body1 == mMoveBody || body2 == mMoveBody)
		{
			ret = 1;
			contact->SetEnabled(true);
			bool isLand = false;
			for(physics::PhysicsBodyList::const_iterator it = landList.begin();
				it != landList.end(); ++ it)
			{
				isLand = (body1 == *it) || (body2 == *it);
				if(isLand)
					break;
			}
			if(isLand)
			{
				if(mIsJumping)
				{
					b2Vec2 vel = mMoveBody->GetLinearVelocity();
					if(vel.y > 0)
						contact->SetEnabled(false);
					else
					{
						mIsJumping = false;
						mMoveBody->SetFixedRotation(false); // 行走时设为旋转，否则根据body的形状会有不同频率的抖动
					}
				}
			}
			else
			{
				callLuaFuncNoResult("LUAGameScenePhysicsHeroHitWall");
				mMoveBody->SetFixedRotation(true); // 起跳后设置为固定角度（不旋转），否则会产生多余的位移
				if(!mWorld->IsLocked())
				{
					b2Vec2 pos = mMoveBody->GetWorldCenter();
					mMoveBody->SetTransform(pos, 0.0f);
				}
			}
		}
	}
	return ret;
}
void LocalPlayer::StepBefore(physics::ObjectSettings* settings)
{
	static CreaturePhysicsSteeings playerSettings;	
	playerSettings.mIsHeroDorping = mIsHeroDorping;
	playerSettings.mIsOriJump = mIsOriJump;
	playerSettings.mUsingVerticeCount = 8;
	for(int i = 0; i < 8; ++ i)
	{
		CCString* pBodyName = CCString::createWithFormat("body%d", i);
		cocostudio::CCBone* pBone = mAnimView->getBone(pBodyName->getCString());
		if(NULL == pBone)
			continue;
		cocostudio::BaseData* pBoneData = pBone->getWorldInfo();
		Point pos = mAnimView->getParent()->convertToWorldSpaceAR(mAnimView->getPosition());
		if(mAnimView->getRotationY() >= 179.0f)
			pos.x -= pBoneData->x;
		else
			pos.x += pBoneData->x;
		pos.y += pBoneData->y;
		Point titledMapPos = GameSceneViewModel::point()->getTiledMap()->getPosition();
		pos.x -= titledMapPos.x;
		pos.y -= titledMapPos.y;
		playerSettings.mVertices[i] = b2Vec2(pos.x / PTM_RATIO, pos.y / PTM_RATIO);
	}
	// body box
	if(NULL != mBodyBody)
	{
		mWorld->DestroyBody(mBodyBody);
		mBodyBody = NULL;
	}
	CreaturePhysicsSteeings* pSettings = &playerSettings;
	if(pSettings->mUsingVerticeCount > 0)
	{
		b2BodyDef bd;
		bd.type = b2_staticBody;
		bd.position.Set(0, 0);
		mBodyBody = mWorld->CreateBody(&bd);
		for(int i = 0; i < pSettings->mUsingVerticeCount/2; ++ i)
		{
			b2PolygonShape shape;
			shape.m_vertexCount = 3;
			shape.m_vertices[0] = pSettings->mVertices[0+i*2];
			shape.m_vertices[1] = pSettings->mVertices[1+i*2];
			if(2+i*2 >= pSettings->mUsingVerticeCount)
				shape.m_vertices[2] = pSettings->mVertices[0];
			else
				shape.m_vertices[2] = pSettings->mVertices[2+i*2];
			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 0.0f;
			fd.friction = 0.0f;
			fd.filter.categoryBits = BodyBodyContactMask;
			fd.filter.maskBits = WeaponBodyContactMask;
			mBodyBody->CreateFixture(&fd);
			mBodyBody->SetUserData(this);
		}
	}
	if(mIsJumping)
	{
		mMoveBody->SetFixedRotation(true); // 起跳后设置为固定角度（不旋转），否则会产生多余的位移
		if(!mWorld->IsLocked())
		{
			b2Vec2 pos = mMoveBody->GetWorldCenter();
			mMoveBody->SetTransform(pos, 0.0f);
		}
	}
	if(NULL != mWeaponBody)
		mWeaponBody->SetLinearVelocity(b2Vec2(0,1));
	ICreatue::updateBody(&playerSettings);
	
}
void LocalPlayer::StepAfter()
{
	if(NULL != mWeaponBody)
	{
		b2ContactEdge* pContact = mWeaponBody->GetContactList();
		if(NULL != pContact)
		{
			unity::object* pObject = static_cast<unity::object*>(pContact->other->GetUserData());
			if(this != pObject)
			{
				Monster* pBeAttackedMonst = dynamic_cast<Monster*>(pObject);
				if(NULL != pBeAttackedMonst && !pBeAttackedMonst->isBeAttacking() && !pBeAttackedMonst->isDeathing())
				{
					if(mNowComboCount == 2)
					{
						pBeAttackedMonst->beAttacked(this, true);
						mNowComboCount = 0;
						mComboCountdownTimer = 1.0f + 1.0f;
					}
					else
					{
						pBeAttackedMonst->beAttacked(this);
						mNowComboCount ++;
						mComboCountdownTimer = 1.0f + 1.0f;
					}
				}
				else
				{
				}
			}
		}
	}
}