#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "cocostudio/CocoStudio.h"

using namespace cocos2d;
using namespace framework;
using namespace cocostudio;

//#ifdef COCOS2DX_ENGINE_V30
//	namespace gui
//	{
//		class UIButton;
//	}
//#else COCOS2DX_ENGINE_GITHUB_V3
//	namespace cocos2d
//	{
//		namespace gui
//		{
//			class UIButton;
//		}
//	}
//#endif

class Physics_Box2DView;
class GameScenePhysics;
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
	GameScenePhysics* getPhysics();
	TMXTiledMap* getTiledMap();

	void onTouchesBegan(const std::vector<Touch*>& touches, Event *unused_event);
	void onTouchesMoved(const std::vector<Touch*>& touches, Event *unused_event);
	void onTouchesEnded(const std::vector<Touch*>& touches, Event *unused_event);
    
	void onTouchBegan(const Point& pos);
	void onTouchMoved(const Point& pos);
	void onTouchEnded(const Point& pos);

private:
	virtual void onEnterTransitionDidFinish();
	virtual void onExit();

	bool fixedScreenPositionBound(float& posX, float& posY);
	void fixedBgImagePosition(float& posX, float& posY);

	virtual void update(float dt);

public:
	TMXTiledMap* mTiledMap;
	TMXLayer* mFGLayer_01;
	TMXLayer* mFGLayer_02;
	TMXLayer* mBGLayer;
	CCPoint mScrollEndPos;
	CCPoint mBgFixedPos;
	CCPoint mPlayerEndPos;

	Physics_Box2DView* mPhysicsView;

	gui::UIButton* mStickLeftBtn;
	gui::UIButton* mStickRightBtn;
	gui::UIButton* mJumpBtn;
	gui::UIButton* mAttackBtn;
	gui::UIButton* mSkill1Btn;
	gui::UIButton* mSkill2Btn;
};