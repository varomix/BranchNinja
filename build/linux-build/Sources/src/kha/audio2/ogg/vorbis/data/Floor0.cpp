#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor0
#include <kha/audio2/ogg/vorbis/data/Floor0.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

Void Floor0_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Floor0","new",0xc75d6aa6,"kha.audio2.ogg.vorbis.data.Floor0.new","kha/audio2/ogg/vorbis/data/Floor.hx",130,0x2f4d0043)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Floor0_obj::~Floor0_obj() { }

Dynamic Floor0_obj::__CreateEmpty() { return  new Floor0_obj; }
hx::ObjectPtr< Floor0_obj > Floor0_obj::__new()
{  hx::ObjectPtr< Floor0_obj > _result_ = new Floor0_obj();
	_result_->__construct();
	return _result_;}

Dynamic Floor0_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Floor0_obj > _result_ = new Floor0_obj();
	_result_->__construct();
	return _result_;}


Floor0_obj::Floor0_obj()
{
}

void Floor0_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Floor0);
	HX_MARK_MEMBER_NAME(order,"order");
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(barkMapSize,"barkMapSize");
	HX_MARK_MEMBER_NAME(amplitudeBits,"amplitudeBits");
	HX_MARK_MEMBER_NAME(amplitudeOffset,"amplitudeOffset");
	HX_MARK_MEMBER_NAME(numberOfBooks,"numberOfBooks");
	HX_MARK_MEMBER_NAME(bookList,"bookList");
	HX_MARK_END_CLASS();
}

void Floor0_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(order,"order");
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(barkMapSize,"barkMapSize");
	HX_VISIT_MEMBER_NAME(amplitudeBits,"amplitudeBits");
	HX_VISIT_MEMBER_NAME(amplitudeOffset,"amplitudeOffset");
	HX_VISIT_MEMBER_NAME(numberOfBooks,"numberOfBooks");
	HX_VISIT_MEMBER_NAME(bookList,"bookList");
}

Dynamic Floor0_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"order") ) { return order; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bookList") ) { return bookList; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"barkMapSize") ) { return barkMapSize; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeBits") ) { return amplitudeBits; }
		if (HX_FIELD_EQ(inName,"numberOfBooks") ) { return numberOfBooks; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"amplitudeOffset") ) { return amplitudeOffset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Floor0_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"order") ) { order=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bookList") ) { bookList=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"barkMapSize") ) { barkMapSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeBits") ) { amplitudeBits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numberOfBooks") ) { numberOfBooks=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"amplitudeOffset") ) { amplitudeOffset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Floor0_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Floor0_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("order","\x8e","\xf0","\x20","\x35"));
	outFields->push(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("barkMapSize","\x25","\x6d","\x93","\x07"));
	outFields->push(HX_HCSTRING("amplitudeBits","\xe9","\x99","\x72","\xad"));
	outFields->push(HX_HCSTRING("amplitudeOffset","\x36","\xf5","\xea","\x51"));
	outFields->push(HX_HCSTRING("numberOfBooks","\xca","\xd7","\xc9","\x19"));
	outFields->push(HX_HCSTRING("bookList","\x27","\x95","\x27","\x1d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Floor0_obj,order),HX_HCSTRING("order","\x8e","\xf0","\x20","\x35")},
	{hx::fsInt,(int)offsetof(Floor0_obj,rate),HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b")},
	{hx::fsInt,(int)offsetof(Floor0_obj,barkMapSize),HX_HCSTRING("barkMapSize","\x25","\x6d","\x93","\x07")},
	{hx::fsInt,(int)offsetof(Floor0_obj,amplitudeBits),HX_HCSTRING("amplitudeBits","\xe9","\x99","\x72","\xad")},
	{hx::fsInt,(int)offsetof(Floor0_obj,amplitudeOffset),HX_HCSTRING("amplitudeOffset","\x36","\xf5","\xea","\x51")},
	{hx::fsInt,(int)offsetof(Floor0_obj,numberOfBooks),HX_HCSTRING("numberOfBooks","\xca","\xd7","\xc9","\x19")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Floor0_obj,bookList),HX_HCSTRING("bookList","\x27","\x95","\x27","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("order","\x8e","\xf0","\x20","\x35"),
	HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"),
	HX_HCSTRING("barkMapSize","\x25","\x6d","\x93","\x07"),
	HX_HCSTRING("amplitudeBits","\xe9","\x99","\x72","\xad"),
	HX_HCSTRING("amplitudeOffset","\x36","\xf5","\xea","\x51"),
	HX_HCSTRING("numberOfBooks","\xca","\xd7","\xc9","\x19"),
	HX_HCSTRING("bookList","\x27","\x95","\x27","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Floor0_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Floor0_obj::__mClass,"__mClass");
};

#endif

hx::Class Floor0_obj::__mClass;

void Floor0_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Floor0","\xb4","\xdf","\xa5","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Floor0_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Floor0_obj >;
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
