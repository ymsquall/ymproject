#pragma once
#include "object.h"

namespace unity
{
	template<class T>
	class SingletonAutoT
	{
	public:
		virtual ~SingletonT()
		{
			mInstance = NULL;
		}
		static T* point()
		{
			if(NULL == mInstance)
				mInstance = new T();
			return mInstance;
		}
	private:
		static T* mInstance;
	};
	template<class T> T* SingletonT<T>::mInstance = NULL;

	template<class T>
	class SingletonT
	{
	public:
		SingletonT()
		{
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
}