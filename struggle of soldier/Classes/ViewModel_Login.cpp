#include "ViewModel_Login.h"
#include "ModelTypeDefine.h"
#include "RootSceneView.h"
#include "Model_Login.h"
#include "View_Login.h"

LoginViewModel::LoginViewModel()
{
	mLoginView = NULL;
}

LoginViewModel::~LoginViewModel()
{
}

void LoginViewModel::onLoginModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args)
{
	if(ModelPropertyChangedName_Enabled == args->PropertyName)
	{
		RootSceneView* pRootView = RootSceneView::point();
		LoginModel* pModel = dynamic_cast<LoginModel*>(sender);
		if(pModel->Enabled)
		{
			if(NULL == mLoginView)
			{
				mLoginView = LoginView::createView();
				pRootView->addChild(mLoginView);
			}
		}
		else
		{
			if(NULL != mLoginView)
			{
				pRootView->removeChild(mLoginView, true);
				mLoginView = NULL;
			}
		}
	}
}
