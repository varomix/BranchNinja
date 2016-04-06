#include <hxcpp.h>

#ifndef INCLUDED_kha_Position
#include <kha/Position.h>
#endif
namespace kha{

::kha::Position Position_obj::Center;

::kha::Position  Position_obj::Fixed(int v)
	{ return hx::CreateEnum< Position_obj >(HX_HCSTRING("Fixed","\x54","\x69","\xcf","\x93"),1,hx::DynamicArray(0,1).Add(v)); }

HX_DEFINE_CREATE_ENUM(Position_obj)

int Position_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Center","\xf5","\x99","\x6f","\x3a")) return 0;
	if (inName==HX_HCSTRING("Fixed","\x54","\x69","\xcf","\x93")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_obj,Fixed,return)

int Position_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Center","\xf5","\x99","\x6f","\x3a")) return 0;
	if (inName==HX_HCSTRING("Fixed","\x54","\x69","\xcf","\x93")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Position_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Center","\xf5","\x99","\x6f","\x3a")) return Center;
	if (inName==HX_HCSTRING("Fixed","\x54","\x69","\xcf","\x93")) return Fixed_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Center","\xf5","\x99","\x6f","\x3a"),
	HX_HCSTRING("Fixed","\x54","\x69","\xcf","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Position_obj::Center,"Center");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Position_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Position_obj::Center,"Center");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Position_obj::__mClass;

Dynamic __Create_Position_obj() { return new Position_obj; }

void Position_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.Position","\x53","\x0a","\xa3","\x3d"), hx::TCanCast< Position_obj >,sStaticFields,sMemberFields,
	&__Create_Position_obj, &__Create,
	&super::__SGetClass(), &CreatePosition_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Position_obj::__boot()
{
hx::Static(Center) = hx::CreateEnum< Position_obj >(HX_HCSTRING("Center","\xf5","\x99","\x6f","\x3a"),0);
}


} // end namespace kha
