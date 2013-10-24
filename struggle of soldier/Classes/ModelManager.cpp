#include "ModelManager.h"
#include "TopLevelView.h"
#include "mvvm/framework.h"
#include "cocos2d.h"
#include "RootSceneView.h"
// Model Impl
#include "Model_Login.h"
#include "Model_GameLand.h"

USING_NS_CC;

ModelManager::ModelManager(void)
{
	mModelFactory = new mvvm::ModelFactoryWithString();
	mLastUpdate = NULL;
	mDeltaTime = 0.0f;
	mNextDeltaTimeZero = false;
}

ModelManager::~ModelManager(void)
{
	if(NULL != mLastUpdate)
		delete mLastUpdate;
}

void ModelManager::initWithAppStart(engine::AppDelegate* pApp)
{
	Director* pDirector = Director::getInstance();
	pDirector->setNotificationNode(TopLevelView::point());
	pDirector->runWithScene(RootSceneView::point());
	pApp->Event_AppInitOveredShowingBefore += ROUTEDEVENT_MAKER(engine::AppDelegate*, this, ModelManager::onAppInitOveredShowingBefore);
	pApp->Event_AppInitOveredShowingAfter += ROUTEDEVENT_MAKER(engine::AppDelegate*, this, ModelManager::onAppInitOveredShowingAfter);

	mLastUpdate = new struct timeval;

	this->initModels();
}

void ModelManager::initModels()
{
	LoginModel* pLoginModel = this->addModel<LoginModel>();
	if(pLoginModel && pLoginModel->Enabled)
	{
		pLoginModel->Event_ModelDestory += ROUTEDEVENT_MAKER(mvvm::IModel*, this, ModelManager::onEnabledModelDestory);
		pLoginModel->Event_PropertyChanged += ROUTEDEVENT_MAKER_PARAM(mvvm::INotifyPropertyChanged*, 
			mvvm::NotifyPropertyChangedRoutedEventArgs*, this, ModelManager::onModelPropertyChanged);
		mEnabledModelList.push_back(pLoginModel);
	}

	GameLandModel* pGameLandModel = this->addModel<GameLandModel>();
	if(pGameLandModel && pGameLandModel->Enabled)
	{
		pGameLandModel->Event_ModelDestory += ROUTEDEVENT_MAKER(mvvm::IModel*, this, ModelManager::onEnabledModelDestory);
		pGameLandModel->Event_PropertyChanged += ROUTEDEVENT_MAKER_PARAM(mvvm::INotifyPropertyChanged*, 
			mvvm::NotifyPropertyChangedRoutedEventArgs*, this, ModelManager::onModelPropertyChanged);
		mEnabledModelList.push_back(pGameLandModel);
	}
}

void ModelManager::onEnabledModelDestory(mvvm::IModel* sender, unity::RoutedEventArgs* args)
{
	ModelListV::iterator it = std::find(mEnabledModelList.begin(), mEnabledModelList.end(), sender);
	if(mEnabledModelList.end() != it)
		mEnabledModelList.erase(it);
}

void ModelManager::onModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args)
{
	if(ModelPropertyChangedName_Enabled == args->PropertyName)
	{
		mvvm::IModel* pModel = dynamic_cast<mvvm::IModel*>(sender);
		if(NULL != pModel)
		{

		}
	}
}

bool ModelManager::calculateDeltaTime() 
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
bool ModelManager::modelLoop()
{
	if(!this->calculateDeltaTime())
		return false;

	for(ModelListV::iterator it = mEnabledModelList.begin();
		it != mEnabledModelList.end(); ++ it)
	{
		(*it)->update(mDeltaTime);
	}

	return true;
}

void ModelManager::onAppInitOveredShowingBefore(engine::AppDelegate* pApp, unity::RoutedEventArgs* args)
{

}
void ModelManager::onAppInitOveredShowingAfter(engine::AppDelegate* pApp, unity::RoutedEventArgs* args)
{

}