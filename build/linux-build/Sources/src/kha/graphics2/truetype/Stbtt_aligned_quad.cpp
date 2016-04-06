#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_aligned_quad
#include <kha/graphics2/truetype/Stbtt_aligned_quad.h>
#endif
namespace kha{
namespace graphics2{
namespace truetype{

Void Stbtt_aligned_quad_obj::__construct()
{
	return null();
}

//Stbtt_aligned_quad_obj::~Stbtt_aligned_quad_obj() { }

Dynamic Stbtt_aligned_quad_obj::__CreateEmpty() { return  new Stbtt_aligned_quad_obj; }
hx::ObjectPtr< Stbtt_aligned_quad_obj > Stbtt_aligned_quad_obj::__new()
{  hx::ObjectPtr< Stbtt_aligned_quad_obj > _result_ = new Stbtt_aligned_quad_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stbtt_aligned_quad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stbtt_aligned_quad_obj > _result_ = new Stbtt_aligned_quad_obj();
	_result_->__construct();
	return _result_;}


Stbtt_aligned_quad_obj::Stbtt_aligned_quad_obj()
{
}

Dynamic Stbtt_aligned_quad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return x0; }
		if (HX_FIELD_EQ(inName,"y0") ) { return y0; }
		if (HX_FIELD_EQ(inName,"s0") ) { return s0; }
		if (HX_FIELD_EQ(inName,"t0") ) { return t0; }
		if (HX_FIELD_EQ(inName,"x1") ) { return x1; }
		if (HX_FIELD_EQ(inName,"y1") ) { return y1; }
		if (HX_FIELD_EQ(inName,"s1") ) { return s1; }
		if (HX_FIELD_EQ(inName,"t1") ) { return t1; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stbtt_aligned_quad_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s0") ) { s0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t0") ) { t0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t1") ) { t1=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stbtt_aligned_quad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stbtt_aligned_quad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y0","\x97","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("s0","\x5d","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("t0","\x3c","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y1","\x98","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("s1","\x5e","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("t1","\x3d","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,x0),HX_HCSTRING("x0","\xb8","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,y0),HX_HCSTRING("y0","\x97","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,s0),HX_HCSTRING("s0","\x5d","\x64","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,t0),HX_HCSTRING("t0","\x3c","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,x1),HX_HCSTRING("x1","\xb9","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,y1),HX_HCSTRING("y1","\x98","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,s1),HX_HCSTRING("s1","\x5e","\x64","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_aligned_quad_obj,t1),HX_HCSTRING("t1","\x3d","\x65","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"),
	HX_HCSTRING("y0","\x97","\x69","\x00","\x00"),
	HX_HCSTRING("s0","\x5d","\x64","\x00","\x00"),
	HX_HCSTRING("t0","\x3c","\x65","\x00","\x00"),
	HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"),
	HX_HCSTRING("y1","\x98","\x69","\x00","\x00"),
	HX_HCSTRING("s1","\x5e","\x64","\x00","\x00"),
	HX_HCSTRING("t1","\x3d","\x65","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt_aligned_quad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt_aligned_quad_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt_aligned_quad_obj::__mClass;

void Stbtt_aligned_quad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt_aligned_quad","\xb5","\xf1","\x0b","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stbtt_aligned_quad_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_aligned_quad_obj >;
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
} // end namespace graphics2
} // end namespace truetype
