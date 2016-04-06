#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_pack_context
#define INCLUDED_kha_graphics2_truetype_Stbtt_pack_context

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_pack_context)
namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES  Stbtt_pack_context_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stbtt_pack_context_obj OBJ_;
		Stbtt_pack_context_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.truetype.Stbtt_pack_context")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stbtt_pack_context_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_pack_context_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stbtt_pack_context","\x47","\xdd","\x37","\x9b"); }

		int width;
		int height;
		int stride_in_bytes;
		int padding;
		int h_oversample;
		int v_oversample;
		::kha::Blob pixels;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_pack_context */ 
