#pragma once
#include <string>
#include "platform.h"

#pragma pack(push,1)
namespace framework
{
	namespace unity
	{
		template<class EnumT, typename EnumT value>
		class IEnumRTTI
		{
		public:
			IEnumRTTI()
			{
				mEnumType = value;
			}
			virtual ~IEnumRTTI(){}

			virtual EnumT eType() const{ return mEnumType; }

		private:
			EnumT mEnumType;
		};
		/*
		使用字符串做为无类型模板参数时要注意以下几点:
		1、 template<class T, const char value[]>，中不要使用const char* 等类型。
		2、在将模板类实例化时，定义的参数要使用extern 声明。extern const char externValue[];
		3、如果该类是写在“.h”文件里的，不要直接extern const char externValue[] = "value";
			而是在头文件里只声明，在CPP中写上实现，const char externValue[] = "value";
		总而言之，使用字符串做模板参数的限制太大，很难写，抛弃该想法
		转而使用固定长度模板参数以节省下使用char*的4字节开销
		*/
		class IAsciiRTTI
		{
		public:
			IAsciiRTTI(const char* type)
			{
				size_t length = strlen(type);
				mStrType = new char[length+1];
				memcpy(mStrType, type, length * sizeof(char));
				mStrType[length] = '\0';
			}
			virtual ~IAsciiRTTI()
			{
				delete []mStrType;
			}
			virtual const char* sType() const{ return mStrType; }

		private:
			char* mStrType;
		};
		// 最省内存的字符串动态类型
		template<typename const size_t length>
		class IAsciiFixedRTTI
		{
		public:
			IAsciiFixedRTTI(const char* type)
			{
				memcpy(mStrType, type, length * sizeof(char));
				mStrType[length] = '\0';
			}
			virtual ~IAsciiFixedRTTI(){}
			virtual const char* sType() const{ return mStrType; }

		private:
			char mStrType[length+1];
		};
	}	// namespace unity
}	// namespace framework

#define MAKER_ENUM1BTRTTI_TYPE(type) framework::unity::IEnumRTTI<uint8, type>
#define MAKER_ENUM2BTRTTI_TYPE(type) framework::unity::IEnumRTTI<uint16, type>
#define MAKER_ENUM4BTRTTI_TYPE(type) framework::unity::IEnumRTTI<uint32, type>
#define MAKER_ASCIIFIXEDRTTI_TYPE(len) framework::unity::IAsciiFixedRTTI<len>

#pragma pack(pop)
