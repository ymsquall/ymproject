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

	void onBackBtnTouch(cocos2d::CCObject* pSender);
	void onOkBtnTouch(cocos2d::CCObject* pSender);
	void onSelectBtnTouch(cocos2d::CCObject* pSender);

private:
	cocos2d::extension::Layout* mLayout;
	cocos2d::extension::UIButton* mBackButton;
	cocos2d::extension::UIButton* mOkButton;
	cocos2d::extension::UIButton* mSelectButton;
	cocos2d::extension::UIScrollView* mHeroHeadScrollView;
	HeroHeadList mHeroHeadList;	
};