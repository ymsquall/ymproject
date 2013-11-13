#include "LuaUserDataConversion.h"

framework::unity::blockwrite* LuaUserDataConversion::toBlockWrite(void* pointer)
{
	return static_cast<framework::unity::blockwrite*>(pointer);
}
GameLandModel* LuaUserDataConversion::toGameLandModle(void* pointer)
{
	return static_cast<GameLandModel*>(pointer);
}
GameLandView* LuaUserDataConversion::toGameLandView(void* pointer)
{
	return static_cast<GameLandView*>(pointer);
}