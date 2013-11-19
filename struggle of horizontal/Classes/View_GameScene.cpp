#include "View_GameScene.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"
#include "Model_GameScene.h"

GameSceneView* gGameSceneView = NULL;

using namespace cocos2d;
using namespace cocos2d::extension;

GameSceneView::GameSceneView()
{
	mLayout = NULL;
	mDebugText = NULL;
	mMapDragPanel = NULL;
	mMapBGPanel = NULL;
	mMapBGImageView = NULL;
	mNowSelectGridImage = NULL;
	mNeedWaitDragPanelBerthOvered = false;
	gGameSceneView = this;
}

GameSceneView::~GameSceneView()
{
	gGameSceneView = NULL;
}

bool GameSceneView::init()
{
	if(!ViewSuperT::init())
		return false;

	ViewModelManager::reloadLuaScript("luascript/views/helper.lua");
	ViewModelManager::reloadLuaScript("luascript/views/gamesceneview.lua");
	ViewModelManager::reloadLuaScript("luascript/models/gamescenemodel.lua");
	ViewModelManager::reloadLuaScript("luascript/models/gamescenemodel_loader.lua");
	ViewModelManager::reloadLuaScript("luascript/models/playstruggle_var01.lua");

	cocos2d::Size thisSize = this->getContentSize();
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadGameSceneView", this, thisSize.width, thisSize.height);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;
	this->scheduleUpdate();

	mLayout = (cocos2d::extension::Layout*)userdata.value.pointer;
	this->addWidget(mLayout);

	mBackButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mBackButton"));
	mDebugText = dynamic_cast<UITextArea*>(mLayout->getChildByName("mDebugText"));
	mMapDragPanel = dynamic_cast<UIDragPanel*>(mLayout->getChildByName("mMapDragPanel"));
	mMapBGPanel = dynamic_cast<UIPanel*>(mLayout->getChildByName("mMapBGPanel"));
	mMapBGImageView = dynamic_cast<UIImageView*>(mLayout->getChildByName("mMapBGImageView"));

	mBackButton->addReleaseEvent(this, coco_releaseselector(GameSceneView::onBackBtnTouch));
	mMapBGImageView->addReleaseEvent(this, coco_releaseselector(GameSceneView::onMapTouched));
	mMapDragPanel->addEventListener(this, dragpaneleventselector(GameSceneView::onMapPanelDragEvent));
	return true;
}

bool GameSceneView::initForMvvm()
{
	return true;
}

void GameSceneView::onEnterTransitionDidFinish()
{
	ViewSuperT::onEnterTransitionDidFinish();
	callLuaFuncNoResult("LUAGameSceneViewOnEnter");
}
void GameSceneView::onExit()
{
	callLuaFuncNoResult("LUAGameSceneViewOnExit");
	ViewSuperT::onExit();
}
static UIImageView* gpLastBeginTouchImage = NULL;
bool GameSceneView::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	gpLastBeginTouchImage = NULL;
	if(mBackButton->getRect().containsPoint(touchPos) && mBackButton->onTouchBegan(touchPos))
		return true;
	Object* pObj = NULL;
	CCARRAY_FOREACH(mMapBGImageView->getChildren(), pObj)
	{
		UIImageView* pGridImage = dynamic_cast<UIImageView*>(pObj);
		if(NULL != pGridImage)
		{
			if(pGridImage->getRect().containsPoint(touchPos))
			{
				pGridImage->onTouchBegan(touchPos);
				gpLastBeginTouchImage = pGridImage;
				break;
			}
		}
	}
	if(mMapDragPanel->isTouchEnabled())
		mMapDragPanel->onTouchBegan(touchPos);
	return true;
}
void GameSceneView::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	gpLastBeginTouchImage = NULL;
	if(mMapDragPanel->isTouchEnabled())
		mMapDragPanel->onTouchMoved(touchPos);
}
void GameSceneView::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	if(mBackButton->isFocused())
	{
		mBackButton->onTouchEnded(touchPos);
		return;
	}
	if(NULL != gpLastBeginTouchImage && gpLastBeginTouchImage->getRect().containsPoint(touchPos))
	{
		gpLastBeginTouchImage->onTouchEnded(touchPos);
		gpLastBeginTouchImage = NULL;
	}
	if(mMapDragPanel->isTouchEnabled())
		mMapDragPanel->onTouchEnded(touchPos);
}
void GameSceneView::ccTouchCancelled(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	if(NULL != gpLastBeginTouchImage && gpLastBeginTouchImage->getRect().containsPoint(touchPos))
	{
		gpLastBeginTouchImage->onTouchCancelled(touchPos);
		gpLastBeginTouchImage = NULL;
	}
	mMapDragPanel->onTouchCancelled(touchPos);
}

void GameSceneView::onMapTouched(cocos2d::CCObject* pSender)
{

}
void GameSceneView::onMapPanelDragEvent(CCObject* pSender, DragPanelEventType type)
{
	switch (type)
	{
	case DRAGPANEL_EVENT_BERTH_LEFTBOTTOM:
	case DRAGPANEL_EVENT_BERTH_LFETTOP:
	case DRAGPANEL_EVENT_BERTH_RIGHTBOTTOM:
	case DRAGPANEL_EVENT_BERTH_RIGHTTOP:
	case DRAGPANEL_EVENT_BERTH_LEFT:
	case DRAGPANEL_EVENT_BERTH_TOP:
	case DRAGPANEL_EVENT_BERTH_RIGHT:
	case DRAGPANEL_EVENT_BERTH_BOTTOM:
		if(mNeedWaitDragPanelBerthOvered)
		{
			mNeedWaitDragPanelBerthOvered = false;
		}
		break;
	default:
		break;
	}
}

void GameSceneView::onBackBtnTouch(cocos2d::CCObject* pSender)
{
	ViewModelManager::point()->selectModel(ModelType::SelectHero);
}
