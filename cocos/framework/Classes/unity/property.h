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
			typedef ValueT (ConT::*GetterFunc)();
			typedef void (ConT::*SetterFunc)(const ValueT& v);
		};
	#pragma endregion

	#pragma region �ɶ���д����
		template<class ValueT, class ConT, typename IProperty<ValueT, ConT>::SetterFunc setter>
		class Property : public IProperty<ValueT, ConT>
		{
		public:
			friend ConT;
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
	}	// namespace unity
}	// namespace framework

#define PROPERTY_DEFINED(name, type, container, setter) public: framework::unity::Property<type, container, &container::setter> name;
#define PROPERTY_READONLY_DEFINED(name, type, container/*, setter*/) public: framework::unity::PropertyReadOnly<type, container/*, &container::setter*/> name;
#define PROPERTY_WRITEONLY_DEFINED(name, type, container, setter) public: framework::unity::PropertyWriteOnly<type, container, &container::setter> name;