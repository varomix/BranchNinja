#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_BlendingOperation
#include <kha/graphics4/BlendingOperation.h>
#endif
#ifndef INCLUDED_kha_graphics4_CompareMode
#include <kha/graphics4/CompareMode.h>
#endif
#ifndef INCLUDED_kha_graphics4_CullMode
#include <kha/graphics4/CullMode.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <kha/graphics4/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics4_StencilAction
#include <kha/graphics4/StencilAction.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <kha/graphics4/VertexStructure.h>
#endif
namespace kha{
namespace graphics4{

Void PipelineStateBase_obj::__construct()
{
HX_STACK_FRAME("kha.graphics4.PipelineStateBase","new",0x13b630a3,"kha.graphics4.PipelineStateBase.new","kha/graphics4/PipelineStateBase.hx",4,0x8daa4c6f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	this->inputLayout = null();
	HX_STACK_LINE(6)
	this->vertexShader = null();
	HX_STACK_LINE(7)
	this->fragmentShader = null();
	HX_STACK_LINE(9)
	this->cullMode = ::kha::graphics4::CullMode_obj::None;
	HX_STACK_LINE(11)
	this->depthWrite = false;
	HX_STACK_LINE(12)
	this->depthMode = ::kha::graphics4::CompareMode_obj::Always;
	HX_STACK_LINE(14)
	this->stencilMode = ::kha::graphics4::CompareMode_obj::Always;
	HX_STACK_LINE(15)
	this->stencilBothPass = ::kha::graphics4::StencilAction_obj::Keep;
	HX_STACK_LINE(16)
	this->stencilDepthFail = ::kha::graphics4::StencilAction_obj::Keep;
	HX_STACK_LINE(17)
	this->stencilFail = ::kha::graphics4::StencilAction_obj::Keep;
	HX_STACK_LINE(18)
	this->stencilReferenceValue = (int)0;
	HX_STACK_LINE(19)
	this->stencilReadMask = (int)255;
	HX_STACK_LINE(20)
	this->stencilWriteMask = (int)255;
	HX_STACK_LINE(22)
	this->blendSource = ::kha::graphics4::BlendingOperation_obj::BlendOne;
	HX_STACK_LINE(23)
	this->blendDestination = ::kha::graphics4::BlendingOperation_obj::BlendZero;
	HX_STACK_LINE(25)
	bool tmp = this->colorWriteMaskAlpha = true;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = this->colorWriteMaskGreen = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	bool tmp2 = this->colorWriteMaskBlue = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	this->colorWriteMaskRed = tmp2;
}
;
	return null();
}

//PipelineStateBase_obj::~PipelineStateBase_obj() { }

Dynamic PipelineStateBase_obj::__CreateEmpty() { return  new PipelineStateBase_obj; }
hx::ObjectPtr< PipelineStateBase_obj > PipelineStateBase_obj::__new()
{  hx::ObjectPtr< PipelineStateBase_obj > _result_ = new PipelineStateBase_obj();
	_result_->__construct();
	return _result_;}

Dynamic PipelineStateBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PipelineStateBase_obj > _result_ = new PipelineStateBase_obj();
	_result_->__construct();
	return _result_;}

bool PipelineStateBase_obj::set_colorWriteMask( bool value){
	HX_STACK_FRAME("kha.graphics4.PipelineStateBase","set_colorWriteMask",0x6ce455e2,"kha.graphics4.PipelineStateBase.set_colorWriteMask","kha/graphics4/PipelineStateBase.hx",55,0x8daa4c6f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(56)
	bool tmp = this->colorWriteMaskAlpha = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	bool tmp1 = this->colorWriteMaskGreen = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2 = this->colorWriteMaskBlue = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	bool tmp3 = this->colorWriteMaskRed = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(PipelineStateBase_obj,set_colorWriteMask,return )


PipelineStateBase_obj::PipelineStateBase_obj()
{
}

void PipelineStateBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PipelineStateBase);
	HX_MARK_MEMBER_NAME(inputLayout,"inputLayout");
	HX_MARK_MEMBER_NAME(vertexShader,"vertexShader");
	HX_MARK_MEMBER_NAME(fragmentShader,"fragmentShader");
	HX_MARK_MEMBER_NAME(cullMode,"cullMode");
	HX_MARK_MEMBER_NAME(depthWrite,"depthWrite");
	HX_MARK_MEMBER_NAME(depthMode,"depthMode");
	HX_MARK_MEMBER_NAME(stencilMode,"stencilMode");
	HX_MARK_MEMBER_NAME(stencilBothPass,"stencilBothPass");
	HX_MARK_MEMBER_NAME(stencilDepthFail,"stencilDepthFail");
	HX_MARK_MEMBER_NAME(stencilFail,"stencilFail");
	HX_MARK_MEMBER_NAME(stencilReferenceValue,"stencilReferenceValue");
	HX_MARK_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_MARK_MEMBER_NAME(stencilWriteMask,"stencilWriteMask");
	HX_MARK_MEMBER_NAME(blendSource,"blendSource");
	HX_MARK_MEMBER_NAME(blendDestination,"blendDestination");
	HX_MARK_MEMBER_NAME(colorWriteMaskRed,"colorWriteMaskRed");
	HX_MARK_MEMBER_NAME(colorWriteMaskGreen,"colorWriteMaskGreen");
	HX_MARK_MEMBER_NAME(colorWriteMaskBlue,"colorWriteMaskBlue");
	HX_MARK_MEMBER_NAME(colorWriteMaskAlpha,"colorWriteMaskAlpha");
	HX_MARK_END_CLASS();
}

void PipelineStateBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inputLayout,"inputLayout");
	HX_VISIT_MEMBER_NAME(vertexShader,"vertexShader");
	HX_VISIT_MEMBER_NAME(fragmentShader,"fragmentShader");
	HX_VISIT_MEMBER_NAME(cullMode,"cullMode");
	HX_VISIT_MEMBER_NAME(depthWrite,"depthWrite");
	HX_VISIT_MEMBER_NAME(depthMode,"depthMode");
	HX_VISIT_MEMBER_NAME(stencilMode,"stencilMode");
	HX_VISIT_MEMBER_NAME(stencilBothPass,"stencilBothPass");
	HX_VISIT_MEMBER_NAME(stencilDepthFail,"stencilDepthFail");
	HX_VISIT_MEMBER_NAME(stencilFail,"stencilFail");
	HX_VISIT_MEMBER_NAME(stencilReferenceValue,"stencilReferenceValue");
	HX_VISIT_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_VISIT_MEMBER_NAME(stencilWriteMask,"stencilWriteMask");
	HX_VISIT_MEMBER_NAME(blendSource,"blendSource");
	HX_VISIT_MEMBER_NAME(blendDestination,"blendDestination");
	HX_VISIT_MEMBER_NAME(colorWriteMaskRed,"colorWriteMaskRed");
	HX_VISIT_MEMBER_NAME(colorWriteMaskGreen,"colorWriteMaskGreen");
	HX_VISIT_MEMBER_NAME(colorWriteMaskBlue,"colorWriteMaskBlue");
	HX_VISIT_MEMBER_NAME(colorWriteMaskAlpha,"colorWriteMaskAlpha");
}

