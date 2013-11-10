#include "ViewModel_GameLand.h"
#include "ModelTypeDefine.h"
#include "RootSceneView.h"
#include "View_GameLand.h"
#include "Model_GameLand.h"
#include "unity/datablock.h"

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
			pModel->loadLandData("hlg");

			uint32 actNum = 0;
			unity::blockwrite block;
			block.seek(sizeof(uint32));
			block.write((uint8)LiveActionType::change);	actNum ++;
			block.write((uint8)1);
			block.write((uint8)LiveActionType::select);	actNum ++;
			block.write((uint8)1);
			block.write((uint8)LiveActionType::moveto);	actNum ++;
			block.write((uint8)4);	// 移动格数
			block.write((uint8)GridOrientation::rightbottom);
			block.write((uint8)GridOrientation::righttop);
			block.write((uint8)GridOrientation::rightbottom);
			block.write((uint8)GridOrientation::righttop);
			block.write((uint8)LiveActionType::attack);	actNum ++;
			block.write((uint8)1);	// 攻击次数
			block.write((uint16)135);
			block.write((uint8)LiveActionType::skill);	actNum ++;
			block.write((uint8)1);	// 攻击次数
			block.write((uint16)1);	// 技能ID
			block.write((uint16)135);
			block.reseek();
			block.write(actNum);
			pModel->playAction(block.buffer(), block.length());
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
			mLandView->doSelectGrid(dynamic_cast<const LandTreeGrid*>(pModel->getSoldierByTroopAndNumber()));
		}
	}
}
