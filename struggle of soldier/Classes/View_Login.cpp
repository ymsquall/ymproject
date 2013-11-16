#include "View_Login.h"
#include "CocoStudio/CocoStudio.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"

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
	ViewModelManager::reloadLuaScript("luascript/views/helper.lua");

    cocos2d::Size thisSize = this->getContentSize();
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadLoginView", thisSize.width, thisSize.height);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;

    this->scheduleUpdate();
	mLayout = (cocos2d::extension::Layout*)userdata.value.pointer;
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