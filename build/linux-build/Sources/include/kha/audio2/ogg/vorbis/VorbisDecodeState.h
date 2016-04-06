#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#define INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,_VorbisDecodeState,FindPageResult)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Codebook)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Header)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Page)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,ProbedPage)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,ReaderError)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES  VorbisDecodeState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VorbisDecodeState_obj OBJ_;
		VorbisDecodeState_obj();
		Void __construct(::haxe::io::Input input);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.VorbisDecodeState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VorbisDecodeState_obj > __new(::haxe::io::Input input);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VorbisDecodeState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VorbisDecodeState","\x50","\xc1","\x7a","\x8f"); }

		static void __boot();
		static int INVALID_BITS;
		::kha::audio2::ogg::vorbis::data::Page page;
		bool eof;
		::kha::audio2::ogg::vorbis::data::ProbedPage pFirst;
		::kha::audio2::ogg::vorbis::data::ProbedPage pLast;
		int validBits;
		int inputPosition;
		::haxe::io::Input input;
		int discardSamplesDeferred;
		Array< int > segments;
		int bytesInSeg;
		Array< ::Dynamic > channelBuffers;
		int channelBufferStart;
		int channelBufferEnd;
		int currentSample;
		Array< ::Dynamic > previousWindow;
		int previousLength;
		Array< ::Dynamic > finalY;
		bool firstDecode;
		int nextSeg;
		int acc;
		bool lastSeg;
		int lastSegWhich;
		int endSegWithKnownLoc;
		int knownLocForPacket;
		::kha::audio2::ogg::vorbis::data::ReaderError error;
		int currentLoc;
		int currentLocValid;
		int firstAudioPageOffset;
		virtual Void setup( int loc0,int loc1);
		Dynamic setup_dyn();

		virtual ::kha::audio2::ogg::vorbis::VorbisDecodeState clone( Dynamic seekFunc);
		Dynamic clone_dyn();

		virtual int next( );
		Dynamic next_dyn();

		virtual Void startPacket( );
		Dynamic startPacket_dyn();

		virtual bool maybeStartPacket( );
		Dynamic maybeStartPacket_dyn();

		virtual int readBits( int n);
		Dynamic readBits_dyn();

		virtual int readPacketRaw( );
		Dynamic readPacketRaw_dyn();

		virtual int readPacket( );
		Dynamic readPacket_dyn();

		virtual Void flushPacket( );
		Dynamic flushPacket_dyn();

		virtual Void vorbisValidate( );
		Dynamic vorbisValidate_dyn();

		virtual Void firstPageValidate( );
		Dynamic firstPageValidate_dyn();

		virtual Void startFirstDecode( );
		Dynamic startFirstDecode_dyn();

		virtual Void capturePattern( );
		Dynamic capturePattern_dyn();

		virtual Void skip( int len);
		Dynamic skip_dyn();

		virtual Void prepHuffman( );
		Dynamic prepHuffman_dyn();

		virtual int decode( ::kha::audio2::ogg::vorbis::data::Codebook c);
		Dynamic decode_dyn();

		virtual int decodeRaw( ::kha::audio2::ogg::vorbis::data::Codebook c);
		Dynamic decodeRaw_dyn();

		virtual bool isLastByte( );
		Dynamic isLastByte_dyn();

		virtual Dynamic finishDecodePacket( int previousLength,int n,Dynamic r);
		Dynamic finishDecodePacket_dyn();

		virtual int readInt32( );
		Dynamic readInt32_dyn();

		virtual int readByte( );
		Dynamic readByte_dyn();

		virtual Array< int > read( int n);
		Dynamic read_dyn();

		virtual ::haxe::io::Bytes readBytes( int n);
		Dynamic readBytes_dyn();

		virtual ::String readString( int n);
		Dynamic readString_dyn();

		virtual int getSampleNumber( Dynamic seekFunc,int inputLength);
		Dynamic getSampleNumber_dyn();

		virtual Void forcePageResync( );
		Dynamic forcePageResync_dyn();

		virtual Void setInputOffset( Dynamic seekFunc,int n);
		Dynamic setInputOffset_dyn();

		virtual ::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult findPage( Dynamic seekFunc,int inputLength);
		Dynamic findPage_dyn();

		virtual ::kha::audio2::ogg::vorbis::data::ProbedPage analyzePage( Dynamic seekFunc,::kha::audio2::ogg::vorbis::data::Header h);
		Dynamic analyzePage_dyn();

		virtual int decodeScalarRaw( ::kha::audio2::ogg::vorbis::data::Codebook c);
		Dynamic decodeScalarRaw_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis

#endif /* INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState */ 
