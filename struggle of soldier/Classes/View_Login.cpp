#include "View_Login.h"
#include "CocoStudio/CocoStudio.h"
#include "ViewModelManager.h"

using namespace cocos2d;
using namespace cocos2d::extension;

LoginView::LoginView()
{
	mLayout = NULL;
	mCheckBox = NULL;
	mNameInput = NULL;
	mNameInput = NULL;
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
    mLayout = dynamic_cast<cocos2d::extension::Layout*>(CCUIHELPER->createWidgetFromJsonFile("studioui/LoginView/LoginView.ExportJson"));
	cocos2d::Size layoutSize = mLayout->getContentSize();
	mLayout->setPosition(cocos2d::Point((thisSize.width-layoutSize.width)/2.0f, (thisSize.height-layoutSize.height)/2.0f));
    this->addWidget(mLayout);

	mCheckBox = dynamic_cast<cocos2d::extension::UICheckBox*>(mLayout->getChildByName("CheckBox"));
	mNameInput = dynamic_cast<cocos2d::extension::UITextField*>(mLayout->getChildByName("mNameInput"));
	mEnterGameBtn = dynamic_cast<cocos2d::extension::UIButton*>(mLayout->getChildByName("mEnterGameBtn"));
	mNameInput->setTouchEnable(true);
	mEnterGameBtn->addReleaseEvent(this, coco_releaseselector(LoginView::onEnterGameBtnTouch));
	mNameInput->addEventListener(this, textfieldeventselector(LoginView::onNameInputFieldEvent));

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

void LoginView::onEnterGameBtnTouch(cocos2d::CCObject* pSender)
{
	ViewModelManager::point()->selectModel(ModelType::SelectHero);
}

void LoginView::onNameInputFieldEvent(cocos2d::CCObject *pSender, cocos2d::extension::TextFiledEventType type)
{

}