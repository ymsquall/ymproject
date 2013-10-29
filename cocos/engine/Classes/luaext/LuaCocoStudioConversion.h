#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CocoStudio/CocoStudio.h"

using namespace cocos2d::extension;

class LuaCocoStudioConversion
{
public:
	static UIScrollView* getUIScrollViewByName(const char* name, UIWidget* pParent);
};

