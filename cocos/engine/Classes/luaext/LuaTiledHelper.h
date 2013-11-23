#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"

using namespace cocos2d;

class LuaTiledHelper
{
public:
	static const CCSize& getTMXLayerImageSize(CCTMXLayer* layer);
};

