#include "Monster.h"
#include "luaext/LuaHelper.h"
#include "ViewModel_GameScene.h"
#include "LocalPlayer.h"
#include "Model_CreatureHeader.h"

Monster::Monster(b2World* pWorld) :
	SuperT(object::ObjectType::TN_Monster, pWorld),
	JumpDelegate(this)
{
	mActiveAttackTimer = 3.0f + float(rand() % 3);
	mAICanActiveAttacked = 0;
	mDeathTimer = 0.0f;
}
Monster::~Monster()
{

}
bool Monster::init()
{
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUAGameSceneView_Monster_init", this);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;
	mAnimView = (cocostudio::Armature*)userdata.value.pointer;
	if(NULL != mAnimView)
	{
		mAnimView->getAnimation()->setFrameEventCallFunc(this, frameEvent_selector(Monster::onFrameEvent));
		mAnimView->getAnimation()->setMovementEventCallFunc(this, movementEvent_selector(Monster::animationEvent));
		CCDirector::getInstance()->getScheduler()->scheduleSelector(schedule_selector(Monster::simpleAITimer), this, 0, false);
		CCDirector::getInstance()->getScheduler()->scheduleSelector(schedule_selector(Monster::recoverHPTimer), this, 30, false);
		CCDirector::getInstance()->getScheduler()->scheduleSelector(schedule_selector(Monster::onDeathTimer), this, 0, false);
		return true;
	}
	return false;
}
bool Monster::finalize()
{
	CCDirector::getInstance()->getScheduler()->unscheduleSelector(schedule_selector(Monster::simpleAITimer), this);
	CCDirector::getInstance()->getScheduler()->unscheduleSelector(schedule_selector(Monster::recoverHPTimer), this);
	CCDirector::getInstance()->getScheduler()->unscheduleSelector(schedule_selector(Monster::onDeathTimer), this);
	return true;
}
void Monster::loop(float dt)
{

}
void Monster::simpleAITimer(float dt)
{
	this->updateTimer(dt);
	if(!this->isBeAttacking())
	{
		mActiveAttackTimer -= dt;
		if(mActiveAttackTimer <= 0)
		{
			mAICanActiveAttacked = 3;
			mActiveAttackTimer = 3.0f + float(rand() % 3);
		}
	}
}
void Monster::recoverHPTimer(float dt)
{
	if(NULL != mModel)
	{
		mModel->NowHP = mModel->MaxHP;
		this->updateHPView();
	}
}
void Monster::updateHPView()
{

}
void Monster::onFrameEvent(cocostudio::Bone *bone, const char *evt, int originFrameIndex, int currentFrameIndex)
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
void Monster::animationEvent(cocostudio::Armature *armature, cocostudio::MovementEventType movementType, const char *movementID)
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
	if(movementType == cocostudio::COMPLETE)
	{
		if(attack1 == movementID || attack2 == movementID || attack3 == movementID)
		{
			if(NULL != mWeaponBody)
			{
				mWorld->DestroyBody(mWeaponBody);
				mWeaponBody = NULL;
			}
			callLuaFuncNoResult("LUAGameSceneView_MonsterAttackAnimEnded", this);
			mAttacking = false;
		}
		else if(beattack1 == movementID || clobber1 == movementID)
		{
			callLuaFuncNoResult("LUAGameSceneView_MonsterBeAttackAnimEnded", this);
			mBeAttacking = false;
		}
		else if(assault1 == movementID)
		{
			this->move(0,0);
			mSkilling = false;
		}
		else if(death1 == movementID)
		{
			mDeathTimer = 0.0f;
		}
	}
}
int Monster::PhysicsPreSolve(b2Contact* contact, const b2Manifold* oldManifold, const physics::PhysicsBodyList& landList)
{
	int ret = 0;

	return ret;
}

