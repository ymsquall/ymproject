#include "Model_SelectHero.h"
#include "ViewModelManager.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(SelectHero)
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

void SelectHeroModel::finalize()
{

}