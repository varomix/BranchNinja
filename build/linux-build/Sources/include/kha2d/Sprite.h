#ifndef INCLUDED_kha2d_Sprite
#define INCLUDED_kha2d_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,math,Vector2)
HX_DECLARE_CLASS1(kha2d,Animation)
HX_DECLARE_CLASS1(kha2d,Direction)
HX_DECLARE_CLASS1(kha2d,Rectangle)
HX_DECLARE_CLASS1(kha2d,Sprite)
namespace kha2d{


class HXCPP_CLASS_ATTRIBUTES  Sprite_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();
		Void __construct(::kha::Image image,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_z);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha2d.Sprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sprite_obj > __new(::kha::Image image,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_z);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sprite","\x25","\x50","\x2a","\xf8"); }

		::kha::Image image;
		::kha2d::Animation animation;
		::kha2d::Rectangle collider;
		Float x;
		Float y;
		Float speedx;
		Float speedy;
		Float accx;
		Float accy;
		Float maxspeedy;
		bool collides;
		int z;
		bool removed;
		Float angle;
		Float originX;
		Float originY;
		Float scaleX;
		Float scaleY;
		bool visible;
		Float w;
		Float h;
		::kha2d::Rectangle tempcollider;
		virtual ::kha2d::Rectangle collisionRect( );
		Dynamic collisionRect_dyn();

		virtual Void setAnimation( ::kha2d::Animation animation);
		Dynamic setAnimation_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void render( ::kha::graphics2::Graphics g);
		Dynamic render_dyn();

		virtual Void hitFrom( ::kha2d::Direction dir);
		Dynamic hitFrom_dyn();

		virtual Void hit( ::kha2d::Sprite sprite);
		Dynamic hit_dyn();

		virtual Void setImage( ::kha::Image image);
		Dynamic setImage_dyn();

		virtual Void outOfView( );
		Dynamic outOfView_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float set_width( Float value);
		Dynamic set_width_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_height( Float value);
		Dynamic set_height_dyn();

		virtual Void setPosition( ::kha::math::Vector2 pos);
		Dynamic setPosition_dyn();

};

} // end namespace kha2d

#endif /* INCLUDED_kha2d_Sprite */ 
