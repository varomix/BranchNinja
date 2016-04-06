#ifndef INCLUDED_kha_Assets
#define INCLUDED_kha_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Assets)
HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS1(kha,BlobList)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,FontList)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,ImageList)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS1(kha,SoundList)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS1(kha,VideoList)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.Assets")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Assets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Assets","\xa3","\xbc","\x97","\x80"); }

		static void __boot();
		static ::kha::ImageList images;
		static ::kha::SoundList sounds;
		static ::kha::BlobList blobs;
		static ::kha::FontList fonts;
		static ::kha::VideoList videos;
		static Void loadEverything( Dynamic callback);
		static Dynamic loadEverything_dyn();

		static Void loadImage( ::String name,Dynamic done);
		static Dynamic loadImage_dyn();

		static Void loadImageFromPath( ::String path,bool readable,Dynamic done);
		static Dynamic loadImageFromPath_dyn();

		static Array< ::String > imageFormats;
		static Array< ::String > get_imageFormats( );
		static Dynamic get_imageFormats_dyn();

		static Void loadBlob( ::String name,Dynamic done);
		static Dynamic loadBlob_dyn();

		static Void loadBlobFromPath( ::String path,Dynamic done);
		static Dynamic loadBlobFromPath_dyn();

		static Void loadSound( ::String name,Dynamic done);
		static Dynamic loadSound_dyn();

		static Void loadSoundFromPath( ::String path,Dynamic done);
		static Dynamic loadSoundFromPath_dyn();

		static Array< ::String > soundFormats;
		static Array< ::String > get_soundFormats( );
		static Dynamic get_soundFormats_dyn();

		static Void loadFont( ::String name,Dynamic done);
		static Dynamic loadFont_dyn();

		static Void loadFontFromPath( ::String path,Dynamic done);
		static Dynamic loadFontFromPath_dyn();

		static Array< ::String > fontFormats;
		static Array< ::String > get_fontFormats( );
		static Dynamic get_fontFormats_dyn();

		static Void loadVideo( ::String name,Dynamic done);
		static Dynamic loadVideo_dyn();

		static Void loadVideoFromPath( ::String path,Dynamic done);
		static Dynamic loadVideoFromPath_dyn();

		static Array< ::String > videoFormats;
		static Array< ::String > get_videoFormats( );
		static Dynamic get_videoFormats_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Assets */ 
