#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__active_edge
#include <kha/graphics2/truetype/Stbtt__active_edge.h>
#endif
namespace kha{
namespace graphics2{
namespace truetype{

Void Stbtt__active_edge_obj::__construct()
{
HX_STACK_FRAME("kha.graphics2.truetype.Stbtt__active_edge","new",0x39b4427c,"kha.graphics2.truetype.Stbtt__active_edge.new","kha/graphics2/truetype/StbTruetype.hx",160,0x5d9e0de9)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Stbtt__active_edge_obj::~Stbtt__active_edge_obj() { }

Dynamic Stbtt__active_edge_obj::__CreateEmpty() { return  new Stbtt__active_edge_obj; }
hx::ObjectPtr< Stbtt__active_edge_obj > Stbtt__active_edge_obj::__new()
{  hx::ObjectPtr< Stbtt__active_edge_obj > _result_ = new Stbtt__active_edge_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stbtt__active_edge_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stbtt__active_edge_obj > _result_ = new Stbtt__active_edge_obj();
	_result_->__construct();
	return _result_;}


Stbtt__active_edge_obj::Stbtt__active_edge_obj()
{
}

void Stbtt__active_edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stbtt__active_edge);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(fx,"fx");
	HX_MARK_MEMBER_NAME(fdx,"fdx");
	HX_MARK_MEMBER_NAME(fdy,"fdy");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(sy,"sy");
	HX_MARK_MEMBER_NAME(ey,"ey");
	HX_MARK_END_CLASS();
}

void Stbtt__active_edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(fx,"fx");
	HX_VISIT_MEMBER_NAME(fdx,"fdx");
	HX_VISIT_MEMBER_NAME(fdy,"fdy");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(sy,"sy");
	HX_VISIT_MEMBER_NAME(ey,"ey");
}

Dynamic Stbtt__active_edge_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fx") ) { return fx; }
		if (HX_FIELD_EQ(inName,"sy") ) { return sy; }
		if (HX_FIELD_EQ(inName,"ey") ) { return ey; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fdx") ) { return fdx; }
		if (HX_FIELD_EQ(inName,"fdy") ) { return fdy; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stbtt__active_edge_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fx") ) { fx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sy") ) { sy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ey") ) { ey=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fdx") ) { fdx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fdy") ) { fdy=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::kha::graphics2::truetype::Stbtt__active_edge >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stbtt__active_edge_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stbtt__active_edge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("fx","\x52","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("fdx","\x7a","\xbd","\x4d","\x00"));
	outFields->push(HX_HCSTRING("fdy","\x7b","\xbd","\x4d","\x00"));
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("sy","\xa6","\x64","\x00","\x00"));
	outFields->push(HX_HCSTRING("ey","\x74","\x58","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::graphics2::truetype::Stbtt__active_edge*/ ,(int)offsetof(Stbtt__active_edge_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsFloat,(int)offsetof(Stbtt__active_edge_obj,fx),HX_HCSTRING("fx","\x52","\x59","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt__active_edge_obj,fdx),HX_HCSTRING("fdx","\x7a","\xbd","\x4d","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt__active_edge_obj,fdy),HX_HCSTRING("fdy","\x7b","\xbd","\x4d","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt__active_edge_obj,direction),HX_HCSTRING("direction","\x3f","\x62","\x40","\x10")},
	{hx::fsFloat,(int)offsetof(Stbtt__active_edge_obj,sy),HX_HCSTRING("sy","\xa6","\x64","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stbtt__active_edge_obj,ey),HX_HCSTRING("ey","\x74","\x58","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("fx","\x52","\x59","\x00","\x00"),
	HX_HCSTRING("fdx","\x7a","\xbd","\x4d","\x00"),
	HX_HCSTRING("fdy","\x7b","\xbd","\x4d","\x00"),
	HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"),
	HX_HCSTRING("sy","\xa6","\x64","\x00","\x00"),
	HX_HCSTRING("ey","\x74","\x58","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt__active_edge_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt__active_edge_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt__active_edge_obj::__mClass;

void Stbtt__active_edge_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt__active_edge","\x8a","\x94","\xd2","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stbtt__active_edge_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt__active_edge_obj >;
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
