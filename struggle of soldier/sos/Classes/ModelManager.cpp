#include "ModelManager.h"
#include "TopLevelView.h"
#include "mvvm/framework.h"
#include "cocos2d.h"
#include "RootSceneView.h"

USING_NS_CC;

ModelManager::ModelManager(void)
{
}

ModelManager::~ModelManager(void)
{
}

void ModelManager::initWithAppStart(engine::AppDelegate* pApp)
{
	Director* pDirector = Director::getInstance();
	pDirector->setNotificationNode(TopLevelView::point());
	pDirector->runWithScene(RootSceneView::point());
	pApp->Event_AppInitOveredShowingBefore += framework::RoutedEvent<engine::AppDelegate*>::HandlerT(this, &ModelManager::onAppInitOveredShowingBefore);
	pApp->Event_AppInitOveredShowingAfter += framework::RoutedEvent<engine::AppDelegate*>::HandlerT(this, &ModelManager::onAppInitOveredShowingAfter);
}

bool ModelManager::modelLoop()
{
	return true;
}

void ModelManager::onAppInitOveredShowingBefore(engine::AppDelegate* pApp, framework::RoutedEventArgs* args)
{

}
void ModelManager::onAppInitOveredShowingAfter(engine::AppDelegate* pApp, framework::RoutedEventArgs* args)
{

}