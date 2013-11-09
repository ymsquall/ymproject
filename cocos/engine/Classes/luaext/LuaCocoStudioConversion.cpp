#include "LuaCocoStudioConversion.h"

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
UITextArea* LuaCocoStudioConversion::getChildUITextAreaByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UITextArea*>(pUI);
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
UIDragPanel* LuaCocoStudioConversion::getChildUIDragPanelByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIDragPanel*>(pUI);
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
