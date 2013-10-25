#pragma once

#include "unity/singleton.h"
#include "mvvm/viewmodel.h"

using namespace framework;

class LoginView;
class LoginViewModel : public mvvm::IViewModel, public unity::SingletonAutoT<LoginViewModel>
{
public:
	LoginViewModel();
	~LoginViewModel();

	void onLoginModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args);

private:
	LoginView* mLoginView;
};