#include "CLRccApp.h"

namespace clrcocos
{
	CLRccApp::CLRccApp(void)
	{
		mAppDelegate = nullptr;
		mCCApplication = nullptr;
		mCCEGLView = nullptr;
	}

	CLRccApp::~CLRccApp(void)
	{
		ccEngine::AppDelegate* pApp = CLRApp;
		if(pApp != NULL)
			delete pApp;
		mAppDelegate = nullptr;
		mCCApplication = nullptr;
		mCCEGLView = nullptr;
	}

	int CLRccApp::RunApp()
	{
		CLRApp = new ccEngine::AppDelegate();
		return CLRApp->runApp(960, 640, "cocos2d editor");
	}
	int CLRccApp::RunOneStep()
	{
		if(CLRApp == nullptr)
			return 0;
		return CLRApp->runOneStep();
	}
}
