#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_PageFlag
#include <kha/audio2/ogg/vorbis/data/PageFlag.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

Void PageFlag_obj::__construct()
{
	return null();
}

//PageFlag_obj::~PageFlag_obj() { }

Dynamic PageFlag_obj::__CreateEmpty() { return  new PageFlag_obj; }
hx::ObjectPtr< PageFlag_obj > PageFlag_obj::__new()
{  hx::ObjectPtr< PageFlag_obj > _result_ = new PageFlag_obj();
	_result_->__construct();
	return _result_;}

Dynamic PageFlag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PageFlag_obj > _result_ = new PageFlag_obj();
	_result_->__construct();
	return _result_;}

int PageFlag_obj::CONTINUED_PACKET;

int PageFlag_obj::FIRST_PAGE;

int PageFlag_obj::LAST_PAGE;


PageFlag_obj::PageFlag_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &PageFlag_obj::CONTINUED_PACKET,HX_HCSTRING("CONTINUED_PACKET","\xca","\x14","\x58","\x3c")},
	{hx::fsInt,(void *) &PageFlag_obj::FIRST_PAGE,HX_HCSTRING("FIRST_PAGE","\x1e","\xd4","\xef","\x06")},
	{hx::fsInt,(void *) &PageFlag_obj::LAST_PAGE,HX_HCSTRING("LAST_PAGE","\x18","\xb4","\x0d","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PageFlag_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PageFlag_obj::CONTINUED_PACKET,"CONTINUED_PACKET");
	HX_MARK_MEMBER_NAME(PageFlag_obj::FIRST_PAGE,"FIRST_PAGE");
	HX_MARK_MEMBER_NAME(PageFlag_obj::LAST_PAGE,"LAST_PAGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PageFlag_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PageFlag_obj::CONTINUED_PACKET,"CONTINUED_PACKET");
	HX_VISIT_MEMBER_NAME(PageFlag_obj::FIRST_PAGE,"FIRST_PAGE");
	HX_VISIT_MEMBER_NAME(PageFlag_obj::LAST_PAGE,"LAST_PAGE");
};

#endif

hx::Class PageFlag_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CONTINUED_PACKET","\xca","\x14","\x58","\x3c"),
	HX_HCSTRING("FIRST_PAGE","\x1e","\xd4","\xef","\x06"),
	HX_HCSTRING("LAST_PAGE","\x18","\xb4","\x0d","\x1f"),
	::String(null()) };

void PageFlag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.PageFlag","\x6b","\x58","\x6c","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PageFlag_obj >;
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

void PageFlag_obj::__boot()
{
	CONTINUED_PACKET= (int)1;
	FIRST_PAGE= (int)2;
	LAST_PAGE= (int)4;
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
