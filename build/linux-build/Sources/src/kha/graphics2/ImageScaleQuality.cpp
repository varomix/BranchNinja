#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_ImageScaleQuality
#include <kha/graphics2/ImageScaleQuality.h>
#endif
namespace kha{
namespace graphics2{

::kha::graphics2::ImageScaleQuality ImageScaleQuality_obj::High;

::kha::graphics2::ImageScaleQuality ImageScaleQuality_obj::Low;

HX_DEFINE_CREATE_ENUM(ImageScaleQuality_obj)

int ImageScaleQuality_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("High","\x82","\x63","\xe7","\x2f")) return 1;
	if (inName==HX_HCSTRING("Low","\x74","\x0c","\x3a","\x00")) return 0;
	return super::__FindIndex(inName);
}

int ImageScaleQuality_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("High","\x82","\x63","\xe7","\x2f")) return 0;
	if (inName==HX_HCSTRING("Low","\x74","\x0c","\x3a","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ImageScaleQuality_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("High","\x82","\x63","\xe7","\x2f")) return High;
	if (inName==HX_HCSTRING("Low","\x74","\x0c","\x3a","\x00")) return Low;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Low","\x74","\x0c","\x3a","\x00"),
	HX_HCSTRING("High","\x82","\x63","\xe7","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageScaleQuality_obj::High,"High");
	HX_MARK_MEMBER_NAME(ImageScaleQuality_obj::Low,"Low");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageScaleQuality_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageScaleQuality_obj::High,"High");
	HX_VISIT_MEMBER_NAME(ImageScaleQuality_obj::Low,"Low");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ImageScaleQuality_obj::__mClass;

Dynamic __Create_ImageScaleQuality_obj() { return new ImageScaleQuality_obj; }

void ImageScaleQuality_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.graphics2.ImageScaleQuality","\xbf","\x8e","\xc4","\x4a"), hx::TCanCast< ImageScaleQuality_obj >,sStaticFields,sMemberFields,
	&__Create_ImageScaleQuality_obj, &__Create,
	&super::__SGetClass(), &CreateImageScaleQuality_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ImageScaleQuality_obj::__boot()
{
hx::Static(High) = hx::CreateEnum< ImageScaleQuality_obj >(HX_HCSTRING("High","\x82","\x63","\xe7","\x2f"),1);
hx::Static(Low) = hx::CreateEnum< ImageScaleQuality_obj >(HX_HCSTRING("Low","\x74","\x0c","\x3a","\x00"),0);
}


} // end namespace kha
} // end namespace graphics2
