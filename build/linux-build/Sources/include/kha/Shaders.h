#ifndef INCLUDED_kha_Shaders
#define INCLUDED_kha_Shaders

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Shaders)
HX_DECLARE_CLASS2(kha,graphics4,FragmentShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexShader)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Shaders_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shaders_obj OBJ_;
		Shaders_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.Shaders")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shaders_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shaders_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Shaders","\x8e","\xa9","\xd7","\x2c"); }

		static void __boot();
		static ::String painter_colored_fragData;
		static ::kha::graphics4::FragmentShader painter_colored_frag;
		static ::String painter_colored_vertData;
		static ::kha::graphics4::VertexShader painter_colored_vert;
		static ::String painter_image_fragData;
		static ::kha::graphics4::FragmentShader painter_image_frag;
		static ::String painter_image_vertData;
		static ::kha::graphics4::VertexShader painter_image_vert;
		static ::String painter_text_fragData;
		static ::kha::graphics4::FragmentShader painter_text_frag;
		static ::String painter_text_vertData;
		static ::kha::graphics4::VertexShader painter_text_vert;
		static ::String painter_video_fragData;
		static ::kha::graphics4::FragmentShader painter_video_frag;
		static ::String painter_video_vertData;
		static ::kha::graphics4::VertexShader painter_video_vert;
		static Void init( );
		static Dynamic init_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Shaders */ 
