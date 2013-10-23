#include "ModelManager.h"
#include "TopLevelView.h"
#include "mvvm/framework.h"
#include "cocos2d.h"
#include "RootSceneView.h"

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

class LoginModel : public mvvm::ModelBase<(uint16)ModelType::Login, 5>
{
public:
	LoginModel() : mvvm::ModelBase<(uint16)ModelType::Login, 5>(LoginModel::TypeName.c_str())
	{
	}

	static unity::object* TypeCreator()
	{
		return new LoginModel();
	}

	static const std::string TypeName;
};
const std::string LoginModel::TypeName = "Login";

void ModelManager::initModels()
{
	this->addModel<LoginModel>();
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

	return true;
}

void ModelManager::onAppInitOveredShowingBefore(engine::AppDelegate* pApp, unity::RoutedEventArgs* args)
{

}
void ModelManager::onAppInitOveredShowingAfter(engine::AppDelegate* pApp, unity::RoutedEventArgs* args)
{

}