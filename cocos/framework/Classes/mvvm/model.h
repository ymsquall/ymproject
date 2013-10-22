#pragma once
#include "interface.h"
#include "unity/platform.h"

namespace framework
{
	namespace mvvm
	{
		template<typename uint16 typeValue, typename size_t rttiLength>
		class IModel : public INotifyPropertyChanged
						, public MAKER_ENUM2BTRTTI_TYPE(typeValue)
						, public MAKER_ASCIIFIXEDRTTI_TYPE(rttiLength)
						, public unity::object
		{
		public:
			IModel(){}
			IModel(const char* ascType) : IAsciiFixedRTTI<rttiLength>(ascType){}
			virtual ~IModel(){}
		};
	}	// namespace mvvm
}	// namespace framework