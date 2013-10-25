#include "ViewModel_GameLand.h"
#include "ModelTypeDefine.h"
#include "View_GameLand.h"

GameLandViewModel::GameLandViewModel()
{
}

GameLandViewModel::~GameLandViewModel()
{
}

void GameLandViewModel::onGameLandModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args)
{
	if(ModelPropertyChangedName_Enabled == args->PropertyName)
	{
	}
}
