#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix3
#include <kha/math/FastMatrix3.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <kha/math/Vector2.h>
#endif
#ifndef INCLUDED_kha2d_CollisionLayer
#include <kha2d/CollisionLayer.h>
#endif
#ifndef INCLUDED_kha2d_Rectangle
#include <kha2d/Rectangle.h>
#endif
#ifndef INCLUDED_kha2d_Scene
#include <kha2d/Scene.h>
#endif
#ifndef INCLUDED_kha2d_Sprite
#include <kha2d/Sprite.h>
#endif
#ifndef INCLUDED_kha2d_Tilemap
#include <kha2d/Tilemap.h>
#endif
#ifndef INCLUDED_kha2d_Tileset
#include <kha2d/Tileset.h>
#endif
namespace kha2d{

Void Scene_obj::__construct()
{
HX_STACK_FRAME("kha2d.Scene","new",0xb160fac6,"kha2d.Scene.new","Sources/kha2d/Scene.hx",10,0x926640c2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(33)
	this->dirtySprites = false;
	HX_STACK_LINE(26)
	this->height = (int)480;
	HX_STACK_LINE(25)
	this->width = (int)640;
	HX_STACK_LINE(43)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	this->sprites = tmp;
	HX_STACK_LINE(44)
	Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	this->backgrounds = tmp1;
	HX_STACK_LINE(45)
	Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	this->foregrounds = tmp2;
	HX_STACK_LINE(46)
	Array< Float > tmp3 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	this->backgroundSpeeds = tmp3;
	HX_STACK_LINE(47)
	Array< Float > tmp4 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	this->foregroundSpeeds = tmp4;
	HX_STACK_LINE(50)
	int tmp5 = ::kha::_Color::Color_Impl__obj::fromBytes((int)0,(int)0,(int)0,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(50)
	this->backgroundColor = tmp5;
	HX_STACK_LINE(51)
	this->set_camx((int)0);
	HX_STACK_LINE(52)
	this->set_camy((int)0);
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new()
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct();
	return _result_;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct();
	return _result_;}

Void Scene_obj::setSize( int width,int height){
{
		HX_STACK_FRAME("kha2d.Scene","setSize",0x5ca136e9,"kha2d.Scene.setSize","Sources/kha2d/Scene.hx",55,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(56)
		this->width = width;
		HX_STACK_LINE(57)
		this->height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,setSize,(void))

Void Scene_obj::clear( ){
{
		HX_STACK_FRAME("kha2d.Scene","clear",0x36d48173,"kha2d.Scene.clear","Sources/kha2d/Scene.hx",60,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->collisionLayer = null();
		HX_STACK_LINE(62)
		this->clearTilemaps();
		HX_STACK_LINE(63)
		Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		this->sprites = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clear,(void))

Void Scene_obj::clearTilemaps( ){
{
		HX_STACK_FRAME("kha2d.Scene","clearTilemaps",0x0464a118,"kha2d.Scene.clearTilemaps","Sources/kha2d/Scene.hx",66,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		this->backgrounds = tmp;
		HX_STACK_LINE(68)
		Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		this->foregrounds = tmp1;
		HX_STACK_LINE(69)
		Array< Float > tmp2 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		this->backgroundSpeeds = tmp2;
		HX_STACK_LINE(70)
		Array< Float > tmp3 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		this->foregroundSpeeds = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clearTilemaps,(void))

Void Scene_obj::setBackgroundColor( int color){
{
		HX_STACK_FRAME("kha2d.Scene","setBackgroundColor",0x663e996d,"kha2d.Scene.setBackgroundColor","Sources/kha2d/Scene.hx",74,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(74)
		this->backgroundColor = color;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setBackgroundColor,(void))

Void Scene_obj::addBackgroundTilemap( ::kha2d::Tilemap tilemap,Float speed){
{
		HX_STACK_FRAME("kha2d.Scene","addBackgroundTilemap",0x5df31959,"kha2d.Scene.addBackgroundTilemap","Sources/kha2d/Scene.hx",77,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tilemap,"tilemap")
		HX_STACK_ARG(speed,"speed")
		HX_STACK_LINE(78)
		Array< ::Dynamic > tmp = this->backgrounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		::kha2d::Tilemap tmp1 = tilemap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		tmp->push(tmp1);
		HX_STACK_LINE(79)
		Array< Float > tmp2 = this->backgroundSpeeds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		Float tmp3 = speed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		tmp2->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,addBackgroundTilemap,(void))

Void Scene_obj::addForegroundTilemap( ::kha2d::Tilemap tilemap,Float speed){
{
		HX_STACK_FRAME("kha2d.Scene","addForegroundTilemap",0x79130924,"kha2d.Scene.addForegroundTilemap","Sources/kha2d/Scene.hx",82,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tilemap,"tilemap")
		HX_STACK_ARG(speed,"speed")
		HX_STACK_LINE(83)
		Array< ::Dynamic > tmp = this->foregrounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		::kha2d::Tilemap tmp1 = tilemap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		tmp->push(tmp1);
		HX_STACK_LINE(84)
		Array< Float > tmp2 = this->foregroundSpeeds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Float tmp3 = speed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		tmp2->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,addForegroundTilemap,(void))

Void Scene_obj::setColissionMap( ::kha2d::Tilemap tilemap){
{
		HX_STACK_FRAME("kha2d.Scene","setColissionMap",0x8e23a5a5,"kha2d.Scene.setColissionMap","Sources/kha2d/Scene.hx",87,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tilemap,"tilemap")
		HX_STACK_LINE(88)
		::kha2d::CollisionLayer tmp = ::kha2d::CollisionLayer_obj::__new(tilemap);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		this->collisionLayer = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setColissionMap,(void))

Void Scene_obj::addHero( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.Scene","addHero",0xcc11d021,"kha2d.Scene.addHero","Sources/kha2d/Scene.hx",91,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(92)
		sprite->removed = false;
		HX_STACK_LINE(93)
		::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		if ((tmp1)){
			HX_STACK_LINE(93)
			::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			::kha2d::Sprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			tmp2->addHero(tmp3);
		}
		HX_STACK_LINE(94)
		Array< ::Dynamic > tmp2 = this->sprites;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		::kha2d::Sprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		tmp2->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addHero,(void))

Void Scene_obj::addEnemy( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.Scene","addEnemy",0x0f399c41,"kha2d.Scene.addEnemy","Sources/kha2d/Scene.hx",97,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(98)
		sprite->removed = false;
		HX_STACK_LINE(99)
		::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		if ((tmp1)){
			HX_STACK_LINE(99)
			::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			::kha2d::Sprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(99)
			tmp2->addEnemy(tmp3);
		}
		HX_STACK_LINE(100)
		Array< ::Dynamic > tmp2 = this->sprites;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		::kha2d::Sprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		tmp2->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addEnemy,(void))

Void Scene_obj::addProjectile( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.Scene","addProjectile",0x68593550,"kha2d.Scene.addProjectile","Sources/kha2d/Scene.hx",103,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(104)
		sprite->removed = false;
		HX_STACK_LINE(105)
		::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		if ((tmp1)){
			HX_STACK_LINE(105)
			::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			::kha2d::Sprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			tmp2->addProjectile(tmp3);
		}
		HX_STACK_LINE(106)
		Array< ::Dynamic > tmp2 = this->sprites;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		::kha2d::Sprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		tmp2->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addProjectile,(void))

Void Scene_obj::addOther( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.Scene","addOther",0xd534f0c9,"kha2d.Scene.addOther","Sources/kha2d/Scene.hx",109,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(110)
		sprite->removed = false;
		HX_STACK_LINE(111)
		::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(111)
			::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			::kha2d::Sprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			tmp2->addOther(tmp3);
		}
		HX_STACK_LINE(112)
		Array< ::Dynamic > tmp2 = this->sprites;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		::kha2d::Sprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		tmp2->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addOther,(void))

Void Scene_obj::removeHero( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.Scene","removeHero",0x0d9000b8,"kha2d.Scene.removeHero","Sources/kha2d/Scene.hx",115,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(116)
		sprite->removed = true;
		HX_STACK_LINE(117)
		this->dirtySprites = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeHero,(void))

Void Scene_obj::removeEnemy( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.Scene","removeEnemy",0x1c25efca,"kha2d.Scene.removeEnemy","Sources/kha2d/Scene.hx",122,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(123)
		sprite->removed = true;
		HX_STACK_LINE(124)
		this->dirtySprites = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeEnemy,(void))

Void Scene_obj::removeProjectile( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.Scene","removeProjectile",0x69c47127,"kha2d.Scene.removeProjectile","Sources/kha2d/Scene.hx",129,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(130)
		sprite->removed = true;
		HX_STACK_LINE(131)
		this->dirtySprites = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeProjectile,(void))

Void Scene_obj::removeOther( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.Scene","removeOther",0xe2214452,"kha2d.Scene.removeOther","Sources/kha2d/Scene.hx",136,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(137)
		sprite->removed = true;
		HX_STACK_LINE(138)
		this->dirtySprites = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeOther,(void))

::kha2d::Sprite Scene_obj::getHero( int index){
	HX_STACK_FRAME("kha2d.Scene","getHero",0x62573d16,"kha2d.Scene.getHero","Sources/kha2d/Scene.hx",141,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(142)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	if ((tmp1)){
		HX_STACK_LINE(142)
		return null();
	}
	else{
		HX_STACK_LINE(143)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		::kha2d::Sprite tmp4 = tmp2->getHero(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		return tmp4;
	}
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getHero,return )

::kha2d::Sprite Scene_obj::getEnemy( int index){
	HX_STACK_FRAME("kha2d.Scene","getEnemy",0xf5b385ac,"kha2d.Scene.getEnemy","Sources/kha2d/Scene.hx",146,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(147)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	if ((tmp1)){
		HX_STACK_LINE(147)
		return null();
	}
	else{
		HX_STACK_LINE(148)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		::kha2d::Sprite tmp4 = tmp2->getEnemy(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		return tmp4;
	}
	HX_STACK_LINE(147)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getEnemy,return )

::kha2d::Sprite Scene_obj::getProjectile( int index){
	HX_STACK_FRAME("kha2d.Scene","getProjectile",0x5a824805,"kha2d.Scene.getProjectile","Sources/kha2d/Scene.hx",151,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(152)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	if ((tmp1)){
		HX_STACK_LINE(152)
		return null();
	}
	else{
		HX_STACK_LINE(153)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		::kha2d::Sprite tmp4 = tmp2->getProjectile(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		return tmp4;
	}
	HX_STACK_LINE(152)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getProjectile,return )

::kha2d::Sprite Scene_obj::getOther( int index){
	HX_STACK_FRAME("kha2d.Scene","getOther",0xbbaeda34,"kha2d.Scene.getOther","Sources/kha2d/Scene.hx",156,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(157)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	if ((tmp1)){
		HX_STACK_LINE(157)
		return null();
	}
	else{
		HX_STACK_LINE(158)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		::kha2d::Sprite tmp4 = tmp2->getOther(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		return tmp4;
	}
	HX_STACK_LINE(157)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getOther,return )

int Scene_obj::countHeroes( ){
	HX_STACK_FRAME("kha2d.Scene","countHeroes",0xf459c17d,"kha2d.Scene.countHeroes","Sources/kha2d/Scene.hx",161,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	if ((tmp1)){
		HX_STACK_LINE(162)
		return (int)0;
	}
	else{
		HX_STACK_LINE(163)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		int tmp3 = tmp2->countHeroes();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		return tmp3;
	}
	HX_STACK_LINE(162)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,countHeroes,return )

int Scene_obj::countEnemies( ){
	HX_STACK_FRAME("kha2d.Scene","countEnemies",0x79206c71,"kha2d.Scene.countEnemies","Sources/kha2d/Scene.hx",166,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	if ((tmp1)){
		HX_STACK_LINE(167)
		return (int)0;
	}
	else{
		HX_STACK_LINE(168)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		int tmp3 = tmp2->countEnemies();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		return tmp3;
	}
	HX_STACK_LINE(167)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,countEnemies,return )

int Scene_obj::countProjectiles( ){
	HX_STACK_FRAME("kha2d.Scene","countProjectiles",0x62b0ebb5,"kha2d.Scene.countProjectiles","Sources/kha2d/Scene.hx",171,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	if ((tmp1)){
		HX_STACK_LINE(172)
		return (int)0;
	}
	else{
		HX_STACK_LINE(173)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		int tmp3 = tmp2->countProjectiles();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		return tmp3;
	}
	HX_STACK_LINE(172)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,countProjectiles,return )

int Scene_obj::countOthers( ){
	HX_STACK_FRAME("kha2d.Scene","countOthers",0x5d384e38,"kha2d.Scene.countOthers","Sources/kha2d/Scene.hx",176,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(177)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	if ((tmp1)){
		HX_STACK_LINE(177)
		return (int)0;
	}
	else{
		HX_STACK_LINE(178)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		int tmp3 = tmp2->countOthers();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		return tmp3;
	}
	HX_STACK_LINE(177)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,countOthers,return )

int Scene_obj::set_camx( int newcamx){
	HX_STACK_FRAME("kha2d.Scene","set_camx",0x95339260,"kha2d.Scene.set_camx","Sources/kha2d/Scene.hx",181,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newcamx,"newcamx")
	HX_STACK_LINE(182)
	this->camx = newcamx;
	HX_STACK_LINE(183)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(184)
		int tmp2 = this->camx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		int tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		Float tmp6 = ::Math_obj::max((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		::kha2d::CollisionLayer tmp7 = this->collisionLayer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		::kha2d::Tilemap tmp8 = tmp7->getMap();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		int tmp9 = tmp8->getWidth();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(184)
		::kha2d::CollisionLayer tmp10 = this->collisionLayer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(184)
		::kha2d::Tilemap tmp11 = tmp10->getMap();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(184)
		::kha2d::Tileset tmp12 = tmp11->getTileset();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(184)
		int tmp13 = tmp12->TILE_WIDTH;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(184)
		int tmp14 = (tmp9 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(184)
		int tmp15 = this->width;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(184)
		int tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(184)
		Float tmp17 = ::Math_obj::min(tmp6,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(184)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(184)
		this->screenOffsetX = tmp18;
		HX_STACK_LINE(185)
		Float tmp19 = this->getWidth();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(185)
		int tmp20 = this->width;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(185)
		bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(185)
		if ((tmp21)){
			HX_STACK_LINE(185)
			this->screenOffsetX = (int)0;
		}
	}
	else{
		HX_STACK_LINE(187)
		int tmp2 = this->camx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		this->screenOffsetX = tmp2;
	}
	HX_STACK_LINE(188)
	int tmp2 = this->camx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,set_camx,return )

int Scene_obj::set_camy( int newcamy){
	HX_STACK_FRAME("kha2d.Scene","set_camy",0x95339261,"kha2d.Scene.set_camy","Sources/kha2d/Scene.hx",193,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newcamy,"newcamy")
	HX_STACK_LINE(194)
	this->camy = newcamy;
	HX_STACK_LINE(195)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	if ((tmp1)){
		HX_STACK_LINE(196)
		int tmp2 = this->camy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		Float tmp6 = ::Math_obj::max((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		::kha2d::CollisionLayer tmp7 = this->collisionLayer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		::kha2d::Tilemap tmp8 = tmp7->getMap();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		int tmp9 = tmp8->getHeight();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		::kha2d::CollisionLayer tmp10 = this->collisionLayer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		::kha2d::Tilemap tmp11 = tmp10->getMap();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(196)
		::kha2d::Tileset tmp12 = tmp11->getTileset();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(196)
		int tmp13 = tmp12->TILE_HEIGHT;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(196)
		int tmp14 = (tmp9 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(196)
		int tmp15 = this->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(196)
		int tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(196)
		Float tmp17 = ::Math_obj::min(tmp6,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(196)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(196)
		this->screenOffsetY = tmp18;
		HX_STACK_LINE(197)
		Float tmp19 = this->getHeight();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(197)
		int tmp20 = this->height;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(197)
		bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(197)
		if ((tmp21)){
			HX_STACK_LINE(197)
			this->screenOffsetY = (int)0;
		}
	}
	else{
		HX_STACK_LINE(199)
		int tmp2 = this->camy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		this->screenOffsetY = tmp2;
	}
	HX_STACK_LINE(200)
	int tmp2 = this->camy;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,set_camy,return )

Void Scene_obj::sort( Array< ::Dynamic > sprites){
{
		HX_STACK_FRAME("kha2d.Scene","sort",0x86d01638,"kha2d.Scene.sort","Sources/kha2d/Scene.hx",203,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprites,"sprites")
		HX_STACK_LINE(204)
		bool tmp = (sprites->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		if ((tmp)){
			HX_STACK_LINE(204)
			return null();
		}
		HX_STACK_LINE(205)
		Array< ::Dynamic > tmp1 = sprites;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::kha2d::Sprite arg0,::kha2d::Sprite arg1){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Sources/kha2d/Scene.hx",205,0x926640c2)
			HX_STACK_ARG(arg0,"arg0")
			HX_STACK_ARG(arg1,"arg1")
			{
				HX_STACK_LINE(206)
				bool tmp2 = (arg0->x < arg1->x);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(206)
				if ((tmp2)){
					HX_STACK_LINE(206)
					return (int)-1;
				}
				else{
					HX_STACK_LINE(207)
					bool tmp3 = (arg0->x == arg1->x);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(207)
					if ((tmp3)){
						HX_STACK_LINE(207)
						return (int)0;
					}
					else{
						HX_STACK_LINE(208)
						return (int)1;
					}
				}
				HX_STACK_LINE(206)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(205)
		::haxe::ds::ArraySort_obj::sort(tmp1, Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sort,(void))

bool Scene_obj::collidesPoint( ::kha::math::Vector2 point){
	HX_STACK_FRAME("kha2d.Scene","collidesPoint",0xcbad6ac1,"kha2d.Scene.collidesPoint","Sources/kha2d/Scene.hx",212,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(213)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(213)
	if ((tmp1)){
		HX_STACK_LINE(213)
		::kha2d::CollisionLayer tmp3 = this->collisionLayer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		::kha2d::CollisionLayer tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(213)
		::kha::math::Vector2 tmp5 = point;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		::kha::math::Vector2 tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		tmp2 = tmp4->collidesPoint(tmp6);
	}
	else{
		HX_STACK_LINE(213)
		tmp2 = false;
	}
	HX_STACK_LINE(213)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,collidesPoint,return )

bool Scene_obj::collidesSprite( ::kha2d::Sprite sprite){
	HX_STACK_FRAME("kha2d.Scene","collidesSprite",0x3877c874,"kha2d.Scene.collidesSprite","Sources/kha2d/Scene.hx",216,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_LINE(217)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	if ((tmp1)){
		HX_STACK_LINE(217)
		::kha2d::CollisionLayer tmp3 = this->collisionLayer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		::kha2d::CollisionLayer tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		::kha2d::Sprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		::kha2d::Sprite tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		tmp2 = tmp4->collidesSprite(tmp6);
	}
	else{
		HX_STACK_LINE(217)
		tmp2 = false;
	}
	HX_STACK_LINE(217)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,collidesSprite,return )

Void Scene_obj::cleanSprites( ){
{
		HX_STACK_FRAME("kha2d.Scene","cleanSprites",0x70e8eb1f,"kha2d.Scene.cleanSprites","Sources/kha2d/Scene.hx",220,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		bool tmp = this->dirtySprites;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		if ((tmp1)){
			HX_STACK_LINE(221)
			return null();
		}
		HX_STACK_LINE(222)
		bool found = true;		HX_STACK_VAR(found,"found");
		HX_STACK_LINE(223)
		while((true)){
			HX_STACK_LINE(223)
			bool tmp2 = found;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			if ((tmp3)){
				HX_STACK_LINE(223)
				break;
			}
			HX_STACK_LINE(224)
			found = false;
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(225)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(225)
				Array< ::Dynamic > tmp4 = this->sprites;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(225)
				Array< ::Dynamic > _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(225)
				while((true)){
					HX_STACK_LINE(225)
					bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(225)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(225)
					if ((tmp6)){
						HX_STACK_LINE(225)
						break;
					}
					HX_STACK_LINE(225)
					::kha2d::Sprite tmp7 = _g1->__get(_g).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(225)
					::kha2d::Sprite sprite = tmp7;		HX_STACK_VAR(sprite,"sprite");
					HX_STACK_LINE(225)
					++(_g);
					HX_STACK_LINE(226)
					bool tmp8 = sprite->removed;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(226)
					if ((tmp8)){
						HX_STACK_LINE(227)
						Array< ::Dynamic > tmp9 = this->sprites;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(227)
						::kha2d::Sprite tmp10 = sprite;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(227)
						tmp9->remove(tmp10);
						HX_STACK_LINE(228)
						found = true;
					}
				}
			}
		}
		HX_STACK_LINE(232)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		if ((tmp3)){
			HX_STACK_LINE(232)
			::kha2d::CollisionLayer tmp4 = this->collisionLayer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(232)
			tmp4->cleanSprites();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,cleanSprites,(void))

Void Scene_obj::update( ){
{
		HX_STACK_FRAME("kha2d.Scene","update",0x427a5f63,"kha2d.Scene.update","Sources/kha2d/Scene.hx",235,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		this->cleanSprites();
		HX_STACK_LINE(237)
		::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		if ((tmp1)){
			HX_STACK_LINE(238)
			::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			int tmp3 = this->screenOffsetX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			int tmp4 = this->screenOffsetX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(238)
			tmp2->advance(tmp3,tmp6);
		}
		HX_STACK_LINE(240)
		this->cleanSprites();
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(254)
			Array< ::Dynamic > tmp2 = this->sprites;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(254)
			Array< ::Dynamic > _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(254)
			while((true)){
				HX_STACK_LINE(254)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(254)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(254)
				if ((tmp4)){
					HX_STACK_LINE(254)
					break;
				}
				HX_STACK_LINE(254)
				::kha2d::Sprite tmp5 = _g1->__get(_g).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(254)
				::kha2d::Sprite sprite = tmp5;		HX_STACK_VAR(sprite,"sprite");
				HX_STACK_LINE(254)
				++(_g);
				HX_STACK_LINE(254)
				sprite->update();
			}
		}
		HX_STACK_LINE(255)
		this->cleanSprites();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,update,(void))

Void Scene_obj::render( ::kha::graphics2::Graphics g){
{
		HX_STACK_FRAME("kha2d.Scene","render",0xc09e44b0,"kha2d.Scene.render","Sources/kha2d/Scene.hx",258,0x926640c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			::kha::math::FastMatrix3 transformation = ::kha::math::FastMatrix3_obj::__new((int)1,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(transformation,"transformation");
			HX_STACK_LINE(259)
			::kha::math::FastMatrix3 tmp = transformation;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(259)
			g->setTransformation(tmp);
			HX_STACK_LINE(259)
			Array< ::Dynamic > tmp1 = g->transformations;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(259)
			int tmp2 = g->transformations->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(259)
			int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(259)
			::kha::math::FastMatrix3 tmp4 = transformation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(259)
			tmp1[tmp3] = tmp4;
		}
		HX_STACK_LINE(260)
		int tmp = this->backgroundColor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		g->set_color(tmp);
		HX_STACK_LINE(261)
		g->clear(null());
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(263)
			Array< ::Dynamic > tmp1 = this->backgrounds;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(263)
			int _g = tmp1->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(263)
			while((true)){
				HX_STACK_LINE(263)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(263)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(263)
				if ((tmp3)){
					HX_STACK_LINE(263)
					break;
				}
				HX_STACK_LINE(263)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(263)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					::kha::math::FastMatrix3 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						int tmp6 = this->screenOffsetX;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(264)
						int tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(264)
						Array< Float > tmp8 = this->backgroundSpeeds;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(264)
						int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(264)
						Float tmp10 = tmp8->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(264)
						Float tmp11 = (tmp7 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(264)
						int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(264)
						::cpp::Float32 x = tmp12;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(264)
						int tmp13 = this->screenOffsetY;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(264)
						int tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(264)
						Array< Float > tmp15 = this->backgroundSpeeds;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(264)
						int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(264)
						Float tmp17 = tmp15->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(264)
						Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(264)
						int tmp19 = ::Math_obj::round(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(264)
						::cpp::Float32 y = tmp19;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(264)
						tmp5 = ::kha::math::FastMatrix3_obj::__new((int)1,(int)0,x,(int)0,(int)1,y,(int)0,(int)0,(int)1);
					}
					HX_STACK_LINE(264)
					::kha::math::FastMatrix3 transformation = tmp5;		HX_STACK_VAR(transformation,"transformation");
					HX_STACK_LINE(264)
					::kha::math::FastMatrix3 tmp6 = transformation;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(264)
					g->setTransformation(tmp6);
					HX_STACK_LINE(264)
					Array< ::Dynamic > tmp7 = g->transformations;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(264)
					int tmp8 = g->transformations->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(264)
					int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(264)
					::kha::math::FastMatrix3 tmp10 = transformation;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(264)
					tmp7[tmp9] = tmp10;
				}
				HX_STACK_LINE(266)
				Array< ::Dynamic > tmp5 = this->backgrounds;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(266)
				::kha2d::Tilemap tmp7 = tmp5->__get(tmp6).StaticCast< ::kha2d::Tilemap >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(266)
				::kha::graphics2::Graphics tmp8 = g;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(266)
				int tmp9 = this->screenOffsetX;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(266)
				Array< Float > tmp10 = this->backgroundSpeeds;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(266)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(266)
				Float tmp12 = tmp10->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(266)
				Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(266)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(266)
				int tmp15 = this->screenOffsetY;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(266)
				Array< Float > tmp16 = this->backgroundSpeeds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(266)
				int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(266)
				Float tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(266)
				Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(266)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(266)
				int tmp21 = this->width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(266)
				int tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(266)
				tmp7->render(tmp8,tmp14,tmp20,tmp21,tmp22);
			}
		}
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			int tmp1 = this->screenOffsetX;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			int tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(269)
			int tmp3 = this->screenOffsetY;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(269)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(269)
			::kha::math::FastMatrix3 transformation = ::kha::math::FastMatrix3_obj::__new((int)1,(int)0,tmp2,(int)0,(int)1,tmp4,(int)0,(int)0,(int)1);		HX_STACK_VAR(transformation,"transformation");
			HX_STACK_LINE(269)
			::kha::math::FastMatrix3 tmp5 = transformation;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(269)
			g->setTransformation(tmp5);
			HX_STACK_LINE(269)
			Array< ::Dynamic > tmp6 = g->transformations;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(269)
			int tmp7 = g->transformations->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(269)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(269)
			::kha::math::FastMatrix3 tmp9 = transformation;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(269)
			tmp6[tmp8] = tmp9;
		}
		HX_STACK_LINE(272)
		Array< ::Dynamic > tmp1 = this->sprites;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		this->sort(tmp1);
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(274)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(274)
			while((true)){
				HX_STACK_LINE(274)
				bool tmp2 = (_g < (int)10);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(274)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(274)
				if ((tmp3)){
					HX_STACK_LINE(274)
					break;
				}
				HX_STACK_LINE(274)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(274)
				int z = tmp4;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(275)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(276)
				while((true)){
					HX_STACK_LINE(276)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(276)
					Array< ::Dynamic > tmp6 = this->sprites;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(276)
					int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(276)
					bool tmp8 = (tmp5 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(276)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(276)
					if ((tmp9)){
						HX_STACK_LINE(276)
						break;
					}
					HX_STACK_LINE(277)
					Array< ::Dynamic > tmp10 = this->sprites;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(277)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(277)
					::kha2d::Sprite tmp12 = tmp10->__get(tmp11).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(277)
					Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(277)
					Array< ::Dynamic > tmp14 = this->sprites;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(277)
					int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(277)
					::kha2d::Sprite tmp16 = tmp14->__get(tmp15).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(277)
					Float tmp17 = tmp16->get_width();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(277)
					Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(277)
					int tmp19 = this->screenOffsetX;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(277)
					bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(277)
					if ((tmp20)){
						HX_STACK_LINE(277)
						break;
					}
					HX_STACK_LINE(278)
					++(i);
				}
				HX_STACK_LINE(280)
				while((true)){
					HX_STACK_LINE(280)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(280)
					Array< ::Dynamic > tmp6 = this->sprites;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(280)
					int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(280)
					bool tmp8 = (tmp5 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(280)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(280)
					if ((tmp9)){
						HX_STACK_LINE(280)
						break;
					}
					HX_STACK_LINE(281)
					Array< ::Dynamic > tmp10 = this->sprites;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(281)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(281)
					::kha2d::Sprite tmp12 = tmp10->__get(tmp11).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(281)
					Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(281)
					int tmp14 = this->screenOffsetX;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(281)
					int tmp15 = this->width;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(281)
					int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(281)
					bool tmp17 = (tmp13 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(281)
					if ((tmp17)){
						HX_STACK_LINE(281)
						break;
					}
					HX_STACK_LINE(282)
					int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(282)
					Array< ::Dynamic > tmp19 = this->sprites;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(282)
					int tmp20 = tmp19->length;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(282)
					bool tmp21 = (tmp18 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(282)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(282)
					if ((tmp21)){
						HX_STACK_LINE(282)
						Array< ::Dynamic > tmp23 = this->sprites;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(282)
						Array< ::Dynamic > tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(282)
						int tmp25 = i;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(282)
						::kha2d::Sprite tmp26 = tmp24->__get(tmp25).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(282)
						::kha2d::Sprite tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(282)
						int tmp28 = tmp27->z;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(282)
						int tmp29 = z;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(282)
						tmp22 = (tmp28 == tmp29);
					}
					else{
						HX_STACK_LINE(282)
						tmp22 = false;
					}
					HX_STACK_LINE(282)
					if ((tmp22)){
						HX_STACK_LINE(282)
						Array< ::Dynamic > tmp23 = this->sprites;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(282)
						int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(282)
						::kha2d::Sprite tmp25 = tmp23->__get(tmp24).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(282)
						::kha::graphics2::Graphics tmp26 = g;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(282)
						tmp25->render(tmp26);
					}
					HX_STACK_LINE(283)
					++(i);
				}
			}
		}
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(287)
			Array< ::Dynamic > tmp2 = this->foregrounds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			int _g = tmp2->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(287)
			while((true)){
				HX_STACK_LINE(287)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(287)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(287)
				if ((tmp4)){
					HX_STACK_LINE(287)
					break;
				}
				HX_STACK_LINE(287)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(287)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::kha::math::FastMatrix3 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						int tmp7 = this->screenOffsetX;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(288)
						int tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(288)
						Array< Float > tmp9 = this->foregroundSpeeds;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(288)
						int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(288)
						Float tmp11 = tmp9->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(288)
						Float tmp12 = (tmp8 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(288)
						int tmp13 = ::Math_obj::round(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(288)
						::cpp::Float32 x = tmp13;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(288)
						int tmp14 = this->screenOffsetY;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(288)
						int tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(288)
						Array< Float > tmp16 = this->foregroundSpeeds;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(288)
						int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(288)
						Float tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(288)
						Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(288)
						int tmp20 = ::Math_obj::round(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(288)
						::cpp::Float32 y = tmp20;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(288)
						tmp6 = ::kha::math::FastMatrix3_obj::__new((int)1,(int)0,x,(int)0,(int)1,y,(int)0,(int)0,(int)1);
					}
					HX_STACK_LINE(288)
					::kha::math::FastMatrix3 transformation = tmp6;		HX_STACK_VAR(transformation,"transformation");
					HX_STACK_LINE(288)
					::kha::math::FastMatrix3 tmp7 = transformation;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(288)
					g->setTransformation(tmp7);
					HX_STACK_LINE(288)
					Array< ::Dynamic > tmp8 = g->transformations;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(288)
					int tmp9 = g->transformations->length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(288)
					int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(288)
					::kha::math::FastMatrix3 tmp11 = transformation;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(288)
					tmp8[tmp10] = tmp11;
				}
				HX_STACK_LINE(290)
				Array< ::Dynamic > tmp6 = this->foregrounds;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(290)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(290)
				::kha2d::Tilemap tmp8 = tmp6->__get(tmp7).StaticCast< ::kha2d::Tilemap >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(290)
				::kha::graphics2::Graphics tmp9 = g;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(290)
				int tmp10 = this->screenOffsetX;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(290)
				Array< Float > tmp11 = this->foregroundSpeeds;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(290)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(290)
				Float tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(290)
				Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(290)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(290)
				int tmp16 = this->screenOffsetY;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(290)
				Array< Float > tmp17 = this->foregroundSpeeds;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(290)
				int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(290)
				Float tmp19 = tmp17->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(290)
				Float tmp20 = (tmp16 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(290)
				int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(290)
				int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(290)
				int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(290)
				tmp8->render(tmp9,tmp15,tmp21,tmp22,tmp23);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,render,(void))

Float Scene_obj::getWidth( ){
	HX_STACK_FRAME("kha2d.Scene","getWidth",0x4f9b296a,"kha2d.Scene.getWidth","Sources/kha2d/Scene.hx",294,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(295)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	if ((tmp1)){
		HX_STACK_LINE(295)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(295)
		::kha2d::Tilemap tmp3 = tmp2->getMap();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		int tmp4 = tmp3->getWidth();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(295)
		::kha2d::CollisionLayer tmp5 = this->collisionLayer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(295)
		::kha2d::Tilemap tmp6 = tmp5->getMap();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(295)
		::kha2d::Tileset tmp7 = tmp6->getTileset();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(295)
		int tmp8 = tmp7->TILE_WIDTH;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(295)
		int tmp9 = (tmp4 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(295)
		return tmp9;
	}
	else{
		HX_STACK_LINE(296)
		return (int)0;
	}
	HX_STACK_LINE(295)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getWidth,return )

Float Scene_obj::getHeight( ){
	HX_STACK_FRAME("kha2d.Scene","getHeight",0x0e788c03,"kha2d.Scene.getHeight","Sources/kha2d/Scene.hx",299,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(300)
	if ((tmp1)){
		HX_STACK_LINE(300)
		::kha2d::CollisionLayer tmp2 = this->collisionLayer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(300)
		::kha2d::Tilemap tmp3 = tmp2->getMap();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(300)
		int tmp4 = tmp3->getHeight();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(300)
		::kha2d::CollisionLayer tmp5 = this->collisionLayer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(300)
		::kha2d::Tilemap tmp6 = tmp5->getMap();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(300)
		::kha2d::Tileset tmp7 = tmp6->getTileset();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(300)
		int tmp8 = tmp7->TILE_HEIGHT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(300)
		int tmp9 = (tmp4 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(300)
		return tmp9;
	}
	else{
		HX_STACK_LINE(301)
		return (int)0;
	}
	HX_STACK_LINE(300)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getHeight,return )

Array< ::Dynamic > Scene_obj::getHeroesBelowPoint( int px,int py){
	HX_STACK_FRAME("kha2d.Scene","getHeroesBelowPoint",0x9d770003,"kha2d.Scene.getHeroesBelowPoint","Sources/kha2d/Scene.hx",304,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_LINE(305)
	Array< ::Dynamic > heroes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(heroes,"heroes");
	HX_STACK_LINE(306)
	::kha2d::CollisionLayer tmp = this->collisionLayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	int tmp1 = tmp->countHeroes();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	int count = tmp1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(307)
		int tmp2 = (count + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		while((true)){
			HX_STACK_LINE(307)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(307)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(307)
			if ((tmp4)){
				HX_STACK_LINE(307)
				break;
			}
			HX_STACK_LINE(307)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(307)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(308)
			::kha2d::CollisionLayer tmp6 = this->collisionLayer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(308)
			int tmp7 = (count - i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(308)
			::kha2d::Sprite tmp8 = tmp6->getHero(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(308)
			::kha2d::Sprite hero = tmp8;		HX_STACK_VAR(hero,"hero");
			HX_STACK_LINE(309)
			bool tmp9 = (hero->x < px);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(309)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(309)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(309)
			if ((tmp10)){
				HX_STACK_LINE(309)
				int tmp12 = px;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(309)
				Float tmp13 = hero->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(309)
				Float tmp14 = hero->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(309)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(309)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(309)
				Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(309)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(309)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(309)
				tmp11 = (tmp12 < tmp19);
			}
			else{
				HX_STACK_LINE(309)
				tmp11 = false;
			}
			HX_STACK_LINE(309)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(309)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(309)
			if ((tmp12)){
				HX_STACK_LINE(309)
				tmp13 = (hero->y < py);
			}
			else{
				HX_STACK_LINE(309)
				tmp13 = false;
			}
			HX_STACK_LINE(309)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(309)
			if ((tmp13)){
				HX_STACK_LINE(309)
				int tmp15 = py;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(309)
				Float tmp16 = hero->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(309)
				Float tmp17 = hero->get_height();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(309)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(309)
				Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(309)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(309)
				tmp14 = (tmp15 < tmp20);
			}
			else{
				HX_STACK_LINE(309)
				tmp14 = false;
			}
			HX_STACK_LINE(309)
			if ((tmp14)){
				HX_STACK_LINE(310)
				::kha2d::Sprite tmp15 = hero;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(310)
				heroes->push(tmp15);
			}
		}
	}
	HX_STACK_LINE(313)
	Array< ::Dynamic > tmp2 = heroes;		HX_STACK_VAR(tmp2,"tmp2");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(::kha2d::Sprite h1,::kha2d::Sprite h2){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Sources/kha2d/Scene.hx",313,0x926640c2)
		HX_STACK_ARG(h1,"h1")
		HX_STACK_ARG(h2,"h2")
		{
			HX_STACK_LINE(313)
			bool tmp3 = (h1->z == h2->z);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(313)
			if ((tmp3)){
				HX_STACK_LINE(313)
				return (int)0;
			}
			else{
				HX_STACK_LINE(313)
				bool tmp4 = (h1->z < h2->z);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(313)
				if ((tmp4)){
					HX_STACK_LINE(313)
					return (int)1;
				}
				else{
					HX_STACK_LINE(313)
					return (int)-1;
				}
			}
			HX_STACK_LINE(313)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(313)
	::haxe::ds::ArraySort_obj::sort(tmp2, Dynamic(new _Function_1_1()));
	HX_STACK_LINE(314)
	Array< ::Dynamic > tmp3 = heroes;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(314)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getHeroesBelowPoint,return )

Array< ::Dynamic > Scene_obj::getSpritesBelowPoint( int px,int py){
	HX_STACK_FRAME("kha2d.Scene","getSpritesBelowPoint",0xadedfbb1,"kha2d.Scene.getSpritesBelowPoint","Sources/kha2d/Scene.hx",317,0x926640c2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_LINE(318)
	Array< ::Dynamic > sprites = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(sprites,"sprites");
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(319)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(319)
		Array< ::Dynamic > tmp = this->sprites;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(319)
		while((true)){
			HX_STACK_LINE(319)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(319)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(319)
			if ((tmp2)){
				HX_STACK_LINE(319)
				break;
			}
			HX_STACK_LINE(319)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(319)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(320)
			Array< ::Dynamic > tmp4 = this->sprites;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(320)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(320)
			::kha2d::Sprite tmp6 = tmp4->__get(tmp5).StaticCast< ::kha2d::Sprite >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(320)
			::kha2d::Sprite sprite = tmp6;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(321)
			Float tmp7 = sprite->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(321)
			Float tmp8 = sprite->get_width();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(321)
			int tmp10 = px;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(321)
			bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(321)
			if ((tmp11)){
				HX_STACK_LINE(322)
				continue;
			}
			HX_STACK_LINE(323)
			bool tmp12 = (sprite->x > px);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(323)
			if ((tmp12)){
				HX_STACK_LINE(324)
				break;
			}
			HX_STACK_LINE(325)
			::kha2d::Rectangle tmp13 = sprite->collisionRect();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(325)
			::kha2d::Rectangle rect = tmp13;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(326)
			bool tmp14 = (rect->x < px);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(326)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(326)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(326)
			if ((tmp15)){
				HX_STACK_LINE(326)
				int tmp17 = px;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(326)
				Float tmp18 = (rect->x + rect->width);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(326)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(326)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(326)
				tmp16 = (tmp17 < tmp20);
			}
			else{
				HX_STACK_LINE(326)
				tmp16 = false;
			}
			HX_STACK_LINE(326)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(326)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(326)
			if ((tmp17)){
				HX_STACK_LINE(326)
				tmp18 = (rect->y < py);
			}
			else{
				HX_STACK_LINE(326)
				tmp18 = false;
			}
			HX_STACK_LINE(326)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(326)
			if ((tmp18)){
				HX_STACK_LINE(326)
				int tmp20 = py;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(326)
				Float tmp21 = (rect->y + rect->height);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(326)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(326)
				tmp19 = (tmp20 < tmp22);
			}
			else{
				HX_STACK_LINE(326)
				tmp19 = false;
			}
			HX_STACK_LINE(326)
			if ((tmp19)){
				HX_STACK_LINE(327)
				::kha2d::Sprite tmp20 = sprite;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(327)
				sprites->push(tmp20);
			}
		}
	}
	HX_STACK_LINE(330)
	Array< ::Dynamic > tmp = sprites;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(::kha2d::Sprite h1,::kha2d::Sprite h2){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Sources/kha2d/Scene.hx",330,0x926640c2)
		HX_STACK_ARG(h1,"h1")
		HX_STACK_ARG(h2,"h2")
		{
			HX_STACK_LINE(330)
			bool tmp1 = (h1->z == h2->z);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(330)
			if ((tmp1)){
				HX_STACK_LINE(330)
				return (int)0;
			}
			else{
				HX_STACK_LINE(330)
				bool tmp2 = (h1->z < h2->z);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(330)
				if ((tmp2)){
					HX_STACK_LINE(330)
					return (int)1;
				}
				else{
					HX_STACK_LINE(330)
					return (int)-1;
				}
			}
			HX_STACK_LINE(330)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(330)
	::haxe::ds::ArraySort_obj::sort(tmp, Dynamic(new _Function_1_1()));
	HX_STACK_LINE(331)
	Array< ::Dynamic > tmp1 = sprites;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getSpritesBelowPoint,return )

::kha2d::Scene Scene_obj::instance;

::kha2d::Scene Scene_obj::the;

::kha2d::Scene Scene_obj::get_the( ){
	HX_STACK_FRAME("kha2d.Scene","get_the",0x71967e6e,"kha2d.Scene.get_the","Sources/kha2d/Scene.hx",37,0x926640c2)
	HX_STACK_LINE(38)
	::kha2d::Scene tmp = ::kha2d::Scene_obj::instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	if ((tmp1)){
		HX_STACK_LINE(38)
		::kha2d::Scene tmp2 = ::kha2d::Scene_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		::kha2d::Scene_obj::instance = tmp2;
	}
	HX_STACK_LINE(39)
	::kha2d::Scene tmp2 = ::kha2d::Scene_obj::instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_the,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(collisionLayer,"collisionLayer");
	HX_MARK_MEMBER_NAME(backgrounds,"backgrounds");
	HX_MARK_MEMBER_NAME(foregrounds,"foregrounds");
	HX_MARK_MEMBER_NAME(backgroundSpeeds,"backgroundSpeeds");
	HX_MARK_MEMBER_NAME(foregroundSpeeds,"foregroundSpeeds");
	HX_MARK_MEMBER_NAME(sprites,"sprites");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(camx,"camx");
	HX_MARK_MEMBER_NAME(camy,"camy");
	HX_MARK_MEMBER_NAME(screenOffsetX,"screenOffsetX");
	HX_MARK_MEMBER_NAME(screenOffsetY,"screenOffsetY");
	HX_MARK_MEMBER_NAME(dirtySprites,"dirtySprites");
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collisionLayer,"collisionLayer");
	HX_VISIT_MEMBER_NAME(backgrounds,"backgrounds");
	HX_VISIT_MEMBER_NAME(foregrounds,"foregrounds");
	HX_VISIT_MEMBER_NAME(backgroundSpeeds,"backgroundSpeeds");
	HX_VISIT_MEMBER_NAME(foregroundSpeeds,"foregroundSpeeds");
	HX_VISIT_MEMBER_NAME(sprites,"sprites");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(camx,"camx");
	HX_VISIT_MEMBER_NAME(camy,"camy");
	HX_VISIT_MEMBER_NAME(screenOffsetX,"screenOffsetX");
	HX_VISIT_MEMBER_NAME(screenOffsetY,"screenOffsetY");
	HX_VISIT_MEMBER_NAME(dirtySprites,"dirtySprites");
}

Dynamic Scene_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"camx") ) { return camx; }
		if (HX_FIELD_EQ(inName,"camy") ) { return camy; }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sprites") ) { return sprites; }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"addHero") ) { return addHero_dyn(); }
		if (HX_FIELD_EQ(inName,"getHero") ) { return getHero_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addEnemy") ) { return addEnemy_dyn(); }
		if (HX_FIELD_EQ(inName,"addOther") ) { return addOther_dyn(); }
		if (HX_FIELD_EQ(inName,"getEnemy") ) { return getEnemy_dyn(); }
		if (HX_FIELD_EQ(inName,"getOther") ) { return getOther_dyn(); }
		if (HX_FIELD_EQ(inName,"set_camx") ) { return set_camx_dyn(); }
		if (HX_FIELD_EQ(inName,"set_camy") ) { return set_camy_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeHero") ) { return removeHero_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"backgrounds") ) { return backgrounds; }
		if (HX_FIELD_EQ(inName,"foregrounds") ) { return foregrounds; }
		if (HX_FIELD_EQ(inName,"removeEnemy") ) { return removeEnemy_dyn(); }
		if (HX_FIELD_EQ(inName,"removeOther") ) { return removeOther_dyn(); }
		if (HX_FIELD_EQ(inName,"countHeroes") ) { return countHeroes_dyn(); }
		if (HX_FIELD_EQ(inName,"countOthers") ) { return countOthers_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dirtySprites") ) { return dirtySprites; }
		if (HX_FIELD_EQ(inName,"countEnemies") ) { return countEnemies_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanSprites") ) { return cleanSprites_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"screenOffsetX") ) { return screenOffsetX; }
		if (HX_FIELD_EQ(inName,"screenOffsetY") ) { return screenOffsetY; }
		if (HX_FIELD_EQ(inName,"clearTilemaps") ) { return clearTilemaps_dyn(); }
		if (HX_FIELD_EQ(inName,"addProjectile") ) { return addProjectile_dyn(); }
		if (HX_FIELD_EQ(inName,"getProjectile") ) { return getProjectile_dyn(); }
		if (HX_FIELD_EQ(inName,"collidesPoint") ) { return collidesPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionLayer") ) { return collisionLayer; }
		if (HX_FIELD_EQ(inName,"collidesSprite") ) { return collidesSprite_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"setColissionMap") ) { return setColissionMap_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"backgroundSpeeds") ) { return backgroundSpeeds; }
		if (HX_FIELD_EQ(inName,"foregroundSpeeds") ) { return foregroundSpeeds; }
		if (HX_FIELD_EQ(inName,"removeProjectile") ) { return removeProjectile_dyn(); }
		if (HX_FIELD_EQ(inName,"countProjectiles") ) { return countProjectiles_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setBackgroundColor") ) { return setBackgroundColor_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getHeroesBelowPoint") ) { return getHeroesBelowPoint_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addBackgroundTilemap") ) { return addBackgroundTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"addForegroundTilemap") ) { return addForegroundTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"getSpritesBelowPoint") ) { return getSpritesBelowPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Scene_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"the") ) { outValue = inCallProp == hx::paccAlways ? get_the() : the; return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_the") ) { outValue = get_the_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
	}
	return false;
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"camx") ) { if (inCallProp == hx::paccAlways) return set_camx(inValue);camx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camy") ) { if (inCallProp == hx::paccAlways) return set_camy(inValue);camy=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sprites") ) { sprites=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"backgrounds") ) { backgrounds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"foregrounds") ) { foregrounds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dirtySprites") ) { dirtySprites=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"screenOffsetX") ) { screenOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenOffsetY") ) { screenOffsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collisionLayer") ) { collisionLayer=inValue.Cast< ::kha2d::CollisionLayer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"backgroundSpeeds") ) { backgroundSpeeds=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"foregroundSpeeds") ) { foregroundSpeeds=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Scene_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"the") ) { the=ioValue.Cast< ::kha2d::Scene >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::kha2d::Scene >(); return true; }
	}
	return false;
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collisionLayer","\xff","\x6b","\xc1","\xbe"));
	outFields->push(HX_HCSTRING("backgrounds","\xc5","\xdc","\xc3","\x33"));
	outFields->push(HX_HCSTRING("foregrounds","\x50","\x92","\x46","\xc0"));
	outFields->push(HX_HCSTRING("backgroundSpeeds","\x9a","\xad","\x91","\x85"));
	outFields->push(HX_HCSTRING("foregroundSpeeds","\x2f","\x00","\xba","\x8d"));
	outFields->push(HX_HCSTRING("sprites","\xce","\xa8","\x8a","\x5f"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("camx","\x89","\x19","\xba","\x41"));
	outFields->push(HX_HCSTRING("camy","\x8a","\x19","\xba","\x41"));
	outFields->push(HX_HCSTRING("screenOffsetX","\x59","\x7b","\x8e","\x74"));
	outFields->push(HX_HCSTRING("screenOffsetY","\x5a","\x7b","\x8e","\x74"));
	outFields->push(HX_HCSTRING("dirtySprites","\xdc","\x86","\x41","\xf6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha2d::CollisionLayer*/ ,(int)offsetof(Scene_obj,collisionLayer),HX_HCSTRING("collisionLayer","\xff","\x6b","\xc1","\xbe")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,backgrounds),HX_HCSTRING("backgrounds","\xc5","\xdc","\xc3","\x33")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,foregrounds),HX_HCSTRING("foregrounds","\x50","\x92","\x46","\xc0")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Scene_obj,backgroundSpeeds),HX_HCSTRING("backgroundSpeeds","\x9a","\xad","\x91","\x85")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Scene_obj,foregroundSpeeds),HX_HCSTRING("foregroundSpeeds","\x2f","\x00","\xba","\x8d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,sprites),HX_HCSTRING("sprites","\xce","\xa8","\x8a","\x5f")},
	{hx::fsInt,(int)offsetof(Scene_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsInt,(int)offsetof(Scene_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Scene_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Scene_obj,camx),HX_HCSTRING("camx","\x89","\x19","\xba","\x41")},
	{hx::fsInt,(int)offsetof(Scene_obj,camy),HX_HCSTRING("camy","\x8a","\x19","\xba","\x41")},
	{hx::fsInt,(int)offsetof(Scene_obj,screenOffsetX),HX_HCSTRING("screenOffsetX","\x59","\x7b","\x8e","\x74")},
	{hx::fsInt,(int)offsetof(Scene_obj,screenOffsetY),HX_HCSTRING("screenOffsetY","\x5a","\x7b","\x8e","\x74")},
	{hx::fsBool,(int)offsetof(Scene_obj,dirtySprites),HX_HCSTRING("dirtySprites","\xdc","\x86","\x41","\xf6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha2d::Scene*/ ,(void *) &Scene_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{hx::fsObject /*::kha2d::Scene*/ ,(void *) &Scene_obj::the,HX_HCSTRING("the","\x71","\x60","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collisionLayer","\xff","\x6b","\xc1","\xbe"),
	HX_HCSTRING("backgrounds","\xc5","\xdc","\xc3","\x33"),
	HX_HCSTRING("foregrounds","\x50","\x92","\x46","\xc0"),
	HX_HCSTRING("backgroundSpeeds","\x9a","\xad","\x91","\x85"),
	HX_HCSTRING("foregroundSpeeds","\x2f","\x00","\xba","\x8d"),
	HX_HCSTRING("sprites","\xce","\xa8","\x8a","\x5f"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("camx","\x89","\x19","\xba","\x41"),
	HX_HCSTRING("camy","\x8a","\x19","\xba","\x41"),
	HX_HCSTRING("screenOffsetX","\x59","\x7b","\x8e","\x74"),
	HX_HCSTRING("screenOffsetY","\x5a","\x7b","\x8e","\x74"),
	HX_HCSTRING("dirtySprites","\xdc","\x86","\x41","\xf6"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clearTilemaps","\x32","\x3b","\xe0","\xca"),
	HX_HCSTRING("setBackgroundColor","\x13","\x21","\xbc","\x9c"),
	HX_HCSTRING("addBackgroundTilemap","\x7f","\x56","\x9e","\x54"),
	HX_HCSTRING("addForegroundTilemap","\x4a","\x46","\xbe","\x6f"),
	HX_HCSTRING("setColissionMap","\x3f","\x7a","\x4d","\x9e"),
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
	HX_HCSTRING("set_camx","\x86","\x2e","\xd2","\x6f"),
	HX_HCSTRING("set_camy","\x87","\x2e","\xd2","\x6f"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("collidesPoint","\xdb","\x04","\x29","\x92"),
	HX_HCSTRING("collidesSprite","\x1a","\x05","\x23","\x1e"),
	HX_HCSTRING("cleanSprites","\x45","\x92","\x3f","\x56"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("getHeroesBelowPoint","\x9d","\x29","\xd0","\x14"),
	HX_HCSTRING("getSpritesBelowPoint","\xd7","\x38","\x99","\xa4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Scene_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(Scene_obj::the,"the");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Scene_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(Scene_obj::the,"the");
};

#endif

hx::Class Scene_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("the","\x71","\x60","\x58","\x00"),
	HX_HCSTRING("get_the","\x08","\x29","\xcd","\x26"),
	::String(null()) };

void Scene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha2d.Scene","\xd4","\xdf","\x56","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Scene_obj::__GetStatic;
	__mClass->mSetStaticField = &Scene_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scene_obj >;
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
