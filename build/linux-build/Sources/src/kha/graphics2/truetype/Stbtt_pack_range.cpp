#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_pack_range
#include <kha/graphics2/truetype/Stbtt_pack_range.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_packedchar
#include <kha/graphics2/truetype/Stbtt_packedchar.h>
#endif
namespace kha{
namespace graphics2{
namespace truetype{

Void Stbtt_pack_range_obj::__construct()
{
	return null();
}

//Stbtt_pack_range_obj::~Stbtt_pack_range_obj() { }

Dynamic Stbtt_pack_range_obj::__CreateEmpty() { return  new Stbtt_pack_range_obj; }
hx::ObjectPtr< Stbtt_pack_range_obj > Stbtt_pack_range_obj::__new()
{  hx::ObjectPtr< Stbtt_pack_range_obj > _result_ = new Stbtt_pack_range_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stbtt_pack_range_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stbtt_pack_range_obj > _result_ = new Stbtt_pack_range_obj();
	_result_->__construct();
	return _result_;}


Stbtt_pack_range_obj::Stbtt_pack_range_obj()
{
}

void Stbtt_pack_range_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stbtt_pack_range);
	HX_MARK_MEMBER_NAME(font_size,"font_size");
	HX_MARK_MEMBER_NAME(first_unicode_codepoint_in_range,"first_unicode_codepoint_in_range");
	HX_MARK_MEMBER_NAME(array_of_unicode_codepoints,"array_of_unicode_codepoints");
	HX_MARK_MEMBER_NAME(num_chars,"num_chars");
	HX_MARK_MEMBER_NAME(chardata_for_range,"chardata_for_range");
	HX_MARK_MEMBER_NAME(h_oversample,"h_oversample");
	HX_MARK_MEMBER_NAME(v_oversample,"v_oversample");
	HX_MARK_END_CLASS();
}

void Stbtt_pack_range_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font_size,"font_size");
	HX_VISIT_MEMBER_NAME(first_unicode_codepoint_in_range,"first_unicode_codepoint_in_range");
	HX_VISIT_MEMBER_NAME(array_of_unicode_codepoints,"array_of_unicode_codepoints");
	HX_VISIT_MEMBER_NAME(num_chars,"num_chars");
	HX_VISIT_MEMBER_NAME(chardata_for_range,"chardata_for_range");
	HX_VISIT_MEMBER_NAME(h_oversample,"h_oversample");
	HX_VISIT_MEMBER_NAME(v_oversample,"v_oversample");
}

Dynamic Stbtt_pack_range_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { return font_size; }
		if (HX_FIELD_EQ(inName,"num_chars") ) { return num_chars; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"h_oversample") ) { return h_oversample; }
		if (HX_FIELD_EQ(inName,"v_oversample") ) { return v_oversample; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"chardata_for_range") ) { return chardata_for_range; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"array_of_unicode_codepoints") ) { return array_of_unicode_codepoints; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"first_unicode_codepoint_in_range") ) { return first_unicode_codepoint_in_range; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stbtt_pack_range_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { font_size=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"num_chars") ) { num_chars=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"h_oversample") ) { h_oversample=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v_oversample") ) { v_oversample=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"chardata_for_range") ) { chardata_for_range=inValue.Cast< ::kha::graphics2::truetype::Stbtt_packedchar >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"array_of_unicode_codepoints") ) { array_of_unicode_codepoints=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"first_unicode_codepoint_in_range") ) { first_unicode_codepoint_in_range=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stbtt_pack_range_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stbtt_pack_range_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18"));
	outFields->push(HX_HCSTRING("first_unicode_codepoint_in_range","\xb0","\xab","\x89","\x14"));
	outFields->push(HX_HCSTRING("array_of_unicode_codepoints","\x34","\xf9","\x31","\xc7"));
	outFields->push(HX_HCSTRING("num_chars","\xe4","\xba","\x07","\xbe"));
	outFields->push(HX_HCSTRING("chardata_for_range","\x88","\x74","\xef","\xd2"));
	outFields->push(HX_HCSTRING("h_oversample","\x35","\xfe","\x9e","\x56"));
	outFields->push(HX_HCSTRING("v_oversample","\xe7","\xfc","\x16","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Stbtt_pack_range_obj,font_size),HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18")},
	{hx::fsInt,(int)offsetof(Stbtt_pack_range_obj,first_unicode_codepoint_in_range),HX_HCSTRING("first_unicode_codepoint_in_range","\xb0","\xab","\x89","\x14")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stbtt_pack_range_obj,array_of_unicode_codepoints),HX_HCSTRING("array_of_unicode_codepoints","\x34","\xf9","\x31","\xc7")},
	{hx::fsInt,(int)offsetof(Stbtt_pack_range_obj,num_chars),HX_HCSTRING("num_chars","\xe4","\xba","\x07","\xbe")},
	{hx::fsObject /*::kha::graphics2::truetype::Stbtt_packedchar*/ ,(int)offsetof(Stbtt_pack_range_obj,chardata_for_range),HX_HCSTRING("chardata_for_range","\x88","\x74","\xef","\xd2")},
	{hx::fsInt,(int)offsetof(Stbtt_pack_range_obj,h_oversample),HX_HCSTRING("h_oversample","\x35","\xfe","\x9e","\x56")},
	{hx::fsInt,(int)offsetof(Stbtt_pack_range_obj,v_oversample),HX_HCSTRING("v_oversample","\xe7","\xfc","\x16","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("font_size","\x71","\xf0","\x12","\x18"),
	HX_HCSTRING("first_unicode_codepoint_in_range","\xb0","\xab","\x89","\x14"),
	HX_HCSTRING("array_of_unicode_codepoints","\x34","\xf9","\x31","\xc7"),
	HX_HCSTRING("num_chars","\xe4","\xba","\x07","\xbe"),
	HX_HCSTRING("chardata_for_range","\x88","\x74","\xef","\xd2"),
	HX_HCSTRING("h_oversample","\x35","\xfe","\x9e","\x56"),
	HX_HCSTRING("v_oversample","\xe7","\xfc","\x16","\xef"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt_pack_range_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt_pack_range_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt_pack_range_obj::__mClass;

void Stbtt_pack_range_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt_pack_range","\xca","\xeb","\xfb","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stbtt_pack_range_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_pack_range_obj >;
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
