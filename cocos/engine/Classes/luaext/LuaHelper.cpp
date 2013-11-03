#include "LuaHelper.h"

static int g_ScriptParamObjCount = 0;
ScriptParamObject::ScriptParamObject()
{
	type = LUA_TTABLE;
	g_ScriptParamObjCount ++;
}
static ScriptParamObject enumScriptTableParam(const ScriptParamObject& oth)
{
	ScriptParamObject object;
	object.type = oth.type;
	switch(oth.type)
	{
	case LUA_TNUMBER: object.value.number = oth.value.number; break;
	case LUA_TINTEGER: object.value.integer = oth.value.integer; break;
	case LUA_TBOOLEAN: object.value.boolean = oth.value.boolean; break;
	case LUA_TUSERDATA: object.value.pointer = oth.value.pointer; break;
	case LUA_TSTRING: strcpy(object.value.string, oth.value.string); break;
	case LUA_TTABLE:
		{
			for(std::map<std::string, ScriptParamObject>::const_iterator it = oth.tables.begin();
				it != oth.tables.end(); ++ it)
			{
				ScriptParamObject nextObj = enumScriptTableParam(it->second);
				object.tables.insert(std::map<std::string, ScriptParamObject>::value_type(it->first, nextObj));
			}
		}
		break;
	}
	return object;
}
ScriptParamObject::ScriptParamObject(const ScriptParamObject& oth)
{
	type = oth.type;
	switch(type)
	{
	case LUA_TNUMBER: value.number = oth.value.number; break;
	case LUA_TINTEGER: value.integer = oth.value.integer; break;
	case LUA_TBOOLEAN: value.boolean = oth.value.boolean; break;
	case LUA_TUSERDATA: value.pointer = oth.value.pointer; break;
	case LUA_TSTRING: strcpy(value.string, oth.value.string); break;
	case LUA_TTABLE:
		{
			for(std::map<std::string, ScriptParamObject>::const_iterator it = oth.tables.begin();
				it != oth.tables.end(); ++ it)
			{
				ScriptParamObject object = enumScriptTableParam(it->second);
				tables.insert(std::map<std::string, ScriptParamObject>::value_type(it->first, object));
			}
		}
		break;
	}
}
ScriptParamObject::ScriptParamObject(double v)
{
	type = LUA_TNUMBER;
	value.number = v;
}
ScriptParamObject::ScriptParamObject(int v)
{
	type = LUA_TINTEGER;
	value.integer = v;
}
ScriptParamObject::ScriptParamObject(bool v)
{
	type = LUA_TBOOLEAN;
	value.boolean = v;
}
ScriptParamObject::ScriptParamObject(void* v)
{
	type = LUA_TUSERDATA;
	value.pointer = v;
}
ScriptParamObject::ScriptParamObject(const void* v)
{
	type = LUA_TUSERDATA;
	value.pointer = (void*)v;
}
ScriptParamObject::ScriptParamObject(const std::string& v)
{
	type = LUA_TSTRING;
	strcpy(value.string, v.c_str());
	value.string[String_Max_Length] = STRING_END_CHAR;
}
ScriptParamObject::ScriptParamObject(const char* v)
{
	type = LUA_TSTRING;
	strcpy(value.string, v);
	value.string[String_Max_Length] = STRING_END_CHAR;
}
ScriptParamObject::ScriptParamObject(char* v)
{
	type = LUA_TSTRING;
	strcpy(value.string, v);
	value.string[String_Max_Length] = STRING_END_CHAR;
}
ScriptParamObject::ScriptParamObject(std::vector<int> v)
{
	type = LUA_TTABLE;
	for(size_t i = 0; i < v.size(); ++ i)
	{
		CCString* pIndex = CCString::createWithFormat("%d", i+1);
		tables[pIndex->getCString()] = ScriptParamObject(v[i]);
	}
}
ScriptParamObject::~ScriptParamObject()
{
	g_ScriptParamObjCount --;
}
void ScriptParamObject::operator = (double v)
{
	type = LUA_TNUMBER;
	value.number = v;
}
void ScriptParamObject::operator = (int v)
{
	type = LUA_TINTEGER;
	value.integer = v;
}
void ScriptParamObject::operator = (bool v)
{
	type = LUA_TBOOLEAN;
	value.boolean = v;
}
void ScriptParamObject::operator = (void* v)
{
	type = LUA_TUSERDATA;
	value.pointer = v;
}
void ScriptParamObject::operator = (const void* v)
{
	type = LUA_TUSERDATA;
	value.pointer = (void*)v;
}
void ScriptParamObject::operator = (const std::string& v)
{
	type = LUA_TSTRING;
	strcpy(value.string, v.c_str());
	value.string[String_Max_Length] = STRING_END_CHAR;
}
void ScriptParamObject::operator = (const char* v)
{
	type = LUA_TSTRING;
	strcpy(value.string, v);
	value.string[String_Max_Length] = STRING_END_CHAR;
}
void ScriptParamObject::operator = (char* v)
{
	type = LUA_TSTRING;
	strcpy(value.string, v);
	value.string[String_Max_Length] = STRING_END_CHAR;
}
const ScriptParamObject* tolua_findNodeBySegmentName(const ScriptParamObject* node, const char* name)
{
	if(!node) return NULL;
	for(std::map<std::string, ScriptParamObject>::const_iterator it = node->tables.begin();
		it != node->tables.end(); ++ it) 
	{
		const char* srcStr = it->first.c_str();
		if(it->first == name)
		{
			return &(it->second);
		}
		const ScriptParamObject* pRet = tolua_findNodeBySegmentName(&(it->second), name);
		if(pRet)
		{
			return pRet;
		}
	}
	return NULL;
}
bool tolua_findBooleanValueBySegmentName(const ScriptParamObject* node, const char* name, bool& retValue)
{
	const ScriptParamObject* pRet = tolua_findNodeBySegmentName(node, name);
	if((NULL == pRet) || (LUA_TBOOLEAN != pRet->type))
		return false;
	retValue = pRet->value.boolean;
	return true;
}
bool tolua_findStringValueBySegmentName(const ScriptParamObject* node, const char* name, std::string& retValue)
{
	const ScriptParamObject* pRet = tolua_findNodeBySegmentName(node, name);
	if((NULL == pRet) || (LUA_TSTRING != pRet->type))
		return false;
	retValue = pRet->value.string;
	return true;
}
//这个函数把一个 C 对象指针置入对应的 userdata ，如果是第一次 push 则创建出新的 userdata ，否则复用曾经创建过的。
//int tolua_pushUserObject(lua_State *L, void* object)
//{
//	void** ud;
//	if (luaL_newmetatable(L, "script"))
//	{
//		// 在注册表中创建一个表存放所有的 object 指针到 userdata 的关系。
//		// 这个表应该是一个 weak table ，当 Lua 中不再存在对 C 对象的引用会删除对应的记录。
//		lua_newtable(L);
//		lua_pushliteral(L, "kv");
//		lua_setfield(L, -2, "__mode");
//		lua_setmetatable(L, -2);
//	}
//	lua_rawgetp(L,-1,object);
//	if (lua_type(L,-1)==LUA_TUSERDATA)
//	{
//		ud = (void**)lua_touserdata(L,-1);
//		if (*ud == object)
//		{
//			lua_replace(L, -2);
//			return 0;
//		}
//		// C 对象指针被释放后，有可能地址被重用。
//		// 这个时候，可能取到曾经保存起来的 userdata ，里面的指针必然为空。
//		if(*ud == NULL)
//		{
//			CCLOG("is null user object");
//			return 0;
//		}
//	}
//	ud = (void**)lua_newuserdata(L, sizeof(void*));
//	*ud = object;
//	lua_pushvalue(L, -1);
//	lua_rawsetp(L, -4, object);
//	lua_replace(L, -3);
//	lua_pop(L,1);
//	return 1;
//}
void* tolua_toUserObject(lua_State *L, int index)
{
	void** ud = (void**)lua_touserdata(L,index);
	if (ud == NULL)
		return NULL;
	// 如果 object 已在 C 代码中销毁，*ud 为 NULL 。
	return *ud;
}
//这个函数把 index 处的 userdata 转换为一个 C 对象。如果对象已经销毁，则返回 NULL 指针。 在给这个对象绑定 C 方法时，应注意在 toobject 调用后，全部对指针做检查，空指针应该被正确处理。
//这个函数会解除 C 对象在 Lua 中的引用，后续在 Lua 中对这个对象的访问，都将得到 NULL 指针。
//void tolua_deleteUserObject(lua_State *L, void *object)
//{
//	luaL_getmetatable(L, "script");
//	if (lua_istable(L,-1))
//	{
//		lua_rawgetp(L, -1, object);
//		if (lua_type(L,-1) == LUA_TUSERDATA)
//		{
//			void** ud = (void**)lua_touserdata(L,-1);
//			// 这个 assert 防止 deleteobject 被重复调用。
//			if(*ud == object)
//				CCLOG("user object exist in null");
//			// 销毁一个被 Lua 引用住的对象，只需要把 *ud 置为 NULL 。
//			*ud = NULL;
//		}
//		lua_pop(L,2);
//	}
//	else
//	{
//		// 有可能从未调用过 pushobject ，此时注册表中 script 项尚未建立。
//		lua_pop(L,1);
//	}
//}

