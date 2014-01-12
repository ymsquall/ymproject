#include "ViewModel_GameScene.h"
#include "ModelTypeDefine.h"
#include "RootSceneView.h"
#include "View_GameScene.h"
#include "Model_GameScene.h"
#include "unity/datablock.h"
#include "luaext/LuaHelper.h"
#include "Physics_GameScene.h"
#include "LocalPlayer.h"
#include "ICreature.h"
#include "Monster.h"

GameSceneViewModel::GameSceneViewModel()
{
	mSceneView = NULL;
}

GameSceneViewModel::~GameSceneViewModel()
{
}

void GameSceneViewModel::onGameSceneModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args)
{
	GameSceneModel* pModel = dynamic_cast<GameSceneModel*>(sender);
	if(ModelPropertyChangedName_Enabled == args->PropertyName)
	{
		RootSceneView* pRootView = RootSceneView::point();
		if(pModel->Enabled)
		{
			if(NULL == mSceneView)
			{
				mSceneView = GameSceneView::createView();
				mSceneView->setBindingSource(pModel);
				GameScenePhysics::point()->setLocalPlayerPhysics(LocalPlayer::instance());
				pRootView->addChild(mSceneView);
			}
		}
		else
		{
			if(NULL != mSceneView)
			{
				pRootView->removeChild(mSceneView, true);
				mSceneView = NULL;
			}
		}
	}
}

void GameSceneViewModel::setSceneView(GameSceneView* pView)
{
	mSceneView = pView;
}
GameSceneView* GameSceneViewModel::getSceneView()
{
	return mSceneView;
}
TMXTiledMap* GameSceneViewModel::getTiledMap()
{
	if(NULL == mSceneView)
		return NULL;
	return mSceneView->getTiledMap();
}
cocostudio::Armature* GameSceneViewModel::getLocalPlayerAnimView()
{
	TMXTiledMap* pMap = this->getTiledMap();
	if(NULL != pMap)
	{
		return dynamic_cast<cocostudio::Armature*>(pMap->getChildByTag(101));
	}
	return NULL;
}

Monster* GameSceneViewModel::createMonster(b2World* pWorld, const Point& pos, const Size& size)
{
	Monster* pMonster = ICreatue::createWithBox<Monster>(pWorld, pos, size);
	if(NULL != pMonster)
		mMonsterList.push_back(pMonster);
	return pMonster;
}