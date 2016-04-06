#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor0
#define INCLUDED_kha_audio2_ogg_vorbis_data_Floor0

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor0)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  Floor0_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Floor0_obj OBJ_;
		Floor0_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Floor0")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Floor0_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Floor0_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Floor0","\x04","\x35","\xf5","\x75"); }

		int order;
		int rate;
		int barkMapSize;
		int amplitudeBits;
		int amplitudeOffset;
		int numberOfBooks;
		Array< int > bookList;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Floor0 */ 
