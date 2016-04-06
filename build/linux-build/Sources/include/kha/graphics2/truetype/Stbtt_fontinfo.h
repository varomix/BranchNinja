#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo
#define INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_fontinfo)
namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES  Stbtt_fontinfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stbtt_fontinfo_obj OBJ_;
		Stbtt_fontinfo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.truetype.Stbtt_fontinfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stbtt_fontinfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_fontinfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stbtt_fontinfo","\xbb","\xe8","\x2f","\x90"); }

		::kha::Blob data;
		int fontstart;
		int numGlyphs;
		int loca;
		int head;
		int glyf;
		int hhea;
		int hmtx;
		int kern;
		int index_map;
		int indexToLocFormat;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo */ 
