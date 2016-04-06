#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Codebook
#define INCLUDED_kha_audio2_ogg_vorbis_data_Codebook

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Codebook)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  Codebook_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Codebook_obj OBJ_;
		Codebook_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Codebook")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Codebook_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Codebook_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Codebook","\xf6","\x8b","\x46","\x64"); }

		static void __boot();
		static int NO_CODE;
		static ::kha::audio2::ogg::vorbis::data::Codebook read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState);
		static Dynamic read_dyn();

		static int delay;
		int dimensions;
		int entries;
		Array< int > codewordLengths;
		Float minimumValue;
		Float deltaValue;
		int valueBits;
		int lookupType;
		bool sequenceP;
		bool sparse;
		int lookupValues;
		Array< Float > multiplicands;
		Array< int > codewords;
		Array< int > fastHuffman;
		Array< int > sortedCodewords;
		Array< int > sortedValues;
		int sortedEntries;
		virtual Void addEntry( int huffCode,int symbol,int count,int len,Array< int > values);
		Dynamic addEntry_dyn();

		virtual bool includeInSort( int len);
		Dynamic includeInSort_dyn();

		virtual bool computeCodewords( Array< int > len,int n,Array< int > values);
		Dynamic computeCodewords_dyn();

		virtual Void computeSortedHuffman( Array< int > lengths,Array< int > values);
		Dynamic computeSortedHuffman_dyn();

		virtual Void computeAcceleratedHuffman( );
		Dynamic computeAcceleratedHuffman_dyn();

		virtual bool codebookDecode( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< Float > output,int offset,int len);
		Dynamic codebookDecode_dyn();

		virtual bool codebookDecodeStep( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< Float > output,int offset,int len,int step);
		Dynamic codebookDecodeStep_dyn();

		virtual int decodeStart( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState);
		Dynamic decodeStart_dyn();

		virtual Dynamic decodeDeinterleaveRepeat( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< ::Dynamic > residueBuffers,int ch,int cInter,int pInter,int len,int totalDecode);
		Dynamic decodeDeinterleaveRepeat_dyn();

		virtual bool residueDecode( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< Float > target,int offset,int n,int rtype);
		Dynamic residueDecode_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Codebook */ 
