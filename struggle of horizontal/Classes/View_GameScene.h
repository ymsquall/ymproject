#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "CocoStudio/CocoStudio.h"

using namespace framework;

struct ActionStepOveredEventParams
{
};

class GameSceneView : public mvvm::ViewBase<GameSceneView, cocos2d::extension::UILayer>
{
public:
	friend class GameSceneModel;
	GameSceneView();
	~GameSceneView();

	typedef std::vector<cocos2d::extension::UIImageView*> HeroHeadList;

	virtual bool init();
	virtual bool initForMvvm();

private:
	virtual void onEnterTransitionDidFinish();
	virtual void onExit();
	virtual bool ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);

	void onBackBtnTouch(cocos2d::CCObject* pSender);
	void onMapTouched(cocos2d::CCObject* pSender);
	void onMapGridTouched(cocos2d::CCObject* pSender);
	void onMapPanelDragEvent(cocos2d::CCObject* pSender, cocos2d::extension::DragPanelEventType type);

public:
	cocos2d::extension::Layout* mLayout;
	cocos2d::extension::UIButton* mBackButton;
	cocos2d::extension::UITextArea* mDebugText;
	cocos2d::extension::UIDragPanel* mMapDragPanel;
	cocos2d::extension::UIPanel* mMapBGPanel;
	cocos2d::extension::UIImageView* mMapBGImageView;
	cocos2d::extension::UIWidget* mGridsParent;
	cocos2d::extension::UIImageView* mNowSelectGridImage;
	bool mNeedWaitDragPanelBerthOvered;
};