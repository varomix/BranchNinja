#include <hxcpp.h>

#ifndef INCLUDED_kha_Mode
#include <kha/Mode.h>
#endif
namespace kha{

::kha::Mode Mode_obj::BorderlessWindow;

::kha::Mode Mode_obj::Fullscreen;

::kha::Mode Mode_obj::Window;

HX_DEFINE_CREATE_ENUM(Mode_obj)

int Mode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BorderlessWindow","\x35","\xac","\x0e","\x77")) return 1;
	if (inName==HX_HCSTRING("Fullscreen","\x5b","\x3e","\x65","\xf0")) return 2;
	if (inName==HX_HCSTRING("Window","\x10","\x08","\x21","\x87")) return 0;
	return super::__FindIndex(inName);
}

int Mode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BorderlessWindow","\x35","\xac","\x0e","\x77")) return 0;
	if (inName==HX_HCSTRING("Fullscreen","\x5b","\x3e","\x65","\xf0")) return 0;
	if (inName==HX_HCSTRING("Window","\x10","\x08","\x21","\x87")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Mode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BorderlessWindow","\x35","\xac","\x0e","\x77")) return BorderlessWindow;
	if (inName==HX_HCSTRING("Fullscreen","\x5b","\x3e","\x65","\xf0")) return Fullscreen;
	if (inName==HX_HCSTRING("Window","\x10","\x08","\x21","\x87")) return Window;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Window","\x10","\x08","\x21","\x87"),
	HX_HCSTRING("BorderlessWindow","\x35","\xac","\x0e","\x77"),
	HX_HCSTRING("Fullscreen","\x5b","\x3e","\x65","\xf0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mode_obj::BorderlessWindow,"BorderlessWindow");
	HX_MARK_MEMBER_NAME(Mode_obj::Fullscreen,"Fullscreen");
	HX_MARK_MEMBER_NAME(Mode_obj::Window,"Window");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mode_obj::BorderlessWindow,"BorderlessWindow");
	HX_VISIT_MEMBER_NAME(Mode_obj::Fullscreen,"Fullscreen");
	HX_VISIT_MEMBER_NAME(Mode_obj::Window,"Window");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Mode_obj::__mClass;

Dynamic __Create_Mode_obj() { return new Mode_obj; }

void Mode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.Mode","\x0d","\xa0","\x14","\x45"), hx::TCanCast< Mode_obj >,sStaticFields,sMemberFields,
	&__Create_Mode_obj, &__Create,
	&super::__SGetClass(), &CreateMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Mode_obj::__boot()
{
hx::Static(BorderlessWindow) = hx::CreateEnum< Mode_obj >(HX_HCSTRING("BorderlessWindow","\x35","\xac","\x0e","\x77"),1);
hx::Static(Fullscreen) = hx::CreateEnum< Mode_obj >(HX_HCSTRING("Fullscreen","\x5b","\x3e","\x65","\xf0"),2);
hx::Static(Window) = hx::CreateEnum< Mode_obj >(HX_HCSTRING("Window","\x10","\x08","\x21","\x87"),0);
}


} // end namespace kha
