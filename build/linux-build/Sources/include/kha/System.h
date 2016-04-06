#ifndef INCLUDED_kha_System
#define INCLUDED_kha_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS1(kha,ScreenRotation)
HX_DECLARE_CLASS1(kha,System)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  System_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef System_obj OBJ_;
		System_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.System")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< System_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~System_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"); }

		static void __boot();
		static Array< ::Dynamic > renderListeners;
		static cpp::ArrayBase foregroundListeners;
		static cpp::ArrayBase resumeListeners;
		static cpp::ArrayBase pauseListeners;
		static cpp::ArrayBase backgroundListeners;
		static cpp::ArrayBase shutdownListeners;
		static Void init( Dynamic options,Dynamic callback);
		static Dynamic init_dyn();

		static Void initEx( ::String title,cpp::ArrayBase options,Dynamic windowCallback,Dynamic callback);
		static Dynamic initEx_dyn();

		static Void notifyOnRender( Dynamic listener,hx::Null< int >  id);
		static Dynamic notifyOnRender_dyn();

		static Void notifyOnApplicationState( Dynamic foregroundListener,Dynamic resumeListener,Dynamic pauseListener,Dynamic backgroundListener,Dynamic shutdownListener);
		static Dynamic notifyOnApplicationState_dyn();

		static Void render( int id,::kha::Framebuffer framebuffer);
		static Dynamic render_dyn();

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

		static Float time;
		static Float get_time( );
		static Dynamic get_time_dyn();

		static int windowWidth( hx::Null< int >  windowId);
		static Dynamic windowWidth_dyn();

		static int windowHeight( hx::Null< int >  windowId);
		static Dynamic windowHeight_dyn();

		static ::kha::ScreenRotation screenRotation;
		static ::kha::ScreenRotation get_screenRotation( );
		static Dynamic get_screenRotation_dyn();

		static bool vsync;
		static bool get_vsync( );
		static Dynamic get_vsync_dyn();

		static int refreshRate;
		static int get_refreshRate( );
		static Dynamic get_refreshRate_dyn();

		static ::String systemId;
		static ::String get_systemId( );
		static Dynamic get_systemId_dyn();

		static Void requestShutdown( );
		static Dynamic requestShutdown_dyn();

		static Void changeResolution( int width,int height);
		static Dynamic changeResolution_dyn();

		static Void loadUrl( ::String url);
		static Dynamic loadUrl_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_System */ 
