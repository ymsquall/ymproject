#pragma once
#include "object.h"

namespace unity
{

	class PropertyContainer
	{
	};
	
#define READ_ONLY 1
#define WRITE_ONLY 2
#define READ_WRITE 3
	template<class ValueT, typename PropertyContainer* container, typename char* name>
	class PropertyTemplaye
	{
	public:
		PropertyTemplaye(ValueT v)
		{
			mContainer = container;
			mValue = v;
			mName = name;
		}
		
	protected:
		PropertyContainer* mContainer;
		ValueT mValue;
		std::string mName;
	};

	template<class ValueT>
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
		PropertyContainer* mContainer;
		ValueT mValue;
	};

	template<class ValueT>
	class ReadOnlyProperty
	{
	public:
		operator ValueT()
		{
			return mTValue;
		}
	private:
		PropertyContainer* mContainer;
		ValueT mValue;
	};

	template<class ValueT>
	class WriteOnlyProperty 
	{
	public:
		void operator = (const ValueT& value) const
		{
			mTValue = value;
		}

	private:
		PropertyContainer* mContainer;
		ValueT mValue;
	};
}