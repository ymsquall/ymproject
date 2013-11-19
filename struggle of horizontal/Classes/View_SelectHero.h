#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "CocoStudio/CocoStudio.h"

using namespace framework;

class SelectHeroView : public mvvm::ViewBase<SelectHeroView, cocos2d::extension::UILayer>
{
public:
	SelectHeroView();
	~SelectHeroView();

	typedef std::vector<cocos2d::extension::UIImageView*> HeroHeadList;

    virtual bool init();
	virtual bool initForMvvm();
	virtual void update(float dt);

private:
	virtual void onEnterTransitionDidFinish();
	virtual bool ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);

	void onBackBtnTouch(cocos2d::CCObject* pSender);
	void onOkBtnTouch(cocos2d::CCObject* pSender);
	void onHeadImageTouch(cocos2d::CCObject* pSender);

private:
	cocos2d::extension::Layout* mLayout;
	cocos2d::extension::UIImageView* mTitleTextBar;
	cocos2d::extension::UIImageView* mBottomBar;
	cocos2d::extension::UIButton* mBackButton;
	cocos2d::extension::UIButton* mOkButton;
	cocos2d::extension::UIScrollView* mHeroHeadScrollView;
	HeroHeadList mHeroHeadList;
	int mSelectHeroCount;
};