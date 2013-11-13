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
		void blockreader::seek(unsigned short off)
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
		blockreader* blockreader::create(const char* buffer, unsigned short length)
		{
			blockreader* pRet = new blockreader(buffer, length);
			pRet->autorelease();
			return pRet;
		}
		blockreader* blockreader::create(blockwrite* block)
		{
			blockreader* pRet = new blockreader(block->buffer(), block->length());
			pRet->autorelease();
			return pRet;
		}
		long long blockreader::read1()
		{
			char ret = 0;
			if(read<char>(ret))
				return static_cast<long long>(ret);
			return 0;
		}
		long long blockreader::read2()
		{
			short ret = 0;
			if(read<short>(ret))
				return static_cast<long long>(ret);
			return 0;
		}
		long long blockreader::read4()
		{
			long ret = 0;
			if(read<long>(ret))
				return static_cast<long long>(ret);
			return 0;
		}
		long long blockreader::read8()
		{
			long long ret = 0;
			if(read<long long>(ret))
				return ret;
			return 0;
		}
		unsigned long long blockreader::readu1()
		{
			unsigned char ret = 0;
			if(read<unsigned char>(ret))
				return static_cast<unsigned long long>(ret);
			return 0;
		}
		unsigned long long blockreader::readu2()
		{
			unsigned short ret = 0;
			if(read<unsigned short>(ret))
				return static_cast<unsigned long long>(ret);
			return 0;
		}
		unsigned long long blockreader::readu4()
		{
			unsigned long ret = 0;
			if(read<unsigned long>(ret))
				return static_cast<unsigned long long>(ret);
			return 0;
		}
		unsigned long long blockreader::readu8()
		{
			unsigned long long ret = 0;
			if(read<unsigned long long>(ret))
				return ret;
			return 0;
		}
		float blockreader::readf1()
		{
			float ret = 0.0f;
			if(read<float>(ret))
				return ret;
			return 0;
		}
		double blockreader::readf2()
		{
			double ret = 0.0;
			if(read<double>(ret))
				return ret;
			return 0;
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
		void blockwrite::seek(unsigned short off)
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
		blockwrite* blockwrite::create()
		{
			blockwrite* pRet = new blockwrite();
			pRet->autorelease();
			return pRet;
		}
		blockwrite* blockwrite::create(char* buffer, unsigned short length)
		{
			blockwrite* pRet = new blockwrite(buffer, length);
			pRet->autorelease();
			return pRet;
		}
		bool blockwrite::write1(const long long v){ return write<char>(static_cast<const char>(v)); }
		bool blockwrite::write2(const long long v){ return write<short>(static_cast<const short>(v)); }
		bool blockwrite::write4(const long long v){ return write<long>(static_cast<const long>(v)); }
		bool blockwrite::write8(const long long v){ return write<long long>(v); }
		bool blockwrite::writeu1(const unsigned long long v){ return write<unsigned char>(static_cast<const unsigned char>(v)); }
		bool blockwrite::writeu2(const unsigned long long v){ return write<unsigned short>(static_cast<const unsigned short>(v)); }
		bool blockwrite::writeu4(const unsigned long long v){ return write<unsigned long>(static_cast<const unsigned long>(v)); }
		bool blockwrite::writeu8(const unsigned long long v){ return write<unsigned long long>(v); }
		bool blockwrite::writef1(const float v){ return write<float>(static_cast<const float>(v)); }
		bool blockwrite::writef2(const double v){ return write<double>(static_cast<const double>(v)); }

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
