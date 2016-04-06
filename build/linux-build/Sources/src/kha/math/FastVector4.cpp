#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_kha_math_FastVector4
#include <kha/math/FastVector4.h>
#endif
#ifndef INCLUDED_kha_math_Vector4
#include <kha/math/Vector4.h>
#endif
namespace kha{
namespace math{

Void FastVector4_obj::__construct(hx::Null< ::cpp::Float32 >  __o_x,hx::Null< ::cpp::Float32 >  __o_y,hx::Null< ::cpp::Float32 >  __o_z,hx::Null< ::cpp::Float32 >  __o_w)
{
HX_STACK_FRAME("kha.math.FastVector4","new",0xa965ec0b,"kha.math.FastVector4.new","kha/math/FastVector4.hx",4,0x3588e225)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
HX_STACK_ARG(__o_w,"w")
::cpp::Float32 x = __o_x.Default(0);
::cpp::Float32 y = __o_y.Default(0);
::cpp::Float32 z = __o_z.Default(0);
::cpp::Float32 w = __o_w.Default(1);
{
	HX_STACK_LINE(5)
	this->x = x;
	HX_STACK_LINE(6)
	this->y = y;
	HX_STACK_LINE(7)
	this->z = z;
	HX_STACK_LINE(8)
	this->w = w;
}
;
	return null();
}

//FastVector4_obj::~FastVector4_obj() { }

Dynamic FastVector4_obj::__CreateEmpty() { return  new FastVector4_obj; }
hx::ObjectPtr< FastVector4_obj > FastVector4_obj::__new(hx::Null< ::cpp::Float32 >  __o_x,hx::Null< ::cpp::Float32 >  __o_y,hx::Null< ::cpp::Float32 >  __o_z,hx::Null< ::cpp::Float32 >  __o_w)
{  hx::ObjectPtr< FastVector4_obj > _result_ = new FastVector4_obj();
	_result_->__construct(__o_x,__o_y,__o_z,__o_w);
	return _result_;}

Dynamic FastVector4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FastVector4_obj > _result_ = new FastVector4_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::cpp::Float32 FastVector4_obj::get_length( ){
	HX_STACK_FRAME("kha.math.FastVector4","get_length",0x93788464,"kha.math.FastVector4.get_length","kha/math/FastVector4.hx",21,0x3588e225)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::cpp::Float32 tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp12 = this->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(22)
	::cpp::Float32 tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(22)
	Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(22)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC0(FastVector4_obj,get_length,return )

::cpp::Float32 FastVector4_obj::set_length( ::cpp::Float32 length){
	HX_STACK_FRAME("kha.math.FastVector4","set_length",0x96f622d8,"kha.math.FastVector4.set_length","kha/math/FastVector4.hx",25,0x3588e225)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(26)
	::cpp::Float32 tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::cpp::Float32 currentLength = tmp;		HX_STACK_VAR(currentLength,"currentLength");
	HX_STACK_LINE(27)
	bool tmp1 = (currentLength == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	if ((tmp1)){
		HX_STACK_LINE(27)
		return (int)0;
	}
	HX_STACK_LINE(28)
	Float tmp2 = (Float(length) / Float(currentLength));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	Float mul = tmp2;		HX_STACK_VAR(mul,"mul");
	HX_STACK_LINE(29)
	hx::MultEq(this->x,mul);
	HX_STACK_LINE(30)
	hx::MultEq(this->y,mul);
	HX_STACK_LINE(31)
	hx::MultEq(this->z,mul);
	HX_STACK_LINE(32)
	hx::MultEq(this->w,mul);
	HX_STACK_LINE(33)
	::cpp::Float32 tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FastVector4_obj,set_length,return )

::kha::math::FastVector4 FastVector4_obj::fromVector4( ::kha::math::Vector4 v){
	HX_STACK_FRAME("kha.math.FastVector4","fromVector4",0xdb439c72,"kha.math.FastVector4.fromVector4","kha/math/FastVector4.hx",11,0x3588e225)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(12)
	::kha::math::FastVector4 tmp = ::kha::math::FastVector4_obj::__new(v->x,v->y,v->z,v->w);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FastVector4_obj,fromVector4,return )


FastVector4_obj::FastVector4_obj()
{
}

void FastVector4_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FastVector4);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_END_CLASS();
}

void FastVector4_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(w,"w");
}

Dynamic FastVector4_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FastVector4_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromVector4") ) { outValue = fromVector4_dyn(); return true;  }
	}
	return false;
}

Dynamic FastVector4_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FastVector4_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FastVector4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastVector4_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastVector4_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastVector4_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastVector4_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastVector4_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastVector4_obj::__mClass,"__mClass");
};

#endif

hx::Class FastVector4_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromVector4","\xc7","\x5d","\xdd","\x72"),
	::String(null()) };

void FastVector4_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.math.FastVector4","\x99","\x8a","\x4e","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FastVector4_obj::__GetStatic;
	__mClass->mSetStaticField = &FastVector4_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FastVector4_obj >;
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

} // end namespace kha
} // end namespace math
