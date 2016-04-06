#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_audio1_AudioChannel
#include <kha/audio1/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_StreamChannel
#include <kha/audio2/StreamChannel.h>
#endif
namespace kha{
namespace audio2{

Void StreamChannel_obj::__construct(::haxe::io::Bytes data,bool loop)
{
HX_STACK_FRAME("kha.audio2.StreamChannel","new",0x8b4239ad,"kha.audio2.StreamChannel.new","kha/audio2/StreamChannel.hx",10,0x97220c83)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(loop,"loop")
{
}
;
	return null();
}

//StreamChannel_obj::~StreamChannel_obj() { }

Dynamic StreamChannel_obj::__CreateEmpty() { return  new StreamChannel_obj; }
hx::ObjectPtr< StreamChannel_obj > StreamChannel_obj::__new(::haxe::io::Bytes data,bool loop)
{  hx::ObjectPtr< StreamChannel_obj > _result_ = new StreamChannel_obj();
	_result_->__construct(data,loop);
	return _result_;}

Dynamic StreamChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StreamChannel_obj > _result_ = new StreamChannel_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *StreamChannel_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::audio1::AudioChannel_obj)) return operator ::kha::audio1::AudioChannel_obj *();
	return super::__ToInterface(inType);
}

StreamChannel_obj::operator ::kha::audio1::AudioChannel_obj *()
	{ return new ::kha::audio1::AudioChannel_delegate_< StreamChannel_obj >(this); }
Void StreamChannel_obj::nextSamples( Array< ::cpp::Float32 > samples,int length,int sampleRate){
{
		HX_STACK_FRAME("kha.audio2.StreamChannel","nextSamples",0xf9af3aa3,"kha.audio2.StreamChannel.nextSamples","kha/audio2/StreamChannel.hx",14,0x97220c83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(samples,"samples")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(sampleRate,"sampleRate")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StreamChannel_obj,nextSamples,(void))

Void StreamChannel_obj::play( ){
{
		HX_STACK_FRAME("kha.audio2.StreamChannel","play",0x5007e807,"kha.audio2.StreamChannel.play","kha/audio2/StreamChannel.hx",18,0x97220c83)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StreamChannel_obj,play,(void))

Void StreamChannel_obj::pause( ){
{
		HX_STACK_FRAME("kha.audio2.StreamChannel","pause",0xafaced83,"kha.audio2.StreamChannel.pause","kha/audio2/StreamChannel.hx",22,0x97220c83)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StreamChannel_obj,pause,(void))

Void StreamChannel_obj::stop( ){
{
		HX_STACK_FRAME("kha.audio2.StreamChannel","stop",0x5209aa15,"kha.audio2.StreamChannel.stop","kha/audio2/StreamChannel.hx",26,0x97220c83)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StreamChannel_obj,stop,(void))

Float StreamChannel_obj::get_length( ){
	HX_STACK_FRAME("kha.audio2.StreamChannel","get_length",0x435c0f02,"kha.audio2.StreamChannel.get_length","kha/audio2/StreamChannel.hx",33,0x97220c83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(StreamChannel_obj,get_length,return )

Float StreamChannel_obj::get_position( ){
	HX_STACK_FRAME("kha.audio2.StreamChannel","get_position",0x88f6d9c5,"kha.audio2.StreamChannel.get_position","kha/audio2/StreamChannel.hx",39,0x97220c83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(StreamChannel_obj,get_position,return )

Float StreamChannel_obj::get_volume( ){
	HX_STACK_FRAME("kha.audio2.StreamChannel","get_volume",0x03a7a3f6,"kha.audio2.StreamChannel.get_volume","kha/audio2/StreamChannel.hx",45,0x97220c83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC0(StreamChannel_obj,get_volume,return )

Float StreamChannel_obj::set_volume( Float value){
	HX_STACK_FRAME("kha.audio2.StreamChannel","set_volume",0x0725426a,"kha.audio2.StreamChannel.set_volume","kha/audio2/StreamChannel.hx",49,0x97220c83)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(49)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(StreamChannel_obj,set_volume,return )

bool StreamChannel_obj::get_finished( ){
	HX_STACK_FRAME("kha.audio2.StreamChannel","get_finished",0x530acc8e,"kha.audio2.StreamChannel.get_finished","kha/audio2/StreamChannel.hx",55,0x97220c83)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(StreamChannel_obj,get_finished,return )


StreamChannel_obj::StreamChannel_obj()
{
}

Dynamic StreamChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return get_volume(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp == hx::paccAlways ? get_position() : position; }
		if (HX_FIELD_EQ(inName,"finished") ) { return inCallProp == hx::paccAlways ? get_finished() : finished; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nextSamples") ) { return nextSamples_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_finished") ) { return get_finished_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StreamChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StreamChannel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void StreamChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(StreamChannel_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(StreamChannel_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsBool,(int)offsetof(StreamChannel_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nextSamples","\x56","\x3c","\x13","\x5a"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("get_volume","\xa3","\x99","\xda","\x4f"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("get_finished","\x7b","\x47","\x28","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StreamChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StreamChannel_obj::__mClass,"__mClass");
};

#endif

hx::Class StreamChannel_obj::__mClass;

void StreamChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.StreamChannel","\x3b","\xdf","\x86","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &StreamChannel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StreamChannel_obj >;
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
