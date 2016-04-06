#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
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

Void Player_obj::__construct()
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",16,0xa27fc9dd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	::kha::ImageList tmp = ::kha::Assets_obj::images;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	::kha::Image tmp1 = tmp->ninjaBlack2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	super::__construct(tmp1,(int)36,(int)36,null());
	HX_STACK_LINE(21)
	::kha2d::Animation tmp2 = ::kha2d::Animation_obj::createRange((int)12,(int)15,(int)5);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	this->walk = tmp2;
	HX_STACK_LINE(22)
	::kha2d::Animation tmp3 = ::kha2d::Animation_obj::create((int)17);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	this->jump = tmp3;
	HX_STACK_LINE(23)
	::kha2d::Animation tmp4 = ::kha2d::Animation_obj::create((int)23);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	this->shoot = tmp4;
	HX_STACK_LINE(26)
	::kha2d::Animation tmp5 = this->walk;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	this->setAnimation(tmp5);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",30,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::update();
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(walk,"walk");
	HX_MARK_MEMBER_NAME(jump,"jump");
	HX_MARK_MEMBER_NAME(shoot,"shoot");
	::kha2d::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(walk,"walk");
	HX_VISIT_MEMBER_NAME(jump,"jump");
	HX_VISIT_MEMBER_NAME(shoot,"shoot");
	::kha2d::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"walk") ) { return walk; }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"walk") ) { walk=inValue.Cast< ::kha2d::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jump") ) { jump=inValue.Cast< ::kha2d::Animation >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { shoot=inValue.Cast< ::kha2d::Animation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Player_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"));
	outFields->push(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"));
	outFields->push(HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha2d::Animation*/ ,(int)offsetof(Player_obj,walk),HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e")},
	{hx::fsObject /*::kha2d::Animation*/ ,(int)offsetof(Player_obj,jump),HX_HCSTRING("jump","\xee","\xc4","\x69","\x46")},
	{hx::fsObject /*::kha2d::Animation*/ ,(int)offsetof(Player_obj,shoot),HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Player_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

