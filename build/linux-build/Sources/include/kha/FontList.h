#ifndef INCLUDED_kha_FontList
#define INCLUDED_kha_FontList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,FontList)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  FontList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FontList_obj OBJ_;
		FontList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.FontList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FontList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontList_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FontList","\xed","\xf5","\xe2","\xa3"); }

};

} // end namespace kha

#endif /* INCLUDED_kha_FontList */ 
