#include <hxcpp.h>

#ifndef INCLUDED_Star
#include <Star.h>
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
#ifndef INCLUDED_kha2d_Sprite
#include <kha2d/Sprite.h>
#endif

Void Star_obj::__construct()
{
HX_STACK_FRAME("Star","new",0xee1c91e4,"Star.new","Star.hx",12,0x0237360c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	::kha::ImageList tmp = ::kha::Assets_obj::images;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::kha::Image tmp1 = tmp->shuriken;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	super::__construct(tmp1,(int)26,(int)26,null());
	HX_STACK_LINE(16)
	::kha::ImageList tmp2 = ::kha::Assets_obj::images;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	this->image = tmp2->shuriken;
	HX_STACK_LINE(18)
	this->originX = (int)13;
	HX_STACK_LINE(19)
	this->originY = (int)13;
	HX_STACK_LINE(20)
	this->accx = (int)15;
	HX_STACK_LINE(21)
	this->y = (int)10;
}
;
	return null();
}

//Star_obj::~Star_obj() { }

Dynamic Star_obj::__CreateEmpty() { return  new Star_obj; }
hx::ObjectPtr< Star_obj > Star_obj::__new()
{  hx::ObjectPtr< Star_obj > _result_ = new Star_obj();
	_result_->__construct();
	return _result_;}

Dynamic Star_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Star_obj > _result_ = new Star_obj();
	_result_->__construct();
	return _result_;}

Void Star_obj::update( ){
{
		HX_STACK_FRAME("Star","update",0x4fab8f05,"Star.update","Star.hx",25,0x0237360c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->super::update();
		HX_STACK_LINE(27)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		bool tmp1 = (tmp > (int)580);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		if ((tmp1)){
			HX_STACK_LINE(29)
			this->x = (int)0;
		}
		HX_STACK_LINE(31)
		Float tmp2 = this->accx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		hx::AddEq(this->x,tmp2);
		HX_STACK_LINE(32)
		hx::AddEq(this->angle,((Float)0.2));
	}
return null();
}



Star_obj::Star_obj()
{
}

Dynamic Star_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

#endif

hx::Class Star_obj::__mClass;

void Star_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Star","\xf2","\x0f","\x35","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Star_obj >;
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