static bool tolua_parseLuaTable(lua_State* L, ScriptParamObject& retValue)
{
	int nIndex = lua_gettop(L);
	lua_pushnil(L);
	while (lua_next(L, nIndex) != 0)    
	{    
		// 'key' (索引-2) 和 'value' (索引-1),只对Value感兴趣
		ScriptParamObject paramObj;
		std::string segmentName;
		if(lua_type(L, -2) == LUA_TSTRING)
		{
			segmentName = lua_tostring(L, -2);
		}
		else if(lua_type(L, -2) == LUA_TNUMBER)
		{
			char tmpName[ScriptParamObject::SegmentName_Max_Length];
			unsigned long segmentID = (unsigned long)lua_tonumber(L, -2);
			sprintf(tmpName, "%d", segmentID);
			segmentName = tmpName;
		}
		switch(lua_type(L, -1))
		{
		case LUA_TSTRING: paramObj = lua_tostring(L, -1); break;
		case LUA_TNUMBER: paramObj = lua_tonumber(L, -1); break;
		case LUA_TBOOLEAN: paramObj = (lua_toboolean(L, -1) != 0); break;
		case LUA_TUSERDATA: paramObj = tolua_toUserObject(L, -1); break;
		case LUA_TTABLE:
			{
				if(!tolua_parseLuaTable(L, paramObj))
				{
					CCLOG("parseLuaTable 解析lua表结构时出错");
					return false;
				}
			}
			break;
		default:
			return false;
		}
		if(retValue.tables.size() >= ScriptParamObject::Table_Max_Count)
		{
			CCLOG("parseLuaTable 表内嵌套表数量超过32，空间不足");
			return false;
		}
		else
		{
			retValue.tables.insert(std::map<std::string, ScriptParamObject>::value_type(segmentName, paramObj));
		}
		//移除 'value' ；保留 'key' 做下一次迭代 
		lua_pop(L, 1); 
	}
	return true;
}

