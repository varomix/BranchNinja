#ifndef INCLUDED_kha2d_Tilemap
#define INCLUDED_kha2d_Tilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,math,Vector2)
HX_DECLARE_CLASS2(kha,math,Vector2i)
HX_DECLARE_CLASS1(kha2d,Rectangle)
HX_DECLARE_CLASS1(kha2d,Sprite)
HX_DECLARE_CLASS1(kha2d,Tile)
HX_DECLARE_CLASS1(kha2d,Tilemap)
HX_DECLARE_CLASS1(kha2d,Tileset)
namespace kha2d{


class HXCPP_CLASS_ATTRIBUTES  Tilemap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tilemap_obj OBJ_;
		Tilemap_obj();
		Void __construct(::kha::Image image,int tileWidth,int tileHeight,Array< ::Dynamic > map,Array< ::Dynamic > tiles,hx::Null< bool >  __o_repeat);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha2d.Tilemap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tilemap_obj > __new(::kha::Image image,int tileWidth,int tileHeight,Array< ::Dynamic > map,Array< ::Dynamic > tiles,hx::Null< bool >  __o_repeat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tilemap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tilemap","\x0e","\x18","\xe0","\x12"); }

		static int mod( int a,int b);
		static Dynamic mod_dyn();

		static int round( Float value);
		static Dynamic round_dyn();

		::kha2d::Tileset tileset;
		Array< ::Dynamic > map;
		int levelWidth;
		int levelHeight;
		::kha2d::Rectangle collisionRectCache;
		bool repeat;
		virtual ::kha::math::Vector2i index( Float xpos,Float ypos);
		Dynamic index_dyn();

		virtual int get( int x,int y);
		Dynamic get_dyn();

		virtual Void set( int x,int y,int value);
		Dynamic set_dyn();

		virtual Void render( ::kha::graphics2::Graphics g,int xleft,int ytop,int width,int height);
		Dynamic render_dyn();

		virtual bool collidesPoint( ::kha::math::Vector2 point);
		Dynamic collidesPoint_dyn();

		virtual bool collides( ::kha2d::Sprite sprite);
		Dynamic collides_dyn();

		virtual bool collidesupdown( int x1,int x2,int y,::kha2d::Rectangle rect);
		Dynamic collidesupdown_dyn();

		virtual bool collidesrightleft( int x,int y1,int y2,::kha2d::Rectangle rect);
		Dynamic collidesrightleft_dyn();

		virtual bool collideright( ::kha2d::Sprite sprite);
		Dynamic collideright_dyn();

		virtual bool collideleft( ::kha2d::Sprite sprite);
		Dynamic collideleft_dyn();

		virtual bool collidedown( ::kha2d::Sprite sprite);
		Dynamic collidedown_dyn();

		virtual bool collideup( ::kha2d::Sprite sprite);
		Dynamic collideup_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual ::kha2d::Tileset getTileset( );
		Dynamic getTileset_dyn();

};

} // end namespace kha2d

#endif /* INCLUDED_kha2d_Tilemap */ 
