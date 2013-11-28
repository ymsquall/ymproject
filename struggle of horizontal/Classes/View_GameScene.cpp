#include "View_GameScene.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"
#include "Model_GameScene.h"
#include "Physics_Box2dView.h"
#include "Physics_GameScene.h"

GameSceneView* gGameSceneView = NULL;

using namespace cocos2d;
using namespace cocos2d::extension;

GameSceneView::GameSceneView()
{
	mTiledMap = NULL;
	mFGLayer = NULL;
	mBGLayer = NULL;
	mTouchMoveing = NULL;
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
	mHeroAnim->getAnimation()->setFrameEventCallFunc(this, frameEvent_selector(GameSceneView::onFrameEvent));
	mHeroAnim->getAnimation()->setMovementEventCallFunc(this, movementEvent_selector(GameSceneView::animationEvent));
	this->scheduleUpdate();

	auto listener = EventListenerTouchAllAtOnce::create();
	listener->onTouchesBegan = CC_CALLBACK_2(GameSceneView::onTouchesBegan, this);
	listener->onTouchesMoved = CC_CALLBACK_2(GameSceneView::onTouchesMoved, this);
	listener->onTouchesEnded = CC_CALLBACK_2(GameSceneView::onTouchesEnded, this);
	_eventDispatcher->addEventListenerWithFixedPriority(listener, -10);
	_touchListener = listener;

	return true;
}

void GameSceneView::onFrameEvent(cocostudio::Bone *bone, const char *evt, int originFrameIndex, int currentFrameIndex)
{

}

void GameSceneView::animationEvent(cocostudio::Armature *armature, cocostudio::MovementEventType movementType, const char *movementID)
{

}

bool GameSceneView::initForMvvm()
{
	return true;
}

void GameSceneView::onEnterTransitionDidFinish()
{
	ViewSuperT::onEnterTransitionDidFinish();
	callLuaFuncNoResult("LUAGameSceneViewOnEnter");

	auto director = Director::getInstance();
	Point visibleOrigin = director->getVisibleOrigin();
	Size visibleSize = director->getVisibleSize();
	mPhysicsView = Physics_Box2DView::create(1);
	mTiledMap->addChild(mPhysicsView,1000);
	mPhysicsView->setScale(VIEW_SCALE_RATE);
	mPhysicsView->setAnchorPoint(Point(0,0));

	GameScenePhysics* pPhysics = mPhysicsView->physics<GameScenePhysics>();
	if(NULL != pPhysics)
	{
		// hero weapon box
		//CCBone* pBone = mHeroAnim->getBone("Layer17");
		//pPhysics->mHeroWeaponBody1->SetUserData((void*)pBone);
		//CCNode* boneNode = pBone->getDisplayRenderNode();
		//CCSize size = boneNode->getContentSize();
		//CCPoint pos = boneNode->getPosition();
		//pBone->getParentBone()->getDisplayRenderNode()->convertToWorldSpaceAR(pos);
		//b2BodyDef bd;
		//bd.type = b2_dynamicBody;
		//bd.position.Set(pos.x/VIEW_SCALE_RATE, pos.x/VIEW_SCALE_RATE);
		//pPhysics->mHeroWeaponBody = pPhysics->mWorld->CreateBody(&bd);
		//b2PolygonShape shape;
		//b2FixtureDef fd;
		//fd.shape = &shape;
		//fd.density = 0.0f;
		//fd.friction = 0.0f;
		//shape.SetAsBox(size.width/PTM_RATIO, size.height/PTM_RATIO, b2Vec2(0, 0), pBone->getRotation());
		//pPhysics->mHeroWeaponBody->CreateFixture(&fd);
		//pPhysics->mHeroWeaponBody->SetUserData((void*)pBone);
	}
}
void GameSceneView::onExit()
{
	callLuaFuncNoResult("LUAGameSceneViewOnExit");
	ViewSuperT::onExit();
}

void GameSceneView::onTouchesBegan(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event)
{
	static CCSize screenSize = CCDirector::sharedDirector()->getWinSize();
	static CCSize scrnHelfSize = CCSizeMake(screenSize.width/2.0f, screenSize.height/2.0f);
	for(std::vector<cocos2d::Touch*>::const_iterator it = touches.begin(); it != touches.end(); ++ it)
	{
		CCPoint locPos = touches[0]->getLocation();
		CCPoint nodePos = convertToNodeSpace(locPos);
		if(nodePos.x < scrnHelfSize.width)
		{
			mTouchMoveBeginPos = nodePos;
			mTouchMoveing = *it;
		}
	}
}
void GameSceneView::onTouchesMoved(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event)
{
}
void GameSceneView::onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event)
{
	for(std::vector<cocos2d::Touch*>::const_iterator it = touches.begin(); it != touches.end(); ++ it)
	{
		if(*it == mTouchMoveing)
		{
			mTouchMoveing = NULL;
			mHeroAnim->getAnimation()->play("loading");
		}
	}
}

