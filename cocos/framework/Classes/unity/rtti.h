#pragma once
#include <string>
#include "platform.h"

namespace framework
{
	namespace unity
	{
#pragma pack(push,1)
		template<class EnumT, typename EnumT value>
		class IEnumRTTI
		{
		public:
			IEnumRTTI()
			{
				mEnumType = value;
			}
			virtual ~IEnumRTTI(){}

			virtual EnumT eType(){ return mEnumType; }

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
		template<typename const size_t length>
		class IAsciiRTTI
		{
		public:
			IAsciiRTTI(const char* type)
			{
				memcpy(mStrType, type, length * sizeof(char));
				mStrType[length] = '\0';
			}
			virtual ~IAsciiRTTI(){}
			virtual const char* eType(){ return mStrType; }

		private:
			char mStrType[length+1];
		};
#pragma pack(pop)
	}	// namespace unity
}	// namespace framework
