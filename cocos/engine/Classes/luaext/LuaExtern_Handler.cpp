#include "LuaExtern.h"
#include "tolua_fix.h"
#include "CCLuaValue.h"
#include "LuaScriptHandlerMgr.h"
#include "LuaScriptHandlerMgr.h"
#include "CocosGUI.h"

using namespace cocos2d;
using namespace gui;

int tolua_LuaExter_registerUIWidgetTouchHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
		(tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
		!tolua_isboolean(tolua_S,3,1,&tolua_err) ||
		!tolua_isnumber(tolua_S,4,1,&tolua_err) ||
		!tolua_isboolean(tolua_S,5,1,&tolua_err) ||
		!tolua_isnoobj(tolua_S,6,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
		LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,2,0));
		bool isMultiTouches = ((bool)  tolua_toboolean(tolua_S,3,false));
		int priority = ((int)  tolua_tonumber(tolua_S,4,0));
		bool swallowTouches = (bool)tolua_toboolean(tolua_S, 5, 0);
		Touch::DispatchMode touchesMode = Touch::DispatchMode::ALL_AT_ONCE;
		if (!isMultiTouches)
			touchesMode = Touch::DispatchMode::ONE_BY_ONE;
		//self->setScriptTouchHandler(touchesMode, priority, swallowTouches);
		ScriptHandlerMgr::getInstance()->addObjectHandler((void*)self, handler, ScriptHandlerMgr::HandlerType::TOUCHES);
	}
	return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'registerScriptTouchHandler'.",&tolua_err);
	return 0;
#endif
}

int tolua_LuaExter_unregisterUIWidgetTouchHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
	tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
		!tolua_isnoobj(tolua_S,2,&tolua_err)
		)
		goto tolua_lerror;
	else
#endif
	{
		UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
		//self->setScriptTouchHandler(Touch::DispatchMode::ALL_AT_ONCE, -1, false);
		ScriptHandlerMgr::getInstance()->removeObjectHandler((void*)self, ScriptHandlerMgr::HandlerType::TOUCHES);
		return 0;
	}
#ifndef TOLUA_RELEASE
tolua_lerror:
	tolua_error(tolua_S,"#ferror in function 'unregisterScriptTouchHandler'.",&tolua_err);
	return 0;
#endif
}

int tolua_LuaExternHandler_open(lua_State* tolua_S)
{
	if (NULL == tolua_S)
		return -1;
	lua_pushstring(tolua_S,"UIWidget");
	lua_rawget(tolua_S,LUA_REGISTRYINDEX); 
	if (lua_istable(tolua_S,-1))
	{
		lua_pushstring(tolua_S,"registerScriptTouchHandler");
		lua_pushcfunction(tolua_S,tolua_LuaExter_registerUIWidgetTouchHandler00);
		lua_rawset(tolua_S,-3);
		lua_pushstring(tolua_S, "unregisterScriptTouchHandler");
		lua_pushcfunction(tolua_S,tolua_LuaExter_unregisterUIWidgetTouchHandler00);
		lua_rawset(tolua_S, -3);
		//lua_pushstring(tolua_S, "registerScriptKeypadHandler");
		//lua_pushcfunction(tolua_S, tolua_Cocos2d_registerScriptKeypadHandler00);
		//lua_rawset(tolua_S, -3);
		//lua_pushstring(tolua_S, "unregisterScriptKeypadHandler");
		//lua_pushcfunction(tolua_S, tolua_Cocos2d_unregisterScriptKeypadHandler00);
		//lua_rawset(tolua_S, -3);
		//lua_pushstring(tolua_S, "registerScriptAccelerateHandler");
		//lua_pushcfunction(tolua_S, tolua_Cocos2d_registerScriptAccelerateHandler00);
		//lua_rawset(tolua_S, -3);
		//lua_pushstring(tolua_S, "unregisterScriptAccelerateHandler");
		//lua_pushcfunction(tolua_S, tolua_Cocos2d_unregisterScriptAccelerateHandler00);
		//lua_rawset(tolua_S, -3);
	}
	return 0;
}