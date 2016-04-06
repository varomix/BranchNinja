#ifndef INCLUDED_kha_SoundList
#define INCLUDED_kha_SoundList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,SoundList)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  SoundList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundList_obj OBJ_;
		SoundList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.SoundList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SoundList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundList_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SoundList","\xad","\xc8","\x53","\xf4"); }

};

} // end namespace kha

#endif /* INCLUDED_kha_SoundList */ 
