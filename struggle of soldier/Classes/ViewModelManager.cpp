#include "ViewModelManager.h"
#include "TopLevelView.h"
#include "mvvm/framework.h"
#include "cocos2d.h"
#include "RootSceneView.h"
#include "LuaSOSExtern.h"
// Model Impl
#include "Model_Login.h"
#include "Model_SelectHero.h"
#include "Model_GameLand.h"
// ViewModel
#include "ViewModel_Login.h"
#include "ViewModel_SelectHero.h"
#include "ViewModel_GameLand.h"
#include "luaext/LuaHelper.h"

USING_NS_CC;

ViewModelManager::ViewModelManager(void)
{
	mModelFactory = new unity::FactoryWithString();
	mLastUpdate = NULL;
	mDeltaTime = 0.0f;
	mNextDeltaTimeZero = false;
}

ViewModelManager::~ViewModelManager(void)
{
	if(NULL != mLastUpdate)
		delete mLastUpdate;
}

void ViewModelManager::initWithAppStart(engine::AppDelegate* pApp)
{
	LuaEngine* pLuaEngine = LuaEngine::getInstance();
	tolua_LuaSOSExtern_open(pLuaEngine->getLuaStack()->getLuaState());

    CCFileUtils* pFileUtils = CCFileUtils::sharedFileUtils();
    std::vector<std::string> searchPaths;
	searchPaths.push_back("studioui/LoginView");
	searchPaths.push_back("studioui/SelectHeroView");
	searchPaths.push_back("studioui/GameLand");
	searchPaths.push_back("studioui/animation");
	pFileUtils->setSearchPaths(searchPaths);

	Director* pDirector = Director::getInstance();
	pDirector->setNotificationNode(TopLevelView::point());
	pDirector->runWithScene(RootSceneView::point());
	pApp->Event_AppInitOveredShowingBefore += ROUTEDEVENT_HANDLE_SCHEDULE(engine::AppDelegate*, this, ViewModelManager::onAppInitOveredShowingBefore);
	pApp->Event_AppInitOveredShowingAfter += ROUTEDEVENT_HANDLE_SCHEDULE(engine::AppDelegate*, this, ViewModelManager::onAppInitOveredShowingAfter);

	mLastUpdate = new struct timeval;
}

void ViewModelManager::initModels()
{
	LoginModel* pLoginModel = this->addModel<LoginModel>();
	if(NULL != pLoginModel)
	{
		pLoginModel->Event_PropertyChanged += ROUTEDEVENT_HANDLE_SCHEDULE_PARAM(mvvm::INotifyPropertyChanged*, 
			mvvm::NotifyPropertyChangedRoutedEventArgs*, LoginViewModel::point(), LoginViewModel::onLoginModelPropertyChanged);
		pLoginModel->Event_ModelDestory += ROUTEDEVENT_HANDLE_SCHEDULE(mvvm::IModel*, this, ViewModelManager::onEnabledModelDestory);
		if(pLoginModel->Enabled)
		{
			mEnabledModelList.push_back(pLoginModel);
		}
	}

	SelectHeroModel* pSelectHeroModel = this->addModel<SelectHeroModel>();
	if(NULL != pSelectHeroModel)
	{
		pSelectHeroModel->Event_PropertyChanged += ROUTEDEVENT_HANDLE_SCHEDULE_PARAM(mvvm::INotifyPropertyChanged*, 
			mvvm::NotifyPropertyChangedRoutedEventArgs*, SelectHeroViewModel::point(), SelectHeroViewModel::onSelectHeroModelPropertyChanged);
		pSelectHeroModel->Event_ModelDestory += ROUTEDEVENT_HANDLE_SCHEDULE(mvvm::IModel*, this, ViewModelManager::onEnabledModelDestory);
		if(pSelectHeroModel->Enabled)
		{
			mEnabledModelList.push_back(pSelectHeroModel);
		}
	}

	GameLandModel* pGameLandModel = this->addModel<GameLandModel>();
	if(NULL != pGameLandModel)
	{
		pGameLandModel->Event_PropertyChanged += ROUTEDEVENT_HANDLE_SCHEDULE_PARAM(mvvm::INotifyPropertyChanged*, 
			mvvm::NotifyPropertyChangedRoutedEventArgs*, GameLandViewModel::point(), GameLandViewModel::onGameLandModelPropertyChanged);
		pGameLandModel->Event_ModelDestory += ROUTEDEVENT_HANDLE_SCHEDULE(mvvm::IModel*, this, ViewModelManager::onEnabledModelDestory);
		if(pGameLandModel->Enabled)
		{
			mEnabledModelList.push_back(pGameLandModel);
		}
	}
}

