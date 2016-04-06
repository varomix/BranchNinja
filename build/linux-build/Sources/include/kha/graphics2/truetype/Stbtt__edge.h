#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__edge
#define INCLUDED_kha_graphics2_truetype_Stbtt__edge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__edge)
namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES  Stbtt__edge_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stbtt__edge_obj OBJ_;
		Stbtt__edge_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt__edge")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stbtt__edge_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt__edge_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Stbtt__edge","\x5e","\xfa","\xe1","\x5e"); }

		Float x0;
		Float y0;
		Float x1;
		Float y1;
		bool invert;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt__edge */ 
