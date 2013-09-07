#pragma once
#include "AppDelegate.h"
#include "CCEGLView.h"

#include "CLRcommon.h"
using namespace System;

namespace clrcocos
{
	public ref class CLRccApp
	{
	public:
		CLRccApp(void);
		~CLRccApp(void);

		int RunApp();

		property ccEngine::AppDelegate* CLRApp
		{
			void set(ccEngine::AppDelegate* v)
			{
				mAppDelegate = CLRPointPackage<ccEngine::AppDelegate>::Pack(v);
			}
			ccEngine::AppDelegate* get() 
			{
				return CLRPointPackage<ccEngine::AppDelegate>::UnPack(mAppDelegate); 
			}
		}
		property cocos2d::Application* CLRApplication
		{
			void set(cocos2d::Application* v)
			{
				mCCApplication = CLRPointPackage<cocos2d::Application>::Pack(v);
			}
			cocos2d::Application* get() 
			{
				return CLRPointPackage<cocos2d::Application>::UnPack(mCCApplication);
			}
		}
		property cocos2d::EGLView* CLREGLView
		{
			void set(cocos2d::EGLView* v)
			{
				mCCEGLView = CLRPointPackage<cocos2d::EGLView>::Pack(v);
			}
			cocos2d::EGLView* get() 
			{
				return CLRPointPackage<cocos2d::EGLView>::UnPack(mCCEGLView);
			}
		}

	private:
		Object^ mAppDelegate;
		Object^ mCCApplication;
		Object^ mCCEGLView;
	};
}
