#include <hxcpp.h>

#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_pack_context
#include <kha/graphics2/truetype/Stbtt_pack_context.h>
#endif
namespace kha{
namespace graphics2{
namespace truetype{

Void Stbtt_pack_context_obj::__construct()
{
	return null();
}

//Stbtt_pack_context_obj::~Stbtt_pack_context_obj() { }

Dynamic Stbtt_pack_context_obj::__CreateEmpty() { return  new Stbtt_pack_context_obj; }
hx::ObjectPtr< Stbtt_pack_context_obj > Stbtt_pack_context_obj::__new()
{  hx::ObjectPtr< Stbtt_pack_context_obj > _result_ = new Stbtt_pack_context_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stbtt_pack_context_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stbtt_pack_context_obj > _result_ = new Stbtt_pack_context_obj();
	_result_->__construct();
	return _result_;}


Stbtt_pack_context_obj::Stbtt_pack_context_obj()
{
}

void Stbtt_pack_context_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stbtt_pack_context);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(stride_in_bytes,"stride_in_bytes");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(h_oversample,"h_oversample");
	HX_MARK_MEMBER_NAME(v_oversample,"v_oversample");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_END_CLASS();
}

void Stbtt_pack_context_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(stride_in_bytes,"stride_in_bytes");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(h_oversample,"h_oversample");
	HX_VISIT_MEMBER_NAME(v_oversample,"v_oversample");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
}

Dynamic Stbtt_pack_context_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"pixels") ) { return pixels; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { return padding; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"h_oversample") ) { return h_oversample; }
		if (HX_FIELD_EQ(inName,"v_oversample") ) { return v_oversample; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stride_in_bytes") ) { return stride_in_bytes; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stbtt_pack_context_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::kha::Blob >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"h_oversample") ) { h_oversample=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v_oversample") ) { v_oversample=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stride_in_bytes") ) { stride_in_bytes=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stbtt_pack_context_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stbtt_pack_context_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("stride_in_bytes","\x77","\xb1","\x10","\xb4"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("h_oversample","\x35","\xfe","\x9e","\x56"));
	outFields->push(HX_HCSTRING("v_oversample","\xe7","\xfc","\x16","\xef"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,stride_in_bytes),HX_HCSTRING("stride_in_bytes","\x77","\xb1","\x10","\xb4")},
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,h_oversample),HX_HCSTRING("h_oversample","\x35","\xfe","\x9e","\x56")},
	{hx::fsInt,(int)offsetof(Stbtt_pack_context_obj,v_oversample),HX_HCSTRING("v_oversample","\xe7","\xfc","\x16","\xef")},
	{hx::fsObject /*::kha::Blob*/ ,(int)offsetof(Stbtt_pack_context_obj,pixels),HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("stride_in_bytes","\x77","\xb1","\x10","\xb4"),
	HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"),
	HX_HCSTRING("h_oversample","\x35","\xfe","\x9e","\x56"),
	HX_HCSTRING("v_oversample","\xe7","\xfc","\x16","\xef"),
	HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt_pack_context_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt_pack_context_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt_pack_context_obj::__mClass;

void Stbtt_pack_context_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt_pack_context","\x3c","\x39","\x7b","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stbtt_pack_context_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_pack_context_obj >;
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
