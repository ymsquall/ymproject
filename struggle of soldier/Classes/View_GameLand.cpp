#include "View_GameLand.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"

using namespace cocos2d;
using namespace cocos2d::extension;

GameLandView::GameLandView()
{
	mLayout = NULL;
	mBackButton = NULL;
	mOkButton = NULL;
	mSelectButton = NULL;
	mHeroHeadScrollView = NULL;
}

GameLandView::~GameLandView()
{
}

bool GameLandView::init()
{
	if(!ViewSuperT::init())
		return false;

	ViewModelManager::reloadLuaScript("luascript/views/helper.lua");
	ViewModelManager::reloadLuaScript("luascript/views/gameland.lua");

	cocos2d::Size thisSize = this->getContentSize();
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadGameLandView", thisSize.width, thisSize.height);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;
	this->scheduleUpdate();
	mLayout = (cocos2d::extension::Layout*)userdata.value.pointer;
	this->addWidget(mLayout);

	mBackButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mBackButton"));
	mOkButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mOkButton"));
	mSelectButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mSelectButton"));
	mHeroHeadScrollView = dynamic_cast<UIScrollView*>(mLayout->getChildByName("mHeroHeadScrollView"));
	mHeroHeadScrollView->setInnerContainerSize(CCSize(1600, 240));
	mBackButton->addReleaseEvent(this, coco_releaseselector(GameLandView::onBackBtnTouch));
	mOkButton->addReleaseEvent(this, coco_releaseselector(GameLandView::onOkBtnTouch));
	mSelectButton->addReleaseEvent(this, coco_releaseselector(GameLandView::onSelectBtnTouch));

	//mHeroHeadScrollView->addChild(pHeadView);

	return true;
}

bool GameLandView::initForMvvm()
{
	return true;
}

void GameLandView::update(float dt)
{
	ViewSuperT::update(dt);
}

void GameLandView::onEnterTransitionDidFinish()
{
	ViewSuperT::onEnterTransitionDidFinish();
}

void GameLandView::onBackBtnTouch(cocos2d::CCObject* pSender)
{
	ViewModelManager::point()->selectModel(ModelType::SelectHero);
}

void GameLandView::onOkBtnTouch(cocos2d::CCObject* pSender)
{
	ViewModelManager::point()->selectModel(ModelType::GameLand);
}

void GameLandView::onSelectBtnTouch(cocos2d::CCObject* pSender)
{

}