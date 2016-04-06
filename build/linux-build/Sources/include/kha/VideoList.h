#ifndef INCLUDED_kha_VideoList
#define INCLUDED_kha_VideoList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,VideoList)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  VideoList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VideoList_obj OBJ_;
		VideoList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.VideoList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VideoList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VideoList_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VideoList","\x59","\x96","\x3e","\x0f"); }

};

} // end namespace kha

#endif /* INCLUDED_kha_VideoList */ 
