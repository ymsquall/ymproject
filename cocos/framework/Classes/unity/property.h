#pragma once
#include "object.h"

namespace framework
{
	namespace unity
	{
	#pragma region ���Ի���ģ����
		template<class ValueT, class ConT>
		class IProperty
		{
		protected:
			typedef const ValueT& (ConT::*GetterFunc)() const;
			typedef void (ConT::*SetterFunc)(const ValueT& v);
		};
	#pragma endregion

#pragma region �ɶ���д����ͨ����
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

	#pragma region �ɶ���д����,���ڸ�ֵʱ�ص�setter
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

			void operator = (const ValueT& value)
			{
				(mContainer->*mSetter)(value);
				mValue = value;
			}

		private:
			ConT* mContainer;
			typename SuperT::SetterFunc mSetter;
			ValueT mValue;
		};
	#pragma endregion
	
	#pragma region ֻ�����ԣ�ֻ��ͨ�����������Ա�������踺ֵ����������
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
			PropertyReadOnly(ConT* container)
			{
				mContainer = container;
				//mSetter = setter;
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
	
	#pragma region ֻд���ԣ����Ʊ�ֻ�����Ը�û�ã�
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
				(mContainer->*mSetter)(value);
				mValue = value;
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

#pragma region ����������ֵ,ֻ�ص�setter��getter
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

#define PROPERTY_DEFINED_SETTER(name, type, container, setter) public: framework::unity::PropertyCallbackSetter<type, container, &container::setter> name;
#define PROPERTY_READONLY_DEFINED(name, type, container/*, setter*/) public: framework::unity::PropertyReadOnly<type, container/*, &container::setter*/> name;
#define PROPERTY_WRITEONLY_DEFINED(name, type, container, setter) public: framework::unity::PropertyWriteOnly<type, container, &container::setter> name;
#define PROPERTY_DEFINED_NOVALUE(name, type, container, setter, getter) public: framework::unity::PropertyNoValue<type, container, &container::setter, &container::getter> name;

#pragma region Ϊ�˽�һЩ�ֳɵ��鷽������Ϊ���ԣ�Ŀǰֻ�������ִ췽��
#define PROPERTY_DEFINED_NOVALUE_VIRTUAL(name, type, container, setter, getter) \
	protected: void setter##_novirtual(const type& v){ setter(v); } \
					const type& getter##_novirtual() const { return getter(); } \
	public: framework::unity::PropertyNoValue<type, container, &container::setter##_novirtual, &container::getter##_novirtual> name;
#pragma endregion