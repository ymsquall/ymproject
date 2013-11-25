#include "Win32MsgProc.h"
#include "View_GameScene.h"
#include "luaext/LuaHelper.h"

extern GameSceneView* gGameSceneView;

static WPARAM toWin32KeyCode(EventKeyboard::KeyCode code)
{
	switch(code)
	{
	case EventKeyboard::KeyCode::KEY_NONE         : return 0;
	case EventKeyboard::KeyCode::KEY_SPACE        : return VK_SPACE;
	case EventKeyboard::KeyCode::KEY_APOSTROPHE   : return '\'';
	case EventKeyboard::KeyCode::KEY_COMMA        : return ':';
	case EventKeyboard::KeyCode::KEY_MINUS        : return '-';
	case EventKeyboard::KeyCode::KEY_PERIOD       : return '.';
	case EventKeyboard::KeyCode::KEY_SLASH        : return '/';
	case EventKeyboard::KeyCode::KEY_0            : return '0';
	case EventKeyboard::KeyCode::KEY_1            : return '1';
	case EventKeyboard::KeyCode::KEY_2            : return '2';
	case EventKeyboard::KeyCode::KEY_3            : return '3';
	case EventKeyboard::KeyCode::KEY_4            : return '4';
	case EventKeyboard::KeyCode::KEY_5            : return '5';
	case EventKeyboard::KeyCode::KEY_6            : return '6';
	case EventKeyboard::KeyCode::KEY_7            : return '7';
	case EventKeyboard::KeyCode::KEY_8            : return '8';
	case EventKeyboard::KeyCode::KEY_9            : return '9';
	case EventKeyboard::KeyCode::KEY_SEMICOLON    : return ';';
	case EventKeyboard::KeyCode::KEY_EQUAL        : return '=';
	case EventKeyboard::KeyCode::KEY_A            : return 'A';
	case EventKeyboard::KeyCode::KEY_B            : return 'B';
	case EventKeyboard::KeyCode::KEY_C            : return 'C';
	case EventKeyboard::KeyCode::KEY_D            : return 'D';
	case EventKeyboard::KeyCode::KEY_E            : return 'E';
	case EventKeyboard::KeyCode::KEY_F            : return 'F';
	case EventKeyboard::KeyCode::KEY_G            : return 'G';
	case EventKeyboard::KeyCode::KEY_H            : return 'H';
	case EventKeyboard::KeyCode::KEY_I            : return 'I';
	case EventKeyboard::KeyCode::KEY_J            : return 'J';
	case EventKeyboard::KeyCode::KEY_K            : return 'K';
	case EventKeyboard::KeyCode::KEY_L            : return 'L';
	case EventKeyboard::KeyCode::KEY_M            : return 'M';
	case EventKeyboard::KeyCode::KEY_N            : return 'N';
	case EventKeyboard::KeyCode::KEY_O            : return 'O';
	case EventKeyboard::KeyCode::KEY_P            : return 'P';
	case EventKeyboard::KeyCode::KEY_Q            : return 'Q';
	case EventKeyboard::KeyCode::KEY_R            : return 'R';
	case EventKeyboard::KeyCode::KEY_S            : return 'S';
	case EventKeyboard::KeyCode::KEY_T            : return 'T';
	case EventKeyboard::KeyCode::KEY_U            : return 'U';
	case EventKeyboard::KeyCode::KEY_V            : return 'V';
	case EventKeyboard::KeyCode::KEY_W            : return 'W';
	case EventKeyboard::KeyCode::KEY_X            : return 'X';
	case EventKeyboard::KeyCode::KEY_Y            : return 'Y';
	case EventKeyboard::KeyCode::KEY_Z            : return 'Z';
	case EventKeyboard::KeyCode::KEY_CAPITAL_A    : return 'a';
	case EventKeyboard::KeyCode::KEY_CAPITAL_B    : return 'b';
	case EventKeyboard::KeyCode::KEY_CAPITAL_C    : return 'c';
	case EventKeyboard::KeyCode::KEY_CAPITAL_D    : return 'd';
	case EventKeyboard::KeyCode::KEY_CAPITAL_E    : return 'e';
	case EventKeyboard::KeyCode::KEY_CAPITAL_F    : return 'f';
	case EventKeyboard::KeyCode::KEY_CAPITAL_G    : return 'g';
	case EventKeyboard::KeyCode::KEY_CAPITAL_H    : return 'h';
	case EventKeyboard::KeyCode::KEY_CAPITAL_I    : return 'i';
	case EventKeyboard::KeyCode::KEY_CAPITAL_J    : return 'j';
	case EventKeyboard::KeyCode::KEY_CAPITAL_K    : return 'k';
	case EventKeyboard::KeyCode::KEY_CAPITAL_L    : return 'l';
	case EventKeyboard::KeyCode::KEY_CAPITAL_M    : return 'm';
	case EventKeyboard::KeyCode::KEY_CAPITAL_N    : return 'n';
	case EventKeyboard::KeyCode::KEY_CAPITAL_O    : return 'o';
	case EventKeyboard::KeyCode::KEY_CAPITAL_P    : return 'p';
	case EventKeyboard::KeyCode::KEY_CAPITAL_Q    : return 'q';
	case EventKeyboard::KeyCode::KEY_CAPITAL_R    : return 'r';
	case EventKeyboard::KeyCode::KEY_CAPITAL_S    : return 's';
	case EventKeyboard::KeyCode::KEY_CAPITAL_T    : return 't';
	case EventKeyboard::KeyCode::KEY_CAPITAL_U    : return 'u';
	case EventKeyboard::KeyCode::KEY_CAPITAL_V    : return 'v';
	case EventKeyboard::KeyCode::KEY_CAPITAL_W    : return 'w';
	case EventKeyboard::KeyCode::KEY_CAPITAL_X    : return 'x';
	case EventKeyboard::KeyCode::KEY_CAPITAL_Y    : return 'y';
	case EventKeyboard::KeyCode::KEY_CAPITAL_Z    : return 'z';
	case EventKeyboard::KeyCode::KEY_LEFT_BRACKET : return '[';
	case EventKeyboard::KeyCode::KEY_BACK_SLASH   : return '\\';
	case EventKeyboard::KeyCode::KEY_RIGHT_BRACKET: return ']';
	case EventKeyboard::KeyCode::KEY_GRAVE        : return '`';
	case EventKeyboard::KeyCode::KEY_ESCAPE       : return VK_ESCAPE;
	case EventKeyboard::KeyCode::KEY_KP_ENTER     : return VK_RETURN;
	case EventKeyboard::KeyCode::KEY_TAB          : return VK_TAB;
	case EventKeyboard::KeyCode::KEY_BACKSPACE    : return VK_BACK;
	case EventKeyboard::KeyCode::KEY_INSERT       : return VK_INSERT;
	case EventKeyboard::KeyCode::KEY_DELETE       : return VK_DELETE;
	case EventKeyboard::KeyCode::KEY_RIGHT_ARROW  : return VK_RIGHT;
	case EventKeyboard::KeyCode::KEY_LEFT_ARROW   : return VK_LEFT;
	case EventKeyboard::KeyCode::KEY_DOWN_ARROW   : return VK_DOWN;
	case EventKeyboard::KeyCode::KEY_UP_ARROW     : return VK_UP;
	case EventKeyboard::KeyCode::KEY_KP_PG_UP     : return 0;
	case EventKeyboard::KeyCode::KEY_KP_PG_DOWN   : return 0;
	case EventKeyboard::KeyCode::KEY_KP_HOME      : return VK_HOME;
	case EventKeyboard::KeyCode::KEY_END          : return VK_END;
	case EventKeyboard::KeyCode::KEY_CAPS_LOCK    : return VK_CAPITAL;
	case EventKeyboard::KeyCode::KEY_SCROLL_LOCK  : return VK_SCROLL;
	case EventKeyboard::KeyCode::KEY_NUM_LOCK     : return VK_NUMLOCK;
	case EventKeyboard::KeyCode::KEY_PRINT        : return VK_PRINT;
	case EventKeyboard::KeyCode::KEY_PAUSE        : return VK_PAUSE;
	case EventKeyboard::KeyCode::KEY_F1           : return VK_F1;
	case EventKeyboard::KeyCode::KEY_F2           : return VK_F2;
	case EventKeyboard::KeyCode::KEY_F3           : return VK_F3;
	case EventKeyboard::KeyCode::KEY_F4           : return VK_F4;
	case EventKeyboard::KeyCode::KEY_F5           : return VK_F5;
	case EventKeyboard::KeyCode::KEY_F6           : return VK_F6;
	case EventKeyboard::KeyCode::KEY_F7           : return VK_F7;
	case EventKeyboard::KeyCode::KEY_F8           : return VK_F8;
	case EventKeyboard::KeyCode::KEY_F9           : return VK_F9;
	case EventKeyboard::KeyCode::KEY_F10          : return VK_F10;
	case EventKeyboard::KeyCode::KEY_F11          : return VK_F11;
	case EventKeyboard::KeyCode::KEY_F12          : return VK_F12;
	case EventKeyboard::KeyCode::KEY_KP_DIVIDE    : return VK_DIVIDE;
	case EventKeyboard::KeyCode::KEY_KP_MULTIPLY  : return VK_MULTIPLY;
	case EventKeyboard::KeyCode::KEY_KP_MINUS     : return 0;
	case EventKeyboard::KeyCode::KEY_KP_PLUS      : return 0;
	case EventKeyboard::KeyCode::KEY_SHIFT        : return VK_SHIFT;
	case EventKeyboard::KeyCode::KEY_CTRL         : return VK_CONTROL;
	case EventKeyboard::KeyCode::KEY_ALT          : return VK_MENU;
	case EventKeyboard::KeyCode::KEY_HYPER        : return 0;
	case EventKeyboard::KeyCode::KEY_MENU         : return VK_MENU;
	}
	return 0;
}

