/*
** Lua binding: LuaSOSExtern
** Generated automatically by tolua++-1.0.92 on 11/13/13 09:55:02.
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

static int tolua_collect_framework__unity__SingletonAutoT_ViewModelManager_ (lua_State* tolua_S)
{
 framework::unity::SingletonAutoT<ViewModelManager>* self = (framework::unity::SingletonAutoT<ViewModelManager>*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ViewModelManager (lua_State* tolua_S)
{
 ViewModelManager* self = (ViewModelManager*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_GameLandView (lua_State* tolua_S)
{
 GameLandView* self = (GameLandView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"ModelType");
 tolua_usertype(tolua_S,"mvvm::IModelManager");
 tolua_usertype(tolua_S,"framework::unity::SingletonAutoT<ViewModelManager>");
 tolua_usertype(tolua_S,"uint8");
 tolua_usertype(tolua_S,"engine::AppDelegate");
 tolua_usertype(tolua_S,"unity::RoutedEventArgs");
 tolua_usertype(tolua_S,"uint32");
 tolua_usertype(tolua_S,"GameLandModel");
 tolua_usertype(tolua_S,"LuaUserDataConversion");
 tolua_usertype(tolua_S,"LandTreeGrid");
 tolua_usertype(tolua_S,"UILayer");
 tolua_usertype(tolua_S,"ViewModelManager");
 tolua_usertype(tolua_S,"SoldierTroopsUnitGrid");
 tolua_usertype(tolua_S,"unity::SingletonAutoT<ViewModelManager>");
 tolua_usertype(tolua_S,"ModelImpl");
 tolua_usertype(tolua_S,"int8");
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

/* method: playStruggle of class  ViewModelManager */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_ViewModelManager_playStruggle00
static int tolua_LuaSOSExtern_ViewModelManager_playStruggle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ViewModelManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ViewModelManager* self = (ViewModelManager*)  tolua_tousertype(tolua_S,1,0);
  const char* data = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned long length = ((unsigned long)  tolua_tonumber(tolua_S,3,0));
  bool isLive = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'playStruggle'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->playStruggle(data,length,isLive);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'playStruggle'.",&tolua_err);
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

/* method: playAction of class  GameLandModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOSExtern_GameLandModel_playAction00
static int tolua_LuaSOSExtern_GameLandModel_playAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameLandModel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const int8",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"uint32",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameLandModel* self = (GameLandModel*)  tolua_tousertype(tolua_S,1,0);
  const int8* data = ((const int8*)  tolua_tousertype(tolua_S,2,0));
  uint32 length = *((uint32*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'playAction'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->playAction(data,length);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'playAction'.",&tolua_err);
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
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"uint8",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"uint8",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameLandModel* self = (const GameLandModel*)  tolua_tousertype(tolua_S,1,0);
  uint8 t = *((uint8*)  tolua_tousertype(tolua_S,2,0));
  uint8 n = *((uint8*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSoldierByTroopAndNumber'", NULL);
#endif
  {
   const SoldierTroopsUnitGrid* tolua_ret = (const SoldierTroopsUnitGrid*)  self->getSoldierByTroopAndNumber(t,n);
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
   tolua_function(tolua_S,"playStruggle",tolua_LuaSOSExtern_ViewModelManager_playStruggle00);
   tolua_variable(tolua_S,"__mvvm__IModelManager__",tolua_get_ViewModelManager___mvvm__IModelManager__,NULL);
   tolua_variable(tolua_S,"__unity__SingletonAutoT_ViewModelManager___",tolua_get_ViewModelManager___unity__SingletonAutoT_ViewModelManager___,NULL);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GameLandModel","GameLandModel","ModelImpl",NULL);
  tolua_beginmodule(tolua_S,"GameLandModel");
   tolua_constant(tolua_S,"EPTT_IsLive",GameLandModel::EPTT_IsLive);
   tolua_constant(tolua_S,"EPTT_ActiveTroopID",GameLandModel::EPTT_ActiveTroopID);
   tolua_constant(tolua_S,"EPTT_ActiveSoldierID",GameLandModel::EPTT_ActiveSoldierID);
   tolua_function(tolua_S,"loadLandData",tolua_LuaSOSExtern_GameLandModel_loadLandData00);
   tolua_function(tolua_S,"clearLandData",tolua_LuaSOSExtern_GameLandModel_clearLandData00);
   tolua_function(tolua_S,"playAction",tolua_LuaSOSExtern_GameLandModel_playAction00);
   tolua_function(tolua_S,"getSoldierByTroopAndNumber",tolua_LuaSOSExtern_GameLandModel_getSoldierByTroopAndNumber00);
   tolua_function(tolua_S,"getTroopName",tolua_LuaSOSExtern_GameLandModel_getTroopName00);
   tolua_function(tolua_S,"luaSetBoolProperty",tolua_LuaSOSExtern_GameLandModel_luaSetBoolProperty00);
   tolua_function(tolua_S,"luaSetNumberProperty",tolua_LuaSOSExtern_GameLandModel_luaSetNumberProperty00);
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
   tolua_function(tolua_S,"toGameLandModle",tolua_LuaSOSExtern_LuaUserDataConversion_toGameLandModle00);
   tolua_function(tolua_S,"toGameLandView",tolua_LuaSOSExtern_LuaUserDataConversion_toGameLandView00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_LuaSOSExtern (lua_State* tolua_S) {
 return tolua_LuaSOSExtern_open(tolua_S);
};
#endif

