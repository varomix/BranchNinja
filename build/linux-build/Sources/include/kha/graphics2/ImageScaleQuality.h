#ifndef INCLUDED_kha_graphics2_ImageScaleQuality
#define INCLUDED_kha_graphics2_ImageScaleQuality

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics2,ImageScaleQuality)
namespace kha{
namespace graphics2{


class ImageScaleQuality_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ImageScaleQuality_obj OBJ_;

	public:
		ImageScaleQuality_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics2.ImageScaleQuality","\xbf","\x8e","\xc4","\x4a"); }
		::String __ToString() const { return HX_HCSTRING("ImageScaleQuality.","\xfe","\xde","\x77","\xc8") + tag; }

		static ::kha::graphics2::ImageScaleQuality High;
		static inline ::kha::graphics2::ImageScaleQuality High_dyn() { return High; }
		static ::kha::graphics2::ImageScaleQuality Low;
		static inline ::kha::graphics2::ImageScaleQuality Low_dyn() { return Low; }
};

} // end namespace kha
} // end namespace graphics2

#endif /* INCLUDED_kha_graphics2_ImageScaleQuality */ 
