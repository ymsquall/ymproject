#include "ViewModel_GameLand.h"
#include "ModelTypeDefine.h"
#include "RootSceneView.h"
#include "View_GameLand.h"
#include "Model_GameLand.h"

GameLandViewModel::GameLandViewModel()
{
	mLandView = NULL;
}

GameLandViewModel::~GameLandViewModel()
{
}

void GameLandViewModel::onGameLandModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args)
{
	if(ModelPropertyChangedName_Enabled == args->PropertyName)
	{
		RootSceneView* pRootView = RootSceneView::point();
		GameLandModel* pModel = dynamic_cast<GameLandModel*>(sender);
		if(pModel->Enabled)
		{
			pModel->loadLandData("hlg");
			if(NULL == mLandView)
			{
				mLandView = GameLandView::createView();
				mLandView->setBindingSource(pModel);
				pRootView->addChild(mLandView);
			}
		}
		else
		{
			if(NULL != mLandView)
			{
				pRootView->removeChild(mLandView, true);
				mLandView = NULL;
			}
		}
	}
}
