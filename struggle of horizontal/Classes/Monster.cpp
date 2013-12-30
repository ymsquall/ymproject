#include "Monster.h"
#include "luaext/LuaHelper.h"
#include "ViewModel_GameScene.h"
#include "LocalPlayer.h"

Monster::Monster(b2World* pWorld) :
	SuperT(object::ObjectType::TN_Monster, pWorld),
	JumpDelegate(this)
{
	mMonsterAnim = NULL;
}
Monster::~Monster()
{

}

void Monster::Step(physics::ObjectSettings* settings)
{
	static CreaturePhysicsSteeings creatureSettings;
	creatureSettings.mIsHeroDorping = mIsHeroDorping;
	creatureSettings.mIsOriJump = mIsOriJump;
	creatureSettings.mUsingVerticeCount = 8;
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
		bd.type = b2_kinematicBody;
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
	ICreatue::Step(&creatureSettings);
	if(NULL != mWeaponBody)
		mWeaponBody->SetLinearVelocity(b2Vec2(0,1));
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
					if(NULL != pBeAttackPlayer)
					{
						pBeAttackPlayer->beAttacked(this);
					}
				}
			}
		}
	}
}
int Monster::PhysicsPreSolve(b2Contact* contact, const b2Manifold* oldManifold, const physics::PhysicsBodyList& landList)
{
	int ret = 0;

	return ret;
}
bool Monster::init()
{
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUAGameSceneView_Monster_init", this);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;
	mMonsterAnim = (cocostudio::Armature*)userdata.value.pointer;
	if(NULL != mMonsterAnim)
	{
		mMonsterAnim->getAnimation()->setFrameEventCallFunc(this, frameEvent_selector(Monster::onFrameEvent));
		mMonsterAnim->getAnimation()->setMovementEventCallFunc(this, movementEvent_selector(Monster::animationEvent));
		return true;
	}
	return false;
}
bool Monster::finalize()
{
	return true;
}
void Monster::loop(float dt)
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
	static const std::string beattack = "beattack01";
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
			callLuaFuncNoResult("LUAGameSceneView_MonsterAttackAnimEnded", this);
		}
		else if(beattack == movementID)
		{
			callLuaFuncNoResult("LUAGameSceneView_MonsterBeAttackAnimEnded", this);
		}
	}
}
void Monster::beAttacked(ICreatue* who)
{
	callLuaFuncNoResult("LUAGameSceneView_MonsterBeAttacked", this);
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