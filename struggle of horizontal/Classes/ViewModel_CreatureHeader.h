#pragma once

#include <map>
#include "unity/singleton.h"
#include "mvvm/viewmodel.h"

namespace framework
{
	namespace mvvm
	{
		class IModel;
	}
}
using namespace framework;

class CreatureHeaderView;
class CreatureHeaderModel;
class ICreatue;
class CreatureHeaderViewModel : public mvvm::IViewModel, public unity::SingletonAutoT<CreatureHeaderViewModel>
{
public:
	CreatureHeaderViewModel();
	~CreatureHeaderViewModel();

	CreatureHeaderModel* addCreatureHeader(ICreatue* pCreature);
	void removeCreatureHeader(ICreatue* pCreature);
	void onModelDestory(mvvm::IModel* sender, unity::RoutedEventArgs* args);
	void onCreatureHeaderModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args);

private:
	typedef std::map<CreatureHeaderModel*, CreatureHeaderView*> CreatureHeaderList;
	CreatureHeaderList mCreatureHeaderList;
};