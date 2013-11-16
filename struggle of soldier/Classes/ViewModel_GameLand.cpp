#include "ViewModel_GameLand.h"
#include "ModelTypeDefine.h"
#include "RootSceneView.h"
#include "View_GameLand.h"
#include "Model_GameLand.h"
#include "unity/datablock.h"
#include "luaext/LuaHelper.h"

GameLandViewModel::GameLandViewModel()
{
	mLandView = NULL;
}

GameLandViewModel::~GameLandViewModel()
{
}

void GameLandViewModel::onGameLandModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args)
{
	GameLandModel* pModel = dynamic_cast<GameLandModel*>(sender);
	if(ModelPropertyChangedName_Enabled == args->PropertyName)
	{
		RootSceneView* pRootView = RootSceneView::point();
		if(pModel->Enabled)
		{
			if(NULL == mLandView)
			{
				mLandView = GameLandView::createView();
				mLandView->setBindingSource(pModel);
				pRootView->addChild(mLandView);
			}
			callLuaFuncNoResult("LUAGameLandLoadDataWithMapName", pModel, "hlg");
			//pModel->loadLandData("hlg");
			callLuaFuncNoResult("LUATestStartPlayStruggleRecord");
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
	/*
	else if("IsLive" == args->PropertyName)
	{
		if(NULL != mLandView)
		{
			mLandView->doLiveChanged(pModel->IsLive);
		}
	}
	else if("ActiveTroopID" == args->PropertyName)
	{
		if(NULL != mLandView)
		{
			mLandView->doTroopChanged(pModel->getTroopName());
		}
	}
	else if("ActiveSoldierID" == args->PropertyName)
	{
		if(NULL != mLandView)
		{
			//mLandView->doSelectGrid(dynamic_cast<const LandTreeGrid*>(pModel->getSoldierByTroopAndNumber()));
		}
	}
	*/
}
