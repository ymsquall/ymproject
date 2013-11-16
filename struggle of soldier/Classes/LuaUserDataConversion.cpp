#include "LuaUserDataConversion.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "unity/datablock.h"
#include "View_GameLand.h"
#include "Model_GameLand.h"

framework::unity::blockwrite* LuaUserDataConversion::toBlockWrite(void* pointer)
{
	return static_cast<framework::unity::blockwrite*>(pointer);
}
GameLandModel* LuaUserDataConversion::toGameLandModle(void* pointer)
{
	return static_cast<GameLandModel*>(pointer);
}
GameLandView* LuaUserDataConversion::toGameLandView(void* pointer)
{
	return static_cast<GameLandView*>(pointer);
}
cocos2d::extension::Armature* LuaUserDataConversion::toArmature(void* pointer)
{
	return static_cast<cocos2d::extension::Armature*>(pointer);
}
CCNode* LuaUserDataConversion::toNode(void* pointer)
{
	return static_cast<CCNode*>(pointer);
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