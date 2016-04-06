#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ProbedPage
#include <kha/audio2/ogg/vorbis/data/ProbedPage.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

Void ProbedPage_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.ProbedPage","new",0x1974bce5,"kha.audio2.ogg.vorbis.data.ProbedPage.new","kha/audio2/ogg/vorbis/data/ProbedPage.hx",16,0x570a6d8a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ProbedPage_obj::~ProbedPage_obj() { }

Dynamic ProbedPage_obj::__CreateEmpty() { return  new ProbedPage_obj; }
hx::ObjectPtr< ProbedPage_obj > ProbedPage_obj::__new()
{  hx::ObjectPtr< ProbedPage_obj > _result_ = new ProbedPage_obj();
	_result_->__construct();
	return _result_;}

Dynamic ProbedPage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProbedPage_obj > _result_ = new ProbedPage_obj();
	_result_->__construct();
	return _result_;}


ProbedPage_obj::ProbedPage_obj()
{
}

void ProbedPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProbedPage);
	HX_MARK_MEMBER_NAME(pageStart,"pageStart");
	HX_MARK_MEMBER_NAME(pageEnd,"pageEnd");
	HX_MARK_MEMBER_NAME(afterPreviousPageStart,"afterPreviousPageStart");
	HX_MARK_MEMBER_NAME(firstDecodedSample,"firstDecodedSample");
	HX_MARK_MEMBER_NAME(lastDecodedSample,"lastDecodedSample");
	HX_MARK_END_CLASS();
}

void ProbedPage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pageStart,"pageStart");
	HX_VISIT_MEMBER_NAME(pageEnd,"pageEnd");
	HX_VISIT_MEMBER_NAME(afterPreviousPageStart,"afterPreviousPageStart");
	HX_VISIT_MEMBER_NAME(firstDecodedSample,"firstDecodedSample");
	HX_VISIT_MEMBER_NAME(lastDecodedSample,"lastDecodedSample");
}

Dynamic ProbedPage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pageEnd") ) { return pageEnd; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageStart") ) { return pageStart; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastDecodedSample") ) { return lastDecodedSample; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"firstDecodedSample") ) { return firstDecodedSample; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"afterPreviousPageStart") ) { return afterPreviousPageStart; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProbedPage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pageEnd") ) { pageEnd=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageStart") ) { pageStart=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastDecodedSample") ) { lastDecodedSample=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"firstDecodedSample") ) { firstDecodedSample=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"afterPreviousPageStart") ) { afterPreviousPageStart=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ProbedPage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ProbedPage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pageStart","\x93","\x4b","\x22","\x2a"));
	outFields->push(HX_HCSTRING("pageEnd","\xcc","\xfc","\x3e","\x8b"));
	outFields->push(HX_HCSTRING("afterPreviousPageStart","\xa0","\x6a","\x0b","\x94"));
	outFields->push(HX_HCSTRING("firstDecodedSample","\xf0","\x75","\x41","\x16"));
	outFields->push(HX_HCSTRING("lastDecodedSample","\x0a","\x04","\x19","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ProbedPage_obj,pageStart),HX_HCSTRING("pageStart","\x93","\x4b","\x22","\x2a")},
	{hx::fsInt,(int)offsetof(ProbedPage_obj,pageEnd),HX_HCSTRING("pageEnd","\xcc","\xfc","\x3e","\x8b")},
	{hx::fsInt,(int)offsetof(ProbedPage_obj,afterPreviousPageStart),HX_HCSTRING("afterPreviousPageStart","\xa0","\x6a","\x0b","\x94")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ProbedPage_obj,firstDecodedSample),HX_HCSTRING("firstDecodedSample","\xf0","\x75","\x41","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ProbedPage_obj,lastDecodedSample),HX_HCSTRING("lastDecodedSample","\x0a","\x04","\x19","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pageStart","\x93","\x4b","\x22","\x2a"),
	HX_HCSTRING("pageEnd","\xcc","\xfc","\x3e","\x8b"),
	HX_HCSTRING("afterPreviousPageStart","\xa0","\x6a","\x0b","\x94"),
	HX_HCSTRING("firstDecodedSample","\xf0","\x75","\x41","\x16"),
	HX_HCSTRING("lastDecodedSample","\x0a","\x04","\x19","\x11"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProbedPage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProbedPage_obj::__mClass,"__mClass");
};

#endif

hx::Class ProbedPage_obj::__mClass;

void ProbedPage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.ProbedPage","\x73","\x66","\xf9","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ProbedPage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProbedPage_obj >;
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
