#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_aligned_quad
#define INCLUDED_kha_graphics2_truetype_Stbtt_aligned_quad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_aligned_quad)
namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES  Stbtt_aligned_quad_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stbtt_aligned_quad_obj OBJ_;
		Stbtt_aligned_quad_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt_aligned_quad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stbtt_aligned_quad_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_aligned_quad_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Stbtt_aligned_quad","\xc0","\x95","\xc8","\x22"); }

		Float x0;
		Float y0;
		Float s0;
		Float t0;
		Float x1;
		Float y1;
		Float s1;
		Float t1;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_aligned_quad */ 
