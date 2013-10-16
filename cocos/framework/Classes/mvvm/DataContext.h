#pragma once
#include "object.h"

namespace unity
{
#define READ_ONLY 1
#define WRITE_ONLY 2
#define READ_WRITE 3

	template<class ContainerT, class ValueT, typename unsigned char AccessT = READ_WRITE>
	class Property
	{
	public:
		operator ValueT()
		{
			return mTValue;
		}

		void operator = (const ValueT& value) const
		{
			mTValue = value;
		}

	private:
		ContainerT* mContainer;
		ValueT mValue;
		unsigned char mAccessType;
	};

	class Container
	{
	public:
		typedef std::map<std::string, Property> PropertyList;
	};
}