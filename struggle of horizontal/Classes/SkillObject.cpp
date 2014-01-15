#include "SkillObject.h"
#include "luaext/LuaHelper.h"
#include "math/cmMath.h"
#include "ViewModel_GameScene.h"
#include "Physics_GameScene.h"
#include "Monster.h"

using namespace framework;

SkillObject::SkillObject(b2World* pWorld) :
	ICreatue(pWorld)
{
	mAnimView = NULL;
	mHitTarget = false;
	mPhysicsContourData = NULL;
	mBlastEffect = NULL;
}
SkillObject::~SkillObject()
{
}
SkillObject* SkillObject::create(const CCPoint& faceNormal, const CCPoint& pos, float speed, const std::string& animName)
{
	SkillObject* pRet = ICreatue::createWithBox<SkillObject>(GameScenePhysics::point()->mWorld, pos, Size(19.2f, 6.4f), false);
	if(!pRet->initWithAnimName(animName, faceNormal, pos, speed))
	{
		delete pRet;
		pRet = NULL;
	}
	return pRet;
}
bool SkillObject::initWithBox(const Point& pos, const Size& size, bool showTitle)
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
		fd.filter.maskBits = LandContactMask;
		shape.SetAsBox(size.width / 2.0f / PTM_RATIO, size.height / 2.0f / PTM_RATIO, b2Vec2(0, 0), 0.0);
		mMoveBody->CreateFixture(&fd);
		mMoveBody->SetFixedRotation(true); // 设置为固定角度（不旋转）
	}
	return true;
}
void SkillObject::destory()
{
	if(NULL != mAnimView)
		mAnimView->removeFromParent();
	if(NULL != mMoveBody)
		mWorld->DestroyBody(mMoveBody);
	if(NULL != mWeaponBody)
		mWorld->DestroyBody(mWeaponBody);
	if(NULL != mBlastEffect)
		GameSceneViewModel::point()->getTiledMap()->removeChild(mBlastEffect, true);
	delete this;
}
bool SkillObject::initWithAnimName(const std::string& animName, const CCPoint& faceNormal, const CCPoint& pos, float speed)
{		
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUAGameSceneView_Skill_init", this, animName);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;
	mAnimView = (cocostudio::Armature*)userdata.value.pointer;
	if(NULL != mAnimView)
	{
		Array* pCollider = mAnimView->getBone("Layer1")->getColliderBodyList();
		cocostudio::ColliderBody* pPhysicsBody = static_cast<cocostudio::ColliderBody*>(pCollider->getObjectAtIndex(0));
		mPhysicsContourData = pPhysicsBody->getContourData();
		mFaceNormal = faceNormal;
		mStartPos = pos;
		mSpeed = speed;
		if(mFaceNormal.x < 0.0f)
			mAnimView->setRotationY(180.0f);
		if(NULL != mPhysicsContourData)
		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0, 0);
			mWeaponBody = mWorld->CreateBody(&bd);
			b2PolygonShape bodyShape;
			bodyShape.m_vertexCount = mPhysicsContourData->vertexList.count();
			//for( auto& point : mPhysicsContourData->vertexList)
			for(int i = 0; i < bodyShape.m_vertexCount; ++ i)
			{
				cocostudio::ContourVertex2* pVertex = dynamic_cast<cocostudio::ContourVertex2*>(mPhysicsContourData->vertexList.getObjectAtIndex(i));
				if(mFaceNormal.x < 0.0f)
					bodyShape.m_vertices[i] = b2Vec2(-pVertex->x / PTM_RATIO, pVertex->y / PTM_RATIO);
				else
					bodyShape.m_vertices[i] = b2Vec2(pVertex->x / PTM_RATIO, pVertex->y / PTM_RATIO);
			}
			b2FixtureDef bodyFD;
			bodyFD.shape = &bodyShape;
			bodyFD.density = 0.0f;
			bodyFD.friction = 0.0f;
			bodyFD.filter.categoryBits = SkillBodyContactMask;
			bodyFD.filter.maskBits = BodyBodyContactMask | WallContactMask;
			mWeaponBody->CreateFixture(&bodyFD);
			mWeaponBody->SetUserData(this);
		}
		return true;
	}
	return false;
}

