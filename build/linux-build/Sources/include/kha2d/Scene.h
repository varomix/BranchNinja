#ifndef INCLUDED_kha2d_Scene
#define INCLUDED_kha2d_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,math,Vector2)
HX_DECLARE_CLASS1(kha2d,CollisionLayer)
HX_DECLARE_CLASS1(kha2d,Scene)
HX_DECLARE_CLASS1(kha2d,Sprite)
HX_DECLARE_CLASS1(kha2d,Tilemap)
namespace kha2d{


class HXCPP_CLASS_ATTRIBUTES  Scene_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha2d.Scene")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Scene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Scene","\x2c","\x49","\xff","\x0b"); }

		static ::kha2d::Scene instance;
		static ::kha2d::Scene the;
		static ::kha2d::Scene get_the( );
		static Dynamic get_the_dyn();

		::kha2d::CollisionLayer collisionLayer;
		Array< ::Dynamic > backgrounds;
		Array< ::Dynamic > foregrounds;
		Array< Float > backgroundSpeeds;
		Array< Float > foregroundSpeeds;
		Array< ::Dynamic > sprites;
		int backgroundColor;
		int width;
		int height;
		int camx;
		int camy;
		int screenOffsetX;
		int screenOffsetY;
		bool dirtySprites;
		virtual Void setSize( int width,int height);
		Dynamic setSize_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void clearTilemaps( );
		Dynamic clearTilemaps_dyn();

		virtual Void setBackgroundColor( int color);
		Dynamic setBackgroundColor_dyn();

		virtual Void addBackgroundTilemap( ::kha2d::Tilemap tilemap,Float speed);
		Dynamic addBackgroundTilemap_dyn();

		virtual Void addForegroundTilemap( ::kha2d::Tilemap tilemap,Float speed);
		Dynamic addForegroundTilemap_dyn();

		virtual Void setColissionMap( ::kha2d::Tilemap tilemap);
		Dynamic setColissionMap_dyn();

		virtual Void addHero( ::kha2d::Sprite sprite);
		Dynamic addHero_dyn();

		virtual Void addEnemy( ::kha2d::Sprite sprite);
		Dynamic addEnemy_dyn();

		virtual Void addProjectile( ::kha2d::Sprite sprite);
		Dynamic addProjectile_dyn();

		virtual Void addOther( ::kha2d::Sprite sprite);
		Dynamic addOther_dyn();

		virtual Void removeHero( ::kha2d::Sprite sprite);
		Dynamic removeHero_dyn();

		virtual Void removeEnemy( ::kha2d::Sprite sprite);
		Dynamic removeEnemy_dyn();

		virtual Void removeProjectile( ::kha2d::Sprite sprite);
		Dynamic removeProjectile_dyn();

		virtual Void removeOther( ::kha2d::Sprite sprite);
		Dynamic removeOther_dyn();

		virtual ::kha2d::Sprite getHero( int index);
		Dynamic getHero_dyn();

		virtual ::kha2d::Sprite getEnemy( int index);
		Dynamic getEnemy_dyn();

		virtual ::kha2d::Sprite getProjectile( int index);
		Dynamic getProjectile_dyn();

		virtual ::kha2d::Sprite getOther( int index);
		Dynamic getOther_dyn();

		virtual int countHeroes( );
		Dynamic countHeroes_dyn();

		virtual int countEnemies( );
		Dynamic countEnemies_dyn();

		virtual int countProjectiles( );
		Dynamic countProjectiles_dyn();

		virtual int countOthers( );
		Dynamic countOthers_dyn();

		virtual int set_camx( int newcamx);
		Dynamic set_camx_dyn();

		virtual int set_camy( int newcamy);
		Dynamic set_camy_dyn();

		virtual Void sort( Array< ::Dynamic > sprites);
		Dynamic sort_dyn();

		virtual bool collidesPoint( ::kha::math::Vector2 point);
		Dynamic collidesPoint_dyn();

		virtual bool collidesSprite( ::kha2d::Sprite sprite);
		Dynamic collidesSprite_dyn();

		virtual Void cleanSprites( );
		Dynamic cleanSprites_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void render( ::kha::graphics2::Graphics g);
		Dynamic render_dyn();

		virtual Float getWidth( );
		Dynamic getWidth_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Array< ::Dynamic > getHeroesBelowPoint( int px,int py);
		Dynamic getHeroesBelowPoint_dyn();

		virtual Array< ::Dynamic > getSpritesBelowPoint( int px,int py);
		Dynamic getSpritesBelowPoint_dyn();

};

} // end namespace kha2d

#endif /* INCLUDED_kha2d_Scene */ 
