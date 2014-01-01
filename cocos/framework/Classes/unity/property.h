#pragma once
#include "object.h"

namespace framework
{
	namespace unity
	{
	#pragma region 属性基础模板类
		template<class ValueT, class ConT>
		class IProperty
		{
		//protected:
        public:
			typedef const ValueT& (ConT::*GetterFunc)() const;
			typedef void (ConT::*SetterFunc)(const ValueT& v);
		};
	#pragma endregion

#pragma region 可读可写的普通属性
		template<class ValueT>
		class Property
		{
		public:
			virtual ~Property(){}
			operator ValueT() const
			{
				return mValue;
			}

			void operator = (const ValueT& value)
			{
				mValue = value;
			}

		protected:
			ValueT mValue;
		};
#pragma endregion

	#pragma region 可读可写属性,并在赋值时回调setter
		template<class ValueT, class ConT, typename IProperty<ValueT, ConT>::SetterFunc setter>
		class PropertyCallbackSetter : public IProperty<ValueT, ConT>
		{
		public:
			friend ConT;
			typedef IProperty<ValueT, ConT> SuperT;
			typedef PropertyCallbackSetter<ValueT, ConT, setter> ThisT;

			PropertyCallbackSetter(ConT* container)
			{
				mContainer = container;
				mSetter = setter;
			}
			virtual ~PropertyCallbackSetter(){}
			operator ValueT() const
			{
				return mValue;
			}
			ThisT& operator -= ( const ValueT& oth )
			{
				ValueT oldValue = mValue;
				mValue -= oth;
				if(oldValue != mValue)
					(mContainer->*mSetter)(mValue);
				return *this;
			}
			ThisT& operator += ( const ValueT& oth )
			{
				ValueT oldValue = mValue;
				mValue += oth;
				if(oldValue != mValue)
					(mContainer->*mSetter)(mValue);
				return *this;
			}
			ThisT& operator *= ( const ValueT& oth )
			{
				ValueT oldValue = mValue;
				mValue *= oth;
				if(oldValue != mValue)
					(mContainer->*mSetter)(mValue);
				return *this;
			}
			ThisT& operator /= ( const ValueT& oth )
			{
				ValueT oldValue = mValue;
				mValue /= oth;
				if(oldValue != mValue)
					(mContainer->*mSetter)(mValue);
				return *this;
			}
			void operator = (const ValueT& value)
			{
				ValueT oldValue = mValue;
				mValue = value;
				if(oldValue != mValue)
					(mContainer->*mSetter)(mValue);
			}

		private:
			ConT* mContainer;
			typename SuperT::SetterFunc mSetter;
			ValueT mValue;
		};
	#pragma endregion
	
	#pragma region 只读属性，只能通过容器对象成员函数给予负值，真有用吗？
		template<class ValueT, class ConT/*, typename IProperty<ValueT, ConT>::SetterFunc setter*/>
		class PropertyReadOnly : public IProperty<ValueT, ConT>
		{
		public:
			friend ConT;
			typedef IProperty<ValueT, ConT> SuperT;
			typedef PropertyReadOnly<ValueT, ConT/*, setter*/> ThisT;
		
			PropertyReadOnly()
			{
				mContainer = NULL;
			}
			PropertyReadOnly(ConT* container, const ValueT& v)
			{
				mContainer = container;
				mValue = v;
			}
			virtual ~PropertyReadOnly(){}
			operator ValueT() const
			{
				return mValue;
			}

		private:
			void operator = (const ValueT& value)
			{
				//(mContainer->*mSetter)(value);
				mValue = value;
			}

		private:
			ConT* mContainer;
			//typename SuperT::SetterFunc mSetter;
			ValueT mValue;
		};
	#pragma endregion
	
	#pragma region 只写属性，估计比只读属性更没用！
		template<class ValueT, class ConT, typename IProperty<ValueT, ConT>::SetterFunc setter>
		class PropertyWriteOnly : public IProperty<ValueT, ConT>
		{
		public:
			friend ConT;
			typedef IProperty<ValueT, ConT> SuperT;
			typedef PropertyWriteOnly<ValueT, ConT, setter> ThisT;

			PropertyWriteOnly(ConT* container)
			{
				mContainer = container;
				mSetter = setter;
			}
			virtual ~PropertyWriteOnly(){}
			void operator = (const ValueT& value)
			{
				ValueT oldValue = mValue;
				mValue = value;
				if(oldValue != mValue)
					(mContainer->*mSetter)(value);
			}
		
		private:
			operator ValueT() const
			{
				return mValue;
			}

		private:
			ConT* mContainer;
			typename SuperT::SetterFunc mSetter;
			ValueT mValue;
		};
	#pragma endregion

#pragma region 不保存属性值,只回调setter和getter
		template<class ValueT, class ConT, typename IProperty<ValueT, ConT>::SetterFunc setter, typename IProperty<ValueT, ConT>::GetterFunc getter>
		class PropertyNoValue : public IProperty<ValueT, ConT>
		{
		public:
			friend ConT;
			typedef IProperty<ValueT, ConT> SuperT;
			typedef PropertyNoValue<ValueT, ConT, setter, getter> ThisT;

			PropertyNoValue(ConT* container)
			{
				mContainer = container;
				mSetter = setter;
				mGetter = getter;
			}
			virtual ~PropertyNoValue(){}
			operator ValueT() const
			{
				return (mContainer->*mGetter)();
			}

			void operator = (const ValueT& value)
			{
				(mContainer->*mSetter)(value);
			}

		private:
			ConT* mContainer;
			typename SuperT::SetterFunc mSetter;
			typename SuperT::GetterFunc mGetter;
		};
#pragma endregion
	}	// namespace unity
}	// namespace framework

#define PROPERTY_DEFINED(name, type) public: framework::unity::Property<type> name;
#define PROPERTY_DEFINED_SETTER_DECLEAR(name, type, container, setter) public: framework::unity::PropertyCallbackSetter<type, container, &container::setter> name;
#define PROPERTY_DEFINED_SETTER_DEFINED(name, type, container) private: void set##name(const type& v){ this->RaisePropertyChanged(#name); }\
															   public: framework::unity::PropertyCallbackSetter<type, container, &container::set##name> name;	
#define PROPERTY_READONLY_DEFINED(name, type, container/*, setter*/) public: framework::unity::PropertyReadOnly<type, container/*, &container::setter*/> name;
#define PROPERTY_WRITEONLY_DEFINED(name, type, container, setter) public: framework::unity::PropertyWriteOnly<type, container, &container::setter> name;
#define PROPERTY_DEFINED_NOVALUE(name, type, container, setter, getter) public: framework::unity::PropertyNoValue<type, container, &container::setter, &container::getter> name;

#pragma region 为了将一些现成的虚方法导出为属性，目前只能用这种挫方法
#define PROPERTY_DEFINED_NOVALUE_VIRTUAL(name, type, container, super, setter, getter) \
	protected: void setter(const type& v){ super::setter(v); } \
	protected: const type& getter() const{ return super::getter(); } \
	public: framework::unity::PropertyNoValue<type, container, &container::setter, &container::getter> name;
#pragma endregion