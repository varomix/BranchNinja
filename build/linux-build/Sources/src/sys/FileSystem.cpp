#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace sys{

Void FileSystem_obj::__construct()
{
	return null();
}

//FileSystem_obj::~FileSystem_obj() { }

Dynamic FileSystem_obj::__CreateEmpty() { return  new FileSystem_obj; }
hx::ObjectPtr< FileSystem_obj > FileSystem_obj::__new()
{  hx::ObjectPtr< FileSystem_obj > _result_ = new FileSystem_obj();
	_result_->__construct();
	return _result_;}

Dynamic FileSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileSystem_obj > _result_ = new FileSystem_obj();
	_result_->__construct();
	return _result_;}

Dynamic FileSystem_obj::stat( ::String path){
	HX_STACK_FRAME("sys.FileSystem","stat",0xa630df16,"sys.FileSystem.stat","/home/varomix/dev/Kha/Tools/haxe/std/cpp/_std/sys/FileSystem.hx",42,0xb90d0672)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(43)
	Dynamic tmp = path.charCodeAt((int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	bool tmp1 = (tmp == (int)58);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	if ((tmp1)){
		HX_STACK_LINE(43)
		tmp2 = (path.length <= (int)3);
	}
	else{
		HX_STACK_LINE(43)
		tmp2 = false;
	}
	HX_STACK_LINE(43)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	if ((tmp2)){
		HX_STACK_LINE(43)
		::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		tmp3 = ::haxe::io::Path_obj::addTrailingSlash(tmp4);
	}
	else{
		HX_STACK_LINE(43)
		::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		tmp3 = ::haxe::io::Path_obj::removeTrailingSlashes(tmp4);
	}
	HX_STACK_LINE(43)
	Dynamic tmp4 = ::sys::FileSystem_obj::sys_stat(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	Dynamic s = tmp4;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(44)
	bool tmp5 = (s == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	if ((tmp5)){
		HX_STACK_LINE(45)
		::Date tmp6 = ::Date_obj::fromTime((int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		::Date tmp7 = ::Date_obj::fromTime((int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		::Date tmp8 = ::Date_obj::fromTime((int)0);		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_2_1{
			inline static Dynamic Block( ::Date &tmp6,::Date &tmp7,::Date &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/home/varomix/dev/Kha/Tools/haxe/std/cpp/_std/sys/FileSystem.hx",45,0xb90d0672)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("uid","\x90","\x23","\x59","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("atime","\xee","\x10","\xdb","\x26") , tmp6,false);
					__result->Add(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f") , tmp7,false);
					__result->Add(HX_HCSTRING("ctime","\xf0","\x39","\xa8","\x4d") , tmp8,false);
					__result->Add(HX_HCSTRING("dev","\xd5","\x39","\x4c","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("ino","\xea","\x0c","\x50","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("nlink","\x68","\xe7","\xc6","\x9d") , (int)0,false);
					__result->Add(HX_HCSTRING("rdev","\xa3","\x8c","\xa6","\x4b") , (int)0,false);
					__result->Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c") , (int)0,false);
					__result->Add(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		Dynamic tmp9 = _Function_2_1::Block(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		return tmp9;
	}
	HX_STACK_LINE(46)
	Float tmp6 = (((Float)1000.0) * s->__Field(HX_HCSTRING("atime","\xee","\x10","\xdb","\x26"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	::Date tmp7 = ::Date_obj::fromTime(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	s->__FieldRef(HX_HCSTRING("atime","\xee","\x10","\xdb","\x26")) = tmp7;
	HX_STACK_LINE(47)
	Float tmp8 = (((Float)1000.0) * s->__Field(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(47)
	::Date tmp9 = ::Date_obj::fromTime(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(47)
	s->__FieldRef(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f")) = tmp9;
	HX_STACK_LINE(48)
	Float tmp10 = (((Float)1000.0) * s->__Field(HX_HCSTRING("ctime","\xf0","\x39","\xa8","\x4d"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(48)
	::Date tmp11 = ::Date_obj::fromTime(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(48)
	s->__FieldRef(HX_HCSTRING("ctime","\xf0","\x39","\xa8","\x4d")) = tmp11;
	HX_STACK_LINE(49)
	Dynamic tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(49)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,stat,return )

Dynamic FileSystem_obj::sys_stat;


FileSystem_obj::FileSystem_obj()
{
}

bool FileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stat") ) { outValue = stat_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sys_stat") ) { outValue = sys_stat; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FileSystem_obj::sys_stat,HX_HCSTRING("sys_stat","\x86","\xe3","\xc5","\x53")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_stat,"sys_stat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_stat,"sys_stat");
};

#endif

hx::Class FileSystem_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("stat","\xd4","\xe3","\x5b","\x4c"),
	HX_HCSTRING("sys_stat","\x86","\xe3","\xc5","\x53"),
	::String(null()) };

void FileSystem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.FileSystem","\x6c","\x2c","\xe5","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FileSystem_obj >;
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

void FileSystem_obj::__boot()
{
	sys_stat= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_stat","\x86","\xe3","\xc5","\x53"),(int)1);
}

} // end namespace sys
