#include "RootSceneView.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"

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
	uiview::Panel* pRootPanel = uiview::Panel::createView();
	cocos2d::Size panelSize = pRootPanel->Size;
	pRootPanel->Position = cocos2d::CCPoint(panelSize.width / 2.0f, panelSize.height / 2.0f);
	cocos2d::Size thisSize = cocos2d::Director::getInstance()->getVisibleSize();
	cocos2d::Sprite* pBgPic = cocos2d::Sprite::create("picture/background/3285-1.png");
	lua_State* L = LuaEngine::getInstance()->getLuaStack()->getLuaState();
	pRootPanel->addChild(pBgPic);
	this->addChild(pRootPanel);

	ViewModelManager::point()->selectModel(ModelType::Login);
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
