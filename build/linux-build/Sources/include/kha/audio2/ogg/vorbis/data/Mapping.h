#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mapping
#define INCLUDED_kha_audio2_ogg_vorbis_data_Mapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Mapping)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,MappingChannel)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  Mapping_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mapping_obj OBJ_;
		Mapping_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Mapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mapping_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mapping_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Mapping","\xee","\xa2","\xcb","\x11"); }

		static ::kha::audio2::ogg::vorbis::data::Mapping read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,int channels);
		static Dynamic read_dyn();

		int couplingSteps;
		Array< ::Dynamic > chan;
		int submaps;
		Array< int > submapFloor;
		Array< int > submapResidue;
		virtual Void doFloor( Array< ::Dynamic > floors,int i,int n,Array< Float > target,Array< int > finalY,Array< bool > step2Flag);
		Dynamic doFloor_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Mapping */ 
