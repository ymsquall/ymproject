#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "unity/datablock.h"
#include "CocoStudio/CocoStudio.h"
#include "View_GameLand.h"

using namespace cocos2d::extension;

class LuaUserDataConversion
{
public:
	static framework::unity::blockwrite* toBlockWrite(void* pointer);
	static GameLandModel* toGameLandModle(void* pointer);
	static GameLandView* toGameLandView(void* pointer);
};

