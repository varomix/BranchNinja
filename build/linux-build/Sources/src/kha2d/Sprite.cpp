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
#ifndef INCLUDED_kha_math_FastMatrix3
#include <kha/math/FastMatrix3.h>
#endif
#ifndef INCLUDED_kha_math_Vector2
#include <kha/math/Vector2.h>
#endif
#ifndef INCLUDED_kha2d_Animation
#include <kha2d/Animation.h>
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
namespace kha2d{

Void Sprite_obj::__construct(::kha::Image image,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_z)
{
HX_STACK_FRAME("kha2d.Sprite","new",0xd17eafef,"kha2d.Sprite.new","Sources/kha2d/Sprite.hx",11,0x52a1ce09)
HX_STACK_THIS(this)
HX_STACK_ARG(image,"image")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(__o_z,"z")
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int z = __o_z.Default(1);
{
	HX_STACK_LINE(31)
	this->visible = true;
	HX_STACK_LINE(30)
	this->scaleY = ((Float)1);
	HX_STACK_LINE(29)
	this->scaleX = ((Float)1);
	HX_STACK_LINE(28)
	this->originY = ((Float)0.0);
	HX_STACK_LINE(27)
	this->originX = ((Float)0.0);
	HX_STACK_LINE(26)
	this->angle = ((Float)0.0);
	HX_STACK_LINE(25)
	this->removed = false;
	HX_STACK_LINE(38)
	this->image = image;
	HX_STACK_LINE(39)
	this->x = (int)0;
	HX_STACK_LINE(40)
	this->y = (int)0;
	HX_STACK_LINE(41)
	this->h = height;
	HX_STACK_LINE(42)
	this->w = width;
	HX_STACK_LINE(43)
	Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	if ((tmp1)){
		HX_STACK_LINE(43)
		tmp2 = (image != null());
	}
	else{
		HX_STACK_LINE(43)
		tmp2 = false;
	}
	HX_STACK_LINE(43)
	if ((tmp2)){
		HX_STACK_LINE(43)
		int tmp3 = image->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		this->set_width(tmp3);
	}
	HX_STACK_LINE(44)
	Float tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	if ((tmp4)){
		HX_STACK_LINE(44)
		tmp5 = (image != null());
	}
	else{
		HX_STACK_LINE(44)
		tmp5 = false;
	}
	HX_STACK_LINE(44)
	if ((tmp5)){
		HX_STACK_LINE(44)
		int tmp6 = image->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		this->set_height(tmp6);
	}
	HX_STACK_LINE(45)
	this->z = z;
	HX_STACK_LINE(46)
	Float tmp6 = this->get_width();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	::kha2d::Rectangle tmp8 = ::kha2d::Rectangle_obj::__new((int)0,(int)0,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(46)
	this->collider = tmp8;
	HX_STACK_LINE(47)
	Float tmp9 = this->speedy = (int)0;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(47)
	this->speedx = tmp9;
	HX_STACK_LINE(48)
	this->accx = (int)0;
	HX_STACK_LINE(49)
	this->accy = ((Float)0.2);
	HX_STACK_LINE(50)
	::kha2d::Animation tmp10 = ::kha2d::Animation_obj::create((int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(50)
	this->animation = tmp10;
	HX_STACK_LINE(51)
	this->maxspeedy = ((Float)5.0);
	HX_STACK_LINE(52)
	this->collides = true;
	HX_STACK_LINE(53)
	::kha2d::Rectangle tmp11 = ::kha2d::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(53)
	this->tempcollider = tmp11;
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(::kha::Image image,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_z)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct(image,__o_width,__o_height,__o_z);
	return _result_;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::kha2d::Rectangle Sprite_obj::collisionRect( ){
	HX_STACK_FRAME("kha2d.Sprite","collisionRect",0x9132cb05,"kha2d.Sprite.collisionRect","Sources/kha2d/Sprite.hx",57,0x52a1ce09)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::kha2d::Rectangle tmp1 = this->tempcollider;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	tmp1->x = tmp;
	HX_STACK_LINE(59)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	::kha2d::Rectangle tmp3 = this->tempcollider;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	tmp3->y = tmp2;
	HX_STACK_LINE(60)
	::kha2d::Rectangle tmp4 = this->collider;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	Float tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	Float tmp6 = this->scaleX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	::kha2d::Rectangle tmp8 = this->tempcollider;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(60)
	tmp8->width = tmp7;
	HX_STACK_LINE(61)
	::kha2d::Rectangle tmp9 = this->collider;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(61)
	Float tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(61)
	Float tmp11 = this->scaleY;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(61)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(61)
	::kha2d::Rectangle tmp13 = this->tempcollider;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(61)
	tmp13->height = tmp12;
	HX_STACK_LINE(62)
	::kha2d::Rectangle tmp14 = this->tempcollider;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(62)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,collisionRect,return )

Void Sprite_obj::setAnimation( ::kha2d::Animation animation){
{
		HX_STACK_FRAME("kha2d.Sprite","setAnimation",0x711ee593,"kha2d.Sprite.setAnimation","Sources/kha2d/Sprite.hx",65,0x52a1ce09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animation,"animation")
		HX_STACK_LINE(66)
		::kha2d::Animation tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::kha2d::Animation tmp1 = animation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		tmp->take(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,setAnimation,(void))

Void Sprite_obj::update( ){
{
		HX_STACK_FRAME("kha2d.Sprite","update",0x113589da,"kha2d.Sprite.update","Sources/kha2d/Sprite.hx",69,0x52a1ce09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::kha2d::Animation tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		tmp->next();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,update,(void))

Void Sprite_obj::render( ::kha::graphics2::Graphics g){
{
		HX_STACK_FRAME("kha2d.Sprite","render",0x8f596f27,"kha2d.Sprite.render","Sources/kha2d/Sprite.hx",73,0x52a1ce09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(74)
		::kha::Image tmp = this->image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		if ((tmp1)){
			HX_STACK_LINE(74)
			tmp2 = this->visible;
		}
		else{
			HX_STACK_LINE(74)
			tmp2 = false;
		}
		HX_STACK_LINE(74)
		if ((tmp2)){
			HX_STACK_LINE(75)
			int tmp3 = ::kha::_Color::Color_Impl__obj::White;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			g->set_color(tmp3);
			HX_STACK_LINE(76)
			Float tmp4 = this->angle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			if ((tmp5)){
				HX_STACK_LINE(76)
				::kha::math::FastMatrix3 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				{
					HX_STACK_LINE(76)
					Array< ::Dynamic > tmp7 = g->transformations;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(76)
					int tmp8 = g->transformations->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(76)
					int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(76)
					::kha::math::FastMatrix3 tmp10 = tmp7->__get(tmp9).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(76)
					::kha::math::FastMatrix3 _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(76)
					::cpp::Float32 m__00 = (int)1;		HX_STACK_VAR(m__00,"m__00");
					HX_STACK_LINE(76)
					::cpp::Float32 m__10 = (int)0;		HX_STACK_VAR(m__10,"m__10");
					HX_STACK_LINE(76)
					Float tmp11 = this->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(76)
					Float tmp12 = this->originX;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(76)
					Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(76)
					::cpp::Float32 m__20 = tmp13;		HX_STACK_VAR(m__20,"m__20");
					HX_STACK_LINE(76)
					::cpp::Float32 m__01 = (int)0;		HX_STACK_VAR(m__01,"m__01");
					HX_STACK_LINE(76)
					::cpp::Float32 m__11 = (int)1;		HX_STACK_VAR(m__11,"m__11");
					HX_STACK_LINE(76)
					Float tmp14 = this->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(76)
					Float tmp15 = this->originY;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(76)
					Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(76)
					::cpp::Float32 m__21 = tmp16;		HX_STACK_VAR(m__21,"m__21");
					HX_STACK_LINE(76)
					::cpp::Float32 m__02 = (int)0;		HX_STACK_VAR(m__02,"m__02");
					HX_STACK_LINE(76)
					::cpp::Float32 m__12 = (int)0;		HX_STACK_VAR(m__12,"m__12");
					HX_STACK_LINE(76)
					::cpp::Float32 m__22 = (int)1;		HX_STACK_VAR(m__22,"m__22");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp17 = (_this->_00 * m__00);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp18 = (_this->_10 * m__01);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp20 = (_this->_20 * m__02);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__00 = tmp21;		HX_STACK_VAR(_this__00,"_this__00");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp22 = (_this->_00 * m__10);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp23 = (_this->_10 * m__11);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp25 = (_this->_20 * m__12);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__10 = tmp26;		HX_STACK_VAR(_this__10,"_this__10");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp27 = (_this->_00 * m__20);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp28 = (_this->_10 * m__21);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp30 = (_this->_20 * m__22);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__20 = tmp31;		HX_STACK_VAR(_this__20,"_this__20");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp32 = (_this->_01 * m__00);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp33 = (_this->_11 * m__01);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp35 = (_this->_21 * m__02);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__01 = tmp36;		HX_STACK_VAR(_this__01,"_this__01");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp37 = (_this->_01 * m__10);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp38 = (_this->_11 * m__11);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp40 = (_this->_21 * m__12);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__11 = tmp41;		HX_STACK_VAR(_this__11,"_this__11");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp42 = (_this->_01 * m__20);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp43 = (_this->_11 * m__21);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp45 = (_this->_21 * m__22);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__21 = tmp46;		HX_STACK_VAR(_this__21,"_this__21");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp47 = (_this->_02 * m__00);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp48 = (_this->_12 * m__01);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp50 = (_this->_22 * m__02);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__02 = tmp51;		HX_STACK_VAR(_this__02,"_this__02");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp52 = (_this->_02 * m__10);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp53 = (_this->_12 * m__11);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp55 = (_this->_22 * m__12);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__12 = tmp56;		HX_STACK_VAR(_this__12,"_this__12");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp57 = (_this->_02 * m__20);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp58 = (_this->_12 * m__21);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp60 = (_this->_22 * m__22);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__22 = tmp61;		HX_STACK_VAR(_this__22,"_this__22");
					HX_STACK_LINE(76)
					::kha::math::FastMatrix3 tmp62;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(76)
						Float tmp63 = this->angle;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(76)
						::cpp::Float32 alpha = tmp63;		HX_STACK_VAR(alpha,"alpha");
						HX_STACK_LINE(76)
						::cpp::Float32 tmp64 = alpha;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(76)
						Float tmp65 = ::Math_obj::cos(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(76)
						::cpp::Float32 tmp66 = alpha;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(76)
						Float tmp67 = ::Math_obj::sin(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(76)
						Float tmp68 = -(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(76)
						::cpp::Float32 tmp69 = alpha;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(76)
						Float tmp70 = ::Math_obj::sin(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(76)
						::cpp::Float32 tmp71 = alpha;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(76)
						Float tmp72 = ::Math_obj::cos(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(76)
						tmp62 = ::kha::math::FastMatrix3_obj::__new(tmp65,tmp68,(int)0,tmp70,tmp72,(int)0,(int)0,(int)0,(int)1);
					}
					HX_STACK_LINE(76)
					::kha::math::FastMatrix3 m = tmp62;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp63 = (_this__00 * m->_00);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp64 = (_this__10 * m->_01);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp66 = (_this__20 * m->_02);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__001 = tmp67;		HX_STACK_VAR(_this__001,"_this__001");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp68 = (_this__00 * m->_10);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp69 = (_this__10 * m->_11);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp71 = (_this__20 * m->_12);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__101 = tmp72;		HX_STACK_VAR(_this__101,"_this__101");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp73 = (_this__00 * m->_20);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp74 = (_this__10 * m->_21);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp76 = (_this__20 * m->_22);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__201 = tmp77;		HX_STACK_VAR(_this__201,"_this__201");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp78 = (_this__01 * m->_00);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp79 = (_this__11 * m->_01);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp81 = (_this__21 * m->_02);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__011 = tmp82;		HX_STACK_VAR(_this__011,"_this__011");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp83 = (_this__01 * m->_10);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp84 = (_this__11 * m->_11);		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp86 = (_this__21 * m->_12);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__111 = tmp87;		HX_STACK_VAR(_this__111,"_this__111");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp88 = (_this__01 * m->_20);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp89 = (_this__11 * m->_21);		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp91 = (_this__21 * m->_22);		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__211 = tmp92;		HX_STACK_VAR(_this__211,"_this__211");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp93 = (_this__02 * m->_00);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp94 = (_this__12 * m->_01);		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp96 = (_this__22 * m->_02);		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__021 = tmp97;		HX_STACK_VAR(_this__021,"_this__021");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp98 = (_this__02 * m->_10);		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp99 = (_this__12 * m->_11);		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp101 = (_this__22 * m->_12);		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__121 = tmp102;		HX_STACK_VAR(_this__121,"_this__121");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp103 = (_this__02 * m->_20);		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp104 = (_this__12 * m->_21);		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp106 = (_this__22 * m->_22);		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(76)
					::cpp::Float32 _this__221 = tmp107;		HX_STACK_VAR(_this__221,"_this__221");
					HX_STACK_LINE(76)
					::cpp::Float32 m__001 = (int)1;		HX_STACK_VAR(m__001,"m__001");
					HX_STACK_LINE(76)
					::cpp::Float32 m__101 = (int)0;		HX_STACK_VAR(m__101,"m__101");
					HX_STACK_LINE(76)
					Float tmp108 = this->x;		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(76)
					Float tmp109 = -(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(76)
					Float tmp110 = this->originX;		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(76)
					Float tmp111 = (tmp109 - tmp110);		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(76)
					::cpp::Float32 m__201 = tmp111;		HX_STACK_VAR(m__201,"m__201");
					HX_STACK_LINE(76)
					::cpp::Float32 m__011 = (int)0;		HX_STACK_VAR(m__011,"m__011");
					HX_STACK_LINE(76)
					::cpp::Float32 m__111 = (int)1;		HX_STACK_VAR(m__111,"m__111");
					HX_STACK_LINE(76)
					Float tmp112 = this->y;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(76)
					Float tmp113 = -(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(76)
					Float tmp114 = this->originY;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(76)
					Float tmp115 = (tmp113 - tmp114);		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(76)
					::cpp::Float32 m__211 = tmp115;		HX_STACK_VAR(m__211,"m__211");
					HX_STACK_LINE(76)
					::cpp::Float32 m__021 = (int)0;		HX_STACK_VAR(m__021,"m__021");
					HX_STACK_LINE(76)
					::cpp::Float32 m__121 = (int)0;		HX_STACK_VAR(m__121,"m__121");
					HX_STACK_LINE(76)
					::cpp::Float32 m__221 = (int)1;		HX_STACK_VAR(m__221,"m__221");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp116 = (_this__001 * m__001);		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp117 = (_this__101 * m__011);		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp119 = (_this__201 * m__021);		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp121 = (_this__001 * m__101);		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp122 = (_this__101 * m__111);		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp124 = (_this__201 * m__121);		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp126 = (_this__001 * m__201);		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp127 = (_this__101 * m__211);		HX_STACK_VAR(tmp127,"tmp127");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp129 = (_this__201 * m__221);		HX_STACK_VAR(tmp129,"tmp129");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp131 = (_this__011 * m__001);		HX_STACK_VAR(tmp131,"tmp131");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp132 = (_this__111 * m__011);		HX_STACK_VAR(tmp132,"tmp132");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp134 = (_this__211 * m__021);		HX_STACK_VAR(tmp134,"tmp134");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp136 = (_this__011 * m__101);		HX_STACK_VAR(tmp136,"tmp136");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp137 = (_this__111 * m__111);		HX_STACK_VAR(tmp137,"tmp137");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp139 = (_this__211 * m__121);		HX_STACK_VAR(tmp139,"tmp139");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp141 = (_this__011 * m__201);		HX_STACK_VAR(tmp141,"tmp141");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp142 = (_this__111 * m__211);		HX_STACK_VAR(tmp142,"tmp142");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp144 = (_this__211 * m__221);		HX_STACK_VAR(tmp144,"tmp144");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp146 = (_this__021 * m__001);		HX_STACK_VAR(tmp146,"tmp146");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp147 = (_this__121 * m__011);		HX_STACK_VAR(tmp147,"tmp147");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp149 = (_this__221 * m__021);		HX_STACK_VAR(tmp149,"tmp149");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp151 = (_this__021 * m__101);		HX_STACK_VAR(tmp151,"tmp151");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp152 = (_this__121 * m__111);		HX_STACK_VAR(tmp152,"tmp152");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp154 = (_this__221 * m__121);		HX_STACK_VAR(tmp154,"tmp154");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp156 = (_this__021 * m__201);		HX_STACK_VAR(tmp156,"tmp156");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp157 = (_this__121 * m__211);		HX_STACK_VAR(tmp157,"tmp157");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp159 = (_this__221 * m__221);		HX_STACK_VAR(tmp159,"tmp159");
					HX_STACK_LINE(76)
					::cpp::Float32 tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
					HX_STACK_LINE(76)
					tmp6 = ::kha::math::FastMatrix3_obj::__new(tmp120,tmp125,tmp130,tmp135,tmp140,tmp145,tmp150,tmp155,tmp160);
				}
				HX_STACK_LINE(76)
				g->pushTransformation(tmp6);
			}
			HX_STACK_LINE(77)
			::kha::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			::kha2d::Animation tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			int tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			Float tmp9 = this->w;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(77)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(77)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(77)
			::kha::Image tmp12 = this->image;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(77)
			int tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(77)
			int tmp14 = hx::Mod(tmp11,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(77)
			::kha2d::Animation tmp15 = this->animation;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(77)
			int tmp16 = tmp15->get();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(77)
			Float tmp17 = this->w;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(77)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(77)
			::kha::Image tmp19 = this->image;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(77)
			int tmp20 = tmp19->get_width();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(77)
			Float tmp21 = (Float(tmp18) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(77)
			int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(77)
			Float tmp23 = this->h;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(77)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(77)
			Float tmp25 = this->w;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(77)
			Float tmp26 = this->h;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(77)
			Float tmp27 = this->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(77)
			::kha2d::Rectangle tmp28 = this->collider;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(77)
			Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(77)
			Float tmp30 = this->scaleX;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(77)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(77)
			Float tmp32 = (tmp27 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(77)
			int tmp33 = ::Math_obj::round(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(77)
			Float tmp34 = this->y;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(77)
			::kha2d::Rectangle tmp35 = this->collider;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(77)
			Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(77)
			Float tmp37 = this->scaleY;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(77)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(77)
			Float tmp39 = (tmp34 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(77)
			int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(77)
			Float tmp41 = this->get_width();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(77)
			Float tmp42 = this->get_height();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(77)
			g->drawScaledSubImage(tmp6,tmp14,tmp24,tmp25,tmp26,tmp33,tmp40,tmp41,tmp42);
			HX_STACK_LINE(78)
			Float tmp43 = this->angle;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(78)
			bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(78)
			if ((tmp44)){
				HX_STACK_LINE(78)
				g->popTransformation();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,render,(void))

Void Sprite_obj::hitFrom( ::kha2d::Direction dir){
{
		HX_STACK_FRAME("kha2d.Sprite","hitFrom",0x391b906c,"kha2d.Sprite.hitFrom","Sources/kha2d/Sprite.hx",88,0x52a1ce09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dir,"dir")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,hitFrom,(void))

Void Sprite_obj::hit( ::kha2d::Sprite sprite){
{
		HX_STACK_FRAME("kha2d.Sprite","hit",0xd17a25e2,"kha2d.Sprite.hit","Sources/kha2d/Sprite.hx",92,0x52a1ce09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,hit,(void))

Void Sprite_obj::setImage( ::kha::Image image){
{
		HX_STACK_FRAME("kha2d.Sprite","setImage",0x44b2e26a,"kha2d.Sprite.setImage","Sources/kha2d/Sprite.hx",97,0x52a1ce09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(97)
		this->image = image;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,setImage,(void))

Void Sprite_obj::outOfView( ){
{
		HX_STACK_FRAME("kha2d.Sprite","outOfView",0x7646ff19,"kha2d.Sprite.outOfView","Sources/kha2d/Sprite.hx",100,0x52a1ce09)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,outOfView,(void))

Float Sprite_obj::get_width( ){
	HX_STACK_FRAME("kha2d.Sprite","get_width",0x87a5872c,"kha2d.Sprite.get_width","Sources/kha2d/Sprite.hx",104,0x52a1ce09)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	Float tmp = this->w;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	Float tmp1 = this->scaleX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_width,return )

Float Sprite_obj::set_width( Float value){
	HX_STACK_FRAME("kha2d.Sprite","set_width",0x6af67338,"kha2d.Sprite.set_width","Sources/kha2d/Sprite.hx",108,0x52a1ce09)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(109)
	Float tmp = this->w = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_width,return )

Float Sprite_obj::get_height( ){
	HX_STACK_FRAME("kha2d.Sprite","get_height",0xdf803801,"kha2d.Sprite.get_height","Sources/kha2d/Sprite.hx",114,0x52a1ce09)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	Float tmp = this->h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	Float tmp1 = this->scaleY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_height,return )

Float Sprite_obj::set_height( Float value){
	HX_STACK_FRAME("kha2d.Sprite","set_height",0xe2fdd675,"kha2d.Sprite.set_height","Sources/kha2d/Sprite.hx",118,0x52a1ce09)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(119)
	Float tmp = this->h = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_height,return )

Void Sprite_obj::setPosition( ::kha::math::Vector2 pos){
{
		HX_STACK_FRAME("kha2d.Sprite","setPosition",0x25d6f0fa,"kha2d.Sprite.setPosition","Sources/kha2d/Sprite.hx",124,0x52a1ce09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(125)
		this->x = pos->x;
		HX_STACK_LINE(126)
		this->y = pos->y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,setPosition,(void))


Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(collider,"collider");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(speedx,"speedx");
	HX_MARK_MEMBER_NAME(speedy,"speedy");
	HX_MARK_MEMBER_NAME(accx,"accx");
	HX_MARK_MEMBER_NAME(accy,"accy");
	HX_MARK_MEMBER_NAME(maxspeedy,"maxspeedy");
	HX_MARK_MEMBER_NAME(collides,"collides");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(removed,"removed");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(tempcollider,"tempcollider");
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(collider,"collider");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(speedx,"speedx");
	HX_VISIT_MEMBER_NAME(speedy,"speedy");
	HX_VISIT_MEMBER_NAME(accx,"accx");
	HX_VISIT_MEMBER_NAME(accy,"accy");
	HX_VISIT_MEMBER_NAME(maxspeedy,"maxspeedy");
	HX_VISIT_MEMBER_NAME(collides,"collides");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(removed,"removed");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(tempcollider,"tempcollider");
}

Dynamic Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"accx") ) { return accx; }
		if (HX_FIELD_EQ(inName,"accy") ) { return accy; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"speedx") ) { return speedx; }
		if (HX_FIELD_EQ(inName,"speedy") ) { return speedy; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"removed") ) { return removed; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"hitFrom") ) { return hitFrom_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { return collider; }
		if (HX_FIELD_EQ(inName,"collides") ) { return collides; }
		if (HX_FIELD_EQ(inName,"setImage") ) { return setImage_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		if (HX_FIELD_EQ(inName,"maxspeedy") ) { return maxspeedy; }
		if (HX_FIELD_EQ(inName,"outOfView") ) { return outOfView_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tempcollider") ) { return tempcollider; }
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionRect") ) { return collisionRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"accx") ) { accx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accy") ) { accy=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::kha::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"speedx") ) { speedx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speedy") ) { speedy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"removed") ) { removed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast< ::kha2d::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collides") ) { collides=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::kha2d::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxspeedy") ) { maxspeedy=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tempcollider") ) { tempcollider=inValue.Cast< ::kha2d::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("speedx","\x11","\xff","\xfa","\xba"));
	outFields->push(HX_HCSTRING("speedy","\x12","\xff","\xfa","\xba"));
	outFields->push(HX_HCSTRING("accx","\x17","\x28","\x69","\x40"));
	outFields->push(HX_HCSTRING("accy","\x18","\x28","\x69","\x40"));
	outFields->push(HX_HCSTRING("maxspeedy","\xb6","\x9c","\xf1","\xb5"));
	outFields->push(HX_HCSTRING("collides","\x35","\xdf","\xd5","\xc9"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tempcollider","\x48","\xd6","\xa6","\x95"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(Sprite_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::kha2d::Animation*/ ,(int)offsetof(Sprite_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsObject /*::kha2d::Rectangle*/ ,(int)offsetof(Sprite_obj,collider),HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,speedx),HX_HCSTRING("speedx","\x11","\xff","\xfa","\xba")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,speedy),HX_HCSTRING("speedy","\x12","\xff","\xfa","\xba")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,accx),HX_HCSTRING("accx","\x17","\x28","\x69","\x40")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,accy),HX_HCSTRING("accy","\x18","\x28","\x69","\x40")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,maxspeedy),HX_HCSTRING("maxspeedy","\xb6","\x9c","\xf1","\xb5")},
	{hx::fsBool,(int)offsetof(Sprite_obj,collides),HX_HCSTRING("collides","\x35","\xdf","\xd5","\xc9")},
	{hx::fsInt,(int)offsetof(Sprite_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Sprite_obj,removed),HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,originX),HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,originY),HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,scaleX),HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,scaleY),HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")},
	{hx::fsBool,(int)offsetof(Sprite_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Sprite_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsObject /*::kha2d::Rectangle*/ ,(int)offsetof(Sprite_obj,tempcollider),HX_HCSTRING("tempcollider","\x48","\xd6","\xa6","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("collider","\x34","\xdf","\xd5","\xc9"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("speedx","\x11","\xff","\xfa","\xba"),
	HX_HCSTRING("speedy","\x12","\xff","\xfa","\xba"),
	HX_HCSTRING("accx","\x17","\x28","\x69","\x40"),
	HX_HCSTRING("accy","\x18","\x28","\x69","\x40"),
	HX_HCSTRING("maxspeedy","\xb6","\x9c","\xf1","\xb5"),
	HX_HCSTRING("collides","\x35","\xdf","\xd5","\xc9"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"),
	HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"),
	HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"),
	HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("tempcollider","\x48","\xd6","\xa6","\x95"),
	HX_HCSTRING("collisionRect","\xb6","\x42","\xdd","\x2b"),
	HX_HCSTRING("setAnimation","\x02","\xaf","\x84","\x6f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("hitFrom","\x5d","\x3d","\x48","\xd9"),
	HX_HCSTRING("hit","\x53","\x46","\x4f","\x00"),
	HX_HCSTRING("setImage","\x59","\x88","\x9d","\xcb"),
	HX_HCSTRING("outOfView","\x4a","\x8a","\xad","\xfc"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha2d.Sprite","\x7d","\x8c","\x76","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Sprite_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
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
