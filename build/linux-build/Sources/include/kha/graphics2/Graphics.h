#ifndef INCLUDED_kha_graphics2_Graphics
#define INCLUDED_kha_graphics2_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,ImageScaleQuality)
HX_DECLARE_CLASS2(kha,graphics4,BlendingOperation)
HX_DECLARE_CLASS2(kha,graphics4,PipelineState)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,math,FastMatrix3)
namespace kha{
namespace graphics2{


class HXCPP_CLASS_ATTRIBUTES  Graphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.Graphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Graphics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Graphics","\xeb","\xb4","\x19","\xec"); }

		virtual Void begin( hx::Null< bool >  clear,Dynamic clearColor);
		Dynamic begin_dyn();

		virtual Void end( );
		Dynamic end_dyn();

		virtual Void flush( );
		Dynamic flush_dyn();

		virtual Void clear( Dynamic color);
		Dynamic clear_dyn();

		virtual Void drawImage( ::kha::Image img,::cpp::Float32 x,::cpp::Float32 y);
		Dynamic drawImage_dyn();

		virtual Void drawSubImage( ::kha::Image img,::cpp::Float32 x,::cpp::Float32 y,::cpp::Float32 sx,::cpp::Float32 sy,::cpp::Float32 sw,::cpp::Float32 sh);
		Dynamic drawSubImage_dyn();

		virtual Void drawScaledImage( ::kha::Image img,::cpp::Float32 dx,::cpp::Float32 dy,::cpp::Float32 dw,::cpp::Float32 dh);
		Dynamic drawScaledImage_dyn();

		virtual Void drawScaledSubImage( ::kha::Image image,::cpp::Float32 sx,::cpp::Float32 sy,::cpp::Float32 sw,::cpp::Float32 sh,::cpp::Float32 dx,::cpp::Float32 dy,::cpp::Float32 dw,::cpp::Float32 dh);
		Dynamic drawScaledSubImage_dyn();

		virtual Void drawRect( Float x,Float y,Float width,Float height,hx::Null< Float >  strength);
		Dynamic drawRect_dyn();

		virtual Void fillRect( Float x,Float y,Float width,Float height);
		Dynamic fillRect_dyn();

		virtual Void drawString( ::String text,Float x,Float y);
		Dynamic drawString_dyn();

		virtual Void drawLine( Float x1,Float y1,Float x2,Float y2,hx::Null< Float >  strength);
		Dynamic drawLine_dyn();

		virtual Void drawVideo( ::kha::Video video,Float x,Float y,Float width,Float height);
		Dynamic drawVideo_dyn();

		virtual Void fillTriangle( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		Dynamic fillTriangle_dyn();

		virtual ::kha::graphics2::ImageScaleQuality get_imageScaleQuality( );
		Dynamic get_imageScaleQuality_dyn();

		virtual ::kha::graphics2::ImageScaleQuality set_imageScaleQuality( ::kha::graphics2::ImageScaleQuality value);
		Dynamic set_imageScaleQuality_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_color( int color);
		Dynamic set_color_dyn();

		virtual ::kha::Font get_font( );
		Dynamic get_font_dyn();

		virtual ::kha::Font set_font( ::kha::Font font);
		Dynamic set_font_dyn();

		virtual int get_fontSize( );
		Dynamic get_fontSize_dyn();

		virtual int set_fontSize( int value);
		Dynamic set_fontSize_dyn();

		virtual Void pushTransformation( ::kha::math::FastMatrix3 transformation);
		Dynamic pushTransformation_dyn();

		virtual ::kha::math::FastMatrix3 popTransformation( );
		Dynamic popTransformation_dyn();

		virtual ::kha::math::FastMatrix3 get_transformation( );
		Dynamic get_transformation_dyn();

		virtual ::kha::math::FastMatrix3 set_transformation( ::kha::math::FastMatrix3 transformation);
		Dynamic set_transformation_dyn();

		virtual ::kha::math::FastMatrix3 translation( ::cpp::Float32 tx,::cpp::Float32 ty);
		Dynamic translation_dyn();

		virtual Void translate( ::cpp::Float32 tx,::cpp::Float32 ty);
		Dynamic translate_dyn();

		virtual Void pushTranslation( ::cpp::Float32 tx,::cpp::Float32 ty);
		Dynamic pushTranslation_dyn();

		virtual ::kha::math::FastMatrix3 rotation( ::cpp::Float32 angle,::cpp::Float32 centerx,::cpp::Float32 centery);
		Dynamic rotation_dyn();

		virtual Void rotate( ::cpp::Float32 angle,::cpp::Float32 centerx,::cpp::Float32 centery);
		Dynamic rotate_dyn();

		virtual Void pushRotation( ::cpp::Float32 angle,::cpp::Float32 centerx,::cpp::Float32 centery);
		Dynamic pushRotation_dyn();

		virtual Void pushOpacity( Float opacity);
		Dynamic pushOpacity_dyn();

		virtual Float popOpacity( );
		Dynamic popOpacity_dyn();

		virtual Float get_opacity( );
		Dynamic get_opacity_dyn();

		virtual Float set_opacity( Float opacity);
		Dynamic set_opacity_dyn();

		virtual Void scissor( int x,int y,int width,int height);
		Dynamic scissor_dyn();

		virtual Void disableScissor( );
		Dynamic disableScissor_dyn();

		::kha::graphics4::PipelineState pipe;
		virtual ::kha::graphics4::PipelineState get_pipeline( );
		Dynamic get_pipeline_dyn();

		virtual ::kha::graphics4::PipelineState set_pipeline( ::kha::graphics4::PipelineState pipeline);
		Dynamic set_pipeline_dyn();

		virtual Void setBlendingMode( ::kha::graphics4::BlendingOperation source,::kha::graphics4::BlendingOperation destination);
		Dynamic setBlendingMode_dyn();

		Array< ::Dynamic > transformations;
		Array< Float > opacities;
		int myFontSize;
		virtual Void setTransformation( ::kha::math::FastMatrix3 transformation);
		Dynamic setTransformation_dyn();

		virtual Void setOpacity( Float opacity);
		Dynamic setOpacity_dyn();

		virtual Void setPipeline( ::kha::graphics4::PipelineState pipeline);
		Dynamic setPipeline_dyn();

};

} // end namespace kha
} // end namespace graphics2

#endif /* INCLUDED_kha_graphics2_Graphics */ 