void SkillObject::onFrameEvent(cocostudio::Bone *bone, const char *evt, int originFrameIndex, int currentFrameIndex)
{
}
void SkillObject::animationEvent(cocostudio::Armature *armature, cocostudio::MovementEventType movementType, const char *movementID)
{
	if(movementType == cocostudio::COMPLETE)
	{
		mHitTarget = true;
		callLuaFuncNoResult("LUAGameSceneView_Skill_Destoryed", this);
	}
}
void SkillObject::StepBefore(physics::ObjectSettings* settings)
{
	static CreaturePhysicsSteeings selfSettings;
	b2Transform trans = mMoveBody->GetTransform();
	if(NULL != mMoveBody)
	{
		if(trans.p.y < mStartPos.y / PTM_RATIO)
		{
			trans.p.y = mStartPos.y / PTM_RATIO;
			mMoveBody->SetTransform(trans.p, 0);
		}
		else
		{
			// can be overed?
			//mStartPos.y = trans.p.y;
		}
		b2Vec2 vel = mMoveBody->GetLinearVelocity();
		vel.y = 0.0f;
		if(fabs(mSpeed) > 0.001f)
		{
			vel.x = mFaceNormal.x * mSpeed / PTM_RATIO + mFaceNormal.x;
			mMoveBody->SetLinearVelocity(vel);
		}
		else
		{
			vel.x = 0.0f;
			mMoveBody->SetLinearVelocity(vel);
		}
	}
	// weapon box
	if(NULL != mWeaponBody)
		mWeaponBody->SetTransform(trans.p, 0);
}
void SkillObject::StepAfter()
{
	if(NULL != mWeaponBody)
	{
		b2ContactEdge* pContact = mWeaponBody->GetContactList();
		if(NULL != pContact)
		{
			cocos2d::Object* pObject = static_cast<cocos2d::Object*>(pContact->other->GetUserData());
			if(this != pObject)
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
				Monster* pHitedMonst = dynamic_cast<Monster*>(pObject);
				if(NULL != pHitedMonst && !pHitedMonst->isDeathing())
				{
					if(NULL != mWeaponBody)
					{
						mWorld->DestroyBody(mWeaponBody);
						mWeaponBody = NULL;
					}
					mHitWall = false;
					mStartBlastPos = pHitedMonst->getMovedBodyPos();
					pHitedMonst->beAttacked(this, hitPos, true);
					mSpeed *= 2.0f;
					CCSequence* pAct = Sequence::create(ScaleTo::create(0.1f, 0.0f), 
						CallFuncN::create(CC_CALLBACK_1(SkillObject::onSkillOvered, this)), NULL);
					mAnimView->runAction(pAct);
				}
				else
				{
					CCString* pString = dynamic_cast<CCString*>(pObject);
					if(NULL != pString)
					{
						std::string bodyType = pString->getCString();
						if(bodyType == "wall")
						{
							if(NULL != mWeaponBody)
							{
								mWorld->DestroyBody(mWeaponBody);
								mWeaponBody = NULL;
							}
							mHitWall = true;
							mStartBlastPos = mAnimView->getPosition();
							mSpeed *= 2.0f;
							CCSequence* pAct = Sequence::create(ScaleTo::create(0.1f, 0.0f), 
								CallFuncN::create(CC_CALLBACK_1(SkillObject::onSkillOvered, this)), NULL);
							mAnimView->runAction(pAct);
						}
					}
				}
			}
		}
	}
}

void SkillObject::playBlastEffect()
{
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUACreateAndPlayBlastEffect", "effect.blast", "beattack04.point01");
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return;
	mBlastEffect = (cocostudio::Armature*)userdata.value.pointer;
	if(mFaceNormal.x < 0.0f)
	{
		mBlastEffect->setRotationY(180.0f);
		if(mHitWall)
			mStartBlastPos.x -= 250.0f;
	}
	else if(mHitWall)
		mStartBlastPos.x += 200.0f;
	mStartBlastPos.y += 50.0f;
	mBlastEffect->setPosition(mStartBlastPos);
	GameSceneViewModel::point()->getTiledMap()->addChild(mBlastEffect, 102);
	mBlastEffect->getAnimation()->setFrameEventCallFunc(this, frameEvent_selector(SkillObject::onFrameEvent));
	mBlastEffect->getAnimation()->setMovementEventCallFunc(this, movementEvent_selector(SkillObject::animationEvent));
}

bool SkillObject::isHitTarget()
{
	return mHitTarget;
}

void SkillObject::onSkillOvered(Node* node)
{
	//this->playBlastEffect();
	mHitTarget = true;
	callLuaFuncNoResult("LUAGameSceneView_Skill_Destoryed", this);
}