Dynamic PipelineStateBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"cullMode") ) { return cullMode; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"depthMode") ) { return depthMode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"depthWrite") ) { return depthWrite; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputLayout") ) { return inputLayout; }
		if (HX_FIELD_EQ(inName,"stencilMode") ) { return stencilMode; }
		if (HX_FIELD_EQ(inName,"stencilFail") ) { return stencilFail; }
		if (HX_FIELD_EQ(inName,"blendSource") ) { return blendSource; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexShader") ) { return vertexShader; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fragmentShader") ) { return fragmentShader; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stencilBothPass") ) { return stencilBothPass; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { return stencilReadMask; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stencilDepthFail") ) { return stencilDepthFail; }
		if (HX_FIELD_EQ(inName,"stencilWriteMask") ) { return stencilWriteMask; }
		if (HX_FIELD_EQ(inName,"blendDestination") ) { return blendDestination; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"colorWriteMaskRed") ) { return colorWriteMaskRed; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"colorWriteMaskBlue") ) { return colorWriteMaskBlue; }
		if (HX_FIELD_EQ(inName,"set_colorWriteMask") ) { return set_colorWriteMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"colorWriteMaskGreen") ) { return colorWriteMaskGreen; }
		if (HX_FIELD_EQ(inName,"colorWriteMaskAlpha") ) { return colorWriteMaskAlpha; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"stencilReferenceValue") ) { return stencilReferenceValue; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PipelineStateBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"cullMode") ) { cullMode=inValue.Cast< ::kha::graphics4::CullMode >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"depthMode") ) { depthMode=inValue.Cast< ::kha::graphics4::CompareMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"depthWrite") ) { depthWrite=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputLayout") ) { inputLayout=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilMode") ) { stencilMode=inValue.Cast< ::kha::graphics4::CompareMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilFail") ) { stencilFail=inValue.Cast< ::kha::graphics4::StencilAction >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendSource") ) { blendSource=inValue.Cast< ::kha::graphics4::BlendingOperation >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexShader") ) { vertexShader=inValue.Cast< ::kha::graphics4::VertexShader >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fragmentShader") ) { fragmentShader=inValue.Cast< ::kha::graphics4::FragmentShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorWriteMask") ) { if (inCallProp == hx::paccAlways) return set_colorWriteMask(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stencilBothPass") ) { stencilBothPass=inValue.Cast< ::kha::graphics4::StencilAction >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { stencilReadMask=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stencilDepthFail") ) { stencilDepthFail=inValue.Cast< ::kha::graphics4::StencilAction >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilWriteMask") ) { stencilWriteMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendDestination") ) { blendDestination=inValue.Cast< ::kha::graphics4::BlendingOperation >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"colorWriteMaskRed") ) { colorWriteMaskRed=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"colorWriteMaskBlue") ) { colorWriteMaskBlue=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"colorWriteMaskGreen") ) { colorWriteMaskGreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorWriteMaskAlpha") ) { colorWriteMaskAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"stencilReferenceValue") ) { stencilReferenceValue=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PipelineStateBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PipelineStateBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("inputLayout","\x54","\x8a","\xec","\x4d"));
	outFields->push(HX_HCSTRING("vertexShader","\xa9","\xb1","\x35","\xbd"));
	outFields->push(HX_HCSTRING("fragmentShader","\x15","\x4f","\xdc","\x39"));
	outFields->push(HX_HCSTRING("cullMode","\x35","\x06","\xdd","\xb0"));
	outFields->push(HX_HCSTRING("depthWrite","\xdc","\x60","\xc5","\x2c"));
	outFields->push(HX_HCSTRING("depthMode","\x06","\x2e","\xe4","\x9e"));
	outFields->push(HX_HCSTRING("stencilMode","\x7f","\x6b","\x5a","\x45"));
	outFields->push(HX_HCSTRING("stencilBothPass","\x0e","\x44","\x39","\xda"));
	outFields->push(HX_HCSTRING("stencilDepthFail","\xe5","\x96","\x76","\x67"));
	outFields->push(HX_HCSTRING("stencilFail","\xfa","\x51","\xaf","\x40"));
	outFields->push(HX_HCSTRING("stencilReferenceValue","\xc2","\x1a","\x35","\x60"));
	outFields->push(HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5"));
	outFields->push(HX_HCSTRING("stencilWriteMask","\xcf","\xb7","\x47","\x1e"));
	outFields->push(HX_HCSTRING("blendSource","\x0c","\xa0","\xa3","\xe6"));
	outFields->push(HX_HCSTRING("blendDestination","\xbd","\xe9","\xa3","\x86"));
	outFields->push(HX_HCSTRING("colorWriteMask","\x88","\xdf","\xb6","\xb8"));
	outFields->push(HX_HCSTRING("colorWriteMaskRed","\xa9","\x16","\xc2","\xdd"));
	outFields->push(HX_HCSTRING("colorWriteMaskGreen","\x1b","\x52","\xa4","\x16"));
	outFields->push(HX_HCSTRING("colorWriteMaskBlue","\x42","\xb2","\x83","\x21"));
	outFields->push(HX_HCSTRING("colorWriteMaskAlpha","\xb6","\xea","\x4d","\x9e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PipelineStateBase_obj,inputLayout),HX_HCSTRING("inputLayout","\x54","\x8a","\xec","\x4d")},
	{hx::fsObject /*::kha::graphics4::VertexShader*/ ,(int)offsetof(PipelineStateBase_obj,vertexShader),HX_HCSTRING("vertexShader","\xa9","\xb1","\x35","\xbd")},
	{hx::fsObject /*::kha::graphics4::FragmentShader*/ ,(int)offsetof(PipelineStateBase_obj,fragmentShader),HX_HCSTRING("fragmentShader","\x15","\x4f","\xdc","\x39")},
	{hx::fsObject /*::kha::graphics4::CullMode*/ ,(int)offsetof(PipelineStateBase_obj,cullMode),HX_HCSTRING("cullMode","\x35","\x06","\xdd","\xb0")},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,depthWrite),HX_HCSTRING("depthWrite","\xdc","\x60","\xc5","\x2c")},
	{hx::fsObject /*::kha::graphics4::CompareMode*/ ,(int)offsetof(PipelineStateBase_obj,depthMode),HX_HCSTRING("depthMode","\x06","\x2e","\xe4","\x9e")},
	{hx::fsObject /*::kha::graphics4::CompareMode*/ ,(int)offsetof(PipelineStateBase_obj,stencilMode),HX_HCSTRING("stencilMode","\x7f","\x6b","\x5a","\x45")},
	{hx::fsObject /*::kha::graphics4::StencilAction*/ ,(int)offsetof(PipelineStateBase_obj,stencilBothPass),HX_HCSTRING("stencilBothPass","\x0e","\x44","\x39","\xda")},
	{hx::fsObject /*::kha::graphics4::StencilAction*/ ,(int)offsetof(PipelineStateBase_obj,stencilDepthFail),HX_HCSTRING("stencilDepthFail","\xe5","\x96","\x76","\x67")},
	{hx::fsObject /*::kha::graphics4::StencilAction*/ ,(int)offsetof(PipelineStateBase_obj,stencilFail),HX_HCSTRING("stencilFail","\xfa","\x51","\xaf","\x40")},
	{hx::fsInt,(int)offsetof(PipelineStateBase_obj,stencilReferenceValue),HX_HCSTRING("stencilReferenceValue","\xc2","\x1a","\x35","\x60")},
	{hx::fsInt,(int)offsetof(PipelineStateBase_obj,stencilReadMask),HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5")},
	{hx::fsInt,(int)offsetof(PipelineStateBase_obj,stencilWriteMask),HX_HCSTRING("stencilWriteMask","\xcf","\xb7","\x47","\x1e")},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(PipelineStateBase_obj,blendSource),HX_HCSTRING("blendSource","\x0c","\xa0","\xa3","\xe6")},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(PipelineStateBase_obj,blendDestination),HX_HCSTRING("blendDestination","\xbd","\xe9","\xa3","\x86")},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,colorWriteMaskRed),HX_HCSTRING("colorWriteMaskRed","\xa9","\x16","\xc2","\xdd")},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,colorWriteMaskGreen),HX_HCSTRING("colorWriteMaskGreen","\x1b","\x52","\xa4","\x16")},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,colorWriteMaskBlue),HX_HCSTRING("colorWriteMaskBlue","\x42","\xb2","\x83","\x21")},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,colorWriteMaskAlpha),HX_HCSTRING("colorWriteMaskAlpha","\xb6","\xea","\x4d","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("inputLayout","\x54","\x8a","\xec","\x4d"),
	HX_HCSTRING("vertexShader","\xa9","\xb1","\x35","\xbd"),
	HX_HCSTRING("fragmentShader","\x15","\x4f","\xdc","\x39"),
	HX_HCSTRING("cullMode","\x35","\x06","\xdd","\xb0"),
	HX_HCSTRING("depthWrite","\xdc","\x60","\xc5","\x2c"),
	HX_HCSTRING("depthMode","\x06","\x2e","\xe4","\x9e"),
	HX_HCSTRING("stencilMode","\x7f","\x6b","\x5a","\x45"),
	HX_HCSTRING("stencilBothPass","\x0e","\x44","\x39","\xda"),
	HX_HCSTRING("stencilDepthFail","\xe5","\x96","\x76","\x67"),
	HX_HCSTRING("stencilFail","\xfa","\x51","\xaf","\x40"),
	HX_HCSTRING("stencilReferenceValue","\xc2","\x1a","\x35","\x60"),
	HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5"),
	HX_HCSTRING("stencilWriteMask","\xcf","\xb7","\x47","\x1e"),
	HX_HCSTRING("blendSource","\x0c","\xa0","\xa3","\xe6"),
	HX_HCSTRING("blendDestination","\xbd","\xe9","\xa3","\x86"),
	HX_HCSTRING("colorWriteMaskRed","\xa9","\x16","\xc2","\xdd"),
	HX_HCSTRING("colorWriteMaskGreen","\x1b","\x52","\xa4","\x16"),
	HX_HCSTRING("colorWriteMaskBlue","\x42","\xb2","\x83","\x21"),
	HX_HCSTRING("colorWriteMaskAlpha","\xb6","\xea","\x4d","\x9e"),
	HX_HCSTRING("set_colorWriteMask","\xc5","\xf2","\xff","\x30"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PipelineStateBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PipelineStateBase_obj::__mClass,"__mClass");
};

#endif

hx::Class PipelineStateBase_obj::__mClass;

void PipelineStateBase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.PipelineStateBase","\x31","\xa3","\xca","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PipelineStateBase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PipelineStateBase_obj >;
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
} // end namespace graphics4
