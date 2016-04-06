#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_pack_range
#define INCLUDED_kha_graphics2_truetype_Stbtt_pack_range

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_pack_range)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_packedchar)
namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES  Stbtt_pack_range_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stbtt_pack_range_obj OBJ_;
		Stbtt_pack_range_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.truetype.Stbtt_pack_range")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stbtt_pack_range_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_pack_range_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stbtt_pack_range","\x15","\xe7","\x8a","\x43"); }

		Float font_size;
		int first_unicode_codepoint_in_range;
		Array< int > array_of_unicode_codepoints;
		int num_chars;
		::kha::graphics2::truetype::Stbtt_packedchar chardata_for_range;
		int h_oversample;
		int v_oversample;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_pack_range */ 
