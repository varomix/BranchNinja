#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError
#define INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,ReaderError)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,ReaderErrorType)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  ReaderError_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ReaderError_obj OBJ_;
		ReaderError_obj();
		Void __construct(::kha::audio2::ogg::vorbis::data::ReaderErrorType type,::String __o_message,Dynamic posInfos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.ReaderError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ReaderError_obj > __new(::kha::audio2::ogg::vorbis::data::ReaderErrorType type,::String __o_message,Dynamic posInfos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ReaderError_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ReaderError","\x65","\x3b","\xcb","\x6c"); }

		::kha::audio2::ogg::vorbis::data::ReaderErrorType type;
		::String message;
		Dynamic posInfos;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError */ 
