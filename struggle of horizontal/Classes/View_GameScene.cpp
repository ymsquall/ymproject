#include "View_GameScene.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"
#include "Model_GameScene.h"

GameSceneView* gGameSceneView = NULL;

using namespace cocos2d;
using namespace cocos2d::extension;

GameSceneView::GameSceneView()
{
	mTiledMap = NULL;
	mFGLayer = NULL;
	mBGLayer = NULL;
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
	
	cocos2d::Size thisSize = this->getContentSize();
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadGameSceneView", this, thisSize.width, thisSize.height);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;
	mTiledMap = (TMXTiledMap*)userdata.value.pointer;
	mFGLayer = mTiledMap->getLayer("foreground");
	mBGLayer = mTiledMap->getLayer("background");
	mHeroAnim = dynamic_cast<Armature*>(mTiledMap->getChildByTag(101));

	this->scheduleUpdate();
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

bool GameSceneView::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
{
	return true;
}
void GameSceneView::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
}
void GameSceneView::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
{
}
void GameSceneView::ccTouchCancelled(CCTouch *pTouch, CCEvent *pEvent)
{
}

bool GameSceneView::screenScroll(const CCPoint& offset)
{
	float posX = mScrollEndPos.x + offset.x;
	float posY = mScrollEndPos.y - offset.y;
	bool ret = fixedScreenPositionBound(posX, posY);
	mScrollEndPos = ccp(posX, posY);
	this->fixedBgImagePosition(posX, posY);
	return ret;
}
bool GameSceneView::screenScrollTo(const CCPoint& toPos)
{
	// 
	static CCSize screenSize = CCDirector::sharedDirector()->getWinSize();
	static CCSize scrnHelfSize = ccp(screenSize.width/2.0f, screenSize.height/2.0f);
	float posX = scrnHelfSize.width + toPos.x;
	float posY = scrnHelfSize.height - toPos.y;
	bool ret = fixedScreenPositionBound(posX, posY);
	mScrollEndPos = ccp(posX, posY);
	this->fixedBgImagePosition(posX, posY);
	return ret;
}

void GameSceneView::fixedBgImagePosition(float& posX, float& posY)
{
	static CCSize screenSize = CCDirector::sharedDirector()->getWinSize();
	static CCSize scrnHelfSize = ccp(screenSize.width/2.0f, screenSize.height/2.0f);
	if((NULL != mBGLayer) && (NULL != mFGLayer))
	{
		CCSize fgSize = mFGLayer->getTileSet()->_imageSize;
		CCSize bgSize = mBGLayer->getTileSet()->_imageSize;
		float scaleX = fabs(posX) / (fgSize.width - screenSize.width);
		float scaleY = fabs(posY) / (fgSize.height - screenSize.height);
		mBgFixedPos.x = -posX - (scaleX * (bgSize.width - screenSize.width));
		mBgFixedPos.y = -posY - (scaleY * (bgSize.height - screenSize.height));
	}
}

bool GameSceneView::fixedScreenPositionBound(float& posX, float& posY)
{
	static CCSize screenSize = CCDirector::sharedDirector()->getWinSize();
	static CCSize scrnHelfSize = ccp(screenSize.width/2.0f, screenSize.height/2.0f);
	bool ret = true;
	if(NULL != mFGLayer)
	{
		CCSize fgSize = mFGLayer->getTileSet()->_imageSize;
		if(posX > 0)
		{
			posX = 0;
			ret = false;
		}
		if(posY > 0)
		{
			posY = 0;
			ret = false;
		}
		if(posX < -(fgSize.width - screenSize.width))
		{
			posX = -(fgSize.width - screenSize.width);
			ret = false;
		}
		if(posY < -(fgSize.height - screenSize.height))
		{
			posY = -(fgSize.height - screenSize.height);
			ret = false;
		}
	}
	return ret;
}


bool GameSceneView::movePlayer(const CCPoint& offset)
{

	return true;
}
bool GameSceneView::movePlayerTo(const CCPoint& toPos)
{

	return true;
}

void GameSceneView::update(float dt)
{
	if(NULL != mTiledMap)
	{
		mTiledMap->setPosition(mScrollEndPos);
	}
	if(NULL != mBGLayer)
	{
		mBGLayer->setPosition(mBgFixedPos);
	}
}