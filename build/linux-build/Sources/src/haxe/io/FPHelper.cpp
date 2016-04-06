#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
namespace haxe{
namespace io{

Void FPHelper_obj::__construct()
{
	return null();
}

//FPHelper_obj::~FPHelper_obj() { }

Dynamic FPHelper_obj::__CreateEmpty() { return  new FPHelper_obj; }
hx::ObjectPtr< FPHelper_obj > FPHelper_obj::__new()
{  hx::ObjectPtr< FPHelper_obj > _result_ = new FPHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic FPHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FPHelper_obj > _result_ = new FPHelper_obj();
	_result_->__construct();
	return _result_;}

int FPHelper_obj::floatToI32( Float f){
	HX_STACK_FRAME("haxe.io.FPHelper","floatToI32",0xff5a7c67,"haxe.io.FPHelper.floatToI32","/home/varomix/dev/Kha/Tools/haxe/std/haxe/io/FPHelper.hx",109,0xd0146e86)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(118)
	int tmp = ::__hxcpp_reinterpret_float32_as_le_int32(f);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FPHelper_obj,floatToI32,return )


FPHelper_obj::FPHelper_obj()
{
}

bool FPHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"floatToI32") ) { outValue = floatToI32_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FPHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FPHelper_obj::__mClass,"__mClass");
};

#endif

hx::Class FPHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("floatToI32","\x51","\x5f","\xaa","\x32"),
	::String(null()) };

void FPHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.FPHelper","\x98","\x9f","\xc6","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FPHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FPHelper_obj >;
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

} // end namespace haxe
} // end namespace io