bool GameSceneView::screenScroll(const Point& offset)
{
	float posX = mScrollEndPos.x + offset.x;
	float posY = mScrollEndPos.y - offset.y;
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
	float posY = scrnHelfSize.height - toPos.y;
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
	static CCSize scrnHelfSize = CCSizeMake(screenSize.width/2.0f, screenSize.height/2.0f);
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


bool GameSceneView::movePlayer(const Point& offset)
{

	return true;
}
bool GameSceneView::movePlayerTo(const Point& toPos)
{

	return true;
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
	GameScenePhysics* pPhysics = mPhysicsView->physics<GameScenePhysics>();
	if(NULL != pPhysics)
	{
		b2Vec2 heroPos = pPhysics->mHeroBody->GetWorldCenter();
		const b2Fixture* fixture = pPhysics->mHeroBody->GetFixtureList();
		const b2AABB& aabb = fixture->GetAABB(0);
		CCPoint finalPos = CCPoint(heroPos.x - (aabb.upperBound.x - aabb.lowerBound.x)/2.0f, heroPos.y - (aabb.upperBound.y - aabb.lowerBound.y)/2.0f);
		mHeroAnim->setPosition(CCPoint(finalPos.x * VIEW_SCALE_RATE, finalPos.y * VIEW_SCALE_RATE));
		if(NULL != mTouchMoveing)
		{
			b2ContactEdge* pContact = pPhysics->mHeroBody->GetContactList();
			if(NULL == pContact)
			{
				if(mHeroAnim->getAnimation()->getCurrentMovementID() != "loading")
					mHeroAnim->getAnimation()->play("loading");
				pPhysics->mHeroMoveSpeed = 0;
			}
			else
			{
				CCPoint locPos = mTouchMoveing->getLocation();
				CCPoint nodePos = convertToNodeSpace(locPos);
				float dist = (nodePos - mTouchMoveBeginPos).getLength();
				if(fabs(dist) > 20.0f)
				{
					if(mHeroAnim->getAnimation()->getCurrentMovementID() != "run")
						mHeroAnim->getAnimation()->play("run");
					if(dist > 100.0f) dist = 100.0f;
					float width = nodePos.x - mTouchMoveBeginPos.x;
					float height = nodePos.y - mTouchMoveBeginPos.y;
					float speed = 2.0f;
					float moveDistX = dist * speed / VIEW_SCALE_RATE;
					b2Vec2 pos = pPhysics->mHeroBody->GetPosition();
					if(width > 0)
					{
						mHeroAnim->setRotationY(0);
					}
					else
					{
						moveDistX = -moveDistX;
						mHeroAnim->setRotationY(180);
					}
					pPhysics->mHeroMoveSpeed = moveDistX;
				}
				else
				{
					if(mHeroAnim->getAnimation()->getCurrentMovementID() != "loading")
						mHeroAnim->getAnimation()->play("loading");
					pPhysics->mHeroMoveSpeed = 0;
				}
			}
		}
		else
		{
			pPhysics->mHeroMoveSpeed = 0;
		}

		// hero weapon box
		{
			CCBone* pBone = mHeroAnim->getBone("Layer17");
			CCNode* pBoneNode = pBone->getDisplayRenderNode();
			CCPoint pos = pBoneNode->getPosition();
			pos = pBone->getParentBone()->getDisplayRenderNode()->convertToWorldSpace(pos);
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(pos.x / VIEW_SCALE_RATE, pos.y / VIEW_SCALE_RATE);
			if(NULL != pPhysics->mHeroWeaponBody)
			{
				pPhysics->mWorld->DestroyBody(pPhysics->mHeroWeaponBody);
				pPhysics->mHeroWeaponBody = NULL;
			}
			pPhysics->mHeroWeaponBody = pPhysics->mWorld->CreateBody(&bd);
			b2PolygonShape shape;
			b2FixtureDef fd;
			fd.shape = &shape;
			fd.density = 0;
			fd.friction = 0;
			CCSize size = pBoneNode->getContentSize();
			//float rota = pBoneNode->getRotation();
			AffineTransform trans = pBoneNode->getNodeToWorldTransform();
			float rota1 = acosf(trans.a);
			float rota2 = asinf(trans.b);
			CCLOG("bone node rota = %.02f, %0.02f", rota1, rota2);
			shape.SetAsBox(size.width/PTM_RATIO, size.height/PTM_RATIO, b2Vec2(0, 0), rota1/*/180.0f*3.14f*/);
			pPhysics->mHeroWeaponBody->CreateFixture(&fd);
		}
		//CCBone* pBone = (CCBone*)pPhysics->mHeroWeaponBody1->GetUserData();
		//CCNode* pBoneNode = pBone->getDisplayRenderNode();
		//CCPoint pos = pBoneNode->getPosition();
		//pos = pBone->getParentBone()->getDisplayRenderNode()->convertToWorldSpaceAR(pos);
		//float rota = pBoneNode->getRotation();
		//pPhysics->mHeroWeaponBody1->SetTransform(b2Vec2(pos.x / VIEW_SCALE_RATE, pos.y / VIEW_SCALE_RATE), -rota);
	}
}
