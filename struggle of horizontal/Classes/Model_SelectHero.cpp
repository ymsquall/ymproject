#include "Model_SelectHero.h"
#include "ViewModelManager.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(SelectHero){
    mModelManager = ViewModelManager::point();
	// ���캯��������д����
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(SelectHero)
	// ��������������д����
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