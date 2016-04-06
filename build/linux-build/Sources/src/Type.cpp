#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif

Void Type_obj::__construct()
{
	return null();
}

//Type_obj::~Type_obj() { }

Dynamic Type_obj::__CreateEmpty() { return  new Type_obj; }
hx::ObjectPtr< Type_obj > Type_obj::__new()
{  hx::ObjectPtr< Type_obj > _result_ = new Type_obj();
	_result_->__construct();
	return _result_;}

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Type_obj > _result_ = new Type_obj();
	_result_->__construct();
	return _result_;}

::hx::Class Type_obj::resolveClass( ::String name){
	HX_STACK_FRAME("Type","resolveClass",0x23b06bc0,"Type.resolveClass","/home/varomix/dev/Kha/Tools/haxe/std/cpp/_std/Type.hx",66,0xdd318e25)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(67)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	::hx::Class tmp1 = ::hx::Class_obj::Resolve(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	::hx::Class result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(68)
	bool tmp2 = (result != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	if ((tmp2)){
		HX_STACK_LINE(68)
		tmp3 = result->__IsEnum();
	}
	else{
		HX_STACK_LINE(68)
		tmp3 = false;
	}
	HX_STACK_LINE(68)
	if ((tmp3)){
		HX_STACK_LINE(69)
		return null();
	}
	HX_STACK_LINE(70)
	::hx::Class tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveClass,return )

::Enum Type_obj::resolveEnum( ::String name){
	HX_STACK_FRAME("Type","resolveEnum",0x26394079,"Type.resolveEnum","/home/varomix/dev/Kha/Tools/haxe/std/cpp/_std/Type.hx",73,0xdd318e25)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(74)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::hx::Class tmp1 = ::hx::Class_obj::Resolve(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::hx::Class result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(75)
	bool tmp2 = (result != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	if ((tmp2)){
		HX_STACK_LINE(75)
		bool tmp4 = result->__IsEnum();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(75)
		tmp3 = false;
	}
	HX_STACK_LINE(75)
	if ((tmp3)){
		HX_STACK_LINE(76)
		return null();
	}
	HX_STACK_LINE(77)
	::hx::Class tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveEnum,return )

Dynamic Type_obj::createEmptyInstance( ::hx::Class cl){
	HX_STACK_FRAME("Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","/home/varomix/dev/Kha/Tools/haxe/std/cpp/_std/Type.hx",86,0xdd318e25)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_LINE(87)
	Dynamic tmp = cl->ConstructEmpty();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )

Dynamic Type_obj::createEnum( ::Enum e,::String constr,cpp::ArrayBase params){
	HX_STACK_FRAME("Type","createEnum",0xd8d56d31,"Type.createEnum","/home/varomix/dev/Kha/Tools/haxe/std/cpp/_std/Type.hx",90,0xdd318e25)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(constr,"constr")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(91)
	::String tmp = constr;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	cpp::ArrayBase tmp1 = params;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	Dynamic tmp2 = e->ConstructEnum(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Type_obj,createEnum,return )

Array< ::String > Type_obj::getInstanceFields( ::hx::Class c){
	HX_STACK_FRAME("Type","getInstanceFields",0xe970f890,"Type.getInstanceFields","/home/varomix/dev/Kha/Tools/haxe/std/cpp/_std/Type.hx",100,0xdd318e25)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(101)
	Array< ::String > tmp = c->GetInstanceFields();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getInstanceFields,return )

Array< ::String > Type_obj::getEnumConstructs( ::Enum e){
	HX_STACK_FRAME("Type","getEnumConstructs",0x7f46cf7f,"Type.getEnumConstructs","/home/varomix/dev/Kha/Tools/haxe/std/cpp/_std/Type.hx",108,0xdd318e25)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(109)
	Array< ::String > tmp = e->GetClassFields();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnumConstructs,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"createEnum") ) { outValue = createEnum_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getInstanceFields") ) { outValue = getInstanceFields_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getEnumConstructs") ) { outValue = getEnumConstructs_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { outValue = createEmptyInstance_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#endif

hx::Class Type_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("createEmptyInstance","\xa6","\x26","\x85","\xce"),
	HX_HCSTRING("createEnum","\x1d","\x2c","\xa4","\x55"),
	HX_HCSTRING("getInstanceFields","\x24","\x2f","\x97","\xed"),
	HX_HCSTRING("getEnumConstructs","\x13","\x06","\x6d","\x83"),
	::String(null()) };

void Type_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Type_obj >;
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

