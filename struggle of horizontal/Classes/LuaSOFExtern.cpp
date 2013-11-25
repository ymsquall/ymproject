/*
** Lua binding: LuaSOFExtern
** Generated automatically by tolua++-1.0.92 on 11/24/13 15:09:28.
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
#include "tolua_fix.h"
}

#include <map>
#include <string>
#include "LuaSOFExtern.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos-ext.h"
#include "unity/singleton.h"
#include "ViewModelManager.h"
#include "Model_GameScene.h"
#include "View_GameScene.h"
#include "LuaUserDataConversion.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace framework;
using namespace CocosDenshion;

/* Exported function */
TOLUA_API int  tolua_LuaSOFExtern_open (lua_State* tolua_S);

#include "LuaSOFExtern.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_GameSceneView (lua_State* tolua_S)
{
 GameSceneView* self = (GameSceneView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

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

static int tolua_collect_GameSceneModel (lua_State* tolua_S)
{
 GameSceneModel* self = (GameSceneModel*) tolua_tousertype(tolua_S,1,0);
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
 tolua_usertype(tolua_S,"LuaUserDataConversion");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"engine::AppDelegate");
 tolua_usertype(tolua_S,"framework::unity::blockwrite");
 tolua_usertype(tolua_S,"unity::RoutedEventArgs");
 tolua_usertype(tolua_S,"ViewModelManager");
 tolua_usertype(tolua_S,"GameSceneModel");
 tolua_usertype(tolua_S,"UILayer");
 tolua_usertype(tolua_S,"GameSceneView");
 tolua_usertype(tolua_S,"unity::SingletonAutoT<ViewModelManager>");
 tolua_usertype(tolua_S,"ModelImpl");
 tolua_usertype(tolua_S,"ModelType");
 tolua_usertype(tolua_S,"cocos2d::extension::Armature");
 tolua_usertype(tolua_S,"unity::object");
}

/* method: delete of class  framework::unity::SingletonAutoT<ViewModelManager> */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_framework_unity_SingletonAutoT_ViewModelManager__delete00
static int tolua_LuaSOFExtern_framework_unity_SingletonAutoT_ViewModelManager__delete00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_framework_unity_SingletonAutoT_ViewModelManager__point00
static int tolua_LuaSOFExtern_framework_unity_SingletonAutoT_ViewModelManager__point00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_point00
static int tolua_LuaSOFExtern_ViewModelManager_point00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_reloadLuaScript00
static int tolua_LuaSOFExtern_ViewModelManager_reloadLuaScript00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_new00
static int tolua_LuaSOFExtern_ViewModelManager_new00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_new00_local
static int tolua_LuaSOFExtern_ViewModelManager_new00_local(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_delete00
static int tolua_LuaSOFExtern_ViewModelManager_delete00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_initWithAppStart00
static int tolua_LuaSOFExtern_ViewModelManager_initWithAppStart00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_modelLoop00
static int tolua_LuaSOFExtern_ViewModelManager_modelLoop00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_onAppInitOveredShowingBefore00
static int tolua_LuaSOFExtern_ViewModelManager_onAppInitOveredShowingBefore00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_onAppInitOveredShowingAfter00
static int tolua_LuaSOFExtern_ViewModelManager_onAppInitOveredShowingAfter00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_selectModel00
static int tolua_LuaSOFExtern_ViewModelManager_selectModel00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_ViewModelManager_luaPlayStruggle00
static int tolua_LuaSOFExtern_ViewModelManager_luaPlayStruggle00(lua_State* tolua_S)
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

/* method: new of class  GameSceneModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_GameSceneModel_new00
static int tolua_LuaSOFExtern_GameSceneModel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GameSceneModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GameSceneModel* tolua_ret = (GameSceneModel*)  Mtolua_new((GameSceneModel)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameSceneModel");
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

/* method: new_local of class  GameSceneModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_GameSceneModel_new00_local
static int tolua_LuaSOFExtern_GameSceneModel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GameSceneModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GameSceneModel* tolua_ret = (GameSceneModel*)  Mtolua_new((GameSceneModel)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameSceneModel");
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

/* method: delete of class  GameSceneModel */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_GameSceneModel_delete00
static int tolua_LuaSOFExtern_GameSceneModel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameSceneModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameSceneModel* self = (GameSceneModel*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  GameSceneView */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_GameSceneView_new00
static int tolua_LuaSOFExtern_GameSceneView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GameSceneView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GameSceneView* tolua_ret = (GameSceneView*)  Mtolua_new((GameSceneView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameSceneView");
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

/* method: new_local of class  GameSceneView */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_GameSceneView_new00_local
static int tolua_LuaSOFExtern_GameSceneView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GameSceneView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GameSceneView* tolua_ret = (GameSceneView*)  Mtolua_new((GameSceneView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameSceneView");
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

/* method: delete of class  GameSceneView */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_GameSceneView_delete00
static int tolua_LuaSOFExtern_GameSceneView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameSceneView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameSceneView* self = (GameSceneView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: screenScroll of class  GameSceneView */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_GameSceneView_screenScroll00
static int tolua_LuaSOFExtern_GameSceneView_screenScroll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameSceneView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameSceneView* self = (GameSceneView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* offset = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'screenScroll'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->screenScroll(*offset);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'screenScroll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: screenScrollTo of class  GameSceneView */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_GameSceneView_screenScrollTo00
static int tolua_LuaSOFExtern_GameSceneView_screenScrollTo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameSceneView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameSceneView* self = (GameSceneView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* toPos = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'screenScrollTo'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->screenScrollTo(*toPos);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'screenScrollTo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: movePlayer of class  GameSceneView */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_GameSceneView_movePlayer00
static int tolua_LuaSOFExtern_GameSceneView_movePlayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameSceneView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameSceneView* self = (GameSceneView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* offset = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'movePlayer'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->movePlayer(*offset);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'movePlayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: movePlayerTo of class  GameSceneView */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_GameSceneView_movePlayerTo00
static int tolua_LuaSOFExtern_GameSceneView_movePlayerTo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameSceneView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameSceneView* self = (GameSceneView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* toPos = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'movePlayerTo'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->movePlayerTo(*toPos);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'movePlayerTo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toBlockWrite of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_LuaUserDataConversion_toBlockWrite00
static int tolua_LuaSOFExtern_LuaUserDataConversion_toBlockWrite00(lua_State* tolua_S)
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

/* method: toGameSceneModle of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_LuaUserDataConversion_toGameSceneModle00
static int tolua_LuaSOFExtern_LuaUserDataConversion_toGameSceneModle00(lua_State* tolua_S)
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
   GameSceneModel* tolua_ret = (GameSceneModel*)  LuaUserDataConversion::toGameSceneModle(pointer);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameSceneModel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toGameSceneModle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toGameSceneView of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_LuaUserDataConversion_toGameSceneView00
static int tolua_LuaSOFExtern_LuaUserDataConversion_toGameSceneView00(lua_State* tolua_S)
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
   GameSceneView* tolua_ret = (GameSceneView*)  LuaUserDataConversion::toGameSceneView(pointer);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"GameSceneView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toGameSceneView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toArmature of class  LuaUserDataConversion */
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_LuaUserDataConversion_toArmature00
static int tolua_LuaSOFExtern_LuaUserDataConversion_toArmature00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_LuaSOFExtern_LuaUserDataConversion_toNode00
static int tolua_LuaSOFExtern_LuaUserDataConversion_toNode00(lua_State* tolua_S)
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
TOLUA_API int tolua_LuaSOFExtern_open (lua_State* tolua_S)
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
     tolua_function(tolua_S,"delete",tolua_LuaSOFExtern_framework_unity_SingletonAutoT_ViewModelManager__delete00);
     tolua_function(tolua_S,"point",tolua_LuaSOFExtern_framework_unity_SingletonAutoT_ViewModelManager__point00);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ViewModelManager","ViewModelManager","unity::object",tolua_collect_ViewModelManager);
  #else
  tolua_cclass(tolua_S,"ViewModelManager","ViewModelManager","unity::object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ViewModelManager");
   tolua_function(tolua_S,"point",tolua_LuaSOFExtern_ViewModelManager_point00);
   tolua_function(tolua_S,"reloadLuaScript",tolua_LuaSOFExtern_ViewModelManager_reloadLuaScript00);
   tolua_function(tolua_S,"new",tolua_LuaSOFExtern_ViewModelManager_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaSOFExtern_ViewModelManager_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaSOFExtern_ViewModelManager_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaSOFExtern_ViewModelManager_delete00);
   tolua_function(tolua_S,"initWithAppStart",tolua_LuaSOFExtern_ViewModelManager_initWithAppStart00);
   tolua_function(tolua_S,"modelLoop",tolua_LuaSOFExtern_ViewModelManager_modelLoop00);
   tolua_function(tolua_S,"onAppInitOveredShowingBefore",tolua_LuaSOFExtern_ViewModelManager_onAppInitOveredShowingBefore00);
   tolua_function(tolua_S,"onAppInitOveredShowingAfter",tolua_LuaSOFExtern_ViewModelManager_onAppInitOveredShowingAfter00);
   tolua_function(tolua_S,"selectModel",tolua_LuaSOFExtern_ViewModelManager_selectModel00);
   tolua_function(tolua_S,"luaPlayStruggle",tolua_LuaSOFExtern_ViewModelManager_luaPlayStruggle00);
   tolua_variable(tolua_S,"__mvvm__IModelManager__",tolua_get_ViewModelManager___mvvm__IModelManager__,NULL);
   tolua_variable(tolua_S,"__unity__SingletonAutoT_ViewModelManager___",tolua_get_ViewModelManager___unity__SingletonAutoT_ViewModelManager___,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"GameSceneModel","GameSceneModel","ModelImpl",tolua_collect_GameSceneModel);
  #else
  tolua_cclass(tolua_S,"GameSceneModel","GameSceneModel","ModelImpl",NULL);
  #endif
  tolua_beginmodule(tolua_S,"GameSceneModel");
   tolua_function(tolua_S,"new",tolua_LuaSOFExtern_GameSceneModel_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaSOFExtern_GameSceneModel_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaSOFExtern_GameSceneModel_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaSOFExtern_GameSceneModel_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"GameSceneView","GameSceneView","UILayer",tolua_collect_GameSceneView);
  #else
  tolua_cclass(tolua_S,"GameSceneView","GameSceneView","UILayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"GameSceneView");
   tolua_function(tolua_S,"new",tolua_LuaSOFExtern_GameSceneView_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaSOFExtern_GameSceneView_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaSOFExtern_GameSceneView_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaSOFExtern_GameSceneView_delete00);
   tolua_function(tolua_S,"screenScroll",tolua_LuaSOFExtern_GameSceneView_screenScroll00);
   tolua_function(tolua_S,"screenScrollTo",tolua_LuaSOFExtern_GameSceneView_screenScrollTo00);
   tolua_function(tolua_S,"movePlayer",tolua_LuaSOFExtern_GameSceneView_movePlayer00);
   tolua_function(tolua_S,"movePlayerTo",tolua_LuaSOFExtern_GameSceneView_movePlayerTo00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"LuaUserDataConversion","LuaUserDataConversion","",NULL);
  tolua_beginmodule(tolua_S,"LuaUserDataConversion");
   tolua_function(tolua_S,"toBlockWrite",tolua_LuaSOFExtern_LuaUserDataConversion_toBlockWrite00);
   tolua_function(tolua_S,"toGameSceneModle",tolua_LuaSOFExtern_LuaUserDataConversion_toGameSceneModle00);
   tolua_function(tolua_S,"toGameSceneView",tolua_LuaSOFExtern_LuaUserDataConversion_toGameSceneView00);
   tolua_function(tolua_S,"toArmature",tolua_LuaSOFExtern_LuaUserDataConversion_toArmature00);
   tolua_function(tolua_S,"toNode",tolua_LuaSOFExtern_LuaUserDataConversion_toNode00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_LuaSOFExtern (lua_State* tolua_S) {
 return tolua_LuaSOFExtern_open(tolua_S);
};
#endif

