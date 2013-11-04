#pragma once

#include "platform.h"
#include "reflection.h"
#include "rtti.h"

namespace framework
{
	namespace unity
	{
		typedef ReflectionType FactoryType;
		class IFactory
		{
		public:
			IFactory()
			{
				mCreator = NULL;
			}
			virtual ~IFactory()
			{
				if(NULL != mCreator)
					delete mCreator;
			}
			virtual FactoryType getType() = 0;

			void registerCreator(const std::string& strType, __baseReflectFunc strFunc)
			{
				if(mCreator->getType() == FactoryType::String)
				{
					mCreator->registerReflect(strType, strFunc);
				}
			}
			void registerCreator(uint32 enumType, __baseReflectFunc enumFunc)
			{
				if(mCreator->getType() == FactoryType::Enum)
				{
					mCreator->registerReflect(enumType, enumFunc);
				}
			}

			object* create(const std::string& strType)
			{
				if(this->getType() == FactoryType::String)
				{
					return this->createImpl(strType);
				}
				return NULL;
			}
			object* create(uint32 enumType)
			{
				if(this->getType() == FactoryType::Enum)
				{
					return this->createImpl(enumType);
				}
				return NULL;
			}

		protected:
			virtual object* createImpl(const std::string& strType){ return NULL; }
			virtual object* createImpl(uint32 enumType){ return NULL; }

		protected:
			IReflection* mCreator;
		};
		class FactoryWithString : public IFactory
		{
		public:
			FactoryWithString()
			{
				mCreator = new ReflectionWithStr();
			}
			virtual FactoryType getType(){ return FactoryType::String; }

		protected:
			virtual object* createImpl(const std::string& strType)
			{
				object* pObject = mCreator->reflect(strType);
				return pObject;
			}
		};
		template<typename EnumT>
		class FactoryWithEnum : public IFactory
		{
		public:
			typedef ReflectionWithEnum<EnumT> SuperT;
			FactoryWithEnum()
			{
				mCreator = new SuperT();
			}
			virtual FactoryType getType(){ return FactoryType::Enum; }

		protected:
			virtual object* createImpl(uint32 enumType)
			{
				EnumT et = static_cast<EnumT>(enumType);
				object* pObject = mCreator->reflect(et);
				return pObject;
			}
		};
	}	// namespace unity
}	// namespace framework