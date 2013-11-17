#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "CocoStudio/CocoStudio.h"

using namespace framework;

struct ActionStepOveredEventParams
{
};

class GameLandView : public mvvm::ViewBase<GameLandView, cocos2d::extension::UILayer>
{
public:
	friend class GameLandModel;
	GameLandView();
	~GameLandView();

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
	/*
	framework::unity::event<GameLandView*, ActionStepOveredEventParams*> Event_OnActionStepOvered;
	typedef struct LandTreeGrid *LandTreeGridPtr;
	void doLiveChanged(bool isLive);
	void doTroopChanged(const std::string& name);
	void doSelectGrid(const LandTreeGrid* pGrid);
	bool initLandGrid(const LandTreeGrid* pGrid);
	typedef std::map<const LandTreeGrid*, cocos2d::extension::UIWidget*> GridRenderList;
	GridRenderList mGridRenderList;
	std::vector<cocos2d::extension::armature::Armature*> mXiaobingAnimList;
	std::string mTroopName;
	*/
};