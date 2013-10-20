#pragma once
#include "mvvm/view.h"

namespace engine
{
	namespace uiview
	{
		class Panel : public framework::mvvm::View, public cocos2d::Layer
		{
		public:
			Panel();
			virtual ~Panel();

		protected:
			PROPERTY_DEFINED_NOVALUE_VIRTUAL(Position, cocos2d::Point, Panel, setPosition, getPosition);
			PROPERTY_DEFINED_NOVALUE_VIRTUAL(Size, cocos2d::Size, Panel, setContentSize, getContentSize);
		};
	}	// namespace uiview
}	// namespace engine