void Win32MsgProc::OnKeyDownMsgProc(int keyCode)
{
	callLuaFuncNoResult("LUAOnWin32KeyDownMsgProc", keyCode);
}
void Win32MsgProc::OnKeyUpMsgProc(int keyCode)
{
	callLuaFuncNoResult("LUAOnWin32KeyUpMsgProc", keyCode);
}
void Win32MsgProc::OnCharMsgProc(int charCode)
{
	callLuaFuncNoResult("LUAOnWin32CharMsgProc", charCode);
}

bool Win32MsgProc::MouseLeftBtnDown = false;
LRESULT Win32MsgProc::OnMouseLeftBtnMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed)
{
	switch(message)
	{
	case WM_LBUTTONDOWN:
		MouseLeftBtnDown = true;
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseLeftDown", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	case WM_LBUTTONUP:
		MouseLeftBtnDown = false;
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseLeftUp", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	case WM_LBUTTONDBLCLK:
		MouseLeftBtnDown = false;
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseLeftDBClick", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	}
	return 0;
}

bool Win32MsgProc::MouseRightBtnDown = false;
LRESULT Win32MsgProc::OnMouseRightBtnMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed)
{
	switch(message)
	{
	case WM_RBUTTONDOWN:
		MouseRightBtnDown = true;
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseRightDown", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	case WM_RBUTTONUP:
		MouseRightBtnDown = false;
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseRightUp", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	case WM_RBUTTONDBLCLK:
		MouseRightBtnDown = false;
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseRightDBClick", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	}
	return 0;
}

bool Win32MsgProc::MouseMiddleBtnDown = false;
LRESULT Win32MsgProc::OnMouseMiddleBtnMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed)
{
	switch(message)
	{
	case WM_MBUTTONDOWN:
		MouseMiddleBtnDown = true;
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseMiddleDown", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	case WM_MBUTTONUP:
		MouseMiddleBtnDown = false;
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseMiddleUp", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	case WM_MBUTTONDBLCLK:
		MouseMiddleBtnDown = false;
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseMiddleDBClick", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	}
	return 0;
}

LRESULT Win32MsgProc::OnMouseMoveMsgProc(float posX, float posY, BOOL* pProcessed)
{
	*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseMoveing", posX, posY);
	return 0;
}
LRESULT Win32MsgProc::OnMouseWheelMsgProc(float scrX, float scrY, int mouseKey, BOOL* pProcessed)
{
	*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseWheeling", scrX, scrY, mouseKey);
	return 0;
}

void Win32MsgProc::KeyboardMsgProc(UINT message,WPARAM wParam, LPARAM lParam)
{
	switch(message)
	{
	case WM_KEYDOWN:	OnKeyDownMsgProc(wParam); break;
	case WM_KEYUP:		OnKeyUpMsgProc(wParam); break;
	case WM_CHAR:		OnCharMsgProc(wParam); break;
	}
}
LRESULT Win32MsgProc::WindowsMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed)
{
	switch(message)
	{
	case WM_LBUTTONDOWN:
	case WM_LBUTTONUP:
	case WM_LBUTTONDBLCLK:
		return OnMouseLeftBtnMsgProc(message, wParam, lParam, pProcessed);
	case WM_RBUTTONDOWN:
	case WM_RBUTTONUP:
	case WM_RBUTTONDBLCLK:
		return OnMouseRightBtnMsgProc(message, wParam, lParam, pProcessed);
	case WM_MBUTTONDOWN:
	case WM_MBUTTONUP:
	case WM_MBUTTONDBLCLK:
		return OnMouseMiddleBtnMsgProc(message, wParam, lParam, pProcessed);
	case WM_MOUSEMOVE:
		return OnMouseMoveMsgProc((float)LOWORD(lParam), (float)HIWORD(lParam), pProcessed);
	case WM_MOUSEWHEEL:
		//(short)HIWORD(wParam) 返回一个滚动的大小,一般是120的倍数,正数代表滚动向前,负数代表向后
		//(short)LOWORD(wParam) 返回当前同时用鼠标键的时候按下了哪些键
		return OnMouseWheelMsgProc(0, HIWORD(wParam)/120, LOWORD(wParam), pProcessed);
	}
	return 0;
}

