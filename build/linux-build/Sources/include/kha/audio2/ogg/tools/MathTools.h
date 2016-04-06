#ifndef INCLUDED_kha_audio2_ogg_tools_MathTools
#define INCLUDED_kha_audio2_ogg_tools_MathTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,tools,MathTools)
namespace kha{
namespace audio2{
namespace ogg{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  MathTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MathTools_obj OBJ_;
		MathTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.tools.MathTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MathTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MathTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MathTools","\x13","\x2b","\xed","\x32"); }

		static int ilog( int n);
		static Dynamic ilog_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace tools

#endif /* INCLUDED_kha_audio2_ogg_tools_MathTools */ 
