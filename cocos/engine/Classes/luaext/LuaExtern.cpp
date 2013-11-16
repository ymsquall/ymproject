/*
** Lua binding: LuaExtern
** Generated automatically by tolua++-1.0.92 on 11/16/13 18:41:57.
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
#include "LuaExtern.h"
#include "cocos2dx_support/CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos-ext.h"
#include "unity/object.h"
#include "unity/datablock.h"
#include "mvvm/interface.h"
#include "mvvm/model.h"
#include "mvvm/view.h"
#include "CocoStudio/CocoStudio.h"
#include "LuaCocoStudioConversion.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace cocos2d::extension::armature;
using namespace framework;
using namespace CocosDenshion;

/* Exported function */
TOLUA_API int  tolua_LuaExtern_open (lua_State* tolua_S);

#include "LuaExtern.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CCPoint (lua_State* tolua_S)
{
 CCPoint* self = (CCPoint*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UITextField (lua_State* tolua_S)
{
 UITextField* self = (UITextField*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIWidget (lua_State* tolua_S)
{
 UIWidget* self = (UIWidget*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__DependencyObject (lua_State* tolua_S)
{
 framework::mvvm::DependencyObject* self = (framework::mvvm::DependencyObject*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UILabelAtlas (lua_State* tolua_S)
{
 UILabelAtlas* self = (UILabelAtlas*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UICCLabelAtlas (lua_State* tolua_S)
{
 UICCLabelAtlas* self = (UICCLabelAtlas*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UILoadingBar (lua_State* tolua_S)
{
 UILoadingBar* self = (UILoadingBar*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIRootWidget (lua_State* tolua_S)
{
 UIRootWidget* self = (UIRootWidget*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__unity__blockwrite (lua_State* tolua_S)
{
 framework::unity::blockwrite* self = (framework::unity::blockwrite*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_RelativeLayoutParameter (lua_State* tolua_S)
{
 RelativeLayoutParameter* self = (RelativeLayoutParameter*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCSGUIReader (lua_State* tolua_S)
{
 CCSGUIReader* self = (CCSGUIReader*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_std__vector_std__string_ (lua_State* tolua_S)
{
 std::vector<std::string>* self = (std::vector<std::string>*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIButton (lua_State* tolua_S)
{
 UIButton* self = (UIButton*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UILayer (lua_State* tolua_S)
{
 UILayer* self = (UILayer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIListView (lua_State* tolua_S)
{
 UIListView* self = (UIListView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIMargin (lua_State* tolua_S)
{
 UIMargin* self = (UIMargin*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCSSceneReader (lua_State* tolua_S)
{
 CCSSceneReader* self = (CCSSceneReader*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_LayoutParameter (lua_State* tolua_S)
{
 LayoutParameter* self = (LayoutParameter*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ArmatureAnimation (lua_State* tolua_S)
{
 ArmatureAnimation* self = (ArmatureAnimation*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__unity__blockreader (lua_State* tolua_S)
{
 framework::unity::blockreader* self = (framework::unity::blockreader*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UISlider (lua_State* tolua_S)
{
 UISlider* self = (UISlider*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_AffineTransform (lua_State* tolua_S)
{
 AffineTransform* self = (AffineTransform*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__IModel (lua_State* tolua_S)
{
 framework::mvvm::IModel* self = (framework::mvvm::IModel*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_cs__CCCSJsonDictionary (lua_State* tolua_S)
{
 cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_uint32 (lua_State* tolua_S)
{
 uint32* self = (uint32*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UICCTextField (lua_State* tolua_S)
{
 UICCTextField* self = (UICCTextField*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__FrameworkElement (lua_State* tolua_S)
{
 framework::mvvm::FrameworkElement* self = (framework::mvvm::FrameworkElement*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__Visual (lua_State* tolua_S)
{
 framework::mvvm::Visual* self = (framework::mvvm::Visual*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UICheckBox (lua_State* tolua_S)
{
 UICheckBox* self = (UICheckBox*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__UIElement (lua_State* tolua_S)
{
 framework::mvvm::UIElement* self = (framework::mvvm::UIElement*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIImageView (lua_State* tolua_S)
{
 UIImageView* self = (UIImageView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIScrollView (lua_State* tolua_S)
{
 UIScrollView* self = (UIScrollView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIPageView (lua_State* tolua_S)
{
 UIPageView* self = (UIPageView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_framework__mvvm__DispatcherObject (lua_State* tolua_S)
{
 framework::mvvm::DispatcherObject* self = (framework::mvvm::DispatcherObject*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIInputManager (lua_State* tolua_S)
{
 UIInputManager* self = (UIInputManager*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Layout (lua_State* tolua_S)
{
 Layout* self = (Layout*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Armature (lua_State* tolua_S)
{
 Armature* self = (Armature*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIHelper (lua_State* tolua_S)
{
 UIHelper* self = (UIHelper*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Rect (lua_State* tolua_S)
{
 Rect* self = (Rect*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UILabelBMFont (lua_State* tolua_S)
{
 UILabelBMFont* self = (UILabelBMFont*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_GUIRenderer (lua_State* tolua_S)
{
 GUIRenderer* self = (GUIRenderer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_RectClippingNode (lua_State* tolua_S)
{
 RectClippingNode* self = (RectClippingNode*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCRect (lua_State* tolua_S)
{
 CCRect* self = (CCRect*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UIDragPanel (lua_State* tolua_S)
{
 UIDragPanel* self = (UIDragPanel*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_LinearLayoutParameter (lua_State* tolua_S)
{
 LinearLayoutParameter* self = (LinearLayoutParameter*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_UILabel (lua_State* tolua_S)
{
 UILabel* self = (UILabel*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"UILabelAtlas");
 tolua_usertype(tolua_S,"SEL_DragPanelBerthToBottomEvent");
 tolua_usertype(tolua_S,"SEL_TextFieldDeleteBackwardEvent");
 tolua_usertype(tolua_S,"SEL_DragPanelBounceToLeftEvent");
 tolua_usertype(tolua_S,"framework::unity::blockwrite");
 tolua_usertype(tolua_S,"SEL_DragPanelBerthToRightTopEvent");
 tolua_usertype(tolua_S,"SEL_TextFieldDetachWithIMEEvent");
 tolua_usertype(tolua_S,"SEL_TextFieldEvent");
 tolua_usertype(tolua_S,"SEL_ScrollViewEvent");
 tolua_usertype(tolua_S,"SEL_ScrollToBottomEvent");
 tolua_usertype(tolua_S,"UISlider");
 tolua_usertype(tolua_S,"ProcessBase");
 tolua_usertype(tolua_S,"CCAction");
 tolua_usertype(tolua_S,"Color3B");
 tolua_usertype(tolua_S,"CCActionManager");
 tolua_usertype(tolua_S,"UIScrollView");
 tolua_usertype(tolua_S,"UIPageView");
 tolua_usertype(tolua_S,"Layout");
 tolua_usertype(tolua_S,"CCCSComAudio");
 tolua_usertype(tolua_S,"SEL_ScrollToTopEvent");
 tolua_usertype(tolua_S,"CCTexture2D");
 tolua_usertype(tolua_S,"CCTouch");
 tolua_usertype(tolua_S,"SEL_SelectedStateEvent");
 tolua_usertype(tolua_S,"UIWidget");
 tolua_usertype(tolua_S,"SEL_ListViewEvent");
 tolua_usertype(tolua_S,"SEL_DragPanelBounceToLeftBottomEvent");
 tolua_usertype(tolua_S,"UILoadingBar");
 tolua_usertype(tolua_S,"SEL_PushEvent");
 tolua_usertype(tolua_S,"CCNodeRGBA");
 tolua_usertype(tolua_S,"SEL_TextFieldInsertTextEvent");
 tolua_usertype(tolua_S,"SEL_MoveEvent");
 tolua_usertype(tolua_S,"CCSGUIReader");
 tolua_usertype(tolua_S,"UIButton");
 tolua_usertype(tolua_S,"SEL_SlidPercentChangedEvent");
 tolua_usertype(tolua_S,"CCTextFieldDelegate");
 tolua_usertype(tolua_S,"CCRect");
 tolua_usertype(tolua_S,"SEL_SelectEvent");
 tolua_usertype(tolua_S,"SEL_ScrollToLeftEvent");
 tolua_usertype(tolua_S,"framework::unity::blockreader");
 tolua_usertype(tolua_S,"SEL_DragPanelBerthToLeftEvent");
 tolua_usertype(tolua_S,"SEL_DragPanelBerthToTopEvent");
 tolua_usertype(tolua_S,"SEL_DragPanelBerthToRightEvent");
 tolua_usertype(tolua_S,"UICCTextField");
 tolua_usertype(tolua_S,"UIImageView");
 tolua_usertype(tolua_S,"SEL_DragPanelBounceToBottomEvent");
 tolua_usertype(tolua_S,"UIInputManager");
 tolua_usertype(tolua_S,"SEL_TextFieldAttachWithIMEEvent");
 tolua_usertype(tolua_S,"SEL_PageViewPageTurningEvent");
 tolua_usertype(tolua_S,"UILabelBMFont");
 tolua_usertype(tolua_S,"CCVerticalTextAlignment");
 tolua_usertype(tolua_S,"framework::mvvm::ModelBase");
 tolua_usertype(tolua_S,"RectClippingNode");
 tolua_usertype(tolua_S,"UITextField");
 tolua_usertype(tolua_S,"UILabel");
 tolua_usertype(tolua_S,"SEL_DragPanelBounceToTopEvent");
 tolua_usertype(tolua_S,"CCCSComAttribute");
 tolua_usertype(tolua_S,"UIRootWidget");
 tolua_usertype(tolua_S,"UIZoomButton");
 tolua_usertype(tolua_S,"RelativeLayoutParameter");
 tolua_usertype(tolua_S,"SEL_DragPanelBounceToRightBottomEvent");
 tolua_usertype(tolua_S,"std::vector<std::string>");
 tolua_usertype(tolua_S,"framework::mvvm::IModel");
 tolua_usertype(tolua_S,"UILayer");
 tolua_usertype(tolua_S,"CCComAttribute");
 tolua_usertype(tolua_S,"CCSSceneReader");
 tolua_usertype(tolua_S,"LayoutParameter");
 tolua_usertype(tolua_S,"CCComAudio");
 tolua_usertype(tolua_S,"CCClippingNode");
 tolua_usertype(tolua_S,"AffineTransform");
 tolua_usertype(tolua_S,"cs::CCCSJsonDictionary");
 tolua_usertype(tolua_S,"framework::mvvm::DispatcherObject");
 tolua_usertype(tolua_S,"AnimationData");
 tolua_usertype(tolua_S,"LinearLayoutParameter");
 tolua_usertype(tolua_S,"cocos2d::CCNode");
 tolua_usertype(tolua_S,"SEL_DragPanelBounceToRightEvent");
 tolua_usertype(tolua_S,"SEL_ScrollToRightEvent");
 tolua_usertype(tolua_S,"CCComRender");
 tolua_usertype(tolua_S,"TextureAtlas");
 tolua_usertype(tolua_S,"UIScrollInterface");
 tolua_usertype(tolua_S,"SEL_ListViewInitChildEvent");
 tolua_usertype(tolua_S,"CCLayer");
 tolua_usertype(tolua_S,"SEL_ListViewUpdateChildEvent");
 tolua_usertype(tolua_S,"UICCLabelAtlas");
 tolua_usertype(tolua_S,"armature::Bone");
 tolua_usertype(tolua_S,"GLubyte");
 tolua_usertype(tolua_S,"uint32");
 tolua_usertype(tolua_S,"framework::mvvm::INotifyPropertyChanged");
 tolua_usertype(tolua_S,"SEL_DragPanelEvent");
 tolua_usertype(tolua_S,"framework::mvvm::IView");
 tolua_usertype(tolua_S,"framework::mvvm::FrameworkElement");
 tolua_usertype(tolua_S,"unity::object");
 tolua_usertype(tolua_S,"CCLabelAtlas");
 tolua_usertype(tolua_S,"framework::mvvm::UIElement");
 tolua_usertype(tolua_S,"framework::mvvm::Visual");
 tolua_usertype(tolua_S,"framework::mvvm::DependencyObject");
 tolua_usertype(tolua_S,"CCBlendProtocol");
 tolua_usertype(tolua_S,"UIListView");
 tolua_usertype(tolua_S,"CCEvent");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"SEL_TouchEvent");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"object");
 tolua_usertype(tolua_S,"SEL_DragPanelBerthToLeftTopEvent");
 tolua_usertype(tolua_S,"ArmatureAnimation");
 tolua_usertype(tolua_S,"SEL_ReleaseEvent");
 tolua_usertype(tolua_S,"UIDragPanel");
 tolua_usertype(tolua_S,"ccColor3B");
 tolua_usertype(tolua_S,"UIMargin");
 tolua_usertype(tolua_S,"cocos2d::CCComponent");
 tolua_usertype(tolua_S,"SEL_UnSelectEvent");
 tolua_usertype(tolua_S,"BatchNode");
 tolua_usertype(tolua_S,"CCSize");
 tolua_usertype(tolua_S,"BlendFunc");
 tolua_usertype(tolua_S,"SEL_CancelEvent");
 tolua_usertype(tolua_S,"SEL_DragPanelBerthToLeftBottomEvent");
 tolua_usertype(tolua_S,"Rect");
 tolua_usertype(tolua_S,"CCArray");
 tolua_usertype(tolua_S,"Dictionary");
 tolua_usertype(tolua_S,"ArmatureData");
 tolua_usertype(tolua_S,"Armature");
 tolua_usertype(tolua_S,"UICheckBox");
 tolua_usertype(tolua_S,"cocos2d::CCObject");
 tolua_usertype(tolua_S,"GUIRenderer");
 tolua_usertype(tolua_S,"CCPoint");
 tolua_usertype(tolua_S,"UIHelper");
 tolua_usertype(tolua_S,"CCTextFieldTTF");
 tolua_usertype(tolua_S,"SEL_DragPanelBerthToRightBottomEvent");
 tolua_usertype(tolua_S,"SEL_DragPanelBounceToLeftTopEvent");
 tolua_usertype(tolua_S,"ccBlendFunc");
 tolua_usertype(tolua_S,"CCTextAlignment");
 tolua_usertype(tolua_S,"SEL_PageViewEvent");
 tolua_usertype(tolua_S,"LuaCocoStudioConversion");
 tolua_usertype(tolua_S,"SEL_DragPanelBounceToRightTopEvent");
}

/* method: onEnter of class  CCComRender */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCComRender_onEnter00
static int tolua_LuaExtern_CCComRender_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCComRender",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCComRender* self = (CCComRender*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  CCComRender */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCComRender_onExit00
static int tolua_LuaExtern_CCComRender_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCComRender",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCComRender* self = (CCComRender*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNode of class  CCComRender */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCComRender_getNode00
static int tolua_LuaExtern_CCComRender_getNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCComRender",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCComRender* self = (CCComRender*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNode'", NULL);
#endif
  {
   cocos2d::CCNode* tolua_ret = (cocos2d::CCNode*)  self->getNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cocos2d::CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNode of class  CCComRender */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCComRender_setNode00
static int tolua_LuaExtern_CCComRender_setNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCComRender",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCComRender* self = (CCComRender*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCNode* pNode = ((cocos2d::CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNode'", NULL);
#endif
  {
   self->setNode(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCComRender */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCComRender_create00
static int tolua_LuaExtern_CCComRender_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCComRender",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCNode",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cocos2d::CCNode* pNode = ((cocos2d::CCNode*)  tolua_tousertype(tolua_S,2,0));
  const char* comName = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CCComRender* tolua_ret = (CCComRender*)  CCComRender::create(pNode,comName);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCComRender");
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

/* method: setName of class  CCComRender */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCComRender_setName00
static int tolua_LuaExtern_CCComRender_setName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCComRender",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCComRender* self = (CCComRender*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setName'", NULL);
#endif
  {
   self->setName(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_new00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   cs::CCCSJsonDictionary* tolua_ret = (cs::CCCSJsonDictionary*)  Mtolua_new((cs::CCCSJsonDictionary)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cs::CCCSJsonDictionary");
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

/* method: new_local of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_new00_local
static int tolua_LuaExtern_cs_CCCSJsonDictionary_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   cs::CCCSJsonDictionary* tolua_ret = (cs::CCCSJsonDictionary*)  Mtolua_new((cs::CCCSJsonDictionary)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cs::CCCSJsonDictionary");
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

/* method: delete of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_delete00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
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

/* method: initWithDescription of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_initWithDescription00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_initWithDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszDescription = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithDescription'", NULL);
#endif
  {
   self->initWithDescription(pszDescription);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItem of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  int nValue = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItem'", NULL);
#endif
  {
   self->insertItem(pszKey,nValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItem of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem01
static int tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  double fValue = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItem'", NULL);
#endif
  {
   self->insertItem(pszKey,fValue);
  }
 }
 return 0;
tolua_lerror:
 return tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItem of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem02
static int tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pszValue = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItem'", NULL);
#endif
  {
   self->insertItem(pszKey,pszValue);
  }
 }
 return 0;
tolua_lerror:
 return tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItem of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem03
static int tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  cs::CCCSJsonDictionary* subDictionary = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItem'", NULL);
#endif
  {
   self->insertItem(pszKey,subDictionary);
  }
 }
 return 0;
tolua_lerror:
 return tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItem of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem04
static int tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool bValue = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItem'", NULL);
#endif
  {
   self->insertItem(pszKey,bValue);
  }
 }
 return 0;
tolua_lerror:
 return tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: deleteItem of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_deleteItem00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_deleteItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'deleteItem'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->deleteItem(pszKey);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'deleteItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cleanUp of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_cleanUp00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_cleanUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cleanUp'", NULL);
#endif
  {
   self->cleanUp();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cleanUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isKeyValidate of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_isKeyValidate00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_isKeyValidate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isKeyValidate'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isKeyValidate(pszKey);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isKeyValidate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItemIntValue of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getItemIntValue00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getItemIntValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  int nDefaultValue = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemIntValue'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getItemIntValue(pszKey,nDefaultValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemIntValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItemFloatValue of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getItemFloatValue00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getItemFloatValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  double fDefaultValue = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemFloatValue'", NULL);
#endif
  {
   double tolua_ret = (double)  self->getItemFloatValue(pszKey,fDefaultValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemFloatValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItemStringValue of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getItemStringValue00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getItemStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemStringValue'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getItemStringValue(pszKey);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItemBoolvalue of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getItemBoolvalue00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getItemBoolvalue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool bDefaultValue = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemBoolvalue'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getItemBoolvalue(pszKey,bDefaultValue);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemBoolvalue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSubDictionary of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getSubDictionary00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getSubDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSubDictionary'", NULL);
#endif
  {
   cs::CCCSJsonDictionary* tolua_ret = (cs::CCCSJsonDictionary*)  self->getSubDictionary(pszKey);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cs::CCCSJsonDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSubDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getDescription00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getDescription();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItemToArray of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  int nValue = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItemToArray'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->insertItemToArray(pszArrayKey,nValue);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertItemToArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItemToArray of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray01
static int tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  double fValue = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItemToArray'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->insertItemToArray(pszArrayKey,fValue);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItemToArray of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray02
static int tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pszValue = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItemToArray'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->insertItemToArray(pszArrayKey,pszValue);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItemToArray of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray03
static int tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  cs::CCCSJsonDictionary* subDictionary = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItemToArray'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->insertItemToArray(pszArrayKey,subDictionary);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getArrayItemCount of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getArrayItemCount00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getArrayItemCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getArrayItemCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getArrayItemCount(pszArrayKey);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getArrayItemCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIntValueFromArray of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getIntValueFromArray00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getIntValueFromArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  int nIndex = ((int)  tolua_tonumber(tolua_S,3,0));
  int nDefaultValue = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIntValueFromArray'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getIntValueFromArray(pszArrayKey,nIndex,nDefaultValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIntValueFromArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFloatValueFromArray of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getFloatValueFromArray00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getFloatValueFromArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  int nIndex = ((int)  tolua_tonumber(tolua_S,3,0));
  double fDefaultValue = ((double)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFloatValueFromArray'", NULL);
#endif
  {
   double tolua_ret = (double)  self->getFloatValueFromArray(pszArrayKey,nIndex,fDefaultValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFloatValueFromArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoolValueFromArray of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getBoolValueFromArray00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getBoolValueFromArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  int nIndex = ((int)  tolua_tonumber(tolua_S,3,0));
  bool bDefaultValue = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoolValueFromArray'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getBoolValueFromArray(pszArrayKey,nIndex,bDefaultValue);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoolValueFromArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringValueFromArray of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getStringValueFromArray00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getStringValueFromArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  int nIndex = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringValueFromArray'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getStringValueFromArray(pszArrayKey,nIndex);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringValueFromArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSubItemFromArray of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getSubItemFromArray00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getSubItemFromArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  int nIndex = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSubItemFromArray'", NULL);
#endif
  {
   cs::CCCSJsonDictionary* tolua_ret = (cs::CCCSJsonDictionary*)  self->getSubItemFromArray(pszArrayKey,nIndex);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cs::CCCSJsonDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSubItemFromArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItemTypeFromArray of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getItemTypeFromArray00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getItemTypeFromArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszArrayKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  int nIndex = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemTypeFromArray'", NULL);
#endif
  {
   cs::ccDicItemType tolua_ret = (cs::ccDicItemType)  self->getItemTypeFromArray(pszArrayKey,nIndex);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemTypeFromArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItemCount of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getItemCount00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getItemCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getItemCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItemType of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getItemType00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getItemType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  int nIndex = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemType'", NULL);
#endif
  {
   cs::ccDicItemType tolua_ret = (cs::ccDicItemType)  self->getItemType(nIndex);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getItemType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getItemType of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getItemType01
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getItemType01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
  const char* pszKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getItemType'", NULL);
#endif
  {
   cs::ccDicItemType tolua_ret = (cs::ccDicItemType)  self->getItemType(pszKey);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_cs_CCCSJsonDictionary_getItemType00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAllMemberNames of class  cs::CCCSJsonDictionary */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_cs_CCCSJsonDictionary_getAllMemberNames00
static int tolua_LuaExtern_cs_CCCSJsonDictionary_getAllMemberNames00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cs::CCCSJsonDictionary* self = (cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAllMemberNames'", NULL);
#endif
  {
   std::vector<std::string> tolua_ret = (std::vector<std::string>)  self->getAllMemberNames();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::vector<std::string>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<std::string>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::vector<std::string>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<std::string>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAllMemberNames'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCCSComAttribute */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCCSComAttribute_init00
static int tolua_LuaExtern_CCCSComAttribute_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCSComAttribute",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCSComAttribute* self = (CCCSComAttribute*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  CCCSComAttribute */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCCSComAttribute_create00
static int tolua_LuaExtern_CCCSComAttribute_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCCSComAttribute",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCCSComAttribute* tolua_ret = (CCCSComAttribute*)  CCCSComAttribute::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCCSComAttribute");
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

/* method: getDict of class  CCCSComAttribute */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCCSComAttribute_getDict00
static int tolua_LuaExtern_CCCSComAttribute_getDict00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCSComAttribute",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCSComAttribute* self = (CCCSComAttribute*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDict'", NULL);
#endif
  {
   cs::CCCSJsonDictionary* tolua_ret = (cs::CCCSJsonDictionary*)  self->getDict();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cs::CCCSJsonDictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDict'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCCSComAudio */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCCSComAudio_init00
static int tolua_LuaExtern_CCCSComAudio_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCSComAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCSComAudio* self = (CCCSComAudio*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  CCCSComAudio */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCCSComAudio_create00
static int tolua_LuaExtern_CCCSComAudio_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCCSComAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCCSComAudio* tolua_ret = (CCCSComAudio*)  CCCSComAudio::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCCSComAudio");
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

/* method: setFile of class  CCCSComAudio */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCCSComAudio_setFile00
static int tolua_LuaExtern_CCCSComAudio_setFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCSComAudio",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCSComAudio* self = (CCCSComAudio*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFile'", NULL);
#endif
  {
   self->setFile(pszFilePath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFile of class  CCCSComAudio */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCCSComAudio_getFile00
static int tolua_LuaExtern_CCCSComAudio_getFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCSComAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCSComAudio* self = (CCCSComAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFile'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getFile();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLoop of class  CCCSComAudio */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCCSComAudio_setLoop00
static int tolua_LuaExtern_CCCSComAudio_setLoop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCSComAudio",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCSComAudio* self = (CCCSComAudio*)  tolua_tousertype(tolua_S,1,0);
  bool bLoop = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLoop'", NULL);
#endif
  {
   self->setLoop(bLoop);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLoop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isLoop of class  CCCSComAudio */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCCSComAudio_isLoop00
static int tolua_LuaExtern_CCCSComAudio_isLoop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCSComAudio",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCSComAudio* self = (CCCSComAudio*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isLoop'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isLoop();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isLoop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_new00
static int tolua_LuaExtern_CCSGUIReader_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSGUIReader* tolua_ret = (CCSGUIReader*)  Mtolua_new((CCSGUIReader)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSGUIReader");
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

/* method: new_local of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_new00_local
static int tolua_LuaExtern_CCSGUIReader_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSGUIReader* tolua_ret = (CCSGUIReader*)  Mtolua_new((CCSGUIReader)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSGUIReader");
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

/* method: delete of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_delete00
static int tolua_LuaExtern_CCSGUIReader_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
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

/* method: shareReader of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_shareReader00
static int tolua_LuaExtern_CCSGUIReader_shareReader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSGUIReader* tolua_ret = (CCSGUIReader*)  CCSGUIReader::shareReader();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSGUIReader");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'shareReader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: purgeCCSGUIReader of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_purgeCCSGUIReader00
static int tolua_LuaExtern_CCSGUIReader_purgeCCSGUIReader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSGUIReader::purgeCCSGUIReader();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'purgeCCSGUIReader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: widgetFromJsonFile of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_widgetFromJsonFile00
static int tolua_LuaExtern_CCSGUIReader_widgetFromJsonFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'widgetFromJsonFile'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->widgetFromJsonFile(fileName);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'widgetFromJsonFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: widgetFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_widgetFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_widgetFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  cs::CCCSJsonDictionary* data = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'widgetFromJsonDictionary'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->widgetFromJsonDictionary(data);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'widgetFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVersionInteger of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_getVersionInteger00
static int tolua_LuaExtern_CCSGUIReader_getVersionInteger00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  const char* str = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVersionInteger'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getVersionInteger(str);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVersionInteger'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForWidgetFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForWidgetFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForWidgetFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForWidgetFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForWidgetFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForWidgetFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColorPropsForWidgetFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setColorPropsForWidgetFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setColorPropsForWidgetFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColorPropsForWidgetFromJsonDictionary'", NULL);
#endif
  {
   self->setColorPropsForWidgetFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColorPropsForWidgetFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForButtonFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForButtonFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForButtonFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForButtonFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForButtonFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForButtonFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForCheckBoxFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForCheckBoxFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForCheckBoxFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForCheckBoxFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForCheckBoxFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForCheckBoxFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForImageViewFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForImageViewFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForImageViewFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForImageViewFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForImageViewFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForImageViewFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForLabelFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForLabelFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForLabelFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForLabelFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForLabelFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForLabelFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForLabelAtlasFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForLabelAtlasFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForLabelAtlasFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForLabelAtlasFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForLabelAtlasFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForLabelAtlasFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForContainerWidgetFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForContainerWidgetFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForContainerWidgetFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForContainerWidgetFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForContainerWidgetFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForContainerWidgetFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForPanelFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForPanelFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForPanelFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForPanelFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForPanelFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForPanelFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForScrollViewFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForScrollViewFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForScrollViewFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForScrollViewFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForScrollViewFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForScrollViewFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForSliderFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForSliderFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForSliderFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForSliderFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForSliderFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForSliderFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForTextAreaFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForTextAreaFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForTextAreaFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForTextAreaFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForTextAreaFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForTextAreaFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForTextButtonFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForTextButtonFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForTextButtonFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForTextButtonFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForTextButtonFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForTextButtonFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForTextFieldFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForTextFieldFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForTextFieldFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForTextFieldFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForTextFieldFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForTextFieldFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForLoadingBarFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForLoadingBarFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForLoadingBarFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForLoadingBarFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForLoadingBarFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForLoadingBarFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForListViewFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForListViewFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForListViewFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForListViewFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForListViewFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForListViewFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForPageViewFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForPageViewFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForPageViewFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForPageViewFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForPageViewFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForPageViewFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForLabelBMFontFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForLabelBMFontFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForLabelBMFontFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForLabelBMFontFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForLabelBMFontFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForLabelBMFontFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPropsForDragPanelFromJsonDictionary of class  CCSGUIReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSGUIReader_setPropsForDragPanelFromJsonDictionary00
static int tolua_LuaExtern_CCSGUIReader_setPropsForDragPanelFromJsonDictionary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSGUIReader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cs::CCCSJsonDictionary",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSGUIReader* self = (CCSGUIReader*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  cs::CCCSJsonDictionary* options = ((cs::CCCSJsonDictionary*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPropsForDragPanelFromJsonDictionary'", NULL);
#endif
  {
   self->setPropsForDragPanelFromJsonDictionary(widget,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPropsForDragPanelFromJsonDictionary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCSSceneReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSSceneReader_new00
static int tolua_LuaExtern_CCSSceneReader_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSSceneReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSSceneReader* tolua_ret = (CCSSceneReader*)  Mtolua_new((CCSSceneReader)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSSceneReader");
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

/* method: new_local of class  CCSSceneReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSSceneReader_new00_local
static int tolua_LuaExtern_CCSSceneReader_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSSceneReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSSceneReader* tolua_ret = (CCSSceneReader*)  Mtolua_new((CCSSceneReader)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSSceneReader");
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

/* method: delete of class  CCSSceneReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSSceneReader_delete00
static int tolua_LuaExtern_CCSSceneReader_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSSceneReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSSceneReader* self = (CCSSceneReader*)  tolua_tousertype(tolua_S,1,0);
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

/* method: sharedSceneReader of class  CCSSceneReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSSceneReader_sharedSceneReader00
static int tolua_LuaExtern_CCSSceneReader_sharedSceneReader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSSceneReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSSceneReader* tolua_ret = (CCSSceneReader*)  CCSSceneReader::sharedSceneReader();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSSceneReader");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedSceneReader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: purgeSceneReader of class  CCSSceneReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSSceneReader_purgeSceneReader00
static int tolua_LuaExtern_CCSSceneReader_purgeSceneReader00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSSceneReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSSceneReader* self = (CCSSceneReader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'purgeSceneReader'", NULL);
#endif
  {
   self->purgeSceneReader();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'purgeSceneReader'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sceneReaderVersion of class  CCSSceneReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSSceneReader_sceneReaderVersion00
static int tolua_LuaExtern_CCSSceneReader_sceneReaderVersion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSSceneReader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   const char* tolua_ret = (const char*)  CCSSceneReader::sceneReaderVersion();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sceneReaderVersion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createNodeWithSceneFile of class  CCSSceneReader */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CCSSceneReader_createNodeWithSceneFile00
static int tolua_LuaExtern_CCSSceneReader_createNodeWithSceneFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSSceneReader",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSSceneReader* self = (CCSSceneReader*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createNodeWithSceneFile'", NULL);
#endif
  {
   cocos2d::CCNode* tolua_ret = (cocos2d::CCNode*)  self->createNodeWithSceneFile(pszFileName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cocos2d::CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createNodeWithSceneFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: CocosGUIVersion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_CocosGUIVersion00
static int tolua_LuaExtern_CocosGUIVersion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   const char* tolua_ret = (const char*)  CocosGUIVersion();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CocosGUIVersion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  UIZoomButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIZoomButton_create00
static int tolua_LuaExtern_UIZoomButton_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIZoomButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIZoomButton* tolua_ret = (UIZoomButton*)  UIZoomButton::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIZoomButton");
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

/* method: new of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_new00
static int tolua_LuaExtern_Layout_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Layout* tolua_ret = (Layout*)  Mtolua_new((Layout)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Layout");
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

/* method: new_local of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_new00_local
static int tolua_LuaExtern_Layout_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Layout* tolua_ret = (Layout*)  Mtolua_new((Layout)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Layout");
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

/* method: delete of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_delete00
static int tolua_LuaExtern_Layout_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_create00
static int tolua_LuaExtern_Layout_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Layout* tolua_ret = (Layout*)  Layout::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Layout");
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

/* method: hitTest of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_hitTest00
static int tolua_LuaExtern_Layout_hitTest00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hitTest'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hitTest(*pt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hitTest'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundImage of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setBackGroundImage00
static int tolua_LuaExtern_Layout_setBackGroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundImage'", NULL);
#endif
  {
   self->setBackGroundImage(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundImageCapInsets of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setBackGroundImageCapInsets00
static int tolua_LuaExtern_Layout_setBackGroundImageCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundImageCapInsets'", NULL);
#endif
  {
   self->setBackGroundImageCapInsets(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundImageCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColorType of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setBackGroundColorType00
static int tolua_LuaExtern_Layout_setBackGroundColorType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  LayoutBackGroundColorType type = ((LayoutBackGroundColorType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColorType'", NULL);
#endif
  {
   self->setBackGroundColorType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundColorType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundImageScale9Enabled of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setBackGroundImageScale9Enabled00
static int tolua_LuaExtern_Layout_setBackGroundImageScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundImageScale9Enabled'", NULL);
#endif
  {
   self->setBackGroundImageScale9Enabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundImageScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColor of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setBackGroundColor00
static int tolua_LuaExtern_Layout_setBackGroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColor'", NULL);
#endif
  {
   self->setBackGroundColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColor of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setBackGroundColor01
static int tolua_LuaExtern_Layout_setBackGroundColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* startColor = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
  const ccColor3B* endColor = ((const ccColor3B*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColor'", NULL);
#endif
  {
   self->setBackGroundColor(*startColor,*endColor);
  }
 }
 return 0;
tolua_lerror:
 return tolua_LuaExtern_Layout_setBackGroundColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColorOpacity of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setBackGroundColorOpacity00
static int tolua_LuaExtern_Layout_setBackGroundColorOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  int opacity = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColorOpacity'", NULL);
#endif
  {
   self->setBackGroundColorOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundColorOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundColorVector of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setBackGroundColorVector00
static int tolua_LuaExtern_Layout_setBackGroundColorVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* vector = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundColorVector'", NULL);
#endif
  {
   self->setBackGroundColorVector(*vector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundColorVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setColor00
static int tolua_LuaExtern_Layout_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setOpacity00
static int tolua_LuaExtern_Layout_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  int opacity = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBackGroundImage of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_removeBackGroundImage00
static int tolua_LuaExtern_Layout_removeBackGroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBackGroundImage'", NULL);
#endif
  {
   self->removeBackGroundImage();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBackGroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackGroundImageTextureSize of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_getBackGroundImageTextureSize00
static int tolua_LuaExtern_Layout_getBackGroundImageTextureSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Layout* self = (const Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackGroundImageTextureSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getBackGroundImageTextureSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackGroundImageTextureSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClippingEnabled of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setClippingEnabled00
static int tolua_LuaExtern_Layout_setClippingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  bool able = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClippingEnabled'", NULL);
#endif
  {
   self->setClippingEnabled(able);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClippingEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isClippingEnabled of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_isClippingEnabled00
static int tolua_LuaExtern_Layout_isClippingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isClippingEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isClippingEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isClippingEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_getContentSize00
static int tolua_LuaExtern_Layout_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Layout* self = (const Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_getDescription00
static int tolua_LuaExtern_Layout_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Layout* self = (const Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLayoutType of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setLayoutType00
static int tolua_LuaExtern_Layout_setLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  LayoutType type = ((LayoutType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLayoutType'", NULL);
#endif
  {
   self->setLayoutType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutType of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_getLayoutType00
static int tolua_LuaExtern_Layout_getLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Layout* self = (const Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutType'", NULL);
#endif
  {
   LayoutType tolua_ret = (LayoutType)  self->getLayoutType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: doLayout of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_doLayout00
static int tolua_LuaExtern_Layout_doLayout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'doLayout'", NULL);
#endif
  {
   self->doLayout();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'doLayout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundImageScale9Enable of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setBackGroundImageScale9Enable00
static int tolua_LuaExtern_Layout_setBackGroundImageScale9Enable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  bool is = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundImageScale9Enable'", NULL);
#endif
  {
   self->setBackGroundImageScale9Enable(is);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundImageScale9Enable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClippingEnable of class  Layout */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Layout_setClippingEnable00
static int tolua_LuaExtern_Layout_setClippingEnable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Layout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Layout* self = (Layout*)  tolua_tousertype(tolua_S,1,0);
  bool is = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClippingEnable'", NULL);
#endif
  {
   self->setClippingEnable(is);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClippingEnable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  RectClippingNode */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RectClippingNode_delete00
static int tolua_LuaExtern_RectClippingNode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RectClippingNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RectClippingNode* self = (RectClippingNode*)  tolua_tousertype(tolua_S,1,0);
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

/* method: init of class  RectClippingNode */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RectClippingNode_init00
static int tolua_LuaExtern_RectClippingNode_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RectClippingNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RectClippingNode* self = (RectClippingNode*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  RectClippingNode */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RectClippingNode_create00
static int tolua_LuaExtern_RectClippingNode_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RectClippingNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RectClippingNode* tolua_ret = (RectClippingNode*)  RectClippingNode::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RectClippingNode");
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

/* method: setClippingSize of class  RectClippingNode */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RectClippingNode_setClippingSize00
static int tolua_LuaExtern_RectClippingNode_setClippingSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RectClippingNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RectClippingNode* self = (RectClippingNode*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClippingSize'", NULL);
#endif
  {
   self->setClippingSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClippingSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClippingEnabled of class  RectClippingNode */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RectClippingNode_setClippingEnabled00
static int tolua_LuaExtern_RectClippingNode_setClippingEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RectClippingNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RectClippingNode* self = (RectClippingNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClippingEnabled'", NULL);
#endif
  {
   self->setClippingEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClippingEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: visit of class  RectClippingNode */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RectClippingNode_visit00
static int tolua_LuaExtern_RectClippingNode_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RectClippingNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RectClippingNode* self = (RectClippingNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  RectClippingNode */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RectClippingNode_setEnabled00
static int tolua_LuaExtern_RectClippingNode_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RectClippingNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RectClippingNode* self = (RectClippingNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  RectClippingNode */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RectClippingNode_isEnabled00
static int tolua_LuaExtern_RectClippingNode_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const RectClippingNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const RectClippingNode* self = (const RectClippingNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LayoutParameter_new00
static int tolua_LuaExtern_LayoutParameter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LayoutParameter* tolua_ret = (LayoutParameter*)  Mtolua_new((LayoutParameter)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LayoutParameter");
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

/* method: new_local of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LayoutParameter_new00_local
static int tolua_LuaExtern_LayoutParameter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LayoutParameter* tolua_ret = (LayoutParameter*)  Mtolua_new((LayoutParameter)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LayoutParameter");
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

/* method: delete of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LayoutParameter_delete00
static int tolua_LuaExtern_LayoutParameter_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LayoutParameter* self = (LayoutParameter*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LayoutParameter_create00
static int tolua_LuaExtern_LayoutParameter_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LayoutParameter* tolua_ret = (LayoutParameter*)  LayoutParameter::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LayoutParameter");
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

/* method: setMargin of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LayoutParameter_setMargin00
static int tolua_LuaExtern_LayoutParameter_setMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LayoutParameter",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const UIMargin",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LayoutParameter* self = (LayoutParameter*)  tolua_tousertype(tolua_S,1,0);
  const UIMargin* margin = ((const UIMargin*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMargin'", NULL);
#endif
  {
   self->setMargin(*margin);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMargin of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LayoutParameter_getMargin00
static int tolua_LuaExtern_LayoutParameter_getMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LayoutParameter* self = (const LayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMargin'", NULL);
#endif
  {
   const UIMargin& tolua_ret = (const UIMargin&)  self->getMargin();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const UIMargin");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutType of class  LayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LayoutParameter_getLayoutType00
static int tolua_LuaExtern_LayoutParameter_getLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LayoutParameter* self = (const LayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutType'", NULL);
#endif
  {
   LayoutParameterType tolua_ret = (LayoutParameterType)  self->getLayoutType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LinearLayoutParameter_new00
static int tolua_LuaExtern_LinearLayoutParameter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LinearLayoutParameter* tolua_ret = (LinearLayoutParameter*)  Mtolua_new((LinearLayoutParameter)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"LinearLayoutParameter");
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

/* method: new_local of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LinearLayoutParameter_new00_local
static int tolua_LuaExtern_LinearLayoutParameter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LinearLayoutParameter* tolua_ret = (LinearLayoutParameter*)  Mtolua_new((LinearLayoutParameter)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"LinearLayoutParameter");
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

/* method: delete of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LinearLayoutParameter_delete00
static int tolua_LuaExtern_LinearLayoutParameter_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LinearLayoutParameter* self = (LinearLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LinearLayoutParameter_create00
static int tolua_LuaExtern_LinearLayoutParameter_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   LinearLayoutParameter* tolua_ret = (LinearLayoutParameter*)  LinearLayoutParameter::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"LinearLayoutParameter");
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

/* method: setGravity of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LinearLayoutParameter_setGravity00
static int tolua_LuaExtern_LinearLayoutParameter_setGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LinearLayoutParameter* self = (LinearLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
  UILinearGravity gravity = ((UILinearGravity) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGravity'", NULL);
#endif
  {
   self->setGravity(gravity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGravity of class  LinearLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LinearLayoutParameter_getGravity00
static int tolua_LuaExtern_LinearLayoutParameter_getGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LinearLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LinearLayoutParameter* self = (const LinearLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGravity'", NULL);
#endif
  {
   UILinearGravity tolua_ret = (UILinearGravity)  self->getGravity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  RelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RelativeLayoutParameter_new00
static int tolua_LuaExtern_RelativeLayoutParameter_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RelativeLayoutParameter* tolua_ret = (RelativeLayoutParameter*)  Mtolua_new((RelativeLayoutParameter)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RelativeLayoutParameter");
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

/* method: new_local of class  RelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RelativeLayoutParameter_new00_local
static int tolua_LuaExtern_RelativeLayoutParameter_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RelativeLayoutParameter* tolua_ret = (RelativeLayoutParameter*)  Mtolua_new((RelativeLayoutParameter)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RelativeLayoutParameter");
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

/* method: delete of class  RelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RelativeLayoutParameter_delete00
static int tolua_LuaExtern_RelativeLayoutParameter_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RelativeLayoutParameter* self = (RelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  RelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RelativeLayoutParameter_create00
static int tolua_LuaExtern_RelativeLayoutParameter_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"RelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   RelativeLayoutParameter* tolua_ret = (RelativeLayoutParameter*)  RelativeLayoutParameter::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RelativeLayoutParameter");
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

/* method: setAlign of class  RelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RelativeLayoutParameter_setAlign00
static int tolua_LuaExtern_RelativeLayoutParameter_setAlign00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RelativeLayoutParameter* self = (RelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
  UIRelativeAlign align = ((UIRelativeAlign) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlign'", NULL);
#endif
  {
   self->setAlign(align);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlign'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlign of class  RelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RelativeLayoutParameter_getAlign00
static int tolua_LuaExtern_RelativeLayoutParameter_getAlign00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const RelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const RelativeLayoutParameter* self = (const RelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlign'", NULL);
#endif
  {
   UIRelativeAlign tolua_ret = (UIRelativeAlign)  self->getAlign();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlign'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRelativeToWidgetName of class  RelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RelativeLayoutParameter_setRelativeToWidgetName00
static int tolua_LuaExtern_RelativeLayoutParameter_setRelativeToWidgetName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RelativeLayoutParameter* self = (RelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRelativeToWidgetName'", NULL);
#endif
  {
   self->setRelativeToWidgetName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRelativeToWidgetName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRelativeToWidgetName of class  RelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RelativeLayoutParameter_getRelativeToWidgetName00
static int tolua_LuaExtern_RelativeLayoutParameter_getRelativeToWidgetName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const RelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const RelativeLayoutParameter* self = (const RelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeToWidgetName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getRelativeToWidgetName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeToWidgetName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRelativeName of class  RelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RelativeLayoutParameter_setRelativeName00
static int tolua_LuaExtern_RelativeLayoutParameter_setRelativeName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"RelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  RelativeLayoutParameter* self = (RelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRelativeName'", NULL);
#endif
  {
   self->setRelativeName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRelativeName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRelativeName of class  RelativeLayoutParameter */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_RelativeLayoutParameter_getRelativeName00
static int tolua_LuaExtern_RelativeLayoutParameter_getRelativeName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const RelativeLayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const RelativeLayoutParameter* self = (const RelativeLayoutParameter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getRelativeName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_new00
static int tolua_LuaExtern_UIButton_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIButton* tolua_ret = (UIButton*)  Mtolua_new((UIButton)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIButton");
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

/* method: new_local of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_new00_local
static int tolua_LuaExtern_UIButton_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIButton* tolua_ret = (UIButton*)  Mtolua_new((UIButton)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIButton");
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

/* method: delete of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_delete00
static int tolua_LuaExtern_UIButton_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_create00
static int tolua_LuaExtern_UIButton_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIButton* tolua_ret = (UIButton*)  UIButton::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIButton");
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

/* method: loadTextures of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_loadTextures00
static int tolua_LuaExtern_UIButton_loadTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* selected = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,4,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,5,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextures'", NULL);
#endif
  {
   self->loadTextures(normal,selected,disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureNormal of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_loadTextureNormal00
static int tolua_LuaExtern_UIButton_loadTextureNormal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureNormal'", NULL);
#endif
  {
   self->loadTextureNormal(normal,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureNormal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTexturePressed of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_loadTexturePressed00
static int tolua_LuaExtern_UIButton_loadTexturePressed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* selected = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTexturePressed'", NULL);
#endif
  {
   self->loadTexturePressed(selected,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTexturePressed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureDisabled of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_loadTextureDisabled00
static int tolua_LuaExtern_UIButton_loadTextureDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureDisabled'", NULL);
#endif
  {
   self->loadTextureDisabled(disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureDisabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsets of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setCapInsets00
static int tolua_LuaExtern_UIButton_setCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsets'", NULL);
#endif
  {
   self->setCapInsets(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsetsNormalRenderer of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setCapInsetsNormalRenderer00
static int tolua_LuaExtern_UIButton_setCapInsetsNormalRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsetsNormalRenderer'", NULL);
#endif
  {
   self->setCapInsetsNormalRenderer(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsetsNormalRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsetsPressedRenderer of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setCapInsetsPressedRenderer00
static int tolua_LuaExtern_UIButton_setCapInsetsPressedRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsetsPressedRenderer'", NULL);
#endif
  {
   self->setCapInsetsPressedRenderer(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsetsPressedRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsetsDisabledRenderer of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setCapInsetsDisabledRenderer00
static int tolua_LuaExtern_UIButton_setCapInsetsDisabledRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsetsDisabledRenderer'", NULL);
#endif
  {
   self->setCapInsetsDisabledRenderer(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsetsDisabledRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setAnchorPoint00
static int tolua_LuaExtern_UIButton_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enabled of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setScale9Enabled00
static int tolua_LuaExtern_UIButton_setScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  bool able = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enabled'", NULL);
#endif
  {
   self->setScale9Enabled(able);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipX of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setFlipX00
static int tolua_LuaExtern_UIButton_setFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  bool flipX = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipX'", NULL);
#endif
  {
   self->setFlipX(flipX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipY of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setFlipY00
static int tolua_LuaExtern_UIButton_setFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  bool flipY = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipY'", NULL);
#endif
  {
   self->setFlipY(flipY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipX of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_isFlipX00
static int tolua_LuaExtern_UIButton_isFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipX();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipY of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_isFlipY00
static int tolua_LuaExtern_UIButton_isFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipY();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPressedActionEnabled of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setPressedActionEnabled00
static int tolua_LuaExtern_UIButton_setPressedActionEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPressedActionEnabled'", NULL);
#endif
  {
   self->setPressedActionEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPressedActionEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_ignoreContentAdaptWithSize00
static int tolua_LuaExtern_UIButton_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_getContentSize00
static int tolua_LuaExtern_UIButton_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIButton* self = (const UIButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_getVirtualRenderer00
static int tolua_LuaExtern_UIButton_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setColor00
static int tolua_LuaExtern_UIButton_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_getDescription00
static int tolua_LuaExtern_UIButton_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIButton* self = (const UIButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleText of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setTitleText00
static int tolua_LuaExtern_UIButton_setTitleText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleText'", NULL);
#endif
  {
   self->setTitleText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleText of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_getTitleText00
static int tolua_LuaExtern_UIButton_getTitleText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIButton* self = (const UIButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleText'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTitleText();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleColor of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setTitleColor00
static int tolua_LuaExtern_UIButton_setTitleColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleColor'", NULL);
#endif
  {
   self->setTitleColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleColor of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_getTitleColor00
static int tolua_LuaExtern_UIButton_getTitleColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIButton* self = (const UIButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getTitleColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleFontSize of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setTitleFontSize00
static int tolua_LuaExtern_UIButton_setTitleFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  float size = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleFontSize'", NULL);
#endif
  {
   self->setTitleFontSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleFontSize of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_getTitleFontSize00
static int tolua_LuaExtern_UIButton_getTitleFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIButton* self = (const UIButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleFontSize'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTitleFontSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitleFontName of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setTitleFontName00
static int tolua_LuaExtern_UIButton_setTitleFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitleFontName'", NULL);
#endif
  {
   self->setTitleFontName(fontName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitleFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitleFontName of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_getTitleFontName00
static int tolua_LuaExtern_UIButton_getTitleFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIButton* self = (const UIButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitleFontName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTitleFontName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitleFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setText00
static int tolua_LuaExtern_UIButton_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextColor of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setTextColor00
static int tolua_LuaExtern_UIButton_setTextColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  int g = ((int)  tolua_tonumber(tolua_S,3,0));
  int b = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextColor'", NULL);
#endif
  {
   self->setTextColor(r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontSize of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setFontSize00
static int tolua_LuaExtern_UIButton_setFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  int size = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontSize'", NULL);
#endif
  {
   self->setFontSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontName of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setFontName00
static int tolua_LuaExtern_UIButton_setFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontName'", NULL);
#endif
  {
   self->setFontName(fontName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextures of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setTextures00
static int tolua_LuaExtern_UIButton_setTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* selected = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,4,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,5,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextures'", NULL);
#endif
  {
   self->setTextures(normal,selected,disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalTexture of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setNormalTexture00
static int tolua_LuaExtern_UIButton_setNormalTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalTexture'", NULL);
#endif
  {
   self->setNormalTexture(normal,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPressedTexture of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setPressedTexture00
static int tolua_LuaExtern_UIButton_setPressedTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* selected = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPressedTexture'", NULL);
#endif
  {
   self->setPressedTexture(selected,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPressedTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledTexture of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setDisabledTexture00
static int tolua_LuaExtern_UIButton_setDisabledTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledTexture'", NULL);
#endif
  {
   self->setDisabledTexture(disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enable of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setScale9Enable00
static int tolua_LuaExtern_UIButton_setScale9Enable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  bool able = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enable'", NULL);
#endif
  {
   self->setScale9Enable(able);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Size of class  UIButton */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIButton_setScale9Size00
static int tolua_LuaExtern_UIButton_setScale9Size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIButton* self = (UIButton*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Size'", NULL);
#endif
  {
   self->setScale9Size(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_new00
static int tolua_LuaExtern_UICheckBox_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UICheckBox* tolua_ret = (UICheckBox*)  Mtolua_new((UICheckBox)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UICheckBox");
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

/* method: new_local of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_new00_local
static int tolua_LuaExtern_UICheckBox_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UICheckBox* tolua_ret = (UICheckBox*)  Mtolua_new((UICheckBox)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UICheckBox");
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

/* method: delete of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_delete00
static int tolua_LuaExtern_UICheckBox_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_create00
static int tolua_LuaExtern_UICheckBox_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UICheckBox* tolua_ret = (UICheckBox*)  UICheckBox::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UICheckBox");
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

/* method: loadTextures of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_loadTextures00
static int tolua_LuaExtern_UICheckBox_loadTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGround = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* backGroundSelected = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* cross = ((const char*)  tolua_tostring(tolua_S,4,0));
  const char* backGroundDisabled = ((const char*)  tolua_tostring(tolua_S,5,0));
  const char* frontCrossDisabled = ((const char*)  tolua_tostring(tolua_S,6,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,7,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextures'", NULL);
#endif
  {
   self->loadTextures(backGround,backGroundSelected,cross,backGroundDisabled,frontCrossDisabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureBackGround of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_loadTextureBackGround00
static int tolua_LuaExtern_UICheckBox_loadTextureBackGround00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGround = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType type = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureBackGround'", NULL);
#endif
  {
   self->loadTextureBackGround(backGround,type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureBackGround'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureBackGroundSelected of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_loadTextureBackGroundSelected00
static int tolua_LuaExtern_UICheckBox_loadTextureBackGroundSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGroundSelected = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureBackGroundSelected'", NULL);
#endif
  {
   self->loadTextureBackGroundSelected(backGroundSelected,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureBackGroundSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureFrontCross of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_loadTextureFrontCross00
static int tolua_LuaExtern_UICheckBox_loadTextureFrontCross00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* cross = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureFrontCross'", NULL);
#endif
  {
   self->loadTextureFrontCross(cross,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureFrontCross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureBackGroundDisabled of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_loadTextureBackGroundDisabled00
static int tolua_LuaExtern_UICheckBox_loadTextureBackGroundDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGroundDisabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureBackGroundDisabled'", NULL);
#endif
  {
   self->loadTextureBackGroundDisabled(backGroundDisabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureBackGroundDisabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureFrontCrossDisabled of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_loadTextureFrontCrossDisabled00
static int tolua_LuaExtern_UICheckBox_loadTextureFrontCrossDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* frontCrossDisabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureFrontCrossDisabled'", NULL);
#endif
  {
   self->loadTextureFrontCrossDisabled(frontCrossDisabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureFrontCrossDisabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedState of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_setSelectedState00
static int tolua_LuaExtern_UICheckBox_setSelectedState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  bool selected = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedState'", NULL);
#endif
  {
   self->setSelectedState(selected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSelectedState of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_getSelectedState00
static int tolua_LuaExtern_UICheckBox_getSelectedState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedState'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getSelectedState();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_setAnchorPoint00
static int tolua_LuaExtern_UICheckBox_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEventListener of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_addEventListener00
static int tolua_LuaExtern_UICheckBox_addEventListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_SelectedStateEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_SelectedStateEvent selector = *((SEL_SelectedStateEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEventListener'", NULL);
#endif
  {
   self->addEventListener(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEventListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipX of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_setFlipX00
static int tolua_LuaExtern_UICheckBox_setFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  bool flipX = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipX'", NULL);
#endif
  {
   self->setFlipX(flipX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipY of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_setFlipY00
static int tolua_LuaExtern_UICheckBox_setFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  bool flipY = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipY'", NULL);
#endif
  {
   self->setFlipY(flipY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipX of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_isFlipX00
static int tolua_LuaExtern_UICheckBox_isFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipX();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipY of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_isFlipY00
static int tolua_LuaExtern_UICheckBox_isFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipY();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_onTouchEnded00
static int tolua_LuaExtern_UICheckBox_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_getContentSize00
static int tolua_LuaExtern_UICheckBox_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UICheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UICheckBox* self = (const UICheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_getVirtualRenderer00
static int tolua_LuaExtern_UICheckBox_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_getDescription00
static int tolua_LuaExtern_UICheckBox_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UICheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UICheckBox* self = (const UICheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextures of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_setTextures00
static int tolua_LuaExtern_UICheckBox_setTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGround = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* backGroundSelected = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* cross = ((const char*)  tolua_tostring(tolua_S,4,0));
  const char* backGroundDisabled = ((const char*)  tolua_tostring(tolua_S,5,0));
  const char* frontCrossDisabled = ((const char*)  tolua_tostring(tolua_S,6,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,7,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextures'", NULL);
#endif
  {
   self->setTextures(backGround,backGroundSelected,cross,backGroundDisabled,frontCrossDisabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundTexture of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_setBackGroundTexture00
static int tolua_LuaExtern_UICheckBox_setBackGroundTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGround = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType type = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundTexture'", NULL);
#endif
  {
   self->setBackGroundTexture(backGround,type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundSelectedTexture of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_setBackGroundSelectedTexture00
static int tolua_LuaExtern_UICheckBox_setBackGroundSelectedTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGroundSelected = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundSelectedTexture'", NULL);
#endif
  {
   self->setBackGroundSelectedTexture(backGroundSelected,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundSelectedTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFrontCrossTexture of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_setFrontCrossTexture00
static int tolua_LuaExtern_UICheckBox_setFrontCrossTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* cross = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrontCrossTexture'", NULL);
#endif
  {
   self->setFrontCrossTexture(cross,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrontCrossTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackGroundDisabledTexture of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_setBackGroundDisabledTexture00
static int tolua_LuaExtern_UICheckBox_setBackGroundDisabledTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* backGroundDisabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackGroundDisabledTexture'", NULL);
#endif
  {
   self->setBackGroundDisabledTexture(backGroundDisabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackGroundDisabledTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFrontCrossDisabledTexture of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_setFrontCrossDisabledTexture00
static int tolua_LuaExtern_UICheckBox_setFrontCrossDisabledTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* frontCrossDisabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrontCrossDisabledTexture'", NULL);
#endif
  {
   self->setFrontCrossDisabledTexture(frontCrossDisabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrontCrossDisabledTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSelectEvent of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_addSelectEvent00
static int tolua_LuaExtern_UICheckBox_addSelectEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_SelectEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_SelectEvent selector = *((SEL_SelectEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSelectEvent'", NULL);
#endif
  {
   self->addSelectEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addSelectEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addUnSelectEvent of class  UICheckBox */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICheckBox_addUnSelectEvent00
static int tolua_LuaExtern_UICheckBox_addUnSelectEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_UnSelectEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICheckBox* self = (UICheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_UnSelectEvent selector = *((SEL_UnSelectEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addUnSelectEvent'", NULL);
#endif
  {
   self->addUnSelectEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addUnSelectEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_new00
static int tolua_LuaExtern_UIDragPanel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIDragPanel* tolua_ret = (UIDragPanel*)  Mtolua_new((UIDragPanel)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIDragPanel");
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

/* method: new_local of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_new00_local
static int tolua_LuaExtern_UIDragPanel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIDragPanel* tolua_ret = (UIDragPanel*)  Mtolua_new((UIDragPanel)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIDragPanel");
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

/* method: delete of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_delete00
static int tolua_LuaExtern_UIDragPanel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_create00
static int tolua_LuaExtern_UIDragPanel_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIDragPanel* tolua_ret = (UIDragPanel*)  UIDragPanel::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIDragPanel");
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

/* method: onTouchBegan of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_onTouchBegan00
static int tolua_LuaExtern_UIDragPanel_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(*touchPoint);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_onTouchMoved00
static int tolua_LuaExtern_UIDragPanel_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_onTouchEnded00
static int tolua_LuaExtern_UIDragPanel_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_onTouchCancelled00
static int tolua_LuaExtern_UIDragPanel_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchLongClicked of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_onTouchLongClicked00
static int tolua_LuaExtern_UIDragPanel_onTouchLongClicked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchLongClicked'", NULL);
#endif
  {
   self->onTouchLongClicked(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchLongClicked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_update00
static int tolua_LuaExtern_UIDragPanel_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
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

/* method: addChild of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addChild00
static int tolua_LuaExtern_UIDragPanel_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->addChild(widget);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_removeChild00
static int tolua_LuaExtern_UIDragPanel_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* child = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->removeChild(child);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_removeAllChildren00
static int tolua_LuaExtern_UIDragPanel_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildren of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_getChildren00
static int tolua_LuaExtern_UIDragPanel_getChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildren'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getChildren();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInnerContainerSize of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_getInnerContainerSize00
static int tolua_LuaExtern_UIDragPanel_getInnerContainerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIDragPanel* self = (const UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInnerContainerSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getInnerContainerSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInnerContainerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInnerContainerSize of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_setInnerContainerSize00
static int tolua_LuaExtern_UIDragPanel_setInnerContainerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInnerContainerSize'", NULL);
#endif
  {
   self->setInnerContainerSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInnerContainerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInnerContainerPosition of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_getInnerContainerPosition00
static int tolua_LuaExtern_UIDragPanel_getInnerContainerPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIDragPanel* self = (const UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInnerContainerPosition'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getInnerContainerPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInnerContainerPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInnerContainerPosition of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_setInnerContainerPosition00
static int tolua_LuaExtern_UIDragPanel_setInnerContainerPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* point = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  bool animated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInnerContainerPosition'", NULL);
#endif
  {
   self->setInnerContainerPosition(*point,animated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInnerContainerPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInnerContainerOffset of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_setInnerContainerOffset00
static int tolua_LuaExtern_UIDragPanel_setInnerContainerOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* offset = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  bool animated = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInnerContainerOffset'", NULL);
#endif
  {
   self->setInnerContainerOffset(*offset,animated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInnerContainerOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoMoveDuration of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_setAutoMoveDuration00
static int tolua_LuaExtern_UIDragPanel_setAutoMoveDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  float duration = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoMoveDuration'", NULL);
#endif
  {
   self->setAutoMoveDuration(duration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoMoveDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoMoveEaseRate of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_setAutoMoveEaseRate00
static int tolua_LuaExtern_UIDragPanel_setAutoMoveEaseRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  float rate = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoMoveEaseRate'", NULL);
#endif
  {
   self->setAutoMoveEaseRate(rate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoMoveEaseRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBerth of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_isBerth00
static int tolua_LuaExtern_UIDragPanel_isBerth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBerth'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBerth();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBerth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEventListener of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addEventListener00
static int tolua_LuaExtern_UIDragPanel_addEventListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelEvent selector = *((SEL_DragPanelEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEventListener'", NULL);
#endif
  {
   self->addEventListener(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEventListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBerthToLeftBottomEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBerthToLeftBottomEvent00
static int tolua_LuaExtern_UIDragPanel_addBerthToLeftBottomEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBerthToLeftBottomEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBerthToLeftBottomEvent selector = *((SEL_DragPanelBerthToLeftBottomEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBerthToLeftBottomEvent'", NULL);
#endif
  {
   self->addBerthToLeftBottomEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBerthToLeftBottomEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBerthToLeftTopEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBerthToLeftTopEvent00
static int tolua_LuaExtern_UIDragPanel_addBerthToLeftTopEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBerthToLeftTopEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBerthToLeftTopEvent selector = *((SEL_DragPanelBerthToLeftTopEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBerthToLeftTopEvent'", NULL);
#endif
  {
   self->addBerthToLeftTopEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBerthToLeftTopEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBerthToRightBottomEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBerthToRightBottomEvent00
static int tolua_LuaExtern_UIDragPanel_addBerthToRightBottomEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBerthToRightBottomEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBerthToRightBottomEvent selector = *((SEL_DragPanelBerthToRightBottomEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBerthToRightBottomEvent'", NULL);
#endif
  {
   self->addBerthToRightBottomEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBerthToRightBottomEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBerthToRightTopEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBerthToRightTopEvent00
static int tolua_LuaExtern_UIDragPanel_addBerthToRightTopEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBerthToRightTopEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBerthToRightTopEvent selector = *((SEL_DragPanelBerthToRightTopEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBerthToRightTopEvent'", NULL);
#endif
  {
   self->addBerthToRightTopEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBerthToRightTopEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBerthToLeftEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBerthToLeftEvent00
static int tolua_LuaExtern_UIDragPanel_addBerthToLeftEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBerthToLeftEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBerthToLeftEvent selector = *((SEL_DragPanelBerthToLeftEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBerthToLeftEvent'", NULL);
#endif
  {
   self->addBerthToLeftEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBerthToLeftEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBerthToTopEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBerthToTopEvent00
static int tolua_LuaExtern_UIDragPanel_addBerthToTopEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBerthToTopEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBerthToTopEvent selector = *((SEL_DragPanelBerthToTopEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBerthToTopEvent'", NULL);
#endif
  {
   self->addBerthToTopEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBerthToTopEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBerthToRightEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBerthToRightEvent00
static int tolua_LuaExtern_UIDragPanel_addBerthToRightEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBerthToRightEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBerthToRightEvent selector = *((SEL_DragPanelBerthToRightEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBerthToRightEvent'", NULL);
#endif
  {
   self->addBerthToRightEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBerthToRightEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBerthToBottomEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBerthToBottomEvent00
static int tolua_LuaExtern_UIDragPanel_addBerthToBottomEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBerthToBottomEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBerthToBottomEvent selector = *((SEL_DragPanelBerthToBottomEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBerthToBottomEvent'", NULL);
#endif
  {
   self->addBerthToBottomEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBerthToBottomEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBounceEnabled of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_isBounceEnabled00
static int tolua_LuaExtern_UIDragPanel_isBounceEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBounceEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBounceEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBounceEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBounceEnabled of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_setBounceEnabled00
static int tolua_LuaExtern_UIDragPanel_setBounceEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  bool bounce = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBounceEnabled'", NULL);
#endif
  {
   self->setBounceEnabled(bounce);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBounceEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBounceToLeftBottomEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBounceToLeftBottomEvent00
static int tolua_LuaExtern_UIDragPanel_addBounceToLeftBottomEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBounceToLeftBottomEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBounceToLeftBottomEvent selector = *((SEL_DragPanelBounceToLeftBottomEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBounceToLeftBottomEvent'", NULL);
#endif
  {
   self->addBounceToLeftBottomEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBounceToLeftBottomEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBounceToLeftTopEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBounceToLeftTopEvent00
static int tolua_LuaExtern_UIDragPanel_addBounceToLeftTopEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBounceToLeftTopEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBounceToLeftTopEvent selector = *((SEL_DragPanelBounceToLeftTopEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBounceToLeftTopEvent'", NULL);
#endif
  {
   self->addBounceToLeftTopEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBounceToLeftTopEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBounceToRightBottomEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBounceToRightBottomEvent00
static int tolua_LuaExtern_UIDragPanel_addBounceToRightBottomEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBounceToRightBottomEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBounceToRightBottomEvent selector = *((SEL_DragPanelBounceToRightBottomEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBounceToRightBottomEvent'", NULL);
#endif
  {
   self->addBounceToRightBottomEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBounceToRightBottomEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBounceToRightTopEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBounceToRightTopEvent00
static int tolua_LuaExtern_UIDragPanel_addBounceToRightTopEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBounceToRightTopEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBounceToRightTopEvent selector = *((SEL_DragPanelBounceToRightTopEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBounceToRightTopEvent'", NULL);
#endif
  {
   self->addBounceToRightTopEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBounceToRightTopEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBounceToLeftEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBounceToLeftEvent00
static int tolua_LuaExtern_UIDragPanel_addBounceToLeftEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBounceToLeftEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBounceToLeftEvent selector = *((SEL_DragPanelBounceToLeftEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBounceToLeftEvent'", NULL);
#endif
  {
   self->addBounceToLeftEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBounceToLeftEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBounceToTopEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBounceToTopEvent00
static int tolua_LuaExtern_UIDragPanel_addBounceToTopEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBounceToTopEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBounceToTopEvent selector = *((SEL_DragPanelBounceToTopEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBounceToTopEvent'", NULL);
#endif
  {
   self->addBounceToTopEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBounceToTopEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBounceToRightEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBounceToRightEvent00
static int tolua_LuaExtern_UIDragPanel_addBounceToRightEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBounceToRightEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBounceToRightEvent selector = *((SEL_DragPanelBounceToRightEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBounceToRightEvent'", NULL);
#endif
  {
   self->addBounceToRightEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBounceToRightEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBounceToBottomEvent of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_addBounceToBottomEvent00
static int tolua_LuaExtern_UIDragPanel_addBounceToBottomEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_DragPanelBounceToBottomEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_DragPanelBounceToBottomEvent selector = *((SEL_DragPanelBounceToBottomEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBounceToBottomEvent'", NULL);
#endif
  {
   self->addBounceToBottomEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBounceToBottomEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInnerContainer of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_getInnerContainer00
static int tolua_LuaExtern_UIDragPanel_getInnerContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInnerContainer'", NULL);
#endif
  {
   Layout* tolua_ret = (Layout*)  self->getInnerContainer();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Layout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInnerContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLayoutType of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_setLayoutType00
static int tolua_LuaExtern_UIDragPanel_setLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
  LayoutType type = ((LayoutType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLayoutType'", NULL);
#endif
  {
   self->setLayoutType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutType of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_getLayoutType00
static int tolua_LuaExtern_UIDragPanel_getLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIDragPanel* self = (const UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutType'", NULL);
#endif
  {
   LayoutType tolua_ret = (LayoutType)  self->getLayoutType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: doLayout of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_doLayout00
static int tolua_LuaExtern_UIDragPanel_doLayout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'doLayout'", NULL);
#endif
  {
   self->doLayout();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'doLayout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIDragPanel_getDescription00
static int tolua_LuaExtern_UIDragPanel_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIDragPanel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIDragPanel* self = (const UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __UIScrollInterface__ of class  UIDragPanel */
#ifndef TOLUA_DISABLE_tolua_get_UIDragPanel___UIScrollInterface__
static int tolua_get_UIDragPanel___UIScrollInterface__(lua_State* tolua_S)
{
  UIDragPanel* self = (UIDragPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__UIScrollInterface__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<UIScrollInterface*>(self), "UIScrollInterface");
#else
   tolua_pushusertype(tolua_S,(void*)((UIScrollInterface*)self), "UIScrollInterface");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_new00
static int tolua_LuaExtern_UIHelper_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIHelper* tolua_ret = (UIHelper*)  Mtolua_new((UIHelper)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIHelper");
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

/* method: new_local of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_new00_local
static int tolua_LuaExtern_UIHelper_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIHelper* tolua_ret = (UIHelper*)  Mtolua_new((UIHelper)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIHelper");
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

/* method: delete of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_delete00
static int tolua_LuaExtern_UIHelper_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
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

/* method: init of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_init00
static int tolua_LuaExtern_UIHelper_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   self->init();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWidgetFromJsonFile of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_createWidgetFromJsonFile00
static int tolua_LuaExtern_UIHelper_createWidgetFromJsonFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createWidgetFromJsonFile'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->createWidgetFromJsonFile(fileName);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWidgetFromJsonFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: instance of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_instance00
static int tolua_LuaExtern_UIHelper_instance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIHelper* tolua_ret = (UIHelper*)  UIHelper::instance();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIHelper");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'instance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: purgeUIHelper of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_purgeUIHelper00
static int tolua_LuaExtern_UIHelper_purgeUIHelper00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIHelper::purgeUIHelper();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'purgeUIHelper'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSpriteFrame of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_addSpriteFrame00
static int tolua_LuaExtern_UIHelper_addSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSpriteFrame'", NULL);
#endif
  {
   self->addSpriteFrame(fileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeSpriteFrame of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_removeSpriteFrame00
static int tolua_LuaExtern_UIHelper_removeSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeSpriteFrame'", NULL);
#endif
  {
   self->removeSpriteFrame(fileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllSpriteFrame of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_removeAllSpriteFrame00
static int tolua_LuaExtern_UIHelper_removeAllSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllSpriteFrame'", NULL);
#endif
  {
   self->removeAllSpriteFrame();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seekWidgetByTag of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_seekWidgetByTag00
static int tolua_LuaExtern_UIHelper_seekWidgetByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* root = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  int tag = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seekWidgetByTag'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->seekWidgetByTag(root,tag);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seekWidgetByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seekWidgetByName of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_seekWidgetByName00
static int tolua_LuaExtern_UIHelper_seekWidgetByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* root = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  const char* name = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seekWidgetByName'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->seekWidgetByName(root,name);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seekWidgetByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seekWidgetByRelativeName of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_seekWidgetByRelativeName00
static int tolua_LuaExtern_UIHelper_seekWidgetByRelativeName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* root = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  const char* name = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seekWidgetByRelativeName'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->seekWidgetByRelativeName(root,name);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seekWidgetByRelativeName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFileDesignWidth of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_setFileDesignWidth00
static int tolua_LuaExtern_UIHelper_setFileDesignWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
  float width = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFileDesignWidth'", NULL);
#endif
  {
   self->setFileDesignWidth(width);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFileDesignWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFileDesignWidth of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_getFileDesignWidth00
static int tolua_LuaExtern_UIHelper_getFileDesignWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFileDesignWidth'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getFileDesignWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFileDesignWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFileDesignHeight of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_setFileDesignHeight00
static int tolua_LuaExtern_UIHelper_setFileDesignHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
  float height = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFileDesignHeight'", NULL);
#endif
  {
   self->setFileDesignHeight(height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFileDesignHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFileDesignHeight of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_getFileDesignHeight00
static int tolua_LuaExtern_UIHelper_getFileDesignHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFileDesignHeight'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getFileDesignHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFileDesignHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seekActionWidgetByActionTag of class  UIHelper */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIHelper_seekActionWidgetByActionTag00
static int tolua_LuaExtern_UIHelper_seekActionWidgetByActionTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIHelper",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIHelper* self = (UIHelper*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* root = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  int tag = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seekActionWidgetByActionTag'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->seekActionWidgetByActionTag(root,tag);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seekActionWidgetByActionTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_new00
static int tolua_LuaExtern_UIImageView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIImageView* tolua_ret = (UIImageView*)  Mtolua_new((UIImageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIImageView");
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

/* method: new_local of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_new00_local
static int tolua_LuaExtern_UIImageView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIImageView* tolua_ret = (UIImageView*)  Mtolua_new((UIImageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIImageView");
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

/* method: delete of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_delete00
static int tolua_LuaExtern_UIImageView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_create00
static int tolua_LuaExtern_UIImageView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIImageView* tolua_ret = (UIImageView*)  UIImageView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIImageView");
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

/* method: loadTexture of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_loadTexture00
static int tolua_LuaExtern_UIImageView_loadTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTexture'", NULL);
#endif
  {
   self->loadTexture(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureRect of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_setTextureRect00
static int tolua_LuaExtern_UIImageView_setTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureRect'", NULL);
#endif
  {
   self->setTextureRect(*rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enabled of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_setScale9Enabled00
static int tolua_LuaExtern_UIImageView_setScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  bool able = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enabled'", NULL);
#endif
  {
   self->setScale9Enabled(able);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsets of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_setCapInsets00
static int tolua_LuaExtern_UIImageView_setCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsets'", NULL);
#endif
  {
   self->setCapInsets(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipX of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_setFlipX00
static int tolua_LuaExtern_UIImageView_setFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  bool flipX = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipX'", NULL);
#endif
  {
   self->setFlipX(flipX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipY of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_setFlipY00
static int tolua_LuaExtern_UIImageView_setFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  bool flipY = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipY'", NULL);
#endif
  {
   self->setFlipY(flipY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipX of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_isFlipX00
static int tolua_LuaExtern_UIImageView_isFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipX();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipY of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_isFlipY00
static int tolua_LuaExtern_UIImageView_isFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipY();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_setAnchorPoint00
static int tolua_LuaExtern_UIImageView_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_onTouchBegan00
static int tolua_LuaExtern_UIImageView_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(*touchPoint);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_onTouchEnded00
static int tolua_LuaExtern_UIImageView_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_ignoreContentAdaptWithSize00
static int tolua_LuaExtern_UIImageView_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_getDescription00
static int tolua_LuaExtern_UIImageView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIImageView* self = (const UIImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDoubleClickEnabled of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_setDoubleClickEnabled00
static int tolua_LuaExtern_UIImageView_setDoubleClickEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  bool able = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDoubleClickEnabled'", NULL);
#endif
  {
   self->setDoubleClickEnabled(able);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDoubleClickEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: doubleClickEvent of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_doubleClickEvent00
static int tolua_LuaExtern_UIImageView_doubleClickEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'doubleClickEvent'", NULL);
#endif
  {
   self->doubleClickEvent();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'doubleClickEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: checkDoubleClick of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_checkDoubleClick00
static int tolua_LuaExtern_UIImageView_checkDoubleClick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  float dt = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'checkDoubleClick'", NULL);
#endif
  {
   self->checkDoubleClick(dt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'checkDoubleClick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_setTexture00
static int tolua_LuaExtern_UIImageView_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Size of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_setScale9Size00
static int tolua_LuaExtern_UIImageView_setScale9Size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Size'", NULL);
#endif
  {
   self->setScale9Size(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enable of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_setScale9Enable00
static int tolua_LuaExtern_UIImageView_setScale9Enable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
  bool is = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enable'", NULL);
#endif
  {
   self->setScale9Enable(is);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_getContentSize00
static int tolua_LuaExtern_UIImageView_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIImageView* self = (const UIImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  UIImageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIImageView_getVirtualRenderer00
static int tolua_LuaExtern_UIImageView_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIImageView* self = (UIImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_new00
static int tolua_LuaExtern_UIInputManager_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIInputManager* tolua_ret = (UIInputManager*)  Mtolua_new((UIInputManager)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIInputManager");
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

/* method: new_local of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_new00_local
static int tolua_LuaExtern_UIInputManager_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIInputManager* tolua_ret = (UIInputManager*)  Mtolua_new((UIInputManager)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIInputManager");
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

/* method: delete of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_delete00
static int tolua_LuaExtern_UIInputManager_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
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

/* method: registWidget of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_registWidget00
static int tolua_LuaExtern_UIInputManager_registWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registWidget'", NULL);
#endif
  {
   self->registWidget(widget);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: uiSceneHasChanged of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_uiSceneHasChanged00
static int tolua_LuaExtern_UIInputManager_uiSceneHasChanged00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'uiSceneHasChanged'", NULL);
#endif
  {
   self->uiSceneHasChanged();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'uiSceneHasChanged'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeManageredWidget of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_removeManageredWidget00
static int tolua_LuaExtern_UIInputManager_removeManageredWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeManageredWidget'", NULL);
#endif
  {
   self->removeManageredWidget(widget);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeManageredWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: checkEventWidget of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_checkEventWidget00
static int tolua_LuaExtern_UIInputManager_checkEventWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'checkEventWidget'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->checkEventWidget(*touchPoint);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'checkEventWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_update00
static int tolua_LuaExtern_UIInputManager_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onTouchBegan of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_onTouchBegan00
static int tolua_LuaExtern_UIInputManager_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(touch);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_onTouchMoved00
static int tolua_LuaExtern_UIInputManager_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(touch);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnd of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_onTouchEnd00
static int tolua_LuaExtern_UIInputManager_onTouchEnd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnd'", NULL);
#endif
  {
   self->onTouchEnd(touch);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_onTouchCancelled00
static int tolua_LuaExtern_UIInputManager_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(touch);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRootWidget of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_setRootWidget00
static int tolua_LuaExtern_UIInputManager_setRootWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* root = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRootWidget'", NULL);
#endif
  {
   self->setRootWidget(root);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRootWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRootWidget of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_getRootWidget00
static int tolua_LuaExtern_UIInputManager_getRootWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRootWidget'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->getRootWidget();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRootWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addCheckedDoubleClickWidget of class  UIInputManager */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIInputManager_addCheckedDoubleClickWidget00
static int tolua_LuaExtern_UIInputManager_addCheckedDoubleClickWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIInputManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIInputManager* self = (UIInputManager*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addCheckedDoubleClickWidget'", NULL);
#endif
  {
   self->addCheckedDoubleClickWidget(widget);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addCheckedDoubleClickWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_new00
static int tolua_LuaExtern_UILabel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILabel* tolua_ret = (UILabel*)  Mtolua_new((UILabel)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabel");
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

/* method: new_local of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_new00_local
static int tolua_LuaExtern_UILabel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILabel* tolua_ret = (UILabel*)  Mtolua_new((UILabel)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabel");
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

/* method: delete of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_delete00
static int tolua_LuaExtern_UILabel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_create00
static int tolua_LuaExtern_UILabel_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILabel* tolua_ret = (UILabel*)  UILabel::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabel");
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

/* method: setText of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setText00
static int tolua_LuaExtern_UILabel_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringValue of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_getStringValue00
static int tolua_LuaExtern_UILabel_getStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringValue'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getStringValue();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringLength of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_getStringLength00
static int tolua_LuaExtern_UILabel_getStringLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getStringLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontSize of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setFontSize00
static int tolua_LuaExtern_UILabel_setFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  int size = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontSize'", NULL);
#endif
  {
   self->setFontSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontName of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setFontName00
static int tolua_LuaExtern_UILabel_setFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontName'", NULL);
#endif
  {
   self->setFontName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchScaleChangeEnabled of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setTouchScaleChangeEnabled00
static int tolua_LuaExtern_UILabel_setTouchScaleChangeEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchScaleChangeEnabled'", NULL);
#endif
  {
   self->setTouchScaleChangeEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchScaleChangeEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchScaleChangeEnabled of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_isTouchScaleChangeEnabled00
static int tolua_LuaExtern_UILabel_isTouchScaleChangeEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchScaleChangeEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchScaleChangeEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchScaleChangeEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipX of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setFlipX00
static int tolua_LuaExtern_UILabel_setFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  bool flipX = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipX'", NULL);
#endif
  {
   self->setFlipX(flipX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipY of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setFlipY00
static int tolua_LuaExtern_UILabel_setFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  bool flipY = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipY'", NULL);
#endif
  {
   self->setFlipY(flipY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipX of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_isFlipX00
static int tolua_LuaExtern_UILabel_isFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipX();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipY of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_isFlipY00
static int tolua_LuaExtern_UILabel_isFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipY();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setAnchorPoint00
static int tolua_LuaExtern_UILabel_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_getContentSize00
static int tolua_LuaExtern_UILabel_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UILabel* self = (const UILabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_getVirtualRenderer00
static int tolua_LuaExtern_UILabel_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_getDescription00
static int tolua_LuaExtern_UILabel_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UILabel* self = (const UILabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextAreaSize of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setTextAreaSize00
static int tolua_LuaExtern_UILabel_setTextAreaSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextAreaSize'", NULL);
#endif
  {
   self->setTextAreaSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextAreaSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextHorizontalAlignment of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setTextHorizontalAlignment00
static int tolua_LuaExtern_UILabel_setTextHorizontalAlignment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  CCTextAlignment alignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextHorizontalAlignment'", NULL);
#endif
  {
   self->setTextHorizontalAlignment(alignment);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextHorizontalAlignment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextVerticalAlignment of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setTextVerticalAlignment00
static int tolua_LuaExtern_UILabel_setTextVerticalAlignment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCVerticalTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  CCVerticalTextAlignment alignment = *((CCVerticalTextAlignment*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextVerticalAlignment'", NULL);
#endif
  {
   self->setTextVerticalAlignment(alignment);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextVerticalAlignment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchScaleChangeAble of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_setTouchScaleChangeAble00
static int tolua_LuaExtern_UILabel_setTouchScaleChangeAble00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
  bool able = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchScaleChangeAble'", NULL);
#endif
  {
   self->setTouchScaleChangeAble(able);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchScaleChangeAble'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchScaleChangeAble of class  UILabel */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabel_getTouchScaleChangeAble00
static int tolua_LuaExtern_UILabel_getTouchScaleChangeAble00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabel* self = (UILabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchScaleChangeAble'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getTouchScaleChangeAble();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchScaleChangeAble'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UICCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCLabelAtlas_new00
static int tolua_LuaExtern_UICCLabelAtlas_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UICCLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UICCLabelAtlas* tolua_ret = (UICCLabelAtlas*)  Mtolua_new((UICCLabelAtlas)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UICCLabelAtlas");
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

/* method: new_local of class  UICCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCLabelAtlas_new00_local
static int tolua_LuaExtern_UICCLabelAtlas_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UICCLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UICCLabelAtlas* tolua_ret = (UICCLabelAtlas*)  Mtolua_new((UICCLabelAtlas)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UICCLabelAtlas");
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

/* method: delete of class  UICCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCLabelAtlas_delete00
static int tolua_LuaExtern_UICCLabelAtlas_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCLabelAtlas* self = (UICCLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UICCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCLabelAtlas_create00
static int tolua_LuaExtern_UICCLabelAtlas_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UICCLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UICCLabelAtlas* tolua_ret = (UICCLabelAtlas*)  UICCLabelAtlas::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UICCLabelAtlas");
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

/* method: setProperty of class  UICCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCLabelAtlas_setProperty00
static int tolua_LuaExtern_UICCLabelAtlas_setProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCLabelAtlas* self = (UICCLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* charMapFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  unsigned int itemWidth = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  unsigned int itemHeight = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
  unsigned int startCharMap = ((unsigned int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProperty'", NULL);
#endif
  {
   self->setProperty(pString,charMapFile,itemWidth,itemHeight,startCharMap);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProperty of class  UICCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCLabelAtlas_setProperty01
static int tolua_LuaExtern_UICCLabelAtlas_setProperty01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  UICCLabelAtlas* self = (UICCLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,3,0));
  unsigned int itemWidth = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  unsigned int itemHeight = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
  unsigned int startCharMap = ((unsigned int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProperty'", NULL);
#endif
  {
   self->setProperty(pString,texture,itemWidth,itemHeight,startCharMap);
  }
 }
 return 0;
tolua_lerror:
 return tolua_LuaExtern_UICCLabelAtlas_setProperty00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateDisplayedOpacity of class  UICCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCLabelAtlas_updateDisplayedOpacity00
static int tolua_LuaExtern_UICCLabelAtlas_updateDisplayedOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCLabelAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCLabelAtlas* self = (UICCLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateDisplayedOpacity'", NULL);
#endif
  {
   self->updateDisplayedOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateDisplayedOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: draw of class  UICCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCLabelAtlas_draw00
static int tolua_LuaExtern_UICCLabelAtlas_draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCLabelAtlas* self = (UICCLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'draw'", NULL);
#endif
  {
   self->draw();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_new00
static int tolua_LuaExtern_UILabelAtlas_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILabelAtlas* tolua_ret = (UILabelAtlas*)  Mtolua_new((UILabelAtlas)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabelAtlas");
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

/* method: new_local of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_new00_local
static int tolua_LuaExtern_UILabelAtlas_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILabelAtlas* tolua_ret = (UILabelAtlas*)  Mtolua_new((UILabelAtlas)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabelAtlas");
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

/* method: delete of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_delete00
static int tolua_LuaExtern_UILabelAtlas_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelAtlas* self = (UILabelAtlas*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_create00
static int tolua_LuaExtern_UILabelAtlas_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILabelAtlas* tolua_ret = (UILabelAtlas*)  UILabelAtlas::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabelAtlas");
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

/* method: setProperty of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_setProperty00
static int tolua_LuaExtern_UILabelAtlas_setProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelAtlas* self = (UILabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const char* stringValue = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* charMapFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  int itemWidth = ((int)  tolua_tonumber(tolua_S,4,0));
  int itemHeight = ((int)  tolua_tonumber(tolua_S,5,0));
  const char* startCharMap = ((const char*)  tolua_tostring(tolua_S,6,0));
  bool useSpriteFrame = ((bool)  tolua_toboolean(tolua_S,7,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProperty'", NULL);
#endif
  {
   self->setProperty(stringValue,charMapFile,itemWidth,itemHeight,startCharMap,useSpriteFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStringValue of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_setStringValue00
static int tolua_LuaExtern_UILabelAtlas_setStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelAtlas* self = (UILabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const char* value = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStringValue'", NULL);
#endif
  {
   self->setStringValue(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringValue of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_getStringValue00
static int tolua_LuaExtern_UILabelAtlas_getStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelAtlas* self = (UILabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringValue'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getStringValue();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_setAnchorPoint00
static int tolua_LuaExtern_UILabelAtlas_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelAtlas* self = (UILabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_getContentSize00
static int tolua_LuaExtern_UILabelAtlas_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UILabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UILabelAtlas* self = (const UILabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_getVirtualRenderer00
static int tolua_LuaExtern_UILabelAtlas_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelAtlas* self = (UILabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UILabelAtlas */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelAtlas_getDescription00
static int tolua_LuaExtern_UILabelAtlas_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UILabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UILabelAtlas* self = (const UILabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_new00
static int tolua_LuaExtern_UILabelBMFont_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILabelBMFont* tolua_ret = (UILabelBMFont*)  Mtolua_new((UILabelBMFont)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabelBMFont");
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

/* method: new_local of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_new00_local
static int tolua_LuaExtern_UILabelBMFont_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILabelBMFont* tolua_ret = (UILabelBMFont*)  Mtolua_new((UILabelBMFont)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabelBMFont");
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

/* method: delete of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_delete00
static int tolua_LuaExtern_UILabelBMFont_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelBMFont* self = (UILabelBMFont*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_create00
static int tolua_LuaExtern_UILabelBMFont_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILabelBMFont* tolua_ret = (UILabelBMFont*)  UILabelBMFont::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabelBMFont");
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

/* method: setFntFile of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_setFntFile00
static int tolua_LuaExtern_UILabelBMFont_setFntFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelBMFont* self = (UILabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFntFile'", NULL);
#endif
  {
   self->setFntFile(fileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFntFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_setText00
static int tolua_LuaExtern_UILabelBMFont_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelBMFont* self = (UILabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  const char* value = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringValue of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_getStringValue00
static int tolua_LuaExtern_UILabelBMFont_getStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelBMFont* self = (UILabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringValue'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getStringValue();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_setAnchorPoint00
static int tolua_LuaExtern_UILabelBMFont_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelBMFont",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelBMFont* self = (UILabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_getContentSize00
static int tolua_LuaExtern_UILabelBMFont_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UILabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UILabelBMFont* self = (const UILabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_getVirtualRenderer00
static int tolua_LuaExtern_UILabelBMFont_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILabelBMFont* self = (UILabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UILabelBMFont */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILabelBMFont_getDescription00
static int tolua_LuaExtern_UILabelBMFont_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UILabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UILabelBMFont* self = (const UILabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_new00
static int tolua_LuaExtern_UILayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILayer* tolua_ret = (UILayer*)  Mtolua_new((UILayer)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILayer");
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

/* method: new_local of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_new00_local
static int tolua_LuaExtern_UILayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILayer* tolua_ret = (UILayer*)  Mtolua_new((UILayer)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILayer");
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

/* method: delete of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_delete00
static int tolua_LuaExtern_UILayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_create00
static int tolua_LuaExtern_UILayer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILayer* tolua_ret = (UILayer*)  UILayer::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILayer");
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

/* method: init of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_init00
static int tolua_LuaExtern_UILayer_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onEnter of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_onEnter00
static int tolua_LuaExtern_UILayer_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_onExit00
static int tolua_LuaExtern_UILayer_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnterTransitionDidFinish of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_onEnterTransitionDidFinish00
static int tolua_LuaExtern_UILayer_onEnterTransitionDidFinish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnterTransitionDidFinish'", NULL);
#endif
  {
   self->onEnterTransitionDidFinish();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnterTransitionDidFinish'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_ccTouchBegan00
static int tolua_LuaExtern_UILayer_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_ccTouchMoved00
static int tolua_LuaExtern_UILayer_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_ccTouchEnded00
static int tolua_LuaExtern_UILayer_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchCancelled of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_ccTouchCancelled00
static int tolua_LuaExtern_UILayer_ccTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* pEvent = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchCancelled'", NULL);
#endif
  {
   self->ccTouchCancelled(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addWidget of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_addWidget00
static int tolua_LuaExtern_UILayer_addWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addWidget'", NULL);
#endif
  {
   self->addWidget(widget);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeWidget of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_removeWidget00
static int tolua_LuaExtern_UILayer_removeWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeWidget'", NULL);
#endif
  {
   self->removeWidget(widget);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_setVisible00
static int tolua_LuaExtern_UILayer_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidgetByTag of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_getWidgetByTag00
static int tolua_LuaExtern_UILayer_getWidgetByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidgetByTag'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->getWidgetByTag(tag);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidgetByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidgetByName of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_getWidgetByName00
static int tolua_LuaExtern_UILayer_getWidgetByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidgetByName'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->getWidgetByName(name);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidgetByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInputManager of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_getInputManager00
static int tolua_LuaExtern_UILayer_getInputManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInputManager'", NULL);
#endif
  {
   UIInputManager* tolua_ret = (UIInputManager*)  self->getInputManager();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIInputManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInputManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_clear00
static int tolua_LuaExtern_UILayer_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRootWidget of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_getRootWidget00
static int tolua_LuaExtern_UILayer_getRootWidget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRootWidget'", NULL);
#endif
  {
   UIRootWidget* tolua_ret = (UIRootWidget*)  self->getRootWidget();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIRootWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRootWidget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dispose of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_dispose00
static int tolua_LuaExtern_UILayer_dispose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dispose'", NULL);
#endif
  {
   self->dispose();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dispose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeWidgetAndCleanUp of class  UILayer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILayer_removeWidgetAndCleanUp00
static int tolua_LuaExtern_UILayer_removeWidgetAndCleanUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILayer* self = (UILayer*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeWidgetAndCleanUp'", NULL);
#endif
  {
   self->removeWidgetAndCleanUp(widget,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeWidgetAndCleanUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIMargin */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIMargin_new00
static int tolua_LuaExtern_UIMargin_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIMargin",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIMargin* tolua_ret = (UIMargin*)  Mtolua_new((UIMargin)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIMargin");
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

/* method: new_local of class  UIMargin */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIMargin_new00_local
static int tolua_LuaExtern_UIMargin_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIMargin",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIMargin* tolua_ret = (UIMargin*)  Mtolua_new((UIMargin)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIMargin");
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

/* method: new of class  UIMargin */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIMargin_new01
static int tolua_LuaExtern_UIMargin_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIMargin",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float l = ((float)  tolua_tonumber(tolua_S,2,0));
  float t = ((float)  tolua_tonumber(tolua_S,3,0));
  float r = ((float)  tolua_tonumber(tolua_S,4,0));
  float b = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   UIMargin* tolua_ret = (UIMargin*)  Mtolua_new((UIMargin)(l,t,r,b));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIMargin");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_UIMargin_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  UIMargin */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIMargin_new01_local
static int tolua_LuaExtern_UIMargin_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIMargin",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float l = ((float)  tolua_tonumber(tolua_S,2,0));
  float t = ((float)  tolua_tonumber(tolua_S,3,0));
  float r = ((float)  tolua_tonumber(tolua_S,4,0));
  float b = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   UIMargin* tolua_ret = (UIMargin*)  Mtolua_new((UIMargin)(l,t,r,b));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIMargin");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_UIMargin_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIMargin */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIMargin_new02
static int tolua_LuaExtern_UIMargin_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIMargin",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const UIMargin",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const UIMargin* other = ((const UIMargin*)  tolua_tousertype(tolua_S,2,0));
  {
   UIMargin* tolua_ret = (UIMargin*)  Mtolua_new((UIMargin)(*other));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIMargin");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_UIMargin_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  UIMargin */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIMargin_new02_local
static int tolua_LuaExtern_UIMargin_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIMargin",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const UIMargin",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const UIMargin* other = ((const UIMargin*)  tolua_tousertype(tolua_S,2,0));
  {
   UIMargin* tolua_ret = (UIMargin*)  Mtolua_new((UIMargin)(*other));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIMargin");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_UIMargin_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMargin of class  UIMargin */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIMargin_setMargin00
static int tolua_LuaExtern_UIMargin_setMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIMargin",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIMargin* self = (UIMargin*)  tolua_tousertype(tolua_S,1,0);
  float l = ((float)  tolua_tonumber(tolua_S,2,0));
  float t = ((float)  tolua_tonumber(tolua_S,3,0));
  float r = ((float)  tolua_tonumber(tolua_S,4,0));
  float b = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMargin'", NULL);
#endif
  {
   self->setMargin(l,t,r,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: equals of class  UIMargin */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIMargin_equals00
static int tolua_LuaExtern_UIMargin_equals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIMargin",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const UIMargin",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIMargin* self = (const UIMargin*)  tolua_tousertype(tolua_S,1,0);
  const UIMargin* target = ((const UIMargin*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'equals'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->equals(*target);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'equals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_new00
static int tolua_LuaExtern_UIListView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIListView* tolua_ret = (UIListView*)  Mtolua_new((UIListView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIListView");
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

/* method: new_local of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_new00_local
static int tolua_LuaExtern_UIListView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIListView* tolua_ret = (UIListView*)  Mtolua_new((UIListView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIListView");
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

/* method: delete of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_delete00
static int tolua_LuaExtern_UIListView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_create00
static int tolua_LuaExtern_UIListView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIListView* tolua_ret = (UIListView*)  UIListView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIListView");
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

/* method: addChild of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_addChild00
static int tolua_LuaExtern_UIListView_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->addChild(widget);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_removeAllChildren00
static int tolua_LuaExtern_UIListView_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_removeChild00
static int tolua_LuaExtern_UIListView_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* child = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->removeChild(child);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_onTouchBegan00
static int tolua_LuaExtern_UIListView_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(*touchPoint);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_onTouchMoved00
static int tolua_LuaExtern_UIListView_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_onTouchEnded00
static int tolua_LuaExtern_UIListView_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_onTouchCancelled00
static int tolua_LuaExtern_UIListView_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchLongClicked of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_onTouchLongClicked00
static int tolua_LuaExtern_UIListView_onTouchLongClicked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchLongClicked'", NULL);
#endif
  {
   self->onTouchLongClicked(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchLongClicked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_setDirection00
static int tolua_LuaExtern_UIListView_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  ListViewDirection dir = ((ListViewDirection) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(dir);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_getDirection00
static int tolua_LuaExtern_UIListView_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   ListViewDirection tolua_ret = (ListViewDirection)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initChildWithDataLength of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_initChildWithDataLength00
static int tolua_LuaExtern_UIListView_initChildWithDataLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  int length = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initChildWithDataLength'", NULL);
#endif
  {
   self->initChildWithDataLength(length);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initChildWithDataLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDataLength of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_getDataLength00
static int tolua_LuaExtern_UIListView_getDataLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDataLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getDataLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDataLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUpdateChild of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_getUpdateChild00
static int tolua_LuaExtern_UIListView_getUpdateChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUpdateChild'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->getUpdateChild();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUpdateChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUpdateDataIndex of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_getUpdateDataIndex00
static int tolua_LuaExtern_UIListView_getUpdateDataIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUpdateDataIndex'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUpdateDataIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUpdateDataIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUpdateSuccess of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_getUpdateSuccess00
static int tolua_LuaExtern_UIListView_getUpdateSuccess00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUpdateSuccess'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getUpdateSuccess();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUpdateSuccess'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUpdateSuccess of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_setUpdateSuccess00
static int tolua_LuaExtern_UIListView_setUpdateSuccess00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  bool sucess = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUpdateSuccess'", NULL);
#endif
  {
   self->setUpdateSuccess(sucess);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUpdateSuccess'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEventListenter of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_addEventListenter00
static int tolua_LuaExtern_UIListView_addEventListenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_ListViewEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCObject* target = ((cocos2d::CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_ListViewEvent selector = *((SEL_ListViewEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEventListenter'", NULL);
#endif
  {
   self->addEventListenter(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEventListenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addInitChildEvent of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_addInitChildEvent00
static int tolua_LuaExtern_UIListView_addInitChildEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_ListViewInitChildEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCObject* target = ((cocos2d::CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_ListViewInitChildEvent seletor = *((SEL_ListViewInitChildEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addInitChildEvent'", NULL);
#endif
  {
   self->addInitChildEvent(target,seletor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addInitChildEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addUpdateChildEvent of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_addUpdateChildEvent00
static int tolua_LuaExtern_UIListView_addUpdateChildEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_ListViewUpdateChildEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCObject* target = ((cocos2d::CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_ListViewUpdateChildEvent selector = *((SEL_ListViewUpdateChildEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addUpdateChildEvent'", NULL);
#endif
  {
   self->addUpdateChildEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addUpdateChildEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_update00
static int tolua_LuaExtern_UIListView_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: doLayout of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_doLayout00
static int tolua_LuaExtern_UIListView_doLayout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIListView* self = (UIListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'doLayout'", NULL);
#endif
  {
   self->doLayout();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'doLayout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UIListView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIListView_getDescription00
static int tolua_LuaExtern_UIListView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIListView* self = (const UIListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_new00
static int tolua_LuaExtern_UILoadingBar_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILoadingBar* tolua_ret = (UILoadingBar*)  Mtolua_new((UILoadingBar)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILoadingBar");
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

/* method: new_local of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_new00_local
static int tolua_LuaExtern_UILoadingBar_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILoadingBar* tolua_ret = (UILoadingBar*)  Mtolua_new((UILoadingBar)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILoadingBar");
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

/* method: delete of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_delete00
static int tolua_LuaExtern_UILoadingBar_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_create00
static int tolua_LuaExtern_UILoadingBar_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UILoadingBar* tolua_ret = (UILoadingBar*)  UILoadingBar::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILoadingBar");
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

/* method: setDirection of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_setDirection00
static int tolua_LuaExtern_UILoadingBar_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
  LoadingBarType dir = ((LoadingBarType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(dir);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_getDirection00
static int tolua_LuaExtern_UILoadingBar_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTexture of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_loadTexture00
static int tolua_LuaExtern_UILoadingBar_loadTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
  const char* texture = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTexture'", NULL);
#endif
  {
   self->loadTexture(texture,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPercent of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_setPercent00
static int tolua_LuaExtern_UILoadingBar_setPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
  int percent = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPercent'", NULL);
#endif
  {
   self->setPercent(percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPercent of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_getPercent00
static int tolua_LuaExtern_UILoadingBar_getPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPercent'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getPercent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enabled of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_setScale9Enabled00
static int tolua_LuaExtern_UILoadingBar_setScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enabled'", NULL);
#endif
  {
   self->setScale9Enabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsets of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_setCapInsets00
static int tolua_LuaExtern_UILoadingBar_setCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsets'", NULL);
#endif
  {
   self->setCapInsets(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_ignoreContentAdaptWithSize00
static int tolua_LuaExtern_UILoadingBar_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_getContentSize00
static int tolua_LuaExtern_UILoadingBar_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UILoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UILoadingBar* self = (const UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_getVirtualRenderer00
static int tolua_LuaExtern_UILoadingBar_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_getDescription00
static int tolua_LuaExtern_UILoadingBar_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UILoadingBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UILoadingBar* self = (const UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_setTexture00
static int tolua_LuaExtern_UILoadingBar_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
  const char* texture = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(texture,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Size of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_setScale9Size00
static int tolua_LuaExtern_UILoadingBar_setScale9Size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Size'", NULL);
#endif
  {
   self->setScale9Size(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enable of class  UILoadingBar */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UILoadingBar_setScale9Enable00
static int tolua_LuaExtern_UILoadingBar_setScale9Enable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UILoadingBar",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UILoadingBar* self = (UILoadingBar*)  tolua_tousertype(tolua_S,1,0);
  bool is = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enable'", NULL);
#endif
  {
   self->setScale9Enable(is);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_new00
static int tolua_LuaExtern_UIPageView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIPageView* tolua_ret = (UIPageView*)  Mtolua_new((UIPageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIPageView");
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

/* method: new_local of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_new00_local
static int tolua_LuaExtern_UIPageView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIPageView* tolua_ret = (UIPageView*)  Mtolua_new((UIPageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIPageView");
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

/* method: delete of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_delete00
static int tolua_LuaExtern_UIPageView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_create00
static int tolua_LuaExtern_UIPageView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIPageView* tolua_ret = (UIPageView*)  UIPageView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIPageView");
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

/* method: addWidgetToPage of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_addWidgetToPage00
static int tolua_LuaExtern_UIPageView_addWidgetToPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  int pageIdx = ((int)  tolua_tonumber(tolua_S,3,0));
  bool forceCreate = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addWidgetToPage'", NULL);
#endif
  {
   self->addWidgetToPage(widget,pageIdx,forceCreate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addWidgetToPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPage of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_addPage00
static int tolua_LuaExtern_UIPageView_addPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  Layout* page = ((Layout*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPage'", NULL);
#endif
  {
   self->addPage(page);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertPage of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_insertPage00
static int tolua_LuaExtern_UIPageView_insertPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Layout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  Layout* page = ((Layout*)  tolua_tousertype(tolua_S,2,0));
  int idx = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertPage'", NULL);
#endif
  {
   self->insertPage(page,idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removePage of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_removePage00
static int tolua_LuaExtern_UIPageView_removePage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Layout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  Layout* page = ((Layout*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removePage'", NULL);
#endif
  {
   self->removePage(page);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removePage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removePageAtIndex of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_removePageAtIndex00
static int tolua_LuaExtern_UIPageView_removePageAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removePageAtIndex'", NULL);
#endif
  {
   self->removePageAtIndex(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removePageAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToPage of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_scrollToPage00
static int tolua_LuaExtern_UIPageView_scrollToPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  int idx = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToPage'", NULL);
#endif
  {
   self->scrollToPage(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurPageIndex of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_getCurPageIndex00
static int tolua_LuaExtern_UIPageView_getCurPageIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIPageView* self = (const UIPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurPageIndex'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCurPageIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurPageIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEventListener of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_addEventListener00
static int tolua_LuaExtern_UIPageView_addEventListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_PageViewEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_PageViewEvent selector = *((SEL_PageViewEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEventListener'", NULL);
#endif
  {
   self->addEventListener(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEventListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPageTurningEvent of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_addPageTurningEvent00
static int tolua_LuaExtern_UIPageView_addPageTurningEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_PageViewPageTurningEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_PageViewPageTurningEvent selector = *((SEL_PageViewPageTurningEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPageTurningEvent'", NULL);
#endif
  {
   self->addPageTurningEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPageTurningEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_removeChild00
static int tolua_LuaExtern_UIPageView_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->removeChild(widget);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_removeAllChildren00
static int tolua_LuaExtern_UIPageView_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_onTouchBegan00
static int tolua_LuaExtern_UIPageView_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(*touchPoint);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_onTouchMoved00
static int tolua_LuaExtern_UIPageView_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_onTouchEnded00
static int tolua_LuaExtern_UIPageView_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_onTouchCancelled00
static int tolua_LuaExtern_UIPageView_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_update00
static int tolua_LuaExtern_UIPageView_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: doLayout of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_doLayout00
static int tolua_LuaExtern_UIPageView_doLayout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'doLayout'", NULL);
#endif
  {
   self->doLayout();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'doLayout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_getDescription00
static int tolua_LuaExtern_UIPageView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIPageView* self = (const UIPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPage of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_getPage00
static int tolua_LuaExtern_UIPageView_getPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIPageView* self = (const UIPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPage'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getPage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removePage of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_removePage01
static int tolua_LuaExtern_UIPageView_removePage01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Layout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  Layout* page = ((Layout*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removePage'", NULL);
#endif
  {
   self->removePage(page,cleanup);
  }
 }
 return 0;
tolua_lerror:
 return tolua_LuaExtern_UIPageView_removePage00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removePageAtIndex of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIPageView_removePageAtIndex01
static int tolua_LuaExtern_UIPageView_removePageAtIndex01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIPageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removePageAtIndex'", NULL);
#endif
  {
   self->removePageAtIndex(index,cleanup);
  }
 }
 return 0;
tolua_lerror:
 return tolua_LuaExtern_UIPageView_removePageAtIndex00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __UIScrollInterface__ of class  UIPageView */
#ifndef TOLUA_DISABLE_tolua_get_UIPageView___UIScrollInterface__
static int tolua_get_UIPageView___UIScrollInterface__(lua_State* tolua_S)
{
  UIPageView* self = (UIPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__UIScrollInterface__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<UIScrollInterface*>(self), "UIScrollInterface");
#else
   tolua_pushusertype(tolua_S,(void*)((UIScrollInterface*)self), "UIScrollInterface");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIRootWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIRootWidget_new00
static int tolua_LuaExtern_UIRootWidget_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIRootWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIRootWidget* tolua_ret = (UIRootWidget*)  Mtolua_new((UIRootWidget)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIRootWidget");
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

/* method: new_local of class  UIRootWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIRootWidget_new00_local
static int tolua_LuaExtern_UIRootWidget_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIRootWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIRootWidget* tolua_ret = (UIRootWidget*)  Mtolua_new((UIRootWidget)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIRootWidget");
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

/* method: delete of class  UIRootWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIRootWidget_delete00
static int tolua_LuaExtern_UIRootWidget_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIRootWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIRootWidget* self = (UIRootWidget*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UIRootWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIRootWidget_create00
static int tolua_LuaExtern_UIRootWidget_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIRootWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIRootWidget* tolua_ret = (UIRootWidget*)  UIRootWidget::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIRootWidget");
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

/* method: getDescription of class  UIRootWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIRootWidget_getDescription00
static int tolua_LuaExtern_UIRootWidget_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIRootWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIRootWidget* self = (const UIRootWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_new00
static int tolua_LuaExtern_UIScrollView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIScrollView* tolua_ret = (UIScrollView*)  Mtolua_new((UIScrollView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIScrollView");
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

/* method: new_local of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_new00_local
static int tolua_LuaExtern_UIScrollView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIScrollView* tolua_ret = (UIScrollView*)  Mtolua_new((UIScrollView)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIScrollView");
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

/* method: delete of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_delete00
static int tolua_LuaExtern_UIScrollView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_create00
static int tolua_LuaExtern_UIScrollView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIScrollView* tolua_ret = (UIScrollView*)  UIScrollView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIScrollView");
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

/* method: setDirection of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_setDirection00
static int tolua_LuaExtern_UIScrollView_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  SCROLLVIEW_DIR dir = ((SCROLLVIEW_DIR) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(dir);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_getDirection00
static int tolua_LuaExtern_UIScrollView_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   SCROLLVIEW_DIR tolua_ret = (SCROLLVIEW_DIR)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInnerContainer of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_getInnerContainer00
static int tolua_LuaExtern_UIScrollView_getInnerContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInnerContainer'", NULL);
#endif
  {
   Layout* tolua_ret = (Layout*)  self->getInnerContainer();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Layout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInnerContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToBottom of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_scrollToBottom00
static int tolua_LuaExtern_UIScrollView_scrollToBottom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToBottom'", NULL);
#endif
  {
   self->scrollToBottom();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToBottom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scrollToTop of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_scrollToTop00
static int tolua_LuaExtern_UIScrollView_scrollToTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scrollToTop'", NULL);
#endif
  {
   self->scrollToTop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scrollToTop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInnerContainerSize of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_setInnerContainerSize00
static int tolua_LuaExtern_UIScrollView_setInnerContainerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInnerContainerSize'", NULL);
#endif
  {
   self->setInnerContainerSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInnerContainerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInnerContainerSize of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_getInnerContainerSize00
static int tolua_LuaExtern_UIScrollView_getInnerContainerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIScrollView* self = (const UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInnerContainerSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getInnerContainerSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInnerContainerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEventListener of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_addEventListener00
static int tolua_LuaExtern_UIScrollView_addEventListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_ScrollViewEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_ScrollViewEvent selector = *((SEL_ScrollViewEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEventListener'", NULL);
#endif
  {
   self->addEventListener(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEventListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addScrollToTopEvent of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_addScrollToTopEvent00
static int tolua_LuaExtern_UIScrollView_addScrollToTopEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_ScrollToTopEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_ScrollToTopEvent selector = *((SEL_ScrollToTopEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addScrollToTopEvent'", NULL);
#endif
  {
   self->addScrollToTopEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addScrollToTopEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addScrollToBottomEvent of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_addScrollToBottomEvent00
static int tolua_LuaExtern_UIScrollView_addScrollToBottomEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_ScrollToBottomEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_ScrollToBottomEvent selector = *((SEL_ScrollToBottomEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addScrollToBottomEvent'", NULL);
#endif
  {
   self->addScrollToBottomEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addScrollToBottomEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addScrollToLeftEvent of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_addScrollToLeftEvent00
static int tolua_LuaExtern_UIScrollView_addScrollToLeftEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_ScrollToLeftEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_ScrollToLeftEvent selector = *((SEL_ScrollToLeftEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addScrollToLeftEvent'", NULL);
#endif
  {
   self->addScrollToLeftEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addScrollToLeftEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addScrollToRightEvent of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_addScrollToRightEvent00
static int tolua_LuaExtern_UIScrollView_addScrollToRightEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_ScrollToRightEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_ScrollToRightEvent selector = *((SEL_ScrollToRightEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addScrollToRightEvent'", NULL);
#endif
  {
   self->addScrollToRightEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addScrollToRightEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_addChild00
static int tolua_LuaExtern_UIScrollView_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* widget = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->addChild(widget);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_removeAllChildren00
static int tolua_LuaExtern_UIScrollView_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_removeChild00
static int tolua_LuaExtern_UIScrollView_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* child = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->removeChild(child);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildren of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_getChildren00
static int tolua_LuaExtern_UIScrollView_getChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildren'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getChildren();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_onTouchBegan00
static int tolua_LuaExtern_UIScrollView_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(*touchPoint);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_onTouchMoved00
static int tolua_LuaExtern_UIScrollView_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_onTouchEnded00
static int tolua_LuaExtern_UIScrollView_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_onTouchCancelled00
static int tolua_LuaExtern_UIScrollView_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchLongClicked of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_onTouchLongClicked00
static int tolua_LuaExtern_UIScrollView_onTouchLongClicked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchLongClicked'", NULL);
#endif
  {
   self->onTouchLongClicked(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchLongClicked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_update00
static int tolua_LuaExtern_UIScrollView_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setLayoutType of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_setLayoutType00
static int tolua_LuaExtern_UIScrollView_setLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
  LayoutType type = ((LayoutType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLayoutType'", NULL);
#endif
  {
   self->setLayoutType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutType of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_getLayoutType00
static int tolua_LuaExtern_UIScrollView_getLayoutType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIScrollView* self = (const UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutType'", NULL);
#endif
  {
   LayoutType tolua_ret = (LayoutType)  self->getLayoutType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: doLayout of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_doLayout00
static int tolua_LuaExtern_UIScrollView_doLayout00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'doLayout'", NULL);
#endif
  {
   self->doLayout();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'doLayout'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIScrollView_getDescription00
static int tolua_LuaExtern_UIScrollView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIScrollView* self = (const UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __UIScrollInterface__ of class  UIScrollView */
#ifndef TOLUA_DISABLE_tolua_get_UIScrollView___UIScrollInterface__
static int tolua_get_UIScrollView___UIScrollInterface__(lua_State* tolua_S)
{
  UIScrollView* self = (UIScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__UIScrollInterface__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<UIScrollInterface*>(self), "UIScrollInterface");
#else
   tolua_pushusertype(tolua_S,(void*)((UIScrollInterface*)self), "UIScrollInterface");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_new00
static int tolua_LuaExtern_UISlider_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UISlider* tolua_ret = (UISlider*)  Mtolua_new((UISlider)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UISlider");
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

/* method: new_local of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_new00_local
static int tolua_LuaExtern_UISlider_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UISlider* tolua_ret = (UISlider*)  Mtolua_new((UISlider)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UISlider");
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

/* method: delete of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_delete00
static int tolua_LuaExtern_UISlider_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_create00
static int tolua_LuaExtern_UISlider_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UISlider* tolua_ret = (UISlider*)  UISlider::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UISlider");
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

/* method: loadBarTexture of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_loadBarTexture00
static int tolua_LuaExtern_UISlider_loadBarTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadBarTexture'", NULL);
#endif
  {
   self->loadBarTexture(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadBarTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enabled of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setScale9Enabled00
static int tolua_LuaExtern_UISlider_setScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  bool able = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enabled'", NULL);
#endif
  {
   self->setScale9Enabled(able);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsets of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setCapInsets00
static int tolua_LuaExtern_UISlider_setCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsets'", NULL);
#endif
  {
   self->setCapInsets(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsetsBarRenderer of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setCapInsetsBarRenderer00
static int tolua_LuaExtern_UISlider_setCapInsetsBarRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsetsBarRenderer'", NULL);
#endif
  {
   self->setCapInsetsBarRenderer(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsetsBarRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCapInsetProgressBarRebderer of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setCapInsetProgressBarRebderer00
static int tolua_LuaExtern_UISlider_setCapInsetProgressBarRebderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const CCRect* capInsets = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCapInsetProgressBarRebderer'", NULL);
#endif
  {
   self->setCapInsetProgressBarRebderer(*capInsets);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCapInsetProgressBarRebderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSlidBallTextures of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_loadSlidBallTextures00
static int tolua_LuaExtern_UISlider_loadSlidBallTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pressed = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,4,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,5,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSlidBallTextures'", NULL);
#endif
  {
   self->loadSlidBallTextures(normal,pressed,disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadSlidBallTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSlidBallTextureNormal of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_loadSlidBallTextureNormal00
static int tolua_LuaExtern_UISlider_loadSlidBallTextureNormal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSlidBallTextureNormal'", NULL);
#endif
  {
   self->loadSlidBallTextureNormal(normal,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadSlidBallTextureNormal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSlidBallTexturePressed of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_loadSlidBallTexturePressed00
static int tolua_LuaExtern_UISlider_loadSlidBallTexturePressed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* pressed = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSlidBallTexturePressed'", NULL);
#endif
  {
   self->loadSlidBallTexturePressed(pressed,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadSlidBallTexturePressed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSlidBallTextureDisabled of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_loadSlidBallTextureDisabled00
static int tolua_LuaExtern_UISlider_loadSlidBallTextureDisabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSlidBallTextureDisabled'", NULL);
#endif
  {
   self->loadSlidBallTextureDisabled(disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadSlidBallTextureDisabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadProgressBarTexture of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_loadProgressBarTexture00
static int tolua_LuaExtern_UISlider_loadProgressBarTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadProgressBarTexture'", NULL);
#endif
  {
   self->loadProgressBarTexture(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadProgressBarTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPercent of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setPercent00
static int tolua_LuaExtern_UISlider_setPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  int percent = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPercent'", NULL);
#endif
  {
   self->setPercent(percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPercent of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_getPercent00
static int tolua_LuaExtern_UISlider_getPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPercent'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getPercent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEventListener of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_addEventListener00
static int tolua_LuaExtern_UISlider_addEventListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_SlidPercentChangedEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_SlidPercentChangedEvent selector = *((SEL_SlidPercentChangedEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEventListener'", NULL);
#endif
  {
   self->addEventListener(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEventListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_onTouchBegan00
static int tolua_LuaExtern_UISlider_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(*touchPoint);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_onTouchMoved00
static int tolua_LuaExtern_UISlider_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_onTouchEnded00
static int tolua_LuaExtern_UISlider_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_onTouchCancelled00
static int tolua_LuaExtern_UISlider_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_getContentSize00
static int tolua_LuaExtern_UISlider_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UISlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UISlider* self = (const UISlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_getVirtualRenderer00
static int tolua_LuaExtern_UISlider_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_ignoreContentAdaptWithSize00
static int tolua_LuaExtern_UISlider_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_getDescription00
static int tolua_LuaExtern_UISlider_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UISlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UISlider* self = (const UISlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBarTexture of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setBarTexture00
static int tolua_LuaExtern_UISlider_setBarTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBarTexture'", NULL);
#endif
  {
   self->setBarTexture(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBarTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSlidBallTextures of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setSlidBallTextures00
static int tolua_LuaExtern_UISlider_setSlidBallTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pressed = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,4,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,5,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSlidBallTextures'", NULL);
#endif
  {
   self->setSlidBallTextures(normal,pressed,disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSlidBallTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSlidBallNormalTexture of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setSlidBallNormalTexture00
static int tolua_LuaExtern_UISlider_setSlidBallNormalTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* normal = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSlidBallNormalTexture'", NULL);
#endif
  {
   self->setSlidBallNormalTexture(normal,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSlidBallNormalTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSlidBallPressedTexture of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setSlidBallPressedTexture00
static int tolua_LuaExtern_UISlider_setSlidBallPressedTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* pressed = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSlidBallPressedTexture'", NULL);
#endif
  {
   self->setSlidBallPressedTexture(pressed,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSlidBallPressedTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSlidBallDisabledTexture of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setSlidBallDisabledTexture00
static int tolua_LuaExtern_UISlider_setSlidBallDisabledTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* disabled = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSlidBallDisabledTexture'", NULL);
#endif
  {
   self->setSlidBallDisabledTexture(disabled,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSlidBallDisabledTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProgressBarTexture of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setProgressBarTexture00
static int tolua_LuaExtern_UISlider_setProgressBarTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const char* fileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  TextureResType texType = ((TextureResType) (int)  tolua_tonumber(tolua_S,3,UI_TEX_TYPE_LOCAL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProgressBarTexture'", NULL);
#endif
  {
   self->setProgressBarTexture(fileName,texType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProgressBarTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSlidBallPercent of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setSlidBallPercent00
static int tolua_LuaExtern_UISlider_setSlidBallPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  int percent = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSlidBallPercent'", NULL);
#endif
  {
   self->setSlidBallPercent(percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSlidBallPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Size of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setScale9Size00
static int tolua_LuaExtern_UISlider_setScale9Size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Size'", NULL);
#endif
  {
   self->setScale9Size(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enable of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_setScale9Enable00
static int tolua_LuaExtern_UISlider_setScale9Enable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  bool is = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enable'", NULL);
#endif
  {
   self->setScale9Enable(is);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPercentChangedEvent of class  UISlider */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UISlider_addPercentChangedEvent00
static int tolua_LuaExtern_UISlider_addPercentChangedEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UISlider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_PushEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UISlider* self = (UISlider*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_PushEvent selector = *((SEL_PushEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPercentChangedEvent'", NULL);
#endif
  {
   self->addPercentChangedEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPercentChangedEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_new00
static int tolua_LuaExtern_UICCTextField_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UICCTextField* tolua_ret = (UICCTextField*)  Mtolua_new((UICCTextField)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UICCTextField");
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

/* method: new_local of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_new00_local
static int tolua_LuaExtern_UICCTextField_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UICCTextField* tolua_ret = (UICCTextField*)  Mtolua_new((UICCTextField)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UICCTextField");
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

/* method: delete of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_delete00
static int tolua_LuaExtern_UICCTextField_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onEnter of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_onEnter00
static int tolua_LuaExtern_UICCTextField_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_create00
static int tolua_LuaExtern_UICCTextField_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* placeholder = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   UICCTextField* tolua_ret = (UICCTextField*)  UICCTextField::create(placeholder,fontName,fontSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UICCTextField");
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

/* method: onTextFieldAttachWithIME of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_onTextFieldAttachWithIME00
static int tolua_LuaExtern_UICCTextField_onTextFieldAttachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  CCTextFieldTTF* pSender = ((CCTextFieldTTF*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTextFieldAttachWithIME'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTextFieldAttachWithIME(pSender);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTextFieldAttachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTextFieldDetachWithIME of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_onTextFieldDetachWithIME00
static int tolua_LuaExtern_UICCTextField_onTextFieldDetachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  CCTextFieldTTF* pSender = ((CCTextFieldTTF*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTextFieldDetachWithIME'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTextFieldDetachWithIME(pSender);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTextFieldDetachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTextFieldInsertText of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_onTextFieldInsertText00
static int tolua_LuaExtern_UICCTextField_onTextFieldInsertText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  CCTextFieldTTF* pSender = ((CCTextFieldTTF*)  tolua_tousertype(tolua_S,2,0));
  const char* text = ((const char*)  tolua_tostring(tolua_S,3,0));
  int nLen = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTextFieldInsertText'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTextFieldInsertText(pSender,text,nLen);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTextFieldInsertText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTextFieldDeleteBackward of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_onTextFieldDeleteBackward00
static int tolua_LuaExtern_UICCTextField_onTextFieldDeleteBackward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  CCTextFieldTTF* pSender = ((CCTextFieldTTF*)  tolua_tousertype(tolua_S,2,0));
  const char* delText = ((const char*)  tolua_tostring(tolua_S,3,0));
  int nLen = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTextFieldDeleteBackward'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTextFieldDeleteBackward(pSender,delText,nLen);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTextFieldDeleteBackward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertText of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_insertText00
static int tolua_LuaExtern_UICCTextField_insertText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
  int len = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertText'", NULL);
#endif
  {
   self->insertText(text,len);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: deleteBackward of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_deleteBackward00
static int tolua_LuaExtern_UICCTextField_deleteBackward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'deleteBackward'", NULL);
#endif
  {
   self->deleteBackward();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'deleteBackward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: openIME of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_openIME00
static int tolua_LuaExtern_UICCTextField_openIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'openIME'", NULL);
#endif
  {
   self->openIME();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'openIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: closeIME of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_closeIME00
static int tolua_LuaExtern_UICCTextField_closeIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'closeIME'", NULL);
#endif
  {
   self->closeIME();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'closeIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxLengthEnabled of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_setMaxLengthEnabled00
static int tolua_LuaExtern_UICCTextField_setMaxLengthEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxLengthEnabled'", NULL);
#endif
  {
   self->setMaxLengthEnabled(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxLengthEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isMaxLengthEnabled of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_isMaxLengthEnabled00
static int tolua_LuaExtern_UICCTextField_isMaxLengthEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMaxLengthEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isMaxLengthEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMaxLengthEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxLength of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_setMaxLength00
static int tolua_LuaExtern_UICCTextField_setMaxLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  int length = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxLength'", NULL);
#endif
  {
   self->setMaxLength(length);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxLength of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_getMaxLength00
static int tolua_LuaExtern_UICCTextField_getMaxLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCharCount of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_getCharCount00
static int tolua_LuaExtern_UICCTextField_getCharCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCharCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCharCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCharCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPasswordEnabled of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_setPasswordEnabled00
static int tolua_LuaExtern_UICCTextField_setPasswordEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPasswordEnabled'", NULL);
#endif
  {
   self->setPasswordEnabled(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPasswordEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPasswordEnabled of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_isPasswordEnabled00
static int tolua_LuaExtern_UICCTextField_isPasswordEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPasswordEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPasswordEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPasswordEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPasswordStyleText of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_setPasswordStyleText00
static int tolua_LuaExtern_UICCTextField_setPasswordStyleText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  const char* styleText = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPasswordStyleText'", NULL);
#endif
  {
   self->setPasswordStyleText(styleText);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPasswordStyleText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPasswordText of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_setPasswordText00
static int tolua_LuaExtern_UICCTextField_setPasswordText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPasswordText'", NULL);
#endif
  {
   self->setPasswordText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPasswordText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAttachWithIME of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_setAttachWithIME00
static int tolua_LuaExtern_UICCTextField_setAttachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  bool attach = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAttachWithIME'", NULL);
#endif
  {
   self->setAttachWithIME(attach);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAttachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAttachWithIME of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_getAttachWithIME00
static int tolua_LuaExtern_UICCTextField_getAttachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttachWithIME'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getAttachWithIME();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDetachWithIME of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_setDetachWithIME00
static int tolua_LuaExtern_UICCTextField_setDetachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  bool detach = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDetachWithIME'", NULL);
#endif
  {
   self->setDetachWithIME(detach);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDetachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDetachWithIME of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_getDetachWithIME00
static int tolua_LuaExtern_UICCTextField_getDetachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDetachWithIME'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getDetachWithIME();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDetachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInsertText of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_setInsertText00
static int tolua_LuaExtern_UICCTextField_setInsertText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  bool insert = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInsertText'", NULL);
#endif
  {
   self->setInsertText(insert);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInsertText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInsertText of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_getInsertText00
static int tolua_LuaExtern_UICCTextField_getInsertText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInsertText'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getInsertText();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInsertText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDeleteBackward of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_setDeleteBackward00
static int tolua_LuaExtern_UICCTextField_setDeleteBackward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
  bool deleteBackward = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDeleteBackward'", NULL);
#endif
  {
   self->setDeleteBackward(deleteBackward);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDeleteBackward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDeleteBackward of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UICCTextField_getDeleteBackward00
static int tolua_LuaExtern_UICCTextField_getDeleteBackward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UICCTextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDeleteBackward'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getDeleteBackward();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDeleteBackward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCTextFieldDelegate__ of class  UICCTextField */
#ifndef TOLUA_DISABLE_tolua_get_UICCTextField___CCTextFieldDelegate__
static int tolua_get_UICCTextField___CCTextFieldDelegate__(lua_State* tolua_S)
{
  UICCTextField* self = (UICCTextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCTextFieldDelegate__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCTextFieldDelegate*>(self), "CCTextFieldDelegate");
#else
   tolua_pushusertype(tolua_S,(void*)((CCTextFieldDelegate*)self), "CCTextFieldDelegate");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_new00
static int tolua_LuaExtern_UITextField_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UITextField* tolua_ret = (UITextField*)  Mtolua_new((UITextField)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UITextField");
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

/* method: new_local of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_new00_local
static int tolua_LuaExtern_UITextField_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UITextField* tolua_ret = (UITextField*)  Mtolua_new((UITextField)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UITextField");
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

/* method: delete of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_delete00
static int tolua_LuaExtern_UITextField_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_create00
static int tolua_LuaExtern_UITextField_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UITextField* tolua_ret = (UITextField*)  UITextField::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UITextField");
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

/* method: init of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_init00
static int tolua_LuaExtern_UITextField_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
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

/* method: initRenderer of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_initRenderer00
static int tolua_LuaExtern_UITextField_initRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initRenderer'", NULL);
#endif
  {
   self->initRenderer();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchSize of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setTouchSize00
static int tolua_LuaExtern_UITextField_setTouchSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchSize'", NULL);
#endif
  {
   self->setTouchSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setText00
static int tolua_LuaExtern_UITextField_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPlaceHolder of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setPlaceHolder00
static int tolua_LuaExtern_UITextField_setPlaceHolder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  const char* value = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPlaceHolder'", NULL);
#endif
  {
   self->setPlaceHolder(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPlaceHolder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontSize of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setFontSize00
static int tolua_LuaExtern_UITextField_setFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  int size = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontSize'", NULL);
#endif
  {
   self->setFontSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontName of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setFontName00
static int tolua_LuaExtern_UITextField_setFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontName'", NULL);
#endif
  {
   self->setFontName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: didNotSelectSelf of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_didNotSelectSelf00
static int tolua_LuaExtern_UITextField_didNotSelectSelf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'didNotSelectSelf'", NULL);
#endif
  {
   self->didNotSelectSelf();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'didNotSelectSelf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringValue of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_getStringValue00
static int tolua_LuaExtern_UITextField_getStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringValue'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getStringValue();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_onTouchBegan00
static int tolua_LuaExtern_UITextField_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(*touchPoint);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxLengthEnabled of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setMaxLengthEnabled00
static int tolua_LuaExtern_UITextField_setMaxLengthEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxLengthEnabled'", NULL);
#endif
  {
   self->setMaxLengthEnabled(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxLengthEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isMaxLengthEnabled of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_isMaxLengthEnabled00
static int tolua_LuaExtern_UITextField_isMaxLengthEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMaxLengthEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isMaxLengthEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMaxLengthEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxLength of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setMaxLength00
static int tolua_LuaExtern_UITextField_setMaxLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  int length = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxLength'", NULL);
#endif
  {
   self->setMaxLength(length);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxLength of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_getMaxLength00
static int tolua_LuaExtern_UITextField_getMaxLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPasswordEnabled of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setPasswordEnabled00
static int tolua_LuaExtern_UITextField_setPasswordEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPasswordEnabled'", NULL);
#endif
  {
   self->setPasswordEnabled(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPasswordEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPasswordEnabled of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_isPasswordEnabled00
static int tolua_LuaExtern_UITextField_isPasswordEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPasswordEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPasswordEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPasswordEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPasswordStyleText of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setPasswordStyleText00
static int tolua_LuaExtern_UITextField_setPasswordStyleText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  const char* styleText = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPasswordStyleText'", NULL);
#endif
  {
   self->setPasswordStyleText(styleText);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPasswordStyleText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_update00
static int tolua_LuaExtern_UITextField_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getAttachWithIME of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_getAttachWithIME00
static int tolua_LuaExtern_UITextField_getAttachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAttachWithIME'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getAttachWithIME();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAttachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAttachWithIME of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setAttachWithIME00
static int tolua_LuaExtern_UITextField_setAttachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  bool attach = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAttachWithIME'", NULL);
#endif
  {
   self->setAttachWithIME(attach);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAttachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDetachWithIME of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_getDetachWithIME00
static int tolua_LuaExtern_UITextField_getDetachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDetachWithIME'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getDetachWithIME();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDetachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDetachWithIME of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setDetachWithIME00
static int tolua_LuaExtern_UITextField_setDetachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  bool detach = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDetachWithIME'", NULL);
#endif
  {
   self->setDetachWithIME(detach);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDetachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInsertText of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_getInsertText00
static int tolua_LuaExtern_UITextField_getInsertText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInsertText'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getInsertText();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInsertText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInsertText of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setInsertText00
static int tolua_LuaExtern_UITextField_setInsertText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  bool insertText = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInsertText'", NULL);
#endif
  {
   self->setInsertText(insertText);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInsertText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDeleteBackward of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_getDeleteBackward00
static int tolua_LuaExtern_UITextField_getDeleteBackward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDeleteBackward'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getDeleteBackward();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDeleteBackward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDeleteBackward of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setDeleteBackward00
static int tolua_LuaExtern_UITextField_setDeleteBackward00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  bool deleteBackward = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDeleteBackward'", NULL);
#endif
  {
   self->setDeleteBackward(deleteBackward);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDeleteBackward'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addEventListener of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_addEventListener00
static int tolua_LuaExtern_UITextField_addEventListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_TextFieldEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_TextFieldEvent selecor = *((SEL_TextFieldEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addEventListener'", NULL);
#endif
  {
   self->addEventListener(target,selecor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addEventListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addAttachWithIMEEvent of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_addAttachWithIMEEvent00
static int tolua_LuaExtern_UITextField_addAttachWithIMEEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_TextFieldAttachWithIMEEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_TextFieldAttachWithIMEEvent selecor = *((SEL_TextFieldAttachWithIMEEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addAttachWithIMEEvent'", NULL);
#endif
  {
   self->addAttachWithIMEEvent(target,selecor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addAttachWithIMEEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addDetachWithIMEEvent of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_addDetachWithIMEEvent00
static int tolua_LuaExtern_UITextField_addDetachWithIMEEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_TextFieldDetachWithIMEEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_TextFieldDetachWithIMEEvent selecor = *((SEL_TextFieldDetachWithIMEEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addDetachWithIMEEvent'", NULL);
#endif
  {
   self->addDetachWithIMEEvent(target,selecor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addDetachWithIMEEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addInsertTextEvent of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_addInsertTextEvent00
static int tolua_LuaExtern_UITextField_addInsertTextEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_TextFieldInsertTextEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_TextFieldInsertTextEvent selecor = *((SEL_TextFieldInsertTextEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addInsertTextEvent'", NULL);
#endif
  {
   self->addInsertTextEvent(target,selecor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addInsertTextEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addDeleteBackwardEvent of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_addDeleteBackwardEvent00
static int tolua_LuaExtern_UITextField_addDeleteBackwardEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_TextFieldDeleteBackwardEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_TextFieldDeleteBackwardEvent selecor = *((SEL_TextFieldDeleteBackwardEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addDeleteBackwardEvent'", NULL);
#endif
  {
   self->addDeleteBackwardEvent(target,selecor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addDeleteBackwardEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setAnchorPoint00
static int tolua_LuaExtern_UITextField_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setColor00
static int tolua_LuaExtern_UITextField_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setOpacity00
static int tolua_LuaExtern_UITextField_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  int opacity = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_getDescription00
static int tolua_LuaExtern_UITextField_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UITextField* self = (const UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxLengthEnable of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setMaxLengthEnable00
static int tolua_LuaExtern_UITextField_setMaxLengthEnable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  bool is = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxLengthEnable'", NULL);
#endif
  {
   self->setMaxLengthEnable(is);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxLengthEnable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPasswordEnable of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_setPasswordEnable00
static int tolua_LuaExtern_UITextField_setPasswordEnable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
  bool is = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPasswordEnable'", NULL);
#endif
  {
   self->setPasswordEnable(is);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPasswordEnable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_getContentSize00
static int tolua_LuaExtern_UITextField_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UITextField* self = (const UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  UITextField */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UITextField_getVirtualRenderer00
static int tolua_LuaExtern_UITextField_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UITextField",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UITextField* self = (UITextField*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_new00
static int tolua_LuaExtern_UIWidget_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIWidget* tolua_ret = (UIWidget*)  Mtolua_new((UIWidget)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
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

/* method: new_local of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_new00_local
static int tolua_LuaExtern_UIWidget_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIWidget* tolua_ret = (UIWidget*)  Mtolua_new((UIWidget)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
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

/* method: delete of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_delete00
static int tolua_LuaExtern_UIWidget_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_create00
static int tolua_LuaExtern_UIWidget_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   UIWidget* tolua_ret = (UIWidget*)  UIWidget::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
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

/* method: setEnabled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setEnabled00
static int tolua_LuaExtern_UIWidget_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isEnabled00
static int tolua_LuaExtern_UIWidget_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setVisible00
static int tolua_LuaExtern_UIWidget_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isVisible of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isVisible00
static int tolua_LuaExtern_UIWidget_isVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isVisible();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBright of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setBright00
static int tolua_LuaExtern_UIWidget_setBright00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool bright = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBright'", NULL);
#endif
  {
   self->setBright(bright);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBright'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBright of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isBright00
static int tolua_LuaExtern_UIWidget_isBright00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBright'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBright();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBright'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setTouchEnabled00
static int tolua_LuaExtern_UIWidget_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBrightStyle of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setBrightStyle00
static int tolua_LuaExtern_UIWidget_setBrightStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  BrightStyle style = ((BrightStyle) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBrightStyle'", NULL);
#endif
  {
   self->setBrightStyle(style);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBrightStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isTouchEnabled00
static int tolua_LuaExtern_UIWidget_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFocused of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isFocused00
static int tolua_LuaExtern_UIWidget_isFocused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFocused'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFocused();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFocused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFocused of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setFocused00
static int tolua_LuaExtern_UIWidget_setFocused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool fucosed = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFocused'", NULL);
#endif
  {
   self->setFocused(fucosed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFocused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZOrder of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setZOrder00
static int tolua_LuaExtern_UIWidget_setZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  int z = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZOrder'", NULL);
#endif
  {
   self->setZOrder(z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getZOrder of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getZOrder00
static int tolua_LuaExtern_UIWidget_getZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getZOrder'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getZOrder();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLeftInParent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getLeftInParent00
static int tolua_LuaExtern_UIWidget_getLeftInParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLeftInParent'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLeftInParent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLeftInParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBottomInParent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getBottomInParent00
static int tolua_LuaExtern_UIWidget_getBottomInParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBottomInParent'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getBottomInParent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBottomInParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRightInParent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getRightInParent00
static int tolua_LuaExtern_UIWidget_getRightInParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRightInParent'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRightInParent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRightInParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTopInParent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getTopInParent00
static int tolua_LuaExtern_UIWidget_getTopInParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTopInParent'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTopInParent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTopInParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_addChild00
static int tolua_LuaExtern_UIWidget_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* child = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->addChild(child);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_removeChild00
static int tolua_LuaExtern_UIWidget_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* child = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->removeChild(child);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeFromParent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_removeFromParent00
static int tolua_LuaExtern_UIWidget_removeFromParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeFromParent'", NULL);
#endif
  {
   self->removeFromParent();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeFromParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_removeAllChildren00
static int tolua_LuaExtern_UIWidget_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: disableUpdate of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_disableUpdate00
static int tolua_LuaExtern_UIWidget_disableUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'disableUpdate'", NULL);
#endif
  {
   self->disableUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'disableUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reorderChild of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_reorderChild00
static int tolua_LuaExtern_UIWidget_reorderChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* child = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reorderChild'", NULL);
#endif
  {
   self->reorderChild(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reorderChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildByName of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getChildByName00
static int tolua_LuaExtern_UIWidget_getChildByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildByName'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->getChildByName(name);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildByTag of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getChildByTag00
static int tolua_LuaExtern_UIWidget_getChildByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildByTag'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->getChildByTag(tag);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildren of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getChildren00
static int tolua_LuaExtern_UIWidget_getChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildren'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getChildren();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRenderer of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getRenderer00
static int tolua_LuaExtern_UIWidget_getRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addRenderer of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_addRenderer00
static int tolua_LuaExtern_UIWidget_addRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* renderer = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addRenderer'", NULL);
#endif
  {
   self->addRenderer(renderer,zOrder);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeRenderer of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_removeRenderer00
static int tolua_LuaExtern_UIWidget_removeRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* renderer = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeRenderer'", NULL);
#endif
  {
   self->removeRenderer(renderer,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setParent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setParent00
static int tolua_LuaExtern_UIWidget_setParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* parent = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setParent'", NULL);
#endif
  {
   self->setParent(parent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getParent00
static int tolua_LuaExtern_UIWidget_getParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParent'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->getParent();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTouchEventListener of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_addTouchEventListener00
static int tolua_LuaExtern_UIWidget_addTouchEventListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_TouchEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_TouchEvent selector = *((SEL_TouchEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTouchEventListener'", NULL);
#endif
  {
   self->addTouchEventListener(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTouchEventListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setPosition00
static int tolua_LuaExtern_UIWidget_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pos = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(*pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionPercent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setPositionPercent00
static int tolua_LuaExtern_UIWidget_setPositionPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* percent = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionPercent'", NULL);
#endif
  {
   self->setPositionPercent(*percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getPosition00
static int tolua_LuaExtern_UIWidget_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getPosition();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionPercent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getPositionPercent00
static int tolua_LuaExtern_UIWidget_getPositionPercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionPercent'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getPositionPercent();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionPercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionType of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setPositionType00
static int tolua_LuaExtern_UIWidget_setPositionType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  PositionType type = ((PositionType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionType'", NULL);
#endif
  {
   self->setPositionType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionType of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getPositionType00
static int tolua_LuaExtern_UIWidget_getPositionType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionType'", NULL);
#endif
  {
   PositionType tolua_ret = (PositionType)  self->getPositionType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setAnchorPoint00
static int tolua_LuaExtern_UIWidget_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(*pt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorPoint of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getAnchorPoint00
static int tolua_LuaExtern_UIWidget_getAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorPoint'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getAnchorPoint();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setScale00
static int tolua_LuaExtern_UIWidget_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  float fScale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(fScale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScale of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getScale00
static int tolua_LuaExtern_UIWidget_getScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleX of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setScaleX00
static int tolua_LuaExtern_UIWidget_setScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  float fScaleX = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleX'", NULL);
#endif
  {
   self->setScaleX(fScaleX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScaleX of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getScaleX00
static int tolua_LuaExtern_UIWidget_getScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScaleX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getScaleX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleY of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setScaleY00
static int tolua_LuaExtern_UIWidget_setScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  float fScaleY = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleY'", NULL);
#endif
  {
   self->setScaleY(fScaleY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScaleY of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getScaleY00
static int tolua_LuaExtern_UIWidget_getScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScaleY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getScaleY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotation of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setRotation00
static int tolua_LuaExtern_UIWidget_setRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  float rotation = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotation'", NULL);
#endif
  {
   self->setRotation(rotation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotation of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getRotation00
static int tolua_LuaExtern_UIWidget_getRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotation'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRotation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotationX of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setRotationX00
static int tolua_LuaExtern_UIWidget_setRotationX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  float rotationX = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotationX'", NULL);
#endif
  {
   self->setRotationX(rotationX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotationX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotationX of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getRotationX00
static int tolua_LuaExtern_UIWidget_getRotationX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotationX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRotationX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotationX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotationY of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setRotationY00
static int tolua_LuaExtern_UIWidget_setRotationY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  float rotationY = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotationY'", NULL);
#endif
  {
   self->setRotationY(rotationY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotationY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotationY of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getRotationY00
static int tolua_LuaExtern_UIWidget_getRotationY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotationY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRotationY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotationY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipX of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setFlipX00
static int tolua_LuaExtern_UIWidget_setFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool flipX = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipX'", NULL);
#endif
  {
   self->setFlipX(flipX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipX of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isFlipX00
static int tolua_LuaExtern_UIWidget_isFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipX();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipY of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setFlipY00
static int tolua_LuaExtern_UIWidget_setFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool flipY = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipY'", NULL);
#endif
  {
   self->setFlipY(flipY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipY of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isFlipY00
static int tolua_LuaExtern_UIWidget_isFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipY();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setColor00
static int tolua_LuaExtern_UIWidget_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Color3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const Color3B* color = ((const Color3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getColor00
static int tolua_LuaExtern_UIWidget_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setOpacity00
static int tolua_LuaExtern_UIWidget_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  int opacity = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getOpacity00
static int tolua_LuaExtern_UIWidget_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getOpacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isCascadeOpacityEnabled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isCascadeOpacityEnabled00
static int tolua_LuaExtern_UIWidget_isCascadeOpacityEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCascadeOpacityEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isCascadeOpacityEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCascadeOpacityEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCascadeOpacityEnabled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setCascadeOpacityEnabled00
static int tolua_LuaExtern_UIWidget_setCascadeOpacityEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool cascadeOpacityEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCascadeOpacityEnabled'", NULL);
#endif
  {
   self->setCascadeOpacityEnabled(cascadeOpacityEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCascadeOpacityEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isCascadeColorEnabled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isCascadeColorEnabled00
static int tolua_LuaExtern_UIWidget_isCascadeColorEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCascadeColorEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isCascadeColorEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCascadeColorEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCascadeColorEnabled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setCascadeColorEnabled00
static int tolua_LuaExtern_UIWidget_setCascadeColorEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool cascadeColorEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCascadeColorEnabled'", NULL);
#endif
  {
   self->setCascadeColorEnabled(cascadeColorEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCascadeColorEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlendFunc of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setBlendFunc00
static int tolua_LuaExtern_UIWidget_setBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccBlendFunc",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  ccBlendFunc blendFunc = *((ccBlendFunc*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendFunc'", NULL);
#endif
  {
   self->setBlendFunc(blendFunc);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setActionManager of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setActionManager00
static int tolua_LuaExtern_UIWidget_setActionManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCActionManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCActionManager* actionManager = ((CCActionManager*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setActionManager'", NULL);
#endif
  {
   self->setActionManager(actionManager);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setActionManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActionManager of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getActionManager00
static int tolua_LuaExtern_UIWidget_getActionManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActionManager'", NULL);
#endif
  {
   CCActionManager* tolua_ret = (CCActionManager*)  self->getActionManager();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCActionManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActionManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: runAction of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_runAction00
static int tolua_LuaExtern_UIWidget_runAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCAction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCAction* action = ((CCAction*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'runAction'", NULL);
#endif
  {
   CCAction* tolua_ret = (CCAction*)  self->runAction(action);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCAction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'runAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopAllActions of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_stopAllActions00
static int tolua_LuaExtern_UIWidget_stopAllActions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopAllActions'", NULL);
#endif
  {
   self->stopAllActions();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopAllActions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopAction of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_stopAction00
static int tolua_LuaExtern_UIWidget_stopAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCAction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCAction* action = ((CCAction*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopAction'", NULL);
#endif
  {
   self->stopAction(action);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopActionByTag of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_stopActionByTag00
static int tolua_LuaExtern_UIWidget_stopActionByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopActionByTag'", NULL);
#endif
  {
   self->stopActionByTag(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopActionByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActionByTag of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getActionByTag00
static int tolua_LuaExtern_UIWidget_getActionByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActionByTag'", NULL);
#endif
  {
   CCAction* tolua_ret = (CCAction*)  self->getActionByTag(tag);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCAction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActionByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: didNotSelectSelf of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_didNotSelectSelf00
static int tolua_LuaExtern_UIWidget_didNotSelectSelf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'didNotSelectSelf'", NULL);
#endif
  {
   self->didNotSelectSelf();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'didNotSelectSelf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clippingParentAreaContainPoint of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_clippingParentAreaContainPoint00
static int tolua_LuaExtern_UIWidget_clippingParentAreaContainPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clippingParentAreaContainPoint'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->clippingParentAreaContainPoint(*pt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clippingParentAreaContainPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: checkChildInfo of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_checkChildInfo00
static int tolua_LuaExtern_UIWidget_checkChildInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  int handleState = ((int)  tolua_tonumber(tolua_S,2,0));
  UIWidget* sender = ((UIWidget*)  tolua_tousertype(tolua_S,3,0));
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'checkChildInfo'", NULL);
#endif
  {
   self->checkChildInfo(handleState,sender,*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'checkChildInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchStartPos of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getTouchStartPos00
static int tolua_LuaExtern_UIWidget_getTouchStartPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchStartPos'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getTouchStartPos();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchStartPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchMovePos of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getTouchMovePos00
static int tolua_LuaExtern_UIWidget_getTouchMovePos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchMovePos'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getTouchMovePos();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchMovePos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchEndPos of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getTouchEndPos00
static int tolua_LuaExtern_UIWidget_getTouchEndPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchEndPos'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getTouchEndPos();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchEndPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTag of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setTag00
static int tolua_LuaExtern_UIWidget_setTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTag'", NULL);
#endif
  {
   self->setTag(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTag of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getTag00
static int tolua_LuaExtern_UIWidget_getTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setName of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setName00
static int tolua_LuaExtern_UIWidget_setName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setName'", NULL);
#endif
  {
   self->setName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getName00
static int tolua_LuaExtern_UIWidget_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidgetType of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getWidgetType00
static int tolua_LuaExtern_UIWidget_getWidgetType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidgetType'", NULL);
#endif
  {
   WidgetType tolua_ret = (WidgetType)  self->getWidgetType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidgetType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSize of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setSize00
static int tolua_LuaExtern_UIWidget_setSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSize'", NULL);
#endif
  {
   self->setSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSizePercent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setSizePercent00
static int tolua_LuaExtern_UIWidget_setSizePercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* percent = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizePercent'", NULL);
#endif
  {
   self->setSizePercent(*percent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizePercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSizeType of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setSizeType00
static int tolua_LuaExtern_UIWidget_setSizeType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  SizeType type = ((SizeType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizeType'", NULL);
#endif
  {
   self->setSizeType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizeType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSizeType of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getSizeType00
static int tolua_LuaExtern_UIWidget_getSizeType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizeType'", NULL);
#endif
  {
   SizeType tolua_ret = (SizeType)  self->getSizeType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizeType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSize of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getSize00
static int tolua_LuaExtern_UIWidget_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSizePercent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getSizePercent00
static int tolua_LuaExtern_UIWidget_getSizePercent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizePercent'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getSizePercent();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizePercent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hitTest of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_hitTest00
static int tolua_LuaExtern_UIWidget_hitTest00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hitTest'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hitTest(*pt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hitTest'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchBegan of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_onTouchBegan00
static int tolua_LuaExtern_UIWidget_onTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onTouchBegan(*touchPoint);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchMoved of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_onTouchMoved00
static int tolua_LuaExtern_UIWidget_onTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchMoved'", NULL);
#endif
  {
   self->onTouchMoved(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchEnded of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_onTouchEnded00
static int tolua_LuaExtern_UIWidget_onTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchEnded'", NULL);
#endif
  {
   self->onTouchEnded(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchCancelled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_onTouchCancelled00
static int tolua_LuaExtern_UIWidget_onTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchCancelled'", NULL);
#endif
  {
   self->onTouchCancelled(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTouchLongClicked of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_onTouchLongClicked00
static int tolua_LuaExtern_UIWidget_onTouchLongClicked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* touchPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTouchLongClicked'", NULL);
#endif
  {
   self->onTouchLongClicked(*touchPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTouchLongClicked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLayoutParameter of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setLayoutParameter00
static int tolua_LuaExtern_UIWidget_setLayoutParameter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"LayoutParameter",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  LayoutParameter* parameter = ((LayoutParameter*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLayoutParameter'", NULL);
#endif
  {
   self->setLayoutParameter(parameter);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLayoutParameter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayoutParameter of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getLayoutParameter00
static int tolua_LuaExtern_UIWidget_getLayoutParameter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayoutParameter'", NULL);
#endif
  {
   LayoutParameter* tolua_ret = (LayoutParameter*)  self->getLayoutParameter();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"LayoutParameter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayoutParameter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ignoreContentAdaptWithSize of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_ignoreContentAdaptWithSize00
static int tolua_LuaExtern_UIWidget_ignoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool ignore = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ignoreContentAdaptWithSize'", NULL);
#endif
  {
   self->ignoreContentAdaptWithSize(ignore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ignoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isIgnoreContentAdaptWithSize of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isIgnoreContentAdaptWithSize00
static int tolua_LuaExtern_UIWidget_isIgnoreContentAdaptWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isIgnoreContentAdaptWithSize'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isIgnoreContentAdaptWithSize();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isIgnoreContentAdaptWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWorldPosition of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getWorldPosition00
static int tolua_LuaExtern_UIWidget_getWorldPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWorldPosition'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getWorldPosition();
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
 tolua_error(tolua_S,"#ferror in function 'getWorldPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: convertToWorldSpace of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_convertToWorldSpace00
static int tolua_LuaExtern_UIWidget_convertToWorldSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pt = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'convertToWorldSpace'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->convertToWorldSpace(*pt);
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
 tolua_error(tolua_S,"#ferror in function 'convertToWorldSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVirtualRenderer of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getVirtualRenderer00
static int tolua_LuaExtern_UIWidget_getVirtualRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVirtualRenderer'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getVirtualRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVirtualRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUpdateEnabled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setUpdateEnabled00
static int tolua_LuaExtern_UIWidget_setUpdateEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUpdateEnabled'", NULL);
#endif
  {
   self->setUpdateEnabled(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUpdateEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isUpdateEnabled of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isUpdateEnabled00
static int tolua_LuaExtern_UIWidget_isUpdateEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isUpdateEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isUpdateEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isUpdateEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getContentSize00
static int tolua_LuaExtern_UIWidget_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContentSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getDescription00
static int tolua_LuaExtern_UIWidget_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const UIWidget* self = (const UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnter of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_onEnter00
static int tolua_LuaExtern_UIWidget_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_onExit00
static int tolua_LuaExtern_UIWidget_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnable of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setTouchEnable00
static int tolua_LuaExtern_UIWidget_setTouchEnable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
  bool containChildren = ((bool)  tolua_toboolean(tolua_S,3,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnable'", NULL);
#endif
  {
   self->setTouchEnable(enabled,containChildren);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: disable of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_disable00
static int tolua_LuaExtern_UIWidget_disable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool containChildren = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'disable'", NULL);
#endif
  {
   self->disable(containChildren);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'disable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: active of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_active00
static int tolua_LuaExtern_UIWidget_active00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool containChildren = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'active'", NULL);
#endif
  {
   self->active(containChildren);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'active'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isActive of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_isActive00
static int tolua_LuaExtern_UIWidget_isActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isActive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isActive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBright of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setBright01
static int tolua_LuaExtern_UIWidget_setBright01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool bright = ((bool)  tolua_toboolean(tolua_S,2,0));
  bool containChild = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBright'", NULL);
#endif
  {
   self->setBright(bright,containChild);
  }
 }
 return 0;
tolua_lerror:
 return tolua_LuaExtern_UIWidget_setBright00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRect of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getRect00
static int tolua_LuaExtern_UIWidget_getRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRect'", NULL);
#endif
  {
   CCRect tolua_ret = (CCRect)  self->getRect();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCRect));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValidNode of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getValidNode00
static int tolua_LuaExtern_UIWidget_getValidNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValidNode'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getValidNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValidNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWidgetZOrder of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setWidgetZOrder00
static int tolua_LuaExtern_UIWidget_setWidgetZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  int z = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWidgetZOrder'", NULL);
#endif
  {
   self->setWidgetZOrder(z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWidgetZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidgetZOrder of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getWidgetZOrder00
static int tolua_LuaExtern_UIWidget_getWidgetZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidgetZOrder'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getWidgetZOrder();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidgetZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRelativeLeftPos of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getRelativeLeftPos00
static int tolua_LuaExtern_UIWidget_getRelativeLeftPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeLeftPos'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRelativeLeftPos();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeLeftPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRelativeBottomPos of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getRelativeBottomPos00
static int tolua_LuaExtern_UIWidget_getRelativeBottomPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeBottomPos'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRelativeBottomPos();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeBottomPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRelativeRightPos of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getRelativeRightPos00
static int tolua_LuaExtern_UIWidget_getRelativeRightPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeRightPos'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRelativeRightPos();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeRightPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRelativeTopPos of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getRelativeTopPos00
static int tolua_LuaExtern_UIWidget_getRelativeTopPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRelativeTopPos'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRelativeTopPos();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRelativeTopPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContainerNode of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getContainerNode00
static int tolua_LuaExtern_UIWidget_getContainerNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContainerNode'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getContainerNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContainerNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWidgetParent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setWidgetParent00
static int tolua_LuaExtern_UIWidget_setWidgetParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* parent = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWidgetParent'", NULL);
#endif
  {
   self->setWidgetParent(parent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWidgetParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidgetParent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getWidgetParent00
static int tolua_LuaExtern_UIWidget_getWidgetParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidgetParent'", NULL);
#endif
  {
   UIWidget* tolua_ret = (UIWidget*)  self->getWidgetParent();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIWidget");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidgetParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWidgetTag of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setWidgetTag00
static int tolua_LuaExtern_UIWidget_setWidgetTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWidgetTag'", NULL);
#endif
  {
   self->setWidgetTag(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWidgetTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidgetTag of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getWidgetTag00
static int tolua_LuaExtern_UIWidget_getWidgetTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidgetTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getWidgetTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidgetTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addCCNode of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_addCCNode00
static int tolua_LuaExtern_UIWidget_addCCNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addCCNode'", NULL);
#endif
  {
   self->addCCNode(node);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addCCNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeCCNode of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_removeCCNode00
static int tolua_LuaExtern_UIWidget_removeCCNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeCCNode'", NULL);
#endif
  {
   self->removeCCNode(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeCCNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPushDownEvent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_addPushDownEvent00
static int tolua_LuaExtern_UIWidget_addPushDownEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_PushEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_PushEvent selector = *((SEL_PushEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPushDownEvent'", NULL);
#endif
  {
   self->addPushDownEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPushDownEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addMoveEvent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_addMoveEvent00
static int tolua_LuaExtern_UIWidget_addMoveEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_MoveEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_MoveEvent selector = *((SEL_MoveEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addMoveEvent'", NULL);
#endif
  {
   self->addMoveEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addMoveEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addReleaseEvent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_addReleaseEvent00
static int tolua_LuaExtern_UIWidget_addReleaseEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_ReleaseEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_ReleaseEvent selector = *((SEL_ReleaseEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addReleaseEvent'", NULL);
#endif
  {
   self->addReleaseEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addReleaseEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addCancelEvent of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_addCancelEvent00
static int tolua_LuaExtern_UIWidget_addCancelEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SEL_CancelEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  CCObject* target = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  SEL_CancelEvent selector = *((SEL_CancelEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addCancelEvent'", NULL);
#endif
  {
   self->addCancelEvent(target,selector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addCancelEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_removeChild01
static int tolua_LuaExtern_UIWidget_removeChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  UIWidget* child = ((UIWidget*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->removeChild(child,cleanup);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_UIWidget_removeChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeFromParentAndCleanup of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_removeFromParentAndCleanup00
static int tolua_LuaExtern_UIWidget_removeFromParentAndCleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeFromParentAndCleanup'", NULL);
#endif
  {
   self->removeFromParentAndCleanup(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeFromParentAndCleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildrenAndCleanUp of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_removeAllChildrenAndCleanUp00
static int tolua_LuaExtern_UIWidget_removeAllChildrenAndCleanUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildrenAndCleanUp'", NULL);
#endif
  {
   self->removeAllChildrenAndCleanUp(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildrenAndCleanUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setActionTag of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_setActionTag00
static int tolua_LuaExtern_UIWidget_setActionTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setActionTag'", NULL);
#endif
  {
   self->setActionTag(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setActionTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActionTag of class  UIWidget */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_UIWidget_getActionTag00
static int tolua_LuaExtern_UIWidget_getActionTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"UIWidget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  UIWidget* self = (UIWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActionTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getActionTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActionTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  GUIRenderer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_GUIRenderer_new00
static int tolua_LuaExtern_GUIRenderer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GUIRenderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GUIRenderer* tolua_ret = (GUIRenderer*)  Mtolua_new((GUIRenderer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GUIRenderer");
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

/* method: new_local of class  GUIRenderer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_GUIRenderer_new00_local
static int tolua_LuaExtern_GUIRenderer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GUIRenderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GUIRenderer* tolua_ret = (GUIRenderer*)  Mtolua_new((GUIRenderer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GUIRenderer");
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

/* method: delete of class  GUIRenderer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_GUIRenderer_delete00
static int tolua_LuaExtern_GUIRenderer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GUIRenderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GUIRenderer* self = (GUIRenderer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: visit of class  GUIRenderer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_GUIRenderer_visit00
static int tolua_LuaExtern_GUIRenderer_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GUIRenderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GUIRenderer* self = (GUIRenderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  GUIRenderer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_GUIRenderer_create00
static int tolua_LuaExtern_GUIRenderer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"GUIRenderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   GUIRenderer* tolua_ret = (GUIRenderer*)  GUIRenderer::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GUIRenderer");
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

/* method: setEnabled of class  GUIRenderer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_GUIRenderer_setEnabled00
static int tolua_LuaExtern_GUIRenderer_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GUIRenderer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GUIRenderer* self = (GUIRenderer*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  GUIRenderer */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_GUIRenderer_isEnabled00
static int tolua_LuaExtern_GUIRenderer_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GUIRenderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GUIRenderer* self = (const GUIRenderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_create00
static int tolua_LuaExtern_Armature_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Armature* tolua_ret = (Armature*)  Armature::create();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Armature");
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

/* method: create of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_create01
static int tolua_LuaExtern_Armature_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   Armature* tolua_ret = (Armature*)  Armature::create(name);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Armature");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_Armature_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_create02
static int tolua_LuaExtern_Armature_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"armature::Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  armature::Bone* parentBone = ((armature::Bone*)  tolua_tousertype(tolua_S,3,0));
  {
   Armature* tolua_ret = (Armature*)  Armature::create(name,parentBone);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Armature");
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_Armature_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_new00
static int tolua_LuaExtern_Armature_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Armature* tolua_ret = (Armature*)  Mtolua_new((Armature)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Armature");
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

/* method: new_local of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_new00_local
static int tolua_LuaExtern_Armature_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Armature* tolua_ret = (Armature*)  Mtolua_new((Armature)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"Armature");
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

/* method: delete of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_delete00
static int tolua_LuaExtern_Armature_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: init of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_init00
static int tolua_LuaExtern_Armature_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: init of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_init01
static int tolua_LuaExtern_Armature_init01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_Armature_init00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_init02
static int tolua_LuaExtern_Armature_init02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"armature::Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  armature::Bone* parentBone = ((armature::Bone*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(name,parentBone);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_LuaExtern_Armature_init01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_addBone00
static int tolua_LuaExtern_Armature_addBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"armature::Bone",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  armature::Bone* bone = ((armature::Bone*)  tolua_tousertype(tolua_S,2,0));
  const char* parentName = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBone'", NULL);
#endif
  {
   self->addBone(bone,parentName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getBone00
static int tolua_LuaExtern_Armature_getBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Armature",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Armature* self = (const Armature*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBone'", NULL);
#endif
  {
   armature::Bone* tolua_ret = (armature::Bone*)  self->getBone(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"armature::Bone");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: changeBoneParent of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_changeBoneParent00
static int tolua_LuaExtern_Armature_changeBoneParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"armature::Bone",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  armature::Bone* bone = ((armature::Bone*)  tolua_tousertype(tolua_S,2,0));
  const char* parentName = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'changeBoneParent'", NULL);
#endif
  {
   self->changeBoneParent(bone,parentName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'changeBoneParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_removeBone00
static int tolua_LuaExtern_Armature_removeBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"armature::Bone",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  armature::Bone* bone = ((armature::Bone*)  tolua_tousertype(tolua_S,2,0));
  bool recursion = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBone'", NULL);
#endif
  {
   self->removeBone(bone,recursion);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoneDic of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getBoneDic00
static int tolua_LuaExtern_Armature_getBoneDic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoneDic'", NULL);
#endif
  {
   Dictionary* tolua_ret = (Dictionary*)  self->getBoneDic();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Dictionary");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoneDic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoneAtPoint of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getBoneAtPoint00
static int tolua_LuaExtern_Armature_getBoneAtPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoneAtPoint'", NULL);
#endif
  {
   armature::Bone* tolua_ret = (armature::Bone*)  self->getBoneAtPoint(x,y);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"armature::Bone");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoneAtPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateOffsetPoint of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_updateOffsetPoint00
static int tolua_LuaExtern_Armature_updateOffsetPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateOffsetPoint'", NULL);
#endif
  {
   self->updateOffsetPoint();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateOffsetPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: visit of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_visit00
static int tolua_LuaExtern_Armature_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_update00
static int tolua_LuaExtern_Armature_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
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

/* method: draw of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_draw00
static int tolua_LuaExtern_Armature_draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'draw'", NULL);
#endif
  {
   self->draw();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodeToParentTransform of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getNodeToParentTransform00
static int tolua_LuaExtern_Armature_getNodeToParentTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Armature* self = (const Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodeToParentTransform'", NULL);
#endif
  {
   AffineTransform tolua_ret = (AffineTransform)  self->getNodeToParentTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AffineTransform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AffineTransform));
     tolua_pushusertype(tolua_S,tolua_obj,"AffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodeToParentTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoundingBox of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getBoundingBox00
static int tolua_LuaExtern_Armature_getBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Armature* self = (const Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoundingBox'", NULL);
#endif
  {
   Rect tolua_ret = (Rect)  self->getBoundingBox();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Rect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Rect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Rect));
     tolua_pushusertype(tolua_S,tolua_obj,"Rect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlendFunc of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_setBlendFunc00
static int tolua_LuaExtern_Armature_setBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const BlendFunc",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  const BlendFunc* blendFunc = ((const BlendFunc*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendFunc'", NULL);
#endif
  {
   self->setBlendFunc(*blendFunc);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBlendFunc of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getBlendFunc00
static int tolua_LuaExtern_Armature_getBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Armature* self = (const Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBlendFunc'", NULL);
#endif
  {
   const BlendFunc& tolua_ret = (const BlendFunc&)  self->getBlendFunc();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const BlendFunc");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnimation of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getAnimation00
static int tolua_LuaExtern_Armature_getAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Armature* self = (const Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnimation'", NULL);
#endif
  {
   ArmatureAnimation* tolua_ret = (ArmatureAnimation*)  self->getAnimation();
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ArmatureAnimation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnimation of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_setAnimation00
static int tolua_LuaExtern_Armature_setAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  ArmatureAnimation* arm = ((ArmatureAnimation*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimation'", NULL);
#endif
  {
   self->setAnimation(arm);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getArmatureData of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getArmatureData00
static int tolua_LuaExtern_Armature_getArmatureData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Armature* self = (const Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getArmatureData'", NULL);
#endif
  {
   ArmatureData* tolua_ret = (ArmatureData*)  self->getArmatureData();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ArmatureData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getArmatureData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setArmatureData of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_setArmatureData00
static int tolua_LuaExtern_Armature_setArmatureData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ArmatureData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  ArmatureData* ad = ((ArmatureData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setArmatureData'", NULL);
#endif
  {
   self->setArmatureData(ad);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setArmatureData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBatchNode of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getBatchNode00
static int tolua_LuaExtern_Armature_getBatchNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Armature* self = (const Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBatchNode'", NULL);
#endif
  {
   BatchNode* tolua_ret = (BatchNode*)  self->getBatchNode();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"BatchNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBatchNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBatchNode of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_setBatchNode00
static int tolua_LuaExtern_Armature_setBatchNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"BatchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  BatchNode* bn = ((BatchNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBatchNode'", NULL);
#endif
  {
   self->setBatchNode(bn);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBatchNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getName00
static int tolua_LuaExtern_Armature_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Armature* self = (const Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setName of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_setName00
static int tolua_LuaExtern_Armature_setName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setName'", NULL);
#endif
  {
   self->setName(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureAtlas of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getTextureAtlas00
static int tolua_LuaExtern_Armature_getTextureAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Armature* self = (const Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureAtlas'", NULL);
#endif
  {
   TextureAtlas* tolua_ret = (TextureAtlas*)  self->getTextureAtlas();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TextureAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureAtlas of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_setTextureAtlas00
static int tolua_LuaExtern_Armature_setTextureAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"TextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  TextureAtlas* tex = ((TextureAtlas*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureAtlas'", NULL);
#endif
  {
   self->setTextureAtlas(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParentBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_getParentBone00
static int tolua_LuaExtern_Armature_getParentBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Armature* self = (const Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParentBone'", NULL);
#endif
  {
   armature::Bone* tolua_ret = (armature::Bone*)  self->getParentBone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"armature::Bone");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParentBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setParentBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_Armature_setParentBone00
static int tolua_LuaExtern_Armature_setParentBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"armature::Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  armature::Bone* tex = ((armature::Bone*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setParentBone'", NULL);
#endif
  {
   self->setParentBone(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setParentBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCBlendProtocol__ of class  Armature */
#ifndef TOLUA_DISABLE_tolua_get_Armature___CCBlendProtocol__
static int tolua_get_Armature___CCBlendProtocol__(lua_State* tolua_S)
{
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCBlendProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCBlendProtocol*>(self), "CCBlendProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CCBlendProtocol*)self), "CCBlendProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_create00
static int tolua_LuaExtern_ArmatureAnimation_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* armature = ((Armature*)  tolua_tousertype(tolua_S,2,0));
  {
   ArmatureAnimation* tolua_ret = (ArmatureAnimation*)  ArmatureAnimation::create(armature);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ArmatureAnimation");
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

/* method: new of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_new00
static int tolua_LuaExtern_ArmatureAnimation_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ArmatureAnimation* tolua_ret = (ArmatureAnimation*)  Mtolua_new((ArmatureAnimation)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ArmatureAnimation");
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

/* method: new_local of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_new00_local
static int tolua_LuaExtern_ArmatureAnimation_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ArmatureAnimation* tolua_ret = (ArmatureAnimation*)  Mtolua_new((ArmatureAnimation)());
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"ArmatureAnimation");
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

/* method: delete of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_delete00
static int tolua_LuaExtern_ArmatureAnimation_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ArmatureAnimation* self = (ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
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

/* method: init of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_init00
static int tolua_LuaExtern_ArmatureAnimation_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ArmatureAnimation* self = (ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
  Armature* armature = ((Armature*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init(armature);
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

/* method: setAnimationScale of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_setAnimationScale00
static int tolua_LuaExtern_ArmatureAnimation_setAnimationScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ArmatureAnimation* self = (ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
  float animationScale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimationScale'", NULL);
#endif
  {
   self->setAnimationScale(animationScale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimationScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: play of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_play00
static int tolua_LuaExtern_ArmatureAnimation_play00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ArmatureAnimation* self = (ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
  const char* animationName = ((const char*)  tolua_tostring(tolua_S,2,0));
  int durationTo = ((int)  tolua_tonumber(tolua_S,3,-1));
  int durationTween = ((int)  tolua_tonumber(tolua_S,4,-1));
  int loop = ((int)  tolua_tonumber(tolua_S,5,-1));
  int tweenEasing = ((int)  tolua_tonumber(tolua_S,6,TWEEN_EASING_MAX));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'play'", NULL);
#endif
  {
   self->play(animationName,durationTo,durationTween,loop,tweenEasing);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'play'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: playByIndex of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_playByIndex00
static int tolua_LuaExtern_ArmatureAnimation_playByIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ArmatureAnimation* self = (ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
  int animationIndex = ((int)  tolua_tonumber(tolua_S,2,0));
  int durationTo = ((int)  tolua_tonumber(tolua_S,3,-1));
  int durationTween = ((int)  tolua_tonumber(tolua_S,4,-1));
  int loop = ((int)  tolua_tonumber(tolua_S,5,-1));
  int tweenEasing = ((int)  tolua_tonumber(tolua_S,6,TWEEN_EASING_MAX));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'playByIndex'", NULL);
#endif
  {
   self->playByIndex(animationIndex,durationTo,durationTween,loop,tweenEasing);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'playByIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resume of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_resume00
static int tolua_LuaExtern_ArmatureAnimation_resume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ArmatureAnimation* self = (ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resume'", NULL);
#endif
  {
   self->resume();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stop of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_stop00
static int tolua_LuaExtern_ArmatureAnimation_stop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ArmatureAnimation* self = (ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stop'", NULL);
#endif
  {
   self->stop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMovementCount of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_getMovementCount00
static int tolua_LuaExtern_ArmatureAnimation_getMovementCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ArmatureAnimation* self = (ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMovementCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMovementCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMovementCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_update00
static int tolua_LuaExtern_ArmatureAnimation_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ArmatureAnimation* self = (ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getAnimationData of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_getAnimationData00
static int tolua_LuaExtern_ArmatureAnimation_getAnimationData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ArmatureAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ArmatureAnimation* self = (const ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnimationData'", NULL);
#endif
  {
   AnimationData* tolua_ret = (AnimationData*)  self->getAnimationData();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnimationData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnimationData of class  ArmatureAnimation */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_ArmatureAnimation_setAnimationData00
static int tolua_LuaExtern_ArmatureAnimation_setAnimationData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ArmatureAnimation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"AnimationData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ArmatureAnimation* self = (ArmatureAnimation*)  tolua_tousertype(tolua_S,1,0);
  AnimationData* ad = ((AnimationData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimationData'", NULL);
#endif
  {
   self->setAnimationData(ad);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimationData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIButton");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UICheckBox");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIImageView");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabel");
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

/* method: getChildUITextAreaByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUITextAreaByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUITextAreaByName00(lua_State* tolua_S)
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
   UILabel* tolua_ret = (UILabel*)  LuaCocoStudioConversion::getChildUITextAreaByName(name,pParent);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUITextAreaByName'.",&tolua_err);
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabelAtlas");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabelBMFont");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILoadingBar");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UISlider");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UITextField");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIScrollView");
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

/* method: getChildUIDragPanelByName of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_getChildUIDragPanelByName00
static int tolua_LuaExtern_LuaCocoStudioConversion_getChildUIDragPanelByName00(lua_State* tolua_S)
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
   UIDragPanel* tolua_ret = (UIDragPanel*)  LuaCocoStudioConversion::getChildUIDragPanelByName(name,pParent);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIDragPanel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildUIDragPanelByName'.",&tolua_err);
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIListView");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIPageView");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIButton");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UICheckBox");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIImageView");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabel");
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

/* method: toUITextArea of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUITextArea00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUITextArea00(lua_State* tolua_S)
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
   UILabel* tolua_ret = (UILabel*)  LuaCocoStudioConversion::toUITextArea(pointer);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUITextArea'.",&tolua_err);
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabelAtlas");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILabelBMFont");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UILoadingBar");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UISlider");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UITextField");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIScrollView");
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

/* method: toUIDragPanel of class  LuaCocoStudioConversion */
#ifndef TOLUA_DISABLE_tolua_LuaExtern_LuaCocoStudioConversion_toUIDragPanel00
static int tolua_LuaExtern_LuaCocoStudioConversion_toUIDragPanel00(lua_State* tolua_S)
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
   UIDragPanel* tolua_ret = (UIDragPanel*)  LuaCocoStudioConversion::toUIDragPanel(pointer);
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIDragPanel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUIDragPanel'.",&tolua_err);
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIListView");
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
    int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"UIPageView");
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

/* Open function */
TOLUA_API int tolua_LuaExtern_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"CCComRender","CCComRender","cocos2d::CCComponent",NULL);
  tolua_beginmodule(tolua_S,"CCComRender");
   tolua_function(tolua_S,"onEnter",tolua_LuaExtern_CCComRender_onEnter00);
   tolua_function(tolua_S,"onExit",tolua_LuaExtern_CCComRender_onExit00);
   tolua_function(tolua_S,"getNode",tolua_LuaExtern_CCComRender_getNode00);
   tolua_function(tolua_S,"setNode",tolua_LuaExtern_CCComRender_setNode00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_CCComRender_create00);
   tolua_function(tolua_S,"setName",tolua_LuaExtern_CCComRender_setName00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"cs",0);
  tolua_beginmodule(tolua_S,"cs");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CCCSJsonDictionary","cs::CCCSJsonDictionary","",tolua_collect_cs__CCCSJsonDictionary);
   #else
   tolua_cclass(tolua_S,"CCCSJsonDictionary","cs::CCCSJsonDictionary","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CCCSJsonDictionary");
    tolua_function(tolua_S,"new",tolua_LuaExtern_cs_CCCSJsonDictionary_new00);
    tolua_function(tolua_S,"new_local",tolua_LuaExtern_cs_CCCSJsonDictionary_new00_local);
    tolua_function(tolua_S,".call",tolua_LuaExtern_cs_CCCSJsonDictionary_new00_local);
    tolua_function(tolua_S,"delete",tolua_LuaExtern_cs_CCCSJsonDictionary_delete00);
    tolua_function(tolua_S,"initWithDescription",tolua_LuaExtern_cs_CCCSJsonDictionary_initWithDescription00);
    tolua_function(tolua_S,"insertItem",tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem00);
    tolua_function(tolua_S,"insertItem",tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem01);
    tolua_function(tolua_S,"insertItem",tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem02);
    tolua_function(tolua_S,"insertItem",tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem03);
    tolua_function(tolua_S,"insertItem",tolua_LuaExtern_cs_CCCSJsonDictionary_insertItem04);
    tolua_function(tolua_S,"deleteItem",tolua_LuaExtern_cs_CCCSJsonDictionary_deleteItem00);
    tolua_function(tolua_S,"cleanUp",tolua_LuaExtern_cs_CCCSJsonDictionary_cleanUp00);
    tolua_function(tolua_S,"isKeyValidate",tolua_LuaExtern_cs_CCCSJsonDictionary_isKeyValidate00);
    tolua_function(tolua_S,"getItemIntValue",tolua_LuaExtern_cs_CCCSJsonDictionary_getItemIntValue00);
    tolua_function(tolua_S,"getItemFloatValue",tolua_LuaExtern_cs_CCCSJsonDictionary_getItemFloatValue00);
    tolua_function(tolua_S,"getItemStringValue",tolua_LuaExtern_cs_CCCSJsonDictionary_getItemStringValue00);
    tolua_function(tolua_S,"getItemBoolvalue",tolua_LuaExtern_cs_CCCSJsonDictionary_getItemBoolvalue00);
    tolua_function(tolua_S,"getSubDictionary",tolua_LuaExtern_cs_CCCSJsonDictionary_getSubDictionary00);
    tolua_function(tolua_S,"getDescription",tolua_LuaExtern_cs_CCCSJsonDictionary_getDescription00);
    tolua_function(tolua_S,"insertItemToArray",tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray00);
    tolua_function(tolua_S,"insertItemToArray",tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray01);
    tolua_function(tolua_S,"insertItemToArray",tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray02);
    tolua_function(tolua_S,"insertItemToArray",tolua_LuaExtern_cs_CCCSJsonDictionary_insertItemToArray03);
    tolua_function(tolua_S,"getArrayItemCount",tolua_LuaExtern_cs_CCCSJsonDictionary_getArrayItemCount00);
    tolua_function(tolua_S,"getIntValueFromArray",tolua_LuaExtern_cs_CCCSJsonDictionary_getIntValueFromArray00);
    tolua_function(tolua_S,"getFloatValueFromArray",tolua_LuaExtern_cs_CCCSJsonDictionary_getFloatValueFromArray00);
    tolua_function(tolua_S,"getBoolValueFromArray",tolua_LuaExtern_cs_CCCSJsonDictionary_getBoolValueFromArray00);
    tolua_function(tolua_S,"getStringValueFromArray",tolua_LuaExtern_cs_CCCSJsonDictionary_getStringValueFromArray00);
    tolua_function(tolua_S,"getSubItemFromArray",tolua_LuaExtern_cs_CCCSJsonDictionary_getSubItemFromArray00);
    tolua_function(tolua_S,"getItemTypeFromArray",tolua_LuaExtern_cs_CCCSJsonDictionary_getItemTypeFromArray00);
    tolua_function(tolua_S,"getItemCount",tolua_LuaExtern_cs_CCCSJsonDictionary_getItemCount00);
    tolua_function(tolua_S,"getItemType",tolua_LuaExtern_cs_CCCSJsonDictionary_getItemType00);
    tolua_function(tolua_S,"getItemType",tolua_LuaExtern_cs_CCCSJsonDictionary_getItemType01);
    tolua_function(tolua_S,"getAllMemberNames",tolua_LuaExtern_cs_CCCSJsonDictionary_getAllMemberNames00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCCSComAttribute","CCCSComAttribute","CCComAttribute",NULL);
  tolua_beginmodule(tolua_S,"CCCSComAttribute");
   tolua_function(tolua_S,"init",tolua_LuaExtern_CCCSComAttribute_init00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_CCCSComAttribute_create00);
   tolua_function(tolua_S,"getDict",tolua_LuaExtern_CCCSComAttribute_getDict00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCCSComAudio","CCCSComAudio","CCComAudio",NULL);
  tolua_beginmodule(tolua_S,"CCCSComAudio");
   tolua_function(tolua_S,"init",tolua_LuaExtern_CCCSComAudio_init00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_CCCSComAudio_create00);
   tolua_function(tolua_S,"setFile",tolua_LuaExtern_CCCSComAudio_setFile00);
   tolua_function(tolua_S,"getFile",tolua_LuaExtern_CCCSComAudio_getFile00);
   tolua_function(tolua_S,"setLoop",tolua_LuaExtern_CCCSComAudio_setLoop00);
   tolua_function(tolua_S,"isLoop",tolua_LuaExtern_CCCSComAudio_isLoop00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"cs",0);
  tolua_beginmodule(tolua_S,"cs");
   tolua_constant(tolua_S,"ccEDIC_TYPENULL",cs::ccEDIC_TYPENULL);
   tolua_constant(tolua_S,"ccEDIC_TYPEINT",cs::ccEDIC_TYPEINT);
   tolua_constant(tolua_S,"ccEDIC_TYPEUINT",cs::ccEDIC_TYPEUINT);
   tolua_constant(tolua_S,"ccEDIC_TYPEFLOAT",cs::ccEDIC_TYPEFLOAT);
   tolua_constant(tolua_S,"ccEDIC_TYPESTRING",cs::ccEDIC_TYPESTRING);
   tolua_constant(tolua_S,"ccEDIC_TYPEBOOLEN",cs::ccEDIC_TYPEBOOLEN);
   tolua_constant(tolua_S,"ccEDIC_TYPEARRAY",cs::ccEDIC_TYPEARRAY);
   tolua_constant(tolua_S,"ccEDIC_TYPEOBJECT",cs::ccEDIC_TYPEOBJECT);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"cs",0);
  tolua_beginmodule(tolua_S,"cs");
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCSGUIReader","CCSGUIReader","CCObject",tolua_collect_CCSGUIReader);
  #else
  tolua_cclass(tolua_S,"CCSGUIReader","CCSGUIReader","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCSGUIReader");
   tolua_function(tolua_S,"new",tolua_LuaExtern_CCSGUIReader_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_CCSGUIReader_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_CCSGUIReader_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_CCSGUIReader_delete00);
   tolua_function(tolua_S,"shareReader",tolua_LuaExtern_CCSGUIReader_shareReader00);
   tolua_function(tolua_S,"purgeCCSGUIReader",tolua_LuaExtern_CCSGUIReader_purgeCCSGUIReader00);
   tolua_function(tolua_S,"widgetFromJsonFile",tolua_LuaExtern_CCSGUIReader_widgetFromJsonFile00);
   tolua_function(tolua_S,"widgetFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_widgetFromJsonDictionary00);
   tolua_function(tolua_S,"getVersionInteger",tolua_LuaExtern_CCSGUIReader_getVersionInteger00);
   tolua_function(tolua_S,"setPropsForWidgetFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForWidgetFromJsonDictionary00);
   tolua_function(tolua_S,"setColorPropsForWidgetFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setColorPropsForWidgetFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForButtonFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForButtonFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForCheckBoxFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForCheckBoxFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForImageViewFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForImageViewFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForLabelFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForLabelFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForLabelAtlasFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForLabelAtlasFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForContainerWidgetFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForContainerWidgetFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForPanelFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForPanelFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForScrollViewFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForScrollViewFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForSliderFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForSliderFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForTextAreaFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForTextAreaFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForTextButtonFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForTextButtonFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForTextFieldFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForTextFieldFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForLoadingBarFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForLoadingBarFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForListViewFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForListViewFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForPageViewFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForPageViewFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForLabelBMFontFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForLabelBMFontFromJsonDictionary00);
   tolua_function(tolua_S,"setPropsForDragPanelFromJsonDictionary",tolua_LuaExtern_CCSGUIReader_setPropsForDragPanelFromJsonDictionary00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCSSceneReader","CCSSceneReader","",tolua_collect_CCSSceneReader);
  #else
  tolua_cclass(tolua_S,"CCSSceneReader","CCSSceneReader","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCSSceneReader");
   tolua_function(tolua_S,"new",tolua_LuaExtern_CCSSceneReader_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_CCSSceneReader_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_CCSSceneReader_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_CCSSceneReader_delete00);
   tolua_function(tolua_S,"sharedSceneReader",tolua_LuaExtern_CCSSceneReader_sharedSceneReader00);
   tolua_function(tolua_S,"purgeSceneReader",tolua_LuaExtern_CCSSceneReader_purgeSceneReader00);
   tolua_function(tolua_S,"sceneReaderVersion",tolua_LuaExtern_CCSSceneReader_sceneReaderVersion00);
   tolua_function(tolua_S,"createNodeWithSceneFile",tolua_LuaExtern_CCSSceneReader_createNodeWithSceneFile00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"CocosGUIVersion",tolua_LuaExtern_CocosGUIVersion00);
  tolua_cclass(tolua_S,"UIZoomButton","UIZoomButton","UITextButton",NULL);
  tolua_beginmodule(tolua_S,"UIZoomButton");
   tolua_function(tolua_S,"create",tolua_LuaExtern_UIZoomButton_create00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"LAYOUT_COLOR_NONE",LAYOUT_COLOR_NONE);
  tolua_constant(tolua_S,"LAYOUT_COLOR_SOLID",LAYOUT_COLOR_SOLID);
  tolua_constant(tolua_S,"LAYOUT_COLOR_GRADIENT",LAYOUT_COLOR_GRADIENT);
  tolua_constant(tolua_S,"LAYOUT_ABSOLUTE",LAYOUT_ABSOLUTE);
  tolua_constant(tolua_S,"LAYOUT_LINEAR_VERTICAL",LAYOUT_LINEAR_VERTICAL);
  tolua_constant(tolua_S,"LAYOUT_LINEAR_HORIZONTAL",LAYOUT_LINEAR_HORIZONTAL);
  tolua_constant(tolua_S,"LAYOUT_RELATIVE",LAYOUT_RELATIVE);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Layout","Layout","UIWidget",tolua_collect_Layout);
  #else
  tolua_cclass(tolua_S,"Layout","Layout","UIWidget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Layout");
   tolua_function(tolua_S,"new",tolua_LuaExtern_Layout_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_Layout_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_Layout_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_Layout_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_Layout_create00);
   tolua_function(tolua_S,"hitTest",tolua_LuaExtern_Layout_hitTest00);
   tolua_function(tolua_S,"setBackGroundImage",tolua_LuaExtern_Layout_setBackGroundImage00);
   tolua_function(tolua_S,"setBackGroundImageCapInsets",tolua_LuaExtern_Layout_setBackGroundImageCapInsets00);
   tolua_function(tolua_S,"setBackGroundColorType",tolua_LuaExtern_Layout_setBackGroundColorType00);
   tolua_function(tolua_S,"setBackGroundImageScale9Enabled",tolua_LuaExtern_Layout_setBackGroundImageScale9Enabled00);
   tolua_function(tolua_S,"setBackGroundColor",tolua_LuaExtern_Layout_setBackGroundColor00);
   tolua_function(tolua_S,"setBackGroundColor",tolua_LuaExtern_Layout_setBackGroundColor01);
   tolua_function(tolua_S,"setBackGroundColorOpacity",tolua_LuaExtern_Layout_setBackGroundColorOpacity00);
   tolua_function(tolua_S,"setBackGroundColorVector",tolua_LuaExtern_Layout_setBackGroundColorVector00);
   tolua_function(tolua_S,"setColor",tolua_LuaExtern_Layout_setColor00);
   tolua_function(tolua_S,"setOpacity",tolua_LuaExtern_Layout_setOpacity00);
   tolua_function(tolua_S,"removeBackGroundImage",tolua_LuaExtern_Layout_removeBackGroundImage00);
   tolua_function(tolua_S,"getBackGroundImageTextureSize",tolua_LuaExtern_Layout_getBackGroundImageTextureSize00);
   tolua_function(tolua_S,"setClippingEnabled",tolua_LuaExtern_Layout_setClippingEnabled00);
   tolua_function(tolua_S,"isClippingEnabled",tolua_LuaExtern_Layout_isClippingEnabled00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_Layout_getContentSize00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_Layout_getDescription00);
   tolua_function(tolua_S,"setLayoutType",tolua_LuaExtern_Layout_setLayoutType00);
   tolua_function(tolua_S,"getLayoutType",tolua_LuaExtern_Layout_getLayoutType00);
   tolua_function(tolua_S,"doLayout",tolua_LuaExtern_Layout_doLayout00);
   tolua_function(tolua_S,"setBackGroundImageScale9Enable",tolua_LuaExtern_Layout_setBackGroundImageScale9Enable00);
   tolua_function(tolua_S,"setClippingEnable",tolua_LuaExtern_Layout_setClippingEnable00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"RectClippingNode","RectClippingNode","CCClippingNode",tolua_collect_RectClippingNode);
  #else
  tolua_cclass(tolua_S,"RectClippingNode","RectClippingNode","CCClippingNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"RectClippingNode");
   tolua_function(tolua_S,"delete",tolua_LuaExtern_RectClippingNode_delete00);
   tolua_function(tolua_S,"init",tolua_LuaExtern_RectClippingNode_init00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_RectClippingNode_create00);
   tolua_function(tolua_S,"setClippingSize",tolua_LuaExtern_RectClippingNode_setClippingSize00);
   tolua_function(tolua_S,"setClippingEnabled",tolua_LuaExtern_RectClippingNode_setClippingEnabled00);
   tolua_function(tolua_S,"visit",tolua_LuaExtern_RectClippingNode_visit00);
   tolua_function(tolua_S,"setEnabled",tolua_LuaExtern_RectClippingNode_setEnabled00);
   tolua_function(tolua_S,"isEnabled",tolua_LuaExtern_RectClippingNode_isEnabled00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"LAYOUT_PARAMETER_NONE",LAYOUT_PARAMETER_NONE);
  tolua_constant(tolua_S,"LAYOUT_PARAMETER_LINEAR",LAYOUT_PARAMETER_LINEAR);
  tolua_constant(tolua_S,"LAYOUT_PARAMETER_RELATIVE",LAYOUT_PARAMETER_RELATIVE);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"LayoutParameter","LayoutParameter","CCObject",tolua_collect_LayoutParameter);
  #else
  tolua_cclass(tolua_S,"LayoutParameter","LayoutParameter","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"LayoutParameter");
   tolua_function(tolua_S,"new",tolua_LuaExtern_LayoutParameter_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_LayoutParameter_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_LayoutParameter_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_LayoutParameter_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_LayoutParameter_create00);
   tolua_function(tolua_S,"setMargin",tolua_LuaExtern_LayoutParameter_setMargin00);
   tolua_function(tolua_S,"getMargin",tolua_LuaExtern_LayoutParameter_getMargin00);
   tolua_function(tolua_S,"getLayoutType",tolua_LuaExtern_LayoutParameter_getLayoutType00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"LinearLayoutParameter","LinearLayoutParameter","LayoutParameter",tolua_collect_LinearLayoutParameter);
  #else
  tolua_cclass(tolua_S,"LinearLayoutParameter","LinearLayoutParameter","LayoutParameter",NULL);
  #endif
  tolua_beginmodule(tolua_S,"LinearLayoutParameter");
   tolua_function(tolua_S,"new",tolua_LuaExtern_LinearLayoutParameter_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_LinearLayoutParameter_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_LinearLayoutParameter_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_LinearLayoutParameter_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_LinearLayoutParameter_create00);
   tolua_function(tolua_S,"setGravity",tolua_LuaExtern_LinearLayoutParameter_setGravity00);
   tolua_function(tolua_S,"getGravity",tolua_LuaExtern_LinearLayoutParameter_getGravity00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"RelativeLayoutParameter","RelativeLayoutParameter","LayoutParameter",tolua_collect_RelativeLayoutParameter);
  #else
  tolua_cclass(tolua_S,"RelativeLayoutParameter","RelativeLayoutParameter","LayoutParameter",NULL);
  #endif
  tolua_beginmodule(tolua_S,"RelativeLayoutParameter");
   tolua_function(tolua_S,"new",tolua_LuaExtern_RelativeLayoutParameter_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_RelativeLayoutParameter_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_RelativeLayoutParameter_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_RelativeLayoutParameter_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_RelativeLayoutParameter_create00);
   tolua_function(tolua_S,"setAlign",tolua_LuaExtern_RelativeLayoutParameter_setAlign00);
   tolua_function(tolua_S,"getAlign",tolua_LuaExtern_RelativeLayoutParameter_getAlign00);
   tolua_function(tolua_S,"setRelativeToWidgetName",tolua_LuaExtern_RelativeLayoutParameter_setRelativeToWidgetName00);
   tolua_function(tolua_S,"getRelativeToWidgetName",tolua_LuaExtern_RelativeLayoutParameter_getRelativeToWidgetName00);
   tolua_function(tolua_S,"setRelativeName",tolua_LuaExtern_RelativeLayoutParameter_setRelativeName00);
   tolua_function(tolua_S,"getRelativeName",tolua_LuaExtern_RelativeLayoutParameter_getRelativeName00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIButton","UIButton","UIWidget",tolua_collect_UIButton);
  #else
  tolua_cclass(tolua_S,"UIButton","UIButton","UIWidget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIButton");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIButton_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIButton_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIButton_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UIButton_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UIButton_create00);
   tolua_function(tolua_S,"loadTextures",tolua_LuaExtern_UIButton_loadTextures00);
   tolua_function(tolua_S,"loadTextureNormal",tolua_LuaExtern_UIButton_loadTextureNormal00);
   tolua_function(tolua_S,"loadTexturePressed",tolua_LuaExtern_UIButton_loadTexturePressed00);
   tolua_function(tolua_S,"loadTextureDisabled",tolua_LuaExtern_UIButton_loadTextureDisabled00);
   tolua_function(tolua_S,"setCapInsets",tolua_LuaExtern_UIButton_setCapInsets00);
   tolua_function(tolua_S,"setCapInsetsNormalRenderer",tolua_LuaExtern_UIButton_setCapInsetsNormalRenderer00);
   tolua_function(tolua_S,"setCapInsetsPressedRenderer",tolua_LuaExtern_UIButton_setCapInsetsPressedRenderer00);
   tolua_function(tolua_S,"setCapInsetsDisabledRenderer",tolua_LuaExtern_UIButton_setCapInsetsDisabledRenderer00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_LuaExtern_UIButton_setAnchorPoint00);
   tolua_function(tolua_S,"setScale9Enabled",tolua_LuaExtern_UIButton_setScale9Enabled00);
   tolua_function(tolua_S,"setFlipX",tolua_LuaExtern_UIButton_setFlipX00);
   tolua_function(tolua_S,"setFlipY",tolua_LuaExtern_UIButton_setFlipY00);
   tolua_function(tolua_S,"isFlipX",tolua_LuaExtern_UIButton_isFlipX00);
   tolua_function(tolua_S,"isFlipY",tolua_LuaExtern_UIButton_isFlipY00);
   tolua_function(tolua_S,"setPressedActionEnabled",tolua_LuaExtern_UIButton_setPressedActionEnabled00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_LuaExtern_UIButton_ignoreContentAdaptWithSize00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_UIButton_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_LuaExtern_UIButton_getVirtualRenderer00);
   tolua_function(tolua_S,"setColor",tolua_LuaExtern_UIButton_setColor00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UIButton_getDescription00);
   tolua_function(tolua_S,"setTitleText",tolua_LuaExtern_UIButton_setTitleText00);
   tolua_function(tolua_S,"getTitleText",tolua_LuaExtern_UIButton_getTitleText00);
   tolua_function(tolua_S,"setTitleColor",tolua_LuaExtern_UIButton_setTitleColor00);
   tolua_function(tolua_S,"getTitleColor",tolua_LuaExtern_UIButton_getTitleColor00);
   tolua_function(tolua_S,"setTitleFontSize",tolua_LuaExtern_UIButton_setTitleFontSize00);
   tolua_function(tolua_S,"getTitleFontSize",tolua_LuaExtern_UIButton_getTitleFontSize00);
   tolua_function(tolua_S,"setTitleFontName",tolua_LuaExtern_UIButton_setTitleFontName00);
   tolua_function(tolua_S,"getTitleFontName",tolua_LuaExtern_UIButton_getTitleFontName00);
   tolua_function(tolua_S,"setText",tolua_LuaExtern_UIButton_setText00);
   tolua_function(tolua_S,"setTextColor",tolua_LuaExtern_UIButton_setTextColor00);
   tolua_function(tolua_S,"setFontSize",tolua_LuaExtern_UIButton_setFontSize00);
   tolua_function(tolua_S,"setFontName",tolua_LuaExtern_UIButton_setFontName00);
   tolua_function(tolua_S,"setTextures",tolua_LuaExtern_UIButton_setTextures00);
   tolua_function(tolua_S,"setNormalTexture",tolua_LuaExtern_UIButton_setNormalTexture00);
   tolua_function(tolua_S,"setPressedTexture",tolua_LuaExtern_UIButton_setPressedTexture00);
   tolua_function(tolua_S,"setDisabledTexture",tolua_LuaExtern_UIButton_setDisabledTexture00);
   tolua_function(tolua_S,"setScale9Enable",tolua_LuaExtern_UIButton_setScale9Enable00);
   tolua_function(tolua_S,"setScale9Size",tolua_LuaExtern_UIButton_setScale9Size00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"CHECKBOX_STATE_EVENT_SELECTED",CHECKBOX_STATE_EVENT_SELECTED);
  tolua_constant(tolua_S,"CHECKBOX_STATE_EVENT_UNSELECTED",CHECKBOX_STATE_EVENT_UNSELECTED);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UICheckBox","UICheckBox","UIWidget",tolua_collect_UICheckBox);
  #else
  tolua_cclass(tolua_S,"UICheckBox","UICheckBox","UIWidget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UICheckBox");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UICheckBox_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UICheckBox_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UICheckBox_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UICheckBox_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UICheckBox_create00);
   tolua_function(tolua_S,"loadTextures",tolua_LuaExtern_UICheckBox_loadTextures00);
   tolua_function(tolua_S,"loadTextureBackGround",tolua_LuaExtern_UICheckBox_loadTextureBackGround00);
   tolua_function(tolua_S,"loadTextureBackGroundSelected",tolua_LuaExtern_UICheckBox_loadTextureBackGroundSelected00);
   tolua_function(tolua_S,"loadTextureFrontCross",tolua_LuaExtern_UICheckBox_loadTextureFrontCross00);
   tolua_function(tolua_S,"loadTextureBackGroundDisabled",tolua_LuaExtern_UICheckBox_loadTextureBackGroundDisabled00);
   tolua_function(tolua_S,"loadTextureFrontCrossDisabled",tolua_LuaExtern_UICheckBox_loadTextureFrontCrossDisabled00);
   tolua_function(tolua_S,"setSelectedState",tolua_LuaExtern_UICheckBox_setSelectedState00);
   tolua_function(tolua_S,"getSelectedState",tolua_LuaExtern_UICheckBox_getSelectedState00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_LuaExtern_UICheckBox_setAnchorPoint00);
   tolua_function(tolua_S,"addEventListener",tolua_LuaExtern_UICheckBox_addEventListener00);
   tolua_function(tolua_S,"setFlipX",tolua_LuaExtern_UICheckBox_setFlipX00);
   tolua_function(tolua_S,"setFlipY",tolua_LuaExtern_UICheckBox_setFlipY00);
   tolua_function(tolua_S,"isFlipX",tolua_LuaExtern_UICheckBox_isFlipX00);
   tolua_function(tolua_S,"isFlipY",tolua_LuaExtern_UICheckBox_isFlipY00);
   tolua_function(tolua_S,"onTouchEnded",tolua_LuaExtern_UICheckBox_onTouchEnded00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_UICheckBox_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_LuaExtern_UICheckBox_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UICheckBox_getDescription00);
   tolua_function(tolua_S,"setTextures",tolua_LuaExtern_UICheckBox_setTextures00);
   tolua_function(tolua_S,"setBackGroundTexture",tolua_LuaExtern_UICheckBox_setBackGroundTexture00);
   tolua_function(tolua_S,"setBackGroundSelectedTexture",tolua_LuaExtern_UICheckBox_setBackGroundSelectedTexture00);
   tolua_function(tolua_S,"setFrontCrossTexture",tolua_LuaExtern_UICheckBox_setFrontCrossTexture00);
   tolua_function(tolua_S,"setBackGroundDisabledTexture",tolua_LuaExtern_UICheckBox_setBackGroundDisabledTexture00);
   tolua_function(tolua_S,"setFrontCrossDisabledTexture",tolua_LuaExtern_UICheckBox_setFrontCrossDisabledTexture00);
   tolua_function(tolua_S,"addSelectEvent",tolua_LuaExtern_UICheckBox_addSelectEvent00);
   tolua_function(tolua_S,"addUnSelectEvent",tolua_LuaExtern_UICheckBox_addUnSelectEvent00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"DRAGPANEL_MOVE_TYPE_NONE",DRAGPANEL_MOVE_TYPE_NONE);
  tolua_constant(tolua_S,"DRAGPANEL_MOVE_TYPE_AUTOMOVE",DRAGPANEL_MOVE_TYPE_AUTOMOVE);
  tolua_constant(tolua_S,"DRAGPANEL_MOVE_TYPE_BOUNCE",DRAGPANEL_MOVE_TYPE_BOUNCE);
  tolua_constant(tolua_S,"DRAGPANEL_BERTH_DIR_NONE",DRAGPANEL_BERTH_DIR_NONE);
  tolua_constant(tolua_S,"DRAGPANEL_BERTH_DIR_LEFTBOTTOM",DRAGPANEL_BERTH_DIR_LEFTBOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_BERTH_DIR_LFETTOP",DRAGPANEL_BERTH_DIR_LFETTOP);
  tolua_constant(tolua_S,"DRAGPANEL_BERTH_DIR_RIGHTBOTTOM",DRAGPANEL_BERTH_DIR_RIGHTBOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_BERTH_DIR_RIGHTTOP",DRAGPANEL_BERTH_DIR_RIGHTTOP);
  tolua_constant(tolua_S,"DRAGPANEL_BERTH_DIR_LEFT",DRAGPANEL_BERTH_DIR_LEFT);
  tolua_constant(tolua_S,"DRAGPANEL_BERTH_DIR_TOP",DRAGPANEL_BERTH_DIR_TOP);
  tolua_constant(tolua_S,"DRAGPANEL_BERTH_DIR_RIGHT",DRAGPANEL_BERTH_DIR_RIGHT);
  tolua_constant(tolua_S,"DRAGPANEL_BERTH_DIR_BOTTOM",DRAGPANEL_BERTH_DIR_BOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_BOUNCE_DIR_NONE",DRAGPANEL_BOUNCE_DIR_NONE);
  tolua_constant(tolua_S,"DRAGPANEL_BOUNCE_DIR_LEFTBOTTOM",DRAGPANEL_BOUNCE_DIR_LEFTBOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_BOUNCE_DIR_LEFTTOP",DRAGPANEL_BOUNCE_DIR_LEFTTOP);
  tolua_constant(tolua_S,"DRAGPANEL_BOUNCE_DIR_RIGHTBOTTOM",DRAGPANEL_BOUNCE_DIR_RIGHTBOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_BOUNCE_DIR_RIGHTTOP",DRAGPANEL_BOUNCE_DIR_RIGHTTOP);
  tolua_constant(tolua_S,"DRAGPANEL_BOUNCE_DIR_LEFT",DRAGPANEL_BOUNCE_DIR_LEFT);
  tolua_constant(tolua_S,"DRAGPANEL_BOUNCE_DIR_TOP",DRAGPANEL_BOUNCE_DIR_TOP);
  tolua_constant(tolua_S,"DRAGPANEL_BOUNCE_DIR_RIGHT",DRAGPANEL_BOUNCE_DIR_RIGHT);
  tolua_constant(tolua_S,"DRAGPANEL_BOUNCE_DIR_BOTTOM",DRAGPANEL_BOUNCE_DIR_BOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BERTH_LEFTBOTTOM",DRAGPANEL_EVENT_BERTH_LEFTBOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BERTH_LFETTOP",DRAGPANEL_EVENT_BERTH_LFETTOP);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BERTH_RIGHTBOTTOM",DRAGPANEL_EVENT_BERTH_RIGHTBOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BERTH_RIGHTTOP",DRAGPANEL_EVENT_BERTH_RIGHTTOP);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BERTH_LEFT",DRAGPANEL_EVENT_BERTH_LEFT);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BERTH_TOP",DRAGPANEL_EVENT_BERTH_TOP);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BERTH_RIGHT",DRAGPANEL_EVENT_BERTH_RIGHT);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BERTH_BOTTOM",DRAGPANEL_EVENT_BERTH_BOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BOUNCE_LEFTBOTTOM",DRAGPANEL_EVENT_BOUNCE_LEFTBOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BOUNCE_LEFTTOP",DRAGPANEL_EVENT_BOUNCE_LEFTTOP);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BOUNCE_RIGHTBOTTOM",DRAGPANEL_EVENT_BOUNCE_RIGHTBOTTOM);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BOUNCE_RIGHTTOP",DRAGPANEL_EVENT_BOUNCE_RIGHTTOP);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BOUNCE_LEFT",DRAGPANEL_EVENT_BOUNCE_LEFT);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BOUNCE_TOP",DRAGPANEL_EVENT_BOUNCE_TOP);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BOUNCE_RIGHT",DRAGPANEL_EVENT_BOUNCE_RIGHT);
  tolua_constant(tolua_S,"DRAGPANEL_EVENT_BOUNCE_BOTTOM",DRAGPANEL_EVENT_BOUNCE_BOTTOM);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIDragPanel","UIDragPanel","Layout",tolua_collect_UIDragPanel);
  #else
  tolua_cclass(tolua_S,"UIDragPanel","UIDragPanel","Layout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIDragPanel");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIDragPanel_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIDragPanel_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIDragPanel_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UIDragPanel_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UIDragPanel_create00);
   tolua_function(tolua_S,"onTouchBegan",tolua_LuaExtern_UIDragPanel_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_LuaExtern_UIDragPanel_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnded",tolua_LuaExtern_UIDragPanel_onTouchEnded00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_LuaExtern_UIDragPanel_onTouchCancelled00);
   tolua_function(tolua_S,"onTouchLongClicked",tolua_LuaExtern_UIDragPanel_onTouchLongClicked00);
   tolua_function(tolua_S,"update",tolua_LuaExtern_UIDragPanel_update00);
   tolua_function(tolua_S,"addChild",tolua_LuaExtern_UIDragPanel_addChild00);
   tolua_function(tolua_S,"removeChild",tolua_LuaExtern_UIDragPanel_removeChild00);
   tolua_function(tolua_S,"removeAllChildren",tolua_LuaExtern_UIDragPanel_removeAllChildren00);
   tolua_function(tolua_S,"getChildren",tolua_LuaExtern_UIDragPanel_getChildren00);
   tolua_function(tolua_S,"getInnerContainerSize",tolua_LuaExtern_UIDragPanel_getInnerContainerSize00);
   tolua_function(tolua_S,"setInnerContainerSize",tolua_LuaExtern_UIDragPanel_setInnerContainerSize00);
   tolua_function(tolua_S,"getInnerContainerPosition",tolua_LuaExtern_UIDragPanel_getInnerContainerPosition00);
   tolua_function(tolua_S,"setInnerContainerPosition",tolua_LuaExtern_UIDragPanel_setInnerContainerPosition00);
   tolua_function(tolua_S,"setInnerContainerOffset",tolua_LuaExtern_UIDragPanel_setInnerContainerOffset00);
   tolua_function(tolua_S,"setAutoMoveDuration",tolua_LuaExtern_UIDragPanel_setAutoMoveDuration00);
   tolua_function(tolua_S,"setAutoMoveEaseRate",tolua_LuaExtern_UIDragPanel_setAutoMoveEaseRate00);
   tolua_function(tolua_S,"isBerth",tolua_LuaExtern_UIDragPanel_isBerth00);
   tolua_function(tolua_S,"addEventListener",tolua_LuaExtern_UIDragPanel_addEventListener00);
   tolua_function(tolua_S,"addBerthToLeftBottomEvent",tolua_LuaExtern_UIDragPanel_addBerthToLeftBottomEvent00);
   tolua_function(tolua_S,"addBerthToLeftTopEvent",tolua_LuaExtern_UIDragPanel_addBerthToLeftTopEvent00);
   tolua_function(tolua_S,"addBerthToRightBottomEvent",tolua_LuaExtern_UIDragPanel_addBerthToRightBottomEvent00);
   tolua_function(tolua_S,"addBerthToRightTopEvent",tolua_LuaExtern_UIDragPanel_addBerthToRightTopEvent00);
   tolua_function(tolua_S,"addBerthToLeftEvent",tolua_LuaExtern_UIDragPanel_addBerthToLeftEvent00);
   tolua_function(tolua_S,"addBerthToTopEvent",tolua_LuaExtern_UIDragPanel_addBerthToTopEvent00);
   tolua_function(tolua_S,"addBerthToRightEvent",tolua_LuaExtern_UIDragPanel_addBerthToRightEvent00);
   tolua_function(tolua_S,"addBerthToBottomEvent",tolua_LuaExtern_UIDragPanel_addBerthToBottomEvent00);
   tolua_function(tolua_S,"isBounceEnabled",tolua_LuaExtern_UIDragPanel_isBounceEnabled00);
   tolua_function(tolua_S,"setBounceEnabled",tolua_LuaExtern_UIDragPanel_setBounceEnabled00);
   tolua_function(tolua_S,"addBounceToLeftBottomEvent",tolua_LuaExtern_UIDragPanel_addBounceToLeftBottomEvent00);
   tolua_function(tolua_S,"addBounceToLeftTopEvent",tolua_LuaExtern_UIDragPanel_addBounceToLeftTopEvent00);
   tolua_function(tolua_S,"addBounceToRightBottomEvent",tolua_LuaExtern_UIDragPanel_addBounceToRightBottomEvent00);
   tolua_function(tolua_S,"addBounceToRightTopEvent",tolua_LuaExtern_UIDragPanel_addBounceToRightTopEvent00);
   tolua_function(tolua_S,"addBounceToLeftEvent",tolua_LuaExtern_UIDragPanel_addBounceToLeftEvent00);
   tolua_function(tolua_S,"addBounceToTopEvent",tolua_LuaExtern_UIDragPanel_addBounceToTopEvent00);
   tolua_function(tolua_S,"addBounceToRightEvent",tolua_LuaExtern_UIDragPanel_addBounceToRightEvent00);
   tolua_function(tolua_S,"addBounceToBottomEvent",tolua_LuaExtern_UIDragPanel_addBounceToBottomEvent00);
   tolua_function(tolua_S,"getInnerContainer",tolua_LuaExtern_UIDragPanel_getInnerContainer00);
   tolua_function(tolua_S,"setLayoutType",tolua_LuaExtern_UIDragPanel_setLayoutType00);
   tolua_function(tolua_S,"getLayoutType",tolua_LuaExtern_UIDragPanel_getLayoutType00);
   tolua_function(tolua_S,"doLayout",tolua_LuaExtern_UIDragPanel_doLayout00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UIDragPanel_getDescription00);
   tolua_variable(tolua_S,"__UIScrollInterface__",tolua_get_UIDragPanel___UIScrollInterface__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIHelper","UIHelper","",tolua_collect_UIHelper);
  #else
  tolua_cclass(tolua_S,"UIHelper","UIHelper","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIHelper");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIHelper_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIHelper_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIHelper_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UIHelper_delete00);
   tolua_function(tolua_S,"init",tolua_LuaExtern_UIHelper_init00);
   tolua_function(tolua_S,"createWidgetFromJsonFile",tolua_LuaExtern_UIHelper_createWidgetFromJsonFile00);
   tolua_function(tolua_S,"instance",tolua_LuaExtern_UIHelper_instance00);
   tolua_function(tolua_S,"purgeUIHelper",tolua_LuaExtern_UIHelper_purgeUIHelper00);
   tolua_function(tolua_S,"addSpriteFrame",tolua_LuaExtern_UIHelper_addSpriteFrame00);
   tolua_function(tolua_S,"removeSpriteFrame",tolua_LuaExtern_UIHelper_removeSpriteFrame00);
   tolua_function(tolua_S,"removeAllSpriteFrame",tolua_LuaExtern_UIHelper_removeAllSpriteFrame00);
   tolua_function(tolua_S,"seekWidgetByTag",tolua_LuaExtern_UIHelper_seekWidgetByTag00);
   tolua_function(tolua_S,"seekWidgetByName",tolua_LuaExtern_UIHelper_seekWidgetByName00);
   tolua_function(tolua_S,"seekWidgetByRelativeName",tolua_LuaExtern_UIHelper_seekWidgetByRelativeName00);
   tolua_function(tolua_S,"setFileDesignWidth",tolua_LuaExtern_UIHelper_setFileDesignWidth00);
   tolua_function(tolua_S,"getFileDesignWidth",tolua_LuaExtern_UIHelper_getFileDesignWidth00);
   tolua_function(tolua_S,"setFileDesignHeight",tolua_LuaExtern_UIHelper_setFileDesignHeight00);
   tolua_function(tolua_S,"getFileDesignHeight",tolua_LuaExtern_UIHelper_getFileDesignHeight00);
   tolua_function(tolua_S,"seekActionWidgetByActionTag",tolua_LuaExtern_UIHelper_seekActionWidgetByActionTag00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIImageView","UIImageView","UIWidget",tolua_collect_UIImageView);
  #else
  tolua_cclass(tolua_S,"UIImageView","UIImageView","UIWidget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIImageView");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIImageView_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIImageView_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIImageView_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UIImageView_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UIImageView_create00);
   tolua_function(tolua_S,"loadTexture",tolua_LuaExtern_UIImageView_loadTexture00);
   tolua_function(tolua_S,"setTextureRect",tolua_LuaExtern_UIImageView_setTextureRect00);
   tolua_function(tolua_S,"setScale9Enabled",tolua_LuaExtern_UIImageView_setScale9Enabled00);
   tolua_function(tolua_S,"setCapInsets",tolua_LuaExtern_UIImageView_setCapInsets00);
   tolua_function(tolua_S,"setFlipX",tolua_LuaExtern_UIImageView_setFlipX00);
   tolua_function(tolua_S,"setFlipY",tolua_LuaExtern_UIImageView_setFlipY00);
   tolua_function(tolua_S,"isFlipX",tolua_LuaExtern_UIImageView_isFlipX00);
   tolua_function(tolua_S,"isFlipY",tolua_LuaExtern_UIImageView_isFlipY00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_LuaExtern_UIImageView_setAnchorPoint00);
   tolua_function(tolua_S,"onTouchBegan",tolua_LuaExtern_UIImageView_onTouchBegan00);
   tolua_function(tolua_S,"onTouchEnded",tolua_LuaExtern_UIImageView_onTouchEnded00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_LuaExtern_UIImageView_ignoreContentAdaptWithSize00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UIImageView_getDescription00);
   tolua_function(tolua_S,"setDoubleClickEnabled",tolua_LuaExtern_UIImageView_setDoubleClickEnabled00);
   tolua_function(tolua_S,"doubleClickEvent",tolua_LuaExtern_UIImageView_doubleClickEvent00);
   tolua_function(tolua_S,"checkDoubleClick",tolua_LuaExtern_UIImageView_checkDoubleClick00);
   tolua_function(tolua_S,"setTexture",tolua_LuaExtern_UIImageView_setTexture00);
   tolua_function(tolua_S,"setScale9Size",tolua_LuaExtern_UIImageView_setScale9Size00);
   tolua_function(tolua_S,"setScale9Enable",tolua_LuaExtern_UIImageView_setScale9Enable00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_UIImageView_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_LuaExtern_UIImageView_getVirtualRenderer00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIInputManager","UIInputManager","",tolua_collect_UIInputManager);
  #else
  tolua_cclass(tolua_S,"UIInputManager","UIInputManager","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIInputManager");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIInputManager_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIInputManager_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIInputManager_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UIInputManager_delete00);
   tolua_function(tolua_S,"registWidget",tolua_LuaExtern_UIInputManager_registWidget00);
   tolua_function(tolua_S,"uiSceneHasChanged",tolua_LuaExtern_UIInputManager_uiSceneHasChanged00);
   tolua_function(tolua_S,"removeManageredWidget",tolua_LuaExtern_UIInputManager_removeManageredWidget00);
   tolua_function(tolua_S,"checkEventWidget",tolua_LuaExtern_UIInputManager_checkEventWidget00);
   tolua_function(tolua_S,"update",tolua_LuaExtern_UIInputManager_update00);
   tolua_function(tolua_S,"onTouchBegan",tolua_LuaExtern_UIInputManager_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_LuaExtern_UIInputManager_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnd",tolua_LuaExtern_UIInputManager_onTouchEnd00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_LuaExtern_UIInputManager_onTouchCancelled00);
   tolua_function(tolua_S,"setRootWidget",tolua_LuaExtern_UIInputManager_setRootWidget00);
   tolua_function(tolua_S,"getRootWidget",tolua_LuaExtern_UIInputManager_getRootWidget00);
   tolua_function(tolua_S,"addCheckedDoubleClickWidget",tolua_LuaExtern_UIInputManager_addCheckedDoubleClickWidget00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UILabel","UILabel","UIWidget",tolua_collect_UILabel);
  #else
  tolua_cclass(tolua_S,"UILabel","UILabel","UIWidget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UILabel");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UILabel_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UILabel_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UILabel_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UILabel_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UILabel_create00);
   tolua_function(tolua_S,"setText",tolua_LuaExtern_UILabel_setText00);
   tolua_function(tolua_S,"getStringValue",tolua_LuaExtern_UILabel_getStringValue00);
   tolua_function(tolua_S,"getStringLength",tolua_LuaExtern_UILabel_getStringLength00);
   tolua_function(tolua_S,"setFontSize",tolua_LuaExtern_UILabel_setFontSize00);
   tolua_function(tolua_S,"setFontName",tolua_LuaExtern_UILabel_setFontName00);
   tolua_function(tolua_S,"setTouchScaleChangeEnabled",tolua_LuaExtern_UILabel_setTouchScaleChangeEnabled00);
   tolua_function(tolua_S,"isTouchScaleChangeEnabled",tolua_LuaExtern_UILabel_isTouchScaleChangeEnabled00);
   tolua_function(tolua_S,"setFlipX",tolua_LuaExtern_UILabel_setFlipX00);
   tolua_function(tolua_S,"setFlipY",tolua_LuaExtern_UILabel_setFlipY00);
   tolua_function(tolua_S,"isFlipX",tolua_LuaExtern_UILabel_isFlipX00);
   tolua_function(tolua_S,"isFlipY",tolua_LuaExtern_UILabel_isFlipY00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_LuaExtern_UILabel_setAnchorPoint00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_UILabel_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_LuaExtern_UILabel_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UILabel_getDescription00);
   tolua_function(tolua_S,"setTextAreaSize",tolua_LuaExtern_UILabel_setTextAreaSize00);
   tolua_function(tolua_S,"setTextHorizontalAlignment",tolua_LuaExtern_UILabel_setTextHorizontalAlignment00);
   tolua_function(tolua_S,"setTextVerticalAlignment",tolua_LuaExtern_UILabel_setTextVerticalAlignment00);
   tolua_function(tolua_S,"setTouchScaleChangeAble",tolua_LuaExtern_UILabel_setTouchScaleChangeAble00);
   tolua_function(tolua_S,"getTouchScaleChangeAble",tolua_LuaExtern_UILabel_getTouchScaleChangeAble00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UICCLabelAtlas","UICCLabelAtlas","CCLabelAtlas",tolua_collect_UICCLabelAtlas);
  #else
  tolua_cclass(tolua_S,"UICCLabelAtlas","UICCLabelAtlas","CCLabelAtlas",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UICCLabelAtlas");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UICCLabelAtlas_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UICCLabelAtlas_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UICCLabelAtlas_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UICCLabelAtlas_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UICCLabelAtlas_create00);
   tolua_function(tolua_S,"setProperty",tolua_LuaExtern_UICCLabelAtlas_setProperty00);
   tolua_function(tolua_S,"setProperty",tolua_LuaExtern_UICCLabelAtlas_setProperty01);
   tolua_function(tolua_S,"updateDisplayedOpacity",tolua_LuaExtern_UICCLabelAtlas_updateDisplayedOpacity00);
   tolua_function(tolua_S,"draw",tolua_LuaExtern_UICCLabelAtlas_draw00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UILabelAtlas","UILabelAtlas","UIWidget",tolua_collect_UILabelAtlas);
  #else
  tolua_cclass(tolua_S,"UILabelAtlas","UILabelAtlas","UIWidget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UILabelAtlas");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UILabelAtlas_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UILabelAtlas_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UILabelAtlas_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UILabelAtlas_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UILabelAtlas_create00);
   tolua_function(tolua_S,"setProperty",tolua_LuaExtern_UILabelAtlas_setProperty00);
   tolua_function(tolua_S,"setStringValue",tolua_LuaExtern_UILabelAtlas_setStringValue00);
   tolua_function(tolua_S,"getStringValue",tolua_LuaExtern_UILabelAtlas_getStringValue00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_LuaExtern_UILabelAtlas_setAnchorPoint00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_UILabelAtlas_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_LuaExtern_UILabelAtlas_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UILabelAtlas_getDescription00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UILabelBMFont","UILabelBMFont","UIWidget",tolua_collect_UILabelBMFont);
  #else
  tolua_cclass(tolua_S,"UILabelBMFont","UILabelBMFont","UIWidget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UILabelBMFont");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UILabelBMFont_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UILabelBMFont_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UILabelBMFont_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UILabelBMFont_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UILabelBMFont_create00);
   tolua_function(tolua_S,"setFntFile",tolua_LuaExtern_UILabelBMFont_setFntFile00);
   tolua_function(tolua_S,"setText",tolua_LuaExtern_UILabelBMFont_setText00);
   tolua_function(tolua_S,"getStringValue",tolua_LuaExtern_UILabelBMFont_getStringValue00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_LuaExtern_UILabelBMFont_setAnchorPoint00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_UILabelBMFont_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_LuaExtern_UILabelBMFont_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UILabelBMFont_getDescription00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UILayer","UILayer","CCLayer",tolua_collect_UILayer);
  #else
  tolua_cclass(tolua_S,"UILayer","UILayer","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UILayer");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UILayer_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UILayer_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UILayer_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UILayer_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UILayer_create00);
   tolua_function(tolua_S,"init",tolua_LuaExtern_UILayer_init00);
   tolua_function(tolua_S,"onEnter",tolua_LuaExtern_UILayer_onEnter00);
   tolua_function(tolua_S,"onExit",tolua_LuaExtern_UILayer_onExit00);
   tolua_function(tolua_S,"onEnterTransitionDidFinish",tolua_LuaExtern_UILayer_onEnterTransitionDidFinish00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_LuaExtern_UILayer_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_LuaExtern_UILayer_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_LuaExtern_UILayer_ccTouchEnded00);
   tolua_function(tolua_S,"ccTouchCancelled",tolua_LuaExtern_UILayer_ccTouchCancelled00);
   tolua_function(tolua_S,"addWidget",tolua_LuaExtern_UILayer_addWidget00);
   tolua_function(tolua_S,"removeWidget",tolua_LuaExtern_UILayer_removeWidget00);
   tolua_function(tolua_S,"setVisible",tolua_LuaExtern_UILayer_setVisible00);
   tolua_function(tolua_S,"getWidgetByTag",tolua_LuaExtern_UILayer_getWidgetByTag00);
   tolua_function(tolua_S,"getWidgetByName",tolua_LuaExtern_UILayer_getWidgetByName00);
   tolua_function(tolua_S,"getInputManager",tolua_LuaExtern_UILayer_getInputManager00);
   tolua_function(tolua_S,"clear",tolua_LuaExtern_UILayer_clear00);
   tolua_function(tolua_S,"getRootWidget",tolua_LuaExtern_UILayer_getRootWidget00);
   tolua_function(tolua_S,"dispose",tolua_LuaExtern_UILayer_dispose00);
   tolua_function(tolua_S,"removeWidgetAndCleanUp",tolua_LuaExtern_UILayer_removeWidgetAndCleanUp00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIMargin","UIMargin","",tolua_collect_UIMargin);
  #else
  tolua_cclass(tolua_S,"UIMargin","UIMargin","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIMargin");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIMargin_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIMargin_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIMargin_new00_local);
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIMargin_new01);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIMargin_new01_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIMargin_new01_local);
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIMargin_new02);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIMargin_new02_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIMargin_new02_local);
   tolua_function(tolua_S,"setMargin",tolua_LuaExtern_UIMargin_setMargin00);
   tolua_function(tolua_S,"equals",tolua_LuaExtern_UIMargin_equals00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_NONE",LINEAR_GRAVITY_NONE);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_LEFT",LINEAR_GRAVITY_LEFT);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_TOP",LINEAR_GRAVITY_TOP);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_RIGHT",LINEAR_GRAVITY_RIGHT);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_BOTTOM",LINEAR_GRAVITY_BOTTOM);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_CENTER_VERTICAL",LINEAR_GRAVITY_CENTER_VERTICAL);
  tolua_constant(tolua_S,"LINEAR_GRAVITY_CENTER_HORIZONTAL",LINEAR_GRAVITY_CENTER_HORIZONTAL);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_NONE",RELATIVE_ALIGN_NONE);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_LEFT",RELATIVE_ALIGN_PARENT_LEFT);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_TOP",RELATIVE_ALIGN_PARENT_TOP);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_RIGHT",RELATIVE_ALIGN_PARENT_RIGHT);
  tolua_constant(tolua_S,"RELATIVE_ALIGN_PARENT_BOTTOM",RELATIVE_ALIGN_PARENT_BOTTOM);
  tolua_constant(tolua_S,"RELATIVE_CENTER_IN_PARENT",RELATIVE_CENTER_IN_PARENT);
  tolua_constant(tolua_S,"RELATIVE_CENTER_HORIZONTAL",RELATIVE_CENTER_HORIZONTAL);
  tolua_constant(tolua_S,"RELATIVE_CENTER_VERTICAL",RELATIVE_CENTER_VERTICAL);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_LEFT_OF_TOPALIGN",RELATIVE_LOCATION_LEFT_OF_TOPALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_LEFT_OF_CENTER",RELATIVE_LOCATION_LEFT_OF_CENTER);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_LEFT_OF_BOTTOMALIGN",RELATIVE_LOCATION_LEFT_OF_BOTTOMALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_RIGHT_OF_TOPALIGN",RELATIVE_LOCATION_RIGHT_OF_TOPALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_RIGHT_OF_CENTER",RELATIVE_LOCATION_RIGHT_OF_CENTER);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_RIGHT_OF_BOTTOMALIGN",RELATIVE_LOCATION_RIGHT_OF_BOTTOMALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_ABOVE_LEFTALIGN",RELATIVE_LOCATION_ABOVE_LEFTALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_ABOVE_CENTER",RELATIVE_LOCATION_ABOVE_CENTER);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_ABOVE_RIGHTALIGN",RELATIVE_LOCATION_ABOVE_RIGHTALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_BELOW_LEFTALIGN",RELATIVE_LOCATION_BELOW_LEFTALIGN);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_BELOW_CENTER",RELATIVE_LOCATION_BELOW_CENTER);
  tolua_constant(tolua_S,"RELATIVE_LOCATION_BELOW_RIGHTALIGN",RELATIVE_LOCATION_BELOW_RIGHTALIGN);
  tolua_constant(tolua_S,"LISTVIEW_DIR_NONE",LISTVIEW_DIR_NONE);
  tolua_constant(tolua_S,"LISTVIEW_DIR_VERTICAL",LISTVIEW_DIR_VERTICAL);
  tolua_constant(tolua_S,"LISTVIEW_DIR_HORIZONTAL",LISTVIEW_DIR_HORIZONTAL);
  tolua_constant(tolua_S,"LISTVIEW_MOVE_DIR_NONE",LISTVIEW_MOVE_DIR_NONE);
  tolua_constant(tolua_S,"LISTVIEW_MOVE_DIR_UP",LISTVIEW_MOVE_DIR_UP);
  tolua_constant(tolua_S,"LISTVIEW_MOVE_DIR_DOWN",LISTVIEW_MOVE_DIR_DOWN);
  tolua_constant(tolua_S,"LISTVIEW_MOVE_DIR_LEFT",LISTVIEW_MOVE_DIR_LEFT);
  tolua_constant(tolua_S,"LISTVIEW_MOVE_DIR_RIGHT",LISTVIEW_MOVE_DIR_RIGHT);
  tolua_constant(tolua_S,"LISTVIEW_EVENT_INIT_CHILD",LISTVIEW_EVENT_INIT_CHILD);
  tolua_constant(tolua_S,"LISTVIEW_EVENT_UPDATE_CHILD",LISTVIEW_EVENT_UPDATE_CHILD);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIListView","UIListView","Layout",tolua_collect_UIListView);
  #else
  tolua_cclass(tolua_S,"UIListView","UIListView","Layout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIListView");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIListView_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIListView_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIListView_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UIListView_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UIListView_create00);
   tolua_function(tolua_S,"addChild",tolua_LuaExtern_UIListView_addChild00);
   tolua_function(tolua_S,"removeAllChildren",tolua_LuaExtern_UIListView_removeAllChildren00);
   tolua_function(tolua_S,"removeChild",tolua_LuaExtern_UIListView_removeChild00);
   tolua_function(tolua_S,"onTouchBegan",tolua_LuaExtern_UIListView_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_LuaExtern_UIListView_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnded",tolua_LuaExtern_UIListView_onTouchEnded00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_LuaExtern_UIListView_onTouchCancelled00);
   tolua_function(tolua_S,"onTouchLongClicked",tolua_LuaExtern_UIListView_onTouchLongClicked00);
   tolua_function(tolua_S,"setDirection",tolua_LuaExtern_UIListView_setDirection00);
   tolua_function(tolua_S,"getDirection",tolua_LuaExtern_UIListView_getDirection00);
   tolua_function(tolua_S,"initChildWithDataLength",tolua_LuaExtern_UIListView_initChildWithDataLength00);
   tolua_function(tolua_S,"getDataLength",tolua_LuaExtern_UIListView_getDataLength00);
   tolua_function(tolua_S,"getUpdateChild",tolua_LuaExtern_UIListView_getUpdateChild00);
   tolua_function(tolua_S,"getUpdateDataIndex",tolua_LuaExtern_UIListView_getUpdateDataIndex00);
   tolua_function(tolua_S,"getUpdateSuccess",tolua_LuaExtern_UIListView_getUpdateSuccess00);
   tolua_function(tolua_S,"setUpdateSuccess",tolua_LuaExtern_UIListView_setUpdateSuccess00);
   tolua_function(tolua_S,"addEventListenter",tolua_LuaExtern_UIListView_addEventListenter00);
   tolua_function(tolua_S,"addInitChildEvent",tolua_LuaExtern_UIListView_addInitChildEvent00);
   tolua_function(tolua_S,"addUpdateChildEvent",tolua_LuaExtern_UIListView_addUpdateChildEvent00);
   tolua_function(tolua_S,"update",tolua_LuaExtern_UIListView_update00);
   tolua_function(tolua_S,"doLayout",tolua_LuaExtern_UIListView_doLayout00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UIListView_getDescription00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"LoadingBarTypeLeft",LoadingBarTypeLeft);
  tolua_constant(tolua_S,"LoadingBarTypeRight",LoadingBarTypeRight);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UILoadingBar","UILoadingBar","UIWidget",tolua_collect_UILoadingBar);
  #else
  tolua_cclass(tolua_S,"UILoadingBar","UILoadingBar","UIWidget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UILoadingBar");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UILoadingBar_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UILoadingBar_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UILoadingBar_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UILoadingBar_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UILoadingBar_create00);
   tolua_function(tolua_S,"setDirection",tolua_LuaExtern_UILoadingBar_setDirection00);
   tolua_function(tolua_S,"getDirection",tolua_LuaExtern_UILoadingBar_getDirection00);
   tolua_function(tolua_S,"loadTexture",tolua_LuaExtern_UILoadingBar_loadTexture00);
   tolua_function(tolua_S,"setPercent",tolua_LuaExtern_UILoadingBar_setPercent00);
   tolua_function(tolua_S,"getPercent",tolua_LuaExtern_UILoadingBar_getPercent00);
   tolua_function(tolua_S,"setScale9Enabled",tolua_LuaExtern_UILoadingBar_setScale9Enabled00);
   tolua_function(tolua_S,"setCapInsets",tolua_LuaExtern_UILoadingBar_setCapInsets00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_LuaExtern_UILoadingBar_ignoreContentAdaptWithSize00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_UILoadingBar_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_LuaExtern_UILoadingBar_getVirtualRenderer00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UILoadingBar_getDescription00);
   tolua_function(tolua_S,"setTexture",tolua_LuaExtern_UILoadingBar_setTexture00);
   tolua_function(tolua_S,"setScale9Size",tolua_LuaExtern_UILoadingBar_setScale9Size00);
   tolua_function(tolua_S,"setScale9Enable",tolua_LuaExtern_UILoadingBar_setScale9Enable00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"PAGEVIEW_EVENT_TURNING",PAGEVIEW_EVENT_TURNING);
  tolua_constant(tolua_S,"PAGEVIEW_TOUCHLEFT",PAGEVIEW_TOUCHLEFT);
  tolua_constant(tolua_S,"PAGEVIEW_TOUCHRIGHT",PAGEVIEW_TOUCHRIGHT);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIPageView","UIPageView","Layout",tolua_collect_UIPageView);
  #else
  tolua_cclass(tolua_S,"UIPageView","UIPageView","Layout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIPageView");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIPageView_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIPageView_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIPageView_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UIPageView_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UIPageView_create00);
   tolua_function(tolua_S,"addWidgetToPage",tolua_LuaExtern_UIPageView_addWidgetToPage00);
   tolua_function(tolua_S,"addPage",tolua_LuaExtern_UIPageView_addPage00);
   tolua_function(tolua_S,"insertPage",tolua_LuaExtern_UIPageView_insertPage00);
   tolua_function(tolua_S,"removePage",tolua_LuaExtern_UIPageView_removePage00);
   tolua_function(tolua_S,"removePageAtIndex",tolua_LuaExtern_UIPageView_removePageAtIndex00);
   tolua_function(tolua_S,"scrollToPage",tolua_LuaExtern_UIPageView_scrollToPage00);
   tolua_function(tolua_S,"getCurPageIndex",tolua_LuaExtern_UIPageView_getCurPageIndex00);
   tolua_function(tolua_S,"addEventListener",tolua_LuaExtern_UIPageView_addEventListener00);
   tolua_function(tolua_S,"addPageTurningEvent",tolua_LuaExtern_UIPageView_addPageTurningEvent00);
   tolua_function(tolua_S,"removeChild",tolua_LuaExtern_UIPageView_removeChild00);
   tolua_function(tolua_S,"removeAllChildren",tolua_LuaExtern_UIPageView_removeAllChildren00);
   tolua_function(tolua_S,"onTouchBegan",tolua_LuaExtern_UIPageView_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_LuaExtern_UIPageView_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnded",tolua_LuaExtern_UIPageView_onTouchEnded00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_LuaExtern_UIPageView_onTouchCancelled00);
   tolua_function(tolua_S,"update",tolua_LuaExtern_UIPageView_update00);
   tolua_function(tolua_S,"doLayout",tolua_LuaExtern_UIPageView_doLayout00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UIPageView_getDescription00);
   tolua_function(tolua_S,"getPage",tolua_LuaExtern_UIPageView_getPage00);
   tolua_function(tolua_S,"removePage",tolua_LuaExtern_UIPageView_removePage01);
   tolua_function(tolua_S,"removePageAtIndex",tolua_LuaExtern_UIPageView_removePageAtIndex01);
   tolua_variable(tolua_S,"__UIScrollInterface__",tolua_get_UIPageView___UIScrollInterface__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIRootWidget","UIRootWidget","Layout",tolua_collect_UIRootWidget);
  #else
  tolua_cclass(tolua_S,"UIRootWidget","UIRootWidget","Layout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIRootWidget");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIRootWidget_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIRootWidget_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIRootWidget_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UIRootWidget_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UIRootWidget_create00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UIRootWidget_getDescription00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"SCROLLVIEW_DIR_NONE",SCROLLVIEW_DIR_NONE);
  tolua_constant(tolua_S,"SCROLLVIEW_DIR_VERTICAL",SCROLLVIEW_DIR_VERTICAL);
  tolua_constant(tolua_S,"SCROLLVIEW_DIR_HORIZONTAL",SCROLLVIEW_DIR_HORIZONTAL);
  tolua_constant(tolua_S,"SCROLLVIEW_MOVE_DIR_NONE",SCROLLVIEW_MOVE_DIR_NONE);
  tolua_constant(tolua_S,"SCROLLVIEW_MOVE_DIR_UP",SCROLLVIEW_MOVE_DIR_UP);
  tolua_constant(tolua_S,"SCROLLVIEW_MOVE_DIR_DOWN",SCROLLVIEW_MOVE_DIR_DOWN);
  tolua_constant(tolua_S,"SCROLLVIEW_MOVE_DIR_LEFT",SCROLLVIEW_MOVE_DIR_LEFT);
  tolua_constant(tolua_S,"SCROLLVIEW_MOVE_DIR_RIGHT",SCROLLVIEW_MOVE_DIR_RIGHT);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_SCROLL_TO_TOP",SCROLLVIEW_EVENT_SCROLL_TO_TOP);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_SCROLL_TO_BOTTOM",SCROLLVIEW_EVENT_SCROLL_TO_BOTTOM);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_SCROLL_TO_LEFT",SCROLLVIEW_EVENT_SCROLL_TO_LEFT);
  tolua_constant(tolua_S,"SCROLLVIEW_EVENT_SCROLL_TO_RIGHT",SCROLLVIEW_EVENT_SCROLL_TO_RIGHT);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIScrollView","UIScrollView","Layout",tolua_collect_UIScrollView);
  #else
  tolua_cclass(tolua_S,"UIScrollView","UIScrollView","Layout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIScrollView");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIScrollView_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIScrollView_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIScrollView_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UIScrollView_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UIScrollView_create00);
   tolua_function(tolua_S,"setDirection",tolua_LuaExtern_UIScrollView_setDirection00);
   tolua_function(tolua_S,"getDirection",tolua_LuaExtern_UIScrollView_getDirection00);
   tolua_function(tolua_S,"getInnerContainer",tolua_LuaExtern_UIScrollView_getInnerContainer00);
   tolua_function(tolua_S,"scrollToBottom",tolua_LuaExtern_UIScrollView_scrollToBottom00);
   tolua_function(tolua_S,"scrollToTop",tolua_LuaExtern_UIScrollView_scrollToTop00);
   tolua_function(tolua_S,"setInnerContainerSize",tolua_LuaExtern_UIScrollView_setInnerContainerSize00);
   tolua_function(tolua_S,"getInnerContainerSize",tolua_LuaExtern_UIScrollView_getInnerContainerSize00);
   tolua_function(tolua_S,"addEventListener",tolua_LuaExtern_UIScrollView_addEventListener00);
   tolua_function(tolua_S,"addScrollToTopEvent",tolua_LuaExtern_UIScrollView_addScrollToTopEvent00);
   tolua_function(tolua_S,"addScrollToBottomEvent",tolua_LuaExtern_UIScrollView_addScrollToBottomEvent00);
   tolua_function(tolua_S,"addScrollToLeftEvent",tolua_LuaExtern_UIScrollView_addScrollToLeftEvent00);
   tolua_function(tolua_S,"addScrollToRightEvent",tolua_LuaExtern_UIScrollView_addScrollToRightEvent00);
   tolua_function(tolua_S,"addChild",tolua_LuaExtern_UIScrollView_addChild00);
   tolua_function(tolua_S,"removeAllChildren",tolua_LuaExtern_UIScrollView_removeAllChildren00);
   tolua_function(tolua_S,"removeChild",tolua_LuaExtern_UIScrollView_removeChild00);
   tolua_function(tolua_S,"getChildren",tolua_LuaExtern_UIScrollView_getChildren00);
   tolua_function(tolua_S,"onTouchBegan",tolua_LuaExtern_UIScrollView_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_LuaExtern_UIScrollView_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnded",tolua_LuaExtern_UIScrollView_onTouchEnded00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_LuaExtern_UIScrollView_onTouchCancelled00);
   tolua_function(tolua_S,"onTouchLongClicked",tolua_LuaExtern_UIScrollView_onTouchLongClicked00);
   tolua_function(tolua_S,"update",tolua_LuaExtern_UIScrollView_update00);
   tolua_function(tolua_S,"setLayoutType",tolua_LuaExtern_UIScrollView_setLayoutType00);
   tolua_function(tolua_S,"getLayoutType",tolua_LuaExtern_UIScrollView_getLayoutType00);
   tolua_function(tolua_S,"doLayout",tolua_LuaExtern_UIScrollView_doLayout00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UIScrollView_getDescription00);
   tolua_variable(tolua_S,"__UIScrollInterface__",tolua_get_UIScrollView___UIScrollInterface__,NULL);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"SLIDER_PERCENTCHANGED",SLIDER_PERCENTCHANGED);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UISlider","UISlider","UIWidget",tolua_collect_UISlider);
  #else
  tolua_cclass(tolua_S,"UISlider","UISlider","UIWidget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UISlider");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UISlider_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UISlider_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UISlider_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UISlider_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UISlider_create00);
   tolua_function(tolua_S,"loadBarTexture",tolua_LuaExtern_UISlider_loadBarTexture00);
   tolua_function(tolua_S,"setScale9Enabled",tolua_LuaExtern_UISlider_setScale9Enabled00);
   tolua_function(tolua_S,"setCapInsets",tolua_LuaExtern_UISlider_setCapInsets00);
   tolua_function(tolua_S,"setCapInsetsBarRenderer",tolua_LuaExtern_UISlider_setCapInsetsBarRenderer00);
   tolua_function(tolua_S,"setCapInsetProgressBarRebderer",tolua_LuaExtern_UISlider_setCapInsetProgressBarRebderer00);
   tolua_function(tolua_S,"loadSlidBallTextures",tolua_LuaExtern_UISlider_loadSlidBallTextures00);
   tolua_function(tolua_S,"loadSlidBallTextureNormal",tolua_LuaExtern_UISlider_loadSlidBallTextureNormal00);
   tolua_function(tolua_S,"loadSlidBallTexturePressed",tolua_LuaExtern_UISlider_loadSlidBallTexturePressed00);
   tolua_function(tolua_S,"loadSlidBallTextureDisabled",tolua_LuaExtern_UISlider_loadSlidBallTextureDisabled00);
   tolua_function(tolua_S,"loadProgressBarTexture",tolua_LuaExtern_UISlider_loadProgressBarTexture00);
   tolua_function(tolua_S,"setPercent",tolua_LuaExtern_UISlider_setPercent00);
   tolua_function(tolua_S,"getPercent",tolua_LuaExtern_UISlider_getPercent00);
   tolua_function(tolua_S,"addEventListener",tolua_LuaExtern_UISlider_addEventListener00);
   tolua_function(tolua_S,"onTouchBegan",tolua_LuaExtern_UISlider_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_LuaExtern_UISlider_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnded",tolua_LuaExtern_UISlider_onTouchEnded00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_LuaExtern_UISlider_onTouchCancelled00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_UISlider_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_LuaExtern_UISlider_getVirtualRenderer00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_LuaExtern_UISlider_ignoreContentAdaptWithSize00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UISlider_getDescription00);
   tolua_function(tolua_S,"setBarTexture",tolua_LuaExtern_UISlider_setBarTexture00);
   tolua_function(tolua_S,"setSlidBallTextures",tolua_LuaExtern_UISlider_setSlidBallTextures00);
   tolua_function(tolua_S,"setSlidBallNormalTexture",tolua_LuaExtern_UISlider_setSlidBallNormalTexture00);
   tolua_function(tolua_S,"setSlidBallPressedTexture",tolua_LuaExtern_UISlider_setSlidBallPressedTexture00);
   tolua_function(tolua_S,"setSlidBallDisabledTexture",tolua_LuaExtern_UISlider_setSlidBallDisabledTexture00);
   tolua_function(tolua_S,"setProgressBarTexture",tolua_LuaExtern_UISlider_setProgressBarTexture00);
   tolua_function(tolua_S,"setSlidBallPercent",tolua_LuaExtern_UISlider_setSlidBallPercent00);
   tolua_function(tolua_S,"setScale9Size",tolua_LuaExtern_UISlider_setScale9Size00);
   tolua_function(tolua_S,"setScale9Enable",tolua_LuaExtern_UISlider_setScale9Enable00);
   tolua_function(tolua_S,"addPercentChangedEvent",tolua_LuaExtern_UISlider_addPercentChangedEvent00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UICCTextField","UICCTextField","CCTextFieldTTF",tolua_collect_UICCTextField);
  #else
  tolua_cclass(tolua_S,"UICCTextField","UICCTextField","CCTextFieldTTF",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UICCTextField");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UICCTextField_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UICCTextField_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UICCTextField_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UICCTextField_delete00);
   tolua_function(tolua_S,"onEnter",tolua_LuaExtern_UICCTextField_onEnter00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UICCTextField_create00);
   tolua_function(tolua_S,"onTextFieldAttachWithIME",tolua_LuaExtern_UICCTextField_onTextFieldAttachWithIME00);
   tolua_function(tolua_S,"onTextFieldDetachWithIME",tolua_LuaExtern_UICCTextField_onTextFieldDetachWithIME00);
   tolua_function(tolua_S,"onTextFieldInsertText",tolua_LuaExtern_UICCTextField_onTextFieldInsertText00);
   tolua_function(tolua_S,"onTextFieldDeleteBackward",tolua_LuaExtern_UICCTextField_onTextFieldDeleteBackward00);
   tolua_function(tolua_S,"insertText",tolua_LuaExtern_UICCTextField_insertText00);
   tolua_function(tolua_S,"deleteBackward",tolua_LuaExtern_UICCTextField_deleteBackward00);
   tolua_function(tolua_S,"openIME",tolua_LuaExtern_UICCTextField_openIME00);
   tolua_function(tolua_S,"closeIME",tolua_LuaExtern_UICCTextField_closeIME00);
   tolua_function(tolua_S,"setMaxLengthEnabled",tolua_LuaExtern_UICCTextField_setMaxLengthEnabled00);
   tolua_function(tolua_S,"isMaxLengthEnabled",tolua_LuaExtern_UICCTextField_isMaxLengthEnabled00);
   tolua_function(tolua_S,"setMaxLength",tolua_LuaExtern_UICCTextField_setMaxLength00);
   tolua_function(tolua_S,"getMaxLength",tolua_LuaExtern_UICCTextField_getMaxLength00);
   tolua_function(tolua_S,"getCharCount",tolua_LuaExtern_UICCTextField_getCharCount00);
   tolua_function(tolua_S,"setPasswordEnabled",tolua_LuaExtern_UICCTextField_setPasswordEnabled00);
   tolua_function(tolua_S,"isPasswordEnabled",tolua_LuaExtern_UICCTextField_isPasswordEnabled00);
   tolua_function(tolua_S,"setPasswordStyleText",tolua_LuaExtern_UICCTextField_setPasswordStyleText00);
   tolua_function(tolua_S,"setPasswordText",tolua_LuaExtern_UICCTextField_setPasswordText00);
   tolua_function(tolua_S,"setAttachWithIME",tolua_LuaExtern_UICCTextField_setAttachWithIME00);
   tolua_function(tolua_S,"getAttachWithIME",tolua_LuaExtern_UICCTextField_getAttachWithIME00);
   tolua_function(tolua_S,"setDetachWithIME",tolua_LuaExtern_UICCTextField_setDetachWithIME00);
   tolua_function(tolua_S,"getDetachWithIME",tolua_LuaExtern_UICCTextField_getDetachWithIME00);
   tolua_function(tolua_S,"setInsertText",tolua_LuaExtern_UICCTextField_setInsertText00);
   tolua_function(tolua_S,"getInsertText",tolua_LuaExtern_UICCTextField_getInsertText00);
   tolua_function(tolua_S,"setDeleteBackward",tolua_LuaExtern_UICCTextField_setDeleteBackward00);
   tolua_function(tolua_S,"getDeleteBackward",tolua_LuaExtern_UICCTextField_getDeleteBackward00);
   tolua_variable(tolua_S,"__CCTextFieldDelegate__",tolua_get_UICCTextField___CCTextFieldDelegate__,NULL);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"TEXTFIELD_EVENT_ATTACH_WITH_IME",TEXTFIELD_EVENT_ATTACH_WITH_IME);
  tolua_constant(tolua_S,"TEXTFIELD_EVENT_DETACH_WITH_IME",TEXTFIELD_EVENT_DETACH_WITH_IME);
  tolua_constant(tolua_S,"TEXTFIELD_EVENT_INDERT_TEXT",TEXTFIELD_EVENT_INDERT_TEXT);
  tolua_constant(tolua_S,"TEXTFIELD_EVENT_DELETE_BACKWARD",TEXTFIELD_EVENT_DELETE_BACKWARD);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UITextField","UITextField","UIWidget",tolua_collect_UITextField);
  #else
  tolua_cclass(tolua_S,"UITextField","UITextField","UIWidget",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UITextField");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UITextField_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UITextField_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UITextField_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UITextField_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UITextField_create00);
   tolua_function(tolua_S,"init",tolua_LuaExtern_UITextField_init00);
   tolua_function(tolua_S,"initRenderer",tolua_LuaExtern_UITextField_initRenderer00);
   tolua_function(tolua_S,"setTouchSize",tolua_LuaExtern_UITextField_setTouchSize00);
   tolua_function(tolua_S,"setText",tolua_LuaExtern_UITextField_setText00);
   tolua_function(tolua_S,"setPlaceHolder",tolua_LuaExtern_UITextField_setPlaceHolder00);
   tolua_function(tolua_S,"setFontSize",tolua_LuaExtern_UITextField_setFontSize00);
   tolua_function(tolua_S,"setFontName",tolua_LuaExtern_UITextField_setFontName00);
   tolua_function(tolua_S,"didNotSelectSelf",tolua_LuaExtern_UITextField_didNotSelectSelf00);
   tolua_function(tolua_S,"getStringValue",tolua_LuaExtern_UITextField_getStringValue00);
   tolua_function(tolua_S,"onTouchBegan",tolua_LuaExtern_UITextField_onTouchBegan00);
   tolua_function(tolua_S,"setMaxLengthEnabled",tolua_LuaExtern_UITextField_setMaxLengthEnabled00);
   tolua_function(tolua_S,"isMaxLengthEnabled",tolua_LuaExtern_UITextField_isMaxLengthEnabled00);
   tolua_function(tolua_S,"setMaxLength",tolua_LuaExtern_UITextField_setMaxLength00);
   tolua_function(tolua_S,"getMaxLength",tolua_LuaExtern_UITextField_getMaxLength00);
   tolua_function(tolua_S,"setPasswordEnabled",tolua_LuaExtern_UITextField_setPasswordEnabled00);
   tolua_function(tolua_S,"isPasswordEnabled",tolua_LuaExtern_UITextField_isPasswordEnabled00);
   tolua_function(tolua_S,"setPasswordStyleText",tolua_LuaExtern_UITextField_setPasswordStyleText00);
   tolua_function(tolua_S,"update",tolua_LuaExtern_UITextField_update00);
   tolua_function(tolua_S,"getAttachWithIME",tolua_LuaExtern_UITextField_getAttachWithIME00);
   tolua_function(tolua_S,"setAttachWithIME",tolua_LuaExtern_UITextField_setAttachWithIME00);
   tolua_function(tolua_S,"getDetachWithIME",tolua_LuaExtern_UITextField_getDetachWithIME00);
   tolua_function(tolua_S,"setDetachWithIME",tolua_LuaExtern_UITextField_setDetachWithIME00);
   tolua_function(tolua_S,"getInsertText",tolua_LuaExtern_UITextField_getInsertText00);
   tolua_function(tolua_S,"setInsertText",tolua_LuaExtern_UITextField_setInsertText00);
   tolua_function(tolua_S,"getDeleteBackward",tolua_LuaExtern_UITextField_getDeleteBackward00);
   tolua_function(tolua_S,"setDeleteBackward",tolua_LuaExtern_UITextField_setDeleteBackward00);
   tolua_function(tolua_S,"addEventListener",tolua_LuaExtern_UITextField_addEventListener00);
   tolua_function(tolua_S,"addAttachWithIMEEvent",tolua_LuaExtern_UITextField_addAttachWithIMEEvent00);
   tolua_function(tolua_S,"addDetachWithIMEEvent",tolua_LuaExtern_UITextField_addDetachWithIMEEvent00);
   tolua_function(tolua_S,"addInsertTextEvent",tolua_LuaExtern_UITextField_addInsertTextEvent00);
   tolua_function(tolua_S,"addDeleteBackwardEvent",tolua_LuaExtern_UITextField_addDeleteBackwardEvent00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_LuaExtern_UITextField_setAnchorPoint00);
   tolua_function(tolua_S,"setColor",tolua_LuaExtern_UITextField_setColor00);
   tolua_function(tolua_S,"setOpacity",tolua_LuaExtern_UITextField_setOpacity00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UITextField_getDescription00);
   tolua_function(tolua_S,"setMaxLengthEnable",tolua_LuaExtern_UITextField_setMaxLengthEnable00);
   tolua_function(tolua_S,"setPasswordEnable",tolua_LuaExtern_UITextField_setPasswordEnable00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_UITextField_getContentSize00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_LuaExtern_UITextField_getVirtualRenderer00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"BRIGHT_NONE",BRIGHT_NONE);
  tolua_constant(tolua_S,"BRIGHT_NORMAL",BRIGHT_NORMAL);
  tolua_constant(tolua_S,"BRIGHT_HIGHLIGHT",BRIGHT_HIGHLIGHT);
  tolua_constant(tolua_S,"WidgetTypeWidget",WidgetTypeWidget);
  tolua_constant(tolua_S,"WidgetTypeContainer",WidgetTypeContainer);
  tolua_constant(tolua_S,"UI_TEX_TYPE_LOCAL",UI_TEX_TYPE_LOCAL);
  tolua_constant(tolua_S,"UI_TEX_TYPE_PLIST",UI_TEX_TYPE_PLIST);
  tolua_constant(tolua_S,"TOUCH_EVENT_BEGAN",TOUCH_EVENT_BEGAN);
  tolua_constant(tolua_S,"TOUCH_EVENT_MOVED",TOUCH_EVENT_MOVED);
  tolua_constant(tolua_S,"TOUCH_EVENT_ENDED",TOUCH_EVENT_ENDED);
  tolua_constant(tolua_S,"TOUCH_EVENT_CANCELED",TOUCH_EVENT_CANCELED);
  tolua_constant(tolua_S,"SIZE_ABSOLUTE",SIZE_ABSOLUTE);
  tolua_constant(tolua_S,"SIZE_PERCENT",SIZE_PERCENT);
  tolua_constant(tolua_S,"POSITION_ABSOLUTE",POSITION_ABSOLUTE);
  tolua_constant(tolua_S,"POSITION_PERCENT",POSITION_PERCENT);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"UIWidget","UIWidget","CCObject",tolua_collect_UIWidget);
  #else
  tolua_cclass(tolua_S,"UIWidget","UIWidget","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"UIWidget");
   tolua_function(tolua_S,"new",tolua_LuaExtern_UIWidget_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_UIWidget_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_UIWidget_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_UIWidget_delete00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_UIWidget_create00);
   tolua_function(tolua_S,"setEnabled",tolua_LuaExtern_UIWidget_setEnabled00);
   tolua_function(tolua_S,"isEnabled",tolua_LuaExtern_UIWidget_isEnabled00);
   tolua_function(tolua_S,"setVisible",tolua_LuaExtern_UIWidget_setVisible00);
   tolua_function(tolua_S,"isVisible",tolua_LuaExtern_UIWidget_isVisible00);
   tolua_function(tolua_S,"setBright",tolua_LuaExtern_UIWidget_setBright00);
   tolua_function(tolua_S,"isBright",tolua_LuaExtern_UIWidget_isBright00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_LuaExtern_UIWidget_setTouchEnabled00);
   tolua_function(tolua_S,"setBrightStyle",tolua_LuaExtern_UIWidget_setBrightStyle00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_LuaExtern_UIWidget_isTouchEnabled00);
   tolua_function(tolua_S,"isFocused",tolua_LuaExtern_UIWidget_isFocused00);
   tolua_function(tolua_S,"setFocused",tolua_LuaExtern_UIWidget_setFocused00);
   tolua_function(tolua_S,"setZOrder",tolua_LuaExtern_UIWidget_setZOrder00);
   tolua_function(tolua_S,"getZOrder",tolua_LuaExtern_UIWidget_getZOrder00);
   tolua_function(tolua_S,"getLeftInParent",tolua_LuaExtern_UIWidget_getLeftInParent00);
   tolua_function(tolua_S,"getBottomInParent",tolua_LuaExtern_UIWidget_getBottomInParent00);
   tolua_function(tolua_S,"getRightInParent",tolua_LuaExtern_UIWidget_getRightInParent00);
   tolua_function(tolua_S,"getTopInParent",tolua_LuaExtern_UIWidget_getTopInParent00);
   tolua_function(tolua_S,"addChild",tolua_LuaExtern_UIWidget_addChild00);
   tolua_function(tolua_S,"removeChild",tolua_LuaExtern_UIWidget_removeChild00);
   tolua_function(tolua_S,"removeFromParent",tolua_LuaExtern_UIWidget_removeFromParent00);
   tolua_function(tolua_S,"removeAllChildren",tolua_LuaExtern_UIWidget_removeAllChildren00);
   tolua_function(tolua_S,"disableUpdate",tolua_LuaExtern_UIWidget_disableUpdate00);
   tolua_function(tolua_S,"reorderChild",tolua_LuaExtern_UIWidget_reorderChild00);
   tolua_function(tolua_S,"getChildByName",tolua_LuaExtern_UIWidget_getChildByName00);
   tolua_function(tolua_S,"getChildByTag",tolua_LuaExtern_UIWidget_getChildByTag00);
   tolua_function(tolua_S,"getChildren",tolua_LuaExtern_UIWidget_getChildren00);
   tolua_function(tolua_S,"getRenderer",tolua_LuaExtern_UIWidget_getRenderer00);
   tolua_function(tolua_S,"addRenderer",tolua_LuaExtern_UIWidget_addRenderer00);
   tolua_function(tolua_S,"removeRenderer",tolua_LuaExtern_UIWidget_removeRenderer00);
   tolua_function(tolua_S,"setParent",tolua_LuaExtern_UIWidget_setParent00);
   tolua_function(tolua_S,"getParent",tolua_LuaExtern_UIWidget_getParent00);
   tolua_function(tolua_S,"addTouchEventListener",tolua_LuaExtern_UIWidget_addTouchEventListener00);
   tolua_function(tolua_S,"setPosition",tolua_LuaExtern_UIWidget_setPosition00);
   tolua_function(tolua_S,"setPositionPercent",tolua_LuaExtern_UIWidget_setPositionPercent00);
   tolua_function(tolua_S,"getPosition",tolua_LuaExtern_UIWidget_getPosition00);
   tolua_function(tolua_S,"getPositionPercent",tolua_LuaExtern_UIWidget_getPositionPercent00);
   tolua_function(tolua_S,"setPositionType",tolua_LuaExtern_UIWidget_setPositionType00);
   tolua_function(tolua_S,"getPositionType",tolua_LuaExtern_UIWidget_getPositionType00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_LuaExtern_UIWidget_setAnchorPoint00);
   tolua_function(tolua_S,"getAnchorPoint",tolua_LuaExtern_UIWidget_getAnchorPoint00);
   tolua_function(tolua_S,"setScale",tolua_LuaExtern_UIWidget_setScale00);
   tolua_function(tolua_S,"getScale",tolua_LuaExtern_UIWidget_getScale00);
   tolua_function(tolua_S,"setScaleX",tolua_LuaExtern_UIWidget_setScaleX00);
   tolua_function(tolua_S,"getScaleX",tolua_LuaExtern_UIWidget_getScaleX00);
   tolua_function(tolua_S,"setScaleY",tolua_LuaExtern_UIWidget_setScaleY00);
   tolua_function(tolua_S,"getScaleY",tolua_LuaExtern_UIWidget_getScaleY00);
   tolua_function(tolua_S,"setRotation",tolua_LuaExtern_UIWidget_setRotation00);
   tolua_function(tolua_S,"getRotation",tolua_LuaExtern_UIWidget_getRotation00);
   tolua_function(tolua_S,"setRotationX",tolua_LuaExtern_UIWidget_setRotationX00);
   tolua_function(tolua_S,"getRotationX",tolua_LuaExtern_UIWidget_getRotationX00);
   tolua_function(tolua_S,"setRotationY",tolua_LuaExtern_UIWidget_setRotationY00);
   tolua_function(tolua_S,"getRotationY",tolua_LuaExtern_UIWidget_getRotationY00);
   tolua_function(tolua_S,"setFlipX",tolua_LuaExtern_UIWidget_setFlipX00);
   tolua_function(tolua_S,"isFlipX",tolua_LuaExtern_UIWidget_isFlipX00);
   tolua_function(tolua_S,"setFlipY",tolua_LuaExtern_UIWidget_setFlipY00);
   tolua_function(tolua_S,"isFlipY",tolua_LuaExtern_UIWidget_isFlipY00);
   tolua_function(tolua_S,"setColor",tolua_LuaExtern_UIWidget_setColor00);
   tolua_function(tolua_S,"getColor",tolua_LuaExtern_UIWidget_getColor00);
   tolua_function(tolua_S,"setOpacity",tolua_LuaExtern_UIWidget_setOpacity00);
   tolua_function(tolua_S,"getOpacity",tolua_LuaExtern_UIWidget_getOpacity00);
   tolua_function(tolua_S,"isCascadeOpacityEnabled",tolua_LuaExtern_UIWidget_isCascadeOpacityEnabled00);
   tolua_function(tolua_S,"setCascadeOpacityEnabled",tolua_LuaExtern_UIWidget_setCascadeOpacityEnabled00);
   tolua_function(tolua_S,"isCascadeColorEnabled",tolua_LuaExtern_UIWidget_isCascadeColorEnabled00);
   tolua_function(tolua_S,"setCascadeColorEnabled",tolua_LuaExtern_UIWidget_setCascadeColorEnabled00);
   tolua_function(tolua_S,"setBlendFunc",tolua_LuaExtern_UIWidget_setBlendFunc00);
   tolua_function(tolua_S,"setActionManager",tolua_LuaExtern_UIWidget_setActionManager00);
   tolua_function(tolua_S,"getActionManager",tolua_LuaExtern_UIWidget_getActionManager00);
   tolua_function(tolua_S,"runAction",tolua_LuaExtern_UIWidget_runAction00);
   tolua_function(tolua_S,"stopAllActions",tolua_LuaExtern_UIWidget_stopAllActions00);
   tolua_function(tolua_S,"stopAction",tolua_LuaExtern_UIWidget_stopAction00);
   tolua_function(tolua_S,"stopActionByTag",tolua_LuaExtern_UIWidget_stopActionByTag00);
   tolua_function(tolua_S,"getActionByTag",tolua_LuaExtern_UIWidget_getActionByTag00);
   tolua_function(tolua_S,"didNotSelectSelf",tolua_LuaExtern_UIWidget_didNotSelectSelf00);
   tolua_function(tolua_S,"clippingParentAreaContainPoint",tolua_LuaExtern_UIWidget_clippingParentAreaContainPoint00);
   tolua_function(tolua_S,"checkChildInfo",tolua_LuaExtern_UIWidget_checkChildInfo00);
   tolua_function(tolua_S,"getTouchStartPos",tolua_LuaExtern_UIWidget_getTouchStartPos00);
   tolua_function(tolua_S,"getTouchMovePos",tolua_LuaExtern_UIWidget_getTouchMovePos00);
   tolua_function(tolua_S,"getTouchEndPos",tolua_LuaExtern_UIWidget_getTouchEndPos00);
   tolua_function(tolua_S,"setTag",tolua_LuaExtern_UIWidget_setTag00);
   tolua_function(tolua_S,"getTag",tolua_LuaExtern_UIWidget_getTag00);
   tolua_function(tolua_S,"setName",tolua_LuaExtern_UIWidget_setName00);
   tolua_function(tolua_S,"getName",tolua_LuaExtern_UIWidget_getName00);
   tolua_function(tolua_S,"getWidgetType",tolua_LuaExtern_UIWidget_getWidgetType00);
   tolua_function(tolua_S,"setSize",tolua_LuaExtern_UIWidget_setSize00);
   tolua_function(tolua_S,"setSizePercent",tolua_LuaExtern_UIWidget_setSizePercent00);
   tolua_function(tolua_S,"setSizeType",tolua_LuaExtern_UIWidget_setSizeType00);
   tolua_function(tolua_S,"getSizeType",tolua_LuaExtern_UIWidget_getSizeType00);
   tolua_function(tolua_S,"getSize",tolua_LuaExtern_UIWidget_getSize00);
   tolua_function(tolua_S,"getSizePercent",tolua_LuaExtern_UIWidget_getSizePercent00);
   tolua_function(tolua_S,"hitTest",tolua_LuaExtern_UIWidget_hitTest00);
   tolua_function(tolua_S,"onTouchBegan",tolua_LuaExtern_UIWidget_onTouchBegan00);
   tolua_function(tolua_S,"onTouchMoved",tolua_LuaExtern_UIWidget_onTouchMoved00);
   tolua_function(tolua_S,"onTouchEnded",tolua_LuaExtern_UIWidget_onTouchEnded00);
   tolua_function(tolua_S,"onTouchCancelled",tolua_LuaExtern_UIWidget_onTouchCancelled00);
   tolua_function(tolua_S,"onTouchLongClicked",tolua_LuaExtern_UIWidget_onTouchLongClicked00);
   tolua_function(tolua_S,"setLayoutParameter",tolua_LuaExtern_UIWidget_setLayoutParameter00);
   tolua_function(tolua_S,"getLayoutParameter",tolua_LuaExtern_UIWidget_getLayoutParameter00);
   tolua_function(tolua_S,"ignoreContentAdaptWithSize",tolua_LuaExtern_UIWidget_ignoreContentAdaptWithSize00);
   tolua_function(tolua_S,"isIgnoreContentAdaptWithSize",tolua_LuaExtern_UIWidget_isIgnoreContentAdaptWithSize00);
   tolua_function(tolua_S,"getWorldPosition",tolua_LuaExtern_UIWidget_getWorldPosition00);
   tolua_function(tolua_S,"convertToWorldSpace",tolua_LuaExtern_UIWidget_convertToWorldSpace00);
   tolua_function(tolua_S,"getVirtualRenderer",tolua_LuaExtern_UIWidget_getVirtualRenderer00);
   tolua_function(tolua_S,"setUpdateEnabled",tolua_LuaExtern_UIWidget_setUpdateEnabled00);
   tolua_function(tolua_S,"isUpdateEnabled",tolua_LuaExtern_UIWidget_isUpdateEnabled00);
   tolua_function(tolua_S,"getContentSize",tolua_LuaExtern_UIWidget_getContentSize00);
   tolua_function(tolua_S,"getDescription",tolua_LuaExtern_UIWidget_getDescription00);
   tolua_function(tolua_S,"onEnter",tolua_LuaExtern_UIWidget_onEnter00);
   tolua_function(tolua_S,"onExit",tolua_LuaExtern_UIWidget_onExit00);
   tolua_function(tolua_S,"setTouchEnable",tolua_LuaExtern_UIWidget_setTouchEnable00);
   tolua_function(tolua_S,"disable",tolua_LuaExtern_UIWidget_disable00);
   tolua_function(tolua_S,"active",tolua_LuaExtern_UIWidget_active00);
   tolua_function(tolua_S,"isActive",tolua_LuaExtern_UIWidget_isActive00);
   tolua_function(tolua_S,"setBright",tolua_LuaExtern_UIWidget_setBright01);
   tolua_function(tolua_S,"getRect",tolua_LuaExtern_UIWidget_getRect00);
   tolua_function(tolua_S,"getValidNode",tolua_LuaExtern_UIWidget_getValidNode00);
   tolua_function(tolua_S,"setWidgetZOrder",tolua_LuaExtern_UIWidget_setWidgetZOrder00);
   tolua_function(tolua_S,"getWidgetZOrder",tolua_LuaExtern_UIWidget_getWidgetZOrder00);
   tolua_function(tolua_S,"getRelativeLeftPos",tolua_LuaExtern_UIWidget_getRelativeLeftPos00);
   tolua_function(tolua_S,"getRelativeBottomPos",tolua_LuaExtern_UIWidget_getRelativeBottomPos00);
   tolua_function(tolua_S,"getRelativeRightPos",tolua_LuaExtern_UIWidget_getRelativeRightPos00);
   tolua_function(tolua_S,"getRelativeTopPos",tolua_LuaExtern_UIWidget_getRelativeTopPos00);
   tolua_function(tolua_S,"getContainerNode",tolua_LuaExtern_UIWidget_getContainerNode00);
   tolua_function(tolua_S,"setWidgetParent",tolua_LuaExtern_UIWidget_setWidgetParent00);
   tolua_function(tolua_S,"getWidgetParent",tolua_LuaExtern_UIWidget_getWidgetParent00);
   tolua_function(tolua_S,"setWidgetTag",tolua_LuaExtern_UIWidget_setWidgetTag00);
   tolua_function(tolua_S,"getWidgetTag",tolua_LuaExtern_UIWidget_getWidgetTag00);
   tolua_function(tolua_S,"addCCNode",tolua_LuaExtern_UIWidget_addCCNode00);
   tolua_function(tolua_S,"removeCCNode",tolua_LuaExtern_UIWidget_removeCCNode00);
   tolua_function(tolua_S,"addPushDownEvent",tolua_LuaExtern_UIWidget_addPushDownEvent00);
   tolua_function(tolua_S,"addMoveEvent",tolua_LuaExtern_UIWidget_addMoveEvent00);
   tolua_function(tolua_S,"addReleaseEvent",tolua_LuaExtern_UIWidget_addReleaseEvent00);
   tolua_function(tolua_S,"addCancelEvent",tolua_LuaExtern_UIWidget_addCancelEvent00);
   tolua_function(tolua_S,"removeChild",tolua_LuaExtern_UIWidget_removeChild01);
   tolua_function(tolua_S,"removeFromParentAndCleanup",tolua_LuaExtern_UIWidget_removeFromParentAndCleanup00);
   tolua_function(tolua_S,"removeAllChildrenAndCleanUp",tolua_LuaExtern_UIWidget_removeAllChildrenAndCleanUp00);
   tolua_function(tolua_S,"setActionTag",tolua_LuaExtern_UIWidget_setActionTag00);
   tolua_function(tolua_S,"getActionTag",tolua_LuaExtern_UIWidget_getActionTag00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"GUIRenderer","GUIRenderer","CCNodeRGBA",tolua_collect_GUIRenderer);
  #else
  tolua_cclass(tolua_S,"GUIRenderer","GUIRenderer","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"GUIRenderer");
   tolua_function(tolua_S,"new",tolua_LuaExtern_GUIRenderer_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_GUIRenderer_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_GUIRenderer_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_GUIRenderer_delete00);
   tolua_function(tolua_S,"visit",tolua_LuaExtern_GUIRenderer_visit00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_GUIRenderer_create00);
   tolua_function(tolua_S,"setEnabled",tolua_LuaExtern_GUIRenderer_setEnabled00);
   tolua_function(tolua_S,"isEnabled",tolua_LuaExtern_GUIRenderer_isEnabled00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Armature","Armature","CCNodeRGBA",tolua_collect_Armature);
  #else
  tolua_cclass(tolua_S,"Armature","Armature","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Armature");
   tolua_function(tolua_S,"create",tolua_LuaExtern_Armature_create00);
   tolua_function(tolua_S,"create",tolua_LuaExtern_Armature_create01);
   tolua_function(tolua_S,"create",tolua_LuaExtern_Armature_create02);
   tolua_function(tolua_S,"new",tolua_LuaExtern_Armature_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_Armature_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_Armature_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_Armature_delete00);
   tolua_function(tolua_S,"init",tolua_LuaExtern_Armature_init00);
   tolua_function(tolua_S,"init",tolua_LuaExtern_Armature_init01);
   tolua_function(tolua_S,"init",tolua_LuaExtern_Armature_init02);
   tolua_function(tolua_S,"addBone",tolua_LuaExtern_Armature_addBone00);
   tolua_function(tolua_S,"getBone",tolua_LuaExtern_Armature_getBone00);
   tolua_function(tolua_S,"changeBoneParent",tolua_LuaExtern_Armature_changeBoneParent00);
   tolua_function(tolua_S,"removeBone",tolua_LuaExtern_Armature_removeBone00);
   tolua_function(tolua_S,"getBoneDic",tolua_LuaExtern_Armature_getBoneDic00);
   tolua_function(tolua_S,"getBoneAtPoint",tolua_LuaExtern_Armature_getBoneAtPoint00);
   tolua_function(tolua_S,"updateOffsetPoint",tolua_LuaExtern_Armature_updateOffsetPoint00);
   tolua_function(tolua_S,"visit",tolua_LuaExtern_Armature_visit00);
   tolua_function(tolua_S,"update",tolua_LuaExtern_Armature_update00);
   tolua_function(tolua_S,"draw",tolua_LuaExtern_Armature_draw00);
   tolua_function(tolua_S,"getNodeToParentTransform",tolua_LuaExtern_Armature_getNodeToParentTransform00);
   tolua_function(tolua_S,"getBoundingBox",tolua_LuaExtern_Armature_getBoundingBox00);
   tolua_function(tolua_S,"setBlendFunc",tolua_LuaExtern_Armature_setBlendFunc00);
   tolua_function(tolua_S,"getBlendFunc",tolua_LuaExtern_Armature_getBlendFunc00);
   tolua_function(tolua_S,"getAnimation",tolua_LuaExtern_Armature_getAnimation00);
   tolua_function(tolua_S,"setAnimation",tolua_LuaExtern_Armature_setAnimation00);
   tolua_function(tolua_S,"getArmatureData",tolua_LuaExtern_Armature_getArmatureData00);
   tolua_function(tolua_S,"setArmatureData",tolua_LuaExtern_Armature_setArmatureData00);
   tolua_function(tolua_S,"getBatchNode",tolua_LuaExtern_Armature_getBatchNode00);
   tolua_function(tolua_S,"setBatchNode",tolua_LuaExtern_Armature_setBatchNode00);
   tolua_function(tolua_S,"getName",tolua_LuaExtern_Armature_getName00);
   tolua_function(tolua_S,"setName",tolua_LuaExtern_Armature_setName00);
   tolua_function(tolua_S,"getTextureAtlas",tolua_LuaExtern_Armature_getTextureAtlas00);
   tolua_function(tolua_S,"setTextureAtlas",tolua_LuaExtern_Armature_setTextureAtlas00);
   tolua_function(tolua_S,"getParentBone",tolua_LuaExtern_Armature_getParentBone00);
   tolua_function(tolua_S,"setParentBone",tolua_LuaExtern_Armature_setParentBone00);
   tolua_variable(tolua_S,"__CCBlendProtocol__",tolua_get_Armature___CCBlendProtocol__,NULL);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"START",START);
  tolua_constant(tolua_S,"COMPLETE",COMPLETE);
  tolua_constant(tolua_S,"LOOP_COMPLETE",LOOP_COMPLETE);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ArmatureAnimation","ArmatureAnimation","ProcessBase",tolua_collect_ArmatureAnimation);
  #else
  tolua_cclass(tolua_S,"ArmatureAnimation","ArmatureAnimation","ProcessBase",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ArmatureAnimation");
   tolua_function(tolua_S,"create",tolua_LuaExtern_ArmatureAnimation_create00);
   tolua_function(tolua_S,"new",tolua_LuaExtern_ArmatureAnimation_new00);
   tolua_function(tolua_S,"new_local",tolua_LuaExtern_ArmatureAnimation_new00_local);
   tolua_function(tolua_S,".call",tolua_LuaExtern_ArmatureAnimation_new00_local);
   tolua_function(tolua_S,"delete",tolua_LuaExtern_ArmatureAnimation_delete00);
   tolua_function(tolua_S,"init",tolua_LuaExtern_ArmatureAnimation_init00);
   tolua_function(tolua_S,"setAnimationScale",tolua_LuaExtern_ArmatureAnimation_setAnimationScale00);
   tolua_function(tolua_S,"play",tolua_LuaExtern_ArmatureAnimation_play00);
   tolua_function(tolua_S,"playByIndex",tolua_LuaExtern_ArmatureAnimation_playByIndex00);
   tolua_function(tolua_S,"resume",tolua_LuaExtern_ArmatureAnimation_resume00);
   tolua_function(tolua_S,"stop",tolua_LuaExtern_ArmatureAnimation_stop00);
   tolua_function(tolua_S,"getMovementCount",tolua_LuaExtern_ArmatureAnimation_getMovementCount00);
   tolua_function(tolua_S,"update",tolua_LuaExtern_ArmatureAnimation_update00);
   tolua_function(tolua_S,"getAnimationData",tolua_LuaExtern_ArmatureAnimation_getAnimationData00);
   tolua_function(tolua_S,"setAnimationData",tolua_LuaExtern_ArmatureAnimation_setAnimationData00);
  tolua_endmodule(tolua_S);
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
   tolua_function(tolua_S,"getChildUIButtonByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIButtonByName00);
   tolua_function(tolua_S,"getChildUICheckBoxByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUICheckBoxByName00);
   tolua_function(tolua_S,"getChildUIImageViewByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIImageViewByName00);
   tolua_function(tolua_S,"getChildUILabelByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelByName00);
   tolua_function(tolua_S,"getChildUITextAreaByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUITextAreaByName00);
   tolua_function(tolua_S,"getChildUILabelAtlasByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelAtlasByName00);
   tolua_function(tolua_S,"getChildUILabelBMFontByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUILabelBMFontByName00);
   tolua_function(tolua_S,"getChildUILoadingBarByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUILoadingBarByName00);
   tolua_function(tolua_S,"getChildUISliderByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUISliderByName00);
   tolua_function(tolua_S,"getChildUITextFieldByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUITextFieldByName00);
   tolua_function(tolua_S,"getChildUIScrollViewByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIScrollViewByName00);
   tolua_function(tolua_S,"getChildUIDragPanelByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIDragPanelByName00);
   tolua_function(tolua_S,"getChildUIListViewByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIListViewByName00);
   tolua_function(tolua_S,"getChildUIPageViewByName",tolua_LuaExtern_LuaCocoStudioConversion_getChildUIPageViewByName00);
   tolua_function(tolua_S,"toUIButton",tolua_LuaExtern_LuaCocoStudioConversion_toUIButton00);
   tolua_function(tolua_S,"toUICheckBox",tolua_LuaExtern_LuaCocoStudioConversion_toUICheckBox00);
   tolua_function(tolua_S,"toUIImageView",tolua_LuaExtern_LuaCocoStudioConversion_toUIImageView00);
   tolua_function(tolua_S,"toUILabel",tolua_LuaExtern_LuaCocoStudioConversion_toUILabel00);
   tolua_function(tolua_S,"toUITextArea",tolua_LuaExtern_LuaCocoStudioConversion_toUITextArea00);
   tolua_function(tolua_S,"toUILabelAtlas",tolua_LuaExtern_LuaCocoStudioConversion_toUILabelAtlas00);
   tolua_function(tolua_S,"toUILabelBMFont",tolua_LuaExtern_LuaCocoStudioConversion_toUILabelBMFont00);
   tolua_function(tolua_S,"toUILoadingBar",tolua_LuaExtern_LuaCocoStudioConversion_toUILoadingBar00);
   tolua_function(tolua_S,"toUISlider",tolua_LuaExtern_LuaCocoStudioConversion_toUISlider00);
   tolua_function(tolua_S,"toUITextField",tolua_LuaExtern_LuaCocoStudioConversion_toUITextField00);
   tolua_function(tolua_S,"toUIScrollView",tolua_LuaExtern_LuaCocoStudioConversion_toUIScrollView00);
   tolua_function(tolua_S,"toUIDragPanel",tolua_LuaExtern_LuaCocoStudioConversion_toUIDragPanel00);
   tolua_function(tolua_S,"toUIListView",tolua_LuaExtern_LuaCocoStudioConversion_toUIListView00);
   tolua_function(tolua_S,"toUIPageView",tolua_LuaExtern_LuaCocoStudioConversion_toUIPageView00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_LuaExtern (lua_State* tolua_S) {
 return tolua_LuaExtern_open(tolua_S);
};
#endif

