#include "LuaCocoStudioHelper.h"

UILayout* LuaCocoStudioHelper::getChildLayoutByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILayout*>(pUI);
}
UILayer* LuaCocoStudioHelper::getChildUILayerByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILayer*>(pUI);
}
UIButton* LuaCocoStudioHelper::getChildUIButtonByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIButton*>(pUI);
}
UICheckBox* LuaCocoStudioHelper::getChildUICheckBoxByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UICheckBox*>(pUI);
}
UIImageView* LuaCocoStudioHelper::getChildUIImageViewByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIImageView*>(pUI);
}
UILabel* LuaCocoStudioHelper::getChildUILabelByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILabel*>(pUI);
}
UILabelAtlas* LuaCocoStudioHelper::getChildUILabelAtlasByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILabelAtlas*>(pUI);
}
UILabelBMFont* LuaCocoStudioHelper::getChildUILabelBMFontByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILabelBMFont*>(pUI);
}
UILoadingBar* LuaCocoStudioHelper::getChildUILoadingBarByName(const char* name, UIWidget* pParent)
{
	
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILoadingBar*>(pUI);
}
UISlider* LuaCocoStudioHelper::getChildUISliderByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UISlider*>(pUI);
}
UITextField* LuaCocoStudioHelper::getChildUITextFieldByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UITextField*>(pUI);
}
UIScrollView* LuaCocoStudioHelper::getChildUIScrollViewByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIScrollView*>(pUI);
}
UIListView* LuaCocoStudioHelper::getChildUIListViewByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIListView*>(pUI);
}
UIPageView* LuaCocoStudioHelper::getChildUIPageViewByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIPageView*>(pUI);
}

UILayout* LuaCocoStudioHelper::toLayout(void* pointer)
{
	return static_cast<UILayout*>(pointer);
}
UILayer* LuaCocoStudioHelper::toUILayer(void* pointer)
{
	return static_cast<UILayer*>(pointer);
}
UIButton* LuaCocoStudioHelper::toUIButton(void* pointer)
{
	return static_cast<UIButton*>(pointer);
}
UICheckBox* LuaCocoStudioHelper::toUICheckBox(void* pointer)
{
	return static_cast<UICheckBox*>(pointer);
}
UIImageView* LuaCocoStudioHelper::toUIImageView(void* pointer)
{
	return static_cast<UIImageView*>(pointer);
}
UILabel* LuaCocoStudioHelper::toUILabel(void* pointer)
{
	return static_cast<UILabel*>(pointer);
}
UILabelAtlas* LuaCocoStudioHelper::toUILabelAtlas(void* pointer)
{
	return static_cast<UILabelAtlas*>(pointer);
}
UILabelBMFont* LuaCocoStudioHelper::toUILabelBMFont(void* pointer)
{
	return static_cast<UILabelBMFont*>(pointer);
}
UILoadingBar* LuaCocoStudioHelper::toUILoadingBar(void* pointer)
{
	return static_cast<UILoadingBar*>(pointer);
}
UISlider* LuaCocoStudioHelper::toUISlider(void* pointer)
{
	return static_cast<UISlider*>(pointer);
}
UITextField* LuaCocoStudioHelper::toUITextField(void* pointer)
{
	return static_cast<UITextField*>(pointer);
}
UIScrollView* LuaCocoStudioHelper::toUIScrollView(void* pointer)
{
	return static_cast<UIScrollView*>(pointer);
}
UIListView* LuaCocoStudioHelper::toUIListView(void* pointer)
{
	return static_cast<UIListView*>(pointer);
}
UIPageView* LuaCocoStudioHelper::toUIPageView(void* pointer)
{
	return static_cast<UIPageView*>(pointer);
}

void LuaCocoStudioHelper::setButtonPressState(UIButton* pBtn)
{
	pBtn->setBrightStyle(BRIGHT_HIGHLIGHT);
}
void LuaCocoStudioHelper::setButtonNormalState(UIButton* pBtn)
{
	pBtn->setBrightStyle(BRIGHT_NORMAL);
}
