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
	ViewModelManager::reloadLuaScript("luascript/views/gameland.lua");
	ViewModelManager::reloadLuaScript("luascript/models/gamelandmodel.lua");
	ViewModelManager::reloadLuaScript("luascript/models/playstruggle_var01.lua");

	ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("studioui/animation/saber_righttop0.png", "studioui/animation/saber_righttop0.plist", "studioui/animation/saber_leftbottom.json");
	ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("studioui/animation/saber_righttop0.png", "studioui/animation/saber_righttop0.plist", "studioui/animation/saber_righttop.json");
	ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("studioui/animation/rider_righttop0.png", "studioui/animation/rider_righttop0.plist", "studioui/animation/rider_leftbottom.json");
	ArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo("studioui/animation/rider_righttop0.png", "studioui/animation/rider_righttop0.plist", "studioui/animation/rider_righttop.json");

	cocos2d::Size thisSize = this->getContentSize();
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadGameLandView", thisSize.width, thisSize.height);
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

void GameLandView::update(float dt)
{
	CCPoint pos = mMapDragPanel->getInnerContainerPosition();
	CCString* posText = CCString::createWithFormat("%s[%.02f, %.02f]", mTroopName.c_str(), pos.x, pos.y);
	mDebugText->setText(posText->getCString());

	ViewSuperT::update(dt);
}

void GameLandView::onEnterTransitionDidFinish()
{
	ViewSuperT::onEnterTransitionDidFinish();
}

bool GameLandView::initLandGrid(const LandTreeGrid* pGrid)
{
	if(NULL == pGrid)
		return false;
	CCSize bkSize = mMapBGImageView->getSize();
	CCPoint realPos = ccpSub(pGrid->center, ccp(bkSize.width/2.0f-2.0f, bkSize.height/2.0f));
	if(pGrid->showGrid)
	{
		ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUACreateUIImageView", "picture/land/grid25d.png", realPos.x, realPos.y);
		if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
			return false;
		UIImageView* pGridImage = (UIImageView*)userdata.value.pointer;
		mMapBGImageView->addChild(pGridImage);
		mGridRenderList[pGrid] = pGridImage;
#ifdef TEST_VIEWGRIDS
		const_cast<LandTreeGrid*>(pGrid)->gridView = pGridImage;
#endif
		pGridImage->addReleaseEvent(this, coco_releaseselector(GameLandView::onMapGridTouched));
	}
	const SoldierTroopsUnitGrid* pUnit = dynamic_cast<const SoldierTroopsUnitGrid*>(pGrid);
	if(NULL == pUnit)
		return false;
	Armature* pAnim = NULL;
	ScriptParamObject userdata1 = callLuaFuncWithUserdataResult("LUACreateSoldierAnimationWithTypeAndOrientation", (int)pUnit->sType, (int)pUnit->oType, realPos.x, realPos.y);
	if(userdata1.type == LUA_TUSERDATA && NULL != userdata1.value.pointer)
		pAnim = (Armature*)userdata1.value.pointer;
	if(NULL != pAnim)
	{
		mMapBGImageView->addRenderer(pAnim, 1);
		mXiaobingAnimList.push_back(pAnim);
	}
	return true;
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
	mMapDragPanel->onTouchBegan(touchPos);
	return true;
}
void GameLandView::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	gpLastBeginTouchImage = NULL;
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

			if(NULL != pGrid->sideGrids[(size_t)GridOrientation::lefttop])
				gpLastSelectFarGridLT = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation::lefttop]->gridView);
			else
				gpLastSelectFarGridLT = NULL;
			if(NULL != pGrid->sideGrids[(size_t)GridOrientation::leftbottom])
				gpLastSelectFarGridLB = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation::leftbottom]->gridView);
			else
				gpLastSelectFarGridLB = NULL;
			if(NULL != pGrid->sideGrids[(size_t)GridOrientation::righttop])
				gpLastSelectFarGridRT = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation::righttop]->gridView);
			else
				gpLastSelectFarGridRT = NULL;
			if(NULL != pGrid->sideGrids[(size_t)GridOrientation::rightbottom])
				gpLastSelectFarGridRB = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation::rightbottom]->gridView);
			else
				gpLastSelectFarGridRB = NULL;
			if(NULL != pGrid->sideGrids[(size_t)GridOrientation::topper])
				gpLastSelectFarGridT = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation::topper]->gridView);
			else
				gpLastSelectFarGridT = NULL;
			if(NULL != pGrid->sideGrids[(size_t)GridOrientation::bottom])
				gpLastSelectFarGridB = dynamic_cast<UIImageView*>(pGrid->sideGrids[(size_t)GridOrientation::bottom]->gridView);
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
			ActionStepOveredEventParams eventArgs;
			Event_OnActionStepOvered(this, &eventArgs);
			mMapDragPanel->setTouchEnable(true);
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

	mMapDragPanel->setTouchEnable(false);
	mMapDragPanel->setAutoMoveDuration(10.0f);
	mMapDragPanel->setAutoMoveEaseRate(10.0f);
	mMapDragPanel->setInnerContainerPosition(CCPoint(-568,-384),true);
	mNeedWaitDragPanelBerthOvered = true;
}