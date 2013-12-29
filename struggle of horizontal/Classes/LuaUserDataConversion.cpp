#include "LuaUserDataConversion.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "unity/datablock.h"
#include "View_GameScene.h"
#include "Model_GameScene.h"
#include "Player.h"
#include "Monster.h"

framework::unity::blockwrite* LuaUserDataConversion::toBlockWrite(void* pointer)
{
	return static_cast<framework::unity::blockwrite*>(pointer);
}
GameSceneModel* LuaUserDataConversion::toGameSceneModle(void* pointer)
{
	return static_cast<GameSceneModel*>(pointer);
}
GameSceneView* LuaUserDataConversion::toGameSceneView(void* pointer)
{
	return static_cast<GameSceneView*>(pointer);
}
cocos2d::extension::Armature* LuaUserDataConversion::toArmature(void* pointer)
{
	return static_cast<cocos2d::extension::Armature*>(pointer);
}
CCNode* LuaUserDataConversion::toNode(void* pointer)
{
	return static_cast<CCNode*>(pointer);
}
Player* LuaUserDataConversion::toPlayer(void* pointer)
{
	return static_cast<Player*>(pointer);
}
Monster* LuaUserDataConversion::toMonster(void* pointer)
{
	return static_cast<Monster*>(pointer);
}
/*
LandTreeGrid* LuaUserDataConversion::toLandTreeGrid(void* pointer)
{
	return static_cast<LandTreeGrid*>(pointer);
}
SoldierTroopsUnitGrid* LuaUserDataConversion::toSoldierTroopsUnitGrid(LandTreeGrid* grid)
{
	return dynamic_cast<SoldierTroopsUnitGrid*>(grid);
}
*/