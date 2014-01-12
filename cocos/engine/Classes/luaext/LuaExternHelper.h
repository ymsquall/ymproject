#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"

using namespace cocos2d;

class LuaTiledHelper
{
public:
	static const CCSize& getTMXLayerImageSize(TMXLayer* layer);
	static CCArray* getGroupObjects(TMXTiledMap* pMap, const char* groupName);
	static CCDictionary* getDictAtIndexWithGroup(CCArray* group, int i);
};

class LuaDictHelper
{
public:
	static int getIntValue(CCDictionary* pDict, const char* key);
	static std::string getStringValue(CCDictionary* pDict, const char* key);
	static CCArray* getArrayValue(CCDictionary* pDict, const char* key);

	static CCDictionary* getDictValueAtIndexWithArray(CCArray* pArray, int i);
};