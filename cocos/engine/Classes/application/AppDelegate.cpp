#include "cocos2d.h"
#include "AppDelegate.h"
#include "SimpleAudioEngine.h"
#include "script_support/CCScriptSupport.h"
#include "application/CCLuaEngine.h"

USING_NS_CC;
using namespace CocosDenshion;

namespace engine
{
	AppDelegate::AppDelegate()
	{
		// fixed me
		//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
		mEGLViewWidth = 960;
		mEGLViewHeight = 640;
	}

	AppDelegate::~AppDelegate()
	{
		// end simple audio engine here, or it may crashed on win32
		SimpleAudioEngine::getInstance()->end();
		//CCScriptEngineManager::destroyInstance();
	}

	bool AppDelegate::applicationDidFinishLaunching()
	{
		// initialize director
		Director *pDirector = Director::getInstance();
		pDirector->setOpenGLView(EGLView::getInstance());
    
		EGLView::getInstance()->setDesignResolutionSize(mEGLViewWidth, mEGLViewHeight, ResolutionPolicy::NO_BORDER);

		// turn on display FPS
		pDirector->setDisplayStats(true);

		// set FPS. the default value is 1.0/60 if you don't call this
		pDirector->setAnimationInterval(1.0 / 60);

		// register lua engine
		LuaEngine* pEngine = LuaEngine::getInstance();
		ScriptEngineManager::getInstance()->setScriptEngine(pEngine);
		std::string path;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		path = FileUtils::getInstance()->fullPathForFilename("luascript/startup.lua");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
		path = FileUtils::getInstance()->fullPathForFilename("luascript/startup.lua");
#endif
		pEngine->executeScriptFile(path.c_str());
        
		framework::unity::RoutedEventArgs eventArgs;
		Event_AppInitOveredShowingBefore(this, &eventArgs);
        
		return true;
	}

	// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
	void AppDelegate::applicationDidEnterBackground()
	{
		Director::getInstance()->stopAnimation();
		SimpleAudioEngine::getInstance()->pauseBackgroundMusic();

		framework::unity::RoutedEventArgs eventArgs;
		Event_AppDidEnterBackground(this, &eventArgs);
	}

	// this function will be called when the app is active again
	void AppDelegate::applicationWillEnterForeground()
	{
		Director::getInstance()->startAnimation();
		SimpleAudioEngine::getInstance()->resumeBackgroundMusic();

		framework::unity::RoutedEventArgs eventArgs;
		Event_AppWillEnterForeground(this, &eventArgs);
	}
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	static void PVRFrameEnableControlWindow(bool bEnable)
	{
		HKEY hKey = 0;

		// Open PVRFrame control key, if not exist create it.
		if(ERROR_SUCCESS != RegCreateKeyExW(HKEY_CURRENT_USER,
			L"Software\\Imagination Technologies\\PVRVFRame\\STARTUP\\",
			0,
			0,
			REG_OPTION_NON_VOLATILE,
			KEY_ALL_ACCESS,
			0,
			&hKey,
			NULL))
		{
			return;
		}

		const WCHAR* wszValue = L"hide_gui";
		const WCHAR* wszNewData = (bEnable) ? L"NO" : L"YES";
		WCHAR wszOldData[256] = {0};
		DWORD   dwSize = sizeof(wszOldData);
		LSTATUS status = RegQueryValueExW(hKey, wszValue, 0, NULL, (LPBYTE)wszOldData, &dwSize);
		if (ERROR_FILE_NOT_FOUND == status              // the key not exist
			|| (ERROR_SUCCESS == status                 // or the hide_gui value is exist
			&& 0 != wcscmp(wszNewData, wszOldData)))    // but new data and old data not equal
		{
			dwSize = sizeof(WCHAR) * (wcslen(wszNewData) + 1);
			RegSetValueExW(hKey, wszValue, 0, REG_SZ, (const BYTE *)wszNewData, dwSize);
		}

		RegCloseKey(hKey);
	}
#endif
	int AppDelegate::runApp(int width, int height, const char* title)
	{
		mEGLViewWidth = width;
		mEGLViewHeight = height;
		EGLView* eglView = EGLView::getInstance();
		eglView->setViewName(title);
		eglView->setFrameSize(mEGLViewWidth, mEGLViewHeight);
		// init main message environment
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		PVRFrameEnableControlWindow(false);

		QueryPerformanceFrequency(&mMessageFreq);
		QueryPerformanceCounter(&mMessageLast);
#endif
		// Initialize instance and cocos2d.
		if (!applicationDidFinishLaunching())
		{
			return 0;
		}
       
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		ShowWindow(eglView->getHWnd(), SW_SHOW);
#endif
		framework::unity::RoutedEventArgs eventArgs;
		Event_AppInitOveredShowingAfter(this, &eventArgs);
        
		return 1;
	}
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	int AppDelegate::runOneStep()
	{
		// Main message proc
		if (!PeekMessage(&mLastGotMessage, NULL, 0, 0, PM_REMOVE))
		{
			// Get current time tick.
			QueryPerformanceCounter(&mMessageNow);
			// If it's the time to draw next frame, draw it, else sleep a while.
			if (mMessageNow.QuadPart - mMessageLast.QuadPart > _animationInterval.QuadPart)
			{
				mMessageLast.QuadPart = mMessageNow.QuadPart;
				Director::getInstance()->mainLoop();
			}
			else
			{
				Sleep(0);
			}
		}
		else if (WM_QUIT == mLastGotMessage.message)
		{
			// Quit message loop.
			return mLastGotMessage.wParam;
		}
		else if (! _accelTable || ! TranslateAccelerator(mLastGotMessage.hwnd, _accelTable, &mLastGotMessage))
		{
			// Deal with windows message.
			TranslateMessage(&mLastGotMessage);
			DispatchMessage(&mLastGotMessage);
		}
		return mLastGotMessage.wParam;
	}
    
	HWND AppDelegate::getEGLViewHwnd()
	{
		EGLView* eglView = EGLView::getInstance();
		if(!eglView) return 0;
		return eglView->getHWnd();
	}
#endif
    
	float AppDelegate::getAnimationInterval()
	{
		if(Director::getInstance() == NULL) return 0.0f;
		return Director::getInstance()->getAnimationInterval();
	}
}