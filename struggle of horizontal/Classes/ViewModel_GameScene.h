#pragma once

#include "unity/singleton.h"
#include "mvvm/viewmodel.h"

using namespace framework;

class GameSceneView;
class GameSceneViewModel : public mvvm::IViewModel, public unity::SingletonAutoT<GameSceneViewModel>
{
public:
	GameSceneViewModel();
	~GameSceneViewModel();

	void onGameSceneModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args);

private:
	GameSceneView* mSceneView;
};