#pragma once
#include "AppDelegate.h"
#include "CLRcommon.h"

using namespace System;

namespace clrcocos
{
	public ref class CLRccApp
	{
	public:
		CLRccApp(void);

		property ccEngine::AppDelegate* AppPackage
		{
			void set(ccEngine::AppDelegate* v)
			{
				CLRPointPackage<ccEngine::AppDelegate> package(v);
				mAppDelegate = package; 
			}
			ccEngine::AppDelegate* get() 
			{
				CLRPointPackage<ccEngine::AppDelegate> package = (CLRPointPackage<ccEngine::AppDelegate>)mAppDelegate;
				return package.Value; 
			}
		}

	private:
		Object^ mAppDelegate;
	};
}
