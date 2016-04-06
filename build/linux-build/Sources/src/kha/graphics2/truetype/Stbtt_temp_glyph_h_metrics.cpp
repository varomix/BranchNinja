#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_glyph_h_metrics
#include <kha/graphics2/truetype/Stbtt_temp_glyph_h_metrics.h>
#endif
namespace kha{
namespace graphics2{
namespace truetype{

Void Stbtt_temp_glyph_h_metrics_obj::__construct()
{
HX_STACK_FRAME("kha.graphics2.truetype.Stbtt_temp_glyph_h_metrics","new",0xac5e3c93,"kha.graphics2.truetype.Stbtt_temp_glyph_h_metrics.new","kha/graphics2/truetype/StbTruetype.hx",25,0x5d9e0de9)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Stbtt_temp_glyph_h_metrics_obj::~Stbtt_temp_glyph_h_metrics_obj() { }

Dynamic Stbtt_temp_glyph_h_metrics_obj::__CreateEmpty() { return  new Stbtt_temp_glyph_h_metrics_obj; }
hx::ObjectPtr< Stbtt_temp_glyph_h_metrics_obj > Stbtt_temp_glyph_h_metrics_obj::__new()
{  hx::ObjectPtr< Stbtt_temp_glyph_h_metrics_obj > _result_ = new Stbtt_temp_glyph_h_metrics_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stbtt_temp_glyph_h_metrics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stbtt_temp_glyph_h_metrics_obj > _result_ = new Stbtt_temp_glyph_h_metrics_obj();
	_result_->__construct();
	return _result_;}


Stbtt_temp_glyph_h_metrics_obj::Stbtt_temp_glyph_h_metrics_obj()
{
}

Dynamic Stbtt_temp_glyph_h_metrics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"advanceWidth") ) { return advanceWidth; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"leftSideBearing") ) { return leftSideBearing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stbtt_temp_glyph_h_metrics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"advanceWidth") ) { advanceWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"leftSideBearing") ) { leftSideBearing=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stbtt_temp_glyph_h_metrics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stbtt_temp_glyph_h_metrics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("advanceWidth","\x24","\x06","\x4c","\x38"));
	outFields->push(HX_HCSTRING("leftSideBearing","\x50","\xa6","\xf1","\x1b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stbtt_temp_glyph_h_metrics_obj,advanceWidth),HX_HCSTRING("advanceWidth","\x24","\x06","\x4c","\x38")},
	{hx::fsInt,(int)offsetof(Stbtt_temp_glyph_h_metrics_obj,leftSideBearing),HX_HCSTRING("leftSideBearing","\x50","\xa6","\xf1","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("advanceWidth","\x24","\x06","\x4c","\x38"),
	HX_HCSTRING("leftSideBearing","\x50","\xa6","\xf1","\x1b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt_temp_glyph_h_metrics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt_temp_glyph_h_metrics_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt_temp_glyph_h_metrics_obj::__mClass;

void Stbtt_temp_glyph_h_metrics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt_temp_glyph_h_metrics","\x21","\xf7","\xa1","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stbtt_temp_glyph_h_metrics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_temp_glyph_h_metrics_obj >;
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