void tolua_pushScriptParam(lua_State* L, const ScriptParamObject& p, size_t& pCount)
{
	switch(p.type)
	{
	case LUA_TNIL:				lua_pushnil(L); pCount++; break;
	case LUA_TBOOLEAN:			lua_pushboolean(L, p.value.boolean ? 1 : 0); pCount++; break;
	case LUA_TLIGHTUSERDATA: break;
	case LUA_TNUMBER:			lua_pushnumber(L, p.value.number); pCount++; break;
	case LUA_TINTEGER:			lua_pushinteger(L, p.value.integer); pCount++; break;
	case LUA_TSTRING:			lua_pushstring(L, p.value.string); pCount++; break;
	case LUA_TTABLE:
		{
			for(std::map<std::string, ScriptParamObject>::const_iterator it = p.tables.begin();
				it != p.tables.end(); ++ it)
			{
				tolua_pushScriptParam(L, it->second, pCount);
			}
		}
		break;
	case LUA_TFUNCTION: break;
	case LUA_TUSERDATA:
		{
			lua_pushlightuserdata(L, p.value.pointer);
			int val = lua_gettop(L);
			lua_getfield(L, LUA_REGISTRYINDEX, "CCNode");
			lua_setmetatable(L, val);
			pCount++; 
		}
		break;
	case LUA_TTHREAD: break;
	}
}
lua_State* tolua_callLuaFunctionBegin(const char* funcName)
{
	LuaEngine* pEngine = LuaEngine::getInstance();
	if(!pEngine) return NULL;
	lua_State* L = pEngine->getLuaStack()->getLuaState();
	if(!L) return NULL;
	lua_getglobal(L, funcName);
	if (!lua_isfunction(L, -1))
	{
		CCLOG("[LUA ERROR] name '%s' does not represent a Lua function", funcName);
		lua_pop(L, 1);
		return NULL;
	}
	return L;
}
void tolua_callLuaFunctionWithParamsNoResult(const char* funcName, const std::vector<ScriptParamObject>& params)
{
	lua_State* L = tolua_callLuaFunctionBegin(funcName);
	if(NULL == L) return;
	size_t pCount = 0;
	for(size_t i = 0; i < params.size(); ++ i)
		tolua_pushScriptParam(L, params[i], pCount);
	int error = lua_pcall(L, pCount, 0, 0);
	if (error)
	{
		CCLOG("[LUA ERROR] %s", lua_tostring(L, -1));
		lua_pop(L, 1); // clean error message
		return;
	}
}
void tolua_callLuaFunctionWithParamsResult1(const char* funcName, const std::vector<ScriptParamObject>& params, ScriptParamObject& result)
{
	lua_State* L = tolua_callLuaFunctionBegin(funcName);
	if(NULL == L) return;
	size_t pCount = 0;
	for(size_t i = 0; i < params.size(); ++ i)
		tolua_pushScriptParam(L, params[i], pCount);
	int error = lua_pcall(L, pCount, 1, 0);
	if (error)
	{
		CCLOG("[LUA ERROR] %s", lua_tostring(L, -1));
		lua_pop(L, 1); // clean error message
		return;
	}
	switch(lua_type(L, -1))
	{
	case LUA_TSTRING: result = lua_tostring(L, -1); break;
	case LUA_TNUMBER: result = lua_tonumber(L, -1); break;
	case LUA_TBOOLEAN: result = (lua_toboolean(L, -1) != 0); break;
	case LUA_TUSERDATA: result = tolua_toUserObject(L, -1); break;
	case LUA_TTABLE:
		{
			if(!tolua_parseLuaTable(L, result))
			{
				CCLOG("parseLuaTable 解析lua表结构时出错");
				break;
			}
		}
		break;
	case LUA_TNIL:
		CCLOG("lua function %s return a nil", funcName);
		break;
	default:
		CCLOG("unknow lua function result type[%d]", lua_type(L, -1));
		break;
	}
	lua_pop(L, 1); //只需要清理Return Value，pcall调用的入栈参数会自动清理
	// 清除__CSendTableParam
	//tolua_setLuaGlobalTableToNil(L, "__CSendTableParam");
}
#define BUILD_SCRIPT_PARAMS_COUNT1 std::vector<ScriptParamObject> ps; ps.push_back(ScriptParamObject(p1));
#define BUILD_SCRIPT_PARAMS_COUNT2 std::vector<ScriptParamObject> ps; ps.push_back(ScriptParamObject(p1)); ps.push_back(ScriptParamObject(p2));
#define BUILD_SCRIPT_PARAMS_COUNT3 std::vector<ScriptParamObject> ps; ps.push_back(ScriptParamObject(p1)); ps.push_back(ScriptParamObject(p2)); ps.push_back(ScriptParamObject(p3));
#define BUILD_SCRIPT_PARAMS_COUNT4 std::vector<ScriptParamObject> ps; ps.push_back(ScriptParamObject(p1)); ps.push_back(ScriptParamObject(p2)); ps.push_back(ScriptParamObject(p3)); ps.push_back(ScriptParamObject(p4));
#define BUILD_SCRIPT_PARAMS_COUNT5 std::vector<ScriptParamObject> ps; ps.push_back(ScriptParamObject(p1)); ps.push_back(ScriptParamObject(p2)); ps.push_back(ScriptParamObject(p3)); ps.push_back(ScriptParamObject(p4)); ps.push_back(ScriptParamObject(p5));
#define BUILD_SCRIPT_PARAMS_COUNT6 std::vector<ScriptParamObject> ps; ps.push_back(ScriptParamObject(p1)); ps.push_back(ScriptParamObject(p2)); ps.push_back(ScriptParamObject(p3)); ps.push_back(ScriptParamObject(p4)); ps.push_back(ScriptParamObject(p5)); ps.push_back(ScriptParamObject(p6));
#define BUILD_SCRIPT_PARAMS_COUNT7 std::vector<ScriptParamObject> ps; ps.push_back(ScriptParamObject(p1)); ps.push_back(ScriptParamObject(p2)); ps.push_back(ScriptParamObject(p3)); ps.push_back(ScriptParamObject(p4)); ps.push_back(ScriptParamObject(p5)); ps.push_back(ScriptParamObject(p6)); ps.push_back(ScriptParamObject(p7));

