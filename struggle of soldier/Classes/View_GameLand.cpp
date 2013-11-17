#include "View_GameLand.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"
#include "Model_GameLand.h"
#include "CCArmature/utils/CCArmatureDataManager.h"
#include "CCArmature/CCArmature.h"

GameLandView* gGameLandView = NULL;

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace cocos2d::extension::armature;

#ifdef TEST_VIEWGRIDS
static UIImageView* gpLastSelectGrid = NULL;
static UIImageView* gpLastSelectFarGridLT = NULL;
static UIImageView* gpLastSelectFarGridLB = NULL;
static UIImageView* gpLastSelectFarGridRT = NULL;
static UIImageView* gpLastSelectFarGridRB = NULL;
static UIImageView* gpLastSelectFarGridT = NULL;
static UIImageView* gpLastSelectFarGridB = NULL;
#endif

GameLandView::GameLandView()
{
	mLayout = NULL;
	mDebugText = NULL;
	mMapDragPanel = NULL;
	mMapBGPanel = NULL;
	mMapBGImageView = NULL;
	mNowSelectGridImage = NULL;
	mNeedWaitDragPanelBerthOvered = false;
	gGameLandView = this;
#ifdef TEST_VIEWGRIDS
	gpLastSelectGrid = NULL;
	gpLastSelectFarGridLT = NULL;
	gpLastSelectFarGridLB = NULL;
	gpLastSelectFarGridRT = NULL;
	gpLastSelectFarGridRB = NULL;
	gpLastSelectFarGridT = NULL;
	gpLastSelectFarGridB = NULL;
#endif
}

GameLandView::~GameLandView()
{
	gGameLandView = NULL;
#ifdef TEST_VIEWGRIDS
	gpLastSelectGrid = NULL;
	gpLastSelectFarGridLT = NULL;
	gpLastSelectFarGridLB = NULL;
	gpLastSelectFarGridRT = NULL;
	gpLastSelectFarGridRB = NULL;
	gpLastSelectFarGridT = NULL;
	gpLastSelectFarGridB = NULL;
#endif
}

bool GameLandView::init()
{
	if(!ViewSuperT::init())
		return false;

	ViewModelManager::reloadLuaScript("luascript/views/helper.lua");
	ViewModelManager::reloadLuaScript("luascript/views/gamelandview.lua");
	ViewModelManager::reloadLuaScript("luascript/models/gamelandmodel.lua");
	ViewModelManager::reloadLuaScript("luascript/models/gamelandmodel_loader.lua");
	ViewModelManager::reloadLuaScript("luascript/models/playstruggle_var01.lua");

	ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("studioui/animation/archer/archer0.png", "studioui/animation/archer/archer0.plist", "studioui/animation/archer/archer_leftbottom.json");
	ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("studioui/animation/archer/archer0.png", "studioui/animation/archer/archer0.plist", "studioui/animation/archer/archer_righttop.json");
	ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("studioui/animation/saber/saber0.png", "studioui/animation/saber/saber0.plist", "studioui/animation/saber/saber_leftbottom.json");
	ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("studioui/animation/saber/saber0.png", "studioui/animation/saber/saber0.plist", "studioui/animation/saber/saber_righttop.json");
	ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("studioui/animation/rider/rider0.png", "studioui/animation/rider/rider0.plist", "studioui/animation/rider/rider_leftbottom.json");
	ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("studioui/animation/rider/rider0.png", "studioui/animation/rider/rider0.plist", "studioui/animation/rider/rider_righttop.json");

	cocos2d::Size thisSize = this->getContentSize();
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadGameLandView", this, thisSize.width, thisSize.height);
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

	mBackButton->addReleaseEvent(this, coco_releaseselector(GameLandView::onBackBtnTouch));
	mMapBGImageView->addReleaseEvent(this, coco_releaseselector(GameLandView::onMapTouched));
	mMapDragPanel->addEventListener(this, dragpaneleventselector(GameLandView::onMapPanelDragEvent));
	return true;
}

bool GameLandView::initForMvvm()
{
	return true;
}

void GameLandView::onEnterTransitionDidFinish()
{
	ViewSuperT::onEnterTransitionDidFinish();
	callLuaFuncNoResult("LUAGameLandViewOnEnter");
}
void GameLandView::onExit()
{
	callLuaFuncNoResult("LUAGameLandViewOnExit");
	ViewSuperT::onExit();
}
static UIImageView* gpLastBeginTouchImage = NULL;
bool GameLandView::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
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
void GameLandView::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	gpLastBeginTouchImage = NULL;
	if(mMapDragPanel->isTouchEnabled())
		mMapDragPanel->onTouchMoved(touchPos);
}
void GameLandView::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
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
void GameLandView::ccTouchCancelled(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	if(NULL != gpLastBeginTouchImage && gpLastBeginTouchImage->getRect().containsPoint(touchPos))
	{
		gpLastBeginTouchImage->onTouchCancelled(touchPos);
		gpLastBeginTouchImage = NULL;
	}
	mMapDragPanel->onTouchCancelled(touchPos);
}

void GameLandView::onMapTouched(cocos2d::CCObject* pSender)
{

}
void GameLandView::onMapPanelDragEvent(CCObject* pSender, DragPanelEventType type)
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

void GameLandView::onBackBtnTouch(cocos2d::CCObject* pSender)
{
	ViewModelManager::point()->selectModel(ModelType::SelectHero);
}

