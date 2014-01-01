#include "LuaCocoStudioConversion.h"

UILayout* LuaCocoStudioConversion::getChildLayoutByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILayout*>(pUI);
}
UILayer* LuaCocoStudioConversion::getChildUILayerByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILayer*>(pUI);
}
UIButton* LuaCocoStudioConversion::getChildUIButtonByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIButton*>(pUI);
}
UICheckBox* LuaCocoStudioConversion::getChildUICheckBoxByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UICheckBox*>(pUI);
}
UIImageView* LuaCocoStudioConversion::getChildUIImageViewByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIImageView*>(pUI);
}
UILabel* LuaCocoStudioConversion::getChildUILabelByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILabel*>(pUI);
}
UILabelAtlas* LuaCocoStudioConversion::getChildUILabelAtlasByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILabelAtlas*>(pUI);
}
UILabelBMFont* LuaCocoStudioConversion::getChildUILabelBMFontByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILabelBMFont*>(pUI);
}
UILoadingBar* LuaCocoStudioConversion::getChildUILoadingBarByName(const char* name, UIWidget* pParent)
{
	
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UILoadingBar*>(pUI);
}
UISlider* LuaCocoStudioConversion::getChildUISliderByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UISlider*>(pUI);
}
UITextField* LuaCocoStudioConversion::getChildUITextFieldByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UITextField*>(pUI);
}
UIScrollView* LuaCocoStudioConversion::getChildUIScrollViewByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIScrollView*>(pUI);
}
UIListView* LuaCocoStudioConversion::getChildUIListViewByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIListView*>(pUI);
}
UIPageView* LuaCocoStudioConversion::getChildUIPageViewByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIPageView*>(pUI);
}

UILayout* LuaCocoStudioConversion::toLayout(void* pointer)
{
	return static_cast<UILayout*>(pointer);
}
UILayer* LuaCocoStudioConversion::toUILayer(void* pointer)
{
	return static_cast<UILayer*>(pointer);
}
UIButton* LuaCocoStudioConversion::toUIButton(void* pointer)
{
	return static_cast<UIButton*>(pointer);
}
UICheckBox* LuaCocoStudioConversion::toUICheckBox(void* pointer)
{
	return static_cast<UICheckBox*>(pointer);
}
UIImageView* LuaCocoStudioConversion::toUIImageView(void* pointer)
{
	return static_cast<UIImageView*>(pointer);
}
UILabel* LuaCocoStudioConversion::toUILabel(void* pointer)
{
	return static_cast<UILabel*>(pointer);
}
UILabelAtlas* LuaCocoStudioConversion::toUILabelAtlas(void* pointer)
{
	return static_cast<UILabelAtlas*>(pointer);
}
UILabelBMFont* LuaCocoStudioConversion::toUILabelBMFont(void* pointer)
{
	return static_cast<UILabelBMFont*>(pointer);
}
UILoadingBar* LuaCocoStudioConversion::toUILoadingBar(void* pointer)
{
	return static_cast<UILoadingBar*>(pointer);
}
UISlider* LuaCocoStudioConversion::toUISlider(void* pointer)
{
	return static_cast<UISlider*>(pointer);
}
UITextField* LuaCocoStudioConversion::toUITextField(void* pointer)
{
	return static_cast<UITextField*>(pointer);
}
UIScrollView* LuaCocoStudioConversion::toUIScrollView(void* pointer)
{
	return static_cast<UIScrollView*>(pointer);
}
UIListView* LuaCocoStudioConversion::toUIListView(void* pointer)
{
	return static_cast<UIListView*>(pointer);
}
UIPageView* LuaCocoStudioConversion::toUIPageView(void* pointer)
{
	return static_cast<UIPageView*>(pointer);
}
