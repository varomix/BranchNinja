#include <hxcpp.h>

#ifndef INCLUDED_kha_TargetDisplay
#include <kha/TargetDisplay.h>
#endif
namespace kha{

::kha::TargetDisplay  TargetDisplay_obj::ById(int id)
	{ return hx::CreateEnum< TargetDisplay_obj >(HX_HCSTRING("ById","\xb2","\x25","\xfc","\x2b"),1,hx::DynamicArray(0,1).Add(id)); }

::kha::TargetDisplay TargetDisplay_obj::Primary;

HX_DEFINE_CREATE_ENUM(TargetDisplay_obj)

int TargetDisplay_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ById","\xb2","\x25","\xfc","\x2b")) return 1;
	if (inName==HX_HCSTRING("Primary","\xa2","\x67","\xcd","\x50")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TargetDisplay_obj,ById,return)

int TargetDisplay_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ById","\xb2","\x25","\xfc","\x2b")) return 1;
	if (inName==HX_HCSTRING("Primary","\xa2","\x67","\xcd","\x50")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TargetDisplay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ById","\xb2","\x25","\xfc","\x2b")) return ById_dyn();
	if (inName==HX_HCSTRING("Primary","\xa2","\x67","\xcd","\x50")) return Primary;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Primary","\xa2","\x67","\xcd","\x50"),
	HX_HCSTRING("ById","\xb2","\x25","\xfc","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TargetDisplay_obj::Primary,"Primary");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TargetDisplay_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TargetDisplay_obj::Primary,"Primary");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TargetDisplay_obj::__mClass;

Dynamic __Create_TargetDisplay_obj() { return new TargetDisplay_obj; }

void TargetDisplay_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.TargetDisplay","\x07","\x29","\x5f","\x50"), hx::TCanCast< TargetDisplay_obj >,sStaticFields,sMemberFields,
	&__Create_TargetDisplay_obj, &__Create,
	&super::__SGetClass(), &CreateTargetDisplay_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TargetDisplay_obj::__boot()
{
hx::Static(Primary) = hx::CreateEnum< TargetDisplay_obj >(HX_HCSTRING("Primary","\xa2","\x67","\xcd","\x50"),0);
}


} // end namespace kha
