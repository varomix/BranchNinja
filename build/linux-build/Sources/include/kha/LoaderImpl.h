#ifndef INCLUDED_kha_LoaderImpl
#define INCLUDED_kha_LoaderImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,LoaderImpl)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS1(kha,Video)

#include <Kore/pch.h>
#include <Kore/System.h>

namespace kha{


class HXCPP_CLASS_ATTRIBUTES  LoaderImpl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LoaderImpl_obj OBJ_;
		LoaderImpl_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.LoaderImpl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LoaderImpl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LoaderImpl_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LoaderImpl","\xb3","\xfc","\x94","\xad"); }

		static Void loadSoundFromDescription( Dynamic desc,Dynamic done);
		static Dynamic loadSoundFromDescription_dyn();

		static Array< ::String > getSoundFormats( );
		static Dynamic getSoundFormats_dyn();

		static Void loadImageFromDescription( Dynamic desc,Dynamic done);
		static Dynamic loadImageFromDescription_dyn();

		static Array< ::String > getImageFormats( );
		static Dynamic getImageFormats_dyn();

		static Void loadBlobFromDescription( Dynamic desc,Dynamic done);
		static Dynamic loadBlobFromDescription_dyn();

		static Void loadFontFromDescription( Dynamic desc,Dynamic done);
		static Dynamic loadFontFromDescription_dyn();

		static Void loadVideoFromDescription( Dynamic desc,Dynamic done);
		static Dynamic loadVideoFromDescription_dyn();

		static ::String videoFormat( );
		static Dynamic videoFormat_dyn();

		static Array< ::String > getVideoFormats( );
		static Dynamic getVideoFormats_dyn();

		static Void showKeyboard( );
		static Dynamic showKeyboard_dyn();

		static Void hideKeyboard( );
		static Dynamic hideKeyboard_dyn();

		static Void loadURL( ::String url);
		static Dynamic loadURL_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_LoaderImpl */ 