#include "uiview/Panel/StackPanel.h"
void Monster::beAttacked(ICreatue* who, const Point& hitPos, bool clobber)
{
	mBeAttacking = true;
	mActiveAttackTimer = 3.0f + float(rand() % 3);
	mAICanActiveAttacked = 0;
	if(NULL != mModel)
	{
		int lostHP = 500 + (rand()%500);
		mModel->NowHP -= lostHP;
		this->updateHPView();
		callLuaFuncNoResult("LUAGameSceneView_MonsterBeAttackedEffect", this, lostHP, hitPos.x, hitPos.y);
		if(mModel->NowHP <= 0)
		{
			this->onDeath();
			return;
		}
	}
	callLuaFuncNoResult("LUAGameSceneView_MonsterBeAttacked", this, clobber);
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

void Monster::onDeath()
{
	mDeathing = true;
	callLuaFuncNoResult("LUAGameSceneView_MonsterDeath", this);
	if(NULL != mModel)
		mModel->Visible = false;
}
void Monster::onDeathTimer(float dt)
{
	if(!mDeathing)
		return;
	if(mDeathTimer >= 7.5f)
	{
		mDeathTimer = 0.0f;
		mDeathing = false;
		mAnimView->setOpacity(255);
		this->recoverHPTimer(30.0f);
		callLuaFuncNoResult("LUAGameSceneView_MonsterRelive", this);
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
void Monster::StepBefore(physics::ObjectSettings* settings)
{
	if(this->isDeathing())
		return;
	if((mAICanActiveAttacked > 0) && !this->isBeAttacking() && !this->isAttacking())
	{
		Size mySize = mAnimView->getContentSize();
		Point myPos = this->getMovedBodyPos();
		Point loaclPlayerPos = LocalPlayer::instance()->getMovedBodyPos();
		Point direction = myPos-loaclPlayerPos;
		if(fabs(direction.y) < mySize.height/2.0f && fabs(direction.x) < 200.0f)
		{
			if(loaclPlayerPos.x < myPos.x)
				this->setFaceNormalX(-1.0f);
			else
				this->setFaceNormalX(1.0f);
			mAttacking = true;
			mNowComboCount = 3-mAICanActiveAttacked;
			if(mNowComboCount > 2)
				mNowComboCount = 2;
			callLuaFuncNoResult("LUAGameSceneView_MonsterActiveAttack", this, mAICanActiveAttacked);
			mActiveAttackTimer = 3.0f + float(rand() % 3);
			mAICanActiveAttacked--;
		}
		else
			mAICanActiveAttacked = 3;
	}
	static CreaturePhysicsSteeings creatureSettings;
	creatureSettings.mIsHeroDorping = mIsHeroDorping;
	creatureSettings.mIsOriJump = mIsOriJump;
	creatureSettings.mUsingVerticeCount = 8;
	for(int i = 0; i < 8; ++ i)
	{
		CCString* pBodyName = CCString::createWithFormat("body%d", i);
		cocostudio::CCBone* pBone = mAnimView->getBone(pBodyName->getCString());
		if(NULL == pBone)
			continue;
		cocostudio::BaseData* pBoneData = pBone->getWorldInfo();
		Point pos = mAnimView->getParent()->convertToWorldSpaceAR(mAnimView->getPosition());
		pos.x += pBoneData->x;
		pos.y += pBoneData->y;
		Point titledMapPos = GameSceneViewModel::point()->getTiledMap()->getPosition();
		pos.x -= titledMapPos.x;
		pos.y -= titledMapPos.y;
		creatureSettings.mVertices[i] = b2Vec2(pos.x / PTM_RATIO, pos.y / PTM_RATIO);
	}
	// body box
	if(NULL != mBodyBody)
	{
		mWorld->DestroyBody(mBodyBody);
		mBodyBody = NULL;
	}
	CreaturePhysicsSteeings* pSettings = &creatureSettings;
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
	if(NULL != mWeaponBody)
		mWeaponBody->SetLinearVelocity(b2Vec2(0,1));
	ICreatue::updateBody(&creatureSettings);
}
void Monster::StepAfter()
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
				if(NULL != pBeAttackedMonst)
				{
					pBeAttackedMonst->beAttacked(this, Point(0,0));
				}
				else
				{
					LocalPlayer* pBeAttackPlayer = dynamic_cast<LocalPlayer*>(pObject);
					if(NULL != pBeAttackPlayer && !pBeAttackPlayer->isBeAttacking() && !pBeAttackPlayer->isDeathing())
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
						pBeAttackPlayer->beAttacked(this, hitPos, mAICanActiveAttacked==0);
					}
				}
			}
		}
	}
}