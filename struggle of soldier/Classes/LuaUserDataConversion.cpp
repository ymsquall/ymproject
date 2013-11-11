#include "LuaUserDataConversion.h"

GameLandModel* LuaUserDataConversion::toGameLandModle(void* pointer)
{
	return static_cast<GameLandModel*>(pointer);
}
GameLandView* LuaUserDataConversion::toGameLandView(void* pointer)
{
	return static_cast<GameLandView*>(pointer);
}