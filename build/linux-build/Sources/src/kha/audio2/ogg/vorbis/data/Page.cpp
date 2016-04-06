#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Page
#include <kha/audio2/ogg/vorbis/data/Page.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError
#include <kha/audio2/ogg/vorbis/data/ReaderError.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#include <kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

Void Page_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Page","new",0xa090c191,"kha.audio2.ogg.vorbis.data.Page.new","kha/audio2/ogg/vorbis/data/Page.hx",14,0x2c32c11e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Page_obj::~Page_obj() { }

Dynamic Page_obj::__CreateEmpty() { return  new Page_obj; }
hx::ObjectPtr< Page_obj > Page_obj::__new()
{  hx::ObjectPtr< Page_obj > _result_ = new Page_obj();
	_result_->__construct();
	return _result_;}

Dynamic Page_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Page_obj > _result_ = new Page_obj();
	_result_->__construct();
	return _result_;}

::kha::audio2::ogg::vorbis::data::Page Page_obj::clone( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Page","clone",0x26a372ce,"kha.audio2.ogg.vorbis.data.Page.clone","kha/audio2/ogg/vorbis/data/Page.hx",18,0x2c32c11e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::kha::audio2::ogg::vorbis::data::Page page = ::kha::audio2::ogg::vorbis::data::Page_obj::__new();		HX_STACK_VAR(page,"page");
	HX_STACK_LINE(20)
	int tmp = this->flag;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	page->flag = tmp;
	HX_STACK_LINE(21)
	::kha::audio2::ogg::vorbis::data::Page tmp1 = page;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Page_obj,clone,return )

Void Page_obj::start( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Page","start",0x624bd3d3,"kha.audio2.ogg.vorbis.data.Page.start","kha/audio2/ogg/vorbis/data/Page.hx",25,0x2c32c11e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(decodeState,"decodeState")
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			int tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				hx::AddEq(decodeState->inputPosition,(int)1);
				HX_STACK_LINE(26)
				tmp = decodeState->input->readByte();
			}
			HX_STACK_LINE(26)
			bool tmp1 = (tmp != (int)79);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			if ((tmp3)){
				HX_STACK_LINE(26)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				{
					HX_STACK_LINE(26)
					hx::AddEq(decodeState->inputPosition,(int)1);
					HX_STACK_LINE(26)
					int tmp6 = decodeState->input->readByte();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(26)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(26)
					tmp5 = tmp7;
				}
				HX_STACK_LINE(26)
				tmp4 = (tmp5 != (int)103);
			}
			else{
				HX_STACK_LINE(26)
				tmp4 = true;
			}
			HX_STACK_LINE(26)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(26)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(26)
			if ((tmp6)){
				HX_STACK_LINE(26)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(26)
				{
					HX_STACK_LINE(26)
					hx::AddEq(decodeState->inputPosition,(int)1);
					HX_STACK_LINE(26)
					int tmp9 = decodeState->input->readByte();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(26)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(26)
					tmp8 = tmp10;
				}
				HX_STACK_LINE(26)
				tmp7 = (tmp8 != (int)103);
			}
			else{
				HX_STACK_LINE(26)
				tmp7 = true;
			}
			HX_STACK_LINE(26)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(26)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(26)
			if ((tmp8)){
				HX_STACK_LINE(26)
				int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(26)
				{
					HX_STACK_LINE(26)
					hx::AddEq(decodeState->inputPosition,(int)1);
					HX_STACK_LINE(26)
					int tmp11 = decodeState->input->readByte();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(26)
					tmp10 = tmp11;
				}
				HX_STACK_LINE(26)
				tmp9 = (tmp10 != (int)83);
			}
			else{
				HX_STACK_LINE(26)
				tmp9 = true;
			}
			HX_STACK_LINE(26)
			if ((tmp9)){
				HX_STACK_LINE(26)
				Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),323,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("capturePattern","\x6a","\x1a","\xb8","\x20"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(26)
				::kha::audio2::ogg::vorbis::data::ReaderError tmp11 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::MISSING_CAPTURE_PATTERN,null(),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(26)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(27)
		::kha::audio2::ogg::vorbis::VorbisDecodeState tmp = decodeState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		this->startWithoutCapturePattern(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Page_obj,start,(void))

Void Page_obj::startWithoutCapturePattern( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Page","startWithoutCapturePattern",0xbc8317ff,"kha.audio2.ogg.vorbis.data.Page.startWithoutCapturePattern","kha/audio2/ogg/vorbis/data/Page.hx",31,0x2c32c11e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(decodeState,"decodeState")
		HX_STACK_LINE(32)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			hx::AddEq(decodeState->inputPosition,(int)1);
			HX_STACK_LINE(32)
			tmp = decodeState->input->readByte();
		}
		HX_STACK_LINE(32)
		int version = tmp;		HX_STACK_VAR(version,"version");
		HX_STACK_LINE(33)
		bool tmp1 = (version != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(34)
			::String tmp2 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + version);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Page.hx","\xaf","\xab","\x7e","\x58"),34,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Page","\x1f","\xa5","\xb2","\xc9"),HX_HCSTRING("startWithoutCapturePattern","\x10","\x03","\x9b","\x8e"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp4 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_STREAM_STRUCTURE_VERSION,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(37)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			hx::AddEq(decodeState->inputPosition,(int)1);
			HX_STACK_LINE(37)
			tmp2 = decodeState->input->readByte();
		}
		HX_STACK_LINE(37)
		this->flag = tmp2;
		HX_STACK_LINE(38)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			hx::AddEq(decodeState->inputPosition,(int)4);
			HX_STACK_LINE(38)
			tmp3 = decodeState->input->readInt32();
		}
		HX_STACK_LINE(38)
		int loc0 = tmp3;		HX_STACK_VAR(loc0,"loc0");
		HX_STACK_LINE(39)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			hx::AddEq(decodeState->inputPosition,(int)4);
			HX_STACK_LINE(39)
			tmp4 = decodeState->input->readInt32();
		}
		HX_STACK_LINE(39)
		int loc1 = tmp4;		HX_STACK_VAR(loc1,"loc1");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			hx::AddEq(decodeState->inputPosition,(int)4);
			HX_STACK_LINE(42)
			decodeState->input->readInt32();
		}
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			hx::AddEq(decodeState->inputPosition,(int)4);
			HX_STACK_LINE(46)
			decodeState->input->readInt32();
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			hx::AddEq(decodeState->inputPosition,(int)4);
			HX_STACK_LINE(49)
			decodeState->input->readInt32();
		}
		HX_STACK_LINE(52)
		int tmp5 = loc0;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		int tmp6 = loc1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		decodeState->setup(tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Page_obj,startWithoutCapturePattern,(void))


Page_obj::Page_obj()
{
}

Dynamic Page_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { return flag; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"startWithoutCapturePattern") ) { return startWithoutCapturePattern_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Page_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { flag=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Page_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Page_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Page_obj,flag),HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("startWithoutCapturePattern","\x10","\x03","\x9b","\x8e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Page_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Page_obj::__mClass,"__mClass");
};

#endif

hx::Class Page_obj::__mClass;

void Page_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Page","\x1f","\xa5","\xb2","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Page_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Page_obj >;
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

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
