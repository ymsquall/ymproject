#ifndef  _APP_DELEGATE_H_
#define  _APP_DELEGATE_H_

#include "CCApplication.h"
#include "mvvm/framework.h"

/**
@brief    The cocos2d Application.

The reason for implement as private inheritance is to hide some interface call by Director.
*/
namespace engine
{
	class AppDelegate : private cocos2d::Application
	{
	public:
		AppDelegate();
		virtual ~AppDelegate();

		/**
		@brief    Implement Director and Scene init code here.
		@return true    Initialize success, app continue.
		@return false   Initialize failed, app terminate.
		*/
		virtual bool applicationDidFinishLaunching();

		/**
		@brief  The function be called when the application enter background
		@param  the pointer of the application
		*/
		virtual void applicationDidEnterBackground();

		/**
		@brief  The function be called when the application enter foreground
		@param  the pointer of the application
		*/
		virtual void applicationWillEnterForeground();

		int runApp(int width, int height, const char* title);
        
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		int runOneStep();
		HWND getEGLViewHwnd();
#endif
		float getAnimationInterval();

	public:
		framework::RoutedEvent<AppDelegate*> Event_AppInitOveredShowingBefore;
		framework::RoutedEvent<AppDelegate*> Event_AppInitOveredShowingAfter;
		framework::RoutedEvent<AppDelegate*> Event_AppDidEnterBackground;
		framework::RoutedEvent<AppDelegate*> Event_AppWillEnterForeground;

	private:
		int mEGLViewWidth;
		int mEGLViewHeight;
        
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		MSG mLastGotMessage;
		LARGE_INTEGER mMessageFreq;
		LARGE_INTEGER mMessageLast;
		LARGE_INTEGER mMessageNow;
#endif
	};
}


#endif // _APP_DELEGATE_H_

