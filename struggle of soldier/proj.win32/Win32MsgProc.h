#pragma once
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