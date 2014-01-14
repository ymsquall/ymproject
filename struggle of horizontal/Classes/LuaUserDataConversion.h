#pragma once

#include "View_GameScene.h"
#include "Model_GameScene.h"
#include "CocoStudio/CocoStudio.h"

namespace framework
{
	namespace unity
	{
		class blockwrite;
	}
}

class GameSceneModel;
class GameSceneView;
class Player;
class Monster;
class CreatureHeaderView;
class CreatureHeaderModel;

class LuaUserDataConversion
{
public:
	static framework::unity::blockwrite* toBlockWrite(void* pointer);
	static GameSceneModel* toGameSceneModle(void* pointer);
	static GameSceneView* toGameSceneView(void* pointer);
	static Armature* toArmature(void* pointer);
	static CCNode* toNode(void* pointer);
	static Player* toPlayer(void* pointer);
	static Monster* toMonster(void* pointer);
	static CreatureHeaderView* toCreatureHeaderView(void* pointer);
	static CreatureHeaderModel* toCreatureHeaderModel(void* pointer);
	/*
	struct LandTreeGrid;
	struct SoldierTroopsUnitGrid;
	static LandTreeGrid* toLandTreeGrid(void* pointer);
	static SoldierTroopsUnitGrid* toSoldierTroopsUnitGrid(LandTreeGrid* grid);
	*/
};

