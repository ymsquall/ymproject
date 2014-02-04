#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "gui/CocosGUI.h"

using namespace cocos2d;
using namespace framework;

class SelectHeroView : public mvvm::ViewBase<SelectHeroView, gui::UILayer>
{
public:
	SelectHeroView();
	~SelectHeroView();

	typedef std::vector<gui::UIImageView*> HeroHeadList;

    virtual bool init();
	virtual bool initForMvvm();
	virtual void update(float dt);

private:
	virtual void onEnterTransitionDidFinish();
	virtual bool onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void onTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void onTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);

	void onBackBtnTouch(Object *pSender, gui::TouchEventType type);
	void onOkBtnTouch(Object *pSender, gui::TouchEventType type);
	void onHeadImageTouch(Object *pSender, gui::TouchEventType type);

private:
	gui::UILayout* mLayout;
	gui::UIImageView* mTitleTextBar;
	gui::UIImageView* mBottomBar;
	gui::UIButton* mBackButton;
	gui::UIButton* mOkButton;
	gui::UIScrollView* mHeroHeadScrollView;
	HeroHeadList mHeroHeadList;
	int mSelectHeroCount;
};