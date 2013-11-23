#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "CocoStudio/CocoStudio.h"

using namespace cocos2d;
using namespace cocos2d::extension::armature;
using namespace framework;

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
	virtual bool ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);

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