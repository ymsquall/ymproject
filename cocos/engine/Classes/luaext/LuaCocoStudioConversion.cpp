#include "LuaCocoStudioConversion.h"

UIScrollView* LuaCocoStudioConversion::getUIScrollViewByName(const char* name, UIWidget* pParent)
{
	UIWidget* pUI = pParent->getChildByName(name);
	return dynamic_cast<UIScrollView*>(pUI);
}