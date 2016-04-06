#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecoder
#define INCLUDED_kha_audio2_ogg_vorbis_VorbisDecoder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecoder)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Header)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES  VorbisDecoder_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VorbisDecoder_obj OBJ_;
		VorbisDecoder_obj();
		Void __construct(::kha::audio2::ogg::vorbis::data::Header header,::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.VorbisDecoder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VorbisDecoder_obj > __new(::kha::audio2::ogg::vorbis::data::Header header,::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VorbisDecoder_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VorbisDecoder","\x51","\x00","\xfb","\xde"); }

		static ::kha::audio2::ogg::vorbis::VorbisDecoder start( ::haxe::io::Input input);
		static Dynamic start_dyn();

		Array< ::Dynamic > previousWindow;
		int previousLength;
		Array< ::Dynamic > finalY;
		Array< ::Dynamic > a;
		Array< ::Dynamic > b;
		Array< ::Dynamic > c;
		Array< ::Dynamic > window;
		Array< ::Dynamic > bitReverseData;
		Array< ::Dynamic > channelBuffers;
		int channelBufferStart;
		int channelBufferEnd;
		::kha::audio2::ogg::vorbis::data::Header header;
		int currentSample;
		Dynamic totalSample;
		::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState;
		virtual int read( Array< Float > output,int samples,int channels,int sampleRate,bool useFloat);
		Dynamic read_dyn();

		virtual int skipSamples( int len);
		Dynamic skipSamples_dyn();

		virtual Void setupSampleNumber( Dynamic seekFunc,int inputLength);
		Dynamic setupSampleNumber_dyn();

		virtual Void seek( Dynamic seekFunc,int inputLength,int sampleNumber);
		Dynamic seek_dyn();

		virtual Void seekFrameFromPage( Dynamic seekFunc,int pageStart,int firstSample,int targetSample);
		Dynamic seekFrameFromPage_dyn();

		virtual ::kha::audio2::ogg::vorbis::VorbisDecoder clone( Dynamic seekFunc);
		Dynamic clone_dyn();

		virtual Void ensurePosition( Dynamic seekFunc);
		Dynamic ensurePosition_dyn();

		virtual int getFrameFloat( );
		Dynamic getFrameFloat_dyn();

		virtual Void pumpFirstFrame( );
		Dynamic pumpFirstFrame_dyn();

		virtual int finishFrame( Dynamic r);
		Dynamic finishFrame_dyn();

		virtual Array< Float > getWindow( int len);
		Dynamic getWindow_dyn();

		virtual Void initBlocksize( int bs,int n);
		Dynamic initBlocksize_dyn();

		virtual Void inverseMdct( Array< Float > buffer,int n,bool blocktype);
		Dynamic inverseMdct_dyn();

		virtual Dynamic decodePacket( );
		Dynamic decodePacket_dyn();

		virtual Dynamic decodeInitial( );
		Dynamic decodeInitial_dyn();

		virtual Dynamic decodePacketRest( Dynamic r);
		Dynamic decodePacketRest_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis

#endif /* INCLUDED_kha_audio2_ogg_vorbis_VorbisDecoder */ 
