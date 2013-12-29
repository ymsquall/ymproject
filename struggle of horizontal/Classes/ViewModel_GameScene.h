#pragma once

#include "unity/singleton.h"
#include "mvvm/viewmodel.h"
#include "cocos2d.h"

using namespace cocos2d;
using namespace framework;

class GameSceneView;
class GameSceneViewModel : public mvvm::IViewModel, public unity::SingletonAutoT<GameSceneViewModel>
{
public:
	GameSceneViewModel();
	~GameSceneViewModel();

	void onGameSceneModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args);
	TMXTiledMap* getTiledMap();

private:
	GameSceneView* mSceneView;
};