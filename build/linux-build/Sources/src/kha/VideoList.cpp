#include <hxcpp.h>

#ifndef INCLUDED_kha_VideoList
#include <kha/VideoList.h>
#endif
namespace kha{

Void VideoList_obj::__construct()
{
HX_STACK_FRAME("kha.VideoList","new",0x149cd601,"kha.VideoList.new","kha/Assets.hx",38,0x66f27110)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//VideoList_obj::~VideoList_obj() { }

Dynamic VideoList_obj::__CreateEmpty() { return  new VideoList_obj; }
hx::ObjectPtr< VideoList_obj > VideoList_obj::__new()
{  hx::ObjectPtr< VideoList_obj > _result_ = new VideoList_obj();
	_result_->__construct();
	return _result_;}

Dynamic VideoList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VideoList_obj > _result_ = new VideoList_obj();
	_result_->__construct();
	return _result_;}


VideoList_obj::VideoList_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VideoList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VideoList_obj::__mClass,"__mClass");
};

#endif

hx::Class VideoList_obj::__mClass;

void VideoList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.VideoList","\x8f","\xc1","\x1f","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< VideoList_obj >;
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
