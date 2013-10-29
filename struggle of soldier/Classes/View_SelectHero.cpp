#include "View_SelectHero.h"
#include "CocoStudio/CocoStudio.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"

using namespace cocos2d;
using namespace cocos2d::extension;

SelectHeroView::SelectHeroView()
{
	mLayout = NULL;
	mBackButton = NULL;
	mOkButton = NULL;
	mSelectButton = NULL;
	mHeroHeadScrollView = NULL;
}

SelectHeroView::~SelectHeroView()
{
}

bool SelectHeroView::init()
{
	if(!ViewSuperT::init())
		return false;

	ViewModelManager::reloadLuaScript("luascript/views/helper.lua");
	ViewModelManager::reloadLuaScript("luascript/views/selecthero.lua");

	cocos2d::Size thisSize = this->getContentSize();
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadSelectHeroView", thisSize.width, thisSize.height);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;
	this->scheduleUpdate();
	mLayout = (cocos2d::extension::Layout*)userdata.value.pointer;
	this->addWidget(mLayout);

	mBackButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mBackButton"));
	mOkButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mOkButton"));
	mSelectButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mSelectButton"));
	mHeroHeadScrollView = dynamic_cast<UIScrollView*>(mLayout->getChildByName("mHeroHeadScrollView"));

	mBackButton->addReleaseEvent(this, coco_releaseselector(SelectHeroView::onBackBtnTouch));
	mOkButton->addReleaseEvent(this, coco_releaseselector(SelectHeroView::onOkBtnTouch));
	mSelectButton->addReleaseEvent(this, coco_releaseselector(SelectHeroView::onSelectBtnTouch));

	return true;
}

bool SelectHeroView::initForMvvm()
{
	return true;
}

void SelectHeroView::update(float dt)
{
	ViewSuperT::update(dt);
}

void SelectHeroView::onEnterTransitionDidFinish()
{
	ViewSuperT::onEnterTransitionDidFinish();
}

void SelectHeroView::onBackBtnTouch(cocos2d::CCObject* pSender)
{
	ViewModelManager::point()->selectModel(ModelType::Login);
}

void SelectHeroView::onOkBtnTouch(cocos2d::CCObject* pSender)
{
	ViewModelManager::point()->selectModel(ModelType::GameLand);
}

void SelectHeroView::onSelectBtnTouch(cocos2d::CCObject* pSender)
{

}