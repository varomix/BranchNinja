#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Page
#define INCLUDED_kha_audio2_ogg_vorbis_data_Page

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Page)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  Page_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Page_obj OBJ_;
		Page_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.vorbis.data.Page")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Page_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Page_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Page","\x6f","\x06","\x2b","\x35"); }

		int flag;
		virtual ::kha::audio2::ogg::vorbis::data::Page clone( );
		Dynamic clone_dyn();

		virtual Void start( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState);
		Dynamic start_dyn();

		virtual Void startWithoutCapturePattern( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState);
		Dynamic startWithoutCapturePattern_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Page */ 
