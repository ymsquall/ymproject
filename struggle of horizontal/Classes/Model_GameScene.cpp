#include "Model_GameScene.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"
#include "View_GameScene.h"
#include "unity/datablock.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(GameScene)
{
	// 构造函数，代码写这里
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(GameScene)
	// 析构函数，代码写这里
MODEL_TYPECLASS_DEFINE_BEGINING

bool GameSceneModel::initImpl()
{
	return true;
}

void GameSceneModel::updateImpl(float dt)
{

}

void GameSceneModel::finalize()
{
	callLuaFuncNoResult("LUAGameSceneModelOnFinalize");
}
