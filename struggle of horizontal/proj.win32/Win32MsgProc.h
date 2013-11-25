#pragma once
#define WIN32_LEAN_AND_MEAN		// 从 Windows 头中排除极少使用的资料
#include <windows.h>
#include "cocos2d.h"

using namespace cocos2d;

class Win32MsgProc
{
public:
	void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);
	void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);
	void onMouseDown(Event* event);
	void onMouseUp(Event* event);
	void onMouseMove(Event* event);
	void onMouseScroll(Event* event);

	static void KeyboardMsgProc(UINT message,WPARAM wParam, LPARAM lParam);
	static LRESULT WindowsMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed);

private:
	static void OnKeyDownMsgProc(int keyCode);
	static void OnKeyUpMsgProc(int keyCode);
	static void OnCharMsgProc(int charCode);

	static LRESULT OnMouseLeftBtnMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed);
	static LRESULT OnMouseRightBtnMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed);
	static LRESULT OnMouseMiddleBtnMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed);
	static LRESULT OnMouseMoveMsgProc(float posX, float posY, BOOL* pProcessed);
	static LRESULT OnMouseWheelMsgProc(float scrX, float scrY, int mouseKey, BOOL* pProcessed);

private:
	static bool MouseLeftBtnDown;
	static bool MouseRightBtnDown;
	static bool MouseMiddleBtnDown;
};