#pragma once

extern "C" {
#include "tolua++.h"
#include "tolua_fix.h"
}

#include <map>
#include <string>
#include "lua.h"
#include "tolua++.h"
#include "tolua_fix.h"
#include "cocos2d.h"
#include "CCLuaEngine.h"

using namespace cocos2d;

#define STRING_END_CHAR '\0'
#define LUA_TINTEGER	9

//////////////////////////////////////////////////////////////////////////
// lua函数的参数类型
struct ScriptParamObject
{
	enum{ SegmentName_Max_Length = 16, Table_Max_Count = 1024, String_Max_Length = 256 };
	ScriptParamObject();
	ScriptParamObject(const ScriptParamObject& oth);
	ScriptParamObject(double v);
	ScriptParamObject(int v);
	ScriptParamObject(bool v);
	ScriptParamObject(void* v);
	ScriptParamObject(const void* v);
	ScriptParamObject(const std::string& v);
	ScriptParamObject(const char* v);
	ScriptParamObject(char* v);
	ScriptParamObject(std::vector<int> v);
	~ScriptParamObject();

	typedef std::map<std::string, ScriptParamObject> ScriptTableData;

	void operator = (double v);
	void operator = (int v);
	void operator = (bool v);
	void operator = (void* v);
	void operator = (const void* v);
	void operator = (const std::string& v);
	void operator = (const char* v);
	void operator = (char* v);

