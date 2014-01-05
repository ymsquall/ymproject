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
			typedef std::list<gui::UIWidget*> UIStack;

			static StackPanel* createWithFrame(const cocos2d::Point& pos, float spaceOff = 0.0f, bool isHorizontal = true);
			static StackPanel* createWithFrame(const cocos2d::Point& pos, const cocos2d::Size& size, float spaceOff = 0.0f, bool isHorizontal = true);
			void createSpriteWithLocal(const char* imageName);
			void createSpriteWithPlist(const char* imageName);
			void runFadeOutAction(float time);

		private:
			virtual void onEnter() override;
			virtual void onExit() override;

			bool initWithFrame(const cocos2d::Point& pos, float spaceOff, bool isHorizontal);
			bool initWithFrame(const cocos2d::Point& pos, const cocos2d::Size& size, float spaceOff, bool isHorizontal);
			template<class T>
			T* createChild()
			{
				T* pChild = T::create();
				if(NULL != pChild)
				{
					mUIStack.push_back(pChild);
					this->addWidget(pChild);
					mNeedUpdateStack = true;
				}
				return pChild;
			}
			virtual void update(float delta) override;

		private:
			UIStack mUIStack;
			cocos2d::Point mInitPosition;
			float mSpaceOffset;
			bool mAutoSize;
			bool mIsHorizontal;
			bool mNeedUpdateStack;
		};
	}	// namespace uiview
}	// namespace engine
