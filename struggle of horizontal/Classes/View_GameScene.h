#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "cocostudio/CocoStudio.h"

using namespace cocos2d;
using namespace framework;
using namespace cocostudio;

class Physics_Box2DView;
class GameSceneView : public mvvm::ViewBase<GameSceneView, cocos2d::CCLayer>
{
public:
	friend class GameSceneModel;
	GameSceneView();
	~GameSceneView();

	virtual bool init();
	virtual bool initForMvvm();

	bool screenScroll(const Point& offset);
	bool screenScrollTo(const Point& toPos);
	bool movePlayer(const Point& offset);
	bool movePlayerTo(const Point& toPos);

private:
	virtual void onEnterTransitionDidFinish();
	virtual void onExit();
	virtual void onTouchesBegan(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
	virtual void onTouchesMoved(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
	virtual void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);

	bool fixedScreenPositionBound(float& posX, float& posY);
	void fixedBgImagePosition(float& posX, float& posY);

	virtual void update(float dt);

	void onFrameEvent(cocostudio::Bone *bone, const char *evt, int originFrameIndex, int currentFrameIndex);
	void animationEvent(cocostudio::Armature *armature, cocostudio::MovementEventType movementType, const char *movementID);

public:
	TMXTiledMap* mTiledMap;
	TMXLayer* mFGLayer;
	TMXLayer* mBGLayer;
	cocostudio::Armature* mHeroAnim;
	CCPoint mScrollEndPos;
	CCPoint mBgFixedPos;
	CCPoint mPlayerEndPos;

	Physics_Box2DView* mPhysicsView;

	CCPoint mTouchMoveBeginPos;
	cocos2d::Touch* mTouchMoveing;
};