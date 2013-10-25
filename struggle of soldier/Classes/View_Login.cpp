#include "View_Login.h"
#include "CocoStudio/CocoStudio.h"

LoginView::LoginView()
{
	mLayout = NULL;
}

LoginView::~LoginView()
{
}

bool LoginView::init()
{
	if(!ViewSuperT::init())
		return false;
	
    this->scheduleUpdate();
	
	cocos2d::Size thisSize = this->getContentSize();
    mLayout = dynamic_cast<cocos2d::extension::Layout*>(CCUIHELPER->createWidgetFromJsonFile("studioui/login/DemoLogin.ExportJson"));
	cocos2d::Size layoutSize = mLayout->getContentSize();
	mLayout->setPosition(cocos2d::Point((thisSize.width-layoutSize.width)/2.0f, (thisSize.height-layoutSize.height)/2.0f));
    this->addWidget(mLayout);

	return true;
}

bool LoginView::initForMvvm()
{
	return true;
}

void LoginView::update(float dt)
{
	ViewSuperT::update(dt);
}

void LoginView::onEnterTransitionDidFinish()
{
	ViewSuperT::onEnterTransitionDidFinish();
}