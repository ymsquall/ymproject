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

public:

private:
	void initModels();

	bool calculateDeltaTime();

private:
	struct timeval* mLastUpdate;
	float mDeltaTime;
	bool mNextDeltaTimeZero;
};
