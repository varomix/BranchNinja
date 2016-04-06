#include <hxcpp.h>

#ifndef INCLUDED_kha_BlobList
#include <kha/BlobList.h>
#endif
namespace kha{

Void BlobList_obj::__construct()
{
HX_STACK_FRAME("kha.BlobList","new",0x7309e977,"kha.BlobList.new","kha/Assets.hx",24,0x66f27110)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BlobList_obj::~BlobList_obj() { }

Dynamic BlobList_obj::__CreateEmpty() { return  new BlobList_obj; }
hx::ObjectPtr< BlobList_obj > BlobList_obj::__new()
{  hx::ObjectPtr< BlobList_obj > _result_ = new BlobList_obj();
	_result_->__construct();
	return _result_;}

Dynamic BlobList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlobList_obj > _result_ = new BlobList_obj();
	_result_->__construct();
	return _result_;}


BlobList_obj::BlobList_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlobList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlobList_obj::__mClass,"__mClass");
};

#endif

hx::Class BlobList_obj::__mClass;

void BlobList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.BlobList","\x05","\x62","\x74","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BlobList_obj >;
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
