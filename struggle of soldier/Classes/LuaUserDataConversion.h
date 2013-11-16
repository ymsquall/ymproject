#pragma once

#include "View_GameLand.h"
#include "Model_GameLand.h"

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
class GameLandModel;
class GameLandView;

class LuaUserDataConversion
{
public:
	static framework::unity::blockwrite* toBlockWrite(void* pointer);
	static GameLandModel* toGameLandModle(void* pointer);
	static GameLandView* toGameLandView(void* pointer);
	static cocos2d::extension::Armature* toArmature(void* pointer);
	static CCNode* toNode(void* pointer);
	/*
	struct LandTreeGrid;
	struct SoldierTroopsUnitGrid;
	static LandTreeGrid* toLandTreeGrid(void* pointer);
	static SoldierTroopsUnitGrid* toSoldierTroopsUnitGrid(LandTreeGrid* grid);
	*/
};

