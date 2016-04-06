#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Residue
#define INCLUDED_kha_audio2_ogg_vorbis_data_Residue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Codebook)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Header)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Residue)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  Residue_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Residue_obj OBJ_;
		Residue_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Residue")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Residue_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Residue_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Residue","\x2b","\xe0","\xb3","\x30"); }

		static ::kha::audio2::ogg::vorbis::data::Residue read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< ::Dynamic > codebooks);
		static Dynamic read_dyn();

		int begin;
		int end;
		int partSize;
		int classifications;
		int classbook;
		Array< ::Dynamic > classdata;
		Array< ::Dynamic > residueBooks;
		int type;
		virtual Void decode( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,::kha::audio2::ogg::vorbis::data::Header header,Array< ::Dynamic > residueBuffers,int ch,int n,Array< bool > doNotDecode,Array< ::Dynamic > channelBuffers);
		Dynamic decode_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Residue */ 
