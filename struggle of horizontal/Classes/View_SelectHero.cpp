#include "View_SelectHero.h"
#include "CocoStudio/CocoStudio.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace gui;

SelectHeroView::SelectHeroView()
{
	mLayout = NULL;
	mBackButton = NULL;
	mOkButton = NULL;
	mHeroHeadScrollView = NULL;
	mSelectHeroCount = 0;
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
	mLayout = (UILayout*)userdata.value.pointer;
#ifdef COCOS2DX_ENGINE_V30
	this->addWidget(mLayout);
#else COCOS2DX_ENGINE_GITHUB_V3
	this->addChild(mLayout);
#endif

	mTitleTextBar = dynamic_cast<UIImageView*>(mLayout->getChildByName("mTitleTextBar"));
	mBottomBar = dynamic_cast<UIImageView*>(mLayout->getChildByName("mBottomBar"));
	mBackButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mBackButton"));
	mOkButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mOkButton"));
	mHeroHeadScrollView = dynamic_cast<UIScrollView*>(mLayout->getChildByName("mHeroHeadScrollView"));

	mOkButton->setEnabled(false);
	mBackButton->addTouchEventListener(this, toucheventselector(SelectHeroView::onBackBtnTouch));
	mOkButton->addTouchEventListener(this, toucheventselector(SelectHeroView::onOkBtnTouch));

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

static UIImageView* gpLastBeginTouchImage = NULL;
bool SelectHeroView::onTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	gpLastBeginTouchImage = NULL;
	Object* pObj = NULL;
	CCARRAY_FOREACH(mHeroHeadScrollView->getChildren(), pObj)
	{
		UIImageView* pHeaderImage = dynamic_cast<UIImageView*>(pObj);
		if(NULL != pHeaderImage)
		{
			if(pHeaderImage->hitTest(touchPos))
			{
				pHeaderImage->addTouchEventListener(this, toucheventselector(SelectHeroView::onHeadImageTouch));
				pHeaderImage->onTouchBegan(touchPos);
				gpLastBeginTouchImage = pHeaderImage;
				break;
			}
		}
	}
	return UILayer::onTouchBegan(pTouch, pEvent);
}
void SelectHeroView::onTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	gpLastBeginTouchImage = NULL;
	UILayer::onTouchMoved(pTouch, pEvent);
}
void SelectHeroView::onTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	if(NULL != gpLastBeginTouchImage && gpLastBeginTouchImage->hitTest(touchPos))
	{
		gpLastBeginTouchImage->onTouchEnded(touchPos);
		gpLastBeginTouchImage = NULL;
	}
	UILayer::onTouchEnded(pTouch, pEvent);
}
void SelectHeroView::onTouchCancelled(CCTouch *pTouch, CCEvent *pEvent)
{
	CCPoint touchPos = pTouch->getLocation();
	if(NULL != gpLastBeginTouchImage && gpLastBeginTouchImage->hitTest(touchPos))
	{
		gpLastBeginTouchImage->onTouchCancelled(touchPos);
		gpLastBeginTouchImage = NULL;
	}
	UILayer::onTouchCancelled(pTouch, pEvent);
}

void SelectHeroView::onBackBtnTouch(Object *pSender, TouchEventType type)
{
	ViewModelManager::point()->selectModel(ModelType::Login);
}

void SelectHeroView::onOkBtnTouch(Object *pSender, TouchEventType type)
{
	ViewModelManager::point()->selectModel(ModelType::GameScene);
}

void SelectHeroView::onHeadImageTouch(Object *pSender, TouchEventType type)
{
	UIImageView* pImage = dynamic_cast<UIImageView*>(pSender);
	if(NULL != pImage)
	{
		UIImageView* pSelected = NULL;
		UIWidget* pNode = pImage->getChildByTag(101);
		pSelected = dynamic_cast<UIImageView*>(pNode);
		if(NULL != pSelected)
		{
			pImage->removeChild(pSelected);
			mSelectHeroCount --;
		}
		else if(mSelectHeroCount < 3)
		{
			ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUACreateUIImageView", "studioui/SelectHeroView/panel55.png");
			if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
				return;
			pSelected = (UIImageView*)userdata.value.pointer;
			CCSize size = pImage->getSize();
			CCSize selSize = pSelected->getSize();
			pSelected->setPosition(CCPoint(-(size.width-selSize.width)/2.0f, -(size.height-selSize.height)/2.0f));
			pSelected->setTag(101);
			pImage->addChild(pSelected);
			mSelectHeroCount ++;
		}
	}
	if(mSelectHeroCount >= 3)
		mOkButton->setEnabled(true);
	else
		mOkButton->setEnabled(false);
}
