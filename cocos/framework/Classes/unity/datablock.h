#pragma once
#include <list> 
#include "object.h"

#pragma pack(push,1)
namespace framework
{
	namespace unity
	{
		const unsigned short Max_Memory_Block_Length = 65530;
		// �ڴ����ݶ�ȡ��
		class blockreader : public object
		{
		public:
			blockreader(const char* buffer, unsigned short length);
			void seek(unsigned short off);
			void reseek();
			bool eof() const;
			template<class T> bool read(T& ret)
			{
				size_t nowOff = mBlock - mBuffer;
				size_t size = sizeof(T);
				if(size + nowOff > mLength)
					return false;
				ret = *((T*)mBlock);
				mBlock += size;
				return true;
			}
			// ������lua�õĽӿ�
			static blockreader* create(const char* buffer, unsigned short length);
			long long read1();
			long long read2();
			long long read4();
			long long read8();
			unsigned long long readu1();
			unsigned long long readu2();
			unsigned long long readu4();
			unsigned long long readu8();
			float readf1();
			double readf2();

		private:
			char* mBuffer;
			char* mBlock;
			unsigned short mLength;
		};
		class blockwrite : public object
		{
		public:
			blockwrite();
			blockwrite(char* buffer, unsigned short length);
			~blockwrite();
			void seek(unsigned short off);
			void reseek();
			char* buffer() const;
			unsigned short length() const;
			template<class T> bool write(const T data)
			{
				size_t size = sizeof(T);
				if(mRealLength + size > mLength)
					return false;
				T* pTmpData = (T*)mBlock;
				*pTmpData = data;
				mBlock += size;
				mRealLength += size;
				return true;
			}
			// ������lua�õĽӿ�
			static blockwrite* create();
			static blockwrite* create(char* buffer, unsigned short length);
			bool write1(const long long v);
			bool write2(const long long v);
			bool write4(const long long v);
			bool write8(const long long v);
			bool writeu1(const unsigned long long v);
			bool writeu2(const unsigned long long v);
			bool writeu4(const unsigned long long v);
			bool writeu8(const unsigned long long v);
			bool writef1(const float v);
			bool writef2(const double v);

		private:
			char* mBuffer;
			char* mBlock;
			unsigned short mLength;
			unsigned short mRealLength;
			bool mNeedDelete;
		};
		// ���㶯̬�ڴ湹����,����һ��ʼ�ܹ�ȷ����С�Ķ�̬�ڴ湹��ʹ��
		class datablock
		{
		public:
			datablock(unsigned short length);
			datablock(const char* buffer, unsigned short length);
			~datablock();
			// ����һ�ζ�̬�ڴ���˷���
			void add(char* block, unsigned short length);
			void add(const char* block, unsigned short length);
			// һ���ⲿ����ʱ������length����������ӿ�һ��û��
			char* buffer(unsigned short& length) const;
			// �������Ϣ�����ⲿ����ʱ����length����������ӿ�
			char* buffer() const;
			unsigned short length() const;
		private:
			char* mBuffer;
			char* mBlock;
			unsigned short mLength;
		};
		// ��㶯̬�ڴ湹����,����һ��ʼ�޷�ȷ����С�Ķ�̬�ڴ湹��ʹ��
		class multidatablock
		{
		public:
			multidatablock();
			~multidatablock();
			typedef std::list<std::pair<char*, unsigned short>> BlockList;
			// ����һ�ζ�̬�ڴ���˷���
			void add(char* block, unsigned short length);
			void add(const char* block, unsigned short length);
			// һ���ⲿ����ʱ������length����������ӿ�һ��û��
			char* buffer(unsigned short& length) const;
			// �������Ϣ�����ⲿ����ʱ����length����������ӿ�
			char* buffer() const;
			// �˷����������޸�ĳЩ��Ϣͷ�еı���
			char* header() const;
			unsigned short length() const;
			int count() const;

		private:
			BlockList mBuffers;
			char* mBuffer;
			unsigned short mLength;
		};
	}
}
#pragma pack(pop)