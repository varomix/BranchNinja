#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif
#ifndef INCLUDED_kha_math_FastVector3
#include <kha/math/FastVector3.h>
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
#endif
namespace kha{
namespace math{

Void FastMatrix4_obj::__construct(::cpp::Float32 _00,::cpp::Float32 _10,::cpp::Float32 _20,::cpp::Float32 _30,::cpp::Float32 _01,::cpp::Float32 _11,::cpp::Float32 _21,::cpp::Float32 _31,::cpp::Float32 _02,::cpp::Float32 _12,::cpp::Float32 _22,::cpp::Float32 _32,::cpp::Float32 _03,::cpp::Float32 _13,::cpp::Float32 _23,::cpp::Float32 _33)
{
HX_STACK_FRAME("kha.math.FastMatrix4","new",0x1cb0bdcd,"kha.math.FastMatrix4.new","kha/math/FastMatrix4.hx",15,0xae96fea3)
HX_STACK_THIS(this)
HX_STACK_ARG(_00,"_00")
HX_STACK_ARG(_10,"_10")
HX_STACK_ARG(_20,"_20")
HX_STACK_ARG(_30,"_30")
HX_STACK_ARG(_01,"_01")
HX_STACK_ARG(_11,"_11")
HX_STACK_ARG(_21,"_21")
HX_STACK_ARG(_31,"_31")
HX_STACK_ARG(_02,"_02")
HX_STACK_ARG(_12,"_12")
HX_STACK_ARG(_22,"_22")
HX_STACK_ARG(_32,"_32")
HX_STACK_ARG(_03,"_03")
HX_STACK_ARG(_13,"_13")
HX_STACK_ARG(_23,"_23")
HX_STACK_ARG(_33,"_33")
{
	HX_STACK_LINE(16)
	this->_00 = _00;
	HX_STACK_LINE(16)
	this->_10 = _10;
	HX_STACK_LINE(16)
	this->_20 = _20;
	HX_STACK_LINE(16)
	this->_30 = _30;
	HX_STACK_LINE(17)
	this->_01 = _01;
	HX_STACK_LINE(17)
	this->_11 = _11;
	HX_STACK_LINE(17)
	this->_21 = _21;
	HX_STACK_LINE(17)
	this->_31 = _31;
	HX_STACK_LINE(18)
	this->_02 = _02;
	HX_STACK_LINE(18)
	this->_12 = _12;
	HX_STACK_LINE(18)
	this->_22 = _22;
	HX_STACK_LINE(18)
	this->_32 = _32;
	HX_STACK_LINE(19)
	this->_03 = _03;
	HX_STACK_LINE(19)
	this->_13 = _13;
	HX_STACK_LINE(19)
	this->_23 = _23;
	HX_STACK_LINE(19)
	this->_33 = _33;
}
;
	return null();
}

//FastMatrix4_obj::~FastMatrix4_obj() { }

Dynamic FastMatrix4_obj::__CreateEmpty() { return  new FastMatrix4_obj; }
hx::ObjectPtr< FastMatrix4_obj > FastMatrix4_obj::__new(::cpp::Float32 _00,::cpp::Float32 _10,::cpp::Float32 _20,::cpp::Float32 _30,::cpp::Float32 _01,::cpp::Float32 _11,::cpp::Float32 _21,::cpp::Float32 _31,::cpp::Float32 _02,::cpp::Float32 _12,::cpp::Float32 _22,::cpp::Float32 _32,::cpp::Float32 _03,::cpp::Float32 _13,::cpp::Float32 _23,::cpp::Float32 _33)
{  hx::ObjectPtr< FastMatrix4_obj > _result_ = new FastMatrix4_obj();
	_result_->__construct(_00,_10,_20,_30,_01,_11,_21,_31,_02,_12,_22,_32,_03,_13,_23,_33);
	return _result_;}

Dynamic FastMatrix4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FastMatrix4_obj > _result_ = new FastMatrix4_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15]);
	return _result_;}

int FastMatrix4_obj::width;

int FastMatrix4_obj::height;

::kha::math::FastMatrix4 FastMatrix4_obj::fromMatrix4( ::kha::math::Matrix4 m){
	HX_STACK_FRAME("kha.math.FastMatrix4","fromMatrix4",0x530348f6,"kha.math.FastMatrix4.fromMatrix4","kha/math/FastMatrix4.hx",22,0xae96fea3)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(23)
	::kha::math::FastMatrix4 tmp = ::kha::math::FastMatrix4_obj::__new(m->_00,m->_10,m->_20,m->_30,m->_01,m->_11,m->_21,m->_31,m->_02,m->_12,m->_22,m->_32,m->_03,m->_13,m->_23,m->_33);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FastMatrix4_obj,fromMatrix4,return )

