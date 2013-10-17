#pragma once
#include "object.h"

namespace unity
{
	//template<class ConT>
	//class IPropertyContainer
	//{
	//public:
	//	typedef ValueT (ConT::*GetterFunc)();
	//};
	//template<class ValueT, class ConT> typedef ValueT (ConT::*GetterFunc)();
	
//#define DEFINED_PROPERTY_READ_ONLY(name, type, getter) public: ReadOnlyProperty<type> m#name; \
//											   public: \
//											   \
//											   \
//#define WRITE_ONLY 2
//#define READ_WRITE 3
//	template<class ValueT, typename IPropertyContainer* container, typename char* name>
//	class PropertyTemplaye
//	{
//	public:
//		PropertyTemplaye(ValueT v)
//		{
//			mContainer = container;
//			mValue = v;
//			mName = name;
//		}
//		
//	protected:
//		IPropertyContainer* mContainer;
//		ValueT mValue;
//		std::string mName;
//	};


	template<class ValueT, class ConT>
	class IProperty
	{
	protected:
		typedef ValueT (ConT::*GetterFunc)();
		typedef void (ConT::*SetterFunc)(const ValueT& v);
	};

	template<class ValueT, class ConT, typename IProperty<ValueT, ConT>::SetterFunc setter>
	class Property : public IProperty<ValueT, ConT>
	{
	public:
		typedef IProperty<ValueT, ConT> SuperT;
		typedef Property<ValueT, ConT, setter> ThisT;

		Property(ConT* container)
		{
			mContainer = container;
			mSetter = setter;
		}
		operator ValueT() const
		{
			return mValue;
		}

		void operator = (const ValueT& value)
		{
			(mContainer->*mSetter)(value);
			mValue = value;
		}

	private:
		ConT* mContainer;
		SuperT::SetterFunc mSetter;
		ValueT mValue;
	};

	template<class ValueT, class ConT>
	class PropertyReadOnly : public IProperty<ValueT, ConT>
	{
	public:
		friend typename ConT;
		typedef IProperty<ValueT, ConT> SuperT;
		typedef PropertyReadOnly<ValueT, ConT> ThisT;

		operator ValueT() const
		{
			return mValue;
		}
		
	private:
		ValueT mValue;
	};

	template<class ValueT, class ConT, typename IProperty<ValueT, ConT>::SetterFunc setter>
	class PropertyWriteOnly : public IProperty<ValueT, ConT>
	{
	public:
		typedef IProperty<ValueT, ConT> SuperT;
		typedef PropertyWriteOnly<ValueT, ConT, setter> ThisT;

		PropertyWriteOnly(ConT* container)
		{
			mContainer = container;
			mSetter = setter;
		}
		void operator = (const ValueT& value)
		{
			(mContainer->*mSetter)(value);
			mValue = value;
		}

	private:
		ConT* mContainer;
		SuperT::SetterFunc mSetter;
		ValueT mValue;
	};
}