#include "main.h"
#include "application/AppDelegate.h"
#include "CCEGLView.h"
#include "ViewModelManager.h"
#include "Win32MsgProc.h"
#include "LuaSOFExtern.h"

USING_NS_CC;

// uncomment below line, open debug console
#define USE_WIN32_CONSOLE

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

#ifdef USE_WIN32_CONSOLE
    AllocConsole();
    freopen("CONIN$", "r", stdin);
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
#endif

    // create the application instance
	engine::AppDelegate app;

	Win32MsgProc win32MsgProc;
	auto dispatcher = Director::getInstance()->getEventDispatcher();
	auto keyboradList = EventListenerKeyboard::create();
	keyboradList->onKeyPressed = CC_CALLBACK_2(Win32MsgProc::onKeyPressed, &win32MsgProc);
	keyboradList->onKeyReleased = CC_CALLBACK_2(Win32MsgProc::onKeyReleased, &win32MsgProc);
	dispatcher->addEventListenerWithFixedPriority(keyboradList, -1);
	auto mouseList = EventListenerMouse::create();
	mouseList->onMouseDown = CC_CALLBACK_1(Win32MsgProc::onMouseDown, &win32MsgProc);
	mouseList->onMouseUp = CC_CALLBACK_1(Win32MsgProc::onMouseUp, &win32MsgProc);
	mouseList->onMouseMove = CC_CALLBACK_1(Win32MsgProc::onMouseMove, &win32MsgProc);
	mouseList->onMouseScroll = CC_CALLBACK_1(Win32MsgProc::onMouseScroll, &win32MsgProc);
	dispatcher->addEventListenerWithFixedPriority(mouseList, -1);

	EGLView::getInstance()->setAccelerometerKeyHook(&Win32MsgProc::KeyboardMsgProc);
	//EGLView::getInstance()->setWndProc(&Win32MsgProc::WindowsMsgProc);

	ViewModelManager* pModelMgr = ViewModelManager::point();
	pModelMgr->initWithAppStart(&app);
    int ret = app.runApp(1136, 640, "struggle of soldier app");

	LuaEngine* pEngine = LuaEngine::getInstance();
	tolua_LuaSOFExtern_open(pEngine->getLuaStack()->getLuaState());
	while(true)
	{
		pModelMgr->modelLoop(0);
		app.runOneStep();
	}
	ViewModelManager::point()->release();

#ifdef USE_WIN32_CONSOLE
    FreeConsole();
#endif

    return ret;
}
