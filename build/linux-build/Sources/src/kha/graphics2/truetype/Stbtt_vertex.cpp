#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_vertex
#include <kha/graphics2/truetype/Stbtt_vertex.h>
#endif
namespace kha{
namespace graphics2{
namespace truetype{

Void Stbtt_vertex_obj::__construct()
{
HX_STACK_FRAME("kha.graphics2.truetype.Stbtt_vertex","new",0x518bfd89,"kha.graphics2.truetype.Stbtt_vertex.new","kha/graphics2/truetype/StbTruetype.hx",132,0x5d9e0de9)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Stbtt_vertex_obj::~Stbtt_vertex_obj() { }

Dynamic Stbtt_vertex_obj::__CreateEmpty() { return  new Stbtt_vertex_obj; }
hx::ObjectPtr< Stbtt_vertex_obj > Stbtt_vertex_obj::__new()
{  hx::ObjectPtr< Stbtt_vertex_obj > _result_ = new Stbtt_vertex_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stbtt_vertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stbtt_vertex_obj > _result_ = new Stbtt_vertex_obj();
	_result_->__construct();
	return _result_;}


Stbtt_vertex_obj::Stbtt_vertex_obj()
{
}

Dynamic Stbtt_vertex_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"cx") ) { return cx; }
		if (HX_FIELD_EQ(inName,"cy") ) { return cy; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { return padding; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stbtt_vertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"cx") ) { cx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cy") ) { cy=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stbtt_vertex_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stbtt_vertex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("cx","\xb5","\x56","\x00","\x00"));
	outFields->push(HX_HCSTRING("cy","\xb6","\x56","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stbtt_vertex_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Stbtt_vertex_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Stbtt_vertex_obj,cx),HX_HCSTRING("cx","\xb5","\x56","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Stbtt_vertex_obj,cy),HX_HCSTRING("cy","\xb6","\x56","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Stbtt_vertex_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Stbtt_vertex_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("cx","\xb5","\x56","\x00","\x00"),
	HX_HCSTRING("cy","\xb6","\x56","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt_vertex_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt_vertex_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt_vertex_obj::__mClass;

void Stbtt_vertex_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt_vertex","\x17","\x85","\x72","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stbtt_vertex_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_vertex_obj >;
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
