#include "main.h"
#include "application/AppDelegate.h"
#include "CCEGLView.h"
#include "ModelManager.h"
#include "Win32MsgProc.h"

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

	EGLView::getInstance()->setAccelerometerKeyHook(&Win32MsgProc::KeyboardMsgProc);
	EGLView::getInstance()->setWndProc(&Win32MsgProc::WindowsMsgProc);

	ModelManager* pModelMgr = ModelManager::point();
	pModelMgr->initWithAppStart(&app);

    int ret = app.runApp(960, 640, "struggle of soldier app");
	while(true)
	{
		pModelMgr->modelLoop();
		app.runOneStep();
	}
	ModelManager::point()->release();

#ifdef USE_WIN32_CONSOLE
    FreeConsole();
#endif

    return ret;
}
