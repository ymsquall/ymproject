/*
** Lua binding: LuaSOSExtern
** Generated automatically by tolua++-1.0.92 on 11/15/13 00:22:45.
*/

/****************************************************************************
 Copyright (c) 2011 cocos2d-x.org

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

extern "C" {
#include "cocos2dx_support/tolua_fix.h"
}

#include <map>
#include <string>
#include "LuaSOSExtern.h"
#include "cocos2dx_support/CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos-ext.h"
#include "unity/singleton.h"
#include "ViewModelManager.h"
#include "Model_GameLand.h"
#include "View_GameLand.h"
#include "LuaUserDataConversion.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace cocos2d::extension::armature;
using namespace framework;
using namespace CocosDenshion;

/* Exported function */
TOLUA_API int  tolua_LuaSOSExtern_open (lua_State* tolua_S);

#include "LuaSOSExtern.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CCPoint (lua_State* tolua_S)
{
 CCPoint* self = (CCPoint*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_LandTreeGrid (lua_State* tolua_S)
{
 LandTreeGrid* self = (LandTreeGrid*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ViewModelManager (lua_State* tolua_S)
{
 ViewModelManager* self = (ViewModelManager*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__unity__SingletonAutoT_ViewModelManager_ (lua_State* tolua_S)
{
 framework::unity::SingletonAutoT<ViewModelManager>* self = (framework::unity::SingletonAutoT<ViewModelManager>*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_GameLandView (lua_State* tolua_S)
{
 GameLandView* self = (GameLandView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_SoldierTroopsUnitGrid (lua_State* tolua_S)
{
 SoldierTroopsUnitGrid* self = (SoldierTroopsUnitGrid*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCPoint");
 tolua_usertype(tolua_S,"mvvm::IModelManager");
 tolua_usertype(tolua_S,"framework::unity::SingletonAutoT<ViewModelManager>");
 tolua_usertype(tolua_S,"uint8");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"engine::AppDelegate");
 tolua_usertype(tolua_S,"framework::unity::blockwrite");
 tolua_usertype(tolua_S,"LandTreeGrid");
 tolua_usertype(tolua_S,"ViewModelManager");
 tolua_usertype(tolua_S,"cocos2d::extension::Armature");
 tolua_usertype(tolua_S,"GameLandModel");
 tolua_usertype(tolua_S,"LuaUserDataConversion");
 tolua_usertype(tolua_S,"unity::RoutedEventArgs");
 tolua_usertype(tolua_S,"UILayer");
 tolua_usertype(tolua_S,"ModelType");
 tolua_usertype(tolua_S,"SoldierTroopsUnitGrid");
 tolua_usertype(tolua_S,"unity::SingletonAutoT<ViewModelManager>");
 tolua_usertype(tolua_S,"ModelImpl");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"GameLandView");
 tolua_usertype(tolua_S,"unity::object");
}

/* method: delete of class  framework::unity::SingletonAutoT<ViewModelManager> */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_framework_unity_SingletonAutoT_ViewModelManager__delete00
static int tolua_LuaSOSExtern_framework_unity_SingletonAutoT_ViewModelManager__delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::SingletonAutoT<ViewModelManager>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::SingletonAutoT<ViewModelManager>* self = (framework::unity::SingletonAutoT<ViewModelManager>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: point of class  framework::unity::SingletonAutoT<ViewModelManager> */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_framework_unity_SingletonAutoT_ViewModelManager__point00
static int tolua_LuaSOSExtern_framework_unity_SingletonAutoT_ViewModelManager__point00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::unity::SingletonAutoT<ViewModelManager>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ViewModelManager* tolua_ret = (ViewModelManager*)  framework::unity::SingletonAutoT<ViewModelManager>::point();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ViewModelManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'point'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: point of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_point00
static int tolua_LuaSOSExtern_ViewModelManager_point00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ViewModelManager* tolua_ret = (ViewModelManager*)  ViewModelManager::point();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ViewModelManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'point'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadLuaScript of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_reloadLuaScript00
static int tolua_LuaSOSExtern_ViewModelManager_reloadLuaScript00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* luaFile = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   ViewModelManager::reloadLuaScript(luaFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadLuaScript'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_new00
static int tolua_LuaSOSExtern_ViewModelManager_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ViewModelManager* tolua_ret = (ViewModelManager*)  Mtolua_new((ViewModelManager)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ViewModelManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_new00_local
static int tolua_LuaSOSExtern_ViewModelManager_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ViewModelManager* tolua_ret = (ViewModelManager*)  Mtolua_new((ViewModelManager)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ViewModelManager");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_delete00
static int tolua_LuaSOSExtern_ViewModelManager_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ViewModelManager* self = (ViewModelManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithAppStart of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_initWithAppStart00
static int tolua_LuaSOSExtern_ViewModelManager_initWithAppStart00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"engine::AppDelegate",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ViewModelManager* self = (ViewModelManager*)  tolua_tousertype(tolua_S,1,0);
  engine::AppDelegate* pApp = ((engine::AppDelegate*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithAppStart'", NULL);
#endif
  {
   self->initWithAppStart(pApp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithAppStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: modelLoop of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_modelLoop00
static int tolua_LuaSOSExtern_ViewModelManager_modelLoop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ViewModelManager* self = (ViewModelManager*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'modelLoop'", NULL);
#endif
  {
   self->modelLoop(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'modelLoop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onAppInitOveredShowingBefore of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_onAppInitOveredShowingBefore00
static int tolua_LuaSOSExtern_ViewModelManager_onAppInitOveredShowingBefore00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"engine::AppDelegate",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"unity::RoutedEventArgs",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ViewModelManager* self = (ViewModelManager*)  tolua_tousertype(tolua_S,1,0);
  engine::AppDelegate* pApp = ((engine::AppDelegate*)  tolua_tousertype(tolua_S,2,0));
  unity::RoutedEventArgs* args = ((unity::RoutedEventArgs*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onAppInitOveredShowingBefore'", NULL);
#endif
  {
   self->onAppInitOveredShowingBefore(pApp,args);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onAppInitOveredShowingBefore'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onAppInitOveredShowingAfter of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_onAppInitOveredShowingAfter00
static int tolua_LuaSOSExtern_ViewModelManager_onAppInitOveredShowingAfter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"engine::AppDelegate",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"unity::RoutedEventArgs",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ViewModelManager* self = (ViewModelManager*)  tolua_tousertype(tolua_S,1,0);
  engine::AppDelegate* pApp = ((engine::AppDelegate*)  tolua_tousertype(tolua_S,2,0));
  unity::RoutedEventArgs* args = ((unity::RoutedEventArgs*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onAppInitOveredShowingAfter'", NULL);
#endif
  {
   self->onAppInitOveredShowingAfter(pApp,args);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onAppInitOveredShowingAfter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: selectModel of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_selectModel00
static int tolua_LuaSOSExtern_ViewModelManager_selectModel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ModelType",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ViewModelManager* self = (ViewModelManager*)  tolua_tousertype(tolua_S,1,0);
  ModelType type = *((ModelType*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'selectModel'", NULL);
#endif
  {
   self->selectModel(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'selectModel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: luaPlayStruggle of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_luaPlayStruggle00
static int tolua_LuaSOSExtern_ViewModelManager_luaPlayStruggle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ViewModelManager* self = (ViewModelManager*)  tolua_tousertype(tolua_S,1,0);
  framework::unity::blockwrite* data = ((framework::unity::blockwrite*)  tolua_tousertype(tolua_S,2,0));
  bool isLive = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'luaPlayStruggle'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->luaPlayStruggle(data,isLive);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'luaPlayStruggle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __mvvm of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_get_ViewModelManager___mvvm__IModelManager__
static int tolua_get_ViewModelManager___mvvm__IModelManager__(lua_State* tolua_S)
{
  ViewModelManager* self = (ViewModelManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__mvvm'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<mvvm::IModelManager*>(self), "mvvm::IModelManager");
#else
   tolua_pushusertype(tolua_S,(void*)((mvvm::IModelManager*)self), "mvvm::IModelManager");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __unity of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_get_ViewModelManager___unity__SingletonAutoT_ViewModelManager___
static int tolua_get_ViewModelManager___unity__SingletonAutoT_ViewModelManager___(lua_State* tolua_S)
{
  ViewModelManager* self = (ViewModelManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__unity'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<unity::SingletonAutoT<ViewModelManager>*>(self), "unity::SingletonAutoT<ViewModelManager>");
#else
   tolua_pushusertype(tolua_S,(void*)((unity::SingletonAutoT<ViewModelManager>*)self), "unity::SingletonAutoT<ViewModelManager>");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sideGrids of class  LandTreeGrid */
#ifndef TOLUA_DISABLE_tolua_get_LuaSOSExtern_LandTreeGrid_sideGrids
static int tolua_get_LuaSOSExtern_LandTreeGrid_sideGrids(lua_State* tolua_S)
{
 int tolua_index;
  LandTreeGrid* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (LandTreeGrid*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=GridOrientation_maxnum)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)self->sideGrids[tolua_index],"LandTreeGrid");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sideGrids of class  LandTreeGrid */
#ifndef TOLUA_DISABLE_tolua_set_LuaSOSExtern_LandTreeGrid_sideGrids
static int tolua_set_LuaSOSExtern_LandTreeGrid_sideGrids(lua_State* tolua_S)
{
 int tolua_index;
  LandTreeGrid* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (LandTreeGrid*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=GridOrientation_maxnum)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->sideGrids[tolua_index] = ((LandTreeGrid*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: showGrid of class  LandTreeGrid */
#ifndef TOLUA_DISABLE_tolua_get_LandTreeGrid_showGrid
static int tolua_get_LandTreeGrid_showGrid(lua_State* tolua_S)
{
  LandTreeGrid* self = (LandTreeGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'showGrid'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->showGrid);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: showGrid of class  LandTreeGrid */
#ifndef TOLUA_DISABLE_tolua_set_LandTreeGrid_showGrid
static int tolua_set_LandTreeGrid_showGrid(lua_State* tolua_S)
{
  LandTreeGrid* self = (LandTreeGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'showGrid'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->showGrid = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: gridView of class  LandTreeGrid */
#ifndef TOLUA_DISABLE_tolua_get_LandTreeGrid_gridView_ptr
static int tolua_get_LandTreeGrid_gridView_ptr(lua_State* tolua_S)
{
  LandTreeGrid* self = (LandTreeGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gridView'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->gridView,"CCObject");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: gridView of class  LandTreeGrid */
#ifndef TOLUA_DISABLE_tolua_set_LandTreeGrid_gridView_ptr
static int tolua_set_LandTreeGrid_gridView_ptr(lua_State* tolua_S)
{
  LandTreeGrid* self = (LandTreeGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'gridView'",NULL);
  if (!tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->gridView = ((CCObject*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LandTreeGrid */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LandTreeGrid_new00
static int tolua_LuaSOSExtern_LandTreeGrid_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LandTreeGrid",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LandTreeGrid* tolua_ret = (LandTreeGrid*)  Mtolua_new((LandTreeGrid)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"LandTreeGrid");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  LandTreeGrid */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LandTreeGrid_new00_local
static int tolua_LuaSOSExtern_LandTreeGrid_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LandTreeGrid",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LandTreeGrid* tolua_ret = (LandTreeGrid*)  Mtolua_new((LandTreeGrid)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"LandTreeGrid");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  LandTreeGrid */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LandTreeGrid_delete00
static int tolua_LuaSOSExtern_LandTreeGrid_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LandTreeGrid",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LandTreeGrid* self = (LandTreeGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCenter of class  LandTreeGrid */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LandTreeGrid_getCenter00
static int tolua_LuaSOSExtern_LandTreeGrid_getCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LandTreeGrid",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LandTreeGrid* self = (LandTreeGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCenter'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getCenter();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: number of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_get_SoldierTroopsUnitGrid_number
static int tolua_get_SoldierTroopsUnitGrid_number(lua_State* tolua_S)
{
  SoldierTroopsUnitGrid* self = (SoldierTroopsUnitGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'number'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->number,"uint8");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: number of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_set_SoldierTroopsUnitGrid_number
static int tolua_set_SoldierTroopsUnitGrid_number(lua_State* tolua_S)
{
  SoldierTroopsUnitGrid* self = (SoldierTroopsUnitGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'number'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"uint8",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->number = *((uint8*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: troopID of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_get_SoldierTroopsUnitGrid_troopID
static int tolua_get_SoldierTroopsUnitGrid_troopID(lua_State* tolua_S)
{
  SoldierTroopsUnitGrid* self = (SoldierTroopsUnitGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'troopID'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->troopID,"uint8");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: troopID of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_set_SoldierTroopsUnitGrid_troopID
static int tolua_set_SoldierTroopsUnitGrid_troopID(lua_State* tolua_S)
{
  SoldierTroopsUnitGrid* self = (SoldierTroopsUnitGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'troopID'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"uint8",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->troopID = *((uint8*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: sType of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_get_SoldierTroopsUnitGrid_sType
static int tolua_get_SoldierTroopsUnitGrid_sType(lua_State* tolua_S)
{
  SoldierTroopsUnitGrid* self = (SoldierTroopsUnitGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sType'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->sType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: sType of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_set_SoldierTroopsUnitGrid_sType
static int tolua_set_SoldierTroopsUnitGrid_sType(lua_State* tolua_S)
{
  SoldierTroopsUnitGrid* self = (SoldierTroopsUnitGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'sType'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->sType = ((SoldierType) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: oType of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_get_SoldierTroopsUnitGrid_oType
static int tolua_get_SoldierTroopsUnitGrid_oType(lua_State* tolua_S)
{
  SoldierTroopsUnitGrid* self = (SoldierTroopsUnitGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'oType'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->oType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: oType of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_set_SoldierTroopsUnitGrid_oType
static int tolua_set_SoldierTroopsUnitGrid_oType(lua_State* tolua_S)
{
  SoldierTroopsUnitGrid* self = (SoldierTroopsUnitGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'oType'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->oType = ((GridOrientation) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_SoldierTroopsUnitGrid_new00
static int tolua_LuaSOSExtern_SoldierTroopsUnitGrid_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SoldierTroopsUnitGrid",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SoldierTroopsUnitGrid* tolua_ret = (SoldierTroopsUnitGrid*)  Mtolua_new((SoldierTroopsUnitGrid)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SoldierTroopsUnitGrid");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_SoldierTroopsUnitGrid_new00_local
static int tolua_LuaSOSExtern_SoldierTroopsUnitGrid_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SoldierTroopsUnitGrid",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SoldierTroopsUnitGrid* tolua_ret = (SoldierTroopsUnitGrid*)  Mtolua_new((SoldierTroopsUnitGrid)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SoldierTroopsUnitGrid");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  SoldierTroopsUnitGrid */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_SoldierTroopsUnitGrid_delete00
static int tolua_LuaSOSExtern_SoldierTroopsUnitGrid_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SoldierTroopsUnitGrid",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SoldierTroopsUnitGrid* self = (SoldierTroopsUnitGrid*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadLandData of class  GameLandModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandModel_loadLandData00
static int tolua_LuaSOSExtern_GameLandModel_loadLandData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandModel",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandModel* self = (GameLandModel*)  tolua_tousertype(tolua_S,1,0);
  const std::string landName = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadLandData'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->loadLandData(landName);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)landName);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadLandData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearLandData of class  GameLandModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandModel_clearLandData00
static int tolua_LuaSOSExtern_GameLandModel_clearLandData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandModel* self = (GameLandModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearLandData'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->clearLandData();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearLandData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSoldierByTroopAndNumber of class  GameLandModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandModel_getSoldierByTroopAndNumber00
static int tolua_LuaSOSExtern_GameLandModel_getSoldierByTroopAndNumber00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameLandModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameLandModel* self = (const GameLandModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSoldierByTroopAndNumber'", NULL);
#endif
  {
   const SoldierTroopsUnitGrid* tolua_ret = (const SoldierTroopsUnitGrid*)  self->getSoldierByTroopAndNumber();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const SoldierTroopsUnitGrid");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSoldierByTroopAndNumber'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTroopName of class  GameLandModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandModel_getTroopName00
static int tolua_LuaSOSExtern_GameLandModel_getTroopName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameLandModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameLandModel* self = (const GameLandModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTroopName'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getTroopName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTroopName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: luaSetBoolProperty of class  GameLandModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandModel_luaSetBoolProperty00
static int tolua_LuaSOSExtern_GameLandModel_luaSetBoolProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandModel* self = (GameLandModel*)  tolua_tousertype(tolua_S,1,0);
  GameLandModel::PropertyType type = ((GameLandModel::PropertyType) (int)  tolua_tonumber(tolua_S,2,0));
  bool b = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'luaSetBoolProperty'", NULL);
#endif
  {
   self->luaSetBoolProperty(type,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'luaSetBoolProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: luaSetNumberProperty of class  GameLandModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandModel_luaSetNumberProperty00
static int tolua_LuaSOSExtern_GameLandModel_luaSetNumberProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandModel* self = (GameLandModel*)  tolua_tousertype(tolua_S,1,0);
  GameLandModel::PropertyType type = ((GameLandModel::PropertyType) (int)  tolua_tonumber(tolua_S,2,0));
  int v = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'luaSetNumberProperty'", NULL);
#endif
  {
   self->luaSetNumberProperty(type,v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'luaSetNumberProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: luaGetViewBinding of class  GameLandModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandModel_luaGetViewBinding00
static int tolua_LuaSOSExtern_GameLandModel_luaGetViewBinding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandModel* self = (GameLandModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'luaGetViewBinding'", NULL);
#endif
  {
   GameLandView* tolua_ret = (GameLandView*)  self->luaGetViewBinding();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameLandView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'luaGetViewBinding'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  GameLandView */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandView_new00
static int tolua_LuaSOSExtern_GameLandView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GameLandView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GameLandView* tolua_ret = (GameLandView*)  Mtolua_new((GameLandView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameLandView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  GameLandView */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandView_new00_local
static int tolua_LuaSOSExtern_GameLandView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GameLandView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GameLandView* tolua_ret = (GameLandView*)  Mtolua_new((GameLandView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameLandView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  GameLandView */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandView_delete00
static int tolua_LuaSOSExtern_GameLandView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandView* self = (GameLandView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  GameLandView */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandView_init00
static int tolua_LuaSOSExtern_GameLandView_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandView* self = (GameLandView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initForMvvm of class  GameLandView */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandView_initForMvvm00
static int tolua_LuaSOSExtern_GameLandView_initForMvvm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandView* self = (GameLandView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initForMvvm'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initForMvvm();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initForMvvm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  GameLandView */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandView_update00
static int tolua_LuaSOSExtern_GameLandView_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandView* self = (GameLandView*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: doLiveChanged of class  GameLandView */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandView_doLiveChanged00
static int tolua_LuaSOSExtern_GameLandView_doLiveChanged00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandView* self = (GameLandView*)  tolua_tousertype(tolua_S,1,0);
  bool isLive = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'doLiveChanged'", NULL);
#endif
  {
   self->doLiveChanged(isLive);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'doLiveChanged'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: doTroopChanged of class  GameLandView */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandView_doTroopChanged00
static int tolua_LuaSOSExtern_GameLandView_doTroopChanged00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandView",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandView* self = (GameLandView*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'doTroopChanged'", NULL);
#endif
  {
   self->doTroopChanged(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'doTroopChanged'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: doSelectGrid of class  GameLandView */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandView_doSelectGrid00
static int tolua_LuaSOSExtern_GameLandView_doSelectGrid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const LandTreeGrid",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandView* self = (GameLandView*)  tolua_tousertype(tolua_S,1,0);
  const LandTreeGrid* pGrid = ((const LandTreeGrid*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'doSelectGrid'", NULL);
#endif
  {
   self->doSelectGrid(pGrid);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'doSelectGrid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toBlockWrite of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LuaUserDataConversion_toBlockWrite00
static int tolua_LuaSOSExtern_LuaUserDataConversion_toBlockWrite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaUserDataConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   framework::unity::blockwrite* tolua_ret = (framework::unity::blockwrite*)  LuaUserDataConversion::toBlockWrite(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::unity::blockwrite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toBlockWrite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toGameLandModle of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LuaUserDataConversion_toGameLandModle00
static int tolua_LuaSOSExtern_LuaUserDataConversion_toGameLandModle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaUserDataConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   GameLandModel* tolua_ret = (GameLandModel*)  LuaUserDataConversion::toGameLandModle(pointer);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameLandModel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toGameLandModle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toGameLandView of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LuaUserDataConversion_toGameLandView00
static int tolua_LuaSOSExtern_LuaUserDataConversion_toGameLandView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaUserDataConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   GameLandView* tolua_ret = (GameLandView*)  LuaUserDataConversion::toGameLandView(pointer);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameLandView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toGameLandView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toLandTreeGrid of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LuaUserDataConversion_toLandTreeGrid00
static int tolua_LuaSOSExtern_LuaUserDataConversion_toLandTreeGrid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaUserDataConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   LandTreeGrid* tolua_ret = (LandTreeGrid*)  LuaUserDataConversion::toLandTreeGrid(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"LandTreeGrid");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toLandTreeGrid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toSoldierTroopsUnitGrid of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LuaUserDataConversion_toSoldierTroopsUnitGrid00
static int tolua_LuaSOSExtern_LuaUserDataConversion_toSoldierTroopsUnitGrid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaUserDataConversion",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"LandTreeGrid",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LandTreeGrid* grid = ((LandTreeGrid*)  tolua_tousertype(tolua_S,2,0));
  {
   SoldierTroopsUnitGrid* tolua_ret = (SoldierTroopsUnitGrid*)  LuaUserDataConversion::toSoldierTroopsUnitGrid(grid);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SoldierTroopsUnitGrid");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toSoldierTroopsUnitGrid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toArmature of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LuaUserDataConversion_toArmature00
static int tolua_LuaSOSExtern_LuaUserDataConversion_toArmature00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaUserDataConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   cocos2d::extension::Armature* tolua_ret = (cocos2d::extension::Armature*)  LuaUserDataConversion::toArmature(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cocos2d::extension::Armature");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toArmature'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toNode of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_LuaUserDataConversion_toNode00
static int tolua_LuaSOSExtern_LuaUserDataConversion_toNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaUserDataConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   CCNode* tolua_ret = (CCNode*)  LuaUserDataConversion::toNode(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_LuaSOSExtern_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"framework",0);
  tolua_beginmodule(tolua_S,"framework");
   tolua_module(tolua_S,"unity",0);
   tolua_beginmodule(tolua_S,"unity");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"SingletonAutoT_ViewModelManager_","framework::unity::SingletonAutoT<ViewModelManager>","",tolua_collect_framework__unity__SingletonAutoT_ViewModelManager_);
    #else
    tolua_cclass(tolua_S,"SingletonAutoT_ViewModelManager_","framework::unity::SingletonAutoT<ViewModelManager>","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"SingletonAutoT_ViewModelManager_");
     tolua_function(tolua_S,"delete",tolua_LuaSOSExtern_framework_unity_SingletonAutoT_ViewModelManager__delete00);
     tolua_function(tolua_S,"point",tolua_LuaSOSExtern_framework_unity_SingletonAutoT_ViewModelManager__point00);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ViewModelManager","ViewModelManager","unity::object",tolua_collect_ViewModelManager);
  #else
  tolua_cclass(tolua_S,"ViewModelManager","ViewModelManager","unity::object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ViewModelManager");
   tolua_function(tolua_S,"point",tolua_LuaSOSExtern_ViewModelManager_point00);
   tolua_function(tolua_S,"reloadLuaScript",tolua_LuaSOSExtern_ViewModelManager_reloadLuaScript00);
   tolua_function(tolua_S,"new",tolua_LuaSOSExtern_ViewModelManager_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaSOSExtern_ViewModelManager_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaSOSExtern_ViewModelManager_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaSOSExtern_ViewModelManager_delete00);
   tolua_function(tolua_S,"initWithAppStart",tolua_LuaSOSExtern_ViewModelManager_initWithAppStart00);
   tolua_function(tolua_S,"modelLoop",tolua_LuaSOSExtern_ViewModelManager_modelLoop00);
   tolua_function(tolua_S,"onAppInitOveredShowingBefore",tolua_LuaSOSExtern_ViewModelManager_onAppInitOveredShowingBefore00);
   tolua_function(tolua_S,"onAppInitOveredShowingAfter",tolua_LuaSOSExtern_ViewModelManager_onAppInitOveredShowingAfter00);
   tolua_function(tolua_S,"selectModel",tolua_LuaSOSExtern_ViewModelManager_selectModel00);
   tolua_function(tolua_S,"luaPlayStruggle",tolua_LuaSOSExtern_ViewModelManager_luaPlayStruggle00);
   tolua_variable(tolua_S,"__mvvm__IModelManager__",tolua_get_ViewModelManager___mvvm__IModelManager__,NULL);
   tolua_variable(tolua_S,"__unity__SingletonAutoT_ViewModelManager___",tolua_get_ViewModelManager___unity__SingletonAutoT_ViewModelManager___,NULL);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"SoldierType_Saber",SoldierType_Saber);
  tolua_constant(tolua_S,"SoldierType_Rider",SoldierType_Rider);
  tolua_constant(tolua_S,"SoldierType_Lancer",SoldierType_Lancer);
  tolua_constant(tolua_S,"SoldierType_Archer",SoldierType_Archer);
  tolua_constant(tolua_S,"SoldierType_unused",SoldierType_unused);
  tolua_constant(tolua_S,"GridOrientation_topper",GridOrientation_topper);
  tolua_constant(tolua_S,"GridOrientation_lefttop",GridOrientation_lefttop);
  tolua_constant(tolua_S,"GridOrientation_leftbottom",GridOrientation_leftbottom);
  tolua_constant(tolua_S,"GridOrientation_bottom",GridOrientation_bottom);
  tolua_constant(tolua_S,"GridOrientation_rightbottom",GridOrientation_rightbottom);
  tolua_constant(tolua_S,"GridOrientation_righttop",GridOrientation_righttop);
  tolua_constant(tolua_S,"GridOrientation_maxnum",GridOrientation_maxnum);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"LandTreeGrid","LandTreeGrid","",tolua_collect_LandTreeGrid);
  #else
  tolua_cclass(tolua_S,"LandTreeGrid","LandTreeGrid","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"LandTreeGrid");
   tolua_array(tolua_S,"sideGrids",tolua_get_LuaSOSExtern_LandTreeGrid_sideGrids,tolua_set_LuaSOSExtern_LandTreeGrid_sideGrids);
   tolua_variable(tolua_S,"showGrid",tolua_get_LandTreeGrid_showGrid,tolua_set_LandTreeGrid_showGrid);
   tolua_variable(tolua_S,"gridView",tolua_get_LandTreeGrid_gridView_ptr,tolua_set_LandTreeGrid_gridView_ptr);
   tolua_function(tolua_S,"new",tolua_LuaSOSExtern_LandTreeGrid_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaSOSExtern_LandTreeGrid_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaSOSExtern_LandTreeGrid_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaSOSExtern_LandTreeGrid_delete00);
   tolua_function(tolua_S,"getCenter",tolua_LuaSOSExtern_LandTreeGrid_getCenter00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SoldierTroopsUnitGrid","SoldierTroopsUnitGrid","LandTreeGrid",tolua_collect_SoldierTroopsUnitGrid);
  #else
  tolua_cclass(tolua_S,"SoldierTroopsUnitGrid","SoldierTroopsUnitGrid","LandTreeGrid",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SoldierTroopsUnitGrid");
   tolua_variable(tolua_S,"number",tolua_get_SoldierTroopsUnitGrid_number,tolua_set_SoldierTroopsUnitGrid_number);
   tolua_variable(tolua_S,"troopID",tolua_get_SoldierTroopsUnitGrid_troopID,tolua_set_SoldierTroopsUnitGrid_troopID);
   tolua_variable(tolua_S,"sType",tolua_get_SoldierTroopsUnitGrid_sType,tolua_set_SoldierTroopsUnitGrid_sType);
   tolua_variable(tolua_S,"oType",tolua_get_SoldierTroopsUnitGrid_oType,tolua_set_SoldierTroopsUnitGrid_oType);
   tolua_function(tolua_S,"new",tolua_LuaSOSExtern_SoldierTroopsUnitGrid_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaSOSExtern_SoldierTroopsUnitGrid_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaSOSExtern_SoldierTroopsUnitGrid_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaSOSExtern_SoldierTroopsUnitGrid_delete00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GameLandModel","GameLandModel","ModelImpl",NULL);
  tolua_beginmodule(tolua_S,"GameLandModel");
   tolua_constant(tolua_S,"EPTT_IsLive",GameLandModel::EPTT_IsLive);
   tolua_constant(tolua_S,"EPTT_ActiveTroopID",GameLandModel::EPTT_ActiveTroopID);
   tolua_constant(tolua_S,"EPTT_ActiveSoldierID",GameLandModel::EPTT_ActiveSoldierID);
   tolua_function(tolua_S,"loadLandData",tolua_LuaSOSExtern_GameLandModel_loadLandData00);
   tolua_function(tolua_S,"clearLandData",tolua_LuaSOSExtern_GameLandModel_clearLandData00);
   tolua_function(tolua_S,"getSoldierByTroopAndNumber",tolua_LuaSOSExtern_GameLandModel_getSoldierByTroopAndNumber00);
   tolua_function(tolua_S,"getTroopName",tolua_LuaSOSExtern_GameLandModel_getTroopName00);
   tolua_function(tolua_S,"luaSetBoolProperty",tolua_LuaSOSExtern_GameLandModel_luaSetBoolProperty00);
   tolua_function(tolua_S,"luaSetNumberProperty",tolua_LuaSOSExtern_GameLandModel_luaSetNumberProperty00);
   tolua_function(tolua_S,"luaGetViewBinding",tolua_LuaSOSExtern_GameLandModel_luaGetViewBinding00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"GameLandView","GameLandView","UILayer",tolua_collect_GameLandView);
  #else
  tolua_cclass(tolua_S,"GameLandView","GameLandView","UILayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"GameLandView");
   tolua_function(tolua_S,"new",tolua_LuaSOSExtern_GameLandView_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaSOSExtern_GameLandView_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaSOSExtern_GameLandView_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaSOSExtern_GameLandView_delete00);
   tolua_function(tolua_S,"init",tolua_LuaSOSExtern_GameLandView_init00);
   tolua_function(tolua_S,"initForMvvm",tolua_LuaSOSExtern_GameLandView_initForMvvm00);
   tolua_function(tolua_S,"update",tolua_LuaSOSExtern_GameLandView_update00);
   tolua_function(tolua_S,"doLiveChanged",tolua_LuaSOSExtern_GameLandView_doLiveChanged00);
   tolua_function(tolua_S,"doTroopChanged",tolua_LuaSOSExtern_GameLandView_doTroopChanged00);
   tolua_function(tolua_S,"doSelectGrid",tolua_LuaSOSExtern_GameLandView_doSelectGrid00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"LuaUserDataConversion","LuaUserDataConversion","",NULL);
  tolua_beginmodule(tolua_S,"LuaUserDataConversion");
   tolua_function(tolua_S,"toBlockWrite",tolua_LuaSOSExtern_LuaUserDataConversion_toBlockWrite00);
   tolua_function(tolua_S,"toGameLandModle",tolua_LuaSOSExtern_LuaUserDataConversion_toGameLandModle00);
   tolua_function(tolua_S,"toGameLandView",tolua_LuaSOSExtern_LuaUserDataConversion_toGameLandView00);
   tolua_function(tolua_S,"toLandTreeGrid",tolua_LuaSOSExtern_LuaUserDataConversion_toLandTreeGrid00);
   tolua_function(tolua_S,"toSoldierTroopsUnitGrid",tolua_LuaSOSExtern_LuaUserDataConversion_toSoldierTroopsUnitGrid00);
   tolua_function(tolua_S,"toArmature",tolua_LuaSOSExtern_LuaUserDataConversion_toArmature00);
   tolua_function(tolua_S,"toNode",tolua_LuaSOSExtern_LuaUserDataConversion_toNode00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_LuaSOSExtern (lua_State* tolua_S) {
 return tolua_LuaSOSExtern_open(tolua_S);
};
#endif

