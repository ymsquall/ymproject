#pragma once

#include "View_GameScene.h"
#include "Model_GameScene.h"

namespace framework
{
	namespace unity
	{
		class blockwrite;
	}
}
namespace cocos2d
{
	namespace extension
	{
		class Armature;
	}
}
class GameSceneModel;
class GameSceneView;
class Player;
class Monster;

class LuaUserDataConversion
{
public:
	static framework::unity::blockwrite* toBlockWrite(void* pointer);
	static GameSceneModel* toGameSceneModle(void* pointer);
	static GameSceneView* toGameSceneView(void* pointer);
	static cocos2d::extension::Armature* toArmature(void* pointer);
	static CCNode* toNode(void* pointer);
	static Player* toPlayer(void* pointer);
	static Monster* toMonster(void* pointer);
	/*
	struct LandTreeGrid;
	struct SoldierTroopsUnitGrid;
	static LandTreeGrid* toLandTreeGrid(void* pointer);
	static SoldierTroopsUnitGrid* toSoldierTroopsUnitGrid(LandTreeGrid* grid);
	*/
};

