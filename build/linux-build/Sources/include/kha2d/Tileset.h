#ifndef INCLUDED_kha2d_Tileset
#define INCLUDED_kha2d_Tileset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS1(kha2d,Tile)
HX_DECLARE_CLASS1(kha2d,Tileset)
namespace kha2d{


class HXCPP_CLASS_ATTRIBUTES  Tileset_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tileset_obj OBJ_;
		Tileset_obj();
		Void __construct(::kha::Image image,int tileWidth,int tileHeight,Array< ::Dynamic > tiles);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha2d.Tileset")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tileset_obj > __new(::kha::Image image,int tileWidth,int tileHeight,Array< ::Dynamic > tiles);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tileset_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tileset","\x14","\xa9","\xe4","\x12"); }

		int TILE_WIDTH;
		int TILE_HEIGHT;
		int xmax;
		int ymax;
		::kha::Image image;
		Array< ::Dynamic > tiles;
		virtual Void render( ::kha::graphics2::Graphics g,int tile,int x,int y);
		Dynamic render_dyn();

		virtual ::kha2d::Tile tile( int index);
		Dynamic tile_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

};

} // end namespace kha2d

#endif /* INCLUDED_kha2d_Tileset */ 
