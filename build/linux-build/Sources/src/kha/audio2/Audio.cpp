#include <hxcpp.h>

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_audio1_AudioChannel
#include <kha/audio1/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio
#include <kha/audio2/Audio.h>
#endif
#ifndef INCLUDED_kha_audio2_Buffer
#include <kha/audio2/Buffer.h>
#endif
namespace kha{
namespace audio2{

Void Audio_obj::__construct()
{
	return null();
}

//Audio_obj::~Audio_obj() { }

Dynamic Audio_obj::__CreateEmpty() { return  new Audio_obj; }
hx::ObjectPtr< Audio_obj > Audio_obj::__new()
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct();
	return _result_;}

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio_obj > _result_ = new Audio_obj();
	_result_->__construct();
	return _result_;}

::kha::audio2::Buffer Audio_obj::buffer;

Void Audio_obj::_init( ){
{
		HX_STACK_FRAME("kha.audio2.Audio","_init",0xded2726f,"kha.audio2.Audio._init","kha/audio2/Audio.hx",9,0xd33fa1b0)
		HX_STACK_LINE(10)
		int tmp = (int)2048;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10)
		int bufferSize = tmp;		HX_STACK_VAR(bufferSize,"bufferSize");
		HX_STACK_LINE(11)
		int tmp1 = (bufferSize * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11)
		::kha::audio2::Buffer tmp2 = ::kha::audio2::Buffer_obj::__new(tmp1,(int)2,(int)44100);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11)
		::kha::audio2::Audio_obj::buffer = tmp2;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,_init,(void))

Void Audio_obj::_callCallback( int samples){
{
		HX_STACK_FRAME("kha.audio2.Audio","_callCallback",0xe4856ae2,"kha.audio2.Audio._callCallback","kha/audio2/Audio.hx",15,0xd33fa1b0)
		HX_STACK_ARG(samples,"samples")
		HX_STACK_LINE(16)
		::kha::audio2::Buffer tmp = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		if ((tmp1)){
			HX_STACK_LINE(16)
			return null();
		}
		HX_STACK_LINE(17)
		Dynamic tmp2 = ::kha::audio2::Audio_obj::audioCallback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		if ((tmp3)){
			HX_STACK_LINE(18)
			int tmp4 = samples;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(18)
			::kha::audio2::Buffer tmp5 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(18)
			::kha::audio2::Audio_obj::audioCallback(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(21)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(21)
			while((true)){
				HX_STACK_LINE(21)
				bool tmp4 = (_g < samples);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(21)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				if ((tmp5)){
					HX_STACK_LINE(21)
					break;
				}
				HX_STACK_LINE(21)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(21)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(22)
				::kha::audio2::Buffer tmp7 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(22)
				::kha::audio2::Buffer tmp8 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(22)
				int tmp9 = tmp8->writeLocation;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(22)
				Float tmp10 = tmp7->data->__unsafe_set(tmp9,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(22)
				tmp10;
				HX_STACK_LINE(23)
				::kha::audio2::Buffer tmp11 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(23)
				hx::AddEq(tmp11->writeLocation,(int)1);
				HX_STACK_LINE(24)
				::kha::audio2::Buffer tmp12 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(24)
				int tmp13 = tmp12->writeLocation;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(24)
				::kha::audio2::Buffer tmp14 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(24)
				int tmp15 = tmp14->size;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(24)
				bool tmp16 = (tmp13 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(24)
				if ((tmp16)){
					HX_STACK_LINE(25)
					::kha::audio2::Buffer tmp17 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(25)
					tmp17->writeLocation = (int)0;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,_callCallback,(void))

Float Audio_obj::_readSample( ){
	HX_STACK_FRAME("kha.audio2.Audio","_readSample",0xa617ccbf,"kha.audio2.Audio._readSample","kha/audio2/Audio.hx",32,0xd33fa1b0)
	HX_STACK_LINE(33)
	::kha::audio2::Buffer tmp = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	if ((tmp1)){
		HX_STACK_LINE(33)
		return (int)0;
	}
	HX_STACK_LINE(34)
	::kha::audio2::Buffer tmp2 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::kha::audio2::Buffer tmp3 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	int tmp4 = tmp3->readLocation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	Float tmp5 = tmp2->data->__unsafe_get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	Float value = tmp5;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(35)
	::kha::audio2::Buffer tmp6 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	++(tmp6->readLocation);
	HX_STACK_LINE(36)
	::kha::audio2::Buffer tmp7 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	int tmp8 = tmp7->readLocation;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(36)
	::kha::audio2::Buffer tmp9 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(36)
	int tmp10 = tmp9->size;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(36)
	bool tmp11 = (tmp8 >= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(36)
	if ((tmp11)){
		HX_STACK_LINE(37)
		::kha::audio2::Buffer tmp12 = ::kha::audio2::Audio_obj::buffer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(37)
		tmp12->readLocation = (int)0;
	}
	HX_STACK_LINE(39)
	Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(39)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,_readSample,return )

Dynamic Audio_obj::audioCallback;

::kha::audio1::AudioChannel Audio_obj::stream( ::kha::Sound sound,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(false);
	HX_STACK_FRAME("kha.audio2.Audio","stream",0x707f0900,"kha.audio2.Audio.stream","kha/audio2/Audio.hx",45,0xd33fa1b0)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(45)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,stream,return )


Audio_obj::Audio_obj()
{
}

bool Audio_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_init") ) { outValue = _init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { outValue = buffer; return true;  }
		if (HX_FIELD_EQ(inName,"stream") ) { outValue = stream_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_readSample") ) { outValue = _readSample_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_callCallback") ) { outValue = _callCallback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"audioCallback") ) { outValue = audioCallback; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::audio2::Buffer*/ ,(void *) &Audio_obj::buffer,HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Audio_obj::audioCallback,HX_HCSTRING("audioCallback","\xbb","\x94","\x3e","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Audio_obj::buffer,"buffer");
	HX_MARK_MEMBER_NAME(Audio_obj::audioCallback,"audioCallback");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Audio_obj::buffer,"buffer");
	HX_VISIT_MEMBER_NAME(Audio_obj::audioCallback,"audioCallback");
};

#endif

hx::Class Audio_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	HX_HCSTRING("_callCallback","\x62","\xcf","\xb7","\x99"),
	HX_HCSTRING("_readSample","\x3f","\x11","\x50","\xe9"),
	HX_HCSTRING("audioCallback","\xbb","\x94","\x3e","\x7f"),
	HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"),
	::String(null()) };

void Audio_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.Audio","\xee","\xdb","\x10","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Audio_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Audio_obj >;
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
