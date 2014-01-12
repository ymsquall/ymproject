#include "LuaExternHelper.h"


const CCSize& LuaTiledHelper::getTMXLayerImageSize(TMXLayer* layer)
{
	if((NULL != layer) && (NULL != layer->getTileSet()))
	{
		return layer->getTileSet()->_imageSize;
	}
	return CCSizeZero;
}
CCArray* LuaTiledHelper::getGroupObjects(TMXTiledMap* pMap, const char* groupName)
{
	if(NULL != pMap && NULL != groupName && strlen(groupName) > 0)
	{
		TMXObjectGroup* pGroup = pMap->getObjectGroup(groupName);
		if(NULL != pGroup)
		{
			CCArray* pArray = pGroup->getObjects();
			if(NULL != pArray && pArray->count() > 0)
				return pArray;
		}
	}
	return NULL;
}
CCDictionary* LuaTiledHelper::getDictAtIndexWithGroup(CCArray* group, int i)
{
	CCDictionary* pRet = NULL;
	if(NULL != group)
	{
		Object* pObj = group->getObjectAtIndex(i);
		if(NULL != pObj)
		{
			pRet = dynamic_cast<CCDictionary*>(pObj);
		}
	}
	return pRet;
}


int LuaDictHelper::getIntValue(CCDictionary* pDict, const char* key)
{
	int ret = -1;
	if(NULL != pDict)
		ret = pDict->valueForKey(key)->intValue();
	return ret;
}
std::string LuaDictHelper::getStringValue(CCDictionary* pDict, const char* key)
{
	std::string ret;
	if(NULL != pDict)
		ret = pDict->valueForKey(key)->getCString();
	return ret;
}
CCArray* LuaDictHelper::getArrayValue(CCDictionary* pDict, const char* key)
{
	CCArray* ret = NULL;
	if(NULL != pDict)
		ret = dynamic_cast<CCArray*>(pDict->objectForKey(key));
	return ret;
}
CCDictionary* LuaDictHelper::getDictValueAtIndexWithArray(CCArray* pArray, int i)
{
	CCDictionary* ret = NULL;
	if(NULL != pArray)
		ret = dynamic_cast<CCDictionary*>(pArray->objectAtIndex(i));
	return ret;
}