void ViewModelManager::selectModel(ModelType type)
{
	for(ModelListV::iterator it = mModelList.begin();
		it != mModelList.end(); ++ it)
	{
		mvvm::IModel* pModle = *it;
		if(pModle->getRTTIType() == (uint16)type)
		{
			pModle->Enabled = true;
			ModelListV::iterator it = std::find(mEnabledModelList.begin(), mEnabledModelList.end(), pModle);
			if(mEnabledModelList.end() == it)
				mEnabledModelList.push_back(pModle);
		}
		else
		{
			pModle->Enabled = false;
			ModelListV::iterator it = std::find(mEnabledModelList.begin(), mEnabledModelList.end(), pModle);
			if(mEnabledModelList.end() != it)
				mEnabledModelList.erase(it);
		}
	}
}

bool ViewModelManager::playStruggle(const char* data, uint32 length, bool isLive)
{
	GameLandModel* pGameLandModel = NULL;
	for(ModelListV::const_iterator it = mEnabledModelList.begin();
		it != mEnabledModelList.end(); ++ it)
	{
		mvvm::IModel* pModle = *it;
		if(pModle->getRTTIType() == (uint16)ModelType::GameLand)
		{
			pGameLandModel = dynamic_cast<GameLandModel*>(pModle);
			break;
		}
	}
	if(NULL == pGameLandModel)
		return false;
	return callLuaFuncWithBoolResult("LUAPlayStruggleRecord", pGameLandModel, data, length, isLive);
}

void ViewModelManager::onEnabledModelDestory(mvvm::IModel* sender, unity::RoutedEventArgs* args)
{
	ModelListV::iterator it = std::find(mEnabledModelList.begin(), mEnabledModelList.end(), sender);
	if(mEnabledModelList.end() != it)
		mEnabledModelList.erase(it);
}

bool ViewModelManager::calculateDeltaTime() 
{	
    struct timeval now;
    if (gettimeofday(&now, NULL) != 0)
    {
        CCLOG("error in gettimeofday");
        mDeltaTime = 0;
        return false;
    }
    // new delta time. Re-fixed issue #1277
    if (mNextDeltaTimeZero)
    {
        mDeltaTime = 0;
        mNextDeltaTimeZero = false;
    }
    else
    {
        mDeltaTime = (now.tv_sec - mLastUpdate->tv_sec) + (now.tv_usec - mLastUpdate->tv_usec) / 1000000.0f;
        mDeltaTime = MAX(0, mDeltaTime);
    }
#ifdef DEBUG
    // If we are debugging our code, prevent big delta time
    if(mDeltaTime > 0.2f)
    {
        mDeltaTime = 1 / 60.0f;
    }
#endif
    *mLastUpdate = now;

	return true;
}
void ViewModelManager::modelLoop(float dt)
{
	if(!this->calculateDeltaTime())
		return;

	for(ModelListV::iterator it = mEnabledModelList.begin();
		it != mEnabledModelList.end(); ++ it)
	{
		(*it)->update(mDeltaTime);
	}
}

void ViewModelManager::onAppInitOveredShowingBefore(engine::AppDelegate* pApp, unity::RoutedEventArgs* args)
{
	this->initModels();
}
void ViewModelManager::onAppInitOveredShowingAfter(engine::AppDelegate* pApp, unity::RoutedEventArgs* args)
{

}

void ViewModelManager::reloadLuaScript(const char* luaFile)
{
	std::string path;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	path = FileUtils::getInstance()->fullPathForFilename(luaFile);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	path = FileUtils::getInstance()->fullPathForFilename(luaFile);
#endif
	LuaEngine::getInstance()->executeScriptFile(path.c_str());
}