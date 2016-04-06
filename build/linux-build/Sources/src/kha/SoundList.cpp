#include <hxcpp.h>

#ifndef INCLUDED_kha_SoundList
#include <kha/SoundList.h>
#endif
namespace kha{

Void SoundList_obj::__construct()
{
HX_STACK_FRAME("kha.SoundList","new",0x0edbc255,"kha.SoundList.new","kha/Assets.hx",17,0x66f27110)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SoundList_obj::~SoundList_obj() { }

Dynamic SoundList_obj::__CreateEmpty() { return  new SoundList_obj; }
hx::ObjectPtr< SoundList_obj > SoundList_obj::__new()
{  hx::ObjectPtr< SoundList_obj > _result_ = new SoundList_obj();
	_result_->__construct();
	return _result_;}

Dynamic SoundList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundList_obj > _result_ = new SoundList_obj();
	_result_->__construct();
	return _result_;}


SoundList_obj::SoundList_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundList_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundList_obj::__mClass;

void SoundList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.SoundList","\xe3","\xf3","\x34","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SoundList_obj >;
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
