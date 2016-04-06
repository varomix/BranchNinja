#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor
#define INCLUDED_kha_audio2_ogg_vorbis_data_Floor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Codebook)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor0)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor1)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  Floor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Floor_obj OBJ_;
		Floor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Floor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Floor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Floor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"); }

		static ::kha::audio2::ogg::vorbis::data::Floor read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< ::Dynamic > codebooks);
		static Dynamic read_dyn();

		::kha::audio2::ogg::vorbis::data::Floor0 floor0;
		::kha::audio2::ogg::vorbis::data::Floor1 floor1;
		int type;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Floor */ 
