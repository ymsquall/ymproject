#pragma once
using namespace System;

namespace clrcocos
{
	template<class T>
	public value class CLRPointPackage
	{
	public:
		CLRPointPackage(T* packageValue)
		{
			mPackageValue = packageValue;
		}

		property T* Value
		{
			void set(T* v) { mPackageValue = v; }
			T* get() { return mPackageValue; }
		}

		static Object^ Pack(T* v)
		{
			Object^ pack = gcnew Object;
			CLRPointPackage<T> package(v);
			pack = package; 
			return pack;
		}

		static T* UnPack(Object^ pack)
		{
			if(pack == nullptr) return NULL;
			CLRPointPackage<T> package = (CLRPointPackage<T>)pack;
			return package.Value; 
		}

	private:
		T* mPackageValue;
	};
}
