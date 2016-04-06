#ifndef INCLUDED_kha_audio2_ogg_tools_Mdct
#define INCLUDED_kha_audio2_ogg_tools_Mdct

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,tools,Mdct)
namespace kha{
namespace audio2{
namespace ogg{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  Mdct_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mdct_obj OBJ_;
		Mdct_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.tools.Mdct")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mdct_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mdct_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Mdct","\xe8","\xa5","\x31","\x33"); }

		static Void inverseTransform( Array< Float > buffer,int n,Array< Float > a,Array< Float > b,Array< Float > c,Array< int > bitReverse);
		static Dynamic inverseTransform_dyn();

		static Void step3Iter0Loop( int n,Array< Float > e,int i_off,int k_off,Array< Float > a);
		static Dynamic step3Iter0Loop_dyn();

		static Void step3InnerRLoop( int lim,Array< Float > e,int d0,int k_off,Array< Float > a,int k1);
		static Dynamic step3InnerRLoop_dyn();

		static Void step3InnerSLoop( int n,Array< Float > e,int i_off,int k_off,Array< Float > a,int aOffset0,int aOffset1,int k0);
		static Dynamic step3InnerSLoop_dyn();

		static Void iter54( Array< Float > e,int zOffset);
		static Dynamic iter54_dyn();

		static Void step3InnerSLoopLd654( int n,Array< Float > e,int i_off,Array< Float > a,int baseN);
		static Dynamic step3InnerSLoopLd654_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace tools

#endif /* INCLUDED_kha_audio2_ogg_tools_Mdct */ 
