#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <kha/math/Vector2.h>
#endif
#ifndef INCLUDED_kha_math_Vector2i
#include <kha/math/Vector2i.h>
#endif
#ifndef INCLUDED_kha2d_Rectangle
#include <kha2d/Rectangle.h>
#endif
#ifndef INCLUDED_kha2d_Sprite
#include <kha2d/Sprite.h>
#endif
#ifndef INCLUDED_kha2d_Tile
#include <kha2d/Tile.h>
#endif
#ifndef INCLUDED_kha2d_Tilemap
#include <kha2d/Tilemap.h>
#endif
#ifndef INCLUDED_kha2d_Tileset
#include <kha2d/Tileset.h>
#endif
namespace kha2d{

Void Tilemap_obj::__construct(::kha::Image image,int tileWidth,int tileHeight,Array< ::Dynamic > map,Array< ::Dynamic > tiles,hx::Null< bool >  __o_repeat)
{
HX_STACK_FRAME("kha2d.Tilemap","new",0xff65dca8,"kha2d.Tilemap.new","Sources/kha2d/Tilemap.hx",18,0x0a78b720)
HX_STACK_THIS(this)
HX_STACK_ARG(image,"image")
HX_STACK_ARG(tileWidth,"tileWidth")
HX_STACK_ARG(tileHeight,"tileHeight")
HX_STACK_ARG(map,"map")
HX_STACK_ARG(tiles,"tiles")
HX_STACK_ARG(__o_repeat,"repeat")
bool repeat = __o_repeat.Default(false);
{
	HX_STACK_LINE(19)
	::kha2d::Tileset tmp = ::kha2d::Tileset_obj::__new(image,tileWidth,tileHeight,tiles);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	this->tileset = tmp;
	HX_STACK_LINE(20)
	this->map = map;
	HX_STACK_LINE(21)
	this->levelWidth = map->length;
	HX_STACK_LINE(22)
	Array< int > tmp1 = map->__get((int)0).StaticCast< Array< int > >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	this->levelHeight = tmp1->length;
	HX_STACK_LINE(23)
	::kha2d::Rectangle tmp2 = ::kha2d::Rectangle_obj::__new((int)0,(int)0,(int)32,(int)32);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	this->collisionRectCache = tmp2;
	HX_STACK_LINE(24)
	this->repeat = repeat;
}
;
	return null();
}

//Tilemap_obj::~Tilemap_obj() { }

Dynamic Tilemap_obj::__CreateEmpty() { return  new Tilemap_obj; }
hx::ObjectPtr< Tilemap_obj > Tilemap_obj::__new(::kha::Image image,int tileWidth,int tileHeight,Array< ::Dynamic > map,Array< ::Dynamic > tiles,hx::Null< bool >  __o_repeat)
{  hx::ObjectPtr< Tilemap_obj > _result_ = new Tilemap_obj();
	_result_->__construct(image,tileWidth,tileHeight,map,tiles,__o_repeat);
	return _result_;}

Dynamic Tilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilemap_obj > _result_ = new Tilemap_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::kha::math::Vector2i Tilemap_obj::index( Float xpos,Float ypos){
	HX_STACK_FRAME("kha2d.Tilemap","index",0x2ef8495a,"kha2d.Tilemap.index","Sources/kha2d/Tilemap.hx",27,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xpos,"xpos")
	HX_STACK_ARG(ypos,"ypos")
	HX_STACK_LINE(28)
	Float tmp = xpos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::kha2d::Tileset tmp1 = this->tileset;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	int tmp2 = tmp1->TILE_WIDTH;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	int xtile = tmp4;		HX_STACK_VAR(xtile,"xtile");
	HX_STACK_LINE(29)
	Float tmp5 = ypos;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	::kha2d::Tileset tmp6 = this->tileset;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	int tmp7 = tmp6->TILE_HEIGHT;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(29)
	int ytile = tmp9;		HX_STACK_VAR(ytile,"ytile");
	HX_STACK_LINE(30)
	::kha::math::Vector2i tmp10 = ::kha::math::Vector2i_obj::__new(xtile,ytile);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(30)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,index,return )

int Tilemap_obj::get( int x,int y){
	HX_STACK_FRAME("kha2d.Tilemap","get",0xff608cde,"kha2d.Tilemap.get","Sources/kha2d/Tilemap.hx",33,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(34)
	Array< ::Dynamic > tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	Array< int > tmp2 = tmp->__get(tmp1).StaticCast< Array< int > >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	int tmp4 = tmp2->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,get,return )

Void Tilemap_obj::set( int x,int y,int value){
{
		HX_STACK_FRAME("kha2d.Tilemap","set",0xff69a7ea,"kha2d.Tilemap.set","Sources/kha2d/Tilemap.hx",37,0x0a78b720)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(38)
		Array< ::Dynamic > tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		Array< int > tmp2 = tmp->__get(tmp1).StaticCast< Array< int > >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		tmp2[tmp3] = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Tilemap_obj,set,(void))

Void Tilemap_obj::render( ::kha::graphics2::Graphics g,int xleft,int ytop,int width,int height){
{
		HX_STACK_FRAME("kha2d.Tilemap","render",0x5b7e3c0e,"kha2d.Tilemap.render","Sources/kha2d/Tilemap.hx",46,0x0a78b720)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(xleft,"xleft")
		HX_STACK_ARG(ytop,"ytop")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(47)
		int tmp = ::kha::_Color::Color_Impl__obj::White;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		g->set_color(tmp);
		HX_STACK_LINE(48)
		bool tmp1 = this->repeat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		if ((tmp1)){
			HX_STACK_LINE(49)
			int tmp2 = xleft;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			::kha2d::Tileset tmp3 = this->tileset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			int tmp4 = tmp3->TILE_WIDTH;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			Float tmp5 = (Float(tmp2) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			int xstart = tmp7;		HX_STACK_VAR(xstart,"xstart");
			HX_STACK_LINE(50)
			int tmp8 = (xleft + width);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(50)
			::kha2d::Tileset tmp9 = this->tileset;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(50)
			int tmp10 = tmp9->TILE_WIDTH;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(50)
			Float tmp11 = (Float(tmp8) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(50)
			Float tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(50)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(50)
			int xend = tmp13;		HX_STACK_VAR(xend,"xend");
			HX_STACK_LINE(51)
			int tmp14 = ytop;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(51)
			::kha2d::Tileset tmp15 = this->tileset;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(51)
			int tmp16 = tmp15->TILE_HEIGHT;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(51)
			Float tmp17 = (Float(tmp14) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(51)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(51)
			int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(51)
			int ystart = tmp19;		HX_STACK_VAR(ystart,"ystart");
			HX_STACK_LINE(52)
			int tmp20 = (ytop + height);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(52)
			::kha2d::Tileset tmp21 = this->tileset;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(52)
			int tmp22 = tmp21->TILE_HEIGHT;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(52)
			Float tmp23 = (Float(tmp20) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(52)
			Float tmp24 = (tmp23 + (int)2);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(52)
			int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(52)
			int yend = tmp25;		HX_STACK_VAR(yend,"yend");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				int _g = xstart;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				while((true)){
					HX_STACK_LINE(53)
					bool tmp26 = (_g < xend);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(53)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(53)
					if ((tmp27)){
						HX_STACK_LINE(53)
						break;
					}
					HX_STACK_LINE(53)
					int tmp28 = (_g)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(53)
					int x = tmp28;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(53)
					int _g1 = ystart;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(53)
					while((true)){
						HX_STACK_LINE(53)
						bool tmp29 = (_g1 < yend);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(53)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(53)
						if ((tmp30)){
							HX_STACK_LINE(53)
							break;
						}
						HX_STACK_LINE(53)
						int tmp31 = (_g1)++;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(53)
						int y = tmp31;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(54)
						::kha2d::Tileset tmp32 = this->tileset;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(54)
						::kha::graphics2::Graphics tmp33 = g;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(54)
						Array< ::Dynamic > tmp34 = this->map;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(54)
						int tmp35 = x;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(54)
						int tmp36 = this->levelWidth;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(54)
						int tmp37 = ::kha2d::Tilemap_obj::mod(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(54)
						Array< int > tmp38 = tmp34->__get(tmp37).StaticCast< Array< int > >();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(54)
						int tmp39 = y;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(54)
						int tmp40 = this->levelHeight;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(54)
						int tmp41 = ::kha2d::Tilemap_obj::mod(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(54)
						int tmp42 = tmp38->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(54)
						int tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(54)
						::kha2d::Tileset tmp44 = this->tileset;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(54)
						int tmp45 = tmp44->TILE_WIDTH;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(54)
						int tmp46 = (tmp43 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(54)
						int tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(54)
						::kha2d::Tileset tmp48 = this->tileset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(54)
						int tmp49 = tmp48->TILE_HEIGHT;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(54)
						int tmp50 = (tmp47 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(54)
						tmp32->render(tmp33,tmp42,tmp46,tmp50);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(58)
			int tmp2 = xleft;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			::kha2d::Tileset tmp3 = this->tileset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			int tmp4 = tmp3->TILE_WIDTH;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			Float tmp5 = (Float(tmp2) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			Float tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			Float tmp7 = ::Math_obj::max(tmp6,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			int xstart = tmp8;		HX_STACK_VAR(xstart,"xstart");
			HX_STACK_LINE(59)
			int tmp9 = (xleft + width);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(59)
			::kha2d::Tileset tmp10 = this->tileset;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			int tmp11 = tmp10->TILE_WIDTH;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(59)
			Float tmp12 = (Float(tmp9) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(59)
			Float tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(59)
			int tmp14 = this->levelWidth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(59)
			Float tmp15 = ::Math_obj::min(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(59)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(59)
			int xend = tmp16;		HX_STACK_VAR(xend,"xend");
			HX_STACK_LINE(60)
			int tmp17 = ytop;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(60)
			::kha2d::Tileset tmp18 = this->tileset;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(60)
			int tmp19 = tmp18->TILE_HEIGHT;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(60)
			Float tmp20 = (Float(tmp17) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(60)
			Float tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(60)
			Float tmp22 = ::Math_obj::max(tmp21,(int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(60)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(60)
			int ystart = tmp23;		HX_STACK_VAR(ystart,"ystart");
			HX_STACK_LINE(61)
			int tmp24 = (ytop + height);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(61)
			::kha2d::Tileset tmp25 = this->tileset;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(61)
			int tmp26 = tmp25->TILE_HEIGHT;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(61)
			Float tmp27 = (Float(tmp24) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(61)
			Float tmp28 = (tmp27 + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(61)
			int tmp29 = this->levelHeight;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(61)
			Float tmp30 = ::Math_obj::min(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(61)
			int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(61)
			int yend = tmp31;		HX_STACK_VAR(yend,"yend");
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				int _g = xstart;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(62)
				while((true)){
					HX_STACK_LINE(62)
					bool tmp32 = (_g < xend);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(62)
					bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(62)
					if ((tmp33)){
						HX_STACK_LINE(62)
						break;
					}
					HX_STACK_LINE(62)
					int tmp34 = (_g)++;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(62)
					int x = tmp34;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(62)
					int _g1 = ystart;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(62)
					while((true)){
						HX_STACK_LINE(62)
						bool tmp35 = (_g1 < yend);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(62)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(62)
						if ((tmp36)){
							HX_STACK_LINE(62)
							break;
						}
						HX_STACK_LINE(62)
						int tmp37 = (_g1)++;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(62)
						int y = tmp37;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(63)
						::kha2d::Tileset tmp38 = this->tileset;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(63)
						::kha::graphics2::Graphics tmp39 = g;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(63)
						Array< ::Dynamic > tmp40 = this->map;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(63)
						int tmp41 = x;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(63)
						Array< int > tmp42 = tmp40->__get(tmp41).StaticCast< Array< int > >();		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(63)
						int tmp43 = y;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(63)
						int tmp44 = tmp42->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(63)
						int tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(63)
						::kha2d::Tileset tmp46 = this->tileset;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(63)
						int tmp47 = tmp46->TILE_WIDTH;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(63)
						int tmp48 = (tmp45 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(63)
						int tmp49 = y;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(63)
						::kha2d::Tileset tmp50 = this->tileset;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(63)
						int tmp51 = tmp50->TILE_HEIGHT;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(63)
						int tmp52 = (tmp49 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(63)
						tmp38->render(tmp39,tmp44,tmp48,tmp52);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Tilemap_obj,render,(void))

bool Tilemap_obj::collidesPoint( ::kha::math::Vector2 point){
	HX_STACK_FRAME("kha2d.Tilemap","collidesPoint",0x87503b23,"kha2d.Tilemap.collidesPoint","Sources/kha2d/Tilemap.hx",68,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(69)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	::kha2d::Tileset tmp1 = this->tileset;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	int tmp2 = tmp1->TILE_WIDTH;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(69)
	int xtile = tmp4;		HX_STACK_VAR(xtile,"xtile");
	HX_STACK_LINE(70)
	Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(70)
	::kha2d::Tileset tmp6 = this->tileset;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	int tmp7 = tmp6->TILE_HEIGHT;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(70)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(70)
	int ytile = tmp9;		HX_STACK_VAR(ytile,"ytile");
	HX_STACK_LINE(71)
	::kha2d::Tileset tmp10 = this->tileset;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(71)
	Array< ::Dynamic > tmp11 = this->map;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(71)
	int tmp12 = xtile;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(71)
	Array< int > tmp13 = tmp11->__get(tmp12).StaticCast< Array< int > >();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(71)
	int tmp14 = ytile;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(71)
	int tmp15 = tmp13->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(71)
	::kha2d::Tile tmp16 = tmp10->tile(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(71)
	bool tmp17 = tmp16->collides;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(71)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,collidesPoint,return )

bool Tilemap_obj::collides( ::kha2d::Sprite sprite){
	HX_STACK_FRAME("kha2d.Tilemap","collides",0xfb8a4ded,"kha2d.Tilemap.collides","Sources/kha2d/Tilemap.hx",74,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_LINE(75)
	::kha2d::Rectangle tmp = sprite->collisionRect();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	::kha2d::Rectangle rect = tmp;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(76)
	bool tmp1 = (rect->x <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(76)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	if ((tmp3)){
		HX_STACK_LINE(76)
		tmp4 = (rect->y <= (int)0);
	}
	else{
		HX_STACK_LINE(76)
		tmp4 = true;
	}
	HX_STACK_LINE(76)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(76)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(76)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(76)
	if ((tmp6)){
		HX_STACK_LINE(76)
		Float tmp8 = (rect->x + rect->width);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(76)
		int tmp11 = this->getWidth();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(76)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(76)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(76)
		::kha2d::Tileset tmp14 = this->tileset;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(76)
		::kha2d::Tileset tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(76)
		::kha2d::Tileset tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(76)
		int tmp17 = tmp16->TILE_WIDTH;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(76)
		int tmp18 = (tmp13 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(76)
		int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(76)
		int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(76)
		tmp7 = (tmp10 >= tmp20);
	}
	else{
		HX_STACK_LINE(76)
		tmp7 = true;
	}
	HX_STACK_LINE(76)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(76)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(76)
	if ((tmp8)){
		HX_STACK_LINE(76)
		Float tmp10 = (rect->y + rect->height);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(76)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(76)
		int tmp12 = this->getHeight();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(76)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(76)
		::kha2d::Tileset tmp14 = this->tileset;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(76)
		::kha2d::Tileset tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(76)
		int tmp16 = tmp15->TILE_HEIGHT;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(76)
		int tmp17 = (tmp13 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(76)
		int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(76)
		tmp9 = (tmp11 >= tmp18);
	}
	else{
		HX_STACK_LINE(76)
		tmp9 = true;
	}
	HX_STACK_LINE(76)
	if ((tmp9)){
		HX_STACK_LINE(76)
		return true;
	}
	HX_STACK_LINE(77)
	Float delta = ((Float)0.001);		HX_STACK_VAR(delta,"delta");
	HX_STACK_LINE(78)
	Float tmp10 = (rect->x + delta);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(78)
	::kha2d::Tileset tmp11 = this->tileset;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(78)
	int tmp12 = tmp11->TILE_WIDTH;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(78)
	Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(78)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(78)
	int xtilestart = tmp14;		HX_STACK_VAR(xtilestart,"xtilestart");
	HX_STACK_LINE(79)
	Float tmp15 = (rect->x + rect->width);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(79)
	Float tmp16 = delta;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(79)
	Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(79)
	::kha2d::Tileset tmp18 = this->tileset;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(79)
	int tmp19 = tmp18->TILE_WIDTH;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(79)
	Float tmp20 = (Float(tmp17) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(79)
	int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(79)
	int xtileend = tmp21;		HX_STACK_VAR(xtileend,"xtileend");
	HX_STACK_LINE(80)
	Float tmp22 = (rect->y + delta);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(80)
	::kha2d::Tileset tmp23 = this->tileset;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(80)
	int tmp24 = tmp23->TILE_HEIGHT;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(80)
	Float tmp25 = (Float(tmp22) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(80)
	int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(80)
	int ytilestart = tmp26;		HX_STACK_VAR(ytilestart,"ytilestart");
	HX_STACK_LINE(81)
	Float tmp27 = (rect->y + rect->height);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(81)
	Float tmp28 = delta;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(81)
	Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(81)
	::kha2d::Tileset tmp30 = this->tileset;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(81)
	int tmp31 = tmp30->TILE_HEIGHT;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(81)
	Float tmp32 = (Float(tmp29) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(81)
	int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(81)
	int ytileend = tmp33;		HX_STACK_VAR(ytileend,"ytileend");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		int _g1 = ytilestart;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		int tmp34 = (ytileend + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(82)
		int _g = tmp34;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		while((true)){
			HX_STACK_LINE(82)
			bool tmp35 = (_g1 < _g);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(82)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(82)
			if ((tmp36)){
				HX_STACK_LINE(82)
				break;
			}
			HX_STACK_LINE(82)
			int tmp37 = (_g1)++;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(82)
			int ytile = tmp37;		HX_STACK_VAR(ytile,"ytile");
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int _g3 = xtilestart;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(83)
				int tmp38 = (xtileend + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(83)
				int _g2 = tmp38;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(83)
				while((true)){
					HX_STACK_LINE(83)
					bool tmp39 = (_g3 < _g2);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(83)
					bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(83)
					if ((tmp40)){
						HX_STACK_LINE(83)
						break;
					}
					HX_STACK_LINE(83)
					int tmp41 = (_g3)++;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(83)
					int xtile = tmp41;		HX_STACK_VAR(xtile,"xtile");
					HX_STACK_LINE(84)
					Float tmp42 = rect->x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(84)
					int tmp43 = xtile;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(84)
					::kha2d::Tileset tmp44 = this->tileset;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(84)
					int tmp45 = tmp44->TILE_WIDTH;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(84)
					int tmp46 = (tmp43 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(84)
					Float tmp47 = (tmp42 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(84)
					::kha2d::Rectangle tmp48 = this->collisionRectCache;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(84)
					tmp48->x = tmp47;
					HX_STACK_LINE(85)
					Float tmp49 = rect->y;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(85)
					int tmp50 = ytile;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(85)
					::kha2d::Tileset tmp51 = this->tileset;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(85)
					int tmp52 = tmp51->TILE_HEIGHT;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(85)
					int tmp53 = (tmp50 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(85)
					Float tmp54 = (tmp49 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(85)
					::kha2d::Rectangle tmp55 = this->collisionRectCache;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(85)
					tmp55->y = tmp54;
					HX_STACK_LINE(86)
					::kha2d::Rectangle tmp56 = this->collisionRectCache;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(86)
					tmp56->width = rect->width;
					HX_STACK_LINE(87)
					::kha2d::Rectangle tmp57 = this->collisionRectCache;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(87)
					tmp57->height = rect->height;
					HX_STACK_LINE(88)
					bool tmp58 = (xtile >= (int)0);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(88)
					bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(88)
					bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(88)
					if ((tmp59)){
						HX_STACK_LINE(88)
						tmp60 = (ytile >= (int)0);
					}
					else{
						HX_STACK_LINE(88)
						tmp60 = false;
					}
					HX_STACK_LINE(88)
					bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(88)
					bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(88)
					if ((tmp61)){
						HX_STACK_LINE(88)
						int tmp63 = xtile;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(88)
						Array< ::Dynamic > tmp64 = this->map;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(88)
						Array< ::Dynamic > tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(88)
						Array< ::Dynamic > tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(88)
						int tmp67 = tmp66->length;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(88)
						tmp62 = (tmp63 < tmp67);
					}
					else{
						HX_STACK_LINE(88)
						tmp62 = false;
					}
					HX_STACK_LINE(88)
					bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(88)
					bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(88)
					if ((tmp63)){
						HX_STACK_LINE(88)
						int tmp65 = ytile;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(88)
						Array< ::Dynamic > tmp66 = this->map;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(88)
						Array< ::Dynamic > tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(88)
						Array< ::Dynamic > tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(88)
						int tmp69 = xtile;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(88)
						Array< int > tmp70 = tmp68->__get(tmp69).StaticCast< Array< int > >();		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(88)
						Array< int > tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(88)
						Array< int > tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(88)
						int tmp73 = tmp72->length;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(88)
						tmp64 = (tmp65 < tmp73);
					}
					else{
						HX_STACK_LINE(88)
						tmp64 = false;
					}
					HX_STACK_LINE(88)
					bool tmp65;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(88)
					if ((tmp64)){
						HX_STACK_LINE(88)
						::kha2d::Tileset tmp66 = this->tileset;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(88)
						::kha2d::Tileset tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(88)
						Array< ::Dynamic > tmp68 = this->map;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(88)
						Array< ::Dynamic > tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(88)
						int tmp70 = xtile;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(88)
						Array< int > tmp71 = tmp69->__get(tmp70).StaticCast< Array< int > >();		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(88)
						Array< int > tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(88)
						int tmp73 = ytile;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(88)
						int tmp74 = tmp72->__get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(88)
						int tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(88)
						int tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(88)
						::kha2d::Tile tmp77 = tmp67->tile(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(88)
						::kha2d::Tile tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(88)
						tmp65 = (tmp78 != null());
					}
					else{
						HX_STACK_LINE(88)
						tmp65 = false;
					}
					HX_STACK_LINE(88)
					if ((tmp65)){
						HX_STACK_LINE(89)
						::kha2d::Tileset tmp66 = this->tileset;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(89)
						Array< ::Dynamic > tmp67 = this->map;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(89)
						int tmp68 = xtile;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(89)
						Array< int > tmp69 = tmp67->__get(tmp68).StaticCast< Array< int > >();		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(89)
						int tmp70 = ytile;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(89)
						int tmp71 = tmp69->__get(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(89)
						::kha2d::Tile tmp72 = tmp66->tile(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(89)
						::kha2d::Rectangle tmp73 = this->collisionRectCache;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(89)
						bool tmp74 = tmp72->collision(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(89)
						if ((tmp74)){
							HX_STACK_LINE(89)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(92)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,collides,return )

bool Tilemap_obj::collidesupdown( int x1,int x2,int y,::kha2d::Rectangle rect){
	HX_STACK_FRAME("kha2d.Tilemap","collidesupdown",0x3a3125ea,"kha2d.Tilemap.collidesupdown","Sources/kha2d/Tilemap.hx",95,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(96)
	bool tmp = (y < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	if ((tmp1)){
		HX_STACK_LINE(96)
		int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		::kha2d::Tileset tmp4 = this->tileset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		::kha2d::Tileset tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		int tmp6 = tmp5->TILE_HEIGHT;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		Float tmp7 = (Float(tmp3) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		int tmp9 = this->levelHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(96)
		tmp2 = (tmp8 >= tmp10);
	}
	else{
		HX_STACK_LINE(96)
		tmp2 = true;
	}
	HX_STACK_LINE(96)
	if ((tmp2)){
		HX_STACK_LINE(96)
		return false;
	}
	HX_STACK_LINE(97)
	int tmp3 = x1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	::kha2d::Tileset tmp4 = this->tileset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	int tmp5 = tmp4->TILE_WIDTH;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	Float tmp6 = (Float(tmp3) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(97)
	int xtilestart = tmp7;		HX_STACK_VAR(xtilestart,"xtilestart");
	HX_STACK_LINE(98)
	int tmp8 = x2;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(98)
	::kha2d::Tileset tmp9 = this->tileset;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(98)
	int tmp10 = tmp9->TILE_WIDTH;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(98)
	Float tmp11 = (Float(tmp8) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(98)
	int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(98)
	int xtileend = tmp12;		HX_STACK_VAR(xtileend,"xtileend");
	HX_STACK_LINE(99)
	int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(99)
	::kha2d::Tileset tmp14 = this->tileset;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(99)
	int tmp15 = tmp14->TILE_HEIGHT;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(99)
	Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(99)
	int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(99)
	int ytile = tmp17;		HX_STACK_VAR(ytile,"ytile");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		int _g1 = xtilestart;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		int tmp18 = (xtileend + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(100)
		int _g = tmp18;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(100)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(100)
			if ((tmp20)){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(100)
			int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(100)
			int xtile = tmp21;		HX_STACK_VAR(xtile,"xtile");
			HX_STACK_LINE(101)
			Float tmp22 = rect->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(101)
			int tmp23 = xtile;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(101)
			::kha2d::Tileset tmp24 = this->tileset;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(101)
			int tmp25 = tmp24->TILE_WIDTH;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(101)
			int tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(101)
			Float tmp27 = (tmp22 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(101)
			::kha2d::Rectangle tmp28 = this->collisionRectCache;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(101)
			tmp28->x = tmp27;
			HX_STACK_LINE(102)
			Float tmp29 = rect->y;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(102)
			int tmp30 = ytile;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(102)
			::kha2d::Tileset tmp31 = this->tileset;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(102)
			int tmp32 = tmp31->TILE_HEIGHT;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(102)
			int tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(102)
			Float tmp34 = (tmp29 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(102)
			::kha2d::Rectangle tmp35 = this->collisionRectCache;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(102)
			tmp35->y = tmp34;
			HX_STACK_LINE(103)
			::kha2d::Rectangle tmp36 = this->collisionRectCache;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(103)
			tmp36->width = rect->width;
			HX_STACK_LINE(104)
			::kha2d::Rectangle tmp37 = this->collisionRectCache;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(104)
			tmp37->height = rect->height;
			HX_STACK_LINE(105)
			::kha2d::Tileset tmp38 = this->tileset;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(105)
			Array< ::Dynamic > tmp39 = this->map;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(105)
			int tmp40 = xtile;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(105)
			Array< int > tmp41 = tmp39->__get(tmp40).StaticCast< Array< int > >();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(105)
			int tmp42 = ytile;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(105)
			int tmp43 = tmp41->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(105)
			::kha2d::Tile tmp44 = tmp38->tile(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(105)
			::kha2d::Rectangle tmp45 = this->collisionRectCache;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(105)
			bool tmp46 = tmp44->collision(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(105)
			if ((tmp46)){
				HX_STACK_LINE(105)
				return true;
			}
		}
	}
	HX_STACK_LINE(107)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Tilemap_obj,collidesupdown,return )

bool Tilemap_obj::collidesrightleft( int x,int y1,int y2,::kha2d::Rectangle rect){
	HX_STACK_FRAME("kha2d.Tilemap","collidesrightleft",0x75d23e56,"kha2d.Tilemap.collidesrightleft","Sources/kha2d/Tilemap.hx",110,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(111)
	bool tmp = (x < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	if ((tmp1)){
		HX_STACK_LINE(111)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		::kha2d::Tileset tmp4 = this->tileset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		::kha2d::Tileset tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		int tmp6 = tmp5->TILE_WIDTH;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		Float tmp7 = (Float(tmp3) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(111)
		int tmp9 = this->levelWidth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(111)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(111)
		tmp2 = (tmp8 >= tmp10);
	}
	else{
		HX_STACK_LINE(111)
		tmp2 = true;
	}
	HX_STACK_LINE(111)
	if ((tmp2)){
		HX_STACK_LINE(111)
		return true;
	}
	HX_STACK_LINE(112)
	int tmp3 = y1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	::kha2d::Tileset tmp4 = this->tileset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	int tmp5 = tmp4->TILE_HEIGHT;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(112)
	Float tmp6 = (Float(tmp3) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(112)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(112)
	int ytilestart = tmp7;		HX_STACK_VAR(ytilestart,"ytilestart");
	HX_STACK_LINE(113)
	int tmp8 = y2;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(113)
	::kha2d::Tileset tmp9 = this->tileset;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(113)
	int tmp10 = tmp9->TILE_HEIGHT;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(113)
	Float tmp11 = (Float(tmp8) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(113)
	int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(113)
	int ytileend = tmp12;		HX_STACK_VAR(ytileend,"ytileend");
	HX_STACK_LINE(114)
	int tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(114)
	::kha2d::Tileset tmp14 = this->tileset;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(114)
	int tmp15 = tmp14->TILE_WIDTH;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(114)
	Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(114)
	int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(114)
	int xtile = tmp17;		HX_STACK_VAR(xtile,"xtile");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		int _g1 = ytilestart;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		int tmp18 = (ytileend + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(115)
		int _g = tmp18;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		while((true)){
			HX_STACK_LINE(115)
			bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(115)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(115)
			if ((tmp20)){
				HX_STACK_LINE(115)
				break;
			}
			HX_STACK_LINE(115)
			int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(115)
			int ytile = tmp21;		HX_STACK_VAR(ytile,"ytile");
			HX_STACK_LINE(116)
			bool tmp22 = (ytile < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(116)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(116)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(116)
			if ((tmp23)){
				HX_STACK_LINE(116)
				int tmp25 = ytile;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(116)
				int tmp26 = this->levelHeight;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(116)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(116)
				tmp24 = (tmp25 >= tmp27);
			}
			else{
				HX_STACK_LINE(116)
				tmp24 = true;
			}
			HX_STACK_LINE(116)
			if ((tmp24)){
				HX_STACK_LINE(116)
				continue;
			}
			HX_STACK_LINE(117)
			Float tmp25 = rect->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(117)
			int tmp26 = xtile;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(117)
			::kha2d::Tileset tmp27 = this->tileset;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(117)
			int tmp28 = tmp27->TILE_WIDTH;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(117)
			int tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(117)
			Float tmp30 = (tmp25 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(117)
			::kha2d::Rectangle tmp31 = this->collisionRectCache;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(117)
			tmp31->x = tmp30;
			HX_STACK_LINE(118)
			Float tmp32 = rect->y;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(118)
			int tmp33 = ytile;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(118)
			::kha2d::Tileset tmp34 = this->tileset;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(118)
			int tmp35 = tmp34->TILE_HEIGHT;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(118)
			int tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(118)
			Float tmp37 = (tmp32 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(118)
			::kha2d::Rectangle tmp38 = this->collisionRectCache;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(118)
			tmp38->y = tmp37;
			HX_STACK_LINE(119)
			::kha2d::Rectangle tmp39 = this->collisionRectCache;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(119)
			tmp39->width = rect->width;
			HX_STACK_LINE(120)
			::kha2d::Rectangle tmp40 = this->collisionRectCache;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(120)
			tmp40->height = rect->height;
			HX_STACK_LINE(121)
			::kha2d::Tileset tmp41 = this->tileset;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(121)
			Array< ::Dynamic > tmp42 = this->map;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(121)
			int tmp43 = xtile;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(121)
			Array< int > tmp44 = tmp42->__get(tmp43).StaticCast< Array< int > >();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(121)
			int tmp45 = ytile;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(121)
			int tmp46 = tmp44->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(121)
			::kha2d::Tile tmp47 = tmp41->tile(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(121)
			::kha2d::Rectangle tmp48 = this->collisionRectCache;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(121)
			bool tmp49 = tmp47->collision(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(121)
			if ((tmp49)){
				HX_STACK_LINE(121)
				return true;
			}
		}
	}
	HX_STACK_LINE(123)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Tilemap_obj,collidesrightleft,return )

bool Tilemap_obj::collideright( ::kha2d::Sprite sprite){
	HX_STACK_FRAME("kha2d.Tilemap","collideright",0x8b7b9e56,"kha2d.Tilemap.collideright","Sources/kha2d/Tilemap.hx",139,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_LINE(140)
	::kha2d::Rectangle tmp = sprite->collisionRect();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::kha2d::Rectangle rect = tmp;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(141)
	bool collided = false;		HX_STACK_VAR(collided,"collided");
	HX_STACK_LINE(142)
	while((true)){
		HX_STACK_LINE(142)
		Float tmp1 = (rect->x + rect->width);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		Float tmp3 = (rect->y + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		int tmp4 = ::kha2d::Tilemap_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		Float tmp5 = (rect->y + rect->height);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(142)
		Float tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		int tmp7 = ::kha2d::Tilemap_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		::kha2d::Rectangle tmp8 = rect;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		bool tmp9 = this->collidesrightleft(tmp2,tmp4,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(142)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(142)
		if ((tmp10)){
			HX_STACK_LINE(142)
			break;
		}
		HX_STACK_LINE(143)
		--(sprite->x);
		HX_STACK_LINE(144)
		collided = true;
		HX_STACK_LINE(145)
		::kha2d::Rectangle tmp11 = sprite->collisionRect();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(145)
		rect = tmp11;
	}
	HX_STACK_LINE(147)
	bool tmp1 = collided;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,collideright,return )

bool Tilemap_obj::collideleft( ::kha2d::Sprite sprite){
	HX_STACK_FRAME("kha2d.Tilemap","collideleft",0xd477e2cd,"kha2d.Tilemap.collideleft","Sources/kha2d/Tilemap.hx",150,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_LINE(151)
	::kha2d::Rectangle tmp = sprite->collisionRect();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	::kha2d::Rectangle rect = tmp;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(152)
	bool collided = false;		HX_STACK_VAR(collided,"collided");
	HX_STACK_LINE(153)
	while((true)){
		HX_STACK_LINE(153)
		Float tmp1 = rect->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		Float tmp3 = (rect->y + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		int tmp4 = ::kha2d::Tilemap_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		Float tmp5 = (rect->y + rect->height);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		Float tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		int tmp7 = ::kha2d::Tilemap_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		::kha2d::Rectangle tmp8 = rect;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(153)
		bool tmp9 = this->collidesrightleft(tmp2,tmp4,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(153)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(153)
		if ((tmp10)){
			HX_STACK_LINE(153)
			break;
		}
		HX_STACK_LINE(154)
		++(sprite->x);
		HX_STACK_LINE(155)
		collided = true;
		HX_STACK_LINE(156)
		::kha2d::Rectangle tmp11 = sprite->collisionRect();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(156)
		rect = tmp11;
	}
	HX_STACK_LINE(158)
	bool tmp1 = collided;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,collideleft,return )

bool Tilemap_obj::collidedown( ::kha2d::Sprite sprite){
	HX_STACK_FRAME("kha2d.Tilemap","collidedown",0xcf35d328,"kha2d.Tilemap.collidedown","Sources/kha2d/Tilemap.hx",161,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_LINE(162)
	::kha2d::Rectangle tmp = sprite->collisionRect();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	::kha2d::Rectangle rect = tmp;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(163)
	bool collided = false;		HX_STACK_VAR(collided,"collided");
	HX_STACK_LINE(164)
	while((true)){
		HX_STACK_LINE(164)
		Float tmp1 = (rect->x + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		int tmp2 = ::kha2d::Tilemap_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		Float tmp3 = (rect->x + rect->width);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		Float tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		int tmp5 = ::kha2d::Tilemap_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		Float tmp6 = (rect->y + rect->height);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		::kha2d::Rectangle tmp8 = rect;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		bool tmp9 = this->collidesupdown(tmp2,tmp5,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(164)
		if ((tmp10)){
			HX_STACK_LINE(164)
			break;
		}
		HX_STACK_LINE(165)
		--(sprite->y);
		HX_STACK_LINE(166)
		collided = true;
		HX_STACK_LINE(167)
		::kha2d::Rectangle tmp11 = sprite->collisionRect();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		rect = tmp11;
	}
	HX_STACK_LINE(169)
	bool tmp1 = collided;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,collidedown,return )

bool Tilemap_obj::collideup( ::kha2d::Sprite sprite){
	HX_STACK_FRAME("kha2d.Tilemap","collideup",0x1d79e3a1,"kha2d.Tilemap.collideup","Sources/kha2d/Tilemap.hx",172,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_LINE(173)
	::kha2d::Rectangle tmp = sprite->collisionRect();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	::kha2d::Rectangle rect = tmp;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(174)
	bool collided = false;		HX_STACK_VAR(collided,"collided");
	HX_STACK_LINE(175)
	while((true)){
		HX_STACK_LINE(175)
		Float tmp1 = (rect->x + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		int tmp2 = ::kha2d::Tilemap_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		Float tmp3 = (rect->x + rect->width);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		Float tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		int tmp5 = ::kha2d::Tilemap_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(175)
		Float tmp6 = rect->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(175)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(175)
		::kha2d::Rectangle tmp8 = rect;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(175)
		bool tmp9 = this->collidesupdown(tmp2,tmp5,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		if ((tmp10)){
			HX_STACK_LINE(175)
			break;
		}
		HX_STACK_LINE(176)
		++(sprite->y);
		HX_STACK_LINE(177)
		collided = true;
		HX_STACK_LINE(178)
		::kha2d::Rectangle tmp11 = sprite->collisionRect();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(178)
		rect = tmp11;
	}
	HX_STACK_LINE(180)
	bool tmp1 = collided;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,collideup,return )

int Tilemap_obj::getWidth( ){
	HX_STACK_FRAME("kha2d.Tilemap","getWidth",0x5bee3448,"kha2d.Tilemap.getWidth","Sources/kha2d/Tilemap.hx",183,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	int tmp = this->levelWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,getWidth,return )

int Tilemap_obj::getHeight( ){
	HX_STACK_FRAME("kha2d.Tilemap","getHeight",0xcacf0365,"kha2d.Tilemap.getHeight","Sources/kha2d/Tilemap.hx",187,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	int tmp = this->levelHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,getHeight,return )

::kha2d::Tileset Tilemap_obj::getTileset( ){
	HX_STACK_FRAME("kha2d.Tilemap","getTileset",0xefac93f6,"kha2d.Tilemap.getTileset","Sources/kha2d/Tilemap.hx",191,0x0a78b720)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::kha2d::Tileset tmp = this->tileset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tilemap_obj,getTileset,return )

int Tilemap_obj::mod( int a,int b){
	HX_STACK_FRAME("kha2d.Tilemap","mod",0xff65230a,"kha2d.Tilemap.mod","Sources/kha2d/Tilemap.hx",41,0x0a78b720)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(42)
	int tmp = hx::Mod(a,b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	int r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(43)
	bool tmp1 = (r < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	if ((tmp1)){
		HX_STACK_LINE(43)
		tmp2 = (r + b);
	}
	else{
		HX_STACK_LINE(43)
		tmp2 = r;
	}
	HX_STACK_LINE(43)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tilemap_obj,mod,return )

int Tilemap_obj::round( Float value){
	HX_STACK_FRAME("kha2d.Tilemap","round",0x5e49a696,"kha2d.Tilemap.round","Sources/kha2d/Tilemap.hx",135,0x0a78b720)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(136)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tilemap_obj,round,return )


Tilemap_obj::Tilemap_obj()
{
}

void Tilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilemap);
	HX_MARK_MEMBER_NAME(tileset,"tileset");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(levelWidth,"levelWidth");
	HX_MARK_MEMBER_NAME(levelHeight,"levelHeight");
	HX_MARK_MEMBER_NAME(collisionRectCache,"collisionRectCache");
	HX_MARK_MEMBER_NAME(repeat,"repeat");
	HX_MARK_END_CLASS();
}

void Tilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileset,"tileset");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(levelWidth,"levelWidth");
	HX_VISIT_MEMBER_NAME(levelHeight,"levelHeight");
	HX_VISIT_MEMBER_NAME(collisionRectCache,"collisionRectCache");
	HX_VISIT_MEMBER_NAME(repeat,"repeat");
}

Dynamic Tilemap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileset") ) { return tileset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collides") ) { return collides_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"collideup") ) { return collideup_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"levelWidth") ) { return levelWidth; }
		if (HX_FIELD_EQ(inName,"getTileset") ) { return getTileset_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"levelHeight") ) { return levelHeight; }
		if (HX_FIELD_EQ(inName,"collideleft") ) { return collideleft_dyn(); }
		if (HX_FIELD_EQ(inName,"collidedown") ) { return collidedown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collideright") ) { return collideright_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collidesPoint") ) { return collidesPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidesupdown") ) { return collidesupdown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"collidesrightleft") ) { return collidesrightleft_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"collisionRectCache") ) { return collisionRectCache; }
	}
	return super::__Field(inName,inCallProp);
}

bool Tilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mod") ) { outValue = mod_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"round") ) { outValue = round_dyn(); return true;  }
	}
	return false;
}

Dynamic Tilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { repeat=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileset") ) { tileset=inValue.Cast< ::kha2d::Tileset >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"levelWidth") ) { levelWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"levelHeight") ) { levelHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"collisionRectCache") ) { collisionRectCache=inValue.Cast< ::kha2d::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tilemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Tilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("levelWidth","\xe2","\x91","\xfc","\xa9"));
	outFields->push(HX_HCSTRING("levelHeight","\x8b","\x8c","\x52","\xc9"));
	outFields->push(HX_HCSTRING("collisionRectCache","\xac","\x33","\x09","\xda"));
	outFields->push(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha2d::Tileset*/ ,(int)offsetof(Tilemap_obj,tileset),HX_HCSTRING("tileset","\x34","\x81","\x93","\x45")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilemap_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,levelWidth),HX_HCSTRING("levelWidth","\xe2","\x91","\xfc","\xa9")},
	{hx::fsInt,(int)offsetof(Tilemap_obj,levelHeight),HX_HCSTRING("levelHeight","\x8b","\x8c","\x52","\xc9")},
	{hx::fsObject /*::kha2d::Rectangle*/ ,(int)offsetof(Tilemap_obj,collisionRectCache),HX_HCSTRING("collisionRectCache","\xac","\x33","\x09","\xda")},
	{hx::fsBool,(int)offsetof(Tilemap_obj,repeat),HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("levelWidth","\xe2","\x91","\xfc","\xa9"),
	HX_HCSTRING("levelHeight","\x8b","\x8c","\x52","\xc9"),
	HX_HCSTRING("collisionRectCache","\xac","\x33","\x09","\xda"),
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("collidesPoint","\xdb","\x04","\x29","\x92"),
	HX_HCSTRING("collides","\x35","\xdf","\xd5","\xc9"),
	HX_HCSTRING("collidesupdown","\x32","\xdd","\x08","\xad"),
	HX_HCSTRING("collidesrightleft","\x0e","\x44","\xfe","\x48"),
	HX_HCSTRING("collideright","\x9e","\x73","\x3d","\x6a"),
	HX_HCSTRING("collideleft","\x85","\x4e","\x94","\xce"),
	HX_HCSTRING("collidedown","\xe0","\x3e","\x52","\xc9"),
	HX_HCSTRING("collideup","\x59","\x71","\x4d","\xd1"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("getTileset","\x3e","\x07","\xf5","\x94"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilemap_obj::__mClass,"__mClass");
};

#endif

hx::Class Tilemap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"),
	HX_HCSTRING("round","\x4e","\xf8","\x65","\xed"),
	::String(null()) };

void Tilemap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha2d.Tilemap","\xb6","\xa8","\x48","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &Tilemap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tilemap_obj >;
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
