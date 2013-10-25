#include "Model_GameLand.h"
#include "ViewModelManager.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(GameLand)
	// 构造函数，代码写这里
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(GameLand)
	// 析构函数，代码写这里
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