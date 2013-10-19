#pragma once
#include "cocos2d.h"
#include "unity/singleton.h"

using namespace framework;

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

