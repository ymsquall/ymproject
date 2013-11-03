#pragma once
#define WIN32_LEAN_AND_MEAN		// 从 Windows 头中排除极少使用的资料
#include <windows.h>

class Win32MsgProc
{
public:
	static void KeyboardMsgProc(UINT message,WPARAM wParam, LPARAM lParam);
	static LRESULT WindowsMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed);

private:
	static void OnKeyDownMsgProc(WPARAM wParam, LPARAM lParam);
	static void OnKeyUpMsgProc(WPARAM wParam, LPARAM lParam);
	static void OnCharMsgProc(WPARAM wParam, LPARAM lParam);

	static LRESULT OnMouseLeftBtnMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed);
	static LRESULT OnMouseRightBtnMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed);
	static LRESULT OnMouseMiddleBtnMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed);
	static LRESULT OnMouseMoveWheelMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed);

private:
	static bool MouseLeftBtnDown;
	static bool MouseRightBtnDown;
	static bool MouseMiddleBtnDown;
};