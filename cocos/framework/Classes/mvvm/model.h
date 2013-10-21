#pragma once
#include "interface.h"

namespace framework
{
	namespace mvvm
	{
		template<typename int16 typeValue>
		class IModel : public INotifyPropertyChanged, public unity::object
						, public IEnumRTTI<int16, typeValue>
						, public IStrRTTI
		{
		public:
			IModel(){}
			virtual ~IModel(){}
		};
	}	// namespace mvvm
}	// namespace framework