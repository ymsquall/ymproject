#pragma once
#include "unity/object.h"
#include "unity/singleton.h"
#include "application/AppDelegate.h"

using namespace framework;

namespace framework
{
	namespace unity
	{
		class RoutedEventArgs;
	}
}
class ModelManager : public unity::object
					,public unity::SingletonAutoT<ModelManager>
{
public:
	ModelManager(void);
	~ModelManager(void);

	void initWithAppStart(engine::AppDelegate* pApp);
	bool modelLoop();
	void onAppInitOveredShowingBefore(engine::AppDelegate* pApp, unity::RoutedEventArgs* args);
	void onAppInitOveredShowingAfter(engine::AppDelegate* pApp, unity::RoutedEventArgs* args);
};

