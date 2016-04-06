#include <hxcpp.h>

#ifndef INCLUDED_kha_FontList
#include <kha/FontList.h>
#endif
namespace kha{

Void FontList_obj::__construct()
{
HX_STACK_FRAME("kha.FontList","new",0x1151cbe9,"kha.FontList.new","kha/Assets.hx",31,0x66f27110)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//FontList_obj::~FontList_obj() { }

Dynamic FontList_obj::__CreateEmpty() { return  new FontList_obj; }
hx::ObjectPtr< FontList_obj > FontList_obj::__new()
{  hx::ObjectPtr< FontList_obj > _result_ = new FontList_obj();
	_result_->__construct();
	return _result_;}

Dynamic FontList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FontList_obj > _result_ = new FontList_obj();
	_result_->__construct();
	return _result_;}


FontList_obj::FontList_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontList_obj::__mClass,"__mClass");
};

#endif

hx::Class FontList_obj::__mClass;

void FontList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.FontList","\x77","\xa3","\xd9","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FontList_obj >;
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