void Win32MsgProc::onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event)
{
	Win32MsgProc::OnKeyDownMsgProc(toWin32KeyCode(keyCode));
}
void Win32MsgProc::onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event)
{
	Win32MsgProc::OnKeyUpMsgProc(toWin32KeyCode(keyCode));
}
void Win32MsgProc::onMouseDown(Event* event)
{
	BOOL proccessed = false;
	auto ep = dynamic_cast<EventMouse*>(event);
	switch(ep->getMouseButton())
	{
	case 0: Win32MsgProc::OnMouseLeftBtnMsgProc(WM_LBUTTONDOWN, 0, 0, &proccessed); break;
	case 1: Win32MsgProc::OnMouseRightBtnMsgProc(WM_RBUTTONDOWN, 0, 0, &proccessed); break;
	case 2: Win32MsgProc::OnMouseMiddleBtnMsgProc(WM_MBUTTONDOWN, 0, 0, &proccessed); break;
	}
}
void Win32MsgProc::onMouseUp(Event* event)
{
	BOOL proccessed = false;
	auto ep = dynamic_cast<EventMouse*>(event);
	switch(ep->getMouseButton())
	{
	case 0: Win32MsgProc::OnMouseLeftBtnMsgProc(WM_LBUTTONUP, 0, 0, &proccessed); break;
	case 1: Win32MsgProc::OnMouseRightBtnMsgProc(WM_RBUTTONUP, 0, 0, &proccessed); break;
	case 2: Win32MsgProc::OnMouseMiddleBtnMsgProc(WM_MBUTTONUP, 0, 0, &proccessed); break;
	}
}
void Win32MsgProc::onMouseMove(Event* event)
{
	BOOL proccessed = false;
	auto ep = dynamic_cast<EventMouse*>(event);
	Win32MsgProc::OnMouseMoveMsgProc(ep->getCursorX(), ep->getCursorY(), &proccessed);
}
void Win32MsgProc::onMouseScroll(Event* event)
{
	BOOL proccessed = false;
	auto ep = dynamic_cast<EventMouse*>(event);
	Win32MsgProc::OnMouseWheelMsgProc(ep->getScrollX(), ep->getScrollY(), ep->getMouseButton(), &proccessed);
}