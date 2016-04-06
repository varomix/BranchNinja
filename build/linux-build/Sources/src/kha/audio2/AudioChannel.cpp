#include <hxcpp.h>

#ifndef INCLUDED_kha_audio1_AudioChannel
#include <kha/audio1/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_AudioChannel
#include <kha/audio2/AudioChannel.h>
#endif
namespace kha{
namespace audio2{

Void AudioChannel_obj::__construct(bool looping)
{
HX_STACK_FRAME("kha.audio2.AudioChannel","new",0x149245e7,"kha.audio2.AudioChannel.new","kha/audio2/AudioChannel.hx",5,0x9a222549)
HX_STACK_THIS(this)
HX_STACK_ARG(looping,"looping")
{
	HX_STACK_LINE(9)
	this->paused = false;
	HX_STACK_LINE(13)
	this->looping = looping;
	HX_STACK_LINE(14)
	this->myVolume = (int)1;
	HX_STACK_LINE(15)
	this->myPosition = (int)0;
}
;
	return null();
}

//AudioChannel_obj::~AudioChannel_obj() { }

Dynamic AudioChannel_obj::__CreateEmpty() { return  new AudioChannel_obj; }
hx::ObjectPtr< AudioChannel_obj > AudioChannel_obj::__new(bool looping)
{  hx::ObjectPtr< AudioChannel_obj > _result_ = new AudioChannel_obj();
	_result_->__construct(looping);
	return _result_;}

Dynamic AudioChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioChannel_obj > _result_ = new AudioChannel_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *AudioChannel_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::audio1::AudioChannel_obj)) return operator ::kha::audio1::AudioChannel_obj *();
	return super::__ToInterface(inType);
}

AudioChannel_obj::operator ::kha::audio1::AudioChannel_obj *()
	{ return new ::kha::audio1::AudioChannel_delegate_< AudioChannel_obj >(this); }
