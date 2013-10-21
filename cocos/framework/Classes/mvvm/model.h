#pragma once
#include "interface.h"

namespace framework
{
	namespace mvvm
	{
		class IModel : public INotifyPropertyChanged, public unity::object
		{

		};
	}	// namespace mvvm
}	// namespace framework