void tolua_callLuaFunctionWithParam0NoResult(const char* funcName)
{
	tolua_callLuaFunctionWithParamsNoResult(funcName, std::vector<ScriptParamObject>());
}
void tolua_callLuaFunctionWithParam1NoResult(const char* funcName, const ScriptParamObject& p1)
{
	BUILD_SCRIPT_PARAMS_COUNT1;
	tolua_callLuaFunctionWithParamsNoResult(funcName, ps);
}
void tolua_callLuaFunctionWithParam2NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2)
{
	BUILD_SCRIPT_PARAMS_COUNT2;
	tolua_callLuaFunctionWithParamsNoResult(funcName, ps);
}
void tolua_callLuaFunctionWithParam3NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3)
{
	BUILD_SCRIPT_PARAMS_COUNT3;
	tolua_callLuaFunctionWithParamsNoResult(funcName, ps);
}
void tolua_callLuaFunctionWithParam4NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4)
{
	BUILD_SCRIPT_PARAMS_COUNT4;
	tolua_callLuaFunctionWithParamsNoResult(funcName, ps);
}
void tolua_callLuaFunctionWithParam5NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5)
{
	BUILD_SCRIPT_PARAMS_COUNT5;
	tolua_callLuaFunctionWithParamsNoResult(funcName, ps);
}
void tolua_callLuaFunctionWithParam6NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5, const ScriptParamObject& p6)
{
	BUILD_SCRIPT_PARAMS_COUNT6;
	tolua_callLuaFunctionWithParamsNoResult(funcName, ps);
}
void tolua_callLuaFunctionWithParam7NoResult(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5, const ScriptParamObject& p6, const ScriptParamObject& p7)
{
	BUILD_SCRIPT_PARAMS_COUNT7;
	tolua_callLuaFunctionWithParamsNoResult(funcName, ps);
}

