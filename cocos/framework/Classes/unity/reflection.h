#pragma once
#include "platform.h"
#include "object.h"

namespace framework
{
	namespace unity
	{
		// 这里使用c++11新特性解决枚举尺寸问题
		enum class ReflectionType : uint8
		{
			String,
			Enum
		};
		typedef object* (*__baseReflectFunc)();
		class IReflection
		{
		public:
			virtual ~IReflection(){}
			virtual ReflectionType getType() = 0;

		public:
			void registerReflect(const std::string& strType, __baseReflectFunc strFunc)
			{
				if(this->getType() == ReflectionType::String)
				{
					this->registerReflectImpl(strType, strFunc);
				}
			}
			void registerReflect(uint32 enumType, __baseReflectFunc enumFunc)
			{
				if(this->getType() == ReflectionType::Enum)
				{
					this->registerReflectImpl(enumType, enumFunc);
				}
			}

			object* reflect(const std::string& strType)
			{
				if(this->getType() == ReflectionType::String)
				{
					return this->reflectImpl(strType);
				}
				return NULL;
			}
			object* reflect(uint32 enumType)
			{
				if(this->getType() == ReflectionType::Enum)
				{
					return this->reflectImpl(enumType);
				}
				return NULL;
			}

		protected:
			virtual void registerReflectImpl(const std::string& strType, __baseReflectFunc func){}
			virtual void registerReflectImpl(uint32 enumType, __baseReflectFunc func){}

			virtual object* reflectImpl(const std::string& strType){ return NULL; }
			virtual object* reflectImpl(uint32 enumType){ return NULL; }
		};

		class ReflectionWithStr : public IReflection
		{
		public:
			typedef std::map<std::string, __baseReflectFunc> BaseReflectTable;
			virtual ReflectionType getType(){ return ReflectionType::String; }

		protected:
			virtual void registerReflectImpl(const std::string& strType, __baseReflectFunc func)
			{
				mReflectionList[strType] = func;
			}
			virtual object* reflectImpl(const std::string& strType)
			{
				BaseReflectTable::iterator it = mReflectionList.find(strType);
				if(mReflectionList.end() == it)
					return NULL;
				return it->second();
			}

		protected:
			BaseReflectTable mReflectionList;
		};

		template<typename EnumT>
		class ReflectionWithEnum : public IReflection
		{
		public:
			typedef std::map<EnumT, __baseReflectFunc> BaseReflectTable;
			virtual ReflectionType getType(){ return ReflectionType::Enum; }

		protected:
			virtual void registerReflectImpl(uint32 enumType, __baseReflectFunc func)
			{
				EnumT key = static_cast<EnumT>(enumType);
				mReflectionList[key] = func;
			}
			virtual object* reflectImpl(uint32 enumType)
			{
				EnumT key = static_cast<EnumT>(enumType);
				typename BaseReflectTable::iterator it = mReflectionList.find(key);
				if(mReflectionList.end() == it)
					return NULL;
				return it->second();
			}

		protected:
			BaseReflectTable mReflectionList;
		};
		
	}	// namespace unity
}	// namespace framework