#pragma once
#include "unity/object.h"
#include "unity/singleton.h"
#include "application/AppDelegate.h"

namespace framework
{
	class RoutedEventArgs;
}
class ModelManager : public unity::object
					,public unity::SingletonAutoT<ModelManager>
{
public:
	ModelManager(void);
	~ModelManager(void);

	void initWithAppStart(engine::AppDelegate* pApp);

	void onAppInitOveredShowingBefore(engine::AppDelegate* pApp, framework::RoutedEventArgs* args);
	void onAppInitOveredShowingAfter(engine::AppDelegate* pApp, framework::RoutedEventArgs* args);
};

