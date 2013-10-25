#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "CocoStudio/GUI/System/UILayer.h"

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

private:
    cocos2d::extension::Layout* mLayout;
};