#include "Model_GameScene.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"
#include "View_GameScene.h"
#include "unity/datablock.h"
#include "Physics_GameScene.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(GameScene)
{
    mModelManager = ViewModelManager::point();
	// 构造函数，代码写这里
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(GameScene)
	// 析构函数，代码写这里
MODEL_TYPECLASS_DEFINE_BEGINING

bool GameSceneModel::initImpl()
{
	float gravity = 0.0f;
	tolua_getLuaNumberValue_ByTable(LuaEngine::getInstance()->getLuaStack()->getLuaState(), "world_gravity", "__LUAEnvironmentVariable", gravity);
	new GameScenePhysics(gravity);
	return true;
}

void GameSceneModel::updateImpl(float dt)
{

}

bool GameSceneModel::finalize()
{
	callLuaFuncNoResult("LUAGameSceneModelOnFinalize");
	return true;
}
