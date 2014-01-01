#pragma once
#include "mvvm/view.h"

namespace engine
{
	namespace uiview
	{
		class Panel : public framework::mvvm::ViewBase<Panel, gui::UILayer>
		{
		public:
			Panel();
			virtual ~Panel();

			virtual bool initForMvvm();
			PROPERTY_DEFINED_NOVALUE_VIRTUAL(Position, cocos2d::Point, Panel, gui::UILayer, setPosition, getPosition);
			PROPERTY_DEFINED_NOVALUE_VIRTUAL(Size, cocos2d::Size, Panel, gui::UILayer, setContentSize, getContentSize);
		};
	}	// namespace uiview
}	// namespace engine
