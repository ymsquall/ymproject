#include "ViewModel_SelectHero.h"
#include "ModelTypeDefine.h"
#include "RootSceneView.h"
#include "Model_SelectHero.h"
#include "View_SelectHero.h"

SelectHeroViewModel::SelectHeroViewModel()
{
	mHeroView = NULL;
}

SelectHeroViewModel::~SelectHeroViewModel()
{
}

void SelectHeroViewModel::onSelectHeroModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args)
{
	if(ModelPropertyChangedName_Enabled == args->PropertyName)
	{
		RootSceneView* pRootView = RootSceneView::point();
		SelectHeroModel* pModel = dynamic_cast<SelectHeroModel*>(sender);
		if(pModel->Enabled)
		{
			if(NULL == mHeroView)
			{
				mHeroView = SelectHeroView::createView();
				pRootView->addChild(mHeroView);
			}
		}
		else
		{
			if(NULL != mHeroView)
			{
				pRootView->removeChild(mHeroView, true);
				mHeroView = NULL;
			}
		}
	}
}
