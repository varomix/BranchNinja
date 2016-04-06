#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_font_v_metrics
#define INCLUDED_kha_graphics2_truetype_Stbtt_temp_font_v_metrics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_temp_font_v_metrics)
namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES  Stbtt_temp_font_v_metrics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stbtt_temp_font_v_metrics_obj OBJ_;
		Stbtt_temp_font_v_metrics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt_temp_font_v_metrics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stbtt_temp_font_v_metrics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_temp_font_v_metrics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Stbtt_temp_font_v_metrics","\x57","\x16","\x7e","\xae"); }

		int ascent;
		int descent;
		int lineGap;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_temp_font_v_metrics */ 
