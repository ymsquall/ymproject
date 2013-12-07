#pragma once

#include "cocos2d.h"

using namespace cocos2d;

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
    class  CustomEGLView : public EGLView
    {
    public:
        CustomEGLView();
        ~CustomEGLView();
        
        virtual bool isOpenGLReady();
        virtual void end();
        virtual void swapBuffers();
        virtual void setFrameSize(float width, float height);
        virtual void setIMEKeyboardState(bool bOpen);
        
        bool init(const char* viewName, float width, float height, float frameZoomFactor = 1.0f);
    public:
        float getFrameZoomFactor();
        
        typedef void (*LPFN_ACCELEROMETER_KEYHOOK)( UINT message,WPARAM wParam, LPARAM lParam );
        void setAccelerometerKeyHook( LPFN_ACCELEROMETER_KEYHOOK lpfnAccelerometerKeyHook );
        
        virtual void setViewPortInPoints(float x , float y , float w , float h);
        virtual void setScissorInPoints(float x , float y , float w , float h);
        
        static EGLView* getInstance();
        
    protected:
        void setFrameZoomFactor(float fZoomFactor);
        
    private:
        bool _captured;
        LPFN_ACCELEROMETER_KEYHOOK _lpfnAccelerometerKeyHook;
        bool _supportTouch;
        
        int _frameBufferSize[2];
        float _frameZoomFactor;
        static EGLView* s_pEglView;
    public:
        bool windowShouldClose();
        void pollEvents();
        GLFWwindow* getWindow() const { return _mainWindow; }
        
    private:
        GLFWwindow* _mainWindow;
    };
#endif
