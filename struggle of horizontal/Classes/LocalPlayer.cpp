#include "LocalPlayer.h"
#include "luaext/LuaHelper.h"
#include "math/cmMath.h"
#include "ViewModel_GameScene.h"
#include "ViewModel_CreatureHeader.h"
#include "Monster.h"
#include "Model_CreatureHeader.h"

using namespace framework;

LocalPlayer* LocalPlayer::mInstance = NULL;
LocalPlayer::LocalPlayer(b2World* pWorld) :
	SuperT(object::ObjectType::TN_LocalPlayer, pWorld),
	JumpDelegate(this)
{
	mInstance = this;
	mAnimView = NULL;
	mDeathTimer = 0.0f;
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
	CCDirector::getInstance()->getScheduler()->scheduleSelector(schedule_selector(LocalPlayer::recoverHPTimer), this, 30, false);
	CCDirector::getInstance()->getScheduler()->scheduleSelector(schedule_selector(LocalPlayer::onDeathTimer), this, 0, false);
	CreatureHeaderViewModel::point()->addCreatureHeader(this);

	return true;
}
bool LocalPlayer::finalize()
{
	CreatureHeaderViewModel::point()->removeCreatureHeader(this);
	CCDirector::getInstance()->getScheduler()->unscheduleSelector(schedule_selector(LocalPlayer::comboTimer), this);
	CCDirector::getInstance()->getScheduler()->unscheduleSelector(schedule_selector(LocalPlayer::recoverHPTimer), this);
	CCDirector::getInstance()->getScheduler()->unscheduleSelector(schedule_selector(LocalPlayer::onDeathTimer), this);

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
void LocalPlayer::recoverHPTimer(float dt)
{
	if(NULL != mModel)
	{
		mModel->NowHP = mModel->MaxHP;
		this->updateHPView();
	}
}
void LocalPlayer::onDeathTimer(float dt)
{
	if(!mDeathing)
		return;
	if(mDeathTimer >= 7.5f)
	{
		mDeathTimer = 0.0f;
		mDeathing = false;
		mAnimView->setOpacity(255);
		this->recoverHPTimer(30.0f);
		callLuaFuncNoResult("LUAGameSceneView_LocalPlayerRelive");
		if(NULL != mModel)
			mModel->Visible = true;
		return;
	}
	mDeathTimer += dt;
	if(mDeathTimer >= 2.0f && mDeathTimer <= 2.5f)
	{
		float alpha = (mDeathTimer - 2.0f) * 2;
		GLbyte opacity = GLbyte(255.0f * (1.0f-alpha));
		if(opacity < 0) opacity = 0;
		if(opacity > 255) opacity = 255;
		mAnimView->setOpacity(opacity);
	}
	else if(mDeathTimer > 2.5f && mDeathTimer < 7.0f)
	{
		mAnimView->setOpacity(0);
		mAnimView->setVisible(false);
	}
	else if(mDeathTimer >= 7.0f && mDeathTimer <= 7.5f)
	{
		mAnimView->setVisible(true);
		float alpha = (mDeathTimer - 7.0f) * 2;
		GLbyte opacity = GLbyte(255.0f * alpha);
		if(opacity < 0) opacity = 0;
		if(opacity > 255) opacity = 255;
		mAnimView->setOpacity(opacity);
	}
}
void LocalPlayer::updateHPView()
{

}
void LocalPlayer::setAnimView(cocostudio::Armature* anim)
{
	mAnimView = anim;
	mAnimView->getAnimation()->setFrameEventCallFunc(this, frameEvent_selector(LocalPlayer::onFrameEvent));
	mAnimView->getAnimation()->setMovementEventCallFunc(this, movementEvent_selector(LocalPlayer::animationEvent));
}
void LocalPlayer::beAttacked(ICreatue* who, const Point& hitPos, bool clobber)
{
	mBeAttacking = true;
	if(NULL != mModel)
	{
		int lostHP = 500 + (rand()%500);
		mModel->NowHP -= lostHP;
		this->updateHPView();
		callLuaFuncNoResult("LUAGameSceneView_LocalPlayerBeAttackedEffect", lostHP, hitPos.x, hitPos.y);
		if(mModel->NowHP <= 0)
		{
			this->onDeath();
			return;
		}
	}
	if(clobber)
	{
		Point otherPos = who->getMovedBodyPos();
		Point myPos = this->getMovedBodyPos();
		if(otherPos.x < myPos.x)
		{
			this->setFaceNormalX(-1.0f);
		}
		else
		{
			this->setFaceNormalX(1.0f);
		}
	}
	callLuaFuncNoResult("LUAGameSceneView_LocalPlayerBeAttacked", clobber);
}
void LocalPlayer::onDeath()
{
	mDeathing = true;
	callLuaFuncNoResult("LUAGameSceneView_LocalPlayerDeath");
	if(NULL != mModel)
		mModel->Visible = false;
}
void LocalPlayer::onFrameEvent(cocostudio::Bone *bone, const char *evt, int originFrameIndex, int currentFrameIndex)
{
	if(std::string(evt) == "attack_begin")
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
		mWeaponBody->SetUserData(this);
		return;
	}
	else if(std::string(evt) == "attack_ended")
	{
		if(NULL != mWeaponBody)
		{
			mWorld->DestroyBody(mWeaponBody);
			mWeaponBody = NULL;
		}
		return;
	}
	else if(std::string(evt) == "clobber_ended")
	{
		this->move(0.0, 0.0);
		return;
	}
}
void LocalPlayer::animationEvent(cocostudio::Armature *armature, cocostudio::MovementEventType movementType, const char *movementID)
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
	static const std::string cutmoon1 = "cutmoon01";
	if(movementType == cocostudio::COMPLETE)
	{
		if(attack1 == movementID || attack2 == movementID || attack3 == movementID || cutmoon1 == movementID)
		{
			if(NULL != mWeaponBody)
			{
				mWorld->DestroyBody(mWeaponBody);
				mWeaponBody = NULL;
			}
			callLuaFuncNoResult("LUAGameSceneView_LocalPlayerAttackAnimEnded");
			mAttacking = false;
		}
		else if(beattack1 == movementID || clobber1 == movementID)
		{
			callLuaFuncNoResult("LUAGameSceneView_LocalPlayerBeAttackAnimEnded", clobber1 == movementID);
			mBeAttacking = false;
		}
		else if(assault1 == movementID)
		{
			if(NULL != mWeaponBody)
			{
				mWorld->DestroyBody(mWeaponBody);
				mWeaponBody = NULL;
			}
		}
		else if(death1 == movementID)
		{
			mDeathTimer = 0.0f;
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
	if(this->isDeathing())
		return;
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
		if(this->getFaceNormalX() < 0.0f)
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
			fd.filter.maskBits = WeaponBodyContactMask | SkillBodyContactMask;
			mBodyBody->CreateFixture(&fd);
			mBodyBody->SetUserData(this);
		}
	}
	if(NULL != mWeaponBody)
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
			if(this->getFaceNormalX() < 0.0f)
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
			b2Fixture* fixture = mWeaponBody->GetFixtureList();
			while(NULL != fixture)
			{
				b2Fixture* destroyFixture = fixture;
				fixture = fixture->GetNext();
				mWeaponBody->DestroyFixture(destroyFixture);
			}
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
	if(this->isDeathing())
		return;
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
					Point hitPos(0,0);
					b2Shape* pShapeA = pContact->contact->GetFixtureA()->GetShape();
					b2Shape* pShapeB = pContact->contact->GetFixtureB()->GetShape();
					if(pShapeA->GetType() == b2Shape::e_polygon && pShapeB->GetType() == b2Shape::e_polygon)
					{
						b2PolygonShape* pPolShapeA = static_cast<b2PolygonShape*>(pShapeA);
						b2PolygonShape* pPolShapeB = static_cast<b2PolygonShape*>(pShapeB);
						if(pContact->contact->GetFixtureA()->GetBody() == mWeaponBody)
						{
							if(pPolShapeB->GetVertexCount() == 3)
							{
								b2Vec2* vertexs = pPolShapeB->m_vertices;
								hitPos = Point(vertexs[0].x * PTM_RATIO, vertexs[0].y * PTM_RATIO);
							}
						}
						else if(pContact->contact->GetFixtureB()->GetBody() == mWeaponBody)
						{
							if(pPolShapeA->GetVertexCount() == 3)
							{
								b2Vec2* vertexs = pPolShapeA->m_vertices;
								hitPos = Point(vertexs[0].x * PTM_RATIO, vertexs[0].y * PTM_RATIO);
							}
						}
					}
					//if(NULL != mWeaponBody)
					//{
					//	mWorld->DestroyBody(mWeaponBody);
					//	mWeaponBody = NULL;
					//}
					static const std::string attack3 = "attack03";
					static const std::string assault1 = "assault01";
					cocostudio::ArmatureAnimation* pAnim = mAnimView->getAnimation();
					const std::string& nowActionName = pAnim->getCurrentMovementID();
					pBeAttackedMonst->beAttacked(this, hitPos, (nowActionName == attack3) || (nowActionName == assault1));
				}
				else
				{
				}
			}
		}
	}
}
//
//void LocalPlayer::doSkillWithAnimView(cocostudio::Armature* animView)
//{
//	Node* pParentNode = mAnimView->getParent();
//	Point pos = mAnimView->getPosition();
//	animView->setPosition(pos);
//	pParentNode->addChild(animView, 102, 102);
//	if(mFaceNormal.x < 0)
//		animView->setRotationY(180.0f);
//}