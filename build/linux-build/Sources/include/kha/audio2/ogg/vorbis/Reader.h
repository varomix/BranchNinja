#ifndef INCLUDED_kha_audio2_ogg_vorbis_Reader
#define INCLUDED_kha_audio2_ogg_vorbis_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,Reader)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecoder)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Header)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES  Reader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();
		Void __construct(::haxe::io::Input input,Dynamic seekFunc,int inputLength);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.Reader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Reader_obj > __new(::haxe::io::Input input,Dynamic seekFunc,int inputLength);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Reader","\x63","\x19","\x26","\x31"); }

		static ::kha::audio2::ogg::vorbis::Reader openFromBytes( ::haxe::io::Bytes bytes);
		static Dynamic openFromBytes_dyn();

		static Void seekBytes( ::haxe::io::BytesInput bytes,int pos);
		static Dynamic seekBytes_dyn();

		static ::kha::audio2::ogg::vorbis::Reader openFromFile( ::String fileName);
		static Dynamic openFromFile_dyn();

		static ::kha::audio2::ogg::vorbis::data::Header readAll( ::haxe::io::Bytes bytes,::haxe::io::Output output,hx::Null< bool >  useFloat);
		static Dynamic readAll_dyn();

		::kha::audio2::ogg::vorbis::VorbisDecoder decoder;
		virtual ::kha::audio2::ogg::vorbis::data::Header get_header( );
		Dynamic get_header_dyn();

		virtual int get_totalSample( );
		Dynamic get_totalSample_dyn();

		virtual Float get_totalMillisecond( );
		Dynamic get_totalMillisecond_dyn();

		virtual int get_currentSample( );
		Dynamic get_currentSample_dyn();

		virtual int set_currentSample( int value);
		Dynamic set_currentSample_dyn();

		virtual Float get_currentMillisecond( );
		Dynamic get_currentMillisecond_dyn();

		virtual Float set_currentMillisecond( Float value);
		Dynamic set_currentMillisecond_dyn();

		Dynamic loopStart;
		Dynamic loopLength;
		Dynamic seekFunc;
		Dynamic &seekFunc_dyn() { return seekFunc;}
		int inputLength;
		virtual int read( Array< Float > output,Dynamic samples,Dynamic channels,Dynamic sampleRate,hx::Null< bool >  useFloat);
		Dynamic read_dyn();

		virtual ::kha::audio2::ogg::vorbis::Reader clone( );
		Dynamic clone_dyn();

		virtual Float sampleToMillisecond( int samples);
		Dynamic sampleToMillisecond_dyn();

		virtual int millisecondToSample( Float millseconds);
		Dynamic millisecondToSample_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis

#endif /* INCLUDED_kha_audio2_ogg_vorbis_Reader */ 
