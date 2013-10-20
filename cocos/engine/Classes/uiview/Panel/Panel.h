#pragma once
#include "mvvm/view.h"

namespace engine
{
	namespace uiview
	{
		class Panel : public framework::mvvm::View<Panel, cocos2d::Layer>
		{
		public:
			Panel();
			virtual ~Panel();

			virtual bool initForMvvm();

			PROPERTY_DEFINED_NOVALUE_VIRTUAL(Position, cocos2d::Point, Panel, cocos2d::Layer, setPosition, getPosition);
			PROPERTY_DEFINED_NOVALUE_VIRTUAL(Size, cocos2d::Size, Panel, cocos2d::Layer, setContentSize, getContentSize);
		};
	}	// namespace uiview
}	// namespace engine
