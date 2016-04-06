#ifndef INCLUDED_kha_audio2_ogg_tools_Crc32
#define INCLUDED_kha_audio2_ogg_tools_Crc32

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,tools,Crc32)
namespace kha{
namespace audio2{
namespace ogg{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  Crc32_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Crc32_obj OBJ_;
		Crc32_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.tools.Crc32")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Crc32_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Crc32_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Crc32","\x53","\x7c","\x7e","\xdf"); }

		static void __boot();
		static int POLY;
		static Array< int > table;
		static Void init( );
		static Dynamic init_dyn();

		static int update( int crc,int byte);
		static Dynamic update_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace tools

#endif /* INCLUDED_kha_audio2_ogg_tools_Crc32 */ 
