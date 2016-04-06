#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_SystemImpl
#include <kha/SystemImpl.h>
#endif
#ifndef INCLUDED_kha_input_Mouse
#include <kha/input/Mouse.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
namespace kha{
namespace input{

Void Mouse_obj::__construct()
{
HX_STACK_FRAME("kha.input.Mouse","new",0xc4b103c9,"kha.input.Mouse.new","kha/input/Mouse.hx",158,0x8b3f5089)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(159)
	super::__construct();
	HX_STACK_LINE(160)
	::kha::input::Mouse_obj::instance = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Void Mouse_obj::notify( Dynamic downListener,Dynamic upListener,Dynamic moveListener,Dynamic wheelListener){
{
		HX_STACK_FRAME("kha.input.Mouse","notify",0xc0c4ef00,"kha.input.Mouse.notify","kha/input/Mouse.hx",12,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(downListener,"downListener")
		HX_STACK_ARG(upListener,"upListener")
		HX_STACK_ARG(moveListener,"moveListener")
		HX_STACK_ARG(wheelListener,"wheelListener")
		HX_STACK_LINE(13)
		Dynamic tmp = downListener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13)
		Dynamic tmp1 = upListener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13)
		Dynamic tmp2 = moveListener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13)
		Dynamic tmp3 = wheelListener;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13)
		this->notifyWindowed((int)0,tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Mouse_obj,notify,(void))

Void Mouse_obj::remove( Dynamic downListener,Dynamic upListener,Dynamic moveListener,Dynamic wheelListener){
{
		HX_STACK_FRAME("kha.input.Mouse","remove",0x9394b07b,"kha.input.Mouse.remove","kha/input/Mouse.hx",16,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(downListener,"downListener")
		HX_STACK_ARG(upListener,"upListener")
		HX_STACK_ARG(moveListener,"moveListener")
		HX_STACK_ARG(wheelListener,"wheelListener")
		HX_STACK_LINE(17)
		Dynamic tmp = downListener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		Dynamic tmp1 = upListener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		Dynamic tmp2 = moveListener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		Dynamic tmp3 = wheelListener;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		this->removeWindowed((int)0,tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Mouse_obj,remove,(void))

Void Mouse_obj::notifyWindowed( int windowId,Dynamic downListener,Dynamic upListener,Dynamic moveListener,Dynamic wheelListener){
{
		HX_STACK_FRAME("kha.input.Mouse","notifyWindowed",0xdd4b736f,"kha.input.Mouse.notifyWindowed","kha/input/Mouse.hx",20,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(windowId,"windowId")
		HX_STACK_ARG(downListener,"downListener")
		HX_STACK_ARG(upListener,"upListener")
		HX_STACK_ARG(moveListener,"moveListener")
		HX_STACK_ARG(wheelListener,"wheelListener")
		HX_STACK_LINE(21)
		bool tmp = (downListener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		if ((tmp)){
			HX_STACK_LINE(22)
			Array< ::Dynamic > tmp1 = this->windowDownListeners;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(22)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(22)
			if ((tmp2)){
				HX_STACK_LINE(23)
				Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(23)
				this->windowDownListeners = tmp3;
			}
			HX_STACK_LINE(26)
			while((true)){
				HX_STACK_LINE(26)
				Array< ::Dynamic > tmp3 = this->windowDownListeners;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(26)
				int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(26)
				int tmp5 = windowId;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(26)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(26)
				if ((tmp7)){
					HX_STACK_LINE(26)
					break;
				}
				HX_STACK_LINE(27)
				Array< ::Dynamic > tmp8 = this->windowDownListeners;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(27)
				cpp::ArrayBase tmp9 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(27)
				tmp8->push(tmp9);
			}
			HX_STACK_LINE(30)
			Array< ::Dynamic > tmp3 = this->windowDownListeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			int tmp4 = windowId;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(30)
			cpp::ArrayBase tmp5 = tmp3->__get(tmp4).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(30)
			Dynamic tmp6 = downListener;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			tmp5->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		}
		HX_STACK_LINE(33)
		bool tmp1 = (upListener != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(34)
			Array< ::Dynamic > tmp2 = this->windowUpListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			if ((tmp3)){
				HX_STACK_LINE(35)
				Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				this->windowUpListeners = tmp4;
			}
			HX_STACK_LINE(38)
			while((true)){
				HX_STACK_LINE(38)
				Array< ::Dynamic > tmp4 = this->windowUpListeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(38)
				int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(38)
				int tmp6 = windowId;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				bool tmp7 = (tmp5 <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(38)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(38)
				if ((tmp8)){
					HX_STACK_LINE(38)
					break;
				}
				HX_STACK_LINE(39)
				Array< ::Dynamic > tmp9 = this->windowUpListeners;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(39)
				cpp::ArrayBase tmp10 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(39)
				tmp9->push(tmp10);
			}
			HX_STACK_LINE(42)
			Array< ::Dynamic > tmp4 = this->windowUpListeners;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			int tmp5 = windowId;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			cpp::ArrayBase tmp6 = tmp4->__get(tmp5).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			Dynamic tmp7 = upListener;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			tmp6->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
		}
		HX_STACK_LINE(45)
		bool tmp2 = (moveListener != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		if ((tmp2)){
			HX_STACK_LINE(46)
			Array< ::Dynamic > tmp3 = this->windowMoveListeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			if ((tmp4)){
				HX_STACK_LINE(47)
				Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				this->windowMoveListeners = tmp5;
			}
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				Array< ::Dynamic > tmp5 = this->windowMoveListeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(50)
				int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(50)
				int tmp7 = windowId;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				bool tmp8 = (tmp6 <= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(50)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(50)
				if ((tmp9)){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(51)
				Array< ::Dynamic > tmp10 = this->windowMoveListeners;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(51)
				cpp::ArrayBase tmp11 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(51)
				tmp10->push(tmp11);
			}
			HX_STACK_LINE(54)
			Array< ::Dynamic > tmp5 = this->windowMoveListeners;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			int tmp6 = windowId;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			cpp::ArrayBase tmp7 = tmp5->__get(tmp6).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			Dynamic tmp8 = moveListener;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			tmp7->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
		}
		HX_STACK_LINE(57)
		bool tmp3 = (wheelListener != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		if ((tmp3)){
			HX_STACK_LINE(58)
			Array< ::Dynamic > tmp4 = this->windowWheelListeners;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			if ((tmp5)){
				HX_STACK_LINE(59)
				Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				this->windowWheelListeners = tmp6;
			}
			HX_STACK_LINE(62)
			while((true)){
				HX_STACK_LINE(62)
				Array< ::Dynamic > tmp6 = this->windowWheelListeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(62)
				int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				int tmp8 = windowId;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				if ((tmp10)){
					HX_STACK_LINE(62)
					break;
				}
				HX_STACK_LINE(63)
				Array< ::Dynamic > tmp11 = this->windowWheelListeners;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(63)
				cpp::ArrayBase tmp12 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(63)
				tmp11->push(tmp12);
			}
			HX_STACK_LINE(66)
			Array< ::Dynamic > tmp6 = this->windowWheelListeners;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			int tmp7 = windowId;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(66)
			cpp::ArrayBase tmp8 = tmp6->__get(tmp7).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(66)
			Dynamic tmp9 = wheelListener;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			tmp8->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Mouse_obj,notifyWindowed,(void))

Void Mouse_obj::removeWindowed( int windowId,Dynamic downListener,Dynamic upListener,Dynamic moveListener,Dynamic wheelListener){
{
		HX_STACK_FRAME("kha.input.Mouse","removeWindowed",0xf141a7ea,"kha.input.Mouse.removeWindowed","kha/input/Mouse.hx",70,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(windowId,"windowId")
		HX_STACK_ARG(downListener,"downListener")
		HX_STACK_ARG(upListener,"upListener")
		HX_STACK_ARG(moveListener,"moveListener")
		HX_STACK_ARG(wheelListener,"wheelListener")
		HX_STACK_LINE(71)
		bool tmp = (downListener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		if ((tmp)){
			HX_STACK_LINE(72)
			Array< ::Dynamic > tmp1 = this->windowDownListeners;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			if ((tmp2)){
				HX_STACK_LINE(73)
				int tmp3 = windowId;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				Array< ::Dynamic > tmp4 = this->windowDownListeners;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				if ((tmp6)){
					HX_STACK_LINE(74)
					Array< ::Dynamic > tmp7 = this->windowDownListeners;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(74)
					int tmp8 = windowId;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(74)
					cpp::ArrayBase tmp9 = tmp7->__get(tmp8).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(74)
					Dynamic tmp10 = downListener;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(74)
					tmp9->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp10);
				}
				else{
					HX_STACK_LINE(76)
					::String tmp7 = (HX_HCSTRING("no downListeners for window \"","\xab","\x54","\x8f","\x21") + windowId);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(76)
					::String tmp8 = (tmp7 + HX_HCSTRING("\" are registered","\x0c","\x2e","\x32","\xe8"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(76)
					Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Mouse.hx","\xd9","\x8d","\xb6","\x7d"),76,HX_HCSTRING("kha.input.Mouse","\x57","\x6b","\x87","\x5e"),HX_HCSTRING("removeWindowed","\xb3","\x04","\x24","\x48"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(76)
					::haxe::Log_obj::trace(tmp8,tmp9);
				}
			}
			else{
				HX_STACK_LINE(79)
				Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Mouse.hx","\xd9","\x8d","\xb6","\x7d"),79,HX_HCSTRING("kha.input.Mouse","\x57","\x6b","\x87","\x5e"),HX_HCSTRING("removeWindowed","\xb3","\x04","\x24","\x48"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(79)
				::haxe::Log_obj::trace(HX_HCSTRING("no downListeners were ever registered","\x27","\x5b","\xf0","\x02"),tmp3);
			}
		}
		HX_STACK_LINE(83)
		bool tmp1 = (upListener != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		if ((tmp1)){
			HX_STACK_LINE(84)
			Array< ::Dynamic > tmp2 = this->windowUpListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			if ((tmp3)){
				HX_STACK_LINE(85)
				int tmp4 = windowId;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(85)
				Array< ::Dynamic > tmp5 = this->windowUpListeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(85)
				int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(85)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(85)
				if ((tmp7)){
					HX_STACK_LINE(86)
					Array< ::Dynamic > tmp8 = this->windowUpListeners;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(86)
					int tmp9 = windowId;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(86)
					cpp::ArrayBase tmp10 = tmp8->__get(tmp9).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(86)
					Dynamic tmp11 = upListener;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(86)
					tmp10->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp11);
				}
				else{
					HX_STACK_LINE(88)
					::String tmp8 = (HX_HCSTRING("no upListeners for window \"","\xa4","\x97","\x3e","\xe5") + windowId);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(88)
					::String tmp9 = (tmp8 + HX_HCSTRING("\" are registered","\x0c","\x2e","\x32","\xe8"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(88)
					Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Mouse.hx","\xd9","\x8d","\xb6","\x7d"),88,HX_HCSTRING("kha.input.Mouse","\x57","\x6b","\x87","\x5e"),HX_HCSTRING("removeWindowed","\xb3","\x04","\x24","\x48"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(88)
					::haxe::Log_obj::trace(tmp9,tmp10);
				}
			}
			else{
				HX_STACK_LINE(91)
				Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Mouse.hx","\xd9","\x8d","\xb6","\x7d"),91,HX_HCSTRING("kha.input.Mouse","\x57","\x6b","\x87","\x5e"),HX_HCSTRING("removeWindowed","\xb3","\x04","\x24","\x48"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(91)
				::haxe::Log_obj::trace(HX_HCSTRING("no upListeners were ever registered","\x20","\xbf","\x80","\xf7"),tmp4);
			}
		}
		HX_STACK_LINE(95)
		bool tmp2 = (moveListener != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		if ((tmp2)){
			HX_STACK_LINE(96)
			Array< ::Dynamic > tmp3 = this->windowMoveListeners;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			if ((tmp4)){
				HX_STACK_LINE(97)
				int tmp5 = windowId;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(97)
				Array< ::Dynamic > tmp6 = this->windowMoveListeners;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(97)
				int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(97)
				bool tmp8 = (tmp5 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(97)
				if ((tmp8)){
					HX_STACK_LINE(98)
					Array< ::Dynamic > tmp9 = this->windowMoveListeners;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(98)
					int tmp10 = windowId;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(98)
					cpp::ArrayBase tmp11 = tmp9->__get(tmp10).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(98)
					Dynamic tmp12 = moveListener;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(98)
					tmp11->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp12);
				}
				else{
					HX_STACK_LINE(100)
					::String tmp9 = (HX_HCSTRING("no moveListeners for window \"","\x9a","\xfa","\x38","\xbb") + windowId);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(100)
					::String tmp10 = (tmp9 + HX_HCSTRING("\" are registered","\x0c","\x2e","\x32","\xe8"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(100)
					Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Mouse.hx","\xd9","\x8d","\xb6","\x7d"),100,HX_HCSTRING("kha.input.Mouse","\x57","\x6b","\x87","\x5e"),HX_HCSTRING("removeWindowed","\xb3","\x04","\x24","\x48"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(100)
					::haxe::Log_obj::trace(tmp10,tmp11);
				}
			}
			else{
				HX_STACK_LINE(103)
				Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Mouse.hx","\xd9","\x8d","\xb6","\x7d"),103,HX_HCSTRING("kha.input.Mouse","\x57","\x6b","\x87","\x5e"),HX_HCSTRING("removeWindowed","\xb3","\x04","\x24","\x48"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(103)
				::haxe::Log_obj::trace(HX_HCSTRING("no moveListeners were ever registered","\x16","\x08","\xa8","\x75"),tmp5);
			}
		}
		HX_STACK_LINE(107)
		bool tmp3 = (wheelListener != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		if ((tmp3)){
			HX_STACK_LINE(108)
			Array< ::Dynamic > tmp4 = this->windowWheelListeners;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			if ((tmp5)){
				HX_STACK_LINE(109)
				int tmp6 = windowId;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(109)
				Array< ::Dynamic > tmp7 = this->windowWheelListeners;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(109)
				int tmp8 = tmp7->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(109)
				bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(109)
				if ((tmp9)){
					HX_STACK_LINE(110)
					Array< ::Dynamic > tmp10 = this->windowWheelListeners;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(110)
					int tmp11 = windowId;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(110)
					cpp::ArrayBase tmp12 = tmp10->__get(tmp11).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(110)
					Dynamic tmp13 = wheelListener;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(110)
					tmp12->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp13);
				}
				else{
					HX_STACK_LINE(112)
					::String tmp10 = (HX_HCSTRING("no wheelListeners for window \"","\xc6","\x3b","\x5b","\xbf") + windowId);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(112)
					::String tmp11 = (tmp10 + HX_HCSTRING("\" are registered","\x0c","\x2e","\x32","\xe8"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(112)
					Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Mouse.hx","\xd9","\x8d","\xb6","\x7d"),112,HX_HCSTRING("kha.input.Mouse","\x57","\x6b","\x87","\x5e"),HX_HCSTRING("removeWindowed","\xb3","\x04","\x24","\x48"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(112)
					::haxe::Log_obj::trace(tmp11,tmp12);
				}
			}
			else{
				HX_STACK_LINE(115)
				Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Mouse.hx","\xd9","\x8d","\xb6","\x7d"),115,HX_HCSTRING("kha.input.Mouse","\x57","\x6b","\x87","\x5e"),HX_HCSTRING("removeWindowed","\xb3","\x04","\x24","\x48"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(115)
				::haxe::Log_obj::trace(HX_HCSTRING("no wheelListeners were ever registered","\x42","\x55","\xf1","\xf8"),tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Mouse_obj,removeWindowed,(void))

Void Mouse_obj::lock( ){
{
		HX_STACK_FRAME("kha.input.Mouse","lock",0x54e76462,"kha.input.Mouse.lock","kha/input/Mouse.hx",120,0x8b3f5089)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,lock,(void))

Void Mouse_obj::unlock( ){
{
		HX_STACK_FRAME("kha.input.Mouse","unlock",0xf498b6fb,"kha.input.Mouse.unlock","kha/input/Mouse.hx",124,0x8b3f5089)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,unlock,(void))

bool Mouse_obj::canLock( ){
	HX_STACK_FRAME("kha.input.Mouse","canLock",0x01952004,"kha.input.Mouse.canLock","kha/input/Mouse.hx",129,0x8b3f5089)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,canLock,return )

bool Mouse_obj::isLocked( ){
	HX_STACK_FRAME("kha.input.Mouse","isLocked",0x2b93708b,"kha.input.Mouse.isLocked","kha/input/Mouse.hx",133,0x8b3f5089)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,isLocked,return )

Void Mouse_obj::notifyOnLockChange( Dynamic func,Dynamic error){
{
		HX_STACK_FRAME("kha.input.Mouse","notifyOnLockChange",0x2e5e40da,"kha.input.Mouse.notifyOnLockChange","kha/input/Mouse.hx",136,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(error,"error")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mouse_obj,notifyOnLockChange,(void))

Void Mouse_obj::removeFromLockChange( Dynamic func,Dynamic error){
{
		HX_STACK_FRAME("kha.input.Mouse","removeFromLockChange",0x65e93ba0,"kha.input.Mouse.removeFromLockChange","kha/input/Mouse.hx",140,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(error,"error")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mouse_obj,removeFromLockChange,(void))

Void Mouse_obj::hideSystemCursor( ){
{
		HX_STACK_FRAME("kha.input.Mouse","hideSystemCursor",0xe7b1b1fe,"kha.input.Mouse.hideSystemCursor","kha/input/Mouse.hx",144,0x8b3f5089)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hideSystemCursor,(void))

Void Mouse_obj::showSystemCursor( ){
{
		HX_STACK_FRAME("kha.input.Mouse","showSystemCursor",0x26c33eb9,"kha.input.Mouse.showSystemCursor","kha/input/Mouse.hx",148,0x8b3f5089)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,showSystemCursor,(void))

Void Mouse_obj::sendDownEvent( int windowId,int button,int x,int y){
{
		HX_STACK_FRAME("kha.input.Mouse","sendDownEvent",0xd589f699,"kha.input.Mouse.sendDownEvent","kha/input/Mouse.hx",164,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(windowId,"windowId")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(165)
		Array< ::Dynamic > tmp = this->windowDownListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		if ((tmp1)){
			HX_STACK_LINE(166)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(166)
			Array< ::Dynamic > tmp2 = this->windowDownListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			int tmp3 = windowId;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			cpp::ArrayBase tmp4 = tmp2->__get(tmp3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			cpp::ArrayBase _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(166)
			while((true)){
				HX_STACK_LINE(166)
				bool tmp5 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(166)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(166)
				if ((tmp6)){
					HX_STACK_LINE(166)
					break;
				}
				HX_STACK_LINE(166)
				Dynamic tmp7 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				Dynamic listener = tmp7;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(166)
				++(_g);
				HX_STACK_LINE(167)
				int tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(167)
				int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(167)
				int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(167)
				listener(tmp8,tmp9,tmp10).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Mouse_obj,sendDownEvent,(void))

Void Mouse_obj::sendUpEvent( int windowId,int button,int x,int y){
{
		HX_STACK_FRAME("kha.input.Mouse","sendUpEvent",0xe2927fc0,"kha.input.Mouse.sendUpEvent","kha/input/Mouse.hx",173,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(windowId,"windowId")
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(174)
		Array< ::Dynamic > tmp = this->windowUpListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		if ((tmp1)){
			HX_STACK_LINE(175)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(175)
			Array< ::Dynamic > tmp2 = this->windowUpListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			int tmp3 = windowId;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			cpp::ArrayBase tmp4 = tmp2->__get(tmp3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			cpp::ArrayBase _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(175)
			while((true)){
				HX_STACK_LINE(175)
				bool tmp5 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(175)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(175)
				if ((tmp6)){
					HX_STACK_LINE(175)
					break;
				}
				HX_STACK_LINE(175)
				Dynamic tmp7 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(175)
				Dynamic listener = tmp7;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(175)
				++(_g);
				HX_STACK_LINE(176)
				int tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(176)
				listener(tmp8,tmp9,tmp10).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Mouse_obj,sendUpEvent,(void))

Void Mouse_obj::sendMoveEvent( int windowId,int x,int y,int movementX,int movementY){
{
		HX_STACK_FRAME("kha.input.Mouse","sendMoveEvent",0x7d3af18a,"kha.input.Mouse.sendMoveEvent","kha/input/Mouse.hx",182,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(windowId,"windowId")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(movementX,"movementX")
		HX_STACK_ARG(movementY,"movementY")
		HX_STACK_LINE(183)
		Array< ::Dynamic > tmp = this->windowMoveListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		if ((tmp1)){
			HX_STACK_LINE(184)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			Array< ::Dynamic > tmp2 = this->windowMoveListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			int tmp3 = windowId;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			cpp::ArrayBase tmp4 = tmp2->__get(tmp3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			cpp::ArrayBase _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				bool tmp5 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(184)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(184)
				if ((tmp6)){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				Dynamic tmp7 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(184)
				Dynamic listener = tmp7;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(184)
				++(_g);
				HX_STACK_LINE(185)
				int tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				int tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				int tmp10 = movementX;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(185)
				int tmp11 = movementY;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(185)
				listener(tmp8,tmp9,tmp10,tmp11).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Mouse_obj,sendMoveEvent,(void))

Void Mouse_obj::sendWheelEvent( int windowId,int delta){
{
		HX_STACK_FRAME("kha.input.Mouse","sendWheelEvent",0x74cc101e,"kha.input.Mouse.sendWheelEvent","kha/input/Mouse.hx",191,0x8b3f5089)
		HX_STACK_THIS(this)
		HX_STACK_ARG(windowId,"windowId")
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(192)
		Array< ::Dynamic > tmp = this->windowWheelListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		if ((tmp1)){
			HX_STACK_LINE(193)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			Array< ::Dynamic > tmp2 = this->windowWheelListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			int tmp3 = windowId;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			cpp::ArrayBase tmp4 = tmp2->__get(tmp3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			cpp::ArrayBase _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			while((true)){
				HX_STACK_LINE(193)
				bool tmp5 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(193)
				if ((tmp6)){
					HX_STACK_LINE(193)
					break;
				}
				HX_STACK_LINE(193)
				Dynamic tmp7 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(193)
				Dynamic listener = tmp7;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(193)
				++(_g);
				HX_STACK_LINE(194)
				int tmp8 = delta;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				listener(tmp8).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mouse_obj,sendWheelEvent,(void))

Void Mouse_obj::_receive( int offset,::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("kha.input.Mouse","_receive",0xdd738b5b,"kha.input.Mouse._receive","kha/network/ControllerBuilder.hx",263,0x77f946ab)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(bytes,"bytes")
	}
return null();
}


::kha::input::Mouse Mouse_obj::get( hx::Null< int >  __o_num){
int num = __o_num.Default(0);
	HX_STACK_FRAME("kha.input.Mouse","get",0xc4abb3ff,"kha.input.Mouse.get","kha/input/Mouse.hx",8,0x8b3f5089)
	HX_STACK_ARG(num,"num")
{
		HX_STACK_LINE(9)
		int tmp = num;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9)
		::kha::input::Mouse tmp1 = ::kha::SystemImpl_obj::getMouse(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,get,return )

::kha::input::Mouse Mouse_obj::instance;


Mouse_obj::Mouse_obj()
{
}

void Mouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mouse);
	HX_MARK_MEMBER_NAME(windowDownListeners,"windowDownListeners");
	HX_MARK_MEMBER_NAME(windowUpListeners,"windowUpListeners");
	HX_MARK_MEMBER_NAME(windowMoveListeners,"windowMoveListeners");
	HX_MARK_MEMBER_NAME(windowWheelListeners,"windowWheelListeners");
	HX_MARK_END_CLASS();
}

void Mouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(windowDownListeners,"windowDownListeners");
	HX_VISIT_MEMBER_NAME(windowUpListeners,"windowUpListeners");
	HX_VISIT_MEMBER_NAME(windowMoveListeners,"windowMoveListeners");
	HX_VISIT_MEMBER_NAME(windowWheelListeners,"windowWheelListeners");
}

Dynamic Mouse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return notify_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canLock") ) { return canLock_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isLocked") ) { return isLocked_dyn(); }
		if (HX_FIELD_EQ(inName,"_receive") ) { return _receive_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sendUpEvent") ) { return sendUpEvent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sendDownEvent") ) { return sendDownEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"sendMoveEvent") ) { return sendMoveEvent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"notifyWindowed") ) { return notifyWindowed_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindowed") ) { return removeWindowed_dyn(); }
		if (HX_FIELD_EQ(inName,"sendWheelEvent") ) { return sendWheelEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hideSystemCursor") ) { return hideSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"showSystemCursor") ) { return showSystemCursor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"windowUpListeners") ) { return windowUpListeners; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"notifyOnLockChange") ) { return notifyOnLockChange_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"windowDownListeners") ) { return windowDownListeners; }
		if (HX_FIELD_EQ(inName,"windowMoveListeners") ) { return windowMoveListeners; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeFromLockChange") ) { return removeFromLockChange_dyn(); }
		if (HX_FIELD_EQ(inName,"windowWheelListeners") ) { return windowWheelListeners; }
	}
	return super::__Field(inName,inCallProp);
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
	}
	return false;
}

Dynamic Mouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"windowUpListeners") ) { windowUpListeners=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"windowDownListeners") ) { windowDownListeners=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowMoveListeners") ) { windowMoveListeners=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"windowWheelListeners") ) { windowWheelListeners=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Mouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::kha::input::Mouse >(); return true; }
	}
	return false;
}

void Mouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("windowDownListeners","\xad","\x36","\x38","\x35"));
	outFields->push(HX_HCSTRING("windowUpListeners","\x94","\x65","\x2c","\xf0"));
	outFields->push(HX_HCSTRING("windowMoveListeners","\x1e","\xfe","\x7f","\x65"));
	outFields->push(HX_HCSTRING("windowWheelListeners","\x74","\x51","\x5a","\x54"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Mouse_obj,windowDownListeners),HX_HCSTRING("windowDownListeners","\xad","\x36","\x38","\x35")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Mouse_obj,windowUpListeners),HX_HCSTRING("windowUpListeners","\x94","\x65","\x2c","\xf0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Mouse_obj,windowMoveListeners),HX_HCSTRING("windowMoveListeners","\x1e","\xfe","\x7f","\x65")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Mouse_obj,windowWheelListeners),HX_HCSTRING("windowWheelListeners","\x74","\x51","\x5a","\x54")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::input::Mouse*/ ,(void *) &Mouse_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("notify","\xc9","\xda","\xb8","\x31"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("notifyWindowed","\x38","\xd0","\x2d","\x34"),
	HX_HCSTRING("removeWindowed","\xb3","\x04","\x24","\x48"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("canLock","\x1b","\x84","\x0f","\x66"),
	HX_HCSTRING("isLocked","\x94","\xa0","\x30","\xb2"),
	HX_HCSTRING("notifyOnLockChange","\x23","\x36","\x29","\x37"),
	HX_HCSTRING("removeFromLockChange","\x29","\xd5","\x52","\x6f"),
	HX_HCSTRING("hideSystemCursor","\x07","\x93","\x7b","\x81"),
	HX_HCSTRING("showSystemCursor","\xc2","\x1f","\x8d","\xc0"),
	HX_HCSTRING("windowDownListeners","\xad","\x36","\x38","\x35"),
	HX_HCSTRING("windowUpListeners","\x94","\x65","\x2c","\xf0"),
	HX_HCSTRING("windowMoveListeners","\x1e","\xfe","\x7f","\x65"),
	HX_HCSTRING("windowWheelListeners","\x74","\x51","\x5a","\x54"),
	HX_HCSTRING("sendDownEvent","\xf0","\x05","\x55","\xf0"),
	HX_HCSTRING("sendUpEvent","\x57","\x3b","\x46","\x5c"),
	HX_HCSTRING("sendMoveEvent","\xe1","\x00","\x06","\x98"),
	HX_HCSTRING("sendWheelEvent","\xe7","\x6c","\xae","\xcb"),
	HX_HCSTRING("_receive","\x64","\xbb","\x10","\x64"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mouse_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mouse_obj::instance,"instance");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null()) };

void Mouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.input.Mouse","\x57","\x6b","\x87","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &Mouse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
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

void Mouse_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",7,0x8b3f5089)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",7,0x8b3f5089)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",7,0x8b3f5089)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("sendDownEvent","\xf0","\x05","\x55","\xf0") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",7,0x8b3f5089)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("sendUpEvent","\x57","\x3b","\x46","\x5c") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",7,0x8b3f5089)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("sendMoveEvent","\xe1","\x00","\x06","\x98") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/input/Mouse.hx",7,0x8b3f5089)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("sendWheelEvent","\xe7","\x6c","\xae","\xcb") , _Function_2_4::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace kha
} // end namespace input
