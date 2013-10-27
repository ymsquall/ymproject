#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "CocoStudio/CocoStudio.h"

using namespace framework;

class LoginView : public mvvm::ViewBase<LoginView, cocos2d::extension::UILayer>
{
public:
	LoginView();
	~LoginView();

    virtual bool init();
	virtual bool initForMvvm();
	virtual void update(float dt);

private:
	virtual void onEnterTransitionDidFinish();
	void onEnterGameBtnTouch(cocos2d::CCObject* pSender);
	void onNameInputFieldEvent(cocos2d::CCObject *pSender, cocos2d::extension::TextFiledEventType type);

private:
    cocos2d::extension::Layout* mLayout;
	cocos2d::extension::UIButton* mEnterGameBtn;
	cocos2d::extension::UITextField* mNameInput;
	cocos2d::extension::UICheckBox* mCheckBox;
};