::kha::math::FastMatrix4 FastMatrix4_obj::orthogonalProjection( ::cpp::Float32 left,::cpp::Float32 right,::cpp::Float32 bottom,::cpp::Float32 top,::cpp::Float32 zn,::cpp::Float32 zf){
	HX_STACK_FRAME("kha.math.FastMatrix4","orthogonalProjection",0x76379f5b,"kha.math.FastMatrix4.orthogonalProjection","kha/math/FastMatrix4.hx",114,0xae96fea3)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(bottom,"bottom")
	HX_STACK_ARG(top,"top")
	HX_STACK_ARG(zn,"zn")
	HX_STACK_ARG(zf,"zf")
	HX_STACK_LINE(115)
	::cpp::Float32 tmp = (right + left);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	::cpp::Float32 tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	::cpp::Float32 tmp2 = (right - left);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	::cpp::Float32 tx = tmp3;		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(116)
	::cpp::Float32 tmp4 = (top + bottom);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(116)
	::cpp::Float32 tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(116)
	::cpp::Float32 tmp6 = (top - bottom);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(116)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(116)
	::cpp::Float32 ty = tmp7;		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(117)
	::cpp::Float32 tmp8 = (zf + zn);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(117)
	::cpp::Float32 tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(117)
	::cpp::Float32 tmp10 = (zf - zn);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(117)
	Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(117)
	::cpp::Float32 tz = tmp11;		HX_STACK_VAR(tz,"tz");
	HX_STACK_LINE(119)
	::cpp::Float32 tmp12 = (right - left);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(119)
	Float tmp13 = (Float((int)2) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(119)
	::cpp::Float32 tmp14 = tx;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(120)
	::cpp::Float32 tmp15 = (top - bottom);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(120)
	Float tmp16 = (Float((int)2) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(120)
	::cpp::Float32 tmp17 = ty;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(121)
	int tmp18 = (int)-2;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(121)
	::cpp::Float32 tmp19 = (zf - zn);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(121)
	Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(121)
	::cpp::Float32 tmp21 = tz;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(118)
	::kha::math::FastMatrix4 tmp22 = ::kha::math::FastMatrix4_obj::__new(tmp13,(int)0,(int)0,tmp14,(int)0,tmp16,(int)0,tmp17,(int)0,(int)0,tmp20,tmp21,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(118)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FastMatrix4_obj,orthogonalProjection,return )

::kha::math::FastMatrix4 FastMatrix4_obj::perspectiveProjection( ::cpp::Float32 fovY,::cpp::Float32 aspect,::cpp::Float32 zn,::cpp::Float32 zf){
	HX_STACK_FRAME("kha.math.FastMatrix4","perspectiveProjection",0x7ac871d8,"kha.math.FastMatrix4.perspectiveProjection","kha/math/FastMatrix4.hx",126,0xae96fea3)
	HX_STACK_ARG(fovY,"fovY")
	HX_STACK_ARG(aspect,"aspect")
	HX_STACK_ARG(zn,"zn")
	HX_STACK_ARG(zf,"zf")
	HX_STACK_LINE(127)
	Float tmp = (Float(fovY) / Float((int)2));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	Float tmp4 = ::Math_obj::tan(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	Float uh = tmp5;		HX_STACK_VAR(uh,"uh");
	HX_STACK_LINE(128)
	Float tmp6 = (Float(uh) / Float(aspect));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(128)
	Float uw = tmp6;		HX_STACK_VAR(uw,"uw");
	HX_STACK_LINE(130)
	Float tmp7 = uw;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(131)
	Float tmp8 = uh;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(132)
	::cpp::Float32 tmp9 = (zf + zn);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(132)
	::cpp::Float32 tmp10 = (zn - zf);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(132)
	Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(132)
	::cpp::Float32 tmp12 = ((int)2 * zf);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(132)
	::cpp::Float32 tmp13 = zn;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(132)
	::cpp::Float32 tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(132)
	::cpp::Float32 tmp15 = (zn - zf);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(132)
	Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(129)
	::kha::math::FastMatrix4 tmp17 = ::kha::math::FastMatrix4_obj::__new(tmp7,(int)0,(int)0,(int)0,(int)0,tmp8,(int)0,(int)0,(int)0,(int)0,tmp11,tmp16,(int)0,(int)0,(int)-1,(int)0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(129)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FastMatrix4_obj,perspectiveProjection,return )

::kha::math::FastMatrix4 FastMatrix4_obj::lookAt( ::kha::math::FastVector3 eye,::kha::math::FastVector3 at,::kha::math::FastVector3 up){
	HX_STACK_FRAME("kha.math.FastMatrix4","lookAt",0x5676e9e5,"kha.math.FastMatrix4.lookAt","kha/math/FastMatrix4.hx",137,0xae96fea3)
	HX_STACK_ARG(eye,"eye")
	HX_STACK_ARG(at,"at")
	HX_STACK_ARG(up,"up")
	HX_STACK_LINE(138)
	::cpp::Float32 tmp = (at->x - eye->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	::cpp::Float32 tmp1 = (at->y - eye->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	::cpp::Float32 tmp2 = (at->z - eye->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	::kha::math::FastVector3 zaxis = ::kha::math::FastVector3_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(zaxis,"zaxis");
	HX_STACK_LINE(139)
	zaxis->set_length((int)1);
	HX_STACK_LINE(140)
	::kha::math::FastVector3 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::cpp::Float32 tmp4 = (zaxis->y * up->z);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		::cpp::Float32 tmp5 = (zaxis->z * up->y);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		::cpp::Float32 tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		::cpp::Float32 _x = tmp6;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(140)
		::cpp::Float32 tmp7 = (zaxis->z * up->x);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		::cpp::Float32 tmp8 = (zaxis->x * up->z);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		::cpp::Float32 tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		::cpp::Float32 _y = tmp9;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(140)
		::cpp::Float32 tmp10 = (zaxis->x * up->y);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		::cpp::Float32 tmp11 = (zaxis->y * up->x);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(140)
		::cpp::Float32 tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		::cpp::Float32 _z = tmp12;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(140)
		tmp3 = ::kha::math::FastVector3_obj::__new(_x,_y,_z);
	}
	HX_STACK_LINE(140)
	::kha::math::FastVector3 xaxis = tmp3;		HX_STACK_VAR(xaxis,"xaxis");
	HX_STACK_LINE(141)
	xaxis->set_length((int)1);
	HX_STACK_LINE(142)
	::cpp::Float32 tmp4 = (xaxis->y * zaxis->z);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(142)
	::cpp::Float32 tmp5 = (xaxis->z * zaxis->y);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(142)
	::cpp::Float32 tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(142)
	::cpp::Float32 _x = tmp6;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(142)
	::cpp::Float32 tmp7 = (xaxis->z * zaxis->x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(142)
	::cpp::Float32 tmp8 = (xaxis->x * zaxis->z);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(142)
	::cpp::Float32 tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(142)
	::cpp::Float32 _y = tmp9;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(142)
	::cpp::Float32 tmp10 = (xaxis->x * zaxis->y);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(142)
	::cpp::Float32 tmp11 = (xaxis->y * zaxis->x);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(142)
	::cpp::Float32 tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(142)
	::cpp::Float32 _z = tmp12;		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(142)
	::cpp::Float32 yaxis_x = _x;		HX_STACK_VAR(yaxis_x,"yaxis_x");
	HX_STACK_LINE(142)
	::cpp::Float32 yaxis_y = _y;		HX_STACK_VAR(yaxis_y,"yaxis_y");
	HX_STACK_LINE(142)
	::cpp::Float32 yaxis_z = _z;		HX_STACK_VAR(yaxis_z,"yaxis_z");
	HX_STACK_LINE(145)
	::cpp::Float32 tmp13 = xaxis->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(145)
	::cpp::Float32 tmp14 = xaxis->y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(145)
	::cpp::Float32 tmp15 = xaxis->z;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(145)
	::cpp::Float32 tmp16 = (xaxis->x * eye->x);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(145)
	::cpp::Float32 tmp17 = (xaxis->y * eye->y);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(145)
	::cpp::Float32 tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(145)
	::cpp::Float32 tmp19 = (xaxis->z * eye->z);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(145)
	::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(145)
	::cpp::Float32 tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(137)
	::cpp::Float32 tmp22 = yaxis_x;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(137)
	::cpp::Float32 tmp23 = yaxis_y;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(137)
	::cpp::Float32 tmp24 = yaxis_z;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(146)
	::cpp::Float32 tmp25 = (yaxis_x * eye->x);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(146)
	::cpp::Float32 tmp26 = (yaxis_y * eye->y);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(146)
	::cpp::Float32 tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(146)
	::cpp::Float32 tmp28 = (yaxis_z * eye->z);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(146)
	::cpp::Float32 tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(146)
	::cpp::Float32 tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp31 = zaxis->x;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp33 = zaxis->y;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp35 = zaxis->z;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp37 = (zaxis->x * eye->x);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp38 = (zaxis->y * eye->y);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp40 = (zaxis->z * eye->z);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(147)
	::cpp::Float32 tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(144)
	::kha::math::FastMatrix4 tmp42 = ::kha::math::FastMatrix4_obj::__new(tmp13,tmp14,tmp15,tmp21,tmp22,tmp23,tmp24,tmp30,tmp32,tmp34,tmp36,tmp41,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(144)
	return tmp42;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FastMatrix4_obj,lookAt,return )


FastMatrix4_obj::FastMatrix4_obj()
{
}

void FastMatrix4_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FastMatrix4);
	HX_MARK_MEMBER_NAME(_00,"_00");
	HX_MARK_MEMBER_NAME(_10,"_10");
	HX_MARK_MEMBER_NAME(_20,"_20");
	HX_MARK_MEMBER_NAME(_30,"_30");
	HX_MARK_MEMBER_NAME(_01,"_01");
	HX_MARK_MEMBER_NAME(_11,"_11");
	HX_MARK_MEMBER_NAME(_21,"_21");
	HX_MARK_MEMBER_NAME(_31,"_31");
	HX_MARK_MEMBER_NAME(_02,"_02");
	HX_MARK_MEMBER_NAME(_12,"_12");
	HX_MARK_MEMBER_NAME(_22,"_22");
	HX_MARK_MEMBER_NAME(_32,"_32");
	HX_MARK_MEMBER_NAME(_03,"_03");
	HX_MARK_MEMBER_NAME(_13,"_13");
	HX_MARK_MEMBER_NAME(_23,"_23");
	HX_MARK_MEMBER_NAME(_33,"_33");
	HX_MARK_END_CLASS();
}

void FastMatrix4_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_00,"_00");
	HX_VISIT_MEMBER_NAME(_10,"_10");
	HX_VISIT_MEMBER_NAME(_20,"_20");
	HX_VISIT_MEMBER_NAME(_30,"_30");
	HX_VISIT_MEMBER_NAME(_01,"_01");
	HX_VISIT_MEMBER_NAME(_11,"_11");
	HX_VISIT_MEMBER_NAME(_21,"_21");
	HX_VISIT_MEMBER_NAME(_31,"_31");
	HX_VISIT_MEMBER_NAME(_02,"_02");
	HX_VISIT_MEMBER_NAME(_12,"_12");
	HX_VISIT_MEMBER_NAME(_22,"_22");
	HX_VISIT_MEMBER_NAME(_32,"_32");
	HX_VISIT_MEMBER_NAME(_03,"_03");
	HX_VISIT_MEMBER_NAME(_13,"_13");
	HX_VISIT_MEMBER_NAME(_23,"_23");
	HX_VISIT_MEMBER_NAME(_33,"_33");
}

Dynamic FastMatrix4_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_00") ) { return _00; }
		if (HX_FIELD_EQ(inName,"_10") ) { return _10; }
		if (HX_FIELD_EQ(inName,"_20") ) { return _20; }
		if (HX_FIELD_EQ(inName,"_30") ) { return _30; }
		if (HX_FIELD_EQ(inName,"_01") ) { return _01; }
		if (HX_FIELD_EQ(inName,"_11") ) { return _11; }
		if (HX_FIELD_EQ(inName,"_21") ) { return _21; }
		if (HX_FIELD_EQ(inName,"_31") ) { return _31; }
		if (HX_FIELD_EQ(inName,"_02") ) { return _02; }
		if (HX_FIELD_EQ(inName,"_12") ) { return _12; }
		if (HX_FIELD_EQ(inName,"_22") ) { return _22; }
		if (HX_FIELD_EQ(inName,"_32") ) { return _32; }
		if (HX_FIELD_EQ(inName,"_03") ) { return _03; }
		if (HX_FIELD_EQ(inName,"_13") ) { return _13; }
		if (HX_FIELD_EQ(inName,"_23") ) { return _23; }
		if (HX_FIELD_EQ(inName,"_33") ) { return _33; }
	}
	return super::__Field(inName,inCallProp);
}

bool FastMatrix4_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"lookAt") ) { outValue = lookAt_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromMatrix4") ) { outValue = fromMatrix4_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"orthogonalProjection") ) { outValue = orthogonalProjection_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"perspectiveProjection") ) { outValue = perspectiveProjection_dyn(); return true;  }
	}
	return false;
}