ScriptParamObject tolua_callLuaFunctionWithParam0WithResult1(const char* funcName)
{
	ScriptParamObject result;
	tolua_callLuaFunctionWithParamsResult1(funcName, std::vector<ScriptParamObject>(), result);
	return result;
}
ScriptParamObject tolua_callLuaFunctionWithParam1WithResult1(const char* funcName, const ScriptParamObject& p1)
{
	ScriptParamObject result;
	BUILD_SCRIPT_PARAMS_COUNT1;
	tolua_callLuaFunctionWithParamsResult1(funcName, ps, result);
	return result;
}
ScriptParamObject tolua_callLuaFunctionWithParam2WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2)
{
	ScriptParamObject result;
	BUILD_SCRIPT_PARAMS_COUNT2;
	tolua_callLuaFunctionWithParamsResult1(funcName, ps, result);
	return result;
}
ScriptParamObject tolua_callLuaFunctionWithParam3WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3)
{
	ScriptParamObject result;
	BUILD_SCRIPT_PARAMS_COUNT3;
	tolua_callLuaFunctionWithParamsResult1(funcName, ps, result);
	return result;
}
ScriptParamObject tolua_callLuaFunctionWithParam4WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4)
{
	ScriptParamObject result;
	BUILD_SCRIPT_PARAMS_COUNT4;
	tolua_callLuaFunctionWithParamsResult1(funcName, ps, result);
	return result;
}
ScriptParamObject tolua_callLuaFunctionWithParam5WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5)
{
	ScriptParamObject result;
	BUILD_SCRIPT_PARAMS_COUNT5;
	tolua_callLuaFunctionWithParamsResult1(funcName, ps, result);
	return result;
}
ScriptParamObject tolua_callLuaFunctionWithParam5WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5, const ScriptParamObject& p6)
{
	ScriptParamObject result;
	BUILD_SCRIPT_PARAMS_COUNT6;
	tolua_callLuaFunctionWithParamsResult1(funcName, ps, result);
	return result;
}
ScriptParamObject tolua_callLuaFunctionWithParam5WithResult1(const char* funcName, const ScriptParamObject& p1, const ScriptParamObject& p2, const ScriptParamObject& p3, const ScriptParamObject& p4, const ScriptParamObject& p5, const ScriptParamObject& p6, const ScriptParamObject& p7)
{
	ScriptParamObject result;
	BUILD_SCRIPT_PARAMS_COUNT7;
	tolua_callLuaFunctionWithParamsResult1(funcName, ps, result);
	return result;
}


