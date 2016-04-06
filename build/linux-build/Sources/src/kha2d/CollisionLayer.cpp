#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_kha_math_Vector2
#include <kha/math/Vector2.h>
#endif
#ifndef INCLUDED_kha2d_CollisionLayer
#include <kha2d/CollisionLayer.h>
#endif
#ifndef INCLUDED_kha2d_Direction
#include <kha2d/Direction.h>
#endif
#ifndef INCLUDED_kha2d_Rectangle
#include <kha2d/Rectangle.h>
#endif
#ifndef INCLUDED_kha2d_Sprite
#include <kha2d/Sprite.h>
#endif
#ifndef INCLUDED_kha2d_Tilemap
#include <kha2d/Tilemap.h>
#endif
namespace kha2d{

Void CollisionLayer_obj::__construct(::kha2d::Tilemap map)
{
HX_STACK_FRAME("kha2d.CollisionLayer","new",0xc79ffce9,"kha2d.CollisionLayer.new","Sources/kha2d/CollisionLayer.hx",12,0xbe22a64f)
HX_STACK_THIS(this)
HX_STACK_ARG(map,"map")
{
	HX_STACK_LINE(13)
	this->map = map;
	HX_STACK_LINE(14)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	this->heroes = tmp;
	HX_STACK_LINE(15)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	this->enemies = tmp1;
	HX_STACK_LINE(16)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	this->projectiles = tmp2;
	HX_STACK_LINE(17)
	Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	this->others = tmp3;
}
;
	return null();
}

//CollisionLayer_obj::~CollisionLayer_obj() { }

Dynamic CollisionLayer_obj::__CreateEmpty() { return  new CollisionLayer_obj; }
hx::ObjectPtr< CollisionLayer_obj > CollisionLayer_obj::__new(::kha2d::Tilemap map)
{  hx::ObjectPtr< CollisionLayer_obj > _result_ = new CollisionLayer_obj();
	_result_->__construct(map);
	return _result_;}

Dynamic CollisionLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionLayer_obj > _result_ = new CollisionLayer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::kha2d::Tilemap CollisionLayer_obj::getMap( ){
	HX_STACK_FRAME("kha2d.CollisionLayer","getMap",0xe347d2bd,"kha2d.CollisionLayer.getMap","Sources/kha2d/CollisionLayer.hx",20,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	::kha2d::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionLayer_obj,getMap,return )

Void CollisionLayer_obj::addHero( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","addHero",0x62001fc4,"kha2d.CollisionLayer.addHero","Sources/kha2d/CollisionLayer.hx",24,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(25)
		Array< ::Dynamic > tmp = this->heroes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		::kha2d::Sprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		tmp->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,addHero,(void))

Void CollisionLayer_obj::addEnemy( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","addEnemy",0xa9d0fb3e,"kha2d.CollisionLayer.addEnemy","Sources/kha2d/CollisionLayer.hx",28,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(29)
		Array< ::Dynamic > tmp = this->enemies;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::kha2d::Sprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		tmp->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,addEnemy,(void))

Void CollisionLayer_obj::addProjectile( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","addProjectile",0xbe976133,"kha2d.CollisionLayer.addProjectile","Sources/kha2d/CollisionLayer.hx",32,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(33)
		Array< ::Dynamic > tmp = this->projectiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::kha2d::Sprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		tmp->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,addProjectile,(void))

Void CollisionLayer_obj::addOther( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","addOther",0x6fcc4fc6,"kha2d.CollisionLayer.addOther","Sources/kha2d/CollisionLayer.hx",36,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(37)
		Array< ::Dynamic > tmp = this->others;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::kha2d::Sprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		tmp->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,addOther,(void))

Void CollisionLayer_obj::removeHero( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","removeHero",0x03fad8f5,"kha2d.CollisionLayer.removeHero","Sources/kha2d/CollisionLayer.hx",40,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(41)
		Array< ::Dynamic > tmp = this->heroes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::kha2d::Sprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,removeHero,(void))

Void CollisionLayer_obj::removeEnemy( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","removeEnemy",0xc3384ced,"kha2d.CollisionLayer.removeEnemy","Sources/kha2d/CollisionLayer.hx",44,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(45)
		Array< ::Dynamic > tmp = this->enemies;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::kha2d::Sprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,removeEnemy,(void))

Void CollisionLayer_obj::removeProjectile( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","removeProjectile",0x107e9524,"kha2d.CollisionLayer.removeProjectile","Sources/kha2d/CollisionLayer.hx",48,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(49)
		Array< ::Dynamic > tmp = this->projectiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::kha2d::Sprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,removeProjectile,(void))

Void CollisionLayer_obj::removeOther( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","removeOther",0x8933a175,"kha2d.CollisionLayer.removeOther","Sources/kha2d/CollisionLayer.hx",52,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(53)
		Array< ::Dynamic > tmp = this->others;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		::kha2d::Sprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,removeOther,(void))

::kha2d::Sprite CollisionLayer_obj::getHero( int index){
	HX_STACK_FRAME("kha2d.CollisionLayer","getHero",0xf8458cb9,"kha2d.CollisionLayer.getHero","Sources/kha2d/CollisionLayer.hx",56,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(57)
	Array< ::Dynamic > tmp = this->heroes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	::kha2d::Sprite tmp2 = tmp->__get(tmp1).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,getHero,return )

::kha2d::Sprite CollisionLayer_obj::getEnemy( int index){
	HX_STACK_FRAME("kha2d.CollisionLayer","getEnemy",0x904ae4a9,"kha2d.CollisionLayer.getEnemy","Sources/kha2d/CollisionLayer.hx",60,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(61)
	Array< ::Dynamic > tmp = this->enemies;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	::kha2d::Sprite tmp2 = tmp->__get(tmp1).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,getEnemy,return )

::kha2d::Sprite CollisionLayer_obj::getProjectile( int index){
	HX_STACK_FRAME("kha2d.CollisionLayer","getProjectile",0xb0c073e8,"kha2d.CollisionLayer.getProjectile","Sources/kha2d/CollisionLayer.hx",64,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(65)
	Array< ::Dynamic > tmp = this->projectiles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	::kha2d::Sprite tmp2 = tmp->__get(tmp1).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,getProjectile,return )

::kha2d::Sprite CollisionLayer_obj::getOther( int index){
	HX_STACK_FRAME("kha2d.CollisionLayer","getOther",0x56463931,"kha2d.CollisionLayer.getOther","Sources/kha2d/CollisionLayer.hx",68,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(69)
	Array< ::Dynamic > tmp = this->others;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	::kha2d::Sprite tmp2 = tmp->__get(tmp1).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,getOther,return )

int CollisionLayer_obj::countHeroes( ){
	HX_STACK_FRAME("kha2d.CollisionLayer","countHeroes",0x9b6c1ea0,"kha2d.CollisionLayer.countHeroes","Sources/kha2d/CollisionLayer.hx",72,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	Array< ::Dynamic > tmp = this->heroes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionLayer_obj,countHeroes,return )

int CollisionLayer_obj::countEnemies( ){
	HX_STACK_FRAME("kha2d.CollisionLayer","countEnemies",0x021f8dee,"kha2d.CollisionLayer.countEnemies","Sources/kha2d/CollisionLayer.hx",76,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	Array< ::Dynamic > tmp = this->enemies;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionLayer_obj,countEnemies,return )

int CollisionLayer_obj::countProjectiles( ){
	HX_STACK_FRAME("kha2d.CollisionLayer","countProjectiles",0x096b0fb2,"kha2d.CollisionLayer.countProjectiles","Sources/kha2d/CollisionLayer.hx",80,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	Array< ::Dynamic > tmp = this->projectiles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionLayer_obj,countProjectiles,return )

int CollisionLayer_obj::countOthers( ){
	HX_STACK_FRAME("kha2d.CollisionLayer","countOthers",0x044aab5b,"kha2d.CollisionLayer.countOthers","Sources/kha2d/CollisionLayer.hx",84,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	Array< ::Dynamic > tmp = this->others;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionLayer_obj,countOthers,return )

Void CollisionLayer_obj::sort( Array< ::Dynamic > sprites){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","sort",0xe7b2f2b5,"kha2d.CollisionLayer.sort","Sources/kha2d/CollisionLayer.hx",88,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprites,"sprites")
		HX_STACK_LINE(89)
		bool tmp = (sprites->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		if ((tmp)){
			HX_STACK_LINE(89)
			return null();
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::kha2d::Sprite arg0,::kha2d::Sprite arg1){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Sources/kha2d/CollisionLayer.hx",90,0xbe22a64f)
			HX_STACK_ARG(arg0,"arg0")
			HX_STACK_ARG(arg1,"arg1")
			{
				HX_STACK_LINE(91)
				bool tmp1 = (arg0->x < arg1->x);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(91)
				if ((tmp1)){
					HX_STACK_LINE(91)
					return (int)-1;
				}
				else{
					HX_STACK_LINE(92)
					bool tmp2 = (arg0->x == arg1->x);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(92)
					if ((tmp2)){
						HX_STACK_LINE(92)
						return (int)0;
					}
					else{
						HX_STACK_LINE(93)
						return (int)1;
					}
				}
				HX_STACK_LINE(91)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(90)
		sprites->sort( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,sort,(void))

Void CollisionLayer_obj::sortAllSprites( ){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","sortAllSprites",0xb7bbf8c2,"kha2d.CollisionLayer.sortAllSprites","Sources/kha2d/CollisionLayer.hx",97,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		Array< ::Dynamic > tmp = this->heroes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		this->sort(tmp);
		HX_STACK_LINE(99)
		Array< ::Dynamic > tmp1 = this->enemies;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		this->sort(tmp1);
		HX_STACK_LINE(100)
		Array< ::Dynamic > tmp2 = this->projectiles;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		this->sort(tmp2);
		HX_STACK_LINE(101)
		Array< ::Dynamic > tmp3 = this->others;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		this->sort(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionLayer_obj,sortAllSprites,(void))

bool CollisionLayer_obj::collidesPoint( ::kha::math::Vector2 point){
	HX_STACK_FRAME("kha2d.CollisionLayer","collidesPoint",0x21eb96a4,"kha2d.CollisionLayer.collidesPoint","Sources/kha2d/CollisionLayer.hx",104,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(105)
	::kha2d::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	::kha::math::Vector2 tmp1 = point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	bool tmp2 = tmp->collidesPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,collidesPoint,return )

bool CollisionLayer_obj::collidesSprite( ::kha2d::Sprite sprite){
	HX_STACK_FRAME("kha2d.CollisionLayer","collidesSprite",0x58a00331,"kha2d.CollisionLayer.collidesSprite","Sources/kha2d/CollisionLayer.hx",108,0xbe22a64f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_LINE(109)
	::kha2d::Tilemap tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	::kha2d::Sprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	bool tmp2 = tmp->collides(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,collidesSprite,return )

Void CollisionLayer_obj::line( Float xstart,Float ystart,Float xend,Float yend,::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","line",0xe30de34b,"kha2d.CollisionLayer.line","Sources/kha2d/CollisionLayer.hx",113,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xstart,"xstart")
		HX_STACK_ARG(ystart,"ystart")
		HX_STACK_ARG(xend,"xend")
		HX_STACK_ARG(yend,"yend")
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(114)
		Float tmp = xstart;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		int x0 = tmp1;		HX_STACK_VAR(x0,"x0");
		HX_STACK_LINE(115)
		Float tmp2 = ystart;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		int y0 = tmp3;		HX_STACK_VAR(y0,"y0");
		HX_STACK_LINE(116)
		Float tmp4 = xend;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		int x1 = tmp5;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(117)
		Float tmp6 = yend;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		int tmp7 = ::Math_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		int y1 = tmp7;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(118)
		sprite->x = x0;
		HX_STACK_LINE(119)
		sprite->y = y0;
		HX_STACK_LINE(120)
		int tmp8 = (x1 - x0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(120)
		Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(121)
		int tmp10 = (y1 - y0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(121)
		Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(121)
		Float dy = tmp11;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(122)
		int sx;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(123)
		int sy;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(124)
		bool tmp12 = (x0 < x1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(124)
		if ((tmp12)){
			HX_STACK_LINE(124)
			sx = (int)1;
		}
		else{
			HX_STACK_LINE(124)
			sx = (int)-1;
		}
		HX_STACK_LINE(125)
		bool tmp13 = (y0 < y1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(125)
		if ((tmp13)){
			HX_STACK_LINE(125)
			sy = (int)1;
		}
		else{
			HX_STACK_LINE(125)
			sy = (int)-1;
		}
		HX_STACK_LINE(126)
		Float tmp14 = (dx - dy);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(126)
		Float err = tmp14;		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(128)
		while((true)){
			HX_STACK_LINE(130)
			bool tmp15 = (x0 == x1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(130)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(130)
			if ((tmp15)){
				HX_STACK_LINE(130)
				tmp16 = (y0 == y1);
			}
			else{
				HX_STACK_LINE(130)
				tmp16 = false;
			}
			HX_STACK_LINE(130)
			if ((tmp16)){
				HX_STACK_LINE(131)
				sprite->x = xend;
				HX_STACK_LINE(132)
				sprite->y = yend;
				HX_STACK_LINE(133)
				break;
			}
			HX_STACK_LINE(135)
			Float tmp17 = ((int)2 * err);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(135)
			Float e2 = tmp17;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(136)
			Float tmp18 = e2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(136)
			Float tmp19 = dy;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(136)
			Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(136)
			bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(136)
			if ((tmp21)){
				HX_STACK_LINE(137)
				hx::SubEq(err,dy);
				HX_STACK_LINE(138)
				hx::AddEq(x0,sx);
				HX_STACK_LINE(139)
				sprite->x = x0;
				HX_STACK_LINE(140)
				::kha2d::Tilemap tmp22 = this->map;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(140)
				::kha2d::Sprite tmp23 = sprite;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(140)
				bool tmp24 = tmp22->collides(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(140)
				if ((tmp24)){
					HX_STACK_LINE(141)
					hx::SubEq(sprite->y,(int)1);
					HX_STACK_LINE(142)
					::kha2d::Tilemap tmp25 = this->map;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(142)
					::kha2d::Sprite tmp26 = sprite;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(142)
					bool tmp27 = tmp25->collides(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(142)
					bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(142)
					if ((tmp28)){
						HX_STACK_LINE(143)
						continue;
					}
					else{
						HX_STACK_LINE(146)
						hx::SubEq(sprite->y,(int)1);
						HX_STACK_LINE(147)
						::kha2d::Tilemap tmp29 = this->map;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(147)
						::kha2d::Sprite tmp30 = sprite;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(147)
						bool tmp31 = tmp29->collides(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(147)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(147)
						if ((tmp32)){
							HX_STACK_LINE(148)
							continue;
						}
						else{
							HX_STACK_LINE(151)
							hx::SubEq(sprite->y,(int)1);
							HX_STACK_LINE(152)
							::kha2d::Tilemap tmp33 = this->map;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(152)
							::kha2d::Sprite tmp34 = sprite;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(152)
							bool tmp35 = tmp33->collides(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(152)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(152)
							if ((tmp36)){
								HX_STACK_LINE(153)
								continue;
							}
							HX_STACK_LINE(155)
							hx::AddEq(sprite->y,(int)1);
						}
						HX_STACK_LINE(157)
						hx::AddEq(sprite->y,(int)1);
					}
					HX_STACK_LINE(159)
					hx::AddEq(sprite->y,(int)1);
					HX_STACK_LINE(160)
					hx::SubEq(sprite->x,sx);
					HX_STACK_LINE(161)
					bool tmp29 = (sx < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(161)
					if ((tmp29)){
						HX_STACK_LINE(161)
						sprite->hitFrom(::kha2d::Direction_obj::RIGHT);
					}
					else{
						HX_STACK_LINE(162)
						sprite->hitFrom(::kha2d::Direction_obj::LEFT);
					}
					HX_STACK_LINE(163)
					while((true)){
						HX_STACK_LINE(164)
						bool tmp30 = (y0 == y1);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(164)
						if ((tmp30)){
							HX_STACK_LINE(165)
							sprite->y = yend;
							HX_STACK_LINE(166)
							return null();
						}
						HX_STACK_LINE(168)
						hx::AddEq(y0,sy);
						HX_STACK_LINE(169)
						sprite->y = y0;
						HX_STACK_LINE(170)
						::kha2d::Tilemap tmp31 = this->map;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(170)
						::kha2d::Sprite tmp32 = sprite;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(170)
						bool tmp33 = tmp31->collides(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(170)
						if ((tmp33)){
							HX_STACK_LINE(171)
							hx::SubEq(sprite->y,sy);
							HX_STACK_LINE(172)
							bool tmp34 = (sy < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(172)
							if ((tmp34)){
								HX_STACK_LINE(172)
								sprite->hitFrom(::kha2d::Direction_obj::DOWN);
							}
							else{
								HX_STACK_LINE(173)
								sprite->hitFrom(::kha2d::Direction_obj::UP);
							}
							HX_STACK_LINE(174)
							return null();
						}
					}
					HX_STACK_LINE(177)
					return null();
				}
			}
			HX_STACK_LINE(180)
			bool tmp22 = (e2 < dx);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(180)
			if ((tmp22)){
				HX_STACK_LINE(181)
				hx::AddEq(err,dx);
				HX_STACK_LINE(182)
				hx::AddEq(y0,sy);
				HX_STACK_LINE(183)
				sprite->y = y0;
				HX_STACK_LINE(184)
				::kha2d::Tilemap tmp23 = this->map;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(184)
				::kha2d::Sprite tmp24 = sprite;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(184)
				bool tmp25 = tmp23->collides(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(184)
				if ((tmp25)){
					HX_STACK_LINE(185)
					hx::SubEq(sprite->y,sy);
					HX_STACK_LINE(186)
					bool tmp26 = (sy < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(186)
					if ((tmp26)){
						HX_STACK_LINE(186)
						sprite->hitFrom(::kha2d::Direction_obj::DOWN);
					}
					else{
						HX_STACK_LINE(187)
						sprite->hitFrom(::kha2d::Direction_obj::UP);
					}
					HX_STACK_LINE(188)
					while((true)){
						HX_STACK_LINE(189)
						bool tmp27 = (x0 == x1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(189)
						if ((tmp27)){
							HX_STACK_LINE(190)
							sprite->x = xend;
							HX_STACK_LINE(191)
							return null();
						}
						HX_STACK_LINE(193)
						hx::AddEq(x0,sx);
						HX_STACK_LINE(194)
						sprite->x = x0;
						HX_STACK_LINE(195)
						::kha2d::Tilemap tmp28 = this->map;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(195)
						::kha2d::Sprite tmp29 = sprite;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(195)
						bool tmp30 = tmp28->collides(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(195)
						if ((tmp30)){
							HX_STACK_LINE(196)
							hx::SubEq(sprite->y,(int)1);
							HX_STACK_LINE(197)
							::kha2d::Tilemap tmp31 = this->map;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(197)
							::kha2d::Sprite tmp32 = sprite;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(197)
							bool tmp33 = tmp31->collides(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(197)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(197)
							if ((tmp34)){
								HX_STACK_LINE(198)
								continue;
							}
							else{
								HX_STACK_LINE(201)
								hx::SubEq(sprite->y,(int)1);
								HX_STACK_LINE(202)
								::kha2d::Tilemap tmp35 = this->map;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(202)
								::kha2d::Sprite tmp36 = sprite;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(202)
								bool tmp37 = tmp35->collides(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(202)
								bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(202)
								if ((tmp38)){
									HX_STACK_LINE(203)
									continue;
								}
								else{
									HX_STACK_LINE(206)
									hx::SubEq(sprite->y,(int)1);
									HX_STACK_LINE(207)
									::kha2d::Tilemap tmp39 = this->map;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(207)
									::kha2d::Sprite tmp40 = sprite;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(207)
									bool tmp41 = tmp39->collides(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(207)
									bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(207)
									if ((tmp42)){
										HX_STACK_LINE(208)
										continue;
									}
									HX_STACK_LINE(210)
									hx::AddEq(sprite->y,(int)1);
								}
								HX_STACK_LINE(212)
								hx::AddEq(sprite->y,(int)1);
							}
							HX_STACK_LINE(214)
							hx::AddEq(sprite->y,(int)1);
							HX_STACK_LINE(215)
							hx::SubEq(sprite->x,sx);
							HX_STACK_LINE(216)
							bool tmp35 = (sx < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(216)
							if ((tmp35)){
								HX_STACK_LINE(216)
								sprite->hitFrom(::kha2d::Direction_obj::RIGHT);
							}
							else{
								HX_STACK_LINE(217)
								sprite->hitFrom(::kha2d::Direction_obj::LEFT);
							}
							HX_STACK_LINE(218)
							return null();
						}
					}
					HX_STACK_LINE(221)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CollisionLayer_obj,line,(void))

Void CollisionLayer_obj::moveSprite( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","moveSprite",0x5594bc8d,"kha2d.CollisionLayer.moveSprite","Sources/kha2d/CollisionLayer.hx",227,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(234)
		hx::AddEq(sprite->speedx,sprite->accx);
		HX_STACK_LINE(235)
		hx::AddEq(sprite->speedy,sprite->accy);
		HX_STACK_LINE(236)
		bool tmp = (sprite->speedy > sprite->maxspeedy);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		if ((tmp)){
			HX_STACK_LINE(236)
			sprite->speedy = sprite->maxspeedy;
		}
		HX_STACK_LINE(237)
		bool tmp1 = sprite->collides;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		if ((tmp1)){
			HX_STACK_LINE(238)
			Float tmp2 = (sprite->x + sprite->speedx);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			Float xaim = tmp2;		HX_STACK_VAR(xaim,"xaim");
			HX_STACK_LINE(239)
			Float tmp3 = (sprite->y + sprite->speedy);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			Float yaim = tmp3;		HX_STACK_VAR(yaim,"yaim");
			HX_STACK_LINE(240)
			Float xstart = sprite->x;		HX_STACK_VAR(xstart,"xstart");
			HX_STACK_LINE(241)
			Float ystart = sprite->y;		HX_STACK_VAR(ystart,"ystart");
			HX_STACK_LINE(242)
			sprite->x = xaim;
			HX_STACK_LINE(243)
			sprite->y = yaim;
			HX_STACK_LINE(244)
			::kha2d::Tilemap tmp4 = this->map;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(244)
			::kha2d::Sprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(244)
			bool tmp6 = tmp4->collides(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			if ((tmp6)){
				HX_STACK_LINE(245)
				Float tmp7 = xstart;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(245)
				Float tmp8 = ystart;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(245)
				Float tmp9 = xaim;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(245)
				Float tmp10 = yaim;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(245)
				::kha2d::Sprite tmp11 = sprite;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(245)
				this->line(tmp7,tmp8,tmp9,tmp10,tmp11);
			}
		}
		else{
			HX_STACK_LINE(269)
			hx::AddEq(sprite->x,sprite->speedx);
			HX_STACK_LINE(270)
			hx::AddEq(sprite->y,sprite->speedy);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionLayer_obj,moveSprite,(void))

Void CollisionLayer_obj::moveSprites( Array< ::Dynamic > sprites,Float xleft,Float xright){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","moveSprites",0x8c903f46,"kha2d.CollisionLayer.moveSprites","Sources/kha2d/CollisionLayer.hx",286,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprites,"sprites")
		HX_STACK_ARG(xleft,"xleft")
		HX_STACK_ARG(xright,"xright")
		HX_STACK_LINE(286)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(286)
		while((true)){
			HX_STACK_LINE(286)
			bool tmp = (_g < sprites->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(286)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(286)
			if ((tmp1)){
				HX_STACK_LINE(286)
				break;
			}
			HX_STACK_LINE(286)
			::kha2d::Sprite tmp2 = sprites->__get(_g).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			::kha2d::Sprite sprite = tmp2;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(286)
			++(_g);
			HX_STACK_LINE(286)
			::kha2d::Sprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			this->moveSprite(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CollisionLayer_obj,moveSprites,(void))

Void CollisionLayer_obj::moveAllSprites( Float xleft,Float xright){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","moveAllSprites",0xa1a17235,"kha2d.CollisionLayer.moveAllSprites","Sources/kha2d/CollisionLayer.hx",289,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xleft,"xleft")
		HX_STACK_ARG(xright,"xright")
		HX_STACK_LINE(290)
		Array< ::Dynamic > tmp = this->heroes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		Float tmp1 = xleft;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		Float tmp2 = xright;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		this->moveSprites(tmp,tmp1,tmp2);
		HX_STACK_LINE(291)
		Array< ::Dynamic > tmp3 = this->enemies;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(291)
		Float tmp4 = xleft;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(291)
		Float tmp5 = xright;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(291)
		this->moveSprites(tmp3,tmp4,tmp5);
		HX_STACK_LINE(292)
		Array< ::Dynamic > tmp6 = this->projectiles;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		Float tmp7 = xleft;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		Float tmp8 = xright;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(292)
		this->moveSprites(tmp6,tmp7,tmp8);
		HX_STACK_LINE(293)
		Array< ::Dynamic > tmp9 = this->others;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(293)
		Float tmp10 = xleft;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(293)
		Float tmp11 = xright;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(293)
		this->moveSprites(tmp9,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionLayer_obj,moveAllSprites,(void))

Void CollisionLayer_obj::advance( Float xleft,Float xright){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","advance",0xcfc3ad8b,"kha2d.CollisionLayer.advance","Sources/kha2d/CollisionLayer.hx",296,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xleft,"xleft")
		HX_STACK_ARG(xright,"xright")
		HX_STACK_LINE(297)
		this->sortAllSprites();
		HX_STACK_LINE(298)
		Float tmp = xleft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		Float tmp1 = xright;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		this->moveAllSprites(tmp,tmp1);
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(308)
			Array< ::Dynamic > tmp2 = this->enemies;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(308)
			Array< ::Dynamic > _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(308)
			while((true)){
				HX_STACK_LINE(308)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(308)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(308)
				if ((tmp4)){
					HX_STACK_LINE(308)
					break;
				}
				HX_STACK_LINE(308)
				::kha2d::Sprite tmp5 = _g1->__get(_g).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(308)
				::kha2d::Sprite enemy = tmp5;		HX_STACK_VAR(enemy,"enemy");
				HX_STACK_LINE(308)
				++(_g);
				HX_STACK_LINE(309)
				::kha2d::Rectangle tmp6 = enemy->collisionRect();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(309)
				::kha2d::Rectangle rect = tmp6;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(310)
					Array< ::Dynamic > tmp7 = this->heroes;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(310)
					Array< ::Dynamic > _g3 = tmp7;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(310)
					while((true)){
						HX_STACK_LINE(310)
						bool tmp8 = (_g2 < _g3->length);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(310)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(310)
						if ((tmp9)){
							HX_STACK_LINE(310)
							break;
						}
						HX_STACK_LINE(310)
						::kha2d::Sprite tmp10 = _g3->__get(_g2).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(310)
						::kha2d::Sprite hero = tmp10;		HX_STACK_VAR(hero,"hero");
						HX_STACK_LINE(310)
						++(_g2);
						HX_STACK_LINE(311)
						::kha2d::Rectangle tmp11 = hero->collisionRect();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(311)
						bool tmp12 = rect->collision(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(311)
						if ((tmp12)){
							HX_STACK_LINE(312)
							::kha2d::Sprite tmp13 = enemy;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(312)
							hero->hit(tmp13);
							HX_STACK_LINE(313)
							::kha2d::Sprite tmp14 = hero;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(313)
							enemy->hit(tmp14);
						}
					}
				}
				HX_STACK_LINE(316)
				{
					HX_STACK_LINE(316)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(316)
					Array< ::Dynamic > tmp7 = this->projectiles;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(316)
					Array< ::Dynamic > _g3 = tmp7;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(316)
					while((true)){
						HX_STACK_LINE(316)
						bool tmp8 = (_g2 < _g3->length);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(316)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(316)
						if ((tmp9)){
							HX_STACK_LINE(316)
							break;
						}
						HX_STACK_LINE(316)
						::kha2d::Sprite tmp10 = _g3->__get(_g2).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(316)
						::kha2d::Sprite projectile = tmp10;		HX_STACK_VAR(projectile,"projectile");
						HX_STACK_LINE(316)
						++(_g2);
						HX_STACK_LINE(317)
						::kha2d::Rectangle tmp11 = projectile->collisionRect();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(317)
						bool tmp12 = rect->collision(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(317)
						if ((tmp12)){
							HX_STACK_LINE(318)
							::kha2d::Sprite tmp13 = enemy;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(318)
							projectile->hit(tmp13);
							HX_STACK_LINE(319)
							::kha2d::Sprite tmp14 = projectile;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(319)
							enemy->hit(tmp14);
						}
					}
				}
			}
		}
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(333)
			Array< ::Dynamic > tmp2 = this->projectiles;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(333)
			Array< ::Dynamic > _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(333)
			while((true)){
				HX_STACK_LINE(333)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(333)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(333)
				if ((tmp4)){
					HX_STACK_LINE(333)
					break;
				}
				HX_STACK_LINE(333)
				::kha2d::Sprite tmp5 = _g1->__get(_g).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(333)
				::kha2d::Sprite projectile = tmp5;		HX_STACK_VAR(projectile,"projectile");
				HX_STACK_LINE(333)
				++(_g);
				HX_STACK_LINE(334)
				::kha2d::Rectangle tmp6 = projectile->collisionRect();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(334)
				::kha2d::Rectangle rect = tmp6;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(335)
					Array< ::Dynamic > tmp7 = this->heroes;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(335)
					Array< ::Dynamic > _g3 = tmp7;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(335)
					while((true)){
						HX_STACK_LINE(335)
						bool tmp8 = (_g2 < _g3->length);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(335)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(335)
						if ((tmp9)){
							HX_STACK_LINE(335)
							break;
						}
						HX_STACK_LINE(335)
						::kha2d::Sprite tmp10 = _g3->__get(_g2).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(335)
						::kha2d::Sprite hero = tmp10;		HX_STACK_VAR(hero,"hero");
						HX_STACK_LINE(335)
						++(_g2);
						HX_STACK_LINE(336)
						::kha2d::Rectangle tmp11 = hero->collisionRect();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(336)
						bool tmp12 = rect->collision(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(336)
						if ((tmp12)){
							HX_STACK_LINE(337)
							::kha2d::Sprite tmp13 = projectile;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(337)
							hero->hit(tmp13);
							HX_STACK_LINE(338)
							::kha2d::Sprite tmp14 = hero;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(338)
							projectile->hit(tmp14);
						}
					}
				}
			}
		}
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(344)
			Array< ::Dynamic > tmp2 = this->others;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(344)
			Array< ::Dynamic > _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(344)
			while((true)){
				HX_STACK_LINE(344)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(344)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(344)
				if ((tmp4)){
					HX_STACK_LINE(344)
					break;
				}
				HX_STACK_LINE(344)
				::kha2d::Sprite tmp5 = _g1->__get(_g).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(344)
				::kha2d::Sprite other = tmp5;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(344)
				++(_g);
				HX_STACK_LINE(345)
				::kha2d::Rectangle tmp6 = other->collisionRect();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(345)
				::kha2d::Rectangle rect = tmp6;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(346)
				{
					HX_STACK_LINE(346)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(346)
					Array< ::Dynamic > tmp7 = this->heroes;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(346)
					Array< ::Dynamic > _g3 = tmp7;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(346)
					while((true)){
						HX_STACK_LINE(346)
						bool tmp8 = (_g2 < _g3->length);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(346)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(346)
						if ((tmp9)){
							HX_STACK_LINE(346)
							break;
						}
						HX_STACK_LINE(346)
						::kha2d::Sprite tmp10 = _g3->__get(_g2).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(346)
						::kha2d::Sprite hero = tmp10;		HX_STACK_VAR(hero,"hero");
						HX_STACK_LINE(346)
						++(_g2);
						HX_STACK_LINE(347)
						::kha2d::Rectangle tmp11 = hero->collisionRect();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(347)
						bool tmp12 = rect->collision(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(347)
						if ((tmp12)){
							HX_STACK_LINE(348)
							::kha2d::Sprite tmp13 = other;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(348)
							hero->hit(tmp13);
							HX_STACK_LINE(349)
							::kha2d::Sprite tmp14 = hero;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(349)
							other->hit(tmp14);
						}
					}
				}
				HX_STACK_LINE(352)
				{
					HX_STACK_LINE(352)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(352)
					Array< ::Dynamic > tmp7 = this->enemies;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(352)
					Array< ::Dynamic > _g3 = tmp7;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(352)
					while((true)){
						HX_STACK_LINE(352)
						bool tmp8 = (_g2 < _g3->length);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(352)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(352)
						if ((tmp9)){
							HX_STACK_LINE(352)
							break;
						}
						HX_STACK_LINE(352)
						::kha2d::Sprite tmp10 = _g3->__get(_g2).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(352)
						::kha2d::Sprite enemy = tmp10;		HX_STACK_VAR(enemy,"enemy");
						HX_STACK_LINE(352)
						++(_g2);
						HX_STACK_LINE(353)
						::kha2d::Rectangle tmp11 = enemy->collisionRect();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(353)
						bool tmp12 = rect->collision(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(353)
						if ((tmp12)){
							HX_STACK_LINE(354)
							::kha2d::Sprite tmp13 = other;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(354)
							enemy->hit(tmp13);
							HX_STACK_LINE(355)
							::kha2d::Sprite tmp14 = enemy;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(355)
							other->hit(tmp14);
						}
					}
				}
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(358)
					Array< ::Dynamic > tmp7 = this->projectiles;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(358)
					Array< ::Dynamic > _g3 = tmp7;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(358)
					while((true)){
						HX_STACK_LINE(358)
						bool tmp8 = (_g2 < _g3->length);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(358)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(358)
						if ((tmp9)){
							HX_STACK_LINE(358)
							break;
						}
						HX_STACK_LINE(358)
						::kha2d::Sprite tmp10 = _g3->__get(_g2).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(358)
						::kha2d::Sprite projectile = tmp10;		HX_STACK_VAR(projectile,"projectile");
						HX_STACK_LINE(358)
						++(_g2);
						HX_STACK_LINE(359)
						::kha2d::Rectangle tmp11 = projectile->collisionRect();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(359)
						bool tmp12 = rect->collision(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(359)
						if ((tmp12)){
							HX_STACK_LINE(360)
							::kha2d::Sprite tmp13 = other;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(360)
							projectile->hit(tmp13);
							HX_STACK_LINE(361)
							::kha2d::Sprite tmp14 = projectile;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(361)
							other->hit(tmp14);
						}
					}
				}
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(364)
					Array< ::Dynamic > tmp7 = this->others;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(364)
					Array< ::Dynamic > _g3 = tmp7;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(364)
					while((true)){
						HX_STACK_LINE(364)
						bool tmp8 = (_g2 < _g3->length);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(364)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(364)
						if ((tmp9)){
							HX_STACK_LINE(364)
							break;
						}
						HX_STACK_LINE(364)
						::kha2d::Sprite tmp10 = _g3->__get(_g2).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(364)
						::kha2d::Sprite other2 = tmp10;		HX_STACK_VAR(other2,"other2");
						HX_STACK_LINE(364)
						++(_g2);
						HX_STACK_LINE(365)
						bool tmp11 = (other != other2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(365)
						if ((tmp11)){
							HX_STACK_LINE(366)
							::kha2d::Rectangle tmp12 = other2->collisionRect();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(366)
							bool tmp13 = rect->collision(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(366)
							if ((tmp13)){
								HX_STACK_LINE(367)
								::kha2d::Sprite tmp14 = other;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(367)
								other2->hit(tmp14);
								HX_STACK_LINE(368)
								::kha2d::Sprite tmp15 = other2;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(368)
								other->hit(tmp15);
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionLayer_obj,advance,(void))

Void CollisionLayer_obj::cleanSprites( ){
{
		HX_STACK_FRAME("kha2d.CollisionLayer","cleanSprites",0xf9e80c9c,"kha2d.CollisionLayer.cleanSprites","Sources/kha2d/CollisionLayer.hx",375,0xbe22a64f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		bool found = true;		HX_STACK_VAR(found,"found");
		HX_STACK_LINE(377)
		while((true)){
			HX_STACK_LINE(377)
			bool tmp = found;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(377)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(377)
			if ((tmp1)){
				HX_STACK_LINE(377)
				break;
			}
			HX_STACK_LINE(378)
			found = false;
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(379)
				Array< ::Dynamic > tmp2 = this->heroes;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(379)
				Array< ::Dynamic > _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(379)
				while((true)){
					HX_STACK_LINE(379)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(379)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(379)
					if ((tmp4)){
						HX_STACK_LINE(379)
						break;
					}
					HX_STACK_LINE(379)
					::kha2d::Sprite tmp5 = _g1->__get(_g).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(379)
					::kha2d::Sprite sprite = tmp5;		HX_STACK_VAR(sprite,"sprite");
					HX_STACK_LINE(379)
					++(_g);
					HX_STACK_LINE(380)
					bool tmp6 = sprite->removed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(380)
					if ((tmp6)){
						HX_STACK_LINE(381)
						Array< ::Dynamic > tmp7 = this->heroes;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(381)
						::kha2d::Sprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(381)
						tmp7->remove(tmp8);
						HX_STACK_LINE(382)
						found = true;
					}
				}
			}
		}
		HX_STACK_LINE(386)
		found = true;
		HX_STACK_LINE(387)
		while((true)){
			HX_STACK_LINE(387)
			bool tmp = found;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(387)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(387)
			if ((tmp1)){
				HX_STACK_LINE(387)
				break;
			}
			HX_STACK_LINE(388)
			found = false;
			HX_STACK_LINE(389)
			{
				HX_STACK_LINE(389)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(389)
				Array< ::Dynamic > tmp2 = this->enemies;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(389)
				Array< ::Dynamic > _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(389)
				while((true)){
					HX_STACK_LINE(389)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(389)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(389)
					if ((tmp4)){
						HX_STACK_LINE(389)
						break;
					}
					HX_STACK_LINE(389)
					::kha2d::Sprite tmp5 = _g1->__get(_g).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(389)
					::kha2d::Sprite sprite = tmp5;		HX_STACK_VAR(sprite,"sprite");
					HX_STACK_LINE(389)
					++(_g);
					HX_STACK_LINE(390)
					bool tmp6 = sprite->removed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(390)
					if ((tmp6)){
						HX_STACK_LINE(391)
						Array< ::Dynamic > tmp7 = this->enemies;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(391)
						::kha2d::Sprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(391)
						tmp7->remove(tmp8);
						HX_STACK_LINE(392)
						found = true;
					}
				}
			}
		}
		HX_STACK_LINE(396)
		found = true;
		HX_STACK_LINE(397)
		while((true)){
			HX_STACK_LINE(397)
			bool tmp = found;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(397)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(397)
			if ((tmp1)){
				HX_STACK_LINE(397)
				break;
			}
			HX_STACK_LINE(398)
			found = false;
			HX_STACK_LINE(399)
			{
				HX_STACK_LINE(399)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(399)
				Array< ::Dynamic > tmp2 = this->projectiles;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(399)
				Array< ::Dynamic > _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(399)
				while((true)){
					HX_STACK_LINE(399)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(399)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(399)
					if ((tmp4)){
						HX_STACK_LINE(399)
						break;
					}
					HX_STACK_LINE(399)
					::kha2d::Sprite tmp5 = _g1->__get(_g).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(399)
					::kha2d::Sprite sprite = tmp5;		HX_STACK_VAR(sprite,"sprite");
					HX_STACK_LINE(399)
					++(_g);
					HX_STACK_LINE(400)
					bool tmp6 = sprite->removed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(400)
					if ((tmp6)){
						HX_STACK_LINE(401)
						Array< ::Dynamic > tmp7 = this->projectiles;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(401)
						::kha2d::Sprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(401)
						tmp7->remove(tmp8);
						HX_STACK_LINE(402)
						found = true;
					}
				}
			}
		}
		HX_STACK_LINE(406)
		found = true;
		HX_STACK_LINE(407)
		while((true)){
			HX_STACK_LINE(407)
			bool tmp = found;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(407)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(407)
			if ((tmp1)){
				HX_STACK_LINE(407)
				break;
			}
			HX_STACK_LINE(408)
			found = false;
			HX_STACK_LINE(409)
			{
				HX_STACK_LINE(409)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(409)
				Array< ::Dynamic > tmp2 = this->others;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(409)
				Array< ::Dynamic > _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(409)
				while((true)){
					HX_STACK_LINE(409)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(409)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(409)
					if ((tmp4)){
						HX_STACK_LINE(409)
						break;
					}
					HX_STACK_LINE(409)
					::kha2d::Sprite tmp5 = _g1->__get(_g).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(409)
					::kha2d::Sprite sprite = tmp5;		HX_STACK_VAR(sprite,"sprite");
					HX_STACK_LINE(409)
					++(_g);
					HX_STACK_LINE(410)
					bool tmp6 = sprite->removed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(410)
					if ((tmp6)){
						HX_STACK_LINE(411)
						Array< ::Dynamic > tmp7 = this->others;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(411)
						::kha2d::Sprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(411)
						tmp7->remove(tmp8);
						HX_STACK_LINE(412)
						found = true;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionLayer_obj,cleanSprites,(void))


CollisionLayer_obj::CollisionLayer_obj()
{
}

void CollisionLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollisionLayer);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(heroes,"heroes");
	HX_MARK_MEMBER_NAME(enemies,"enemies");
	HX_MARK_MEMBER_NAME(projectiles,"projectiles");
	HX_MARK_MEMBER_NAME(others,"others");
	HX_MARK_END_CLASS();
}

void CollisionLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(heroes,"heroes");
	HX_VISIT_MEMBER_NAME(enemies,"enemies");
	HX_VISIT_MEMBER_NAME(projectiles,"projectiles");
	HX_VISIT_MEMBER_NAME(others,"others");
}

Dynamic CollisionLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"line") ) { return line_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"heroes") ) { return heroes; }
		if (HX_FIELD_EQ(inName,"others") ) { return others; }
		if (HX_FIELD_EQ(inName,"getMap") ) { return getMap_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enemies") ) { return enemies; }
		if (HX_FIELD_EQ(inName,"addHero") ) { return addHero_dyn(); }
		if (HX_FIELD_EQ(inName,"getHero") ) { return getHero_dyn(); }
		if (HX_FIELD_EQ(inName,"advance") ) { return advance_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addEnemy") ) { return addEnemy_dyn(); }
		if (HX_FIELD_EQ(inName,"addOther") ) { return addOther_dyn(); }
		if (HX_FIELD_EQ(inName,"getEnemy") ) { return getEnemy_dyn(); }
		if (HX_FIELD_EQ(inName,"getOther") ) { return getOther_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeHero") ) { return removeHero_dyn(); }
		if (HX_FIELD_EQ(inName,"moveSprite") ) { return moveSprite_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"projectiles") ) { return projectiles; }
		if (HX_FIELD_EQ(inName,"removeEnemy") ) { return removeEnemy_dyn(); }
		if (HX_FIELD_EQ(inName,"removeOther") ) { return removeOther_dyn(); }
		if (HX_FIELD_EQ(inName,"countHeroes") ) { return countHeroes_dyn(); }
		if (HX_FIELD_EQ(inName,"countOthers") ) { return countOthers_dyn(); }
		if (HX_FIELD_EQ(inName,"moveSprites") ) { return moveSprites_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"countEnemies") ) { return countEnemies_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanSprites") ) { return cleanSprites_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addProjectile") ) { return addProjectile_dyn(); }
		if (HX_FIELD_EQ(inName,"getProjectile") ) { return getProjectile_dyn(); }
		if (HX_FIELD_EQ(inName,"collidesPoint") ) { return collidesPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sortAllSprites") ) { return sortAllSprites_dyn(); }
		if (HX_FIELD_EQ(inName,"collidesSprite") ) { return collidesSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"moveAllSprites") ) { return moveAllSprites_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeProjectile") ) { return removeProjectile_dyn(); }
		if (HX_FIELD_EQ(inName,"countProjectiles") ) { return countProjectiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::kha2d::Tilemap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"heroes") ) { heroes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"others") ) { others=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enemies") ) { enemies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"projectiles") ) { projectiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CollisionLayer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CollisionLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("heroes","\xe8","\x02","\x45","\x08"));
	outFields->push(HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3"));
	outFields->push(HX_HCSTRING("projectiles","\x6a","\xa6","\x89","\x35"));
	outFields->push(HX_HCSTRING("others","\xa3","\x8f","\x23","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha2d::Tilemap*/ ,(int)offsetof(CollisionLayer_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollisionLayer_obj,heroes),HX_HCSTRING("heroes","\xe8","\x02","\x45","\x08")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollisionLayer_obj,enemies),HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollisionLayer_obj,projectiles),HX_HCSTRING("projectiles","\x6a","\xa6","\x89","\x35")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CollisionLayer_obj,others),HX_HCSTRING("others","\xa3","\x8f","\x23","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("heroes","\xe8","\x02","\x45","\x08"),
	HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3"),
	HX_HCSTRING("projectiles","\x6a","\xa6","\x89","\x35"),
	HX_HCSTRING("others","\xa3","\x8f","\x23","\x71"),
	HX_HCSTRING("getMap","\xa6","\x43","\x22","\xa3"),
	HX_HCSTRING("addHero","\xbb","\x7a","\x48","\x81"),
	HX_HCSTRING("addEnemy","\x67","\x38","\xd8","\xe9"),
	HX_HCSTRING("addProjectile","\x6a","\xcf","\xd4","\x2e"),
	HX_HCSTRING("addOther","\xef","\x8c","\xd3","\xaf"),
	HX_HCSTRING("removeHero","\x5e","\x72","\x2a","\xc2"),
	HX_HCSTRING("removeEnemy","\x64","\xef","\xae","\x6e"),
	HX_HCSTRING("removeProjectile","\x4d","\xa3","\x34","\x7e"),
	HX_HCSTRING("removeOther","\xec","\x43","\xaa","\x34"),
	HX_HCSTRING("getHero","\xb0","\xe7","\x8d","\x17"),
	HX_HCSTRING("getEnemy","\xd2","\x21","\x52","\xd0"),
	HX_HCSTRING("getProjectile","\x1f","\xe2","\xfd","\x20"),
	HX_HCSTRING("getOther","\x5a","\x76","\x4d","\x96"),
	HX_HCSTRING("countHeroes","\x17","\xc1","\xe2","\x46"),
	HX_HCSTRING("countEnemies","\x97","\x13","\x77","\x5e"),
	HX_HCSTRING("countProjectiles","\xdb","\x1d","\x21","\x77"),
	HX_HCSTRING("countOthers","\xd2","\x4d","\xc1","\xaf"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("sortAllSprites","\xab","\xfa","\x3e","\x7d"),
	HX_HCSTRING("collidesPoint","\xdb","\x04","\x29","\x92"),
	HX_HCSTRING("collidesSprite","\x1a","\x05","\x23","\x1e"),
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("moveSprite","\xf6","\x55","\xc4","\x13"),
	HX_HCSTRING("moveSprites","\xbd","\xe1","\x06","\x38"),
	HX_HCSTRING("moveAllSprites","\x1e","\x74","\x24","\x67"),
	HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"),
	HX_HCSTRING("cleanSprites","\x45","\x92","\x3f","\x56"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionLayer_obj::__mClass,"__mClass");
};

#endif

hx::Class CollisionLayer_obj::__mClass;

void CollisionLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha2d.CollisionLayer","\x77","\x54","\xfb","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CollisionLayer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CollisionLayer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha2d
