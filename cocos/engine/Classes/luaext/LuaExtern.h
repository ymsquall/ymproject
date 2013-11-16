#pragma once

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

TOLUA_API int tolua_LuaExtern_open(lua_State* tolua_S);

TOLUA_API int tolua_LuaExternHandler_open(lua_State* tolua_S);
