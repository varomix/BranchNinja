#ifndef INCLUDED_kha_ImageList
#define INCLUDED_kha_ImageList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,ImageList)
HX_DECLARE_CLASS1(kha,Resource)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  ImageList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ImageList_obj OBJ_;
		ImageList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.ImageList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ImageList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ImageList","\x39","\x91","\xba","\xcb"); }

		::kha::Image blackFace;
		::String blackFaceName;
		Dynamic blackFaceDescription;
		virtual Void blackFaceLoad( Dynamic done);
		Dynamic blackFaceLoad_dyn();

		virtual Void blackFaceUnload( );
		Dynamic blackFaceUnload_dyn();

		::kha::Image bug;
		::String bugName;
		Dynamic bugDescription;
		virtual Void bugLoad( Dynamic done);
		Dynamic bugLoad_dyn();

		virtual Void bugUnload( );
		Dynamic bugUnload_dyn();

		::kha::Image explosion;
		::String explosionName;
		Dynamic explosionDescription;
		virtual Void explosionLoad( Dynamic done);
		Dynamic explosionLoad_dyn();

		virtual Void explosionUnload( );
		Dynamic explosionUnload_dyn();

		::kha::Image fireball;
		::String fireballName;
		Dynamic fireballDescription;
		virtual Void fireballLoad( Dynamic done);
		Dynamic fireballLoad_dyn();

		virtual Void fireballUnload( );
		Dynamic fireballUnload_dyn();

		::kha::Image greenFace;
		::String greenFaceName;
		Dynamic greenFaceDescription;
		virtual Void greenFaceLoad( Dynamic done);
		Dynamic greenFaceLoad_dyn();

		virtual Void greenFaceUnload( );
		Dynamic greenFaceUnload_dyn();

		::kha::Image ninjaBlack;
		::String ninjaBlackName;
		Dynamic ninjaBlackDescription;
		virtual Void ninjaBlackLoad( Dynamic done);
		Dynamic ninjaBlackLoad_dyn();

		virtual Void ninjaBlackUnload( );
		Dynamic ninjaBlackUnload_dyn();

		::kha::Image ninjaBlack2;
		::String ninjaBlack2Name;
		Dynamic ninjaBlack2Description;
		virtual Void ninjaBlack2Load( Dynamic done);
		Dynamic ninjaBlack2Load_dyn();

		virtual Void ninjaBlack2Unload( );
		Dynamic ninjaBlack2Unload_dyn();

		::kha::Image ninjaBlackBig;
		::String ninjaBlackBigName;
		Dynamic ninjaBlackBigDescription;
		virtual Void ninjaBlackBigLoad( Dynamic done);
		Dynamic ninjaBlackBigLoad_dyn();

		virtual Void ninjaBlackBigUnload( );
		Dynamic ninjaBlackBigUnload_dyn();

		::kha::Image ninjaGreen;
		::String ninjaGreenName;
		Dynamic ninjaGreenDescription;
		virtual Void ninjaGreenLoad( Dynamic done);
		Dynamic ninjaGreenLoad_dyn();

		virtual Void ninjaGreenUnload( );
		Dynamic ninjaGreenUnload_dyn();

		::kha::Image shuriken;
		::String shurikenName;
		Dynamic shurikenDescription;
		virtual Void shurikenLoad( Dynamic done);
		Dynamic shurikenLoad_dyn();

		virtual Void shurikenUnload( );
		Dynamic shurikenUnload_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_ImageList */ 
