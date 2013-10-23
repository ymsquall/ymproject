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
		ʹ���ַ�����Ϊ������ģ�����ʱҪע�����¼���:
		1�� template<class T, const char value[]>���в�Ҫʹ��const char* �����͡�
		2���ڽ�ģ����ʵ����ʱ������Ĳ���Ҫʹ��extern ������extern const char externValue[];
		3�����������д�ڡ�.h���ļ���ģ���Ҫֱ��extern const char externValue[] = "value";
			������ͷ�ļ���ֻ��������CPP��д��ʵ�֣�const char externValue[] = "value";
		�ܶ���֮��ʹ���ַ�����ģ�����������̫�󣬺���д���������뷨
		ת��ʹ�ù̶�����ģ������Խ�ʡ��ʹ��char*��4�ֽڿ���
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
		// ��ʡ�ڴ���ַ�����̬����
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
