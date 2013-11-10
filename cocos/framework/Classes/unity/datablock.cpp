#include "datablock.h"
#include <assert.h>

namespace framework
{
	namespace unity
	{
		blockreader::blockreader(const char* buffer, unsigned short length)
		{
			mBuffer = const_cast<char*>(buffer);
			mBlock = mBuffer;
			mLength = length;
		}
		void blockreader::seek(size_t off)
		{
			size_t nowOff = mBlock - mBuffer;
			if(nowOff + off >= mLength)
				mBlock = mBuffer + (mLength - 1);
			else
				mBlock += off;
		}
		void blockreader::reseek()
		{
			mBlock = mBuffer;
		}
		bool blockreader::eof() const
		{
			size_t nowOff = mBlock - mBuffer;
			if(nowOff >= mLength)
				return true;
			return false;
		}

		blockwrite::blockwrite()
		{
			mBuffer = new char[Max_Memory_Block_Length];
			mBlock = mBuffer;
			mLength = Max_Memory_Block_Length;
			mRealLength = 0;
			mNeedDelete = true;
		}
		blockwrite::blockwrite(char* buffer, unsigned short length)
		{
			mBuffer = const_cast<char*>(buffer);
			mBlock = mBuffer;
			mLength = length;
			mRealLength = 0;
			mNeedDelete = false;
		}
		blockwrite::~blockwrite()
		{
			if(mNeedDelete)
				delete []mBuffer;
		}
		void blockwrite::seek(size_t off)
		{
			size_t nowOff = mBlock - mBuffer;
			if(nowOff + off >= mLength)
				mBlock = mBuffer + (mLength - 1);
			else
				mBlock += off;
		}
		void blockwrite::reseek()
		{
			mBlock = mBuffer;
		}
		char* blockwrite::buffer() const
		{
			return mBuffer;
		}
		unsigned short blockwrite::length() const
		{
			return mRealLength;
		}

		datablock::datablock(unsigned short length)
		{
			if(length == 0)
				assert(!"������Ķ�̬�ڴ��СΪ0");
			else if(length > Max_Memory_Block_Length)
				assert(!"������Ķ�̬�ڴ�̫��");
			else
			{
				mBuffer = new char[length];
				mBlock = mBuffer;
				mLength = length;
			}
		}
		datablock::datablock(const char* buffer, unsigned short length)
		{
			if(length == 0)
				assert(!"������Ķ�̬�ڴ��СΪ0");
			else if(length > Max_Memory_Block_Length)
				assert(!"������Ķ�̬�ڴ�̫��");
			else
			{
				mBuffer = new char[length];
				memcpy(mBuffer, buffer, length);
				mBlock = mBuffer;
				mLength = length;
			}
		}
		datablock::~datablock()
		{
			delete []mBuffer;
		}
		void datablock::add(char* block, unsigned short length)
		{
			if(length <= 0) return;
			if((mBlock + length - mBuffer) > mLength)
			{
				assert(!"�޷����Ӷ�̬�ڴ��ˣ�");
				//G_Log(gLoggerError, "��̬�ڴ泬����Ԥ�ڵĴ�С[%d,%d]", length, mLength);
				return;
			}
			memcpy(mBlock, block, length);
			mBlock += length;
		}
		void datablock::add(const char* block, unsigned short length)
		{
			if(length <= 0) return;
			if((mBlock + length - mBuffer) > mLength)
			{
				assert(!"�޷����Ӷ�̬�ڴ��ˣ�");
				//G_Log(gLoggerError, "��̬�ڴ泬����Ԥ�ڵĴ�С[%d,%d]", length, mLength);
				return;
			}
			memcpy(mBlock, block, length);
			mBlock += length;
		}
		char* datablock::buffer(unsigned short& length) const
		{
			length = mLength;
			return buffer();
		}
		char* datablock::buffer() const
		{
			return mBuffer;
		}
		unsigned short datablock::length() const
		{
			return mLength;
		}

		multidatablock::multidatablock()
		{
			mLength = 0;
			mBuffer = new char[Max_Memory_Block_Length];
		}
		multidatablock::~multidatablock()
		{
			for(BlockList::iterator it = mBuffers.begin(); it != mBuffers.end(); ++ it)
			{
				delete []it->first;
			}
			delete []mBuffer;
		}
		void multidatablock::add(char* block, unsigned short length)
		{
			if(length <= 0) return;
			if((mLength + length) > Max_Memory_Block_Length)
			{
				assert(!"������Ķ�̬�ڴ�̫��");
				//G_Log(gLoggerError, "�ද̬�ڴ泬����Ԥ�ڵĴ�С[%d,%d]", length, mLength);
				return;
			}
			char* pBlock = new char[length];
			memcpy(pBlock, block, length);
			mBuffers.push_back(std::pair<char*, unsigned short>(pBlock,length));
			mLength += length;
		}
		void multidatablock::add(const char* block, unsigned short length)
		{
			if(length <= 0) return;
			if((mLength + length) > Max_Memory_Block_Length)
			{
				assert(!"������Ķ�̬�ڴ�̫��");
				//G_Log(gLoggerError, "�ද̬�ڴ泬����Ԥ�ڵĴ�С[%d,%d]", length, mLength);
				return;
			}
			char* pBlock = new char[length];
			memcpy(pBlock, block, length);
			mBuffers.push_back(std::pair<char*, unsigned short>(pBlock,length));
			mLength += length;
		}
		// һ���ⲿ����ʱ������length����������ӿ�һ��û��
		char* multidatablock::buffer(unsigned short& length) const
		{
			length = mLength;
			return buffer();
		}
		// �������Ϣ�����ⲿ����ʱ����length����������ӿ�
		char* multidatablock::buffer() const
		{
			// �˷����и����ƣ����ȡbuffer���޸�buffer��ĳֵ�󣬾Ͳ����ٴε��ø÷���������ղ��޸ĵ�ֵ�ᱻ���ǣ�������getBufferHeader�����������޸�ĳЩ��Ϣͷ�еı���
			char* pTempBlock = mBuffer;
			for(BlockList::const_iterator it = mBuffers.begin(); it != mBuffers.end(); ++ it)
			{
				char* pBlock = it->first;
				memcpy(pTempBlock, pBlock, it->second);
				pTempBlock += it->second;
			}
			return mBuffer;
		}
		// �˷����������޸�ĳЩ��Ϣͷ�еı���
		char* multidatablock::header() const
		{
			BlockList::const_iterator it = mBuffers.begin();
			if(it != mBuffers.end())
			{
				return it->first;
			}
			return NULL;
		}
		unsigned short multidatablock::length() const
		{
			return mLength;
		}
		int multidatablock::count() const
		{
			return (int)mBuffers.size();
		}
	}
}