void callLuaFuncNoResult(const char* funcName)
{
	tolua_callLuaFunctionWithParam0NoResult(funcName);
}
std::string callLuaFuncWithStringResult(const char* funcName)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam0WithResult1(funcName);
	if(result.type == LUA_TSTRING) return result.value.string;
	return "";
}
void* callLuaFuncWithUserdataResult(const char* funcName)
{
	ScriptParamObject result = tolua_callLuaFunctionWithParam0WithResult1(funcName);
	if(result.type == LUA_TUSERDATA) return result.value.pointer;
	return NULL;
}

bool tolua_getLuaStringValue_ByTable(lua_State* L, const char* fieldName, const char* tableName, std::string& retValue)
{
	lua_getglobal(L, tableName);
	if(!lua_istable(L, -1))
	{
		return false;
	}
	lua_pushlstring(L, fieldName, strlen(fieldName));
	lua_gettable(L, -2);
	if (!lua_isstring(L, -1))
	{
		return false;
	}
	retValue = lua_tostring(L, -1);
	lua_pop(L, 1);

	return true;
}

void tolua_setLuaGlobalTableToNil(lua_State* L, const char* tableName)
{
	lua_pushnil(L);
	lua_setglobal(L, tableName);
	lua_pop(L, 1);
}

bool tolua_getLuaTableValue_ByTable(lua_State* L, const char* tableName, ScriptParamObject& retValue)
{
	lua_getglobal(L, tableName);
	if(!lua_istable(L, -1))
	{
		return false;
	}
	return tolua_parseLuaTable(L, retValue);
}