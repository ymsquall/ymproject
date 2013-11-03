-- usage: (use instead of ant)
-- tolua++ -L basic.lua -o "../Classes/luaext/LuaExtern.cpp" LuaExtern.pkg

_is_functions = _is_functions or {}
_to_functions = _to_functions or {}
_push_functions = _push_functions or {}

local CCObjectTypes = {
    --"CCActionFrame",
    --"CCActionFrameEasing",
    --"CCActionManager",
    --"CCActionNode",
    --"CCActionObject",
    "CCComRender",
    "CCCSComAttribute",
    "CCCSComAudio",
    "CCCSContentJsonDictionary",
    "CCSGUIReader",
    "CCSSceneReader",
    "CocosGUI",
    "CompatibleClasses",
    "Layout",
    "LayoutParameter",
    "UIButton",
    "UICheckBox",
    "UIDragPanel",
    "UIHelper",
    "UIImageView",
    "UIInputManager",
    "UILabel",
    "UILabelAtlas",
    "UILabelBMFont",
    "UILayer",
    "UILayoutDefine",
    "UIListView",
    "UILoadingBar",
    "UIPageView",
    "UIRootWidget",
    "UIScrollView",
    "UISlider",
    "UITextField",
    "UIWidget",
    "Armature",
    "ArmatureAnimation",
    "LuaCocoStudioConversion",
}

-- register CCObject types
for i = 1, #CCObjectTypes do
    _push_functions[CCObjectTypes[i]] = "toluafix_pushusertype_ccobject"
end

-- register LUA_FUNCTION, LUA_TABLE, LUA_HANDLE type
_to_functions["LUA_FUNCTION"] = "toluafix_ref_function"
_is_functions["LUA_FUNCTION"] = "toluafix_isfunction"
_to_functions["LUA_TABLE"] = "toluafix_totable"
_is_functions["LUA_TABLE"] = "toluafix_istable"

local toWrite = {}
local currentString = ''
local out
local WRITE, OUTPUT = write, output

function output(s)
    out = _OUTPUT
    output = OUTPUT -- restore
    output(s)
end

function write(a)
    if out == _OUTPUT then
        currentString = currentString .. a
        if string.sub(currentString,-1) == '\n'  then
            toWrite[#toWrite+1] = currentString
            currentString = ''
        end
    else
        WRITE(a)
    end
end

function post_output_hook(package)
    local result = table.concat(toWrite)
    local function replace(pattern, replacement)
        local k = 0
        local nxt, currentString = 1, ''
        repeat
            local s, e = string.find(result, pattern, nxt, true)
            if e then
                currentString = currentString .. string.sub(result, nxt, s-1) .. replacement
                nxt = e + 1
                k = k + 1
            end
        until not e
        result = currentString..string.sub(result, nxt)
        if k == 0 then print('Pattern not replaced', pattern) end
    end

    replace([[#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"]],
      [[/****************************************************************************
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

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace cocos2d::extension::armature;
using namespace CocosDenshion;]])

      replace([[/* Exported function */
TOLUA_API int  tolua_Extern_open (lua_State* tolua_S);]], [[]])

      replace([[*((LUA_FUNCTION*)]], [[(]])

      replace([[unsigned void* tolua_ret = (unsigned void*)  self->getTiles();]],
        [[unsigned int* tolua_ret = (unsigned int*)  self->getTiles();]])

      replace([[Color3B color = *((Color3B*)  tolua_tousertype(tolua_S,4,(void*)&(const Color3B)ccBLACK));]],
        [[const Color3B clr = Color3B::BLACK;
    Color3B color = *((Color3B*)  tolua_tousertype(tolua_S,4,(void*)&clr));]])

      replace([[tolua_usertype(tolua_S,"LUA_FUNCTION");]], [[]])

      replace([[toluafix_pushusertype_ccobject(tolua_S,(void*)tolua_ret]],
        [[int nID = (tolua_ret) ? (int)tolua_ret->_ID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->_luaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret]])

      replace('\t', '    ')

--[[
    result = string.gsub(result, '(\"const )(CC%u%w*)', '%1_%2')

    local skip_contents = { "CCPointMake", "CCSizeMake", "CCRectMake", "CCLOG", "CCLog", "CCAssert", "CCTexture2DPixelFormat", "CCTextAlignment", "CCVerticalTextAlignment", "CCControlState", "CCControlEvent" }

    local function remove_prefix()
        result = string.gsub(result, '[^_\"k]CC%u%w+', function(m)
            local s, e
            local count = table.getn(skip_contents)
            local i = 1

            for  i = 1, count do
                s, e = string.find(m, skip_contents[i])
                if s ~= nil then
                    return m
                end
            end

            return string.gsub(m, 'CC(%u%w+)', '%1')
        end)
    end
    remove_prefix()


    result = string.gsub(result, '(tolua_tonumber%(tolua_S,%d,)(kCC)', '%1(int)%2')
    result = string.gsub(result, '(tolua_constant%(tolua_S,"k%w*",)(k)', '%1(int)%2')
    result = string.gsub(result, '(tolua_constant%(tolua_S,"CCControl%w*",)(CCControl)', '%1(int)%2')

    result = string.gsub(result, "(self%->setEmitterMode%()", "%1(ParticleSystem::Mode)")

    result = string.gsub(result, '(tolua_constant%(tolua_S,"kCC[%w_]*",)(kCC)', '%1(int)%2')

    replace("Animation*", "cocos2d::Animation*")
    replace("Animation::create", "cocos2d::Animation::create")

    result = string.gsub(result, '(\"const )_(CC%u%w*)', '%1%2')
--]]
    WRITE(result)
end
