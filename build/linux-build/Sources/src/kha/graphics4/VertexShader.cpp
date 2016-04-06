#include <hxcpp.h>

#include "cpp/Pointer.h"
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <kha/graphics4/VertexShader.h>
#endif
namespace kha{
namespace graphics4{

Void VertexShader_obj::__construct(::kha::Blob source)
{
HX_STACK_FRAME("kha.graphics4.VertexShader","new",0xb744d84a,"kha.graphics4.VertexShader.new","kha/graphics4/VertexShader.hx",13,0x1cb2cd64)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(14)
	::kha::Blob tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	this->initVertexShader(tmp);
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::cpp::Function< Void ( ::kha::graphics4::VertexShader ) > inFinalizer = ::cpp::Function< Void ( ::kha::graphics4::VertexShader shader)>(hx::AnyCast(&::kha::graphics4::VertexShader_obj::destroy) );		HX_STACK_VAR(inFinalizer,"inFinalizer");
		HX_STACK_LINE(15)
		::__hxcpp_set_finalizer(hx::ObjectPtr<OBJ_>(this),inFinalizer);
	}
}
;
	return null();
}

//VertexShader_obj::~VertexShader_obj() { }

Dynamic VertexShader_obj::__CreateEmpty() { return  new VertexShader_obj; }
hx::ObjectPtr< VertexShader_obj > VertexShader_obj::__new(::kha::Blob source)
{  hx::ObjectPtr< VertexShader_obj > _result_ = new VertexShader_obj();
	_result_->__construct(source);
	return _result_;}

Dynamic VertexShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexShader_obj > _result_ = new VertexShader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void VertexShader_obj::initVertexShader( ::kha::Blob source){

		shader = new Kore::Shader(source->bytes->b->Pointer(), source->get_length(), Kore::VertexShader);
	
{
		HX_STACK_FRAME("kha.graphics4.VertexShader","initVertexShader",0x669c5eaf,"kha.graphics4.VertexShader.initVertexShader","kha/graphics4/VertexShader.hx",25,0x1cb2cd64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexShader_obj,initVertexShader,(void))

Void VertexShader_obj::unused( ){
{
		HX_STACK_FRAME("kha.graphics4.VertexShader","unused",0x1c5bdf6c,"kha.graphics4.VertexShader.unused","kha/graphics4/VertexShader.hx",29,0x1cb2cd64)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::ofString(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		::haxe::io::Bytes include = tmp;		HX_STACK_VAR(include,"include");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexShader_obj,unused,(void))

void VertexShader_obj::destroy( ::kha::graphics4::VertexShader shader){
{
		HX_STACK_FRAME("kha.graphics4.VertexShader","destroy",0x31ca71e4,"kha.graphics4.VertexShader.destroy","kha/graphics4/VertexShader.hx",19,0x1cb2cd64)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(19)
		delete shader->shader;;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VertexShader_obj,destroy,(void))


VertexShader_obj::VertexShader_obj()
{
}

Dynamic VertexShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"unused") ) { return unused_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initVertexShader") ) { return initVertexShader_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool VertexShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { outValue = destroy_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("initVertexShader","\xd9","\x90","\x77","\xb0"),
	HX_HCSTRING("unused","\x16","\x99","\x82","\x6b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexShader_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexShader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

void VertexShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.VertexShader","\x58","\xab","\x14","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VertexShader_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexShader_obj >;
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
