#include <hxcpp.h>

#ifndef INCLUDED_Bug
#include <Bug.h>
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

Void Bug_obj::__construct()
{
HX_STACK_FRAME("Bug","new",0xed4b3606,"Bug.new","Bug.hx",15,0x05a7ec2a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	::kha::ImageList tmp = ::kha::Assets_obj::images;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	::kha::Image tmp1 = tmp->bug;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	super::__construct(tmp1,(int)36,(int)36,null());
	HX_STACK_LINE(20)
	::kha2d::Animation tmp2 = ::kha2d::Animation_obj::createRange((int)0,(int)3,(int)5);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	this->walk = tmp2;
	HX_STACK_LINE(24)
	::kha2d::Animation tmp3 = this->walk;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	this->setAnimation(tmp3);
}
;
	return null();
}

//Bug_obj::~Bug_obj() { }

Dynamic Bug_obj::__CreateEmpty() { return  new Bug_obj; }
hx::ObjectPtr< Bug_obj > Bug_obj::__new()
{  hx::ObjectPtr< Bug_obj > _result_ = new Bug_obj();
	_result_->__construct();
	return _result_;}

Dynamic Bug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bug_obj > _result_ = new Bug_obj();
	_result_->__construct();
	return _result_;}

Void Bug_obj::update( ){
{
		HX_STACK_FRAME("Bug","update",0xfeb4ac23,"Bug.update","Bug.hx",28,0x05a7ec2a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->super::update();
	}
return null();
}



Bug_obj::Bug_obj()
{
}

void Bug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bug);
	HX_MARK_MEMBER_NAME(walk,"walk");
	::kha2d::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(walk,"walk");
	::kha2d::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bug_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"walk") ) { return walk; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bug_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"walk") ) { walk=inValue.Cast< ::kha2d::Animation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bug_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Bug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha2d::Animation*/ ,(int)offsetof(Bug_obj,walk),HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bug_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bug_obj::__mClass,"__mClass");
};

#endif

hx::Class Bug_obj::__mClass;

void Bug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Bug","\x14","\x7b","\x32","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Bug_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bug_obj >;
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

