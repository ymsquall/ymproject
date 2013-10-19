#pragma once
#include "object.h"

namespace framework
{
	namespace unity
	{
		template<class T>
		class SingletonAutoT
		{
		public:
			virtual ~SingletonAutoT()
			{
				CCASSERT(false, "SingletonAutoT can not destructor!");
				mInstance = NULL;
			}
			static T* point()
			{
				if(NULL == mInstance)
				{
					mInstance = new T();
					mInstance->retain();
				}
				return mInstance;
			}
		private:
			static T* mInstance;
		};
		template<class T> T* SingletonAutoT<T>::mInstance = NULL;

		template<class T>
		class SingletonT
		{
		public:
			SingletonT()
			{
				if(NULL != mInstance)
				{
					CCASSERT(false, "SingletonT can not repeat construction!");
					mInstance->release();
				}
				mInstance = this;
			}
			virtual ~SingletonT()
			{
				mInstance = NULL;
			}
			static T* point()
			{
				return mInstance;
			}
		private:
			static T* mInstance;
		};
		template<class T> T* SingletonT<T>::mInstance = NULL;
	} // namespace unity
}	// namespace framework