Void AudioChannel_obj::nextSamples( Array< ::cpp::Float32 > samples,int length,int sampleRate){
{
		HX_STACK_FRAME("kha.audio2.AudioChannel","nextSamples",0x6e9d10dd,"kha.audio2.AudioChannel.nextSamples","kha/audio2/AudioChannel.hx",18,0x9a222549)
		HX_STACK_THIS(this)
		HX_STACK_ARG(samples,"samples")
		HX_STACK_ARG(length,"length")
		HX_STACK_ARG(sampleRate,"sampleRate")
		HX_STACK_LINE(19)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		if ((tmp)){
			HX_STACK_LINE(20)
			{
				HX_STACK_LINE(20)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(20)
				while((true)){
					HX_STACK_LINE(20)
					bool tmp1 = (_g < length);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(20)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(20)
					if ((tmp2)){
						HX_STACK_LINE(20)
						break;
					}
					HX_STACK_LINE(20)
					int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(20)
					int i = tmp3;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(21)
					int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(21)
					::cpp::Float32 tmp5 = samples->__unsafe_set(tmp4,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(21)
					tmp5;
				}
			}
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(26)
			while((true)){
				HX_STACK_LINE(26)
				bool tmp1 = (_g < length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(26)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(26)
				if ((tmp2)){
					HX_STACK_LINE(26)
					break;
				}
				HX_STACK_LINE(26)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(26)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(27)
				int tmp4 = this->myPosition;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(27)
				Array< Float > tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(27)
				int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(27)
				bool tmp7 = (tmp4 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(27)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(27)
				if ((tmp7)){
					HX_STACK_LINE(27)
					tmp8 = this->looping;
				}
				else{
					HX_STACK_LINE(27)
					tmp8 = false;
				}
				HX_STACK_LINE(27)
				if ((tmp8)){
					HX_STACK_LINE(28)
					this->myPosition = (int)0;
				}
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					int tmp9 = this->myPosition;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(30)
					Array< Float > tmp10 = this->data;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(30)
					int tmp11 = tmp10->length;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(30)
					bool tmp12 = (tmp9 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(30)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(30)
					if ((tmp12)){
						HX_STACK_LINE(30)
						Array< Float > tmp14 = this->data;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(30)
						int tmp15 = this->myPosition;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(30)
						Float tmp16 = tmp14->__unsafe_get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(30)
						tmp13 = tmp16;
					}
					else{
						HX_STACK_LINE(30)
						tmp13 = (int)0;
					}
					HX_STACK_LINE(30)
					::cpp::Float32 val = tmp13;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(30)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(30)
					::cpp::Float32 tmp15 = val;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(30)
					::cpp::Float32 tmp16 = samples->__unsafe_set(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(30)
					tmp16;
				}
				HX_STACK_LINE(31)
				++(this->myPosition);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AudioChannel_obj,nextSamples,(void))

Void AudioChannel_obj::play( ){
{
		HX_STACK_FRAME("kha.audio2.AudioChannel","play",0xecc28e8d,"kha.audio2.AudioChannel.play","kha/audio2/AudioChannel.hx",36,0x9a222549)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->paused = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioChannel_obj,play,(void))

Void AudioChannel_obj::pause( ){
{
		HX_STACK_FRAME("kha.audio2.AudioChannel","pause",0x3643fc3d,"kha.audio2.AudioChannel.pause","kha/audio2/AudioChannel.hx",40,0x9a222549)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioChannel_obj,pause,(void))

Void AudioChannel_obj::stop( ){
{
		HX_STACK_FRAME("kha.audio2.AudioChannel","stop",0xeec4509b,"kha.audio2.AudioChannel.stop","kha/audio2/AudioChannel.hx",43,0x9a222549)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		Array< Float > tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		this->myPosition = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioChannel_obj,stop,(void))

Float AudioChannel_obj::get_length( ){
	HX_STACK_FRAME("kha.audio2.AudioChannel","get_length",0xd6d35e08,"kha.audio2.AudioChannel.get_length","kha/audio2/AudioChannel.hx",49,0x9a222549)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	Array< Float > tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Float tmp2 = (Float(tmp1) / Float((int)44100));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioChannel_obj,get_length,return )

Float AudioChannel_obj::get_position( ){
	HX_STACK_FRAME("kha.audio2.AudioChannel","get_position",0x6424764b,"kha.audio2.AudioChannel.get_position","kha/audio2/AudioChannel.hx",55,0x9a222549)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	int tmp = this->myPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	Float tmp1 = (Float(tmp) / Float((int)44100));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioChannel_obj,get_position,return )

Float AudioChannel_obj::get_volume( ){
	HX_STACK_FRAME("kha.audio2.AudioChannel","get_volume",0x971ef2fc,"kha.audio2.AudioChannel.get_volume","kha/audio2/AudioChannel.hx",61,0x9a222549)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Float tmp = this->myVolume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioChannel_obj,get_volume,return )

Float AudioChannel_obj::set_volume( Float value){
	HX_STACK_FRAME("kha.audio2.AudioChannel","set_volume",0x9a9c9170,"kha.audio2.AudioChannel.set_volume","kha/audio2/AudioChannel.hx",65,0x9a222549)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	Float tmp = this->myVolume = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioChannel_obj,set_volume,return )

bool AudioChannel_obj::get_finished( ){
	HX_STACK_FRAME("kha.audio2.AudioChannel","get_finished",0x2e386914,"kha.audio2.AudioChannel.get_finished","kha/audio2/AudioChannel.hx",71,0x9a222549)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	int tmp = this->myPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	Array< Float > tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	bool tmp3 = (tmp >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioChannel_obj,get_finished,return )


AudioChannel_obj::AudioChannel_obj()
{
}

void AudioChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioChannel);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(myVolume,"myVolume");
	HX_MARK_MEMBER_NAME(myPosition,"myPosition");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_END_CLASS();
}

void AudioChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(myVolume,"myVolume");
	HX_VISIT_MEMBER_NAME(myPosition,"myPosition");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(finished,"finished");
}

Dynamic AudioChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return get_volume(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { return looping; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"myVolume") ) { return myVolume; }
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp == hx::paccAlways ? get_position() : position; }
		if (HX_FIELD_EQ(inName,"finished") ) { return inCallProp == hx::paccAlways ? get_finished() : finished; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"myPosition") ) { return myPosition; }
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

Dynamic AudioChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"myVolume") ) { myVolume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"myPosition") ) { myPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AudioChannel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AudioChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("myVolume","\x66","\x56","\x07","\x96"));
	outFields->push(HX_HCSTRING("myPosition","\x35","\x08","\x7c","\x38"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(AudioChannel_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsFloat,(int)offsetof(AudioChannel_obj,myVolume),HX_HCSTRING("myVolume","\x66","\x56","\x07","\x96")},
	{hx::fsInt,(int)offsetof(AudioChannel_obj,myPosition),HX_HCSTRING("myPosition","\x35","\x08","\x7c","\x38")},
	{hx::fsBool,(int)offsetof(AudioChannel_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsBool,(int)offsetof(AudioChannel_obj,looping),HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20")},
	{hx::fsFloat,(int)offsetof(AudioChannel_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(AudioChannel_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsBool,(int)offsetof(AudioChannel_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("myVolume","\x66","\x56","\x07","\x96"),
	HX_HCSTRING("myPosition","\x35","\x08","\x7c","\x38"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"),
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
	HX_MARK_MEMBER_NAME(AudioChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioChannel_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioChannel_obj::__mClass;

void AudioChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.AudioChannel","\x75","\xc6","\x99","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AudioChannel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioChannel_obj >;
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
