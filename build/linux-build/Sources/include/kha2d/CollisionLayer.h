#ifndef INCLUDED_kha2d_CollisionLayer
#define INCLUDED_kha2d_CollisionLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,Vector2)
HX_DECLARE_CLASS1(kha2d,CollisionLayer)
HX_DECLARE_CLASS1(kha2d,Sprite)
HX_DECLARE_CLASS1(kha2d,Tilemap)
namespace kha2d{


class HXCPP_CLASS_ATTRIBUTES  CollisionLayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollisionLayer_obj OBJ_;
		CollisionLayer_obj();
		Void __construct(::kha2d::Tilemap map);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha2d.CollisionLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CollisionLayer_obj > __new(::kha2d::Tilemap map);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CollisionLayer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CollisionLayer","\x1f","\x00","\x17","\x69"); }

		::kha2d::Tilemap map;
		Array< ::Dynamic > heroes;
		Array< ::Dynamic > enemies;
		Array< ::Dynamic > projectiles;
		Array< ::Dynamic > others;
		virtual ::kha2d::Tilemap getMap( );
		Dynamic getMap_dyn();

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

		virtual Void sort( Array< ::Dynamic > sprites);
		Dynamic sort_dyn();

		virtual Void sortAllSprites( );
		Dynamic sortAllSprites_dyn();

		virtual bool collidesPoint( ::kha::math::Vector2 point);
		Dynamic collidesPoint_dyn();

		virtual bool collidesSprite( ::kha2d::Sprite sprite);
		Dynamic collidesSprite_dyn();

		virtual Void line( Float xstart,Float ystart,Float xend,Float yend,::kha2d::Sprite sprite);
		Dynamic line_dyn();

		virtual Void moveSprite( ::kha2d::Sprite sprite);
		Dynamic moveSprite_dyn();

		virtual Void moveSprites( Array< ::Dynamic > sprites,Float xleft,Float xright);
		Dynamic moveSprites_dyn();

		virtual Void moveAllSprites( Float xleft,Float xright);
		Dynamic moveAllSprites_dyn();

		virtual Void advance( Float xleft,Float xright);
		Dynamic advance_dyn();

		virtual Void cleanSprites( );
		Dynamic cleanSprites_dyn();

};

} // end namespace kha2d

#endif /* INCLUDED_kha2d_CollisionLayer */ 
