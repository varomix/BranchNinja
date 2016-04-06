#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
namespace haxe{
namespace io{

Void Path_obj::__construct()
{
	return null();
}

//Path_obj::~Path_obj() { }

Dynamic Path_obj::__CreateEmpty() { return  new Path_obj; }
hx::ObjectPtr< Path_obj > Path_obj::__new()
{  hx::ObjectPtr< Path_obj > _result_ = new Path_obj();
	_result_->__construct();
	return _result_;}

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Path_obj > _result_ = new Path_obj();
	_result_->__construct();
	return _result_;}

::String Path_obj::addTrailingSlash( ::String path){
	HX_STACK_FRAME("haxe.io.Path","addTrailingSlash",0x8b4f8e69,"haxe.io.Path.addTrailingSlash","/home/varomix/dev/Kha/Tools/haxe/std/haxe/io/Path.hx",265,0xa19a3139)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(266)
	bool tmp = (path.length == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	if ((tmp)){
		HX_STACK_LINE(267)
		return HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
	}
	HX_STACK_LINE(268)
	int tmp1 = path.lastIndexOf(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	int c1 = tmp1;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(269)
	int tmp2 = path.lastIndexOf(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	int c2 = tmp2;		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(270)
	bool tmp3 = (c1 < c2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(270)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(270)
	if ((tmp3)){
		HX_STACK_LINE(271)
		int tmp5 = c2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(271)
		int tmp6 = (path.length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(271)
		if ((tmp7)){
			HX_STACK_LINE(271)
			tmp4 = (path + HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(272)
			tmp4 = path;
		}
	}
	else{
		HX_STACK_LINE(274)
		int tmp5 = c1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(274)
		int tmp6 = (path.length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(274)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(274)
		if ((tmp7)){
			HX_STACK_LINE(274)
			tmp4 = (path + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(275)
			tmp4 = path;
		}
	}
	HX_STACK_LINE(270)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,addTrailingSlash,return )

::String Path_obj::removeTrailingSlashes( ::String path){
	HX_STACK_FRAME("haxe.io.Path","removeTrailingSlashes",0x2dc73462,"haxe.io.Path.removeTrailingSlashes","/home/varomix/dev/Kha/Tools/haxe/std/haxe/io/Path.hx",290,0xa19a3139)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(291)
	while((true)){
		HX_STACK_LINE(292)
		int tmp = (path.length - (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		Dynamic tmp1 = path.charCodeAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		Dynamic _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		bool tmp2 = (_g != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		if ((tmp2)){
			HX_STACK_LINE(292)
			Dynamic tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(292)
			Dynamic _switch_1 = (tmp3);
			if (  ( _switch_1==(int)47) ||  ( _switch_1==(int)92)){
				HX_STACK_LINE(293)
				::String tmp4 = path.substr((int)0,(int)-1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(293)
				path = tmp4;
			}
			else  {
				HX_STACK_LINE(294)
				break;
			}
;
;
		}
		else{
			HX_STACK_LINE(294)
			break;
		}
	}
	HX_STACK_LINE(297)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,removeTrailingSlashes,return )


Path_obj::Path_obj()
{
}

bool Path_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"addTrailingSlash") ) { outValue = addTrailingSlash_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeTrailingSlashes") ) { outValue = removeTrailingSlashes_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#endif

hx::Class Path_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("addTrailingSlash","\xe0","\xd6","\xeb","\x26"),
	HX_HCSTRING("removeTrailingSlashes","\x8b","\xdc","\x1d","\x43"),
	::String(null()) };

void Path_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Path","\x05","\xcf","\xc6","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Path_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Path_obj >;
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

} // end namespace haxe
} // end namespace io
