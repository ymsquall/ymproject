#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
using namespace cocos2d;

class LuaExternConversion
{
public:
	static CCArray* toLayout(void* pointer);
};

