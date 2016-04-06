#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_kha_math_FastVector3
#include <kha/math/FastVector3.h>
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <kha/math/Vector3.h>
#endif
namespace kha{
namespace math{

Void FastVector3_obj::__construct(hx::Null< ::cpp::Float32 >  __o_x,hx::Null< ::cpp::Float32 >  __o_y,hx::Null< ::cpp::Float32 >  __o_z)
{
HX_STACK_FRAME("kha.math.FastVector3","new",0x15ff578a,"kha.math.FastVector3.new","kha/math/FastVector3.hx",4,0x34dfab86)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
::cpp::Float32 x = __o_x.Default(0);
::cpp::Float32 y = __o_y.Default(0);
::cpp::Float32 z = __o_z.Default(0);
{
	HX_STACK_LINE(5)
	this->x = x;
	HX_STACK_LINE(6)
	this->y = y;
	HX_STACK_LINE(7)
	this->z = z;
}
;
	return null();
}

//FastVector3_obj::~FastVector3_obj() { }

Dynamic FastVector3_obj::__CreateEmpty() { return  new FastVector3_obj; }
hx::ObjectPtr< FastVector3_obj > FastVector3_obj::__new(hx::Null< ::cpp::Float32 >  __o_x,hx::Null< ::cpp::Float32 >  __o_y,hx::Null< ::cpp::Float32 >  __o_z)
{  hx::ObjectPtr< FastVector3_obj > _result_ = new FastVector3_obj();
	_result_->__construct(__o_x,__o_y,__o_z);
	return _result_;}

Dynamic FastVector3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FastVector3_obj > _result_ = new FastVector3_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::cpp::Float32 FastVector3_obj::get_length( ){
	HX_STACK_FRAME("kha.math.FastVector3","get_length",0x51b916c5,"kha.math.FastVector3.get_length","kha/math/FastVector3.hx",19,0x34dfab86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	::cpp::Float32 tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	::cpp::Float32 tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	::cpp::Float32 tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	::cpp::Float32 tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	::cpp::Float32 tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(20)
	::cpp::Float32 tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(20)
	::cpp::Float32 tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(20)
	::cpp::Float32 tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(20)
	::cpp::Float32 tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(20)
	::cpp::Float32 tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(20)
	::cpp::Float32 tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(20)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(20)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(FastVector3_obj,get_length,return )

::cpp::Float32 FastVector3_obj::set_length( ::cpp::Float32 length){
	HX_STACK_FRAME("kha.math.FastVector3","set_length",0x5536b539,"kha.math.FastVector3.set_length","kha/math/FastVector3.hx",23,0x34dfab86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(24)
	::cpp::Float32 tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::cpp::Float32 currentLength = tmp;		HX_STACK_VAR(currentLength,"currentLength");
	HX_STACK_LINE(25)
	bool tmp1 = (currentLength == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp1)){
		HX_STACK_LINE(25)
		return (int)0;
	}
	HX_STACK_LINE(26)
	Float tmp2 = (Float(length) / Float(currentLength));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	Float mul = tmp2;		HX_STACK_VAR(mul,"mul");
	HX_STACK_LINE(27)
	hx::MultEq(this->x,mul);
	HX_STACK_LINE(28)
	hx::MultEq(this->y,mul);
	HX_STACK_LINE(29)
	hx::MultEq(this->z,mul);
	HX_STACK_LINE(30)
	::cpp::Float32 tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FastVector3_obj,set_length,return )

::kha::math::FastVector3 FastVector3_obj::fromVector3( ::kha::math::Vector3 v){
	HX_STACK_FRAME("kha.math.FastVector3","fromVector3",0x95831ef0,"kha.math.FastVector3.fromVector3","kha/math/FastVector3.hx",10,0x34dfab86)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(11)
	::kha::math::FastVector3 tmp = ::kha::math::FastVector3_obj::__new(v->x,v->y,v->z);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FastVector3_obj,fromVector3,return )


FastVector3_obj::FastVector3_obj()
{
}

void FastVector3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FastVector3);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_END_CLASS();
}

void FastVector3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
}

Dynamic FastVector3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
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

bool FastVector3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromVector3") ) { outValue = fromVector3_dyn(); return true;  }
	}
	return false;
}

Dynamic FastVector3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< ::cpp::Float32 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FastVector3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FastVector3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastVector3_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastVector3_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(FastVector3_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastVector3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastVector3_obj::__mClass,"__mClass");
};

#endif

hx::Class FastVector3_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromVector3","\xc6","\x5d","\xdd","\x72"),
	::String(null()) };

void FastVector3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.math.FastVector3","\x98","\x8a","\x4e","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FastVector3_obj::__GetStatic;
	__mClass->mSetStaticField = &FastVector3_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FastVector3_obj >;
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
