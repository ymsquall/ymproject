#include "View_CreatureHeader.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace gui;

CreatureHeaderView::CreatureHeaderView()
{
	mNameLabel = NULL;
	mProgressBG = NULL;
	mProgressBar = NULL;
	mHPShowLabel = NULL;
}

CreatureHeaderView::~CreatureHeaderView()
{
}

bool CreatureHeaderView::init()
{
	if(!ViewSuperT::init())
		return false;
	ViewModelManager::reloadLuaScript("luascript/views/creatureheaderview.lua");

    cocos2d::Size thisSize = this->getContentSize();
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadCreatureHeaderView", thisSize.width, thisSize.height, this);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;

    this->scheduleUpdate();
	mRootLayer = (UILayer*)userdata.value.pointer;
	this->addChild(mRootLayer);

	mProgressBG = dynamic_cast<UIImageView*>(mRootLayer->getWidgetByName("ProgressBG"));
	mProgressBar = dynamic_cast<UILoadingBar*>(mRootLayer->getWidgetByName("ProgressBar"));
	mNameLabel = dynamic_cast<UILabel*>(mRootLayer->getWidgetByName("NameLabel"));
	mHPShowLabel = dynamic_cast<UILabel*>(mRootLayer->getWidgetByName("HPShowLabel"));

	return true;
}

bool CreatureHeaderView::initForMvvm()
{
	return true;
}

void CreatureHeaderView::update(float dt)
{
	ViewSuperT::update(dt);
}

void CreatureHeaderView::onEnterTransitionDidFinish()
{
	ViewSuperT::onEnterTransitionDidFinish();
}
