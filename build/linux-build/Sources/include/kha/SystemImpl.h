#ifndef INCLUDED_kha_SystemImpl
#define INCLUDED_kha_SystemImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS1(kha,Mode)
HX_DECLARE_CLASS1(kha,Position)
HX_DECLARE_CLASS1(kha,ScreenRotation)
HX_DECLARE_CLASS1(kha,SystemImpl)
HX_DECLARE_CLASS1(kha,TargetDisplay)
HX_DECLARE_CLASS2(kha,graphics4,TextureFormat)
HX_DECLARE_CLASS2(kha,input,Gamepad)
HX_DECLARE_CLASS2(kha,input,Keyboard)
HX_DECLARE_CLASS2(kha,input,Mouse)
HX_DECLARE_CLASS2(kha,input,Surface)
HX_DECLARE_CLASS2(kha,network,Controller)

#include <Kore/pch.h>
#include <Kore/System.h>
#include <Kore/Input/Mouse.h>
#include <Kore/Window.h>

void init_kore(const char* name, int width, int height, int antialiasing);
void init_kore_ex(const char* name);
void post_kore_init();
void run_kore();
int init_window( Kore::WindowOptions windowOptions );

namespace kha{


class HXCPP_CLASS_ATTRIBUTES  SystemImpl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SystemImpl_obj OBJ_;
		SystemImpl_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.SystemImpl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SystemImpl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SystemImpl_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SystemImpl","\x8f","\xe9","\xee","\xea"); }

		static void __boot();
		static bool needs3d;
		static ::kha::input::Mouse getMouse( int num);
		static Dynamic getMouse_dyn();

		static ::kha::input::Keyboard getKeyboard( int num);
		static Dynamic getKeyboard_dyn();

		static Float getTime( );
		static Dynamic getTime_dyn();

		static int windowWidth( int windowId);
		static Dynamic windowWidth_dyn();

		static int windowHeight( int windowId);
		static Dynamic windowHeight_dyn();

		static bool getVsync( );
		static Dynamic getVsync_dyn();

		static int getRefreshRate( );
		static Dynamic getRefreshRate_dyn();

		static ::kha::ScreenRotation getScreenRotation( );
		static Dynamic getScreenRotation_dyn();

		static ::String getSystemId( );
		static Dynamic getSystemId_dyn();

		static Void requestShutdown( );
		static Dynamic requestShutdown_dyn();

		static Array< ::Dynamic > framebuffers;
		static ::kha::input::Keyboard keyboard;
		static ::kha::input::Mouse mouse;
		static ::kha::input::Gamepad gamepad1;
		static ::kha::input::Gamepad gamepad2;
		static ::kha::input::Gamepad gamepad3;
		static ::kha::input::Gamepad gamepad4;
		static ::kha::input::Surface surface;
		static cpp::ArrayBase mouseLockListeners;
		static Void init( Dynamic options,Dynamic callback);
		static Dynamic init_dyn();

		static Void initEx( ::String title,cpp::ArrayBase options,Dynamic windowCallback,Dynamic callback);
		static Dynamic initEx_dyn();

		static Void postInit( Dynamic callback);
		static Dynamic postInit_dyn();

		static Void loadFinished( );
		static Dynamic loadFinished_dyn();

		static Void lockMouse( hx::Null< int >  windowId);
		static Dynamic lockMouse_dyn();

		static Void unlockMouse( hx::Null< int >  windowId);
		static Dynamic unlockMouse_dyn();

		static bool canLockMouse( hx::Null< int >  windowId);
		static Dynamic canLockMouse_dyn();

		static bool isMouseLocked( hx::Null< int >  windowId);
		static Dynamic isMouseLocked_dyn();

		static Void notifyOfMouseLockChange( Dynamic func,Dynamic error,hx::Null< int >  windowId);
		static Dynamic notifyOfMouseLockChange_dyn();

		static Void removeFromMouseLockChange( Dynamic func,Dynamic error,hx::Null< int >  windowId);
		static Dynamic removeFromMouseLockChange_dyn();

		static Void frame( int id);
		static Dynamic frame_dyn();

		static Void pushUp( );
		static Dynamic pushUp_dyn();

		static Void pushDown( );
		static Dynamic pushDown_dyn();

		static Void pushLeft( );
		static Dynamic pushLeft_dyn();

		static Void pushRight( );
		static Dynamic pushRight_dyn();

		static Void releaseUp( );
		static Dynamic releaseUp_dyn();

		static Void releaseDown( );
		static Dynamic releaseDown_dyn();

		static Void releaseLeft( );
		static Dynamic releaseLeft_dyn();

		static Void releaseRight( );
		static Dynamic releaseRight_dyn();

		static Void pushChar( int charCode);
		static Dynamic pushChar_dyn();

		static Void releaseChar( int charCode);
		static Dynamic releaseChar_dyn();

		static Void pushShift( );
		static Dynamic pushShift_dyn();

		static Void releaseShift( );
		static Dynamic releaseShift_dyn();

