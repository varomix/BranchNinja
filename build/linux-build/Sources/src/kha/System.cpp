#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_ScreenRotation
#include <kha/ScreenRotation.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha_SystemImpl
#include <kha/SystemImpl.h>
#endif
namespace kha{

Void System_obj::__construct()
{
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new()
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > System_obj::renderListeners;

cpp::ArrayBase System_obj::foregroundListeners;

cpp::ArrayBase System_obj::resumeListeners;

cpp::ArrayBase System_obj::pauseListeners;

cpp::ArrayBase System_obj::backgroundListeners;

cpp::ArrayBase System_obj::shutdownListeners;

Void System_obj::init( Dynamic options,Dynamic callback){
{
		HX_STACK_FRAME("kha.System","init",0xb1904d85,"kha.System.init","kha/System.hx",21,0xeb7aee24)
		HX_STACK_ARG(options,"options")
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(22)
		bool tmp = (options->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		if ((tmp)){
			HX_STACK_LINE(22)
			options->__FieldRef(HX_HCSTRING("title","\x98","\x15","\x3b","\x10")) = HX_HCSTRING("Kha","\x04","\x44","\x39","\x00");
		}
		HX_STACK_LINE(23)
		bool tmp1 = (options->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		if ((tmp1)){
			HX_STACK_LINE(23)
			options->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = (int)800;
		}
		HX_STACK_LINE(24)
		bool tmp2 = (options->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		if ((tmp2)){
			HX_STACK_LINE(24)
			options->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = (int)600;
		}
		HX_STACK_LINE(25)
		bool tmp3 = (options->__Field(HX_HCSTRING("samplesPerPixel","\x92","\x52","\x4f","\x57"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		if ((tmp3)){
			HX_STACK_LINE(25)
			options->__FieldRef(HX_HCSTRING("samplesPerPixel","\x92","\x52","\x4f","\x57")) = (int)1;
		}
		HX_STACK_LINE(26)
		Dynamic tmp4 = options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		Dynamic tmp5 = callback;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		::kha::SystemImpl_obj::init(tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,init,(void))

Void System_obj::initEx( ::String title,cpp::ArrayBase options,Dynamic windowCallback,Dynamic callback){
{
		HX_STACK_FRAME("kha.System","initEx",0x7062b558,"kha.System.initEx","kha/System.hx",29,0xeb7aee24)
		HX_STACK_ARG(title,"title")
		HX_STACK_ARG(options,"options")
		HX_STACK_ARG(windowCallback,"windowCallback")
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(30)
		::String tmp = title;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		cpp::ArrayBase tmp1 = options;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		Dynamic tmp2 = windowCallback;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		Dynamic tmp3 = callback;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		::kha::SystemImpl_obj::initEx(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,initEx,(void))

Void System_obj::notifyOnRender( Dynamic listener,hx::Null< int >  __o_id){
int id = __o_id.Default(0);
	HX_STACK_FRAME("kha.System","notifyOnRender",0x8c7d0073,"kha.System.notifyOnRender","kha/System.hx",33,0xeb7aee24)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(id,"id")
{
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			int tmp = id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(34)
			Array< ::Dynamic > tmp1 = ::kha::System_obj::renderListeners;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			bool tmp3 = (tmp >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			if ((tmp4)){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(35)
			Array< ::Dynamic > tmp5 = ::kha::System_obj::renderListeners;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			cpp::ArrayBase tmp6 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			tmp5->push(tmp6);
		}
		HX_STACK_LINE(38)
		Array< ::Dynamic > tmp = ::kha::System_obj::renderListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		cpp::ArrayBase tmp2 = tmp->__get(tmp1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		Dynamic tmp3 = listener;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		tmp2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,notifyOnRender,(void))

Void System_obj::notifyOnApplicationState( Dynamic foregroundListener,Dynamic resumeListener,Dynamic pauseListener,Dynamic backgroundListener,Dynamic shutdownListener){
{
		HX_STACK_FRAME("kha.System","notifyOnApplicationState",0x2a2d33fe,"kha.System.notifyOnApplicationState","kha/System.hx",41,0xeb7aee24)
		HX_STACK_ARG(foregroundListener,"foregroundListener")
		HX_STACK_ARG(resumeListener,"resumeListener")
		HX_STACK_ARG(pauseListener,"pauseListener")
		HX_STACK_ARG(backgroundListener,"backgroundListener")
		HX_STACK_ARG(shutdownListener,"shutdownListener")
		HX_STACK_LINE(42)
		cpp::ArrayBase tmp = ::kha::System_obj::foregroundListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		Dynamic tmp1 = foregroundListener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		tmp->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(43)
		cpp::ArrayBase tmp2 = ::kha::System_obj::resumeListeners;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		Dynamic tmp3 = resumeListener;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		tmp2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(44)
		cpp::ArrayBase tmp4 = ::kha::System_obj::pauseListeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		Dynamic tmp5 = pauseListener;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		tmp4->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		HX_STACK_LINE(45)
		cpp::ArrayBase tmp6 = ::kha::System_obj::backgroundListeners;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		Dynamic tmp7 = backgroundListener;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		tmp6->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
		HX_STACK_LINE(46)
		cpp::ArrayBase tmp8 = ::kha::System_obj::shutdownListeners;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(46)
		Dynamic tmp9 = shutdownListener;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		tmp8->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(System_obj,notifyOnApplicationState,(void))

Void System_obj::render( int id,::kha::Framebuffer framebuffer){
{
		HX_STACK_FRAME("kha.System","render",0xde3fc50b,"kha.System.render","kha/System.hx",49,0xeb7aee24)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(50)
		Array< ::Dynamic > tmp = ::kha::System_obj::renderListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		if ((tmp2)){
			HX_STACK_LINE(51)
			return null();
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			Array< ::Dynamic > tmp3 = ::kha::System_obj::renderListeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			int tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			cpp::ArrayBase tmp5 = tmp3->__get(tmp4).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			cpp::ArrayBase _g1 = tmp5;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(54)
			while((true)){
				HX_STACK_LINE(54)
				bool tmp6 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				if ((tmp7)){
					HX_STACK_LINE(54)
					break;
				}
				HX_STACK_LINE(54)
				Dynamic tmp8 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				Dynamic listener = tmp8;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(54)
				++(_g);
				HX_STACK_LINE(55)
				::kha::Framebuffer tmp9 = framebuffer;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				listener(tmp9).Cast< Void >();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,render,(void))

Void System_obj::foreground( ){
{
		HX_STACK_FRAME("kha.System","foreground",0x0e2cf0f8,"kha.System.foreground","kha/System.hx",60,0xeb7aee24)
		HX_STACK_LINE(60)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		cpp::ArrayBase tmp = ::kha::System_obj::foregroundListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(60)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			if ((tmp2)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(60)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(60)
			++(_g);
			HX_STACK_LINE(61)
			listener().Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,foreground,(void))

Void System_obj::resume( ){
{
		HX_STACK_FRAME("kha.System","resume",0xe19ac362,"kha.System.resume","kha/System.hx",66,0xeb7aee24)
		HX_STACK_LINE(66)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		cpp::ArrayBase tmp = ::kha::System_obj::resumeListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		while((true)){
			HX_STACK_LINE(66)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			if ((tmp2)){
				HX_STACK_LINE(66)
				break;
			}
			HX_STACK_LINE(66)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(66)
			++(_g);
			HX_STACK_LINE(67)
			listener().Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,resume,(void))

Void System_obj::pause( ){
{
		HX_STACK_FRAME("kha.System","pause",0xabf2eae1,"kha.System.pause","kha/System.hx",72,0xeb7aee24)
		HX_STACK_LINE(72)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		cpp::ArrayBase tmp = ::kha::System_obj::pauseListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		while((true)){
			HX_STACK_LINE(72)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			if ((tmp2)){
				HX_STACK_LINE(72)
				break;
			}
			HX_STACK_LINE(72)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(72)
			++(_g);
			HX_STACK_LINE(73)
			listener().Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,pause,(void))

Void System_obj::background( ){
{
		HX_STACK_FRAME("kha.System","background",0x235b6c23,"kha.System.background","kha/System.hx",78,0xeb7aee24)
		HX_STACK_LINE(78)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		cpp::ArrayBase tmp = ::kha::System_obj::backgroundListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		while((true)){
			HX_STACK_LINE(78)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			if ((tmp2)){
				HX_STACK_LINE(78)
				break;
			}
			HX_STACK_LINE(78)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(78)
			++(_g);
			HX_STACK_LINE(79)
			listener().Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,background,(void))

Void System_obj::shutdown( ){
{
		HX_STACK_FRAME("kha.System","shutdown",0x79b3ed8b,"kha.System.shutdown","kha/System.hx",84,0xeb7aee24)
		HX_STACK_LINE(84)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		cpp::ArrayBase tmp = ::kha::System_obj::shutdownListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		cpp::ArrayBase _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		while((true)){
			HX_STACK_LINE(84)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			if ((tmp2)){
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(84)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			Dynamic listener = tmp3;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(84)
			++(_g);
			HX_STACK_LINE(85)
			listener().Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,shutdown,(void))

Float System_obj::time;

Float System_obj::get_time( ){
	HX_STACK_FRAME("kha.System","get_time",0xdb5f788b,"kha.System.get_time","kha/System.hx",91,0xeb7aee24)
	HX_STACK_LINE(92)
	Float tmp = ::kha::SystemImpl_obj::getTime();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_time,return )

int System_obj::windowWidth( hx::Null< int >  __o_windowId){
int windowId = __o_windowId.Default(0);
	HX_STACK_FRAME("kha.System","windowWidth",0x5414a221,"kha.System.windowWidth","kha/System.hx",95,0xeb7aee24)
	HX_STACK_ARG(windowId,"windowId")
{
		HX_STACK_LINE(96)
		int tmp = windowId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		int tmp1 = ::kha::SystemImpl_obj::windowWidth(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,windowWidth,return )

int System_obj::windowHeight( hx::Null< int >  __o_windowId){
int windowId = __o_windowId.Default(0);
	HX_STACK_FRAME("kha.System","windowHeight",0xf448b36c,"kha.System.windowHeight","kha/System.hx",99,0xeb7aee24)
	HX_STACK_ARG(windowId,"windowId")
{
		HX_STACK_LINE(100)
		int tmp = windowId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		int tmp1 = ::kha::SystemImpl_obj::windowHeight(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,windowHeight,return )

::kha::ScreenRotation System_obj::screenRotation;

::kha::ScreenRotation System_obj::get_screenRotation( ){
	HX_STACK_FRAME("kha.System","get_screenRotation",0xea0af6c8,"kha.System.get_screenRotation","kha/System.hx",105,0xeb7aee24)
	HX_STACK_LINE(106)
	::kha::ScreenRotation tmp = ::kha::SystemImpl_obj::getScreenRotation();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_screenRotation,return )

bool System_obj::vsync;

bool System_obj::get_vsync( ){
	HX_STACK_FRAME("kha.System","get_vsync",0x459c6f93,"kha.System.get_vsync","kha/System.hx",111,0xeb7aee24)
	HX_STACK_LINE(112)
	bool tmp = ::kha::SystemImpl_obj::getVsync();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_vsync,return )

int System_obj::refreshRate;

int System_obj::get_refreshRate( ){
	HX_STACK_FRAME("kha.System","get_refreshRate",0x2d9ee19d,"kha.System.get_refreshRate","kha/System.hx",117,0xeb7aee24)
	HX_STACK_LINE(118)
	int tmp = ::kha::SystemImpl_obj::getRefreshRate();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_refreshRate,return )

::String System_obj::systemId;

::String System_obj::get_systemId( ){
	HX_STACK_FRAME("kha.System","get_systemId",0x418f7428,"kha.System.get_systemId","kha/System.hx",123,0xeb7aee24)
	HX_STACK_LINE(124)
	::String tmp = ::kha::SystemImpl_obj::getSystemId();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_systemId,return )

Void System_obj::requestShutdown( ){
{
		HX_STACK_FRAME("kha.System","requestShutdown",0x3cb646b0,"kha.System.requestShutdown","kha/System.hx",128,0xeb7aee24)
		HX_STACK_LINE(128)
		::kha::SystemImpl_obj::requestShutdown();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,requestShutdown,(void))

Void System_obj::changeResolution( int width,int height){
{
		HX_STACK_FRAME("kha.System","changeResolution",0xbb1c64b1,"kha.System.changeResolution","kha/System.hx",131,0xeb7aee24)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(132)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		::kha::SystemImpl_obj::changeResolution(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,changeResolution,(void))

Void System_obj::loadUrl( ::String url){
{
		HX_STACK_FRAME("kha.System","loadUrl",0x235bc994,"kha.System.loadUrl","kha/System.hx",135,0xeb7aee24)
		HX_STACK_ARG(url,"url")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,loadUrl,(void))


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = inCallProp == hx::paccAlways ? get_time() : time; return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vsync") ) { outValue = inCallProp == hx::paccAlways ? get_vsync() : vsync; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"initEx") ) { outValue = initEx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadUrl") ) { outValue = loadUrl_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_time") ) { outValue = get_time_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"systemId") ) { outValue = inCallProp == hx::paccAlways ? get_systemId() : systemId; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_vsync") ) { outValue = get_vsync_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"foreground") ) { outValue = foreground_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"background") ) { outValue = background_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { outValue = windowWidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"refreshRate") ) { outValue = inCallProp == hx::paccAlways ? get_refreshRate() : refreshRate; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { outValue = windowHeight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_systemId") ) { outValue = get_systemId_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pauseListeners") ) { outValue = pauseListeners; return true;  }
		if (HX_FIELD_EQ(inName,"notifyOnRender") ) { outValue = notifyOnRender_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"screenRotation") ) { outValue = inCallProp == hx::paccAlways ? get_screenRotation() : screenRotation; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderListeners") ) { outValue = renderListeners; return true;  }
		if (HX_FIELD_EQ(inName,"resumeListeners") ) { outValue = resumeListeners; return true;  }
		if (HX_FIELD_EQ(inName,"get_refreshRate") ) { outValue = get_refreshRate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"requestShutdown") ) { outValue = requestShutdown_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"changeResolution") ) { outValue = changeResolution_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"shutdownListeners") ) { outValue = shutdownListeners; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_screenRotation") ) { outValue = get_screenRotation_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"foregroundListeners") ) { outValue = foregroundListeners; return true;  }
		if (HX_FIELD_EQ(inName,"backgroundListeners") ) { outValue = backgroundListeners; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"notifyOnApplicationState") ) { outValue = notifyOnApplicationState_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &System_obj::renderListeners,HX_HCSTRING("renderListeners","\x49","\xbf","\x36","\xdc")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &System_obj::foregroundListeners,HX_HCSTRING("foregroundListeners","\x3c","\x7c","\x88","\xe2")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &System_obj::resumeListeners,HX_HCSTRING("resumeListeners","\x12","\xbe","\xda","\xd9")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &System_obj::pauseListeners,HX_HCSTRING("pauseListeners","\xa9","\xdf","\xed","\xfc")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &System_obj::backgroundListeners,HX_HCSTRING("backgroundListeners","\xb1","\xc3","\xb4","\xcb")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &System_obj::shutdownListeners,HX_HCSTRING("shutdownListeners","\x09","\x06","\x98","\xea")},
	{hx::fsFloat,(void *) &System_obj::time,HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsObject /*::kha::ScreenRotation*/ ,(void *) &System_obj::screenRotation,HX_HCSTRING("screenRotation","\xca","\x80","\xa0","\xef")},
	{hx::fsBool,(void *) &System_obj::vsync,HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d")},
	{hx::fsInt,(void *) &System_obj::refreshRate,HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40")},
	{hx::fsString,(void *) &System_obj::systemId,HX_HCSTRING("systemId","\xaa","\xb0","\xe9","\x61")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::renderListeners,"renderListeners");
	HX_MARK_MEMBER_NAME(System_obj::foregroundListeners,"foregroundListeners");
	HX_MARK_MEMBER_NAME(System_obj::resumeListeners,"resumeListeners");
	HX_MARK_MEMBER_NAME(System_obj::pauseListeners,"pauseListeners");
	HX_MARK_MEMBER_NAME(System_obj::backgroundListeners,"backgroundListeners");
	HX_MARK_MEMBER_NAME(System_obj::shutdownListeners,"shutdownListeners");
	HX_MARK_MEMBER_NAME(System_obj::time,"time");
	HX_MARK_MEMBER_NAME(System_obj::screenRotation,"screenRotation");
	HX_MARK_MEMBER_NAME(System_obj::vsync,"vsync");
	HX_MARK_MEMBER_NAME(System_obj::refreshRate,"refreshRate");
	HX_MARK_MEMBER_NAME(System_obj::systemId,"systemId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::renderListeners,"renderListeners");
	HX_VISIT_MEMBER_NAME(System_obj::foregroundListeners,"foregroundListeners");
	HX_VISIT_MEMBER_NAME(System_obj::resumeListeners,"resumeListeners");
	HX_VISIT_MEMBER_NAME(System_obj::pauseListeners,"pauseListeners");
	HX_VISIT_MEMBER_NAME(System_obj::backgroundListeners,"backgroundListeners");
	HX_VISIT_MEMBER_NAME(System_obj::shutdownListeners,"shutdownListeners");
	HX_VISIT_MEMBER_NAME(System_obj::time,"time");
	HX_VISIT_MEMBER_NAME(System_obj::screenRotation,"screenRotation");
	HX_VISIT_MEMBER_NAME(System_obj::vsync,"vsync");
	HX_VISIT_MEMBER_NAME(System_obj::refreshRate,"refreshRate");
	HX_VISIT_MEMBER_NAME(System_obj::systemId,"systemId");
};

#endif

hx::Class System_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("renderListeners","\x49","\xbf","\x36","\xdc"),
	HX_HCSTRING("foregroundListeners","\x3c","\x7c","\x88","\xe2"),
	HX_HCSTRING("resumeListeners","\x12","\xbe","\xda","\xd9"),
	HX_HCSTRING("pauseListeners","\xa9","\xdf","\xed","\xfc"),
	HX_HCSTRING("backgroundListeners","\xb1","\xc3","\xb4","\xcb"),
	HX_HCSTRING("shutdownListeners","\x09","\x06","\x98","\xea"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("initEx","\xa3","\x5b","\x4c","\x97"),
	HX_HCSTRING("notifyOnRender","\xbe","\x69","\x36","\x9b"),
	HX_HCSTRING("notifyOnApplicationState","\x09","\x49","\x4d","\x35"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("foreground","\xc3","\x18","\xef","\x10"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("get_time","\x96","\x87","\xb7","\xcc"),
	HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb"),
	HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9"),
	HX_HCSTRING("screenRotation","\xca","\x80","\xa0","\xef"),
	HX_HCSTRING("get_screenRotation","\x93","\x61","\x3a","\x8b"),
	HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"),
	HX_HCSTRING("get_vsync","\x28","\x8a","\x51","\x81"),
	HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"),
	HX_HCSTRING("get_refreshRate","\xf2","\x99","\x21","\x01"),
	HX_HCSTRING("systemId","\xaa","\xb0","\xe9","\x61"),
	HX_HCSTRING("get_systemId","\xb3","\x64","\x03","\x17"),
	HX_HCSTRING("requestShutdown","\x05","\xff","\x38","\x10"),
	HX_HCSTRING("changeResolution","\xbc","\xf6","\xfa","\xf9"),
	HX_HCSTRING("loadUrl","\xe9","\xa4","\xe3","\x08"),
	::String(null()) };

void System_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.System","\x19","\x62","\xa2","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
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

void System_obj::__boot()
{
	renderListeners= Array_obj< ::Dynamic >::__new();
	foregroundListeners= Dynamic( Array_obj<Dynamic>::__new() );
	resumeListeners= Dynamic( Array_obj<Dynamic>::__new() );
	pauseListeners= Dynamic( Array_obj<Dynamic>::__new() );
	backgroundListeners= Dynamic( Array_obj<Dynamic>::__new() );
	shutdownListeners= Dynamic( Array_obj<Dynamic>::__new() );
}

} // end namespace kha
