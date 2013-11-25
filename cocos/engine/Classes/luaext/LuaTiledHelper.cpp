#include "LuaTiledHelper.h"


const CCSize& LuaTiledHelper::getTMXLayerImageSize(TMXLayer* layer)
{
	if((NULL != layer) && (NULL != layer->getTileSet()))
	{
		return layer->getTileSet()->_imageSize;
	}
	return CCSizeZero;
}