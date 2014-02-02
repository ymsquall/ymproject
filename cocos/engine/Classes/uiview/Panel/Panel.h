#pragma once
#include "mvvm/view.h"

namespace engine
{
	namespace uiview
	{
		class Panel : public framework::mvvm::ViewBase<Panel, gui::ccUILayer>
		{
		public:
			Panel();
			virtual ~Panel();

			virtual bool initForMvvm();
			PROPERTY_DEFINED_NOVALUE_VIRTUAL(Position, cocos2d::CCPoint, Panel, gui::ccUILayer, setPosition, getPosition);
			PROPERTY_DEFINED_NOVALUE_VIRTUAL(Size, cocos2d::Size, Panel, gui::ccUILayer, setContentSize, getContentSize);
		};
	}	// namespace uiview
}	// namespace engine
