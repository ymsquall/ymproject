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
class ICreature;
class CreatureHeaderViewModel : public mvvm::IViewModel, public unity::SingletonAutoT<CreatureHeaderViewModel>
{
public:
	CreatureHeaderViewModel();
	~CreatureHeaderViewModel();

	CreatureHeaderModel* addCreatureHeader(ICreature* pCreature);
	void removeCreatureHeader(ICreature* pCreature);
	void onModelDestory(mvvm::IModel* sender, unity::RoutedEventArgs* args);
	void onCreatureHeaderModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args);

private:
	typedef std::map<CreatureHeaderModel*, CreatureHeaderView*> CreatureHeaderList;
	CreatureHeaderList mCreatureHeaderList;
};