#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_packedchar
#define INCLUDED_kha_graphics2_truetype_Stbtt_packedchar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_packedchar)
namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES  Stbtt_packedchar_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stbtt_packedchar_obj OBJ_;
		Stbtt_packedchar_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt_packedchar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stbtt_packedchar_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_packedchar_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Stbtt_packedchar","\xcc","\xcc","\x60","\x9b"); }

		int x0;
		int y0;
		int x1;
		int y1;
		Float xoff;
		Float yoff;
		Float xadvance;
		Float xoff2;
		Float yoff2;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_packedchar */ 
