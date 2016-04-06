#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel
#include <kha/audio2/ogg/vorbis/data/MappingChannel.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

Void MappingChannel_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.MappingChannel","new",0x33acd197,"kha.audio2.ogg.vorbis.data.MappingChannel.new","kha/audio2/ogg/vorbis/data/Mapping.hx",125,0x30bf6281)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//MappingChannel_obj::~MappingChannel_obj() { }

Dynamic MappingChannel_obj::__CreateEmpty() { return  new MappingChannel_obj; }
hx::ObjectPtr< MappingChannel_obj > MappingChannel_obj::__new()
{  hx::ObjectPtr< MappingChannel_obj > _result_ = new MappingChannel_obj();
	_result_->__construct();
	return _result_;}

Dynamic MappingChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MappingChannel_obj > _result_ = new MappingChannel_obj();
	_result_->__construct();
	return _result_;}


MappingChannel_obj::MappingChannel_obj()
{
}

Dynamic MappingChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mux") ) { return mux; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magnitude") ) { return magnitude; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MappingChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mux") ) { mux=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magnitude") ) { magnitude=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MappingChannel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MappingChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("magnitude","\xd0","\x33","\x64","\xf5"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("mux","\x10","\x1c","\x53","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MappingChannel_obj,magnitude),HX_HCSTRING("magnitude","\xd0","\x33","\x64","\xf5")},
	{hx::fsInt,(int)offsetof(MappingChannel_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsInt,(int)offsetof(MappingChannel_obj,mux),HX_HCSTRING("mux","\x10","\x1c","\x53","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("magnitude","\xd0","\x33","\x64","\xf5"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("mux","\x10","\x1c","\x53","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MappingChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MappingChannel_obj::__mClass,"__mClass");
};

#endif

hx::Class MappingChannel_obj::__mClass;

void MappingChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.MappingChannel","\x25","\xba","\x38","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MappingChannel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MappingChannel_obj >;
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
