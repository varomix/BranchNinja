#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Key
#include <kha/Key.h>
#endif
#ifndef INCLUDED_kha_Mode
#include <kha/Mode.h>
#endif
#ifndef INCLUDED_kha_Position
#include <kha/Position.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <kha/Scheduler.h>
#endif
#ifndef INCLUDED_kha_ScreenRotation
#include <kha/ScreenRotation.h>
#endif
#ifndef INCLUDED_kha_Shaders
#include <kha/Shaders.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha_SystemImpl
#include <kha/SystemImpl.h>
#endif
#ifndef INCLUDED_kha_TargetDisplay
#include <kha/TargetDisplay.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio
#include <kha/audio2/Audio.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio1
#include <kha/audio2/Audio1.h>
#endif
#ifndef INCLUDED_kha_graphics1_Graphics
#include <kha/graphics1/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics1
#include <kha/graphics2/Graphics1.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics2
#include <kha/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
#ifndef INCLUDED_kha_input_Gamepad
#include <kha/input/Gamepad.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_input_Mouse
#include <kha/input/Mouse.h>
#endif
#ifndef INCLUDED_kha_input_Sensor
#include <kha/input/Sensor.h>
#endif
#ifndef INCLUDED_kha_input_SensorType
#include <kha/input/SensorType.h>
#endif
#ifndef INCLUDED_kha_input_Surface
#include <kha/input/Surface.h>
#endif
#ifndef INCLUDED_kha_kore_Keyboard
#include <kha/kore/Keyboard.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics
#include <kha/kore/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics2
#include <kha/kore/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
namespace kha{

Void SystemImpl_obj::__construct()
{
	return null();
}

//SystemImpl_obj::~SystemImpl_obj() { }

Dynamic SystemImpl_obj::__CreateEmpty() { return  new SystemImpl_obj; }
hx::ObjectPtr< SystemImpl_obj > SystemImpl_obj::__new()
{  hx::ObjectPtr< SystemImpl_obj > _result_ = new SystemImpl_obj();
	_result_->__construct();
	return _result_;}

Dynamic SystemImpl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SystemImpl_obj > _result_ = new SystemImpl_obj();
	_result_->__construct();
	return _result_;}

