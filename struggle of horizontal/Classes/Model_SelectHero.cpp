#include "Model_SelectHero.h"
#include "ViewModelManager.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(SelectHero){
    mModelManager = ViewModelManager::point();
	// 构造函数，代码写这里
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(SelectHero)
	// 析构函数，代码写这里
MODEL_TYPECLASS_DEFINE_BEGINING

bool SelectHeroModel::initImpl()
{
	return true;
}

void SelectHeroModel::updateImpl(float dt)
{

}

bool SelectHeroModel::finalize()
{
	return true;
}