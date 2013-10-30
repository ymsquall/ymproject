#pragma once

#include "unity/singleton.h"
#include "mvvm/viewmodel.h"

using namespace framework;

class GameLandView;
class GameLandViewModel : public mvvm::IViewModel, public unity::SingletonAutoT<GameLandViewModel>
{
public:
	GameLandViewModel();
	~GameLandViewModel();

	void onGameLandModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args);

private:
	GameLandView* mLandView;
};