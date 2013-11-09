#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CocoStudio/CocoStudio.h"

using namespace cocos2d::extension;

class LuaCocoStudioConversion
{
public:
	static UIButton* getChildUIButtonByName(const char* name, UIWidget* pParent);
	static UICheckBox* getChildUICheckBoxByName(const char* name, UIWidget* pParent);
	static UIImageView* getChildUIImageViewByName(const char* name, UIWidget* pParent);
	static UILabel* getChildUILabelByName(const char* name, UIWidget* pParent);
	static UITextArea* getChildUITextAreaByName(const char* name, UIWidget* pParent);
	static UILabelAtlas* getChildUILabelAtlasByName(const char* name, UIWidget* pParent);
	static UILabelBMFont* getChildUILabelBMFontByName(const char* name, UIWidget* pParent);
	static UILoadingBar* getChildUILoadingBarByName(const char* name, UIWidget* pParent);
	static UISlider* getChildUISliderByName(const char* name, UIWidget* pParent);
	static UITextField* getChildUITextFieldByName(const char* name, UIWidget* pParent);
	static UIScrollView* getChildUIScrollViewByName(const char* name, UIWidget* pParent);
	static UIDragPanel* getChildUIDragPanelByName(const char* name, UIWidget* pParent);
	static UIListView* getChildUIListViewByName(const char* name, UIWidget* pParent);
	static UIPageView* getChildUIPageViewByName(const char* name, UIWidget* pParent);
};