		static Void pushBackspace( );
		static Dynamic pushBackspace_dyn();

		static Void releaseBackspace( );
		static Dynamic releaseBackspace_dyn();

		static Void pushTab( );
		static Dynamic pushTab_dyn();

		static Void releaseTab( );
		static Dynamic releaseTab_dyn();

		static Void pushEnter( );
		static Dynamic pushEnter_dyn();

		static Void releaseEnter( );
		static Dynamic releaseEnter_dyn();

		static Void pushControl( );
		static Dynamic pushControl_dyn();

		static Void releaseControl( );
		static Dynamic releaseControl_dyn();

		static Void pushAlt( );
		static Dynamic pushAlt_dyn();

		static Void releaseAlt( );
		static Dynamic releaseAlt_dyn();

		static Void pushEscape( );
		static Dynamic pushEscape_dyn();

		static Void releaseEscape( );
		static Dynamic releaseEscape_dyn();

		static Void pushDelete( );
		static Dynamic pushDelete_dyn();

		static Void releaseDelete( );
		static Dynamic releaseDelete_dyn();

		static Void pushBack( );
		static Dynamic pushBack_dyn();

		static Void releaseBack( );
		static Dynamic releaseBack_dyn();

		static int mouseX;
		static int mouseY;
		static Void mouseDown( int windowId,int button,int x,int y);
		static Dynamic mouseDown_dyn();

		static Void mouseUp( int windowId,int button,int x,int y);
		static Dynamic mouseUp_dyn();

		static Void mouseMove( int windowId,int x,int y,int movementX,int movementY);
		static Dynamic mouseMove_dyn();

		static Void mouseWheel( int windowId,int delta);
		static Dynamic mouseWheel_dyn();

		static Void gamepad1Axis( int axis,Float value);
		static Dynamic gamepad1Axis_dyn();

		static Void gamepad1Button( int button,Float value);
		static Dynamic gamepad1Button_dyn();

		static Void gamepad2Axis( int axis,Float value);
		static Dynamic gamepad2Axis_dyn();

		static Void gamepad2Button( int button,Float value);
		static Dynamic gamepad2Button_dyn();

		static Void gamepad3Axis( int axis,Float value);
		static Dynamic gamepad3Axis_dyn();

		static Void gamepad3Button( int button,Float value);
		static Dynamic gamepad3Button_dyn();

		static Void gamepad4Axis( int axis,Float value);
		static Dynamic gamepad4Axis_dyn();

		static Void gamepad4Button( int button,Float value);
		static Dynamic gamepad4Button_dyn();

		static Void touchStart( int index,int x,int y);
		static Dynamic touchStart_dyn();

		static Void touchEnd( int index,int x,int y);
		static Dynamic touchEnd_dyn();

		static Void touchMove( int index,int x,int y);
		static Dynamic touchMove_dyn();

		static Void foreground( );
		static Dynamic foreground_dyn();

		static Void resume( );
		static Dynamic resume_dyn();

		static Void pause( );
		static Dynamic pause_dyn();

		static Void background( );
		static Dynamic background_dyn();

		static Void shutdown( );
		static Dynamic shutdown_dyn();

		static Void initKore( ::String name,int width,int height,int antialiasing);
		static Dynamic initKore_dyn();

		static int translatePosition( ::kha::Position value);
		static Dynamic translatePosition_dyn();

		static int translateDisplay( ::kha::TargetDisplay value);
		static Dynamic translateDisplay_dyn();

		static int translateWindowMode( ::kha::Mode value);
		static Dynamic translateWindowMode_dyn();

		static int translateDepthBufferFormat( Dynamic value);
		static Dynamic translateDepthBufferFormat_dyn();

		static int translateStencilBufferFormat( Dynamic value);
		static Dynamic translateStencilBufferFormat_dyn();

		static int translateTextureFormat( ::kha::graphics4::TextureFormat value);
		static Dynamic translateTextureFormat_dyn();

		static Void initWindow( Dynamic options,Dynamic callback);
		static Dynamic initWindow_dyn();

		static cpp::ArrayBase fullscreenListeners;
		static int previousWidth;
		static int previousHeight;
		static bool canSwitchFullscreen( );
		static Dynamic canSwitchFullscreen_dyn();

		static bool isFullscreen( );
		static Dynamic isFullscreen_dyn();

		static Void requestFullscreen( );
		static Dynamic requestFullscreen_dyn();

		static Void exitFullscreen( );
		static Dynamic exitFullscreen_dyn();

		static Void changeResolution( int width,int height);
		static Dynamic changeResolution_dyn();

		static Void setKeepScreenOn( bool on);
		static Dynamic setKeepScreenOn_dyn();

		virtual Void notifyOfFullscreenChange( Dynamic func,Dynamic error);
		Dynamic notifyOfFullscreenChange_dyn();

		virtual Void removeFromFullscreenChange( Dynamic func,Dynamic error);
		Dynamic removeFromFullscreenChange_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_SystemImpl */ 
