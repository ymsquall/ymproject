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
		ʹ���ַ�����Ϊ������ģ�����ʱҪע�����¼���:
		1�� template<class T, const char value[]>���в�Ҫʹ��const char* �����͡�
		2���ڽ�ģ����ʵ����ʱ������Ĳ���Ҫʹ��extern ������extern const char externValue[];
		3�����������д�ڡ�.h���ļ���ģ���Ҫֱ��extern const char externValue[] = "value";
			������ͷ�ļ���ֻ��������CPP��д��ʵ�֣�const char externValue[] = "value";
		�ܶ���֮��ʹ���ַ�����ģ�����������̫�󣬺���д���������뷨
		ת��ʹ�ù̶�����ģ������Խ�ʡ��ʹ��char*��4�ֽڿ���
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
