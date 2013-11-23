#include "Win32MsgProc.h"
#include "View_GameScene.h"
#include "luaext/LuaHelper.h"

extern GameSceneView* gGameSceneView;

void Win32MsgProc::OnKeyDownMsgProc(WPARAM wParam, LPARAM lParam)
{
	callLuaFuncNoResult("LUAOnWin32KeyDownMsgProc", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
}
void Win32MsgProc::OnKeyUpMsgProc(WPARAM wParam, LPARAM lParam)
{
	callLuaFuncNoResult("LUAOnWin32KeyUpMsgProc", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
}
void Win32MsgProc::OnCharMsgProc(WPARAM wParam, LPARAM lParam)
{
	callLuaFuncNoResult("LUAOnWin32CharMsgProc", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
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
LRESULT Win32MsgProc::OnMouseMoveWheelMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed)
{
	switch(message)
	{
	case WM_MOUSEMOVE:
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseMoveing", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	case WM_MOUSEWHEEL:
		*pProcessed = callLuaFuncWithBoolResult("LUAOnWin32MouseWheeling", wParam, lParam, (short)HIWORD(wParam), (short)LOWORD(wParam), (short)HIWORD(lParam), (short)LOWORD(lParam));
		break;
	}
	return 0;
}

void Win32MsgProc::KeyboardMsgProc(UINT message,WPARAM wParam, LPARAM lParam)
{
	switch(message)
	{
	case WM_KEYDOWN:	OnKeyDownMsgProc(wParam, lParam); break;
	case WM_KEYUP:		OnKeyUpMsgProc(wParam, lParam); break;
	case WM_CHAR:		OnCharMsgProc(wParam, lParam); break;
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
	case WM_MOUSEWHEEL:
		return OnMouseMoveWheelMsgProc(message, wParam, lParam, pProcessed);
	}
	return 0;
}
