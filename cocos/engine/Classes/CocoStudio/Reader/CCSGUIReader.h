/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
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

#ifndef __CCSGUIREADER_H__
#define __CCSGUIREADER_H__

#include "../GUI/BaseClasses/UIWidget.h"

namespace cs
{
	class CCCSJsonDictionary;
}

NS_CC_EXT_BEGIN

#define kCCSVersion 1.0
/**
*   @js NA
*   @lua NA
*/
class UIWidget;
class CCSGUIReader : CCObject
{
public:
    CCSGUIReader();
    ~CCSGUIReader();
    static CCSGUIReader* shareReader();
	static void purgeCCSGUIReader();
    
    UIWidget* widgetFromJsonFile(const char* fileName);
    UIWidget* widgetFromJsonDictionary(cs::CCCSJsonDictionary* data);
    
    int getVersionInteger(const char* str);
    
    void setPropsForWidgetFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setColorPropsForWidgetFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForButtonFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForCheckBoxFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForImageViewFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForLabelFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForLabelAtlasFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForContainerWidgetFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForPanelFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForScrollViewFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForSliderFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForTextAreaFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForTextButtonFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForTextFieldFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForLoadingBarFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForImageButtonFromJsonDictionary(UIWidget* widget, cs::CCCSJsonDictionary* options);
    void setPropsForListViewFromJsonDictionary(UIWidget* widget, cs::CCCSJsonDictionary* options);
    void setPropsForPageViewFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForLabelBMFontFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    void setPropsForDragPanelFromJsonDictionary(UIWidget*widget,cs::CCCSJsonDictionary* options);
    
protected:
    std::string m_strFilePath;
    bool m_bOlderVersion;
};

NS_CC_EXT_END


#endif /* defined(__CCSGUIReader__) */