/*
Event_OnActionStepOvered(this, &eventArgs);
ActionStepOveredEventParams eventArgs;
void GameLandView::onMapGridTouched(cocos2d::CCObject* pSender)
{
#ifdef TEST_VIEWGRIDS
	UIImageView* pGridImage = dynamic_cast<UIImageView*>(pSender);
	if(NULL != pGridImage)
	{
		Color3B oldColor = pGridImage->getColor();
		if(NULL != gpLastSelectGrid)
			gpLastSelectGrid->setColor(Color3B(255,255,255));
		gpLastSelectGrid = pGridImage;

		for(GridRenderList::const_iterator it = mGridRenderList.begin();
			it != mGridRenderList.end(); ++ it)
		{
			const UIImageView* pTmpGridImage = dynamic_cast<UIImageView*>(it->second);
			if(pTmpGridImage != pGridImage)
				continue;
			const LandTreeGrid* pGrid = it->first;
			if(NULL == pGrid)
				return;
			if(NULL != gpLastSelectFarGridLT)
				gpLastSelectFarGridLT->setColor(Color3B(255,255,255));
			if(NULL != gpLastSelectFarGridLB)
				gpLastSelectFarGridLB->setColor(Color3B(255,255,255));
			if(NULL != gpLastSelectFarGridRT)
				gpLastSelectFarGridRT->setColor(Color3B(255,255,255));
			if(NULL != gpLastSelectFarGridRB)
				gpLastSelectFarGridRB->setColor(Color3B(255,255,255));
			if(NULL != gpLastSelectFarGridT)
				gpLastSelectFarGridT->setColor(Color3B(255,255,255));
			if(NULL != gpLastSelectFarGridB)
				gpLastSelectFarGridB->setColor(Color3B(255,255,255));

			if(NULL != pGrid->sideGrids[(size_t)GridOrientation_lefttop])
				gpLastSelectFarGridLT = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation_lefttop]->gridView);
			else
				gpLastSelectFarGridLT = NULL;
			if(NULL != pGrid->sideGrids[(size_t)GridOrientation_leftbottom])
				gpLastSelectFarGridLB = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation_leftbottom]->gridView);
			else
				gpLastSelectFarGridLB = NULL;
			if(NULL != pGrid->sideGrids[(size_t)GridOrientation_righttop])
				gpLastSelectFarGridRT = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation_righttop]->gridView);
			else
				gpLastSelectFarGridRT = NULL;
			if(NULL != pGrid->sideGrids[(size_t)GridOrientation_rightbottom])
				gpLastSelectFarGridRB = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation_rightbottom]->gridView);
			else
				gpLastSelectFarGridRB = NULL;
			if(NULL != pGrid->sideGrids[(size_t)GridOrientation_topper])
				gpLastSelectFarGridT = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation_topper]->gridView);
			else
				gpLastSelectFarGridT = NULL;
			if(NULL != pGrid->sideGrids[(size_t)GridOrientation_bottom])
				gpLastSelectFarGridB = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation_bottom]->gridView);
			else
				gpLastSelectFarGridB = NULL;
		}

		if(NULL != gpLastSelectGrid)
			gpLastSelectGrid->setColor(Color3B(255,255,0));
		if(NULL != gpLastSelectFarGridLT)
			gpLastSelectFarGridLT->setColor(Color3B(255,0,0));
		if(NULL != gpLastSelectFarGridLB)
			gpLastSelectFarGridLB->setColor(Color3B(255,0,0));
		if(NULL != gpLastSelectFarGridRT)
			gpLastSelectFarGridRT->setColor(Color3B(255,0,0));
		if(NULL != gpLastSelectFarGridRB)
			gpLastSelectFarGridRB->setColor(Color3B(255,0,0));
		if(NULL != gpLastSelectFarGridT)
			gpLastSelectFarGridT->setColor(Color3B(255,0,0));
		if(NULL != gpLastSelectFarGridB)
			gpLastSelectFarGridB->setColor(Color3B(255,0,0));
	}
#endif
}
*/
/*
bool GameLandView::initLandGrid(const LandTreeGrid* pGrid)
{
	if(NULL == pGrid)
		return false;
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadLandGridView", pGrid);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;
	UIImageView* pGridImage = (UIImageView*)userdata.value.pointer;
	if(NULL == pGridImage)
	{
		if(pGrid->showGrid)
			return false;
		return true;
	}
#ifdef TEST_VIEWGRIDS
	const_cast<LandTreeGrid*>(pGrid)->gridView = pGridImage;
#endif
	pGridImage->addReleaseEvent(this, coco_releaseselector(GameLandView::onMapGridTouched));
	return true;
}

void GameLandView::doLiveChanged(bool isLive)
{
	if(isLive)
	{
		mDebugText->setVisible(false);
	}
	else
	{
		mDebugText->setVisible(true);
	}
	mMapDragPanel->setTouchEnable(false);
}

void GameLandView::doTroopChanged(const std::string& name)
{
	mTroopName = name;
}

void GameLandView::doSelectGrid(const LandTreeGrid* pGrid)
{
	if(NULL != mNowSelectGridImage)
	{
		mNowSelectGridImage->setColor(Color3B(255,255,255));
		mNowSelectGridImage->stopAllActions();
	}
	GridRenderList::iterator it = mGridRenderList.find(pGrid);
	if(mGridRenderList.end() == it)
		return;
	mNowSelectGridImage = dynamic_cast<UIImageView*>(it->second);
	mNowSelectGridImage->setColor(Color3B(0,255,0));
	CCBlink* pFlash = CCBlink::create(1.0f, 1000000);
	mNowSelectGridImage->runAction(pFlash);

	mMapDragPanel->setAutoMoveDuration(10.0f);
	mMapDragPanel->setAutoMoveEaseRate(10.0f);
	mMapDragPanel->setInnerContainerPosition(CCPoint(-568,-384),true);
	mNeedWaitDragPanelBerthOvered = true;
}
*/