	unsigned char type;		// 参数类型
	union ScriptParam
	{
		double number;		// 数字		LUA_TNUMBER
		int integer;		// 长整数	
		bool boolean;		// 布尔		LUA_TBOOLEAN
		void* pointer;
		char string[String_Max_Length + 1];			// 字符串	LUA_TSTRING
	}value;
	ScriptTableData tables;	// 表		LUA_TTABLE
};
extern const ScriptParamObject* findNodeBySegmentName(const ScriptParamObject* node, const char* name);
//////////////////////////////////////////////////////////////////////////
void tolua_callLuaFunctionWithParam0NoResult(const char* funcName);
void tolua_callLuaFunctionWithParam1NoResult(const char* funcName, const ScriptParamObject& p1);
void tolua_callLuaFunctionWithParam2NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2);
void tolua_callLuaFunctionWithParam3NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3);
void tolua_callLuaFunctionWithParam4NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4);
void tolua_callLuaFunctionWithParam5NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5);
void tolua_callLuaFunctionWithParam6NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5, const ScriptParamObject& p6);
void tolua_callLuaFunctionWithParam7NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5, const ScriptParamObject& p6, const ScriptParamObject& p7);
ScriptParamObject tolua_callLuaFunctionWithParam0WithResult1(const char* funcName);
ScriptParamObject tolua_callLuaFunctionWithParam1WithResult1(const char* funcName, const ScriptParamObject& p1);
ScriptParamObject tolua_callLuaFunctionWithParam2WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2);
ScriptParamObject tolua_callLuaFunctionWithParam3WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3);
ScriptParamObject tolua_callLuaFunctionWithParam4WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4);
ScriptParamObject tolua_callLuaFunctionWithParam5WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5);
ScriptParamObject tolua_callLuaFunctionWithParam5WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5, const ScriptParamObject& p6);
ScriptParamObject tolua_callLuaFunctionWithParam5WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5, const ScriptParamObject& p6, const ScriptParamObject& p7);
// none result
void callLuaFuncNoResult(const char* funcName);
template<class P1> void callLuaFuncNoResult(const char* funcName, P1 p1)
{
	tolua_callLuaFunctionWithParam1NoResult(funcName, ScriptParamObject(p1));
}
template<class P1, class P2> void callLuaFuncNoResult(const char* funcName, P1 p1, P2 p2)
{
	tolua_callLuaFunctionWithParam2NoResult(funcName, ScriptParamObject(p1), ScriptParamObject(p2));
}
template<class P1, class P2, class P3> void callLuaFuncNoResult(const char* funcName, P1 p1, P2 p2, P3 p3)
{
	tolua_callLuaFunctionWithParam3NoResult(funcName, ScriptParamObject(p1), ScriptParamObject(p2), ScriptParamObject(p3));
}
// number result
template<class R1> bool callLuaFuncWithNumberResult(const char* funcName, R1& r1)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam0WithResult1(funcName);
	if(result.type == LUA_TNUMBER)
	{
		r1 = (R1)result.value.number;
		return true;
	}
	if(result.type == LUA_TINTEGER)
	{
		r1 = (R1)result.value.integer;
		return true;
	}
	return false;
}
template<class P1, class R1> bool callLuaFuncWithNumberResult(const char* funcName, P1 p1, R1& r1)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam1WithResult1(funcName, p1);
	if(result.type == LUA_TNUMBER)
	{
		r1 = (R1)result.value.number;
		return true;
	}
	if(result.type == LUA_TINTEGER)
	{
		r1 = (R1)result.value.integer;
		return true;
	}
	return false;
}
// string result
std::string callLuaFuncWithStringResult(const char* funcName);
template<class P1> std::string callLuaFuncWithStringResult(const char* funcName, P1 p1)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam1WithResult1(funcName, ScriptParamObject(p1));
	if(result.type == LUA_TSTRING) return result.value.string;
	return "";
}
template<class P1, class P2> std::string callLuaFuncWithStringResult(const char* funcName, P1 p1, P2 p2)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam2WithResult1(funcName, ScriptParamObject(p1), ScriptParamObject(p2));
	if(result.type == LUA_TSTRING) return result.value.string;
	return "";
}
template<class P1, class P2, class P3> std::string callLuaFuncWithStringResult(const char* funcName, P1 p1, P2 p2, P3 p3)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam3WithResult1(funcName, ScriptParamObject(p1), ScriptParamObject(p2), ScriptParamObject(p3));
	if(result.type == LUA_TSTRING) return result.value.string;
	return "";
}
template<class P1, class P2, class P3, class P4> std::string callLuaFuncWithStringResult(const char* funcName, P1 p1, P2 p2, P3 p3, P4 p4)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam4WithResult1(funcName, ScriptParamObject(p1), ScriptParamObject(p2), ScriptParamObject(p3), ScriptParamObject(p4));
	if(result.type == LUA_TSTRING) return result.value.string;
	return "";
}
// userdata result
void* callLuaFuncWithUserdataResult(const char* funcName);
template<class P1> 
void* callLuaFuncWithUserdataResult(const char* funcName, P1 p1)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam1WithResult1(funcName, ScriptParamObject(p1));
	if(result.type == LUA_TUSERDATA) return result.value.pointer;
	return NULL;
}
template<class P1, class P2> 
void* callLuaFuncWithUserdataResult(const char* funcName, P1 p1, P2 p2)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam2WithResult1(funcName, ScriptParamObject(p1), ScriptParamObject(p2));
	if(result.type == LUA_TUSERDATA) return result.value.pointer;
	return NULL;
}
template<class P1, class P2, class P3> 
void* callLuaFuncWithUserdataResult(const char* funcName, P1 p1, P2 p2, P3 p3)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam3WithResult1(funcName, ScriptParamObject(p1), ScriptParamObject(p2), ScriptParamObject(p3));
	if(result.type == LUA_TUSERDATA) return result.value.pointer;
	return NULL;
}
template<class P1, class P2, class P3, class P4> 
void* callLuaFuncWithUserdataResult(const char* funcName, P1 p1, P2 p2, P3 p3, P4 p4)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam4WithResult1(funcName, ScriptParamObject(p1), ScriptParamObject(p2), ScriptParamObject(p3), ScriptParamObject(p4));
	if(result.type == LUA_TUSERDATA) return result.value.pointer;
	return NULL;
}
template<class P1, class P2, class P3, class P4, class P5> 
void* callLuaFuncWithUserdataResult(const char* funcName, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam5WithResult1(funcName, ScriptParamObject(p1), ScriptParamObject(p2), ScriptParamObject(p3), ScriptParamObject(p4), ScriptParamObject(p5));
	if(result.type == LUA_TUSERDATA) return result.value.pointer;
	return NULL;
}
template<class P1, class P2, class P3, class P4, class P5, class P6> 
void* callLuaFuncWithUserdataResult(const char* funcName, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam5WithResult1(funcName, ScriptParamObject(p1), ScriptParamObject(p2), ScriptParamObject(p3), ScriptParamObject(p4), ScriptParamObject(p5), ScriptParamObject(p6));
	if(result.type == LUA_TUSERDATA) return result.value.pointer;
	return NULL;
}
template<class P1, class P2, class P3, class P4, class P5, class P6, class P7> 
void* callLuaFuncWithUserdataResult(const char* funcName, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam5WithResult1(funcName, ScriptParamObject(p1), ScriptParamObject(p2), ScriptParamObject(p3), ScriptParamObject(p4), ScriptParamObject(p5), ScriptParamObject(p6), ScriptParamObject(p7));
	if(result.type == LUA_TUSERDATA) return result.value.pointer;
	return NULL;
}
//////////////////////////////////////////////////////////////////////////
template<class T>
bool tolua_getLuaNumberValue_ByTable(lua_State* L, const char* fieldName, const char* tableName, T& retValue)
{
	lua_getglobal(L, tableName);
	if(!lua_istable(L, -1))
	{
		return false;
	}
	lua_pushlstring(L, fieldName, strlen(fieldName));
	lua_gettable(L, -2);
	if (!lua_isnumber(L, -1))
	{
		return false;
	}
	retValue = (T)lua_tonumber(L, -1);
	lua_pop(L, 1);

	return true;
}
template<class T>
bool tolua_getLua2DSizeValue_ByTable(lua_State* L, const char* fieldName, const char* tableName, T& width, T& height)
{
	lua_getglobal(L, tableName);
	if(!lua_istable(L, -1))
	{
		return false;
	}
	lua_pushlstring(L, fieldName, strlen(fieldName));
	lua_gettable(L, -2);
	if (!lua_istable(L, -1))
	{
		return false;
	}

	lua_rawgeti(L, -1, 1);  
	width = (T)lua_tonumber(L, -1);
	lua_pop(L, 1);

	lua_rawgeti(L, -1, 2);  
	height = (T)lua_tonumber(L, -1);
	lua_pop(L, 1);

	return true;
}
//////////////////////////////////////////////////////////////////////////
bool tolua_getLuaStringValue_ByTable(lua_State* L, const char* fieldName, const char* tableName, std::string& retValue);
void tolua_setLuaGlobalTableToNil(lua_State* L, const char* tableName);
bool tolua_getLuaTableValue_ByTable(lua_State* L, const char* tableName, ScriptParamObject& retValue);
//////////////////////////////////////////////////////////////////////////

