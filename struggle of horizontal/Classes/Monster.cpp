#include "Monster.h"
#include "math/math.h"
#include "luaext/LuaHelper.h"
#include "ViewModel_GameScene.h"
#include "View_GameScene.h"
#include "LocalPlayer.h"
#include "Model_CreatureHeader.h"

using namespace framework;
Monster::Monster(b2World* pWorld) :
	SuperT(object::ObjectType::TN_Monster, pWorld),
	JumpDelegate(this)
{
	mMonsterAnim = NULL;
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
	mMonsterAnim = (cocostudio::Armature*)userdata.value.pointer;
	if(NULL != mMonsterAnim)
	{
		cocostudio::Armature* pLocalPlayerAnim = GameSceneViewModel::point()->getLocalPlayerAnimView();
		if(NULL == pLocalPlayerAnim)
			return false;
		// physics body box
		const char* nodeNames[] = {
			"weapon_r", "body"
		};
		Node* pLocalPlayerWeaponNode = pLocalPlayerAnim->getChildByTag(ICreatue::AttackPhysicsNodeTagBegin);
		if(NULL == pLocalPlayerWeaponNode)
			return false;
		PhysicsBody* pLocalPlayerWeaponBody = pLocalPlayerWeaponNode->getPhysicsBody();
		if(NULL == pLocalPlayerWeaponBody)
			return false;
		GameSceneView* pView = GameSceneViewModel::point()->getSceneView();
		if(NULL == pView)
			return false;
		for(int i = 0; i < 2; ++ i)
		{
			cocostudio::CCBone* pBone = mMonsterAnim->getBone(nodeNames[i]);
			if(NULL != pBone)
			{
				CCNode* pNode = NULL;
				Size size(0, 0);
#ifdef _DEBUG
				std::string imageName = "image/square_magenta.png";
				CCSprite* pSprite = CCSprite::create(imageName.c_str());
				//size = pSprite->getContentSize();
				pNode = pSprite;
#endif
				if(i == 0)
					size = Size(25.0f, 120.0f);
				else
					size = Size(50.0f, 100.0f);
				PhysicsBody* pBody = PhysicsBody::createBox(size);
				pBody->setDynamic(true);
				pNode->setUserData(this);
				if(i == 0)
				{
					pBody->setCategoryBitmask(ICreatue::WeaponBodyContactMask);
					pBody->setCollisionBitmask(ICreatue::BodyBodyContactMask);
				}
				else
				{
					pBody->setCategoryBitmask(ICreatue::BodyBodyContactMask);
					pBody->setCategoryBitmask(ICreatue::WeaponBodyContactMask);
				}
				pNode->setPhysicsBody(pBody);
				mMonsterAnim->addChild(pNode, ICreatue::AttackPhysicsNodeTagBegin, ICreatue::AttackPhysicsNodeTagBegin+i);
				if(i > 0)
				{
					auto contactListener = EventListenerPhysicsContactWithBodies::create(pLocalPlayerWeaponBody, pBody);
					contactListener->onContactBegin = CC_CALLBACK_2(GameSceneView::onAttackContactBegin, GameSceneViewModel::point()->getSceneView());
					contactListener->onContactSeperate = CC_CALLBACK_2(GameSceneView::onAttackContactEnded, GameSceneViewModel::point()->getSceneView());
					pView->getEventDispatcher()->addEventListenerWithSceneGraphPriority(contactListener, GameSceneViewModel::point()->getSceneView());
				}
			}
		}
		mMonsterAnim->getAnimation()->setFrameEventCallFunc(this, frameEvent_selector(Monster::onFrameEvent));
		mMonsterAnim->getAnimation()->setMovementEventCallFunc(this, movementEvent_selector(Monster::animationEvent));
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
cocostudio::Armature* Monster::getAnimView()
{
	return mMonsterAnim;
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
	const char* nodeNames[] = {
		"weapon_r", "body"
	};
	for(int i = 0; i < 2; ++ i)
	{
		cocostudio::CCBone* pBone = mMonsterAnim->getBone(nodeNames[i]);
		if(NULL != pBone)
		{
			CCNode* pNode = static_cast<CCNode*>(mMonsterAnim->getChildByTag(ICreatue::AttackPhysicsNodeTagBegin+i));
			cocostudio::FrameData* pData = pBone->getTweenData();
			const AffineTransform& pTransform = pBone->getNodeToWorldTransform();
			cocostudio::BaseData* pWorldInfo = pBone->getWorldInfo();
			pNode->setPosition(Point(pWorldInfo->x, pWorldInfo->y));
			float rotaX = pWorldInfo->skewX / math::Math::PI * 180.0f;
			float rotaY = pWorldInfo->skewY / math::Math::PI * 180.0f;
			pNode->setRotation(rotaX);
			pNode->setScaleX(pWorldInfo->scaleX);
			pNode->setScaleY(pWorldInfo->scaleY);
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
		cocostudio::CCBone* pBone = mMonsterAnim->getBone(pWeaponName->getCString());
		if(NULL == pBone)
			return;
		cocostudio::BaseData* pBoneData = pBone->getWorldInfo();
		Point pos = mMonsterAnim->getParent()->convertToWorldSpaceAR(mMonsterAnim->getPosition());
		if(mMonsterAnim->getRotationY() >= 179.0f)
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
	static const std::string beattack1 = "beattack01";
	static const std::string clobber1 = "clobber01";
	static const std::string attack1 = "attack01";
	static const std::string attack2 = "attack02";
	static const std::string death1 = "death01";
	if(movementType == cocostudio::COMPLETE)
	{
		if(attack1 == movementID || attack2 == movementID)
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
void Monster::beAttacked(ICreatue* who, bool clobber)
{
	mBeAttacking = true;
	mActiveAttackTimer = 3.0f + float(rand() % 3);
	mAICanActiveAttacked = 0;
	if(NULL != mModel)
	{
		int lostHP = 500 + (rand()%500);
		mModel->NowHP -= lostHP;
		this->updateHPView();
		callLuaFuncNoResult("LUAGameSceneView_MonsterBeAttackedEffect", this, lostHP);
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
		mMonsterAnim->setRotationY(180.0f);
	}
	else
	{
		mMonsterAnim->setRotationY(0.0f);
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
		mMonsterAnim->setOpacity(255);
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
		mMonsterAnim->setOpacity(opacity);
	}
	else if(mDeathTimer > 2.5f && mDeathTimer < 7.0f)
	{
		mMonsterAnim->setOpacity(0);
		mMonsterAnim->setVisible(false);
	}
	else if(mDeathTimer >= 7.0f && mDeathTimer <= 7.5f)
	{
		mMonsterAnim->setVisible(true);
		float alpha = (mDeathTimer - 7.0f) * 2;
		GLbyte opacity = GLbyte(255.0f * alpha);
		if(opacity < 0) opacity = 0;
		if(opacity > 255) opacity = 255;
		mMonsterAnim->setOpacity(opacity);
	}
}
void Monster::StepBefore(physics::ObjectSettings* settings)
{
	if(this->isDeathing())
		return;
	if((mAICanActiveAttacked > 0) && !this->isBeAttacking() && !this->isAttacking())
	{
		Size mySize = mMonsterAnim->getContentSize();
		Point myPos = this->getMovedBodyPos();
		Point loaclPlayerPos = LocalPlayer::instance()->getMovedBodyPos();
		Point direction = myPos-loaclPlayerPos;
		if(fabs(direction.y) < mySize.height/2.0f && fabs(direction.x) < 200.0f)
		{
			if(loaclPlayerPos.x < myPos.x)
				mMonsterAnim->setRotationY(180.0f);
			else
				mMonsterAnim->setRotationY(0.0f);
			mAttacking = true;
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
	creatureSettings.mUsingVerticeCount = 0;
	for(int i = 0; i < 8; ++ i)
	{
		CCString* pBodyName = CCString::createWithFormat("body%d", i);
		cocostudio::CCBone* pBone = mMonsterAnim->getBone(pBodyName->getCString());
		if(NULL == pBone)
			continue;
		cocostudio::BaseData* pBoneData = pBone->getWorldInfo();
		Point pos = mMonsterAnim->getParent()->convertToWorldSpaceAR(mMonsterAnim->getPosition());
		pos.x += pBoneData->x;
		pos.y += pBoneData->y;
		Point titledMapPos = GameSceneViewModel::point()->getTiledMap()->getPosition();
		pos.x -= titledMapPos.x;
		pos.y -= titledMapPos.y;
		creatureSettings.mVertices[i] = b2Vec2(pos.x / PTM_RATIO, pos.y / PTM_RATIO);
		creatureSettings.mUsingVerticeCount ++;
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
					pBeAttackedMonst->beAttacked(this);
				}
				else
				{
					LocalPlayer* pBeAttackPlayer = dynamic_cast<LocalPlayer*>(pObject);
					if(NULL != pBeAttackPlayer && !pBeAttackPlayer->isBeAttacking())
					{
						pBeAttackPlayer->beAttacked(this, mAICanActiveAttacked==0);
					}
				}
			}
		}
	}
}