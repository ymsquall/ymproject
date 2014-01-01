#pragma once

#include "cocos2d.h"
#include "cocos-ext.h"
#include "mvvm/view.h"
#include "gui/CocosGUI.h"

using namespace framework;

class CreatureHeaderView : public mvvm::ViewBase<CreatureHeaderView, gui::UILayer>
{
public:
	CreatureHeaderView();
	~CreatureHeaderView();

    virtual bool init();
	virtual bool initForMvvm();
	virtual void update(float dt);

private:
	virtual void onEnterTransitionDidFinish();

private:
	gui::UILayer* mRootLayer;
	gui::UIImageView* mProgressBG;
	gui::UILoadingBar* mProgressBar;
	gui::UILabel* mNameLabel;
	gui::UILabel* mHPShowLabel;
};