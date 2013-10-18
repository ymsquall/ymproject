#include "RootSceneView.h"

RootSceneView::RootSceneView(void)
{
}

RootSceneView::~RootSceneView(void)
{
}

void RootSceneView::onEnter()
{
	cocos2d::Scene::onEnter();
}
void RootSceneView::onEnterTransitionDidFinish()
{
	cocos2d::Scene::onEnterTransitionDidFinish();
	this->scheduleUpdate();
	// test
	cocos2d::Size thisSize = cocos2d::Director::getInstance()->getVisibleSize();
	cocos2d::Sprite* pBgPic = cocos2d::Sprite::create("picture/background/3285-1.png");
	pBgPic->setPosition(cocos2d::ccp(thisSize.width/2.0f, thisSize.height/2.0f));
	pBgPic->setContentSize(thisSize);
	this->addChild(pBgPic);
}

void RootSceneView::onExit()
{
	cocos2d::Scene::onExit();
}
void RootSceneView::onExitTransitionDidStart()
{
	this->unscheduleUpdate();
	cocos2d::Scene::onExitTransitionDidStart();
}

void RootSceneView::update(float dt)
{

}