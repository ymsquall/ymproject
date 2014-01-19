#include "Model_CreatureHeader.h"
#include "ViewModelManager.h"
#include "ICreature.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(CreatureHeader)
	,NameText(this)
	,NameTextColor(this)
	,HPText(this)
	,HPTextColor(this)
	,NowHP(this)
	,MaxHP(this)
	,Visible(this)
	,Position(this)
{
    mModelManager = ViewModelManager::point();
	// ���캯��������д����
	HPTextColor = Color3B(255, 0, 0);
	NowHP = 0;
	MaxHP = 0;
	Visible = true;
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(CreatureHeader)
	// ��������������д����
MODEL_TYPECLASS_DEFINE_BEGINING

bool CreatureHeaderModel::initImpl()
{
	return true;
}

void CreatureHeaderModel::updateImpl(float dt)
{

}

bool CreatureHeaderModel::finalize()
{
	return true;
}

void CreatureHeaderModel::setOwnerCreature(ICreature* creature)
{
	mOwnerCreature = creature;
}
ICreature* CreatureHeaderModel::getOwnerCreature()
{
	return mOwnerCreature;
}