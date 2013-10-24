#pragma once
#include "unity/object.h"
#include "unity/singleton.h"
#include "application/AppDelegate.h"
#include "mvvm/model.h"

using namespace cocos2d;
using namespace framework;

namespace framework
{
	namespace unity
	{
		class RoutedEventArgs;
	}
}
class ModelManager : public unity::object
					, public mvvm::IModelManager
					, public unity::SingletonAutoT<ModelManager>
{
public:
	ModelManager(void);
	~ModelManager(void);

	void initWithAppStart(engine::AppDelegate* pApp);
	bool modelLoop();
	void onAppInitOveredShowingBefore(engine::AppDelegate* pApp, unity::RoutedEventArgs* args);
	void onAppInitOveredShowingAfter(engine::AppDelegate* pApp, unity::RoutedEventArgs* args);

private:
	void initModels();

	bool calculateDeltaTime();

private:
	void onEnabledModelDestory(mvvm::IModel* sender, unity::RoutedEventArgs* args);
	void onModelPropertyChanged(mvvm::INotifyPropertyChanged*, mvvm::NotifyPropertyChangedRoutedEventArgs* args);

private:
	// timer
	struct timeval* mLastUpdate;
	float mDeltaTime;
	bool mNextDeltaTimeZero;

	ModelListV mEnabledModelList;
};
