#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "cocostudio/CocoStudio.h"

using namespace cocos2d;
using namespace framework;
using namespace cocostudio;

class GameSceneView : public mvvm::ViewBase<GameSceneView, cocos2d::CCLayer>
{
public:
	friend class GameSceneModel;
	GameSceneView();
	~GameSceneView();

	virtual bool init();
	virtual bool initForMvvm();

	bool screenScroll(const CCPoint& offset);
	bool screenScrollTo(const CCPoint& toPos);
	bool movePlayer(const CCPoint& offset);
	bool movePlayerTo(const CCPoint& toPos);

private:
	virtual void onEnterTransitionDidFinish();
	virtual void onExit();
	virtual bool onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void onTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void onTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);

	bool fixedScreenPositionBound(float& posX, float& posY);
	void fixedBgImagePosition(float& posX, float& posY);

	virtual void update(float dt);

public:
	TMXTiledMap* mTiledMap;
	TMXLayer* mFGLayer;
	TMXLayer* mBGLayer;
	Armature* mHeroAnim;
	CCPoint mScrollEndPos;
	CCPoint mBgFixedPos;
	CCPoint mPlayerEndPos;
};