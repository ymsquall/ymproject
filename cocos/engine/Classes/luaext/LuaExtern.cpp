/*
** Lua binding: LuaExtern
** Generated automatically by tolua++-1.0.92 on 12/04/13 23:01:53.
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
#include "LuaExtern.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos-ext.h"
#include "unity/object.h"
#include "unity/datablock.h"
#include "mvvm/interface.h"
#include "mvvm/model.h"
#include "mvvm/view.h"
#include "CocoStudio.h"
#include "LuaCocoStudioConversion.h"
#include "LuaTiledHelper.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace framework;
using namespace CocosDenshion;

/* Exported function */
TOLUA_API int  tolua_LuaExtern_open (lua_State* tolua_S);

#include "LuaExtern.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_framework__unity__blockwrite (lua_State* tolua_S)
{
 framework::unity::blockwrite* self = (framework::unity::blockwrite*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__Visual (lua_State* tolua_S)
{
 framework::mvvm::Visual* self = (framework::mvvm::Visual*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__unity__blockreader (lua_State* tolua_S)
{
 framework::unity::blockreader* self = (framework::unity::blockreader*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__DependencyObject (lua_State* tolua_S)
{
 framework::mvvm::DependencyObject* self = (framework::mvvm::DependencyObject*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__FrameworkElement (lua_State* tolua_S)
{
 framework::mvvm::FrameworkElement* self = (framework::mvvm::FrameworkElement*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__DispatcherObject (lua_State* tolua_S)
{
 framework::mvvm::DispatcherObject* self = (framework::mvvm::DispatcherObject*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__IModel (lua_State* tolua_S)
{
 framework::mvvm::IModel* self = (framework::mvvm::IModel*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_uint32 (lua_State* tolua_S)
{
 uint32* self = (uint32*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__UIElement (lua_State* tolua_S)
{
 framework::mvvm::UIElement* self = (framework::mvvm::UIElement*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"TMXLayer");
 tolua_usertype(tolua_S,"UILayout");
 tolua_usertype(tolua_S,"LuaTiledHelper");
 tolua_usertype(tolua_S,"UIWidget");
 tolua_usertype(tolua_S,"framework::mvvm::DependencyObject");
 tolua_usertype(tolua_S,"UILabelAtlas");
 tolua_usertype(tolua_S,"UILoadingBar");
 tolua_usertype(tolua_S,"framework::unity::blockwrite");
 tolua_usertype(tolua_S,"framework::mvvm::INotifyPropertyChanged");
 tolua_usertype(tolua_S,"uint32");
 tolua_usertype(tolua_S,"framework::mvvm::FrameworkElement");
 tolua_usertype(tolua_S,"UILayer");
 tolua_usertype(tolua_S,"UIListView");
 tolua_usertype(tolua_S,"framework::unity::blockreader");
 tolua_usertype(tolua_S,"UISlider");
 tolua_usertype(tolua_S,"CCSize");
 tolua_usertype(tolua_S,"framework::mvvm::DispatcherObject");
 tolua_usertype(tolua_S,"UICheckBox");
 tolua_usertype(tolua_S,"framework::mvvm::UIElement");
 tolua_usertype(tolua_S,"UIImageView");
 tolua_usertype(tolua_S,"UIScrollView");
 tolua_usertype(tolua_S,"UIPageView");
 tolua_usertype(tolua_S,"framework::mvvm::Visual");
 tolua_usertype(tolua_S,"UITextField");
 tolua_usertype(tolua_S,"UILabel");
 tolua_usertype(tolua_S,"framework::mvvm::IView");
 tolua_usertype(tolua_S,"UILabelBMFont");
 tolua_usertype(tolua_S,"object");
 tolua_usertype(tolua_S,"UIButton");
 tolua_usertype(tolua_S,"framework::mvvm::ModelBase");
 tolua_usertype(tolua_S,"framework::mvvm::IModel");
 tolua_usertype(tolua_S,"LuaCocoStudioConversion");
 tolua_usertype(tolua_S,"unity::object");
}

/* method: new of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_new00
static int tolua_LuaExtern_framework_unity_blockreader_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* buffer = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned short length = ((unsigned short)  tolua_tonumber(tolua_S,3,0));
  {
   framework::unity::blockreader* tolua_ret = (framework::unity::blockreader*)  Mtolua_new((framework::unity::blockreader)(buffer,length));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::unity::blockreader");
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

/* method: new_local of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_new00_local
static int tolua_LuaExtern_framework_unity_blockreader_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* buffer = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned short length = ((unsigned short)  tolua_tonumber(tolua_S,3,0));
  {
   framework::unity::blockreader* tolua_ret = (framework::unity::blockreader*)  Mtolua_new((framework::unity::blockreader)(buffer,length));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::unity::blockreader");
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

/* method: seek of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_seek00
static int tolua_LuaExtern_framework_unity_blockreader_seek00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
  unsigned short off = ((unsigned short)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seek'", NULL);
#endif
  {
   self->seek(off);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seek'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reseek of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_reseek00
static int tolua_LuaExtern_framework_unity_blockreader_reseek00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reseek'", NULL);
#endif
  {
   self->reseek();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reseek'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: eof of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_eof00
static int tolua_LuaExtern_framework_unity_blockreader_eof00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const framework::unity::blockreader* self = (const framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'eof'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->eof();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'eof'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_create00
static int tolua_LuaExtern_framework_unity_blockreader_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* buffer = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned short length = ((unsigned short)  tolua_tonumber(tolua_S,3,0));
  {
   framework::unity::blockreader* tolua_ret = (framework::unity::blockreader*)  framework::unity::blockreader::create(buffer,length);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::unity::blockreader");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_create01
static int tolua_LuaExtern_framework_unity_blockreader_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  framework::unity::blockwrite* block = ((framework::unity::blockwrite*)  tolua_tousertype(tolua_S,2,0));
  {
   framework::unity::blockreader* tolua_ret = (framework::unity::blockreader*)  framework::unity::blockreader::create(block);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::unity::blockreader");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_framework_unity_blockreader_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: read1 of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_read100
static int tolua_LuaExtern_framework_unity_blockreader_read100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read1'", NULL);
#endif
  {
   long long tolua_ret = (long long)  self->read1();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: read2 of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_read200
static int tolua_LuaExtern_framework_unity_blockreader_read200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read2'", NULL);
#endif
  {
   long long tolua_ret = (long long)  self->read2();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: read4 of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_read400
static int tolua_LuaExtern_framework_unity_blockreader_read400(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read4'", NULL);
#endif
  {
   long long tolua_ret = (long long)  self->read4();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read4'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: read8 of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_read800
static int tolua_LuaExtern_framework_unity_blockreader_read800(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'read8'", NULL);
#endif
  {
   long long tolua_ret = (long long)  self->read8();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readu1 of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_readu100
static int tolua_LuaExtern_framework_unity_blockreader_readu100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readu1'", NULL);
#endif
  {
   unsigned long long tolua_ret = (unsigned long long)  self->readu1();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readu1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readu2 of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_readu200
static int tolua_LuaExtern_framework_unity_blockreader_readu200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readu2'", NULL);
#endif
  {
   unsigned long long tolua_ret = (unsigned long long)  self->readu2();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readu2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readu4 of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_readu400
static int tolua_LuaExtern_framework_unity_blockreader_readu400(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readu4'", NULL);
#endif
  {
   unsigned long long tolua_ret = (unsigned long long)  self->readu4();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readu4'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readu8 of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_readu800
static int tolua_LuaExtern_framework_unity_blockreader_readu800(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readu8'", NULL);
#endif
  {
   unsigned long long tolua_ret = (unsigned long long)  self->readu8();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readu8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readf1 of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_readf100
static int tolua_LuaExtern_framework_unity_blockreader_readf100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readf1'", NULL);
#endif
  {
   float tolua_ret = (float)  self->readf1();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readf1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: readf2 of class  framework::unity::blockreader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockreader_readf200
static int tolua_LuaExtern_framework_unity_blockreader_readf200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockreader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockreader* self = (framework::unity::blockreader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'readf2'", NULL);
#endif
  {
   double tolua_ret = (double)  self->readf2();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'readf2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_new00
static int tolua_LuaExtern_framework_unity_blockwrite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* buffer = ((char*)  tolua_tostring(tolua_S,2,0));
  unsigned short length = ((unsigned short)  tolua_tonumber(tolua_S,3,0));
  {
   framework::unity::blockwrite* tolua_ret = (framework::unity::blockwrite*)  Mtolua_new((framework::unity::blockwrite)(buffer,length));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::unity::blockwrite");
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

/* method: new_local of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_new00_local
static int tolua_LuaExtern_framework_unity_blockwrite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* buffer = ((char*)  tolua_tostring(tolua_S,2,0));
  unsigned short length = ((unsigned short)  tolua_tonumber(tolua_S,3,0));
  {
   framework::unity::blockwrite* tolua_ret = (framework::unity::blockwrite*)  Mtolua_new((framework::unity::blockwrite)(buffer,length));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::unity::blockwrite");
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

/* method: seek of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_seek00
static int tolua_LuaExtern_framework_unity_blockwrite_seek00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  unsigned short off = ((unsigned short)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seek'", NULL);
#endif
  {
   self->seek(off);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seek'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reseek of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_reseek00
static int tolua_LuaExtern_framework_unity_blockwrite_reseek00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reseek'", NULL);
#endif
  {
   self->reseek();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reseek'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: buffer of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_buffer00
static int tolua_LuaExtern_framework_unity_blockwrite_buffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const framework::unity::blockwrite* self = (const framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'buffer'", NULL);
#endif
  {
   char* tolua_ret = (char*)  self->buffer();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'buffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_length00
static int tolua_LuaExtern_framework_unity_blockwrite_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const framework::unity::blockwrite* self = (const framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length'", NULL);
#endif
  {
   unsigned short tolua_ret = (unsigned short)  self->length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_create00
static int tolua_LuaExtern_framework_unity_blockwrite_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::unity::blockwrite* tolua_ret = (framework::unity::blockwrite*)  framework::unity::blockwrite::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::unity::blockwrite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_create01
static int tolua_LuaExtern_framework_unity_blockwrite_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  char* buffer = ((char*)  tolua_tostring(tolua_S,2,0));
  unsigned short length = ((unsigned short)  tolua_tonumber(tolua_S,3,0));
  {
   framework::unity::blockwrite* tolua_ret = (framework::unity::blockwrite*)  framework::unity::blockwrite::create(buffer,length);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::unity::blockwrite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_framework_unity_blockwrite_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: write1 of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_write100
static int tolua_LuaExtern_framework_unity_blockwrite_write100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  long const long v = ((long const long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write1'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->write1(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write2 of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_write200
static int tolua_LuaExtern_framework_unity_blockwrite_write200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  long const long v = ((long const long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write2'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->write2(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write4 of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_write400
static int tolua_LuaExtern_framework_unity_blockwrite_write400(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  long const long v = ((long const long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write4'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->write4(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write4'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: write8 of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_write800
static int tolua_LuaExtern_framework_unity_blockwrite_write800(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  long const long v = ((long const long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'write8'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->write8(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeu1 of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_writeu100
static int tolua_LuaExtern_framework_unity_blockwrite_writeu100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  unsigned long const long v = ((unsigned long const long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeu1'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeu1(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeu1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeu2 of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_writeu200
static int tolua_LuaExtern_framework_unity_blockwrite_writeu200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  unsigned long const long v = ((unsigned long const long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeu2'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeu2(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeu2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeu4 of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_writeu400
static int tolua_LuaExtern_framework_unity_blockwrite_writeu400(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  unsigned long const long v = ((unsigned long const long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeu4'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeu4(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeu4'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writeu8 of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_writeu800
static int tolua_LuaExtern_framework_unity_blockwrite_writeu800(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  unsigned long const long v = ((unsigned long const long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writeu8'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writeu8(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writeu8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writef1 of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_writef100
static int tolua_LuaExtern_framework_unity_blockwrite_writef100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  const float v = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writef1'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writef1(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writef1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: writef2 of class  framework::unity::blockwrite */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_unity_blockwrite_writef200
static int tolua_LuaExtern_framework_unity_blockwrite_writef200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::unity::blockwrite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::unity::blockwrite* self = (framework::unity::blockwrite*)  tolua_tousertype(tolua_S,1,0);
  const double v = ((const double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'writef2'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->writef2(v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'writef2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  framework::mvvm::DispatcherObject */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_DispatcherObject_new00
static int tolua_LuaExtern_framework_mvvm_DispatcherObject_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::mvvm::DispatcherObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::mvvm::DispatcherObject* tolua_ret = (framework::mvvm::DispatcherObject*)  Mtolua_new((framework::mvvm::DispatcherObject)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::mvvm::DispatcherObject");
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

/* method: new_local of class  framework::mvvm::DispatcherObject */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_DispatcherObject_new00_local
static int tolua_LuaExtern_framework_mvvm_DispatcherObject_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::mvvm::DispatcherObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::mvvm::DispatcherObject* tolua_ret = (framework::mvvm::DispatcherObject*)  Mtolua_new((framework::mvvm::DispatcherObject)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::mvvm::DispatcherObject");
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

/* method: new of class  framework::mvvm::DependencyObject */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_DependencyObject_new00
static int tolua_LuaExtern_framework_mvvm_DependencyObject_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::mvvm::DependencyObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::mvvm::DependencyObject* tolua_ret = (framework::mvvm::DependencyObject*)  Mtolua_new((framework::mvvm::DependencyObject)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::mvvm::DependencyObject");
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

/* method: new_local of class  framework::mvvm::DependencyObject */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_DependencyObject_new00_local
static int tolua_LuaExtern_framework_mvvm_DependencyObject_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::mvvm::DependencyObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::mvvm::DependencyObject* tolua_ret = (framework::mvvm::DependencyObject*)  Mtolua_new((framework::mvvm::DependencyObject)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::mvvm::DependencyObject");
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

/* method: new of class  framework::mvvm::Visual */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_Visual_new00
static int tolua_LuaExtern_framework_mvvm_Visual_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::mvvm::Visual",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::mvvm::Visual* tolua_ret = (framework::mvvm::Visual*)  Mtolua_new((framework::mvvm::Visual)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::mvvm::Visual");
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

/* method: new_local of class  framework::mvvm::Visual */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_Visual_new00_local
static int tolua_LuaExtern_framework_mvvm_Visual_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::mvvm::Visual",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::mvvm::Visual* tolua_ret = (framework::mvvm::Visual*)  Mtolua_new((framework::mvvm::Visual)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::mvvm::Visual");
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

/* method: new of class  framework::mvvm::UIElement */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_UIElement_new00
static int tolua_LuaExtern_framework_mvvm_UIElement_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::mvvm::UIElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::mvvm::UIElement* tolua_ret = (framework::mvvm::UIElement*)  Mtolua_new((framework::mvvm::UIElement)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::mvvm::UIElement");
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

/* method: new_local of class  framework::mvvm::UIElement */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_UIElement_new00_local
static int tolua_LuaExtern_framework_mvvm_UIElement_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::mvvm::UIElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::mvvm::UIElement* tolua_ret = (framework::mvvm::UIElement*)  Mtolua_new((framework::mvvm::UIElement)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::mvvm::UIElement");
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

/* method: RaiseEvent of class  framework::mvvm::UIElement */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_UIElement_RaiseEvent00
static int tolua_LuaExtern_framework_mvvm_UIElement_RaiseEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::mvvm::UIElement",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"unity::object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::mvvm::UIElement* self = (framework::mvvm::UIElement*)  tolua_tousertype(tolua_S,1,0);
  unity::object* e = ((unity::object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RaiseEvent'", NULL);
#endif
  {
   self->RaiseEvent(e);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RaiseEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  framework::mvvm::FrameworkElement */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_FrameworkElement_new00
static int tolua_LuaExtern_framework_mvvm_FrameworkElement_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::mvvm::FrameworkElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::mvvm::FrameworkElement* tolua_ret = (framework::mvvm::FrameworkElement*)  Mtolua_new((framework::mvvm::FrameworkElement)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::mvvm::FrameworkElement");
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

/* method: new_local of class  framework::mvvm::FrameworkElement */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_FrameworkElement_new00_local
static int tolua_LuaExtern_framework_mvvm_FrameworkElement_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"framework::mvvm::FrameworkElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   framework::mvvm::FrameworkElement* tolua_ret = (framework::mvvm::FrameworkElement*)  Mtolua_new((framework::mvvm::FrameworkElement)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"framework::mvvm::FrameworkElement");
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

/* method: initForMvvm of class  framework::mvvm::FrameworkElement */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_FrameworkElement_initForMvvm00
static int tolua_LuaExtern_framework_mvvm_FrameworkElement_initForMvvm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::mvvm::FrameworkElement",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::mvvm::FrameworkElement* self = (framework::mvvm::FrameworkElement*)  tolua_tousertype(tolua_S,1,0);
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

/* method: RaisePropertyChanged of class  framework::mvvm::INotifyPropertyChanged */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_INotifyPropertyChanged_RaisePropertyChanged00
static int tolua_LuaExtern_framework_mvvm_INotifyPropertyChanged_RaisePropertyChanged00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::mvvm::INotifyPropertyChanged",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::mvvm::INotifyPropertyChanged* self = (framework::mvvm::INotifyPropertyChanged*)  tolua_tousertype(tolua_S,1,0);
  const char* propertyName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RaisePropertyChanged'", NULL);
#endif
  {
   self->RaisePropertyChanged(propertyName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RaisePropertyChanged'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTypeName of class  framework::mvvm::IModel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_IModel_getTypeName00
static int tolua_LuaExtern_framework_mvvm_IModel_getTypeName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const framework::mvvm::IModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const framework::mvvm::IModel* self = (const framework::mvvm::IModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTypeName'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getTypeName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTypeName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRTTIType of class  framework::mvvm::IModel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_IModel_getRTTIType00
static int tolua_LuaExtern_framework_mvvm_IModel_getRTTIType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const framework::mvvm::IModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const framework::mvvm::IModel* self = (const framework::mvvm::IModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRTTIType'", NULL);
#endif
  {
   uint32 tolua_ret = (uint32)  self->getRTTIType();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((uint32)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"uint32");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(uint32));
     tolua_pushusertype(tolua_S,tolua_obj,"uint32");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRTTIType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  framework::mvvm::IModel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_IModel_init00
static int tolua_LuaExtern_framework_mvvm_IModel_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::mvvm::IModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::mvvm::IModel* self = (framework::mvvm::IModel*)  tolua_tousertype(tolua_S,1,0);
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

/* method: finalize of class  framework::mvvm::IModel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_IModel_finalize00
static int tolua_LuaExtern_framework_mvvm_IModel_finalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::mvvm::IModel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::mvvm::IModel* self = (framework::mvvm::IModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'finalize'", NULL);
#endif
  {
   self->finalize();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'finalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  framework::mvvm::IModel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_IModel_update00
static int tolua_LuaExtern_framework_mvvm_IModel_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::mvvm::IModel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::mvvm::IModel* self = (framework::mvvm::IModel*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setBindingTarget of class  framework::mvvm::IModel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_framework_mvvm_IModel_setBindingTarget00
static int tolua_LuaExtern_framework_mvvm_IModel_setBindingTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"framework::mvvm::IModel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"framework::mvvm::IView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  framework::mvvm::IModel* self = (framework::mvvm::IModel*)  tolua_tousertype(tolua_S,1,0);
  framework::mvvm::IView* view = ((framework::mvvm::IView*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBindingTarget'", NULL);
#endif
  {
   self->setBindingTarget(view);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBindingTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __unity of class  framework::mvvm::IModel */
#ifndef TOLUA_DISABLE_tolua_get_framework__mvvm__IModel___unity__object__
static int tolua_get_framework__mvvm__IModel___unity__object__(lua_State* tolua_S)
{
  framework::mvvm::IModel* self = (framework::mvvm::IModel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__unity'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<unity::object*>(self), "unity::object");
#else
   tolua_pushusertype(tolua_S,(void*)((unity::object*)self), "unity::object");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildLayoutByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildLayoutByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildLayoutByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UILayout* tolua_ret = (UILayout*)  LuaCocoStudioConversion::getChildLayoutByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILayout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildLayoutByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUILayerByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUILayerByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUILayerByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UILayer* tolua_ret = (UILayer*)  LuaCocoStudioConversion::getChildUILayerByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUILayerByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUIButtonByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUIButtonByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUIButtonByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UIButton* tolua_ret = (UIButton*)  LuaCocoStudioConversion::getChildUIButtonByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUIButtonByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUICheckBoxByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUICheckBoxByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUICheckBoxByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UICheckBox* tolua_ret = (UICheckBox*)  LuaCocoStudioConversion::getChildUICheckBoxByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UICheckBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUICheckBoxByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUIImageViewByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUIImageViewByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUIImageViewByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UIImageView* tolua_ret = (UIImageView*)  LuaCocoStudioConversion::getChildUIImageViewByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUIImageViewByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUILabelByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UILabel* tolua_ret = (UILabel*)  LuaCocoStudioConversion::getChildUILabelByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUILabelByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUILabelAtlasByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelAtlasByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelAtlasByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UILabelAtlas* tolua_ret = (UILabelAtlas*)  LuaCocoStudioConversion::getChildUILabelAtlasByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILabelAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUILabelAtlasByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUILabelBMFontByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelBMFontByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelBMFontByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UILabelBMFont* tolua_ret = (UILabelBMFont*)  LuaCocoStudioConversion::getChildUILabelBMFontByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILabelBMFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUILabelBMFontByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUILoadingBarByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUILoadingBarByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUILoadingBarByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UILoadingBar* tolua_ret = (UILoadingBar*)  LuaCocoStudioConversion::getChildUILoadingBarByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILoadingBar");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUILoadingBarByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUISliderByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUISliderByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUISliderByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UISlider* tolua_ret = (UISlider*)  LuaCocoStudioConversion::getChildUISliderByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UISlider");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUISliderByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUITextFieldByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUITextFieldByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUITextFieldByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UITextField* tolua_ret = (UITextField*)  LuaCocoStudioConversion::getChildUITextFieldByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UITextField");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUITextFieldByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUIScrollViewByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUIScrollViewByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUIScrollViewByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UIScrollView* tolua_ret = (UIScrollView*)  LuaCocoStudioConversion::getChildUIScrollViewByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIScrollView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUIScrollViewByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUIListViewByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUIListViewByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUIListViewByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UIListView* tolua_ret = (UIListView*)  LuaCocoStudioConversion::getChildUIListViewByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIListView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUIListViewByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildUIPageViewByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUIPageViewByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUIPageViewByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  UIWidget* pParent = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  {
   UIPageView* tolua_ret = (UIPageView*)  LuaCocoStudioConversion::getChildUIPageViewByName(name,pParent);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIPageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUIPageViewByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toLayout of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toLayout00
static int tolua_LuaExtern_LuaCocoStudioConversion_toLayout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UILayout* tolua_ret = (UILayout*)  LuaCocoStudioConversion::toLayout(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILayout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toLayout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUILayer of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUILayer00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUILayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UILayer* tolua_ret = (UILayer*)  LuaCocoStudioConversion::toUILayer(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUILayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUIButton of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUIButton00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUIButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UIButton* tolua_ret = (UIButton*)  LuaCocoStudioConversion::toUIButton(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUIButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUICheckBox of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUICheckBox00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUICheckBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UICheckBox* tolua_ret = (UICheckBox*)  LuaCocoStudioConversion::toUICheckBox(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UICheckBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUICheckBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUIImageView of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUIImageView00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUIImageView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UIImageView* tolua_ret = (UIImageView*)  LuaCocoStudioConversion::toUIImageView(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUIImageView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUILabel of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUILabel00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUILabel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UILabel* tolua_ret = (UILabel*)  LuaCocoStudioConversion::toUILabel(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUILabel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUILabelAtlas of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUILabelAtlas00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUILabelAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UILabelAtlas* tolua_ret = (UILabelAtlas*)  LuaCocoStudioConversion::toUILabelAtlas(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILabelAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUILabelAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUILabelBMFont of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUILabelBMFont00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUILabelBMFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UILabelBMFont* tolua_ret = (UILabelBMFont*)  LuaCocoStudioConversion::toUILabelBMFont(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILabelBMFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUILabelBMFont'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUILoadingBar of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUILoadingBar00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUILoadingBar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UILoadingBar* tolua_ret = (UILoadingBar*)  LuaCocoStudioConversion::toUILoadingBar(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UILoadingBar");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUILoadingBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUISlider of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUISlider00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUISlider00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UISlider* tolua_ret = (UISlider*)  LuaCocoStudioConversion::toUISlider(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UISlider");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUISlider'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUITextField of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUITextField00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUITextField00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UITextField* tolua_ret = (UITextField*)  LuaCocoStudioConversion::toUITextField(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UITextField");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUITextField'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUIScrollView of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUIScrollView00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUIScrollView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UIScrollView* tolua_ret = (UIScrollView*)  LuaCocoStudioConversion::toUIScrollView(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIScrollView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUIScrollView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUIListView of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUIListView00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUIListView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UIListView* tolua_ret = (UIListView*)  LuaCocoStudioConversion::toUIListView(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIListView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUIListView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUIPageView of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUIPageView00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUIPageView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaCocoStudioConversion",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* pointer = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   UIPageView* tolua_ret = (UIPageView*)  LuaCocoStudioConversion::toUIPageView(pointer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIPageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUIPageView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTMXLayerImageSize of class  LuaTiledHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaTiledHelper_getTMXLayerImageSize00
static int tolua_LuaExtern_LuaTiledHelper_getTMXLayerImageSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LuaTiledHelper",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"TMXLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TMXLayer* layer = ((TMXLayer*)  tolua_tousertype(tolua_S,2,0));
  {
   const CCSize& tolua_ret = (const CCSize&)  LuaTiledHelper::getTMXLayerImageSize(layer);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTMXLayerImageSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_LuaExtern_open (lua_State* tolua_S)
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
    tolua_cclass(tolua_S,"blockreader","framework::unity::blockreader","object",tolua_collect_framework__unity__blockreader);
    #else
    tolua_cclass(tolua_S,"blockreader","framework::unity::blockreader","object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"blockreader");
     tolua_function(tolua_S,"new",tolua_LuaExtern_framework_unity_blockreader_new00);
     tolua_function(tolua_S,"new_local",tolua_LuaExtern_framework_unity_blockreader_new00_local);
     tolua_function(tolua_S,".call",tolua_LuaExtern_framework_unity_blockreader_new00_local);
     tolua_function(tolua_S,"seek",tolua_LuaExtern_framework_unity_blockreader_seek00);
     tolua_function(tolua_S,"reseek",tolua_LuaExtern_framework_unity_blockreader_reseek00);
     tolua_function(tolua_S,"eof",tolua_LuaExtern_framework_unity_blockreader_eof00);
     tolua_function(tolua_S,"create",tolua_LuaExtern_framework_unity_blockreader_create00);
     tolua_function(tolua_S,"create",tolua_LuaExtern_framework_unity_blockreader_create01);
     tolua_function(tolua_S,"read1",tolua_LuaExtern_framework_unity_blockreader_read100);
     tolua_function(tolua_S,"read2",tolua_LuaExtern_framework_unity_blockreader_read200);
     tolua_function(tolua_S,"read4",tolua_LuaExtern_framework_unity_blockreader_read400);
     tolua_function(tolua_S,"read8",tolua_LuaExtern_framework_unity_blockreader_read800);
     tolua_function(tolua_S,"readu1",tolua_LuaExtern_framework_unity_blockreader_readu100);
     tolua_function(tolua_S,"readu2",tolua_LuaExtern_framework_unity_blockreader_readu200);
     tolua_function(tolua_S,"readu4",tolua_LuaExtern_framework_unity_blockreader_readu400);
     tolua_function(tolua_S,"readu8",tolua_LuaExtern_framework_unity_blockreader_readu800);
     tolua_function(tolua_S,"readf1",tolua_LuaExtern_framework_unity_blockreader_readf100);
     tolua_function(tolua_S,"readf2",tolua_LuaExtern_framework_unity_blockreader_readf200);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"blockwrite","framework::unity::blockwrite","object",tolua_collect_framework__unity__blockwrite);
    #else
    tolua_cclass(tolua_S,"blockwrite","framework::unity::blockwrite","object",NULL);
    #endif
    tolua_beginmodule(tolua_S,"blockwrite");
     tolua_function(tolua_S,"new",tolua_LuaExtern_framework_unity_blockwrite_new00);
     tolua_function(tolua_S,"new_local",tolua_LuaExtern_framework_unity_blockwrite_new00_local);
     tolua_function(tolua_S,".call",tolua_LuaExtern_framework_unity_blockwrite_new00_local);
     tolua_function(tolua_S,"seek",tolua_LuaExtern_framework_unity_blockwrite_seek00);
     tolua_function(tolua_S,"reseek",tolua_LuaExtern_framework_unity_blockwrite_reseek00);
     tolua_function(tolua_S,"buffer",tolua_LuaExtern_framework_unity_blockwrite_buffer00);
     tolua_function(tolua_S,"length",tolua_LuaExtern_framework_unity_blockwrite_length00);
     tolua_function(tolua_S,"create",tolua_LuaExtern_framework_unity_blockwrite_create00);
     tolua_function(tolua_S,"create",tolua_LuaExtern_framework_unity_blockwrite_create01);
     tolua_function(tolua_S,"write1",tolua_LuaExtern_framework_unity_blockwrite_write100);
     tolua_function(tolua_S,"write2",tolua_LuaExtern_framework_unity_blockwrite_write200);
     tolua_function(tolua_S,"write4",tolua_LuaExtern_framework_unity_blockwrite_write400);
     tolua_function(tolua_S,"write8",tolua_LuaExtern_framework_unity_blockwrite_write800);
     tolua_function(tolua_S,"writeu1",tolua_LuaExtern_framework_unity_blockwrite_writeu100);
     tolua_function(tolua_S,"writeu2",tolua_LuaExtern_framework_unity_blockwrite_writeu200);
     tolua_function(tolua_S,"writeu4",tolua_LuaExtern_framework_unity_blockwrite_writeu400);
     tolua_function(tolua_S,"writeu8",tolua_LuaExtern_framework_unity_blockwrite_writeu800);
     tolua_function(tolua_S,"writef1",tolua_LuaExtern_framework_unity_blockwrite_writef100);
     tolua_function(tolua_S,"writef2",tolua_LuaExtern_framework_unity_blockwrite_writef200);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"framework",0);
  tolua_beginmodule(tolua_S,"framework");
   tolua_module(tolua_S,"mvvm",0);
   tolua_beginmodule(tolua_S,"mvvm");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"DispatcherObject","framework::mvvm::DispatcherObject","",tolua_collect_framework__mvvm__DispatcherObject);
    #else
    tolua_cclass(tolua_S,"DispatcherObject","framework::mvvm::DispatcherObject","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"DispatcherObject");
     tolua_function(tolua_S,"new",tolua_LuaExtern_framework_mvvm_DispatcherObject_new00);
     tolua_function(tolua_S,"new_local",tolua_LuaExtern_framework_mvvm_DispatcherObject_new00_local);
     tolua_function(tolua_S,".call",tolua_LuaExtern_framework_mvvm_DispatcherObject_new00_local);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"DependencyObject","framework::mvvm::DependencyObject","framework::mvvm::DispatcherObject",tolua_collect_framework__mvvm__DependencyObject);
    #else
    tolua_cclass(tolua_S,"DependencyObject","framework::mvvm::DependencyObject","framework::mvvm::DispatcherObject",NULL);
    #endif
    tolua_beginmodule(tolua_S,"DependencyObject");
     tolua_function(tolua_S,"new",tolua_LuaExtern_framework_mvvm_DependencyObject_new00);
     tolua_function(tolua_S,"new_local",tolua_LuaExtern_framework_mvvm_DependencyObject_new00_local);
     tolua_function(tolua_S,".call",tolua_LuaExtern_framework_mvvm_DependencyObject_new00_local);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Visual","framework::mvvm::Visual","framework::mvvm::DependencyObject",tolua_collect_framework__mvvm__Visual);
    #else
    tolua_cclass(tolua_S,"Visual","framework::mvvm::Visual","framework::mvvm::DependencyObject",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Visual");
     tolua_function(tolua_S,"new",tolua_LuaExtern_framework_mvvm_Visual_new00);
     tolua_function(tolua_S,"new_local",tolua_LuaExtern_framework_mvvm_Visual_new00_local);
     tolua_function(tolua_S,".call",tolua_LuaExtern_framework_mvvm_Visual_new00_local);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"UIElement","framework::mvvm::UIElement","framework::mvvm::Visual",tolua_collect_framework__mvvm__UIElement);
    #else
    tolua_cclass(tolua_S,"UIElement","framework::mvvm::UIElement","framework::mvvm::Visual",NULL);
    #endif
    tolua_beginmodule(tolua_S,"UIElement");
     tolua_function(tolua_S,"new",tolua_LuaExtern_framework_mvvm_UIElement_new00);
     tolua_function(tolua_S,"new_local",tolua_LuaExtern_framework_mvvm_UIElement_new00_local);
     tolua_function(tolua_S,".call",tolua_LuaExtern_framework_mvvm_UIElement_new00_local);
     tolua_function(tolua_S,"RaiseEvent",tolua_LuaExtern_framework_mvvm_UIElement_RaiseEvent00);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"FrameworkElement","framework::mvvm::FrameworkElement","framework::mvvm::UIElement",tolua_collect_framework__mvvm__FrameworkElement);
    #else
    tolua_cclass(tolua_S,"FrameworkElement","framework::mvvm::FrameworkElement","framework::mvvm::UIElement",NULL);
    #endif
    tolua_beginmodule(tolua_S,"FrameworkElement");
     tolua_function(tolua_S,"new",tolua_LuaExtern_framework_mvvm_FrameworkElement_new00);
     tolua_function(tolua_S,"new_local",tolua_LuaExtern_framework_mvvm_FrameworkElement_new00_local);
     tolua_function(tolua_S,".call",tolua_LuaExtern_framework_mvvm_FrameworkElement_new00_local);
     tolua_function(tolua_S,"initForMvvm",tolua_LuaExtern_framework_mvvm_FrameworkElement_initForMvvm00);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"IView","framework::mvvm::IView","framework::mvvm::FrameworkElement",NULL);
    tolua_beginmodule(tolua_S,"IView");
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"INotifyPropertyChanged","framework::mvvm::INotifyPropertyChanged","",NULL);
    tolua_beginmodule(tolua_S,"INotifyPropertyChanged");
     tolua_function(tolua_S,"RaisePropertyChanged",tolua_LuaExtern_framework_mvvm_INotifyPropertyChanged_RaisePropertyChanged00);
    tolua_endmodule(tolua_S);
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"IModel","framework::mvvm::IModel","framework::mvvm::INotifyPropertyChanged",tolua_collect_framework__mvvm__IModel);
    #else
    tolua_cclass(tolua_S,"IModel","framework::mvvm::IModel","framework::mvvm::INotifyPropertyChanged",NULL);
    #endif
    tolua_beginmodule(tolua_S,"IModel");
     tolua_function(tolua_S,"getTypeName",tolua_LuaExtern_framework_mvvm_IModel_getTypeName00);
     tolua_function(tolua_S,"getRTTIType",tolua_LuaExtern_framework_mvvm_IModel_getRTTIType00);
     tolua_function(tolua_S,"init",tolua_LuaExtern_framework_mvvm_IModel_init00);
     tolua_function(tolua_S,"finalize",tolua_LuaExtern_framework_mvvm_IModel_finalize00);
     tolua_function(tolua_S,"update",tolua_LuaExtern_framework_mvvm_IModel_update00);
     tolua_function(tolua_S,"setBindingTarget",tolua_LuaExtern_framework_mvvm_IModel_setBindingTarget00);
     tolua_variable(tolua_S,"__unity__object__",tolua_get_framework__mvvm__IModel___unity__object__,NULL);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"ModelBase","framework::mvvm::ModelBase","framework::mvvm::IModel",NULL);
    tolua_beginmodule(tolua_S,"ModelBase");
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"LuaCocoStudioConversion","LuaCocoStudioConversion","",NULL);
  tolua_beginmodule(tolua_S,"LuaCocoStudioConversion");
   tolua_function(tolua_S,"getChildLayoutByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildLayoutByName00);
   tolua_function(tolua_S,"getChildUILayerByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUILayerByName00);
   tolua_function(tolua_S,"getChildUIButtonByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIButtonByName00);
   tolua_function(tolua_S,"getChildUICheckBoxByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUICheckBoxByName00);
   tolua_function(tolua_S,"getChildUIImageViewByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIImageViewByName00);
   tolua_function(tolua_S,"getChildUILabelByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelByName00);
   tolua_function(tolua_S,"getChildUILabelAtlasByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelAtlasByName00);
   tolua_function(tolua_S,"getChildUILabelBMFontByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelBMFontByName00);
   tolua_function(tolua_S,"getChildUILoadingBarByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUILoadingBarByName00);
   tolua_function(tolua_S,"getChildUISliderByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUISliderByName00);
   tolua_function(tolua_S,"getChildUITextFieldByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUITextFieldByName00);
   tolua_function(tolua_S,"getChildUIScrollViewByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIScrollViewByName00);
   tolua_function(tolua_S,"getChildUIListViewByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIListViewByName00);
   tolua_function(tolua_S,"getChildUIPageViewByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIPageViewByName00);
   tolua_function(tolua_S,"toLayout",tolua_LuaExtern_LuaCocoStudioConversion_toLayout00);
   tolua_function(tolua_S,"toUILayer",tolua_LuaExtern_LuaCocoStudioConversion_toUILayer00);
   tolua_function(tolua_S,"toUIButton",tolua_LuaExtern_LuaCocoStudioConversion_toUIButton00);
   tolua_function(tolua_S,"toUICheckBox",tolua_LuaExtern_LuaCocoStudioConversion_toUICheckBox00);
   tolua_function(tolua_S,"toUIImageView",tolua_LuaExtern_LuaCocoStudioConversion_toUIImageView00);
   tolua_function(tolua_S,"toUILabel",tolua_LuaExtern_LuaCocoStudioConversion_toUILabel00);
   tolua_function(tolua_S,"toUILabelAtlas",tolua_LuaExtern_LuaCocoStudioConversion_toUILabelAtlas00);
   tolua_function(tolua_S,"toUILabelBMFont",tolua_LuaExtern_LuaCocoStudioConversion_toUILabelBMFont00);
   tolua_function(tolua_S,"toUILoadingBar",tolua_LuaExtern_LuaCocoStudioConversion_toUILoadingBar00);
   tolua_function(tolua_S,"toUISlider",tolua_LuaExtern_LuaCocoStudioConversion_toUISlider00);
   tolua_function(tolua_S,"toUITextField",tolua_LuaExtern_LuaCocoStudioConversion_toUITextField00);
   tolua_function(tolua_S,"toUIScrollView",tolua_LuaExtern_LuaCocoStudioConversion_toUIScrollView00);
   tolua_function(tolua_S,"toUIListView",tolua_LuaExtern_LuaCocoStudioConversion_toUIListView00);
   tolua_function(tolua_S,"toUIPageView",tolua_LuaExtern_LuaCocoStudioConversion_toUIPageView00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"LuaTiledHelper","LuaTiledHelper","",NULL);
  tolua_beginmodule(tolua_S,"LuaTiledHelper");
   tolua_function(tolua_S,"getTMXLayerImageSize",tolua_LuaExtern_LuaTiledHelper_getTMXLayerImageSize00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"VK_LBUTTON",VK_LBUTTON);
  tolua_constant(tolua_S,"VK_RBUTTON",VK_RBUTTON);
  tolua_constant(tolua_S,"VK_CANCEL",VK_CANCEL);
  tolua_constant(tolua_S,"VK_MBUTTON",VK_MBUTTON);
  tolua_constant(tolua_S,"VK_XBUTTON1",VK_XBUTTON1);
  tolua_constant(tolua_S,"VK_XBUTTON2",VK_XBUTTON2);
  tolua_constant(tolua_S,"VK_BACK",VK_BACK);
  tolua_constant(tolua_S,"VK_TAB",VK_TAB);
  tolua_constant(tolua_S,"VK_CLEAR",VK_CLEAR);
  tolua_constant(tolua_S,"VK_RETURN",VK_RETURN);
  tolua_constant(tolua_S,"VK_SHIFT",VK_SHIFT);
  tolua_constant(tolua_S,"VK_CONTROL",VK_CONTROL);
  tolua_constant(tolua_S,"VK_MENU",VK_MENU);
  tolua_constant(tolua_S,"VK_PAUSE",VK_PAUSE);
  tolua_constant(tolua_S,"VK_CAPITAL",VK_CAPITAL);
  tolua_constant(tolua_S,"VK_KANA",VK_KANA);
  tolua_constant(tolua_S,"VK_HANGEUL",VK_HANGEUL);
  tolua_constant(tolua_S,"VK_HANGUL",VK_HANGUL);
  tolua_constant(tolua_S,"VK_JUNJA",VK_JUNJA);
  tolua_constant(tolua_S,"VK_FINAL",VK_FINAL);
  tolua_constant(tolua_S,"VK_HANJA",VK_HANJA);
  tolua_constant(tolua_S,"VK_KANJI",VK_KANJI);
  tolua_constant(tolua_S,"VK_ESCAPE",VK_ESCAPE);
  tolua_constant(tolua_S,"VK_CONVERT",VK_CONVERT);
  tolua_constant(tolua_S,"VK_NONCONVERT",VK_NONCONVERT);
  tolua_constant(tolua_S,"VK_ACCEPT",VK_ACCEPT);
  tolua_constant(tolua_S,"VK_MODECHANGE",VK_MODECHANGE);
  tolua_constant(tolua_S,"VK_SPACE",VK_SPACE);
  tolua_constant(tolua_S,"VK_PRIOR",VK_PRIOR);
  tolua_constant(tolua_S,"VK_NEXT",VK_NEXT);
  tolua_constant(tolua_S,"VK_END",VK_END);
  tolua_constant(tolua_S,"VK_HOME",VK_HOME);
  tolua_constant(tolua_S,"VK_LEFT",VK_LEFT);
  tolua_constant(tolua_S,"VK_UP",VK_UP);
  tolua_constant(tolua_S,"VK_RIGHT",VK_RIGHT);
  tolua_constant(tolua_S,"VK_DOWN",VK_DOWN);
  tolua_constant(tolua_S,"VK_SELECT",VK_SELECT);
  tolua_constant(tolua_S,"VK_PRINT",VK_PRINT);
  tolua_constant(tolua_S,"VK_EXECUTE",VK_EXECUTE);
  tolua_constant(tolua_S,"VK_SNAPSHOT",VK_SNAPSHOT);
  tolua_constant(tolua_S,"VK_INSERT",VK_INSERT);
  tolua_constant(tolua_S,"VK_DELETE",VK_DELETE);
  tolua_constant(tolua_S,"VK_HELP",VK_HELP);
  tolua_constant(tolua_S,"VK_0",VK_0);
  tolua_constant(tolua_S,"VK_1",VK_1);
  tolua_constant(tolua_S,"VK_2",VK_2);
  tolua_constant(tolua_S,"VK_3",VK_3);
  tolua_constant(tolua_S,"VK_4",VK_4);
  tolua_constant(tolua_S,"VK_5",VK_5);
  tolua_constant(tolua_S,"VK_6",VK_6);
  tolua_constant(tolua_S,"VK_7",VK_7);
  tolua_constant(tolua_S,"VK_8",VK_8);
  tolua_constant(tolua_S,"VK_9",VK_9);
  tolua_constant(tolua_S,"VK_A",VK_A);
  tolua_constant(tolua_S,"VK_B",VK_B);
  tolua_constant(tolua_S,"VK_C",VK_C);
  tolua_constant(tolua_S,"VK_D",VK_D);
  tolua_constant(tolua_S,"VK_E",VK_E);
  tolua_constant(tolua_S,"VK_F",VK_F);
  tolua_constant(tolua_S,"VK_G",VK_G);
  tolua_constant(tolua_S,"VK_H",VK_H);
  tolua_constant(tolua_S,"VK_I",VK_I);
  tolua_constant(tolua_S,"VK_J",VK_J);
  tolua_constant(tolua_S,"VK_K",VK_K);
  tolua_constant(tolua_S,"VK_L",VK_L);
  tolua_constant(tolua_S,"VK_M",VK_M);
  tolua_constant(tolua_S,"VK_N",VK_N);
  tolua_constant(tolua_S,"VK_O",VK_O);
  tolua_constant(tolua_S,"VK_P",VK_P);
  tolua_constant(tolua_S,"VK_Q",VK_Q);
  tolua_constant(tolua_S,"VK_R",VK_R);
  tolua_constant(tolua_S,"VK_S",VK_S);
  tolua_constant(tolua_S,"VK_T",VK_T);
  tolua_constant(tolua_S,"VK_U",VK_U);
  tolua_constant(tolua_S,"VK_V",VK_V);
  tolua_constant(tolua_S,"VK_W",VK_W);
  tolua_constant(tolua_S,"VK_X",VK_X);
  tolua_constant(tolua_S,"VK_Y",VK_Y);
  tolua_constant(tolua_S,"VK_Z",VK_Z);
  tolua_constant(tolua_S,"VK_LWIN",VK_LWIN);
  tolua_constant(tolua_S,"VK_RWIN",VK_RWIN);
  tolua_constant(tolua_S,"VK_APPS",VK_APPS);
  tolua_constant(tolua_S,"VK_SLEEP",VK_SLEEP);
  tolua_constant(tolua_S,"VK_NUMPAD0",VK_NUMPAD0);
  tolua_constant(tolua_S,"VK_NUMPAD1",VK_NUMPAD1);
  tolua_constant(tolua_S,"VK_NUMPAD2",VK_NUMPAD2);
  tolua_constant(tolua_S,"VK_NUMPAD3",VK_NUMPAD3);
  tolua_constant(tolua_S,"VK_NUMPAD4",VK_NUMPAD4);
  tolua_constant(tolua_S,"VK_NUMPAD5",VK_NUMPAD5);
  tolua_constant(tolua_S,"VK_NUMPAD6",VK_NUMPAD6);
  tolua_constant(tolua_S,"VK_NUMPAD7",VK_NUMPAD7);
  tolua_constant(tolua_S,"VK_NUMPAD8",VK_NUMPAD8);
  tolua_constant(tolua_S,"VK_NUMPAD9",VK_NUMPAD9);
  tolua_constant(tolua_S,"VK_MULTIPLY",VK_MULTIPLY);
  tolua_constant(tolua_S,"VK_ADD",VK_ADD);
  tolua_constant(tolua_S,"VK_SEPARATOR",VK_SEPARATOR);
  tolua_constant(tolua_S,"VK_SUBTRACT",VK_SUBTRACT);
  tolua_constant(tolua_S,"VK_DECIMAL",VK_DECIMAL);
  tolua_constant(tolua_S,"VK_DIVIDE",VK_DIVIDE);
  tolua_constant(tolua_S,"VK_F1",VK_F1);
  tolua_constant(tolua_S,"VK_F2",VK_F2);
  tolua_constant(tolua_S,"VK_F3",VK_F3);
  tolua_constant(tolua_S,"VK_F4",VK_F4);
  tolua_constant(tolua_S,"VK_F5",VK_F5);
  tolua_constant(tolua_S,"VK_F6",VK_F6);
  tolua_constant(tolua_S,"VK_F7",VK_F7);
  tolua_constant(tolua_S,"VK_F8",VK_F8);
  tolua_constant(tolua_S,"VK_F9",VK_F9);
  tolua_constant(tolua_S,"VK_F10",VK_F10);
  tolua_constant(tolua_S,"VK_F11",VK_F11);
  tolua_constant(tolua_S,"VK_F12",VK_F12);
  tolua_constant(tolua_S,"VK_F13",VK_F13);
  tolua_constant(tolua_S,"VK_F14",VK_F14);
  tolua_constant(tolua_S,"VK_F15",VK_F15);
  tolua_constant(tolua_S,"VK_F16",VK_F16);
  tolua_constant(tolua_S,"VK_F17",VK_F17);
  tolua_constant(tolua_S,"VK_F18",VK_F18);
  tolua_constant(tolua_S,"VK_F19",VK_F19);
  tolua_constant(tolua_S,"VK_F20",VK_F20);
  tolua_constant(tolua_S,"VK_F21",VK_F21);
  tolua_constant(tolua_S,"VK_F22",VK_F22);
  tolua_constant(tolua_S,"VK_F23",VK_F23);
  tolua_constant(tolua_S,"VK_F24",VK_F24);
  tolua_constant(tolua_S,"VK_NUMLOCK",VK_NUMLOCK);
  tolua_constant(tolua_S,"VK_SCROLL",VK_SCROLL);
  tolua_constant(tolua_S,"VK_OEM_NEC_EQUAL",VK_OEM_NEC_EQUAL);
  tolua_constant(tolua_S,"VK_OEM_FJ_JISHO",VK_OEM_FJ_JISHO);
  tolua_constant(tolua_S,"VK_OEM_FJ_MASSHOU",VK_OEM_FJ_MASSHOU);
  tolua_constant(tolua_S,"VK_OEM_FJ_TOUROKU",VK_OEM_FJ_TOUROKU);
  tolua_constant(tolua_S,"VK_OEM_FJ_LOYA",VK_OEM_FJ_LOYA);
  tolua_constant(tolua_S,"VK_OEM_FJ_ROYA",VK_OEM_FJ_ROYA);
  tolua_constant(tolua_S,"VK_LSHIFT",VK_LSHIFT);
  tolua_constant(tolua_S,"VK_RSHIFT",VK_RSHIFT);
  tolua_constant(tolua_S,"VK_LCONTROL",VK_LCONTROL);
  tolua_constant(tolua_S,"VK_RCONTROL",VK_RCONTROL);
  tolua_constant(tolua_S,"VK_LMENU",VK_LMENU);
  tolua_constant(tolua_S,"VK_RMENU",VK_RMENU);
  tolua_constant(tolua_S,"VK_BROWSER_BACK",VK_BROWSER_BACK);
  tolua_constant(tolua_S,"VK_BROWSER_FORWARD",VK_BROWSER_FORWARD);
  tolua_constant(tolua_S,"VK_BROWSER_REFRESH",VK_BROWSER_REFRESH);
  tolua_constant(tolua_S,"VK_BROWSER_STOP",VK_BROWSER_STOP);
  tolua_constant(tolua_S,"VK_BROWSER_SEARCH",VK_BROWSER_SEARCH);
  tolua_constant(tolua_S,"VK_BROWSER_FAVORITES",VK_BROWSER_FAVORITES);
  tolua_constant(tolua_S,"VK_BROWSER_HOME",VK_BROWSER_HOME);
  tolua_constant(tolua_S,"VK_VOLUME_MUTE",VK_VOLUME_MUTE);
  tolua_constant(tolua_S,"VK_VOLUME_DOWN",VK_VOLUME_DOWN);
  tolua_constant(tolua_S,"VK_VOLUME_UP",VK_VOLUME_UP);
  tolua_constant(tolua_S,"VK_MEDIA_NEXT_TRACK",VK_MEDIA_NEXT_TRACK);
  tolua_constant(tolua_S,"VK_MEDIA_PREV_TRACK",VK_MEDIA_PREV_TRACK);
  tolua_constant(tolua_S,"VK_MEDIA_STOP",VK_MEDIA_STOP);
  tolua_constant(tolua_S,"VK_MEDIA_PLAY_PAUSE",VK_MEDIA_PLAY_PAUSE);
  tolua_constant(tolua_S,"VK_LAUNCH_MAIL",VK_LAUNCH_MAIL);
  tolua_constant(tolua_S,"VK_LAUNCH_MEDIA_SELECT",VK_LAUNCH_MEDIA_SELECT);
  tolua_constant(tolua_S,"VK_LAUNCH_APP1",VK_LAUNCH_APP1);
  tolua_constant(tolua_S,"VK_LAUNCH_APP2",VK_LAUNCH_APP2);
  tolua_constant(tolua_S,"VK_OEM_1",VK_OEM_1);
  tolua_constant(tolua_S,"VK_OEM_PLUS",VK_OEM_PLUS);
  tolua_constant(tolua_S,"VK_OEM_COMMA",VK_OEM_COMMA);
  tolua_constant(tolua_S,"VK_OEM_MINUS",VK_OEM_MINUS);
  tolua_constant(tolua_S,"VK_OEM_PERIOD",VK_OEM_PERIOD);
  tolua_constant(tolua_S,"VK_OEM_2",VK_OEM_2);
  tolua_constant(tolua_S,"VK_OEM_3",VK_OEM_3);
  tolua_constant(tolua_S,"VK_OEM_4",VK_OEM_4);
  tolua_constant(tolua_S,"VK_OEM_5",VK_OEM_5);
  tolua_constant(tolua_S,"VK_OEM_6",VK_OEM_6);
  tolua_constant(tolua_S,"VK_OEM_7",VK_OEM_7);
  tolua_constant(tolua_S,"VK_OEM_8",VK_OEM_8);
  tolua_constant(tolua_S,"VK_OEM_AX",VK_OEM_AX);
  tolua_constant(tolua_S,"VK_OEM_102",VK_OEM_102);
  tolua_constant(tolua_S,"VK_ICO_HELP",VK_ICO_HELP);
  tolua_constant(tolua_S,"VK_ICO_00",VK_ICO_00);
  tolua_constant(tolua_S,"VK_PROCESSKEY",VK_PROCESSKEY);
  tolua_constant(tolua_S,"VK_ICO_CLEAR",VK_ICO_CLEAR);
  tolua_constant(tolua_S,"VK_PACKET",VK_PACKET);
  tolua_constant(tolua_S,"VK_OEM_RESET",VK_OEM_RESET);
  tolua_constant(tolua_S,"VK_OEM_JUMP",VK_OEM_JUMP);
  tolua_constant(tolua_S,"VK_OEM_PA1",VK_OEM_PA1);
  tolua_constant(tolua_S,"VK_OEM_PA2",VK_OEM_PA2);
  tolua_constant(tolua_S,"VK_OEM_PA3",VK_OEM_PA3);
  tolua_constant(tolua_S,"VK_OEM_WSCTRL",VK_OEM_WSCTRL);
  tolua_constant(tolua_S,"VK_OEM_CUSEL",VK_OEM_CUSEL);
  tolua_constant(tolua_S,"VK_OEM_ATTN",VK_OEM_ATTN);
  tolua_constant(tolua_S,"VK_OEM_FINISH",VK_OEM_FINISH);
  tolua_constant(tolua_S,"VK_OEM_COPY",VK_OEM_COPY);
  tolua_constant(tolua_S,"VK_OEM_AUTO",VK_OEM_AUTO);
  tolua_constant(tolua_S,"VK_OEM_ENLW",VK_OEM_ENLW);
  tolua_constant(tolua_S,"VK_OEM_BACKTAB",VK_OEM_BACKTAB);
  tolua_constant(tolua_S,"VK_ATTN",VK_ATTN);
  tolua_constant(tolua_S,"VK_CRSEL",VK_CRSEL);
  tolua_constant(tolua_S,"VK_EXSEL",VK_EXSEL);
  tolua_constant(tolua_S,"VK_EREOF",VK_EREOF);
  tolua_constant(tolua_S,"VK_PLAY",VK_PLAY);
  tolua_constant(tolua_S,"VK_ZOOM",VK_ZOOM);
  tolua_constant(tolua_S,"VK_NONAME",VK_NONAME);
  tolua_constant(tolua_S,"VK_PA1",VK_PA1);
  tolua_constant(tolua_S,"VK_OEM_CLEAR",VK_OEM_CLEAR);
  tolua_constant(tolua_S,"WM_LBUTTONDOWN",WM_LBUTTONDOWN);
  tolua_constant(tolua_S,"WM_LBUTTONUP",WM_LBUTTONUP);
  tolua_constant(tolua_S,"WM_LBUTTONDBLCLK",WM_LBUTTONDBLCLK);
  tolua_constant(tolua_S,"WM_RBUTTONDOWN",WM_RBUTTONDOWN);
  tolua_constant(tolua_S,"WM_RBUTTONUP",WM_RBUTTONUP);
  tolua_constant(tolua_S,"WM_RBUTTONDBLCLK",WM_RBUTTONDBLCLK);
  tolua_constant(tolua_S,"WM_MBUTTONDOWN",WM_MBUTTONDOWN);
  tolua_constant(tolua_S,"WM_MBUTTONUP",WM_MBUTTONUP);
  tolua_constant(tolua_S,"WM_MBUTTONDBLCLK",WM_MBUTTONDBLCLK);
  tolua_constant(tolua_S,"WM_MOUSEWHEEL",WM_MOUSEWHEEL);
  tolua_constant(tolua_S,"WM_XBUTTONDOWN",WM_XBUTTONDOWN);
  tolua_constant(tolua_S,"WM_XBUTTONUP",WM_XBUTTONUP);
  tolua_constant(tolua_S,"WM_XBUTTONDBLCLK",WM_XBUTTONDBLCLK);
  tolua_constant(tolua_S,"WM_MOUSEHWHEEL",WM_MOUSEHWHEEL);
  tolua_constant(tolua_S,"WM_MOUSELAST",WM_MOUSELAST);
  tolua_constant(tolua_S,"WM_MOUSELAST",WM_MOUSELAST);
  tolua_constant(tolua_S,"WM_MOUSELAST",WM_MOUSELAST);
  tolua_constant(tolua_S,"WM_MOUSELAST",WM_MOUSELAST);
  tolua_constant(tolua_S,"WHEEL_DELTA",WHEEL_DELTA);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_LuaExtern (lua_State* tolua_S) {
 return tolua_LuaExtern_open(tolua_S);
};
#endif

