#pragma once
#include <stack>
#include "Panel.h"

namespace engine
{
	namespace uiview
	{
		class StackPanel : public Panel
		{
		public:
			StackPanel();
			virtual ~StackPanel();
			typedef std::stack<gui::UIWidget*> UIStack;

		private:
			UIStack mUIStack;
		};
	}	// namespace uiview
}	// namespace engine
