#include "LuaExternConversion.h"

CCArray* LuaExternConversion::toLayout(void* pointer)
{
	return static_cast<CCArray*>(pointer);
}