Void SystemImpl_obj::notifyOfFullscreenChange( Dynamic func,Dynamic error){
{
		HX_STACK_FRAME("kha.SystemImpl","notifyOfFullscreenChange",0x59e6ede0,"kha.SystemImpl.notifyOfFullscreenChange","kha/SystemImpl.hx",635,0x57d4ce24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(636)
		bool tmp = ::kha::SystemImpl_obj::canSwitchFullscreen();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(636)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(636)
		if ((tmp)){
			HX_STACK_LINE(636)
			tmp1 = (func != null());
		}
		else{
			HX_STACK_LINE(636)
			tmp1 = false;
		}
		HX_STACK_LINE(636)
		if ((tmp1)){
			HX_STACK_LINE(637)
			cpp::ArrayBase tmp2 = ::kha::SystemImpl_obj::fullscreenListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(637)
			Dynamic tmp3 = func;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(637)
			tmp2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,notifyOfFullscreenChange,(void))

Void SystemImpl_obj::removeFromFullscreenChange( Dynamic func,Dynamic error){
{
		HX_STACK_FRAME("kha.SystemImpl","removeFromFullscreenChange",0x9c7bacae,"kha.SystemImpl.removeFromFullscreenChange","kha/SystemImpl.hx",642,0x57d4ce24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(643)
		bool tmp = ::kha::SystemImpl_obj::canSwitchFullscreen();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(643)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(643)
		if ((tmp)){
			HX_STACK_LINE(643)
			tmp1 = (func != null());
		}
		else{
			HX_STACK_LINE(643)
			tmp1 = false;
		}
		HX_STACK_LINE(643)
		if ((tmp1)){
			HX_STACK_LINE(644)
			cpp::ArrayBase tmp2 = ::kha::SystemImpl_obj::fullscreenListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(644)
			Dynamic tmp3 = func;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(644)
			tmp2->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,removeFromFullscreenChange,(void))

bool SystemImpl_obj::needs3d;

::kha::input::Mouse SystemImpl_obj::getMouse( int num){
	HX_STACK_FRAME("kha.SystemImpl","getMouse",0x58b17b24,"kha.SystemImpl.getMouse","kha/SystemImpl.hx",45,0x57d4ce24)
	HX_STACK_ARG(num,"num")
	HX_STACK_LINE(46)
	bool tmp = (num != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	if ((tmp)){
		HX_STACK_LINE(46)
		return null();
	}
	HX_STACK_LINE(47)
	::kha::input::Mouse tmp1 = ::kha::SystemImpl_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,getMouse,return )

::kha::input::Keyboard SystemImpl_obj::getKeyboard( int num){
	HX_STACK_FRAME("kha.SystemImpl","getKeyboard",0x95414108,"kha.SystemImpl.getKeyboard","kha/SystemImpl.hx",50,0x57d4ce24)
	HX_STACK_ARG(num,"num")
	HX_STACK_LINE(51)
	bool tmp = (num != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	if ((tmp)){
		HX_STACK_LINE(51)
		return null();
	}
	HX_STACK_LINE(52)
	::kha::input::Keyboard tmp1 = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,getKeyboard,return )

Float SystemImpl_obj::getTime( ){

		return Kore::System::time();
	
{
		HX_STACK_FRAME("kha.SystemImpl","getTime",0xebc04bee,"kha.SystemImpl.getTime","kha/SystemImpl.hx",59,0x57d4ce24)
		HX_STACK_LINE(59)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,getTime,return )

int SystemImpl_obj::windowWidth( int windowId){
	HX_STACK_FRAME("kha.SystemImpl","windowWidth",0xc2590da1,"kha.SystemImpl.windowWidth","kha/SystemImpl.hx",63,0x57d4ce24)
	HX_STACK_ARG(windowId,"windowId")
	HX_STACK_LINE(63)
	return Kore::System::windowWidth(windowId);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,windowWidth,return )

int SystemImpl_obj::windowHeight( int windowId){
	HX_STACK_FRAME("kha.SystemImpl","windowHeight",0x01e257ec,"kha.SystemImpl.windowHeight","kha/SystemImpl.hx",67,0x57d4ce24)
	HX_STACK_ARG(windowId,"windowId")
	HX_STACK_LINE(67)
	return Kore::System::windowHeight(windowId);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,windowHeight,return )

bool SystemImpl_obj::getVsync( ){
	HX_STACK_FRAME("kha.SystemImpl","getVsync",0x89f492d0,"kha.SystemImpl.getVsync","kha/SystemImpl.hx",71,0x57d4ce24)
	HX_STACK_LINE(71)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,getVsync,return )

int SystemImpl_obj::getRefreshRate( ){
	HX_STACK_FRAME("kha.SystemImpl","getRefreshRate",0x9bd0909a,"kha.SystemImpl.getRefreshRate","kha/SystemImpl.hx",75,0x57d4ce24)
	HX_STACK_LINE(75)
	return (int)60;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,getRefreshRate,return )

::kha::ScreenRotation SystemImpl_obj::getScreenRotation( ){
	HX_STACK_FRAME("kha.SystemImpl","getScreenRotation",0x5ad503eb,"kha.SystemImpl.getScreenRotation","kha/SystemImpl.hx",79,0x57d4ce24)
	HX_STACK_LINE(79)
	return ::kha::ScreenRotation_obj::RotationNone;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,getScreenRotation,return )

::String SystemImpl_obj::getSystemId( ){
return ::String(Kore::System::systemId());
{
		HX_STACK_FRAME("kha.SystemImpl","getSystemId",0x8f01350b,"kha.SystemImpl.getSystemId","kha/SystemImpl.hx",84,0x57d4ce24)
		HX_STACK_LINE(84)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,getSystemId,return )

Void SystemImpl_obj::requestShutdown( ){
{
		HX_STACK_FRAME("kha.SystemImpl","requestShutdown",0xb0567230,"kha.SystemImpl.requestShutdown","kha/SystemImpl.hx",88,0x57d4ce24)
		HX_STACK_LINE(88)
		Kore::System::stop();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,requestShutdown,(void))

Array< ::Dynamic > SystemImpl_obj::framebuffers;

::kha::input::Keyboard SystemImpl_obj::keyboard;

::kha::input::Mouse SystemImpl_obj::mouse;

::kha::input::Gamepad SystemImpl_obj::gamepad1;

::kha::input::Gamepad SystemImpl_obj::gamepad2;

::kha::input::Gamepad SystemImpl_obj::gamepad3;

::kha::input::Gamepad SystemImpl_obj::gamepad4;

::kha::input::Surface SystemImpl_obj::surface;

cpp::ArrayBase SystemImpl_obj::mouseLockListeners;

Void SystemImpl_obj::init( Dynamic options,Dynamic callback){
{
		HX_STACK_FRAME("kha.SystemImpl","init",0xcab17205,"kha.SystemImpl.init","kha/SystemImpl.hx",101,0x57d4ce24)
		HX_STACK_ARG(options,"options")
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(102)
		::String tmp = options->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		Dynamic tmp1 = options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		Dynamic tmp2 = options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		Dynamic tmp3 = options->__Field(HX_HCSTRING("samplesPerPixel","\x92","\x52","\x4f","\x57"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		::kha::SystemImpl_obj::initKore(tmp,tmp1,tmp2,tmp3);
		HX_STACK_LINE(106)
		post_kore_init();
		HX_STACK_LINE(108)
		::kha::Shaders_obj::init();
		HX_STACK_LINE(111)
		::kha::kore::graphics4::Graphics g4 = ::kha::kore::graphics4::Graphics_obj::__new(null());		HX_STACK_VAR(g4,"g4");
		HX_STACK_LINE(112)
		::kha::Framebuffer framebuffer = ::kha::Framebuffer_obj::__new((int)0,null(),null(),g4);		HX_STACK_VAR(framebuffer,"framebuffer");
		HX_STACK_LINE(113)
		::kha::graphics2::Graphics1 tmp4 = ::kha::graphics2::Graphics1_obj::__new(framebuffer);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		::kha::kore::graphics4::Graphics2 tmp5 = ::kha::kore::graphics4::Graphics2_obj::__new(framebuffer);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		::kha::kore::graphics4::Graphics tmp6 = g4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		framebuffer->init(tmp4,tmp5,tmp6);
		HX_STACK_LINE(114)
		Array< ::Dynamic > tmp7 = ::kha::SystemImpl_obj::framebuffers;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(114)
		::kha::Framebuffer tmp8 = framebuffer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(114)
		tmp7->push(tmp8);
		HX_STACK_LINE(117)
		Dynamic tmp9 = callback;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		::kha::SystemImpl_obj::postInit(tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,init,(void))

Void SystemImpl_obj::initEx( ::String title,cpp::ArrayBase options,Dynamic windowCallback,Dynamic callback){
{
		HX_STACK_FRAME("kha.SystemImpl","initEx",0xef75f9d8,"kha.SystemImpl.initEx","kha/SystemImpl.hx",120,0x57d4ce24)
		HX_STACK_ARG(title,"title")
		HX_STACK_ARG(options,"options")
		HX_STACK_ARG(windowCallback,"windowCallback")
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(121)
		init_kore_ex(title);
		HX_STACK_LINE(124)
		Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		Array< int > windowIds = tmp;		HX_STACK_VAR(windowIds,"windowIds");
		HX_STACK_LINE(126)
		cpp::ArrayBase tmp1 = options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		Dynamic tmp2 = ::kha::SystemImpl_obj::initWindow_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			Dynamic f = tmp2;		HX_STACK_VAR(f,"f");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< int >,windowIds,Dynamic,windowCallback)
			int __ArgCount() const { return 1; }
			Void run(int windowId){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","kha/SystemImpl.hx",126,0x57d4ce24)
				HX_STACK_ARG(windowId,"windowId")
				{
					HX_STACK_LINE(127)
					int tmp4 = windowId;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(127)
					windowIds->push(tmp4);
					HX_STACK_LINE(128)
					int tmp5 = windowId;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(128)
					windowCallback(tmp5).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(126)
			Dynamic a2 =  Dynamic(new _Function_2_1(windowIds,windowCallback));		HX_STACK_VAR(a2,"a2");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,Dynamic,f,Dynamic,a2)
			int __ArgCount() const { return 1; }
			Void run(Dynamic a1){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","kha/SystemImpl.hx",126,0x57d4ce24)
				HX_STACK_ARG(a1,"a1")
				{
					HX_STACK_LINE(126)
					Dynamic tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(126)
					Dynamic tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(126)
					f(tmp4,tmp5).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(126)
			tmp3 =  Dynamic(new _Function_2_2(f,a2));
		}
		HX_STACK_LINE(126)
		::Lambda_obj::iter(tmp1,tmp3);
		HX_STACK_LINE(131)
		::kha::Shaders_obj::init();
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(134)
			int _g = windowIds->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			while((true)){
				HX_STACK_LINE(134)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(134)
				if ((tmp5)){
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(134)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(134)
				int index = tmp6;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(135)
				int tmp7 = windowIds->__get(index);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(135)
				int windowId = tmp7;		HX_STACK_VAR(windowId,"windowId");
				HX_STACK_LINE(136)
				::kha::kore::graphics4::Graphics g4 = ::kha::kore::graphics4::Graphics_obj::__new(null());		HX_STACK_VAR(g4,"g4");
				HX_STACK_LINE(137)
				::kha::Framebuffer framebuffer = ::kha::Framebuffer_obj::__new(index,null(),null(),g4);		HX_STACK_VAR(framebuffer,"framebuffer");
				HX_STACK_LINE(138)
				::kha::graphics2::Graphics1 tmp8 = ::kha::graphics2::Graphics1_obj::__new(framebuffer);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(138)
				::kha::kore::graphics4::Graphics2 tmp9 = ::kha::kore::graphics4::Graphics2_obj::__new(framebuffer);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(138)
				::kha::kore::graphics4::Graphics tmp10 = g4;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(138)
				framebuffer->init(tmp8,tmp9,tmp10);
				HX_STACK_LINE(139)
				Array< ::Dynamic > tmp11 = ::kha::SystemImpl_obj::framebuffers;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(139)
				int tmp12 = windowId;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(139)
				::kha::Framebuffer tmp13 = framebuffer;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(139)
				tmp11[tmp12] = tmp13;
			}
		}
		HX_STACK_LINE(143)
		post_kore_init();
		HX_STACK_LINE(145)
		Dynamic tmp4 = callback;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		::kha::SystemImpl_obj::postInit(tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(SystemImpl_obj,initEx,(void))

Void SystemImpl_obj::postInit( Dynamic callback){
{
		HX_STACK_FRAME("kha.SystemImpl","postInit",0xf06ff105,"kha.SystemImpl.postInit","kha/SystemImpl.hx",148,0x57d4ce24)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(149)
		cpp::ArrayBase tmp = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		::kha::SystemImpl_obj::mouseLockListeners = tmp;
		HX_STACK_LINE(150)
		::haxe::Timer_obj::stamp();
		HX_STACK_LINE(151)
		::kha::input::Sensor_obj::get(::kha::input::SensorType_obj::Accelerometer);
		HX_STACK_LINE(152)
		::kha::kore::Keyboard tmp1 = ::kha::kore::Keyboard_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		::kha::SystemImpl_obj::keyboard = tmp1;
		HX_STACK_LINE(153)
		::kha::input::Mouse tmp2 = ::kha::input::Mouse_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		::kha::SystemImpl_obj::mouse = tmp2;
		HX_STACK_LINE(154)
		::kha::input::Gamepad tmp3 = ::kha::input::Gamepad_obj::__new((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		::kha::SystemImpl_obj::gamepad1 = tmp3;
		HX_STACK_LINE(155)
		::kha::input::Gamepad tmp4 = ::kha::input::Gamepad_obj::__new((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		::kha::SystemImpl_obj::gamepad2 = tmp4;
		HX_STACK_LINE(156)
		::kha::input::Gamepad tmp5 = ::kha::input::Gamepad_obj::__new((int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		::kha::SystemImpl_obj::gamepad3 = tmp5;
		HX_STACK_LINE(157)
		::kha::input::Gamepad tmp6 = ::kha::input::Gamepad_obj::__new((int)3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		::kha::SystemImpl_obj::gamepad4 = tmp6;
		HX_STACK_LINE(158)
		::kha::input::Surface tmp7 = ::kha::input::Surface_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		::kha::SystemImpl_obj::surface = tmp7;
		HX_STACK_LINE(159)
		::kha::audio2::Audio_obj::_init();
		HX_STACK_LINE(160)
		::kha::audio2::Audio1_obj::_init();
		HX_STACK_LINE(161)
		::kha::Scheduler_obj::init();
		HX_STACK_LINE(162)
		::kha::SystemImpl_obj::loadFinished();
		HX_STACK_LINE(163)
		callback().Cast< Void >();
		HX_STACK_LINE(165)
		run_kore();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,postInit,(void))

Void SystemImpl_obj::loadFinished( ){
{
		HX_STACK_FRAME("kha.SystemImpl","loadFinished",0x869d33ad,"kha.SystemImpl.loadFinished","kha/SystemImpl.hx",169,0x57d4ce24)
		HX_STACK_LINE(169)
		::kha::Scheduler_obj::start(null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,loadFinished,(void))

Void SystemImpl_obj::lockMouse( hx::Null< int >  __o_windowId){
int windowId = __o_windowId.Default(0);
	HX_STACK_FRAME("kha.SystemImpl","lockMouse",0x417c4725,"kha.SystemImpl.lockMouse","kha/SystemImpl.hx",205,0x57d4ce24)
	HX_STACK_ARG(windowId,"windowId")
{
		HX_STACK_LINE(206)
		bool tmp = ::kha::SystemImpl_obj::isMouseLocked(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		if ((tmp1)){
			HX_STACK_LINE(207)
			Kore::Mouse::the()->lock(windowId);;
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(208)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(208)
				cpp::ArrayBase tmp2 = ::kha::SystemImpl_obj::mouseLockListeners;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(208)
				cpp::ArrayBase _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(208)
				while((true)){
					HX_STACK_LINE(208)
					bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(208)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(208)
					if ((tmp4)){
						HX_STACK_LINE(208)
						break;
					}
					HX_STACK_LINE(208)
					Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(208)
					Dynamic listener = tmp5;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(208)
					++(_g);
					HX_STACK_LINE(209)
					int tmp6 = windowId;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(209)
					listener(tmp6).Cast< Void >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,lockMouse,(void))

Void SystemImpl_obj::unlockMouse( hx::Null< int >  __o_windowId){
int windowId = __o_windowId.Default(0);
	HX_STACK_FRAME("kha.SystemImpl","unlockMouse",0xd4111e6c,"kha.SystemImpl.unlockMouse","kha/SystemImpl.hx",214,0x57d4ce24)
	HX_STACK_ARG(windowId,"windowId")
{
		HX_STACK_LINE(215)
		bool tmp = ::kha::SystemImpl_obj::isMouseLocked(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		if ((tmp)){
			HX_STACK_LINE(216)
			Kore::Mouse::the()->unlock(windowId);;
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(217)
				cpp::ArrayBase tmp1 = ::kha::SystemImpl_obj::mouseLockListeners;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(217)
				cpp::ArrayBase _g1 = tmp1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(217)
				while((true)){
					HX_STACK_LINE(217)
					bool tmp2 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(217)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(217)
					if ((tmp3)){
						HX_STACK_LINE(217)
						break;
					}
					HX_STACK_LINE(217)
					Dynamic tmp4 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(217)
					Dynamic listener = tmp4;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(217)
					++(_g);
					HX_STACK_LINE(218)
					int tmp5 = windowId;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(218)
					listener(tmp5).Cast< Void >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,unlockMouse,(void))

bool SystemImpl_obj::canLockMouse( hx::Null< int >  __o_windowId){
int windowId = __o_windowId.Default(0);
	HX_STACK_FRAME("kha.SystemImpl","canLockMouse",0x028cf3ff,"kha.SystemImpl.canLockMouse","kha/SystemImpl.hx",224,0x57d4ce24)
	HX_STACK_ARG(windowId,"windowId")
{
		HX_STACK_LINE(224)
		return Kore::Mouse::the()->canLock(windowId);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,canLockMouse,return )

bool SystemImpl_obj::isMouseLocked( hx::Null< int >  __o_windowId){
int windowId = __o_windowId.Default(0);
	HX_STACK_FRAME("kha.SystemImpl","isMouseLocked",0x414b4bb0,"kha.SystemImpl.isMouseLocked","kha/SystemImpl.hx",228,0x57d4ce24)
	HX_STACK_ARG(windowId,"windowId")
{
		HX_STACK_LINE(228)
		return Kore::Mouse::the()->isLocked(windowId);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,isMouseLocked,return )

Void SystemImpl_obj::notifyOfMouseLockChange( Dynamic func,Dynamic error,hx::Null< int >  __o_windowId){
int windowId = __o_windowId.Default(0);
	HX_STACK_FRAME("kha.SystemImpl","notifyOfMouseLockChange",0x88c3c00b,"kha.SystemImpl.notifyOfMouseLockChange","kha/SystemImpl.hx",231,0x57d4ce24)
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(error,"error")
	HX_STACK_ARG(windowId,"windowId")
{
		HX_STACK_LINE(232)
		int tmp = windowId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		bool tmp2 = ::kha::SystemImpl_obj::canLockMouse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		if ((tmp2)){
			HX_STACK_LINE(232)
			tmp3 = (func != null());
		}
		else{
			HX_STACK_LINE(232)
			tmp3 = false;
		}
		HX_STACK_LINE(232)
		if ((tmp3)){
			HX_STACK_LINE(233)
			cpp::ArrayBase tmp4 = ::kha::SystemImpl_obj::mouseLockListeners;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			Dynamic tmp5 = func;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			tmp4->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SystemImpl_obj,notifyOfMouseLockChange,(void))

Void SystemImpl_obj::removeFromMouseLockChange( Dynamic func,Dynamic error,hx::Null< int >  __o_windowId){
int windowId = __o_windowId.Default(0);
	HX_STACK_FRAME("kha.SystemImpl","removeFromMouseLockChange",0x6a1154fd,"kha.SystemImpl.removeFromMouseLockChange","kha/SystemImpl.hx",237,0x57d4ce24)
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(error,"error")
	HX_STACK_ARG(windowId,"windowId")
{
		HX_STACK_LINE(238)
		int tmp = windowId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		bool tmp2 = ::kha::SystemImpl_obj::canLockMouse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		if ((tmp2)){
			HX_STACK_LINE(238)
			tmp3 = (func != null());
		}
		else{
			HX_STACK_LINE(238)
			tmp3 = false;
		}
		HX_STACK_LINE(238)
		if ((tmp3)){
			HX_STACK_LINE(239)
			cpp::ArrayBase tmp4 = ::kha::SystemImpl_obj::mouseLockListeners;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(239)
			Dynamic tmp5 = func;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			tmp4->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SystemImpl_obj,removeFromMouseLockChange,(void))

Void SystemImpl_obj::frame( int id){
{
		HX_STACK_FRAME("kha.SystemImpl","frame",0xd8fd5798,"kha.SystemImpl.frame","kha/SystemImpl.hx",243,0x57d4ce24)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(259)
		bool tmp = (id == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		if ((tmp)){
			HX_STACK_LINE(260)
			::kha::Scheduler_obj::executeFrame();
		}
		HX_STACK_LINE(263)
		int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		Array< ::Dynamic > tmp2 = ::kha::SystemImpl_obj::framebuffers;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		int tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		::kha::Framebuffer tmp4 = tmp2->__get(tmp3).StaticCast< ::kha::Framebuffer >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		::kha::System_obj::render(tmp1,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,frame,(void))

Void SystemImpl_obj::pushUp( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushUp",0xca56a50a,"kha.SystemImpl.pushUp","kha/SystemImpl.hx",266,0x57d4ce24)
		HX_STACK_LINE(267)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		tmp->sendDownEvent(::kha::Key_obj::UP,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushUp,(void))

Void SystemImpl_obj::pushDown( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushDown",0xfdd480d1,"kha.SystemImpl.pushDown","kha/SystemImpl.hx",270,0x57d4ce24)
		HX_STACK_LINE(271)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		tmp->sendDownEvent(::kha::Key_obj::DOWN,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushDown,(void))

Void SystemImpl_obj::pushLeft( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushLeft",0x03169076,"kha.SystemImpl.pushLeft","kha/SystemImpl.hx",274,0x57d4ce24)
		HX_STACK_LINE(275)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		tmp->sendDownEvent(::kha::Key_obj::LEFT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushLeft,(void))

Void SystemImpl_obj::pushRight( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushRight",0x27b4e48d,"kha.SystemImpl.pushRight","kha/SystemImpl.hx",278,0x57d4ce24)
		HX_STACK_LINE(279)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		tmp->sendDownEvent(::kha::Key_obj::RIGHT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushRight,(void))

Void SystemImpl_obj::releaseUp( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseUp",0x8de580ed,"kha.SystemImpl.releaseUp","kha/SystemImpl.hx",282,0x57d4ce24)
		HX_STACK_LINE(283)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		tmp->sendUpEvent(::kha::Key_obj::UP,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseUp,(void))

Void SystemImpl_obj::releaseDown( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseDown",0xe7bc5b74,"kha.SystemImpl.releaseDown","kha/SystemImpl.hx",286,0x57d4ce24)
		HX_STACK_LINE(287)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		tmp->sendUpEvent(::kha::Key_obj::DOWN,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseDown,(void))

Void SystemImpl_obj::releaseLeft( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseLeft",0xecfe6b19,"kha.SystemImpl.releaseLeft","kha/SystemImpl.hx",290,0x57d4ce24)
		HX_STACK_LINE(291)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(291)
		tmp->sendUpEvent(::kha::Key_obj::LEFT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseLeft,(void))

Void SystemImpl_obj::releaseRight( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseRight",0xe8ac588a,"kha.SystemImpl.releaseRight","kha/SystemImpl.hx",294,0x57d4ce24)
		HX_STACK_LINE(295)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(295)
		tmp->sendUpEvent(::kha::Key_obj::RIGHT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseRight,(void))

Void SystemImpl_obj::pushChar( int charCode){
{
		HX_STACK_FRAME("kha.SystemImpl","pushChar",0xfd25e745,"kha.SystemImpl.pushChar","kha/SystemImpl.hx",298,0x57d4ce24)
		HX_STACK_ARG(charCode,"charCode")
		HX_STACK_LINE(299)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		int tmp1 = charCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		::String tmp2 = ::String::fromCharCode(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		tmp->sendDownEvent(::kha::Key_obj::CHAR,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,pushChar,(void))

Void SystemImpl_obj::releaseChar( int charCode){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseChar",0xe70dc1e8,"kha.SystemImpl.releaseChar","kha/SystemImpl.hx",302,0x57d4ce24)
		HX_STACK_ARG(charCode,"charCode")
		HX_STACK_LINE(303)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		int tmp1 = charCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		::String tmp2 = ::String::fromCharCode(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		tmp->sendUpEvent(::kha::Key_obj::CHAR,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,releaseChar,(void))

Void SystemImpl_obj::pushShift( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushShift",0xba73c533,"kha.SystemImpl.pushShift","kha/SystemImpl.hx",306,0x57d4ce24)
		HX_STACK_LINE(307)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		tmp->sendDownEvent(::kha::Key_obj::SHIFT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushShift,(void))

Void SystemImpl_obj::releaseShift( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseShift",0x7b6b3930,"kha.SystemImpl.releaseShift","kha/SystemImpl.hx",310,0x57d4ce24)
		HX_STACK_LINE(311)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		tmp->sendUpEvent(::kha::Key_obj::SHIFT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseShift,(void))

Void SystemImpl_obj::pushBackspace( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushBackspace",0xe8740a70,"kha.SystemImpl.pushBackspace","kha/SystemImpl.hx",314,0x57d4ce24)
		HX_STACK_LINE(315)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		tmp->sendDownEvent(::kha::Key_obj::BACKSPACE,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushBackspace,(void))

Void SystemImpl_obj::releaseBackspace( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseBackspace",0xb201c0ed,"kha.SystemImpl.releaseBackspace","kha/SystemImpl.hx",318,0x57d4ce24)
		HX_STACK_LINE(319)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		tmp->sendUpEvent(::kha::Key_obj::BACKSPACE,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseBackspace,(void))

Void SystemImpl_obj::pushTab( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushTab",0x4178f4c6,"kha.SystemImpl.pushTab","kha/SystemImpl.hx",322,0x57d4ce24)
		HX_STACK_LINE(323)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(323)
		tmp->sendDownEvent(::kha::Key_obj::TAB,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushTab,(void))

Void SystemImpl_obj::releaseTab( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseTab",0x9aea7f83,"kha.SystemImpl.releaseTab","kha/SystemImpl.hx",326,0x57d4ce24)
		HX_STACK_LINE(327)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		tmp->sendUpEvent(::kha::Key_obj::TAB,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseTab,(void))

Void SystemImpl_obj::pushEnter( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushEnter",0xaed745c9,"kha.SystemImpl.pushEnter","kha/SystemImpl.hx",330,0x57d4ce24)
		HX_STACK_LINE(331)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		tmp->sendDownEvent(::kha::Key_obj::ENTER,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushEnter,(void))

Void SystemImpl_obj::releaseEnter( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseEnter",0x6fceb9c6,"kha.SystemImpl.releaseEnter","kha/SystemImpl.hx",334,0x57d4ce24)
		HX_STACK_LINE(335)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		tmp->sendUpEvent(::kha::Key_obj::ENTER,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseEnter,(void))

Void SystemImpl_obj::pushControl( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushControl",0x303e924e,"kha.SystemImpl.pushControl","kha/SystemImpl.hx",338,0x57d4ce24)
		HX_STACK_LINE(339)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		tmp->sendDownEvent(::kha::Key_obj::CTRL,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushControl,(void))

Void SystemImpl_obj::releaseControl( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseControl",0xb4f8bf8b,"kha.SystemImpl.releaseControl","kha/SystemImpl.hx",342,0x57d4ce24)
		HX_STACK_LINE(343)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(343)
		tmp->sendUpEvent(::kha::Key_obj::CTRL,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseControl,(void))

Void SystemImpl_obj::pushAlt( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushAlt",0x416a939a,"kha.SystemImpl.pushAlt","kha/SystemImpl.hx",346,0x57d4ce24)
		HX_STACK_LINE(347)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		tmp->sendDownEvent(::kha::Key_obj::ALT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushAlt,(void))

Void SystemImpl_obj::releaseAlt( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseAlt",0x9adc1e57,"kha.SystemImpl.releaseAlt","kha/SystemImpl.hx",350,0x57d4ce24)
		HX_STACK_LINE(351)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(351)
		tmp->sendUpEvent(::kha::Key_obj::ALT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseAlt,(void))

Void SystemImpl_obj::pushEscape( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushEscape",0x234705b0,"kha.SystemImpl.pushEscape","kha/SystemImpl.hx",354,0x57d4ce24)
		HX_STACK_LINE(355)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(355)
		tmp->sendDownEvent(::kha::Key_obj::ESC,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushEscape,(void))

Void SystemImpl_obj::releaseEscape( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseEscape",0x3ad50f13,"kha.SystemImpl.releaseEscape","kha/SystemImpl.hx",358,0x57d4ce24)
		HX_STACK_LINE(359)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		tmp->sendUpEvent(::kha::Key_obj::ESC,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseEscape,(void))

Void SystemImpl_obj::pushDelete( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushDelete",0xb345825a,"kha.SystemImpl.pushDelete","kha/SystemImpl.hx",362,0x57d4ce24)
		HX_STACK_LINE(363)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		tmp->sendDownEvent(::kha::Key_obj::DEL,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushDelete,(void))

Void SystemImpl_obj::releaseDelete( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseDelete",0xcad38bbd,"kha.SystemImpl.releaseDelete","kha/SystemImpl.hx",366,0x57d4ce24)
		HX_STACK_LINE(367)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		tmp->sendUpEvent(::kha::Key_obj::DEL,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseDelete,(void))

Void SystemImpl_obj::pushBack( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pushBack",0xfc776296,"kha.SystemImpl.pushBack","kha/SystemImpl.hx",370,0x57d4ce24)
		HX_STACK_LINE(371)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		tmp->sendDownEvent(::kha::Key_obj::BACK,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pushBack,(void))

Void SystemImpl_obj::releaseBack( ){
{
		HX_STACK_FRAME("kha.SystemImpl","releaseBack",0xe65f3d39,"kha.SystemImpl.releaseBack","kha/SystemImpl.hx",374,0x57d4ce24)
		HX_STACK_LINE(375)
		::kha::input::Keyboard tmp = ::kha::SystemImpl_obj::keyboard;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		tmp->sendUpEvent(::kha::Key_obj::BACK,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,releaseBack,(void))

int SystemImpl_obj::mouseX;

int SystemImpl_obj::mouseY;

Void SystemImpl_obj::mouseDown( int windowId,int button,int x,int y){
{
		HX_STACK_FRAME("kha.SystemImpl","mouseDown",0xe8f82212,"kha.SystemImpl.mouseDown","kha/SystemImpl.hx",381,0x57d4ce24)
		HX_STACK_ARG(windowId,"windowId")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(382)
		::kha::SystemImpl_obj::mouseX = x;
		HX_STACK_LINE(383)
		::kha::SystemImpl_obj::mouseY = y;
		HX_STACK_LINE(384)
		::kha::input::Mouse tmp = ::kha::SystemImpl_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		int tmp1 = windowId;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		int tmp2 = button;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(384)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(384)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(384)
		tmp->sendDownEvent(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(SystemImpl_obj,mouseDown,(void))

Void SystemImpl_obj::mouseUp( int windowId,int button,int x,int y){
{
		HX_STACK_FRAME("kha.SystemImpl","mouseUp",0x8cb3c40b,"kha.SystemImpl.mouseUp","kha/SystemImpl.hx",387,0x57d4ce24)
		HX_STACK_ARG(windowId,"windowId")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(388)
		::kha::SystemImpl_obj::mouseX = x;
		HX_STACK_LINE(389)
		::kha::SystemImpl_obj::mouseY = y;
		HX_STACK_LINE(390)
		::kha::input::Mouse tmp = ::kha::SystemImpl_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(390)
		int tmp1 = windowId;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		int tmp2 = button;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(390)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		tmp->sendUpEvent(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(SystemImpl_obj,mouseUp,(void))

Void SystemImpl_obj::mouseMove( int windowId,int x,int y,int movementX,int movementY){
{
		HX_STACK_FRAME("kha.SystemImpl","mouseMove",0xeeeb0cc1,"kha.SystemImpl.mouseMove","kha/SystemImpl.hx",393,0x57d4ce24)
		HX_STACK_ARG(windowId,"windowId")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(movementX,"movementX")
		HX_STACK_ARG(movementY,"movementY")
		HX_STACK_LINE(396)
		::kha::SystemImpl_obj::mouseX = x;
		HX_STACK_LINE(397)
		::kha::SystemImpl_obj::mouseY = y;
		HX_STACK_LINE(398)
		::kha::input::Mouse tmp = ::kha::SystemImpl_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		int tmp1 = windowId;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		int tmp4 = movementX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(398)
		int tmp5 = movementY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(398)
		tmp->sendMoveEvent(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(SystemImpl_obj,mouseMove,(void))

Void SystemImpl_obj::mouseWheel( int windowId,int delta){
{
		HX_STACK_FRAME("kha.SystemImpl","mouseWheel",0xdc1484eb,"kha.SystemImpl.mouseWheel","kha/SystemImpl.hx",401,0x57d4ce24)
		HX_STACK_ARG(windowId,"windowId")
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(402)
		::kha::input::Mouse tmp = ::kha::SystemImpl_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(402)
		int tmp1 = windowId;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(402)
		int tmp2 = delta;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(402)
		tmp->sendWheelEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,mouseWheel,(void))

Void SystemImpl_obj::gamepad1Axis( int axis,Float value){
{
		HX_STACK_FRAME("kha.SystemImpl","gamepad1Axis",0xbebda126,"kha.SystemImpl.gamepad1Axis","kha/SystemImpl.hx",405,0x57d4ce24)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(406)
		::kha::input::Gamepad tmp = ::kha::SystemImpl_obj::gamepad1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(406)
		int tmp1 = axis;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(406)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(406)
		tmp->sendAxisEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,gamepad1Axis,(void))

Void SystemImpl_obj::gamepad1Button( int button,Float value){
{
		HX_STACK_FRAME("kha.SystemImpl","gamepad1Button",0xd5b2d1b7,"kha.SystemImpl.gamepad1Button","kha/SystemImpl.hx",409,0x57d4ce24)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(410)
		::kha::input::Gamepad tmp = ::kha::SystemImpl_obj::gamepad1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(410)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(410)
		tmp->sendButtonEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,gamepad1Button,(void))

Void SystemImpl_obj::gamepad2Axis( int axis,Float value){
{
		HX_STACK_FRAME("kha.SystemImpl","gamepad2Axis",0x522435a7,"kha.SystemImpl.gamepad2Axis","kha/SystemImpl.hx",413,0x57d4ce24)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(414)
		::kha::input::Gamepad tmp = ::kha::SystemImpl_obj::gamepad2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(414)
		int tmp1 = axis;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(414)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(414)
		tmp->sendAxisEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,gamepad2Axis,(void))

Void SystemImpl_obj::gamepad2Button( int button,Float value){
{
		HX_STACK_FRAME("kha.SystemImpl","gamepad2Button",0xff484878,"kha.SystemImpl.gamepad2Button","kha/SystemImpl.hx",417,0x57d4ce24)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(418)
		::kha::input::Gamepad tmp = ::kha::SystemImpl_obj::gamepad2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(418)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(418)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		tmp->sendButtonEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,gamepad2Button,(void))

Void SystemImpl_obj::gamepad3Axis( int axis,Float value){
{
		HX_STACK_FRAME("kha.SystemImpl","gamepad3Axis",0xe58aca28,"kha.SystemImpl.gamepad3Axis","kha/SystemImpl.hx",421,0x57d4ce24)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(422)
		::kha::input::Gamepad tmp = ::kha::SystemImpl_obj::gamepad3;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		int tmp1 = axis;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(422)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(422)
		tmp->sendAxisEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,gamepad3Axis,(void))

Void SystemImpl_obj::gamepad3Button( int button,Float value){
{
		HX_STACK_FRAME("kha.SystemImpl","gamepad3Button",0x28ddbf39,"kha.SystemImpl.gamepad3Button","kha/SystemImpl.hx",425,0x57d4ce24)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(426)
		::kha::input::Gamepad tmp = ::kha::SystemImpl_obj::gamepad3;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(426)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		tmp->sendButtonEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,gamepad3Button,(void))

Void SystemImpl_obj::gamepad4Axis( int axis,Float value){
{
		HX_STACK_FRAME("kha.SystemImpl","gamepad4Axis",0x78f15ea9,"kha.SystemImpl.gamepad4Axis","kha/SystemImpl.hx",429,0x57d4ce24)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(430)
		::kha::input::Gamepad tmp = ::kha::SystemImpl_obj::gamepad4;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		int tmp1 = axis;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(430)
		tmp->sendAxisEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,gamepad4Axis,(void))

Void SystemImpl_obj::gamepad4Button( int button,Float value){
{
		HX_STACK_FRAME("kha.SystemImpl","gamepad4Button",0x527335fa,"kha.SystemImpl.gamepad4Button","kha/SystemImpl.hx",433,0x57d4ce24)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(434)
		::kha::input::Gamepad tmp = ::kha::SystemImpl_obj::gamepad4;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(434)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(434)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(434)
		tmp->sendButtonEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,gamepad4Button,(void))

Void SystemImpl_obj::touchStart( int index,int x,int y){
{
		HX_STACK_FRAME("kha.SystemImpl","touchStart",0x7229b4d8,"kha.SystemImpl.touchStart","kha/SystemImpl.hx",437,0x57d4ce24)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(438)
		::kha::input::Surface tmp = ::kha::SystemImpl_obj::surface;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(438)
		int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(438)
		tmp->sendTouchStartEvent(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SystemImpl_obj,touchStart,(void))

Void SystemImpl_obj::touchEnd( int index,int x,int y){
{
		HX_STACK_FRAME("kha.SystemImpl","touchEnd",0xec7f1ad1,"kha.SystemImpl.touchEnd","kha/SystemImpl.hx",441,0x57d4ce24)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(442)
		::kha::input::Surface tmp = ::kha::SystemImpl_obj::surface;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(442)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(442)
		int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		tmp->sendTouchEndEvent(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SystemImpl_obj,touchEnd,(void))

Void SystemImpl_obj::touchMove( int index,int x,int y){
{
		HX_STACK_FRAME("kha.SystemImpl","touchMove",0x0802e35b,"kha.SystemImpl.touchMove","kha/SystemImpl.hx",445,0x57d4ce24)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(446)
		::kha::input::Surface tmp = ::kha::SystemImpl_obj::surface;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(446)
		int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(446)
		tmp->sendMoveEvent(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SystemImpl_obj,touchMove,(void))

Void SystemImpl_obj::foreground( ){
{
		HX_STACK_FRAME("kha.SystemImpl","foreground",0x057c7578,"kha.SystemImpl.foreground","kha/SystemImpl.hx",450,0x57d4ce24)
		HX_STACK_LINE(450)
		::kha::System_obj::foreground();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,foreground,(void))

Void SystemImpl_obj::resume( ){
{
		HX_STACK_FRAME("kha.SystemImpl","resume",0x60ae07e2,"kha.SystemImpl.resume","kha/SystemImpl.hx",454,0x57d4ce24)
		HX_STACK_LINE(454)
		::kha::System_obj::resume();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,resume,(void))

Void SystemImpl_obj::pause( ){
{
		HX_STACK_FRAME("kha.SystemImpl","pause",0x8fd1b661,"kha.SystemImpl.pause","kha/SystemImpl.hx",458,0x57d4ce24)
		HX_STACK_LINE(458)
		::kha::System_obj::pause();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,pause,(void))

Void SystemImpl_obj::background( ){
{
		HX_STACK_FRAME("kha.SystemImpl","background",0x1aaaf0a3,"kha.SystemImpl.background","kha/SystemImpl.hx",462,0x57d4ce24)
		HX_STACK_LINE(462)
		::kha::System_obj::background();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,background,(void))

Void SystemImpl_obj::shutdown( ){
{
		HX_STACK_FRAME("kha.SystemImpl","shutdown",0x5781520b,"kha.SystemImpl.shutdown","kha/SystemImpl.hx",466,0x57d4ce24)
		HX_STACK_LINE(466)
		::kha::System_obj::shutdown();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,shutdown,(void))

Void SystemImpl_obj::initKore( ::String name,int width,int height,int antialiasing){
init_kore(name, width, height, antialiasing);
{
		HX_STACK_FRAME("kha.SystemImpl","initKore",0x383af6fc,"kha.SystemImpl.initKore","kha/SystemImpl.hx",470,0x57d4ce24)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(antialiasing,"antialiasing")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(SystemImpl_obj,initKore,(void))

int SystemImpl_obj::translatePosition( ::kha::Position value){
	HX_STACK_FRAME("kha.SystemImpl","translatePosition",0x02aa0602,"kha.SystemImpl.translatePosition","kha/SystemImpl.hx",473,0x57d4ce24)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(474)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(474)
	if ((tmp)){
		HX_STACK_LINE(475)
		return (int)-1;
	}
	HX_STACK_LINE(478)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(478)
	switch( (int)(value->__Index())){
		case (int)0: {
			HX_STACK_LINE(479)
			tmp1 = (int)-1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(478)
			int tmp2 = (::kha::Position(value))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(478)
			int v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(480)
			tmp1 = v;
		}
		;break;
	}
	HX_STACK_LINE(478)
	return tmp1;
	HX_STACK_LINE(478)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,translatePosition,return )

int SystemImpl_obj::translateDisplay( ::kha::TargetDisplay value){
	HX_STACK_FRAME("kha.SystemImpl","translateDisplay",0x41da7309,"kha.SystemImpl.translateDisplay","kha/SystemImpl.hx",484,0x57d4ce24)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(485)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(485)
	if ((tmp)){
		HX_STACK_LINE(486)
		return (int)-1;
	}
	HX_STACK_LINE(489)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(489)
	switch( (int)(value->__Index())){
		case (int)0: {
			HX_STACK_LINE(490)
			tmp1 = (int)-1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(489)
			int tmp2 = (::kha::TargetDisplay(value))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(489)
			int id = tmp2;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(491)
			tmp1 = id;
		}
		;break;
	}
	HX_STACK_LINE(489)
	return tmp1;
	HX_STACK_LINE(489)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,translateDisplay,return )

int SystemImpl_obj::translateWindowMode( ::kha::Mode value){
	HX_STACK_FRAME("kha.SystemImpl","translateWindowMode",0xe18d790c,"kha.SystemImpl.translateWindowMode","kha/SystemImpl.hx",495,0x57d4ce24)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(496)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	if ((tmp)){
		HX_STACK_LINE(497)
		return (int)0;
	}
	HX_STACK_LINE(500)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(500)
	switch( (int)(value->__Index())){
		case (int)0: {
			HX_STACK_LINE(501)
			tmp1 = (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(502)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(503)
			tmp1 = (int)2;
		}
		;break;
	}
	HX_STACK_LINE(500)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,translateWindowMode,return )

int SystemImpl_obj::translateDepthBufferFormat( Dynamic value){
	HX_STACK_FRAME("kha.SystemImpl","translateDepthBufferFormat",0x58265d81,"kha.SystemImpl.translateDepthBufferFormat","kha/SystemImpl.hx",507,0x57d4ce24)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(508)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(508)
	if ((tmp)){
		HX_STACK_LINE(509)
		return (int)16;
	}
	HX_STACK_LINE(512)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(512)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(512)
	switch( (int)(tmp1)){
		case (int)0: {
			HX_STACK_LINE(513)
			tmp2 = (int)-1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(514)
			tmp2 = (int)16;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(515)
			tmp2 = (int)16;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(516)
			tmp2 = (int)24;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(517)
			tmp2 = (int)32;
		}
		;break;
	}
	HX_STACK_LINE(512)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,translateDepthBufferFormat,return )

int SystemImpl_obj::translateStencilBufferFormat( Dynamic value){
	HX_STACK_FRAME("kha.SystemImpl","translateStencilBufferFormat",0x039a6bba,"kha.SystemImpl.translateStencilBufferFormat","kha/SystemImpl.hx",521,0x57d4ce24)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(522)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(522)
	if ((tmp)){
		HX_STACK_LINE(523)
		return (int)-1;
	}
	HX_STACK_LINE(526)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(526)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(526)
	switch( (int)(tmp1)){
		case (int)0: {
			HX_STACK_LINE(527)
			tmp2 = (int)-1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(528)
			tmp2 = (int)-1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(529)
			tmp2 = (int)8;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(530)
			tmp2 = (int)8;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(531)
			tmp2 = (int)8;
		}
		;break;
	}
	HX_STACK_LINE(526)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,translateStencilBufferFormat,return )

int SystemImpl_obj::translateTextureFormat( ::kha::graphics4::TextureFormat value){
	HX_STACK_FRAME("kha.SystemImpl","translateTextureFormat",0xbfcbfa79,"kha.SystemImpl.translateTextureFormat","kha/SystemImpl.hx",535,0x57d4ce24)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(536)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(536)
	if ((tmp)){
		HX_STACK_LINE(537)
		return (int)0;
	}
	HX_STACK_LINE(540)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(540)
	switch( (int)(value->__Index())){
		case (int)0: {
			HX_STACK_LINE(541)
			tmp1 = (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(542)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(543)
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(544)
			tmp1 = (int)3;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(545)
			tmp1 = (int)4;
		}
		;break;
	}
	HX_STACK_LINE(540)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,translateTextureFormat,return )

Void SystemImpl_obj::initWindow( Dynamic options,Dynamic callback){
{
		HX_STACK_FRAME("kha.SystemImpl","initWindow",0x4b5f4bd5,"kha.SystemImpl.initWindow","kha/SystemImpl.hx",549,0x57d4ce24)
		HX_STACK_ARG(options,"options")
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(551)
		::kha::Position tmp = options->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(551)
		int tmp1 = ::kha::SystemImpl_obj::translatePosition(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(551)
		int x = tmp1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(552)
		::kha::Position tmp2 = options->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(552)
		int tmp3 = ::kha::SystemImpl_obj::translatePosition(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(552)
		int y = tmp3;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(553)
		bool tmp4 = (options->__Field(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(553)
		::kha::Mode tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(553)
		if ((tmp4)){
			HX_STACK_LINE(553)
			tmp5 = options->__Field(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(553)
			tmp5 = ::kha::Mode_obj::Window;
		}
		HX_STACK_LINE(553)
		int tmp6 = ::kha::SystemImpl_obj::translateWindowMode(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(553)
		int mode = tmp6;		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(554)
		bool tmp7 = (options->__Field(HX_HCSTRING("targetDisplay","\xf1","\xda","\x78","\xf2"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(554)
		::kha::TargetDisplay tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(554)
		if ((tmp7)){
			HX_STACK_LINE(554)
			tmp8 = options->__Field(HX_HCSTRING("targetDisplay","\xf1","\xda","\x78","\xf2"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(554)
			tmp8 = ::kha::TargetDisplay_obj::Primary;
		}
		HX_STACK_LINE(554)
		int tmp9 = ::kha::SystemImpl_obj::translateDisplay(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(554)
		int targetDisplay = tmp9;		HX_STACK_VAR(targetDisplay,"targetDisplay");
		HX_STACK_LINE(555)
		bool tmp10 = (options->__Field(HX_HCSTRING("rendererOptions","\x5b","\x14","\xda","\xa5"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(555)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(555)
		if ((tmp10)){
			HX_STACK_LINE(555)
			tmp11 = options->__Field(HX_HCSTRING("rendererOptions","\x5b","\x14","\xda","\xa5"), hx::paccDynamic )->__Field(HX_HCSTRING("depthStencilFormat","\x50","\x1f","\xdf","\x3c"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(555)
			tmp11 = (int)1;
		}
		HX_STACK_LINE(555)
		int tmp12 = ::kha::SystemImpl_obj::translateDepthBufferFormat(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(555)
		int depthBufferBits = tmp12;		HX_STACK_VAR(depthBufferBits,"depthBufferBits");
		HX_STACK_LINE(556)
		bool tmp13 = (options->__Field(HX_HCSTRING("rendererOptions","\x5b","\x14","\xda","\xa5"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(556)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(556)
		if ((tmp13)){
			HX_STACK_LINE(556)
			tmp14 = options->__Field(HX_HCSTRING("rendererOptions","\x5b","\x14","\xda","\xa5"), hx::paccDynamic )->__Field(HX_HCSTRING("depthStencilFormat","\x50","\x1f","\xdf","\x3c"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(556)
			tmp14 = (int)1;
		}
		HX_STACK_LINE(556)
		int tmp15 = ::kha::SystemImpl_obj::translateStencilBufferFormat(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(556)
		int stencilBufferBits = tmp15;		HX_STACK_VAR(stencilBufferBits,"stencilBufferBits");
		HX_STACK_LINE(557)
		bool tmp16 = (options->__Field(HX_HCSTRING("rendererOptions","\x5b","\x14","\xda","\xa5"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(557)
		::kha::graphics4::TextureFormat tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(557)
		if ((tmp16)){
			HX_STACK_LINE(557)
			tmp17 = options->__Field(HX_HCSTRING("rendererOptions","\x5b","\x14","\xda","\xa5"), hx::paccDynamic )->__Field(HX_HCSTRING("textureFormat","\x72","\x62","\xa6","\x90"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(557)
			tmp17 = ::kha::graphics4::TextureFormat_obj::RGBA32;
		}
		HX_STACK_LINE(557)
		int tmp18 = ::kha::SystemImpl_obj::translateTextureFormat(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(557)
		int textureFormat = tmp18;		HX_STACK_VAR(textureFormat,"textureFormat");
		HX_STACK_LINE(558)
		int windowId = (int)-1;		HX_STACK_VAR(windowId,"windowId");
		HX_STACK_LINE(559)
		::String title = options->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic );		HX_STACK_VAR(title,"title");
		HX_STACK_LINE(560)
		int width = options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(561)
		int height = options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(563)
		
			Kore::WindowOptions wo;
			wo.title = title;
			wo.x = x;
			wo.y = y;
			wo.width = width;
			wo.height = height;
			//wo.mode = mode;
			wo.targetDisplay = targetDisplay;
			wo.rendererOptions.textureFormat = textureFormat;
			wo.rendererOptions.depthBufferBits = depthBufferBits;
			wo.rendererOptions.stencilBufferBits = stencilBufferBits;

			switch (mode) {
				default: // fall through
				case 0: wo.mode = Kore::WindowMode::Window; break;
				case 1: wo.mode = Kore::WindowMode::Borderless; break;
				case 2: wo.mode = Kore::WindowMode::Fullscreen; break;
			}

			windowId = init_window(wo);
		;
		HX_STACK_LINE(593)
		bool tmp19 = (callback != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(593)
		if ((tmp19)){
			HX_STACK_LINE(594)
			int tmp20 = windowId;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(594)
			callback(tmp20).Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,initWindow,(void))

cpp::ArrayBase SystemImpl_obj::fullscreenListeners;

int SystemImpl_obj::previousWidth;

int SystemImpl_obj::previousHeight;

bool SystemImpl_obj::canSwitchFullscreen( ){
	HX_STACK_FRAME("kha.SystemImpl","canSwitchFullscreen",0x7beb562a,"kha.SystemImpl.canSwitchFullscreen","kha/SystemImpl.hx",603,0x57d4ce24)
	HX_STACK_LINE(603)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,canSwitchFullscreen,return )

bool SystemImpl_obj::isFullscreen( ){
	HX_STACK_FRAME("kha.SystemImpl","isFullscreen",0x03f916ba,"kha.SystemImpl.isFullscreen","kha/SystemImpl.hx",607,0x57d4ce24)
	HX_STACK_LINE(607)
	return Kore::System::isFullscreen();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,isFullscreen,return )

Void SystemImpl_obj::requestFullscreen( ){
{
		HX_STACK_FRAME("kha.SystemImpl","requestFullscreen",0xfebaca55,"kha.SystemImpl.requestFullscreen","kha/SystemImpl.hx",610,0x57d4ce24)
		HX_STACK_LINE(611)
		bool tmp = ::kha::SystemImpl_obj::isFullscreen();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(611)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		if ((tmp1)){
			HX_STACK_LINE(612)
			::kha::SystemImpl_obj::previousWidth = Kore::System::windowWidth(0);
			HX_STACK_LINE(613)
			::kha::SystemImpl_obj::previousHeight = Kore::System::windowHeight(0);
			HX_STACK_LINE(614)
			Kore::System::changeResolution(Kore::System::desktopWidth(), Kore::System::desktopHeight(), true);
			HX_STACK_LINE(615)
			{
				HX_STACK_LINE(615)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(615)
				cpp::ArrayBase tmp2 = ::kha::SystemImpl_obj::fullscreenListeners;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(615)
				cpp::ArrayBase _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(615)
				while((true)){
					HX_STACK_LINE(615)
					bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(615)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(615)
					if ((tmp4)){
						HX_STACK_LINE(615)
						break;
					}
					HX_STACK_LINE(615)
					Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(615)
					Dynamic listener = tmp5;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(615)
					++(_g);
					HX_STACK_LINE(616)
					listener().Cast< Void >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,requestFullscreen,(void))

Void SystemImpl_obj::exitFullscreen( ){
{
		HX_STACK_FRAME("kha.SystemImpl","exitFullscreen",0xa140e22e,"kha.SystemImpl.exitFullscreen","kha/SystemImpl.hx",622,0x57d4ce24)
		HX_STACK_LINE(623)
		bool tmp = ::kha::SystemImpl_obj::isFullscreen();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(623)
		if ((tmp)){
			HX_STACK_LINE(624)
			int tmp1 = ::kha::SystemImpl_obj::previousWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(624)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(624)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(624)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(624)
			if ((tmp3)){
				HX_STACK_LINE(624)
				int tmp5 = ::kha::SystemImpl_obj::previousHeight;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(624)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(624)
				tmp4 = (tmp6 == (int)0);
			}
			else{
				HX_STACK_LINE(624)
				tmp4 = true;
			}
			HX_STACK_LINE(624)
			if ((tmp4)){
				HX_STACK_LINE(625)
				::kha::SystemImpl_obj::previousWidth = Kore::System::windowWidth(0);
				HX_STACK_LINE(626)
				::kha::SystemImpl_obj::previousHeight = Kore::System::windowHeight(0);
			}
			HX_STACK_LINE(628)
			Kore::System::changeResolution(previousWidth, previousHeight, false);
			HX_STACK_LINE(629)
			{
				HX_STACK_LINE(629)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(629)
				cpp::ArrayBase tmp5 = ::kha::SystemImpl_obj::fullscreenListeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(629)
				cpp::ArrayBase _g1 = tmp5;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(629)
				while((true)){
					HX_STACK_LINE(629)
					bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(629)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(629)
					if ((tmp7)){
						HX_STACK_LINE(629)
						break;
					}
					HX_STACK_LINE(629)
					Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(629)
					Dynamic listener = tmp8;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(629)
					++(_g);
					HX_STACK_LINE(630)
					listener().Cast< Void >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemImpl_obj,exitFullscreen,(void))

Void SystemImpl_obj::changeResolution( int width,int height){
{
		HX_STACK_FRAME("kha.SystemImpl","changeResolution",0x73a24931,"kha.SystemImpl.changeResolution","kha/SystemImpl.hx",648,0x57d4ce24)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SystemImpl_obj,changeResolution,(void))

Void SystemImpl_obj::setKeepScreenOn( bool on){
{
		HX_STACK_FRAME("kha.SystemImpl","setKeepScreenOn",0xd7fb933d,"kha.SystemImpl.setKeepScreenOn","kha/SystemImpl.hx",653,0x57d4ce24)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(653)
		Kore::System::setKeepScreenOn(on);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SystemImpl_obj,setKeepScreenOn,(void))


SystemImpl_obj::SystemImpl_obj()
{
}

Dynamic SystemImpl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"notifyOfFullscreenChange") ) { return notifyOfFullscreenChange_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"removeFromFullscreenChange") ) { return removeFromFullscreenChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SystemImpl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { outValue = mouse; return true;  }
		if (HX_FIELD_EQ(inName,"frame") ) { outValue = frame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"initEx") ) { outValue = initEx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushUp") ) { outValue = pushUp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseX") ) { outValue = mouseX; return true;  }
		if (HX_FIELD_EQ(inName,"mouseY") ) { outValue = mouseY; return true;  }
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"needs3d") ) { outValue = needs3d; return true;  }
		if (HX_FIELD_EQ(inName,"getTime") ) { outValue = getTime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"surface") ) { outValue = surface; return true;  }
		if (HX_FIELD_EQ(inName,"pushTab") ) { outValue = pushTab_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushAlt") ) { outValue = pushAlt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { outValue = mouseUp_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getMouse") ) { outValue = getMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVsync") ) { outValue = getVsync_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"keyboard") ) { outValue = keyboard; return true;  }
		if (HX_FIELD_EQ(inName,"gamepad1") ) { outValue = gamepad1; return true;  }
		if (HX_FIELD_EQ(inName,"gamepad2") ) { outValue = gamepad2; return true;  }
		if (HX_FIELD_EQ(inName,"gamepad3") ) { outValue = gamepad3; return true;  }
		if (HX_FIELD_EQ(inName,"gamepad4") ) { outValue = gamepad4; return true;  }
		if (HX_FIELD_EQ(inName,"postInit") ) { outValue = postInit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushDown") ) { outValue = pushDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushLeft") ) { outValue = pushLeft_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushChar") ) { outValue = pushChar_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushBack") ) { outValue = pushBack_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"touchEnd") ) { outValue = touchEnd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"initKore") ) { outValue = initKore_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lockMouse") ) { outValue = lockMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushRight") ) { outValue = pushRight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseUp") ) { outValue = releaseUp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushShift") ) { outValue = pushShift_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushEnter") ) { outValue = pushEnter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { outValue = mouseDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { outValue = mouseMove_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"touchMove") ) { outValue = touchMove_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"releaseTab") ) { outValue = releaseTab_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseAlt") ) { outValue = releaseAlt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushEscape") ) { outValue = pushEscape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushDelete") ) { outValue = pushDelete_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { outValue = mouseWheel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"touchStart") ) { outValue = touchStart_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"foreground") ) { outValue = foreground_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"background") ) { outValue = background_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"initWindow") ) { outValue = initWindow_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getKeyboard") ) { outValue = getKeyboard_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"windowWidth") ) { outValue = windowWidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSystemId") ) { outValue = getSystemId_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unlockMouse") ) { outValue = unlockMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseDown") ) { outValue = releaseDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseLeft") ) { outValue = releaseLeft_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseChar") ) { outValue = releaseChar_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushControl") ) { outValue = pushControl_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseBack") ) { outValue = releaseBack_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { outValue = windowHeight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebuffers") ) { outValue = framebuffers; return true;  }
		if (HX_FIELD_EQ(inName,"loadFinished") ) { outValue = loadFinished_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"canLockMouse") ) { outValue = canLockMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseRight") ) { outValue = releaseRight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseShift") ) { outValue = releaseShift_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseEnter") ) { outValue = releaseEnter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gamepad1Axis") ) { outValue = gamepad1Axis_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gamepad2Axis") ) { outValue = gamepad2Axis_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gamepad3Axis") ) { outValue = gamepad3Axis_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gamepad4Axis") ) { outValue = gamepad4Axis_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isFullscreen") ) { outValue = isFullscreen_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isMouseLocked") ) { outValue = isMouseLocked_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushBackspace") ) { outValue = pushBackspace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseEscape") ) { outValue = releaseEscape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseDelete") ) { outValue = releaseDelete_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"previousWidth") ) { outValue = previousWidth; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getRefreshRate") ) { outValue = getRefreshRate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseControl") ) { outValue = releaseControl_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gamepad1Button") ) { outValue = gamepad1Button_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gamepad2Button") ) { outValue = gamepad2Button_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gamepad3Button") ) { outValue = gamepad3Button_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gamepad4Button") ) { outValue = gamepad4Button_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"previousHeight") ) { outValue = previousHeight; return true;  }
		if (HX_FIELD_EQ(inName,"exitFullscreen") ) { outValue = exitFullscreen_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"requestShutdown") ) { outValue = requestShutdown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setKeepScreenOn") ) { outValue = setKeepScreenOn_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"releaseBackspace") ) { outValue = releaseBackspace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"translateDisplay") ) { outValue = translateDisplay_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"changeResolution") ) { outValue = changeResolution_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenRotation") ) { outValue = getScreenRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"translatePosition") ) { outValue = translatePosition_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"requestFullscreen") ) { outValue = requestFullscreen_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mouseLockListeners") ) { outValue = mouseLockListeners; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"translateWindowMode") ) { outValue = translateWindowMode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fullscreenListeners") ) { outValue = fullscreenListeners; return true;  }
		if (HX_FIELD_EQ(inName,"canSwitchFullscreen") ) { outValue = canSwitchFullscreen_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"translateTextureFormat") ) { outValue = translateTextureFormat_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"notifyOfMouseLockChange") ) { outValue = notifyOfMouseLockChange_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"removeFromMouseLockChange") ) { outValue = removeFromMouseLockChange_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"translateDepthBufferFormat") ) { outValue = translateDepthBufferFormat_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"translateStencilBufferFormat") ) { outValue = translateStencilBufferFormat_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &SystemImpl_obj::needs3d,HX_HCSTRING("needs3d","\x6e","\xd5","\x2d","\xaa")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &SystemImpl_obj::framebuffers,HX_HCSTRING("framebuffers","\xe6","\x3a","\xca","\x84")},
	{hx::fsObject /*::kha::input::Keyboard*/ ,(void *) &SystemImpl_obj::keyboard,HX_HCSTRING("keyboard","\xa7","\xbc","\x29","\x68")},
	{hx::fsObject /*::kha::input::Mouse*/ ,(void *) &SystemImpl_obj::mouse,HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{hx::fsObject /*::kha::input::Gamepad*/ ,(void *) &SystemImpl_obj::gamepad1,HX_HCSTRING("gamepad1","\x70","\xac","\x9e","\xcb")},
	{hx::fsObject /*::kha::input::Gamepad*/ ,(void *) &SystemImpl_obj::gamepad2,HX_HCSTRING("gamepad2","\x71","\xac","\x9e","\xcb")},
	{hx::fsObject /*::kha::input::Gamepad*/ ,(void *) &SystemImpl_obj::gamepad3,HX_HCSTRING("gamepad3","\x72","\xac","\x9e","\xcb")},
	{hx::fsObject /*::kha::input::Gamepad*/ ,(void *) &SystemImpl_obj::gamepad4,HX_HCSTRING("gamepad4","\x73","\xac","\x9e","\xcb")},
	{hx::fsObject /*::kha::input::Surface*/ ,(void *) &SystemImpl_obj::surface,HX_HCSTRING("surface","\x2d","\x66","\x49","\x5d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &SystemImpl_obj::mouseLockListeners,HX_HCSTRING("mouseLockListeners","\xaf","\xda","\x5c","\x62")},
	{hx::fsInt,(void *) &SystemImpl_obj::mouseX,HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsInt,(void *) &SystemImpl_obj::mouseY,HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &SystemImpl_obj::fullscreenListeners,HX_HCSTRING("fullscreenListeners","\xc4","\x6b","\x7f","\xf5")},
	{hx::fsInt,(void *) &SystemImpl_obj::previousWidth,HX_HCSTRING("previousWidth","\x4f","\xc2","\x56","\xf1")},
	{hx::fsInt,(void *) &SystemImpl_obj::previousHeight,HX_HCSTRING("previousHeight","\x7e","\xbb","\xe2","\xf0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("notifyOfFullscreenChange","\x6b","\x9e","\x48","\xa5"),
	HX_HCSTRING("removeFromFullscreenChange","\xf9","\xd5","\x12","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemImpl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::needs3d,"needs3d");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::framebuffers,"framebuffers");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::keyboard,"keyboard");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::gamepad1,"gamepad1");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::gamepad2,"gamepad2");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::gamepad3,"gamepad3");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::gamepad4,"gamepad4");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::surface,"surface");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::mouseLockListeners,"mouseLockListeners");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::fullscreenListeners,"fullscreenListeners");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::previousWidth,"previousWidth");
	HX_MARK_MEMBER_NAME(SystemImpl_obj::previousHeight,"previousHeight");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::needs3d,"needs3d");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::framebuffers,"framebuffers");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::keyboard,"keyboard");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::gamepad1,"gamepad1");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::gamepad2,"gamepad2");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::gamepad3,"gamepad3");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::gamepad4,"gamepad4");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::surface,"surface");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::mouseLockListeners,"mouseLockListeners");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::fullscreenListeners,"fullscreenListeners");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::previousWidth,"previousWidth");
	HX_VISIT_MEMBER_NAME(SystemImpl_obj::previousHeight,"previousHeight");
};

#endif

hx::Class SystemImpl_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("needs3d","\x6e","\xd5","\x2d","\xaa"),
	HX_HCSTRING("getMouse","\xaf","\x25","\x3c","\x6c"),
	HX_HCSTRING("getKeyboard","\x5d","\x7f","\x1d","\x8e"),
	HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"),
	HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb"),
	HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9"),
	HX_HCSTRING("getVsync","\x5b","\x3d","\x7f","\x9d"),
	HX_HCSTRING("getRefreshRate","\x65","\x35","\xde","\xc7"),
	HX_HCSTRING("getScreenRotation","\x00","\x30","\x14","\x62"),
	HX_HCSTRING("getSystemId","\x60","\x73","\xdd","\x87"),
	HX_HCSTRING("requestShutdown","\x05","\xff","\x38","\x10"),
	HX_HCSTRING("framebuffers","\xe6","\x3a","\xca","\x84"),
	HX_HCSTRING("keyboard","\xa7","\xbc","\x29","\x68"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("gamepad1","\x70","\xac","\x9e","\xcb"),
	HX_HCSTRING("gamepad2","\x71","\xac","\x9e","\xcb"),
	HX_HCSTRING("gamepad3","\x72","\xac","\x9e","\xcb"),
	HX_HCSTRING("gamepad4","\x73","\xac","\x9e","\xcb"),
	HX_HCSTRING("surface","\x2d","\x66","\x49","\x5d"),
	HX_HCSTRING("mouseLockListeners","\xaf","\xda","\x5c","\x62"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("initEx","\xa3","\x5b","\x4c","\x97"),
	HX_HCSTRING("postInit","\x90","\x9b","\xfa","\x03"),
	HX_HCSTRING("loadFinished","\xb8","\x7f","\x77","\x4e"),
	HX_HCSTRING("lockMouse","\x3a","\xd6","\x46","\x47"),
	HX_HCSTRING("unlockMouse","\xc1","\x5c","\xed","\xcc"),
	HX_HCSTRING("canLockMouse","\x0a","\x40","\x67","\xca"),
	HX_HCSTRING("isMouseLocked","\x45","\x89","\x73","\x58"),
	HX_HCSTRING("notifyOfMouseLockChange","\xe0","\xa9","\xee","\x22"),
	HX_HCSTRING("removeFromMouseLockChange","\x12","\x1e","\x2a","\x14"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("pushUp","\xd5","\x06","\x2d","\x72"),
	HX_HCSTRING("pushDown","\x5c","\x2b","\x5f","\x11"),
	HX_HCSTRING("pushLeft","\x01","\x3b","\xa1","\x16"),
	HX_HCSTRING("pushRight","\xa2","\x73","\x7f","\x2d"),
	HX_HCSTRING("releaseUp","\x02","\x10","\xb0","\x93"),
	HX_HCSTRING("releaseDown","\xc9","\x99","\x98","\xe0"),
	HX_HCSTRING("releaseLeft","\x6e","\xa9","\xda","\xe5"),
	HX_HCSTRING("releaseRight","\x95","\xa4","\x86","\xb0"),
	HX_HCSTRING("pushChar","\xd0","\x91","\xb0","\x10"),
	HX_HCSTRING("releaseChar","\x3d","\x00","\xea","\xdf"),
	HX_HCSTRING("pushShift","\x48","\x54","\x3e","\xc0"),
	HX_HCSTRING("releaseShift","\x3b","\x85","\x45","\x43"),
	HX_HCSTRING("pushBackspace","\x05","\x48","\x9c","\xff"),
	HX_HCSTRING("releaseBackspace","\x78","\x6e","\x5a","\x38"),
	HX_HCSTRING("pushTab","\x9b","\x24","\x38","\x75"),
	HX_HCSTRING("releaseTab","\xce","\x22","\x5d","\xa6"),
	HX_HCSTRING("pushEnter","\xde","\xd4","\xa1","\xb4"),
	HX_HCSTRING("releaseEnter","\xd1","\x05","\xa9","\x37"),
	HX_HCSTRING("pushControl","\xa3","\xd0","\x1a","\x29"),
	HX_HCSTRING("releaseControl","\x56","\x64","\x06","\xe1"),
	HX_HCSTRING("pushAlt","\x6f","\xc3","\x29","\x75"),
	HX_HCSTRING("releaseAlt","\xa2","\xc1","\x4e","\xa6"),
	HX_HCSTRING("pushEscape","\xfb","\xa8","\xb9","\x2e"),
	HX_HCSTRING("releaseEscape","\xa8","\x4c","\xfd","\x51"),
	HX_HCSTRING("pushDelete","\xa5","\x25","\xb8","\xbe"),
	HX_HCSTRING("releaseDelete","\x52","\xc9","\xfb","\xe1"),
	HX_HCSTRING("pushBack","\x21","\x0d","\x02","\x10"),
	HX_HCSTRING("releaseBack","\x8e","\x7b","\x3b","\xdf"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),
	HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),
	HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),
	HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7"),
	HX_HCSTRING("gamepad1Axis","\x31","\xed","\x97","\x86"),
	HX_HCSTRING("gamepad1Button","\x82","\x76","\xc0","\x01"),
	HX_HCSTRING("gamepad2Axis","\xb2","\x81","\xfe","\x19"),
	HX_HCSTRING("gamepad2Button","\x43","\xed","\x55","\x2b"),
	HX_HCSTRING("gamepad3Axis","\x33","\x16","\x65","\xad"),
	HX_HCSTRING("gamepad3Button","\x04","\x64","\xeb","\x54"),
	HX_HCSTRING("gamepad4Axis","\xb4","\xaa","\xcb","\x40"),
	HX_HCSTRING("gamepad4Button","\xc5","\xda","\x80","\x7e"),
	HX_HCSTRING("touchStart","\x23","\x58","\x9c","\x7d"),
	HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00"),
	HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d"),
	HX_HCSTRING("foreground","\xc3","\x18","\xef","\x10"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("initKore","\x87","\xa1","\xc5","\x4b"),
	HX_HCSTRING("translatePosition","\x17","\x32","\xe9","\x09"),
	HX_HCSTRING("translateDisplay","\x94","\x20","\x33","\xc8"),
	HX_HCSTRING("translateWindowMode","\x61","\x94","\xff","\x97"),
	HX_HCSTRING("translateDepthBufferFormat","\xcc","\x86","\xbd","\x83"),
	HX_HCSTRING("translateStencilBufferFormat","\xc5","\xbd","\x46","\xa2"),
	HX_HCSTRING("translateTextureFormat","\x44","\xe2","\x8b","\x2d"),
	HX_HCSTRING("initWindow","\x20","\xef","\xd1","\x56"),
	HX_HCSTRING("fullscreenListeners","\xc4","\x6b","\x7f","\xf5"),
	HX_HCSTRING("previousWidth","\x4f","\xc2","\x56","\xf1"),
	HX_HCSTRING("previousHeight","\x7e","\xbb","\xe2","\xf0"),
	HX_HCSTRING("canSwitchFullscreen","\x7f","\x71","\x5d","\x32"),
	HX_HCSTRING("isFullscreen","\xc5","\x62","\xd3","\xcb"),
	HX_HCSTRING("requestFullscreen","\x6a","\xf6","\xf9","\x05"),
	HX_HCSTRING("exitFullscreen","\xf9","\x86","\x4e","\xcd"),
	HX_HCSTRING("changeResolution","\xbc","\xf6","\xfa","\xf9"),
	HX_HCSTRING("setKeepScreenOn","\x12","\x20","\xde","\x37"),
	::String(null()) };

void SystemImpl_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.SystemImpl","\x99","\x8d","\x13","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SystemImpl_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SystemImpl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void SystemImpl_obj::__boot()
{
	needs3d= false;
	framebuffers= Array_obj< ::Dynamic >::__new();
	fullscreenListeners= Dynamic( Array_obj<Dynamic>::__new() );
	previousWidth= (int)0;
	previousHeight= (int)0;
}

} // end namespace kha
