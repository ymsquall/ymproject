#include "View_Login.h"
#include "CocoStudio/CocoStudio.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace gui;

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
	ViewModelManager::reloadLuaScript("luascript/views/helper.lua");

    cocos2d::Size thisSize = this->getContentSize();
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadLoginView", thisSize.width, thisSize.height);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;

    this->scheduleUpdate();
	mLayout = (UILayout*)userdata.value.pointer;
	this->addWidget(mLayout);

	mCheckBox = dynamic_cast<UICheckBox*>(mLayout->getChildByName("CheckBox"));
	mNameInput = dynamic_cast<UITextField*>(mLayout->getChildByName("mNameInput"));
	mEnterGameBtn = dynamic_cast<UIButton*>(mLayout->getChildByName("mEnterGameBtn"));
	mNameInput->setTouchEnabled(true);
	mEnterGameBtn->addTouchEventListener(this, toucheventselector(LoginView::onEnterGameBtnTouch));
	mNameInput->addEventListenerTextField(this, textfieldeventselector(LoginView::onNameInputFieldEvent));

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

void LoginView::onEnterGameBtnTouch(cocos2d::CCObject* pSender, TouchEventType type)
{
	ViewModelManager::point()->selectModel(ModelType::SelectHero);
}

void LoginView::onNameInputFieldEvent(cocos2d::Object* pSender, gui::TextFiledEventType type)
{

}