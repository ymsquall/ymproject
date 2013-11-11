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
		bool blockreader::read1(char& ret){ return read<char>(ret); }
		bool blockreader::read2(short& ret){ return read<short>(ret); }
		bool blockreader::read4(long& ret){ return read<long>(ret); }
		bool blockreader::read8(long long& ret){ return read<long long>(ret); }
		bool blockreader::readu1(unsigned char& ret){ return read<unsigned char>(ret); }
		bool blockreader::readu2(unsigned short& ret){ return read<unsigned short>(ret); }
		bool blockreader::readu4(unsigned long& ret){ return read<unsigned long>(ret); }
		bool blockreader::readu8(unsigned long long& ret){ return read<unsigned long long>(ret); }

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
		bool blockwrite::write1(const char v){ return write<char>(v); }
		bool blockwrite::write2(const short v){ return write<short>(v); }
		bool blockwrite::write4(const long v){ return write<long>(v); }
		bool blockwrite::write8(const long long v){ return write<long long>(v); }
		bool blockwrite::writeu1(const unsigned char v){ return write<unsigned char>(v); }
		bool blockwrite::writeu2(const unsigned short v){ return write<unsigned short>(v); }
		bool blockwrite::writeu4(const unsigned long v){ return write<unsigned long>(v); }
		bool blockwrite::writeu8(const unsigned long long v){ return write<unsigned long long>(v); }

		datablock::datablock(unsigned short length)
		{
			if(length == 0)
				assert(!"所分配的动态内存大小为0");
			else if(length > Max_Memory_Block_Length)
				assert(!"所分配的动态内存太大");
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
				assert(!"所分配的动态内存大小为0");
			else if(length > Max_Memory_Block_Length)
				assert(!"所分配的动态内存太大");
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
				assert(!"无法增加动态内存了！");
				//G_Log(gLoggerError, "动态内存超出了预期的大小[%d,%d]", length, mLength);
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
				assert(!"无法增加动态内存了！");
				//G_Log(gLoggerError, "动态内存超出了预期的大小[%d,%d]", length, mLength);
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
				assert(!"所分配的动态内存太大");
				//G_Log(gLoggerError, "多动态内存超出了预期的大小[%d,%d]", length, mLength);
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
				assert(!"所分配的动态内存太大");
				//G_Log(gLoggerError, "多动态内存超出了预期的大小[%d,%d]", length, mLength);
				return;
			}
			char* pBlock = new char[length];
			memcpy(pBlock, block, length);
			mBuffers.push_back(std::pair<char*, unsigned short>(pBlock,length));
			mLength += length;
		}
		// 一般外部构造时都会有length，所以这个接口一般没用
		char* multidatablock::buffer(unsigned short& length) const
		{
			length = mLength;
			return buffer();
		}
		// 如果是消息或是外部构造时已有length，就用这个接口
		char* multidatablock::buffer() const
		{
			// 此方法有个限制，如果取buffer后修改buffer中某值后，就不能再次调用该方法，否则刚才修改的值会被覆盖，特增加getBufferHeader方法以用来修改某些消息头中的变量
			char* pTempBlock = mBuffer;
			for(BlockList::const_iterator it = mBuffers.begin(); it != mBuffers.end(); ++ it)
			{
				char* pBlock = it->first;
				memcpy(pTempBlock, pBlock, it->second);
				pTempBlock += it->second;
			}
			return mBuffer;
		}
		// 此方法以用来修改某些消息头中的变量
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
