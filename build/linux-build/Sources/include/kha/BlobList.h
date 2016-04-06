#ifndef INCLUDED_kha_BlobList
#define INCLUDED_kha_BlobList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,BlobList)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  BlobList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BlobList_obj OBJ_;
		BlobList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.BlobList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BlobList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlobList_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BlobList","\x7b","\xb4","\x7d","\x4b"); }

};

} // end namespace kha

#endif /* INCLUDED_kha_BlobList */ 
