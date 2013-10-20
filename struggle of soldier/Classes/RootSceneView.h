#pragma once
#include "cocos2d.h"
#include "unity/singleton.h"
#include "uiview/Panel/Panel.h"

using namespace framework;
using namespace engine;

class RootSceneView : public cocos2d::Scene
	, public unity::SingletonAutoT<RootSceneView>
{
public:
	RootSceneView(void);
	~RootSceneView(void);

private:
	virtual void onEnter();
	virtual void onEnterTransitionDidFinish();

	virtual void onExit();
	virtual void onExitTransitionDidStart();

private:
	void update(float dt);
};

