#include "Win32MsgProc.h"
#include "View_GameLand.h"


extern GameLandView* gGameLandView;

void Win32MsgProc::OnKeyDownMsgProc(WPARAM wParam, LPARAM lParam)
{
	if(NULL == gGameLandView)
		return;
	static float roat = 0;
	static float roatX = 0;
	static float roatY = 0;
	int roatID = 0;
	switch(wParam)
	{
	case VK_UP: roatX ++; roatID = 1; break;
	case VK_DOWN: roatX --; roatID = 1; break;
	case VK_LEFT: roatY --; roatID = 2; break;
	case VK_RIGHT: roatY ++; roatID = 2; break;
	case VK_NUMPAD4: roat --; roatID = 3; break;
	case VK_NUMPAD6: roat ++;  roatID = 3; break;
	case VK_HOME: roatX = 0.0f; roatY = 0.0f; break;
	}
	//for(size_t i = 0; i < gGameLandView->mGridRenderList.size(); ++ i)
	//{
	//	//if(roatID == 3)
	//	//	gGameLandView->mGridRenderList[i]->setRotation(roat);
	//	gGameLandView->mGridRenderList[i]->setRotationX(roatX);
	//	gGameLandView->mGridRenderList[i]->setRotationY(roatY);
	//}
	//gGameLandView->mGridsParent->setRotation(roat);
	//gGameLandView->setRotationX(roatX);
	//gGameLandView->setRotationY(roatY);
}
void Win32MsgProc::OnKeyUpMsgProc(WPARAM wParam, LPARAM lParam)
{
}
void Win32MsgProc::OnCharMsgProc(WPARAM wParam, LPARAM lParam)
{
}

bool Win32MsgProc::MouseLeftBtnDown = false;
LRESULT Win32MsgProc::OnMouseLeftBtnMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed)
{
	switch(message)
	{
	case WM_LBUTTONDOWN:
		MouseLeftBtnDown = true;
		break;
	case WM_LBUTTONUP:
		MouseLeftBtnDown = false;
		break;
	case WM_LBUTTONDBLCLK:
		MouseLeftBtnDown = false;
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
		break;
	case WM_RBUTTONUP:
		MouseRightBtnDown = false;
		break;
	case WM_RBUTTONDBLCLK:
		MouseRightBtnDown = false;
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
		break;
	case WM_MBUTTONUP:
		MouseMiddleBtnDown = false;
		break;
	case WM_MBUTTONDBLCLK:
		MouseMiddleBtnDown = false;
		break;
	}
	return 0;
}
LRESULT Win32MsgProc::OnMouseMoveWheelMsgProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed)
{
	switch(message)
	{
	case WM_MOUSEMOVE:
		break;
	case WM_MOUSEWHEEL:
		{
			if(NULL != gGameLandView)
			{
				static float scale = 1.0f;
				short zValue = HIWORD(wParam);
				float dScale = float(zValue / 120) * 0.01f;
				gGameLandView->mMapBGImageView->setScale(gGameLandView->mMapBGImageView->getScale() + dScale);
			}
		}
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
