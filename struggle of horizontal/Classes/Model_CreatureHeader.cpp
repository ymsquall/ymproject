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
	// 构造函数，代码写这里
	HPTextColor = Color3B(255, 255, 255);
	NowHP = 0;
	MaxHP = 0;
	Visible = true;
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(CreatureHeader)
	// 析构函数，代码写这里
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

void CreatureHeaderModel::setOwnerCreature(ICreatue* creature)
{
	mOwnerCreature = creature;
}
ICreatue* CreatureHeaderModel::getOwnerCreature()
{
	return mOwnerCreature;
}