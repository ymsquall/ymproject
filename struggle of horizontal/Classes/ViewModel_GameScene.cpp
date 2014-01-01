#include "ViewModel_GameScene.h"
#include "ModelTypeDefine.h"
#include "RootSceneView.h"
#include "View_GameScene.h"
#include "Model_GameScene.h"
#include "unity/datablock.h"
#include "luaext/LuaHelper.h"
#include "Physics_GameScene.h"
#include "LocalPlayer.h"

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
				pRootView->addChild(mSceneView);
				LocalPlayer* pLocalUser = LocalPlayer::create(GameScenePhysics::point()->mWorld);
				GameScenePhysics::point()->setLocalPlayerPhysics(pLocalUser);
				cocostudio::Armature* pAnimView = dynamic_cast<Armature*>(mSceneView->getTiledMap()->getChildByTag(101));
				LocalPlayer::instance()->setAnimView(pAnimView);
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

TMXTiledMap* GameSceneViewModel::getTiledMap()
{
	if(NULL == mSceneView)
		return NULL;
	return mSceneView->getTiledMap();
}