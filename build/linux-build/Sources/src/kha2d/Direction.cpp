#include <hxcpp.h>

#ifndef INCLUDED_kha2d_Direction
#include <kha2d/Direction.h>
#endif
namespace kha2d{

::kha2d::Direction Direction_obj::DOWN;

::kha2d::Direction Direction_obj::LEFT;

::kha2d::Direction Direction_obj::RIGHT;

::kha2d::Direction Direction_obj::UP;

HX_DEFINE_CREATE_ENUM(Direction_obj)

int Direction_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return 1;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 2;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 3;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return 0;
	return super::__FindIndex(inName);
}

int Direction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return 0;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 0;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Direction_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return DOWN;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return LEFT;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return RIGHT;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return UP;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Direction_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Direction_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Direction_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Direction_obj::UP,"UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Direction_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Direction_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Direction_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Direction_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Direction_obj::UP,"UP");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Direction_obj::__mClass;

Dynamic __Create_Direction_obj() { return new Direction_obj; }

void Direction_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha2d.Direction","\xc7","\x4c","\x3f","\x37"), hx::TCanCast< Direction_obj >,sStaticFields,sMemberFields,
	&__Create_Direction_obj, &__Create,
	&super::__SGetClass(), &CreateDirection_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Direction_obj::__boot()
{
hx::Static(DOWN) = hx::CreateEnum< Direction_obj >(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),1);
hx::Static(LEFT) = hx::CreateEnum< Direction_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),2);
hx::Static(RIGHT) = hx::CreateEnum< Direction_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),3);
hx::Static(UP) = hx::CreateEnum< Direction_obj >(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),0);
}


} // end namespace kha2d
