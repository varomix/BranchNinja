#include <hxcpp.h>

#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo
#include <kha/graphics2/truetype/Stbtt_fontinfo.h>
#endif
namespace kha{
namespace graphics2{
namespace truetype{

Void Stbtt_fontinfo_obj::__construct()
{
HX_STACK_FRAME("kha.graphics2.truetype.Stbtt_fontinfo","new",0xce315f22,"kha.graphics2.truetype.Stbtt_fontinfo.new","kha/graphics2/truetype/StbTruetype.hx",113,0x5d9e0de9)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Stbtt_fontinfo_obj::~Stbtt_fontinfo_obj() { }

Dynamic Stbtt_fontinfo_obj::__CreateEmpty() { return  new Stbtt_fontinfo_obj; }
hx::ObjectPtr< Stbtt_fontinfo_obj > Stbtt_fontinfo_obj::__new()
{  hx::ObjectPtr< Stbtt_fontinfo_obj > _result_ = new Stbtt_fontinfo_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stbtt_fontinfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stbtt_fontinfo_obj > _result_ = new Stbtt_fontinfo_obj();
	_result_->__construct();
	return _result_;}


Stbtt_fontinfo_obj::Stbtt_fontinfo_obj()
{
}

void Stbtt_fontinfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stbtt_fontinfo);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(fontstart,"fontstart");
	HX_MARK_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_MARK_MEMBER_NAME(loca,"loca");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(glyf,"glyf");
	HX_MARK_MEMBER_NAME(hhea,"hhea");
	HX_MARK_MEMBER_NAME(hmtx,"hmtx");
	HX_MARK_MEMBER_NAME(kern,"kern");
	HX_MARK_MEMBER_NAME(index_map,"index_map");
	HX_MARK_MEMBER_NAME(indexToLocFormat,"indexToLocFormat");
	HX_MARK_END_CLASS();
}

void Stbtt_fontinfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(fontstart,"fontstart");
	HX_VISIT_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_VISIT_MEMBER_NAME(loca,"loca");
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(glyf,"glyf");
	HX_VISIT_MEMBER_NAME(hhea,"hhea");
	HX_VISIT_MEMBER_NAME(hmtx,"hmtx");
	HX_VISIT_MEMBER_NAME(kern,"kern");
	HX_VISIT_MEMBER_NAME(index_map,"index_map");
	HX_VISIT_MEMBER_NAME(indexToLocFormat,"indexToLocFormat");
}

Dynamic Stbtt_fontinfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"loca") ) { return loca; }
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		if (HX_FIELD_EQ(inName,"glyf") ) { return glyf; }
		if (HX_FIELD_EQ(inName,"hhea") ) { return hhea; }
		if (HX_FIELD_EQ(inName,"hmtx") ) { return hmtx; }
		if (HX_FIELD_EQ(inName,"kern") ) { return kern; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontstart") ) { return fontstart; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { return numGlyphs; }
		if (HX_FIELD_EQ(inName,"index_map") ) { return index_map; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"indexToLocFormat") ) { return indexToLocFormat; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stbtt_fontinfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::kha::Blob >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loca") ) { loca=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glyf") ) { glyf=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hhea") ) { hhea=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hmtx") ) { hmtx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kern") ) { kern=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontstart") ) { fontstart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { numGlyphs=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index_map") ) { index_map=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"indexToLocFormat") ) { indexToLocFormat=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stbtt_fontinfo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stbtt_fontinfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("fontstart","\x33","\xa8","\xb9","\x9c"));
	outFields->push(HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f"));
	outFields->push(HX_HCSTRING("loca","\xe1","\x9b","\xb7","\x47"));
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	outFields->push(HX_HCSTRING("glyf","\x32","\x57","\x67","\x44"));
	outFields->push(HX_HCSTRING("hhea","\x5c","\x73","\x0d","\x45"));
	outFields->push(HX_HCSTRING("hmtx","\xc9","\x4b","\x11","\x45"));
	outFields->push(HX_HCSTRING("kern","\xd6","\xdb","\x06","\x47"));
	outFields->push(HX_HCSTRING("index_map","\xaf","\xdb","\x52","\x10"));
	outFields->push(HX_HCSTRING("indexToLocFormat","\xea","\xbc","\x00","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Blob*/ ,(int)offsetof(Stbtt_fontinfo_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,fontstart),HX_HCSTRING("fontstart","\x33","\xa8","\xb9","\x9c")},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,numGlyphs),HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f")},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,loca),HX_HCSTRING("loca","\xe1","\x9b","\xb7","\x47")},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,glyf),HX_HCSTRING("glyf","\x32","\x57","\x67","\x44")},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,hhea),HX_HCSTRING("hhea","\x5c","\x73","\x0d","\x45")},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,hmtx),HX_HCSTRING("hmtx","\xc9","\x4b","\x11","\x45")},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,kern),HX_HCSTRING("kern","\xd6","\xdb","\x06","\x47")},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,index_map),HX_HCSTRING("index_map","\xaf","\xdb","\x52","\x10")},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,indexToLocFormat),HX_HCSTRING("indexToLocFormat","\xea","\xbc","\x00","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("fontstart","\x33","\xa8","\xb9","\x9c"),
	HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f"),
	HX_HCSTRING("loca","\xe1","\x9b","\xb7","\x47"),
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("glyf","\x32","\x57","\x67","\x44"),
	HX_HCSTRING("hhea","\x5c","\x73","\x0d","\x45"),
	HX_HCSTRING("hmtx","\xc9","\x4b","\x11","\x45"),
	HX_HCSTRING("kern","\xd6","\xdb","\x06","\x47"),
	HX_HCSTRING("index_map","\xaf","\xdb","\x52","\x10"),
	HX_HCSTRING("indexToLocFormat","\xea","\xbc","\x00","\x76"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt_fontinfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt_fontinfo_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt_fontinfo_obj::__mClass;

void Stbtt_fontinfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt_fontinfo","\x30","\xe6","\xce","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stbtt_fontinfo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_fontinfo_obj >;
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
