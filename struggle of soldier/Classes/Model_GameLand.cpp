#include "Model_GameLand.h"
#include "ViewModelManager.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(GameLand)
	// ���캯��������д����
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(GameLand)
	// ��������������д����
MODEL_TYPECLASS_DEFINE_BEGINING

bool GameLandModel::initImpl()
{
	return true;
}

void GameLandModel::updateImpl(float dt)
{

}

void GameLandModel::finalize()
{

}