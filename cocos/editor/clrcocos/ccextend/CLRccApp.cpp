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
		this->CLRApp = new ccEngine::AppDelegate();
		this->CLRApplication = cocos2d::Application::getInstance();
		this->CLREGLView = cocos2d::EGLView::getInstance();
		this->CLREGLView->setViewName("HelloLua");
		this->CLREGLView->setFrameSize(960, 640);
		return this->CLRApplication->run();
		return 0;
	}
}
