#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisTools
#define INCLUDED_kha_audio2_ogg_vorbis_VorbisTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisTools)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,IntPoint)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES  VorbisTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VorbisTools_obj OBJ_;
		VorbisTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.vorbis.VorbisTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VorbisTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VorbisTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VorbisTools","\xa8","\xa9","\x86","\x30"); }

		static void __boot();
		static int EOP;
		static Array< ::Dynamic > integerDivideTable;
		static Float M__PI;
		static int DIVTAB_NUMER;
		static int DIVTAB_DENOM;
		static Array< Float > INVERSE_DB_TABLE;
		static Void _assert( bool b,Dynamic p);
		static Dynamic _assert_dyn();

		static Dynamic neighbors( Array< int > x,int n);
		static Dynamic neighbors_dyn();

		static Float floatUnpack( int x);
		static Dynamic floatUnpack_dyn();

		static int bitReverse( int n);
		static Dynamic bitReverse_dyn();

		static int pointCompare( ::kha::audio2::ogg::vorbis::data::IntPoint a,::kha::audio2::ogg::vorbis::data::IntPoint b);
		static Dynamic pointCompare_dyn();

		static int uintAsc( int a,int b);
		static Dynamic uintAsc_dyn();

		static int lookup1Values( int entries,int dim);
		static Dynamic lookup1Values_dyn();

		static Void computeWindow( int n,Array< Float > window);
		static Dynamic computeWindow_dyn();

		static Float square( Float f);
		static Dynamic square_dyn();

		static Void computeBitReverse( int n,Array< int > rev);
		static Dynamic computeBitReverse_dyn();

		static Void computeTwiddleFactors( int n,Array< Float > af,Array< Float > bf,Array< Float > cf);
		static Dynamic computeTwiddleFactors_dyn();

		static Void drawLine( Array< Float > output,int x0,int y0,int x1,int y1,int n);
		static Dynamic drawLine_dyn();

		static int predictPoint( int x,int x0,int x1,int y0,int y1);
		static Dynamic predictPoint_dyn();

		static Array< Float > emptyFloatVector( int len);
		static Dynamic emptyFloatVector_dyn();

		static Array< Float > copyVector( Array< Float > source);
		static Dynamic copyVector_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis

#endif /* INCLUDED_kha_audio2_ogg_vorbis_VorbisTools */ 
