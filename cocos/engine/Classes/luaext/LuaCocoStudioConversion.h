#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CocoStudio/CocoStudio.h"

using namespace cocos2d::extension;

class LuaCocoStudioConversion
{
public:
	static Layout* getChildLayoutByName(const char* name, UIWidget* pParent);
	static UILayer* getChildUILayerByName(const char* name, UIWidget* pParent);
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

	static Layout* toLayout(void* pointer);
	static UILayer* toUILayer(void* pointer);
	static UIButton* toUIButton(void* pointer);
	static UICheckBox* toUICheckBox(void* pointer);
	static UIImageView* toUIImageView(void* pointer);
	static UILabel* toUILabel(void* pointer);
	static UITextArea* toUITextArea(void* pointer);
	static UILabelAtlas* toUILabelAtlas(void* pointer);
	static UILabelBMFont* toUILabelBMFont(void* pointer);
	static UILoadingBar* toUILoadingBar(void* pointer);
	static UISlider* toUISlider(void* pointer);
	static UITextField* toUITextField(void* pointer);
	static UIScrollView* toUIScrollView(void* pointer);
	static UIDragPanel* toUIDragPanel(void* pointer);
	static UIListView* toUIListView(void* pointer);
	static UIPageView* toUIPageView(void* pointer);
};

