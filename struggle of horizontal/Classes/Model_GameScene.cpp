#include "Model_GameScene.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"
#include "View_GameScene.h"
#include "unity/datablock.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(GameScene)
{
    mModelManager = ViewModelManager::point();
	// ���캯��������д����
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(GameScene)
	// ��������������д����
MODEL_TYPECLASS_DEFINE_BEGINING

bool GameSceneModel::initImpl()
{
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
