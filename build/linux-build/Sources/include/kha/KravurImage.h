#ifndef INCLUDED_kha_KravurImage
#define INCLUDED_kha_KravurImage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,AlignedQuad)
HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,KravurImage)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_bakedchar)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  KravurImage_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KravurImage_obj OBJ_;
		KravurImage_obj();
		Void __construct(int size,int ascent,int descent,int lineGap,int width,int height,Array< ::Dynamic > chars,::kha::Blob pixels);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.KravurImage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< KravurImage_obj > __new(int size,int ascent,int descent,int lineGap,int width,int height,Array< ::Dynamic > chars,::kha::Blob pixels);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KravurImage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("KravurImage","\xc2","\x28","\xa1","\x93"); }

		Float mySize;
		Array< ::Dynamic > chars;
		::kha::Image texture;
		int width;
		int height;
		Float baseline;
		virtual ::kha::Image getTexture( );
		Dynamic getTexture_dyn();

		virtual ::kha::AlignedQuad getBakedQuad( int char_index,Float xpos,Float ypos);
		Dynamic getBakedQuad_dyn();

		virtual Float getCharWidth( int charIndex);
		Dynamic getCharWidth_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Float stringWidth( ::String string);
		Dynamic stringWidth_dyn();

		virtual Float getBaselinePosition( );
		Dynamic getBaselinePosition_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_KravurImage */ 
