#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_packedchar
#include <kha/graphics2/truetype/Stbtt_packedchar.h>
#endif
namespace kha{
namespace graphics2{
namespace truetype{

Void Stbtt_packedchar_obj::__construct()
{
	return null();
}

//Stbtt_packedchar_obj::~Stbtt_packedchar_obj() { }

Dynamic Stbtt_packedchar_obj::__CreateEmpty() { return  new Stbtt_packedchar_obj; }
hx::ObjectPtr< Stbtt_packedchar_obj > Stbtt_packedchar_obj::__new()
{  hx::ObjectPtr< Stbtt_packedchar_obj > _result_ = new Stbtt_packedchar_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stbtt_packedchar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stbtt_packedchar_obj > _result_ = new Stbtt_packedchar_obj();
	_result_->__construct();
	return _result_;}


Stbtt_packedchar_obj::Stbtt_packedchar_obj()
{
}

Dynamic Stbtt_packedchar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return x0; }
		if (HX_FIELD_EQ(inName,"y0") ) { return y0; }
		if (HX_FIELD_EQ(inName,"x1") ) { return x1; }
		if (HX_FIELD_EQ(inName,"y1") ) { return y1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xoff") ) { return xoff; }
		if (HX_FIELD_EQ(inName,"yoff") ) { return yoff; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xoff2") ) { return xoff2; }
		if (HX_FIELD_EQ(inName,"yoff2") ) { return yoff2; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return xadvance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stbtt_packedchar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xoff") ) { xoff=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoff") ) { yoff=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xoff2") ) { xoff2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoff2") ) { yoff2=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stbtt_packedchar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stbtt_packedchar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y0","\x97","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y1","\x98","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("xoff","\xf7","\x2d","\xa6","\x4f"));
	outFields->push(HX_HCSTRING("yoff","\x96","\x64","\x4f","\x50"));
	outFields->push(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"));
	outFields->push(HX_HCSTRING("xoff2","\x5b","\x0a","\xc2","\x61"));
	outFields->push(HX_HCSTRING("yoff2","\xdc","\x9e","\x28","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stbtt_packedchar_obj,x0),HX_HCSTRING("x0","\xb8","\x68","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Stbtt_packedchar_obj,y0),HX_HCSTRING("y0","\x97","\x69","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Stbtt_packedchar_obj,x1),HX_HCSTRING("x1","\xb9","\x68","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Stbtt_packedchar_obj,y1),HX_HCSTRING("y1","\x98","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt_packedchar_obj,xoff),HX_HCSTRING("xoff","\xf7","\x2d","\xa6","\x4f")},
	{hx::fsFloat,(int)offsetof(Stbtt_packedchar_obj,yoff),HX_HCSTRING("yoff","\x96","\x64","\x4f","\x50")},
	{hx::fsFloat,(int)offsetof(Stbtt_packedchar_obj,xadvance),HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe")},
	{hx::fsFloat,(int)offsetof(Stbtt_packedchar_obj,xoff2),HX_HCSTRING("xoff2","\x5b","\x0a","\xc2","\x61")},
	{hx::fsFloat,(int)offsetof(Stbtt_packedchar_obj,yoff2),HX_HCSTRING("yoff2","\xdc","\x9e","\x28","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"),
	HX_HCSTRING("y0","\x97","\x69","\x00","\x00"),
	HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"),
	HX_HCSTRING("y1","\x98","\x69","\x00","\x00"),
	HX_HCSTRING("xoff","\xf7","\x2d","\xa6","\x4f"),
	HX_HCSTRING("yoff","\x96","\x64","\x4f","\x50"),
	HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"),
	HX_HCSTRING("xoff2","\x5b","\x0a","\xc2","\x61"),
	HX_HCSTRING("yoff2","\xdc","\x9e","\x28","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt_packedchar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt_packedchar_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt_packedchar_obj::__mClass;

void Stbtt_packedchar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt_packedchar","\x81","\xd1","\xd1","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stbtt_packedchar_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_packedchar_obj >;
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
