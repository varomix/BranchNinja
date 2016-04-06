#include <hxcpp.h>

#ifndef INCLUDED_Bug
#include <Bug.h>
#endif
#ifndef INCLUDED_Explosion
#include <Explosion.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Project
#include <Project.h>
#endif
#ifndef INCLUDED_Star
#include <Star.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_kha_Assets
#include <kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <kha/Scheduler.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha2d_Scene
#include <kha2d/Scene.h>
#endif
#ifndef INCLUDED_kha2d_Sprite
#include <kha2d/Sprite.h>
#endif

Void Project_obj::__construct()
{
HX_STACK_FRAME("Project","new",0xf2be2c2b,"Project.new","Project.hx",20,0xbb0fc1a5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	Dynamic tmp = this->create_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::kha::Assets_obj::loadEverything(tmp);
	HX_STACK_LINE(22)
	Dynamic tmp1 = this->render_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::kha::System_obj::notifyOnRender(tmp1,null());
	HX_STACK_LINE(23)
	Dynamic tmp2 = this->update_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	Float tmp3 = ((Float)0.0166666666666666664);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	::kha::Scheduler_obj::addTimeTask(tmp2,(int)0,tmp3,null());
}
;
	return null();
}

//Project_obj::~Project_obj() { }

Dynamic Project_obj::__CreateEmpty() { return  new Project_obj; }
hx::ObjectPtr< Project_obj > Project_obj::__new()
{  hx::ObjectPtr< Project_obj > _result_ = new Project_obj();
	_result_->__construct();
	return _result_;}

Dynamic Project_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Project_obj > _result_ = new Project_obj();
	_result_->__construct();
	return _result_;}

Void Project_obj::create( ){
{
		HX_STACK_FRAME("Project","create",0x147e3c11,"Project.create","Project.hx",28,0xbb0fc1a5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::Player tmp = ::Player_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		this->player = tmp;
		HX_STACK_LINE(30)
		::Star tmp1 = ::Star_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		this->shuriken = tmp1;
		HX_STACK_LINE(31)
		::Explosion tmp2 = ::Explosion_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		this->explosion = tmp2;
		HX_STACK_LINE(32)
		::Bug tmp3 = ::Bug_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		this->bug = tmp3;
		HX_STACK_LINE(34)
		::Bug tmp4 = this->bug;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		tmp4->x = (int)350;
		HX_STACK_LINE(35)
		::Explosion tmp5 = this->explosion;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		tmp5->x = (int)200;
		HX_STACK_LINE(38)
		::kha2d::Scene tmp6 = ::kha2d::Scene_obj::get_the();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		::Player tmp7 = this->player;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		tmp6->addHero(tmp7);
		HX_STACK_LINE(39)
		::kha2d::Scene tmp8 = ::kha2d::Scene_obj::get_the();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		::Bug tmp9 = this->bug;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		tmp8->addEnemy(tmp9);
		HX_STACK_LINE(40)
		::kha2d::Scene tmp10 = ::kha2d::Scene_obj::get_the();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		::Explosion tmp11 = this->explosion;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(40)
		tmp10->addOther(tmp11);
		HX_STACK_LINE(41)
		::kha2d::Scene tmp12 = ::kha2d::Scene_obj::get_the();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		::Star tmp13 = this->shuriken;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(41)
		tmp12->addProjectile(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Project_obj,create,(void))

Void Project_obj::update( ){
{
		HX_STACK_FRAME("Project","update",0x1f745b1e,"Project.update","Project.hx",46,0xbb0fc1a5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		::Star tmp = this->shuriken;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Project.hx","\xa5","\xc1","\x0f","\xbb"),47,HX_HCSTRING("Project","\xb9","\x3a","\x3c","\xc3"),HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		::haxe::Log_obj::trace(tmp1,tmp2);
		HX_STACK_LINE(48)
		::kha2d::Scene tmp3 = ::kha2d::Scene_obj::get_the();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		tmp3->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Project_obj,update,(void))

Void Project_obj::render( ::kha::Framebuffer framebuffer){
{
		HX_STACK_FRAME("Project","render",0x9d98406b,"Project.render","Project.hx",51,0xbb0fc1a5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(52)
		::kha::graphics2::Graphics tmp = framebuffer->get_g2();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::kha::graphics2::Graphics g = tmp;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(53)
		g->begin(null(),null());
		HX_STACK_LINE(54)
		::kha2d::Scene tmp1 = ::kha2d::Scene_obj::get_the();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		::kha::graphics2::Graphics tmp2 = g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		tmp1->render(tmp2);
		HX_STACK_LINE(55)
		g->end();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Project_obj,render,(void))


Project_obj::Project_obj()
{
}

void Project_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Project);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(shuriken,"shuriken");
	HX_MARK_MEMBER_NAME(explosion,"explosion");
	HX_MARK_MEMBER_NAME(bug,"bug");
	HX_MARK_END_CLASS();
}

void Project_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(shuriken,"shuriken");
	HX_VISIT_MEMBER_NAME(explosion,"explosion");
	HX_VISIT_MEMBER_NAME(bug,"bug");
}

Dynamic Project_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bug") ) { return bug; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shuriken") ) { return shuriken; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"explosion") ) { return explosion; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Project_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bug") ) { bug=inValue.Cast< ::Bug >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shuriken") ) { shuriken=inValue.Cast< ::Star >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"explosion") ) { explosion=inValue.Cast< ::Explosion >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Project_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Project_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("shuriken","\xfd","\xcb","\x89","\x47"));
	outFields->push(HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e"));
	outFields->push(HX_HCSTRING("bug","\x34","\xc3","\x4a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(Project_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::Star*/ ,(int)offsetof(Project_obj,shuriken),HX_HCSTRING("shuriken","\xfd","\xcb","\x89","\x47")},
	{hx::fsObject /*::Explosion*/ ,(int)offsetof(Project_obj,explosion),HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e")},
	{hx::fsObject /*::Bug*/ ,(int)offsetof(Project_obj,bug),HX_HCSTRING("bug","\x34","\xc3","\x4a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("shuriken","\xfd","\xcb","\x89","\x47"),
	HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e"),
	HX_HCSTRING("bug","\x34","\xc3","\x4a","\x00"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Project_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Project_obj::__mClass,"__mClass");
};

#endif

hx::Class Project_obj::__mClass;

void Project_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Project","\xb9","\x3a","\x3c","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Project_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Project_obj >;
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

