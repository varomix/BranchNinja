#include <hxcpp.h>

#ifndef INCLUDED_Explosion
#include <Explosion.h>
#endif
#ifndef INCLUDED_kha_Assets
#include <kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_ImageList
#include <kha/ImageList.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha2d_Animation
#include <kha2d/Animation.h>
#endif
#ifndef INCLUDED_kha2d_Sprite
#include <kha2d/Sprite.h>
#endif

Void Explosion_obj::__construct()
{
HX_STACK_FRAME("Explosion","new",0x2c66b2e7,"Explosion.new","Explosion.hx",14,0xe8176669)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	::kha::ImageList tmp = ::kha::Assets_obj::images;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	::kha::Image tmp1 = tmp->explosion;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	super::__construct(tmp1,(int)36,(int)36,null());
	HX_STACK_LINE(19)
	::kha2d::Animation tmp2 = ::kha2d::Animation_obj::createRange((int)0,(int)5,(int)4);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	this->explode = tmp2;
	HX_STACK_LINE(22)
	::kha2d::Animation tmp3 = this->explode;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	this->setAnimation(tmp3);
}
;
	return null();
}

//Explosion_obj::~Explosion_obj() { }

Dynamic Explosion_obj::__CreateEmpty() { return  new Explosion_obj; }
hx::ObjectPtr< Explosion_obj > Explosion_obj::__new()
{  hx::ObjectPtr< Explosion_obj > _result_ = new Explosion_obj();
	_result_->__construct();
	return _result_;}

Dynamic Explosion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Explosion_obj > _result_ = new Explosion_obj();
	_result_->__construct();
	return _result_;}

Void Explosion_obj::update( ){
{
		HX_STACK_FRAME("Explosion","update",0x6da7b1e2,"Explosion.update","Explosion.hx",26,0xe8176669)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->super::update();
	}
return null();
}



Explosion_obj::Explosion_obj()
{
}

void Explosion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Explosion);
	HX_MARK_MEMBER_NAME(explode,"explode");
	::kha2d::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Explosion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(explode,"explode");
	::kha2d::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Explosion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"explode") ) { return explode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Explosion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"explode") ) { explode=inValue.Cast< ::kha2d::Animation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Explosion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Explosion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("explode","\xe1","\xbb","\x63","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha2d::Animation*/ ,(int)offsetof(Explosion_obj,explode),HX_HCSTRING("explode","\xe1","\xbb","\x63","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("explode","\xe1","\xbb","\x63","\x27"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Explosion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Explosion_obj::__mClass,"__mClass");
};

#endif

hx::Class Explosion_obj::__mClass;

void Explosion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Explosion","\x75","\xb3","\x73","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Explosion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Explosion_obj >;
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

