#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "gui/CocosGUI.h"

using namespace framework;

class LoginView : public mvvm::ViewBase<LoginView, gui::UILayer>
{
public:
	LoginView();
	~LoginView();

    virtual bool init();
	virtual bool initForMvvm();
	virtual void update(float dt);

private:
	virtual void onEnterTransitionDidFinish();
	void onEnterGameBtnTouch(cocos2d::CCObject* pSender, gui::TouchEventType type);
	void onNameInputFieldEvent(cocos2d::Object* pSender, gui::TextFiledEventType type);

private:
    gui::UILayout* mLayout;
	gui::UIButton* mEnterGameBtn;
	gui::UITextField* mNameInput;
	gui::UICheckBox* mCheckBox;
};