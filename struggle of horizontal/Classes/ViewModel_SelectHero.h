#pragma once

#include "unity/singleton.h"
#include "mvvm/viewmodel.h"

using namespace framework;

class SelectHeroView;
class SelectHeroViewModel : public mvvm::IViewModel, public unity::SingletonAutoT<SelectHeroViewModel>
{
public:
	SelectHeroViewModel();
	~SelectHeroViewModel();

	void onSelectHeroModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args);

private:
	SelectHeroView* mHeroView;
};