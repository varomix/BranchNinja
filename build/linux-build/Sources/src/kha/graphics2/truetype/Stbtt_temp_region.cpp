#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_region
#include <kha/graphics2/truetype/Stbtt_temp_region.h>
#endif
namespace kha{
namespace graphics2{
namespace truetype{

Void Stbtt_temp_region_obj::__construct()
{
HX_STACK_FRAME("kha.graphics2.truetype.Stbtt_temp_region","new",0xdcdd6e5e,"kha.graphics2.truetype.Stbtt_temp_region.new","kha/graphics2/truetype/StbTruetype.hx",38,0x5d9e0de9)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Stbtt_temp_region_obj::~Stbtt_temp_region_obj() { }

Dynamic Stbtt_temp_region_obj::__CreateEmpty() { return  new Stbtt_temp_region_obj; }
hx::ObjectPtr< Stbtt_temp_region_obj > Stbtt_temp_region_obj::__new()
{  hx::ObjectPtr< Stbtt_temp_region_obj > _result_ = new Stbtt_temp_region_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stbtt_temp_region_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stbtt_temp_region_obj > _result_ = new Stbtt_temp_region_obj();
	_result_->__construct();
	return _result_;}


Stbtt_temp_region_obj::Stbtt_temp_region_obj()
{
}

Dynamic Stbtt_temp_region_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xoff") ) { return xoff; }
		if (HX_FIELD_EQ(inName,"yoff") ) { return yoff; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stbtt_temp_region_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xoff") ) { xoff=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoff") ) { yoff=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stbtt_temp_region_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stbtt_temp_region_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("xoff","\xf7","\x2d","\xa6","\x4f"));
	outFields->push(HX_HCSTRING("yoff","\x96","\x64","\x4f","\x50"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stbtt_temp_region_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Stbtt_temp_region_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Stbtt_temp_region_obj,xoff),HX_HCSTRING("xoff","\xf7","\x2d","\xa6","\x4f")},
	{hx::fsInt,(int)offsetof(Stbtt_temp_region_obj,yoff),HX_HCSTRING("yoff","\x96","\x64","\x4f","\x50")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("xoff","\xf7","\x2d","\xa6","\x4f"),
	HX_HCSTRING("yoff","\x96","\x64","\x4f","\x50"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt_temp_region_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt_temp_region_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt_temp_region_obj::__mClass;

void Stbtt_temp_region_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt_temp_region","\x6c","\xa7","\x7b","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stbtt_temp_region_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_temp_region_obj >;
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
