#pragma once
#include "unity/object.h"
#include "unity/singleton.h"
#include "application/AppDelegate.h"
#include "mvvm/model.h"
#include "ModelTypeDefine.h"

using namespace cocos2d;
using namespace framework;

namespace framework
{
	namespace unity
	{
		class RoutedEventArgs;
	}
}
class ViewModelManager : public unity::object
					, public mvvm::IModelManager
					, public unity::SingletonAutoT<ViewModelManager>
{
public:
	static void reloadLuaScript(const char* luaFile);
	ViewModelManager(void);
	~ViewModelManager(void);

	void initWithAppStart(engine::AppDelegate* pApp);
	void modelLoop(float dt);
	void onAppInitOveredShowingBefore(engine::AppDelegate* pApp, unity::RoutedEventArgs* args);
	void onAppInitOveredShowingAfter(engine::AppDelegate* pApp, unity::RoutedEventArgs* args);

	void selectModel(ModelType type);

private:
	void initModels();

	bool calculateDeltaTime();

private:
	void onEnabledModelDestory(mvvm::IModel* sender, unity::RoutedEventArgs* args);

private:
	// timer
	struct timeval* mLastUpdate;
	float mDeltaTime;
	bool mNextDeltaTimeZero;

	ModelListV mEnabledModelList;
	unity::FactoryWithString mViewFactory;
};
