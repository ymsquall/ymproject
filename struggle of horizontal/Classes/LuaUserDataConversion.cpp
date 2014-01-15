#include "LuaUserDataConversion.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "unity/datablock.h"
#include "View_GameScene.h"
#include "View_CreatureHeader.h"
#include "Model_GameScene.h"
#include "Model_CreatureHeader.h"
#include "Player.h"
#include "Monster.h"
#include "SkillObject.h"

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
Armature* LuaUserDataConversion::toArmature(void* pointer)
{
	return static_cast<Armature*>(pointer);
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
SkillObject* LuaUserDataConversion::toSkillObject(void* pointer)
{
	return static_cast<SkillObject*>(pointer);
}

CreatureHeaderView* LuaUserDataConversion::toCreatureHeaderView(void* pointer)
{
	return static_cast<CreatureHeaderView*>(pointer);
}
CreatureHeaderModel* LuaUserDataConversion::toCreatureHeaderModel(void* pointer)
{
	return static_cast<CreatureHeaderModel*>(pointer);
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