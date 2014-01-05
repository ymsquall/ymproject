#include "StackPanel.h"

namespace engine
{
	namespace uiview
	{
		StackPanel::StackPanel()
		{
			mSpaceOffset = 0;
			mAutoSize = true;
			mIsHorizontal = true;
			mNeedUpdateStack = false;
		}
		StackPanel::~StackPanel()
		{
		}
		StackPanel* StackPanel::createWithFrame(const cocos2d::Point& pos, float spaceOff, bool isHorizontal)
		{
			StackPanel* pRet = new StackPanel();
			if(pRet->initForMvvm() && pRet->initWithFrame(pos, spaceOff, isHorizontal))
			{
				pRet->autorelease();
				return pRet;
			}
			delete pRet;
			return NULL;
		}
		StackPanel* StackPanel::createWithFrame(const cocos2d::Point& pos, const cocos2d::Size& size, float spaceOff, bool isHorizontal)
		{
			StackPanel* pRet = new StackPanel();
			if(pRet->initForMvvm() && pRet->initWithFrame(pos, size, spaceOff, isHorizontal))
			{
				pRet->autorelease();
				return pRet;
			}
			delete pRet;
			return NULL;
		}
		void StackPanel::onEnter()
		{
			Panel::onEnter();
			this->scheduleUpdate();
		}
		void StackPanel::onExit()
		{
			Panel::onExit();
		}
		bool StackPanel::initWithFrame(const cocos2d::Point& pos, float spaceOff, bool isHorizontal)
		{
			if(!Panel::init())
				return false;
			mAutoSize = true;
			mIsHorizontal = isHorizontal;
			this->setPosition(pos);
			mInitPosition = pos;
			return true;
		}
		bool StackPanel::initWithFrame(const cocos2d::Point& pos, const cocos2d::Size& size, float spaceOff, bool isHorizontal)
		{
			if(!Panel::init())
				return false;
			mAutoSize = false;
			mIsHorizontal = isHorizontal;
			this->setPosition(pos);
			this->setContentSize(size);
			mInitPosition = pos;
			return true;
		}
		void StackPanel::createSpriteWithLocal(const char* imageName)
		{
			gui::UIImageView* pImage = this->createChild<gui::UIImageView>();
			pImage->loadTexture(imageName);
		}
		void StackPanel::createSpriteWithPlist(const char* imageName)
		{
			gui::UIImageView* pImage = this->createChild<gui::UIImageView>();
			pImage->loadTexture(imageName, gui::UI_TEX_TYPE_PLIST);
		}
		void StackPanel::update(float dt)
		{
			if(mNeedUpdateStack)
			{
				cocos2d::Point pos(0,0);
				cocos2d::Size totalSize(0,0);
				for(UIStack::iterator it = mUIStack.begin();
					it != mUIStack.end(); ++ it)
				{
					gui::UIWidget* pChild = *it;
					cocos2d::Size size = pChild->getContentSize();
					pChild->setPosition(pos);
					if(mIsHorizontal)
					{
						pos.x += size.width + mSpaceOffset;
						if(totalSize.height < size.height)
							totalSize.height = size.height;
						totalSize.width += size.width + mSpaceOffset;
					}
					else
					{
						pos.y += size.height + mSpaceOffset;
						if(totalSize.width < size.width)
							totalSize.width = size.width;
						totalSize.height += size.height + mSpaceOffset;
					}
				}
				if(mAutoSize)
					this->setContentSize(totalSize);
				//pos = mInitPosition;
				//pos.x -= totalSize.width / 2.0f;
				//this->setPosition(pos);
				mNeedUpdateStack = false;
			}
		}
		void StackPanel::runFadeOutAction(float time)
		{
			for(UIStack::iterator it = mUIStack.begin();
				it != mUIStack.end(); ++ it)
			{
				gui::UIWidget* pChild = *it;
				pChild->runAction(cocos2d::FadeOut::create(time));
			}
		}
	}	// namespace uiview
}	// namespace engine
