#pragma once

#include "unity/singleton.h"
#include "mvvm/viewmodel.h"
#include "cocos2d.h"
#include "CocoStudio/CocoStudio.h"

using namespace cocos2d;
using namespace framework;

class GameSceneView;
class Monster;
class b2World;
class GameSceneViewModel : public mvvm::IViewModel, public unity::SingletonAutoT<GameSceneViewModel>
{
public:
	GameSceneViewModel();
	~GameSceneViewModel();

	void onGameSceneModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args);
	void setSceneView(GameSceneView* pView);
	GameSceneView* getSceneView();
	TMXTiledMap* getTiledMap();
	cocostudio::Armature* getLocalPlayerAnimView();

	typedef std::vector<Monster*> MonsterList;
	Monster* createMonster(b2World* pWorld, const Point& pos, const Size& size);

private:
	GameSceneView* mSceneView;
	MonsterList mMonsterList;
};