Dynamic FastMatrix4_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_00") ) { _00=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_10") ) { _10=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_20") ) { _20=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_30") ) { _30=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_01") ) { _01=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_11") ) { _11=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_21") ) { _21=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_31") ) { _31=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_02") ) { _02=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_12") ) { _12=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_22") ) { _22=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_32") ) { _32=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_03") ) { _03=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_13") ) { _13=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_23") ) { _23=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_33") ) { _33=inValue.Cast< ::cpp::Float32 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FastMatrix4_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FastMatrix4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_00","\x1f","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_10","\xfe","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_20","\xdd","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_30","\xbc","\x42","\x48","\x00"));
	outFields->push(HX_HCSTRING("_01","\x20","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_11","\xff","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_21","\xde","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_31","\xbd","\x42","\x48","\x00"));
	outFields->push(HX_HCSTRING("_02","\x21","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_12","\x00","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_22","\xdf","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_32","\xbe","\x42","\x48","\x00"));
	outFields->push(HX_HCSTRING("_03","\x22","\x40","\x48","\x00"));
	outFields->push(HX_HCSTRING("_13","\x01","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_23","\xe0","\x41","\x48","\x00"));
	outFields->push(HX_HCSTRING("_33","\xbf","\x42","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_00),HX_HCSTRING("_00","\x1f","\x40","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_10),HX_HCSTRING("_10","\xfe","\x40","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_20),HX_HCSTRING("_20","\xdd","\x41","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_30),HX_HCSTRING("_30","\xbc","\x42","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_01),HX_HCSTRING("_01","\x20","\x40","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_11),HX_HCSTRING("_11","\xff","\x40","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_21),HX_HCSTRING("_21","\xde","\x41","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_31),HX_HCSTRING("_31","\xbd","\x42","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_02),HX_HCSTRING("_02","\x21","\x40","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_12),HX_HCSTRING("_12","\x00","\x41","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_22),HX_HCSTRING("_22","\xdf","\x41","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_32),HX_HCSTRING("_32","\xbe","\x42","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_03),HX_HCSTRING("_03","\x22","\x40","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_13),HX_HCSTRING("_13","\x01","\x41","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_23),HX_HCSTRING("_23","\xe0","\x41","\x48","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastMatrix4_obj,_33),HX_HCSTRING("_33","\xbf","\x42","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FastMatrix4_obj::width,HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(void *) &FastMatrix4_obj::height,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_00","\x1f","\x40","\x48","\x00"),
	HX_HCSTRING("_10","\xfe","\x40","\x48","\x00"),
	HX_HCSTRING("_20","\xdd","\x41","\x48","\x00"),
	HX_HCSTRING("_30","\xbc","\x42","\x48","\x00"),
	HX_HCSTRING("_01","\x20","\x40","\x48","\x00"),
	HX_HCSTRING("_11","\xff","\x40","\x48","\x00"),
	HX_HCSTRING("_21","\xde","\x41","\x48","\x00"),
	HX_HCSTRING("_31","\xbd","\x42","\x48","\x00"),
	HX_HCSTRING("_02","\x21","\x40","\x48","\x00"),
	HX_HCSTRING("_12","\x00","\x41","\x48","\x00"),
	HX_HCSTRING("_22","\xdf","\x41","\x48","\x00"),
	HX_HCSTRING("_32","\xbe","\x42","\x48","\x00"),
	HX_HCSTRING("_03","\x22","\x40","\x48","\x00"),
	HX_HCSTRING("_13","\x01","\x41","\x48","\x00"),
	HX_HCSTRING("_23","\xe0","\x41","\x48","\x00"),
	HX_HCSTRING("_33","\xbf","\x42","\x48","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastMatrix4_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FastMatrix4_obj::width,"width");
	HX_MARK_MEMBER_NAME(FastMatrix4_obj::height,"height");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastMatrix4_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FastMatrix4_obj::width,"width");
	HX_VISIT_MEMBER_NAME(FastMatrix4_obj::height,"height");
};

#endif

hx::Class FastMatrix4_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("fromMatrix4","\x89","\xa6","\xa7","\x2b"),
	HX_HCSTRING("orthogonalProjection","\x68","\x77","\x62","\xe1"),
	HX_HCSTRING("perspectiveProjection","\x2b","\xa5","\x1a","\xd5"),
	HX_HCSTRING("lookAt","\x32","\x75","\xb5","\x61"),
	::String(null()) };

void FastMatrix4_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.math.FastMatrix4","\x5b","\xd3","\x18","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FastMatrix4_obj::__GetStatic;
	__mClass->mSetStaticField = &FastMatrix4_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FastMatrix4_obj >;
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

void FastMatrix4_obj::__boot()
{
	width= (int)4;
	height= (int)4;
}

} // end namespace kha
} // end namespace math
