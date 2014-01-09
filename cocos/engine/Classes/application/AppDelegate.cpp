#include "cocos2d.h"
#include "AppDelegate.h"
#include "SimpleAudioEngine.h"
#include "CCScriptSupport.h"
#include "CCLuaEngine.h"
#include "luaext/LuaExtern.h"
#include "luaext/LuaHelper.h"

USING_NS_CC;
using namespace CocosDenshion;

namespace engine
{
	AppDelegate::AppDelegate()
	{
		// fixed me
		//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		mEGLViewWidth = 960;
		mEGLViewHeight = 640;
#endif
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
		pDirector->setProjection(Director::Projection::_2D);
		pDirector->setOpenGLView(EGLView::getInstance());
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		EGLView::getInstance()->setDesignResolutionSize(mEGLViewWidth, mEGLViewHeight, ResolutionPolicy::EXACT_FIT);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
		CCSize screenSize = pDirector->getWinSize();
		if (screenSize.width == 2048 && screenSize.height == 1536)
		{
			EGLView::getInstance()->setDesignResolutionSize(1024.0f, 768.0f, ResolutionPolicy::EXACT_FIT);
		}
#endif
		// turn on display FPS
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		pDirector->setDisplayStats(true);
#else
		pDirector->setDisplayStats(false);
#endif
		// set FPS. the default value is 1.0/60 if you don't call this
		pDirector->setAnimationInterval(1.0 / 60);
		// register lua engine
		LuaEngine* pEngine = LuaEngine::getInstance();
		tolua_LuaExtern_open(pEngine->getLuaStack()->getLuaState());
		tolua_LuaExternHandler_open(pEngine->getLuaStack()->getLuaState());
		ScriptEngineManager::getInstance()->setScriptEngine(pEngine);
		std::string path;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		path = FileUtils::getInstance()->fullPathForFilename("luascript/startup.lua");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
		path = FileUtils::getInstance()->fullPathForFilename("luascript/startup.lua");
#endif
		pEngine->executeScriptFile(path.c_str());

		lua_State* L = pEngine->getLuaStack()->getLuaState();
		int debugMode = 0;
		int deviceType = 0;
		tolua_getLuaNumberValue_ByTable(L, "mDebugMode", "__LUAEnvironmentVariable", debugMode);
		tolua_getLuaNumberValue_ByTable(L, "mDeviceType", "__LUAEnvironmentVariable", deviceType);
#if defined(_DEBUG) || defined(DEBUG)
		lua_setLuaNumberValueToTable(L, "__LUAEnvironmentVariable", "mDebugMode", 1);
		lua_setLuaNumberValueToTable(L, "__LUAEnvironmentVariable", "mDeviceType", CC_TARGET_PLATFORM);
#elif defined(NODEBUG)
		lua_setLuaNumberValueToTable(L, "__LUAEnvironmentVariable", "mDebugMode", 0);
		lua_setLuaNumberValueToTable(L, "__LUAEnvironmentVariable", "mDeviceType", CC_TARGET_PLATFORM);
#endif
		tolua_getLuaNumberValue_ByTable(L, "mDebugMode", "__LUAEnvironmentVariable", debugMode);
		tolua_getLuaNumberValue_ByTable(L, "mDeviceType", "__LUAEnvironmentVariable", deviceType);

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
	int AppDelegate::runApp(int width, int height, const char* title)
	{
		mEGLViewWidth = width;
		mEGLViewHeight = height;
		mCustomEGLView.init(title, mEGLViewWidth, mEGLViewHeight);
		// init main message environment
		PVRFrameEnableControlWindow(false);

		QueryPerformanceFrequency(&mMessageFreq);
		QueryPerformanceCounter(&mMessageLast);
		// Initialize instance and cocos2d.
		if (!applicationDidFinishLaunching())
		{
			return 0;
		}
       
		//ShowWindow(eglView->getHWnd(), SW_SHOW);

		framework::unity::RoutedEventArgs eventArgs;
		Event_AppInitOveredShowingAfter(this, &eventArgs);
        
		return 1;
	}
    
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
		//return eglView->getHWnd();
		return 0;
	}
#endif
    
	float AppDelegate::getAnimationInterval()
	{
		if(Director::getInstance() == NULL) return 0.0f;
		return Director::getInstance()->getAnimationInterval();
	}
}