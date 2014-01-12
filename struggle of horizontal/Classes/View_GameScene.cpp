#include "View_GameScene.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"
#include "Model_GameScene.h"
#include "Model_CreatureHeader.h"
#include "ViewModel_GameScene.h"
#include "Physics_Box2dView.h"
#include "Physics_GameScene.h"
#include "math/Math.h"
#include "gui/CocosGUI.h"
#include "LocalPlayer.h"
#include "Monster.h"

GameSceneView* gGameSceneView = NULL;

using namespace cocos2d;
using namespace cocos2d::extension;
using namespace framework;

GameSceneView::GameSceneView()
{
	mTiledMap = NULL;
	mFGLayer_01 = NULL;
	mFGLayer_02 = NULL;
	mBGLayer = NULL;
	mJumpBtn = NULL;
	mAttackBtn = NULL;
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
		
	cocos2d::Size thisSize = this->getContentSize();
	ScriptParamObject userdata = callLuaFuncWithUserdataResult("LUALoadGameSceneView", this, thisSize.width, thisSize.height);
	if(userdata.type != LUA_TUSERDATA || NULL == userdata.value.pointer)
		return false;
	this->scheduleUpdate();
	GameSceneViewModel::point()->setSceneView(this);
	mTiledMap = (TMXTiledMap*)userdata.value.pointer;
	mFGLayer_01 = mTiledMap->getLayer("foreground_01");
	mFGLayer_02 = mTiledMap->getLayer("foreground_02");
	mBGLayer = mTiledMap->getLayer("background");
	cocostudio::Armature* pAnimView = dynamic_cast<Armature*>(mTiledMap->getChildByTag(101));
	gui::UILayer* pUILayer = dynamic_cast<gui::UILayer*>(this->getChildByTag(201));
	gui::UIWidget* pWidget = dynamic_cast<gui::UIWidget*>(pUILayer->getWidgetByTag(202));
	mJumpBtn = dynamic_cast<gui::UIButton*>(pWidget->getChildByName("mJumpBtn"));
	mAttackBtn = dynamic_cast<gui::UIButton*>(pWidget->getChildByName("mAttackBtn"));

	auto director = Director::getInstance();
	Point visibleOrigin = director->getVisibleOrigin();
	Size visibleSize = director->getVisibleSize();
	mPhysicsView = Physics_Box2DView::create(1);

	LocalPlayer* pLocalUser = LocalPlayer::create(GameScenePhysics::point()->mWorld);
	LocalPlayer::instance()->setAnimView(pAnimView);

	GameScenePhysics* pPhysics = mPhysicsView->physics<GameScenePhysics>();
	if(NULL != pPhysics)
	{
		pPhysics->initBoxWithTiledMap(mTiledMap);
	}
	mTiledMap->addChild(mPhysicsView,1000);
	mPhysicsView->setScale(PTM_RATIO);
	mPhysicsView->setAnchorPoint(Point(0,0));

	auto listener = EventListenerTouchAllAtOnce::create();
	listener->onTouchesBegan = CC_CALLBACK_2(GameSceneView::onTouchesBegan, this);
	listener->onTouchesMoved = CC_CALLBACK_2(GameSceneView::onTouchesMoved, this);
	listener->onTouchesEnded = CC_CALLBACK_2(GameSceneView::onTouchesEnded, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	//_touchListener = listener;

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

void GameSceneView::onTouchesBegan(const std::vector<Touch*>& touches, Event *unused_event)
{
    for(auto& touch: touches)
    {
        auto location = touch->getLocation();
        if(!callLuaFuncWithBoolResult("LUAGameSceneViewTouchesBegan", touch->getID(), location.x, location.y))
            this->onTouchBegan(location);
    }
}
void GameSceneView::onTouchesMoved(const std::vector<Touch*>& touches, Event *unused_event)
{
    for(auto& touch: touches)
    {
        auto location = touch->getLocation();
        if(!callLuaFuncWithBoolResult("LUAGameSceneViewTouchesMoved", touch->getID(), location.x, location.y))
           this->onTouchBegan(location);
    }
}
void GameSceneView::onTouchesEnded(const std::vector<Touch*>& touches, Event *unused_event)
{
    for(auto& touch: touches)
    {
        auto location = touch->getLocation();
        if(!callLuaFuncWithBoolResult("LUAGameSceneViewTouchesEnded", touch->getID(), location.x, location.y))
           this->onTouchEnded(location);
    }
}

void GameSceneView::onTouchBegan(const Point& pos)
{
     if(mJumpBtn->hitTest(pos))
     {
         mJumpBtn->onTouchBegan(pos);
         return;
     }
     if(mAttackBtn->hitTest(pos))
     {
         mAttackBtn->onTouchBegan(pos);
         return;
     }
}
void GameSceneView::onTouchMoved(const Point& pos)
{
     mJumpBtn->onTouchMoved(pos);
     mAttackBtn->onTouchMoved(pos);
}
void GameSceneView::onTouchEnded(const Point& pos)
{
     mJumpBtn->onTouchEnded(pos);
     mAttackBtn->onTouchEnded(pos);
}

bool GameSceneView::screenScroll(const Point& offset)
{
	float posX = mScrollEndPos.x + offset.x;
	float posY = mScrollEndPos.y + offset.y;
	bool ret = fixedScreenPositionBound(posX, posY);
	CCPoint oldEndPos = mScrollEndPos;
	mScrollEndPos = ccp(posX, posY);
	this->fixedBgImagePosition(posX, posY);
	return ret;
}
bool GameSceneView::screenScrollTo(const Point& toPos)
{
	// 
	static CCSize screenSize = CCDirector::sharedDirector()->getWinSize();
	static CCSize scrnHelfSize = CCSizeMake(screenSize.width/2.0f, screenSize.height/2.0f);
	float posX = scrnHelfSize.width + toPos.x;
	float posY = scrnHelfSize.height + toPos.y;
	bool ret = fixedScreenPositionBound(posX, posY);
	CCPoint oldEndPos = mScrollEndPos;
	mScrollEndPos = ccp(posX, posY);
	this->fixedBgImagePosition(posX, posY);
	return ret;
}

void GameSceneView::fixedBgImagePosition(float& posX, float& posY)
{
	static CCSize screenSize = CCDirector::sharedDirector()->getWinSize();
	static CCSize scrnHelfSize = CCSizeMake(screenSize.width/2.0f, screenSize.height/2.0f);
	if((NULL != mBGLayer) && (NULL != mFGLayer_01) && (NULL != mFGLayer_02))
	{
		CCSize fgSize1 = mFGLayer_01->getTileSet()->_imageSize;
		CCSize fgSize2 = mFGLayer_02->getTileSet()->_imageSize;
		CCSize fgSize(fgSize1.width + fgSize2.width, fgSize1.height > fgSize2.height ? fgSize1.height : fgSize2.height);
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
	static CCSize scrnHelfSize = CCSizeMake(screenSize.width/2.0f, screenSize.height/2.0f);
	bool ret = true;
	if(NULL != mFGLayer_01 && NULL != mFGLayer_02)
	{
		CCSize fgSize1 = mFGLayer_01->getTileSet()->_imageSize;
		CCSize fgSize2 = mFGLayer_02->getTileSet()->_imageSize;
		CCSize fgSize(fgSize1.width + fgSize2.width, fgSize1.height > fgSize2.height ? fgSize1.height : fgSize2.height);
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


bool GameSceneView::movePlayer(const Point& offset)
{

	return true;
}
bool GameSceneView::movePlayerTo(const Point& toPos)
{

	return true;
}

GameScenePhysics* GameSceneView::getPhysics()
{
	return mPhysicsView->physics<GameScenePhysics>();
}

TMXTiledMap* GameSceneView::getTiledMap()
{
	return mTiledMap;
}

void GameSceneView::update(float dt)
{
	static CCSize screenSize = CCDirector::sharedDirector()->getWinSize();
	static CCSize scrnHelfSize = CCSizeMake(screenSize.width/2.0f, screenSize.height/2.0f);
	if(NULL != mTiledMap)
	{
		mTiledMap->setPosition(mScrollEndPos);
	}
	if(NULL != mBGLayer)
	{
		mBGLayer->setPosition(mBgFixedPos);
	}
	/*
	GameScenePhysics* pPhysics = mPhysicsView->physics<GameScenePhysics>();
	if(NULL != pPhysics)
	{
		// hero weapon box
		{
			CCBone* pBone = (CCBone*)pPhysics->mWeaponBody->GetUserData();
			CCNode* pBoneNode = pBone->getDisplayRenderNode();
			CCNode* pBindNode = dynamic_cast<CCNode*>(pBoneNode->getChildByTag(111));
			CCSize size = pBoneNode->getContentSize();
			AffineTransform trans = pBone->getNodeToWorldTransform();
			Point pos = pBoneNode->convertToWorldSpaceAR(pBindNode->getPosition());
			Point titledMapPos = mTiledMap->getPosition();
			pos.x -= titledMapPos.x;
			pos.y -= titledMapPos.y;
			float rota = 0.0f;
			float rotaA = acosf(trans.a);
			float rotaB = asinf(trans.b);
			if(rotaB < 0)
				rota = math::Math::HALF_PI - rotaB;
			else
				rota = rotaA - math::Math::HALF_PI;
			//Point offDir(0,0);
			//if(rota >= 0 && rota < math::Math::HALF_PI)
			//{
			//	offDir.y = 1.0f - (rota / math::Math::HALF_PI);
			//	offDir.x = -(1.0f - offDir.y);
			//}
			//else if(rota >= math::Math::HALF_PI && rota < math::Math::PI)
			//{
			//	offDir.x = (rota - math::Math::HALF_PI) / math::Math::HALF_PI - 1.0f;
			//	offDir.y = -(1.0f + offDir.x);
			//}
			//else if(rota >= -math::Math::HALF_PI && rota < 0)
			//{
			//	offDir.y = 1.0f + (rota / math::Math::HALF_PI);
			//	offDir.x = 1.0f - offDir.y;
			//}
			//else
			//{
			//	offDir.x = 1.0f + (rota + math::Math::HALF_PI) / math::Math::HALF_PI;
			//	offDir.y = -(1.0f - offDir.x);
			//}
			//offDir.normalize();
			//Point pos(trans.tx, trans.ty);
			//pos += offDir * (size.height);
			//pos.x += size.width/1.5f;
			//CCLOG("rota [%.02f, %.02f]", rotaA * (180 / math::Math::PI), rotaB * (180 / math::Math::PI));
			pPhysics->mWeaponBody->SetTransform(b2Vec2(pos.x / PTM_RATIO, pos.y / PTM_RATIO), rota);
			pPhysics->mWeaponBody->SetLinearVelocity(b2Vec2(0,0));
		}
	}
	//
	Point animPos = mHeroAnim->getPosition();
	Point mapPos = mTiledMap->getPosition();
	Point offset = animPos + mapPos;
	offset.x -= scrnHelfSize.width;
	offset.y -= scrnHelfSize.height;
	if(offset.x < -100)
		mapPos.x = (mapPos.x - (offset.x + 100.0f)) - scrnHelfSize.width;
	else if(offset.x > 100)
		mapPos.x = (mapPos.x - (offset.x - 100.0f)) - scrnHelfSize.width;
	else mapPos.x = mapPos.x - scrnHelfSize.width;
	if(offset.y < -100)
		mapPos.y = (mapPos.y - (offset.y + 100.0f)) - scrnHelfSize.height;
	else if(offset.y > 100)
		mapPos.y = (mapPos.y - (offset.y - 100.0f)) - scrnHelfSize.height;
	else mapPos.y = mapPos.y - scrnHelfSize.height;
	//CCLOG("screen [%.02f, %.02f]", mapPos.x, mapPos.y);
	this->screenScrollTo(mapPos);
	*/
}

bool GameSceneView::onAttackContactBegin(EventCustom* event, const PhysicsContact& contact)
{
	PhysicsShape* pShapeA = contact.getShapeA();
	PhysicsShape* pShapeB = contact.getShapeB();
	if(pShapeA->getBody()->getNode()->getParent() == pShapeB->getBody()->getNode()->getParent())
		return false;
	const PhysicsContactData* pData = contact.getContactData();
	if(pData->count == 1)
	{
		CCLog("onAttackContactBegin(%d-%d)[px=%.02f, py=%.02f\tnx=%.02f,ny=%.02f]", pShapeA->getBody()->getNode()->getTag(), pShapeB->getBody()->getNode()->getTag(),
			pData->points[0].x, pData->points[0].y, pData->normal.x, pData->normal.y);
	}
	else
	{
		CCLog("onCreatureContactWallBegin(%d-%d)[nx=%.02f,ny=%.02f]:", pShapeA->getBody()->getNode()->getTag(), pShapeB->getBody()->getNode()->getTag(),
			pData->normal.x, pData->normal.y);
		for(int i = 0; i < pData->count; ++ i)
		{
			CCLog("\t%d:[px=%.02f, py=%.02f]", i, pData->points[i].x, pData->points[i].y);
		}
	}
	return true;
}
void GameSceneView::onAttackContactEnded(EventCustom* event, const PhysicsContact& contact)
{
	PhysicsShape* pShapeA = contact.getShapeA();
	PhysicsShape* pShapeB = contact.getShapeB();
	if(pShapeA->getBody()->getNode()->getParent() == pShapeB->getBody()->getNode()->getParent())
		return;
	const PhysicsContactData* pData = contact.getContactData();
	if(pData->count == 1)
	{
		CCLog("onAttackContactEnded(%d-%d)[px=%.02f, py=%.02f\tnx=%.02f,ny=%.02f]", pShapeA->getBody()->getNode()->getTag(), pShapeB->getBody()->getNode()->getTag(),
			pData->points[0].x, pData->points[0].y, pData->normal.x, pData->normal.y);
	}
	else
	{
		CCLog("onCreatureContactWallEnded(%d-%d)[nx=%.02f,ny=%.02f]:", pShapeA->getBody()->getNode()->getTag(), pShapeB->getBody()->getNode()->getTag(),
			pData->normal.x, pData->normal.y);
		for(int i = 0; i < pData->count; ++ i)
		{
			CCLog("\t%d:[px=%.02f, py=%.02f]", i, pData->points[i].x, pData->points[i].y);
		}
	}
}