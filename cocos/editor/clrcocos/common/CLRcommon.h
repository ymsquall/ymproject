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

	private:
		T* mPackageValue;
	};
}
