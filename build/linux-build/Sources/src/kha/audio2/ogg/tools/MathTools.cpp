#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_tools_MathTools
#include <kha/audio2/ogg/tools/MathTools.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace tools{

Void MathTools_obj::__construct()
{
	return null();
}

//MathTools_obj::~MathTools_obj() { }

Dynamic MathTools_obj::__CreateEmpty() { return  new MathTools_obj; }
hx::ObjectPtr< MathTools_obj > MathTools_obj::__new()
{  hx::ObjectPtr< MathTools_obj > _result_ = new MathTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic MathTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MathTools_obj > _result_ = new MathTools_obj();
	_result_->__construct();
	return _result_;}

int MathTools_obj::ilog( int n){
	HX_STACK_FRAME("kha.audio2.ogg.tools.MathTools","ilog",0xbcfd2e30,"kha.audio2.ogg.tools.MathTools.ilog","kha/audio2/ogg/tools/MathTools.hx",10,0x19857227)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(11)
	Array< int > tmp = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Array< int > log2_4 = tmp;		HX_STACK_VAR(log2_4,"log2_4");
	HX_STACK_LINE(14)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	int tmp2 = (int)16384;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(14)
	if ((tmp3)){
		HX_STACK_LINE(15)
		int tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		int tmp6 = (int)16;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(15)
		if ((tmp7)){
			HX_STACK_LINE(16)
			int tmp8 = log2_4->__get(n);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(16)
			tmp4 = tmp8;
		}
		else{
			HX_STACK_LINE(17)
			int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(17)
			int tmp9 = (int)512;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(17)
			bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(17)
			if ((tmp10)){
				HX_STACK_LINE(18)
				Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(18)
				int tmp12 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(18)
				int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(18)
				tmp4 = ((int)5 + tmp13);
			}
			else{
				HX_STACK_LINE(20)
				Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(20)
				int tmp12 = (int(n) >> int((int)10));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(20)
				int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(20)
				tmp4 = ((int)10 + tmp13);
			}
		}
	}
	else{
		HX_STACK_LINE(22)
		int tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		int tmp6 = (int)16777216;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		if ((tmp7)){
			HX_STACK_LINE(23)
			int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(23)
			int tmp9 = (int)524288;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(23)
			bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(23)
			if ((tmp10)){
				HX_STACK_LINE(24)
				Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(24)
				int tmp12 = (int(n) >> int((int)15));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(24)
				int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(24)
				tmp4 = ((int)15 + tmp13);
			}
			else{
				HX_STACK_LINE(26)
				Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(26)
				int tmp12 = (int(n) >> int((int)20));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(26)
				int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(26)
				tmp4 = ((int)20 + tmp13);
			}
		}
		else{
			HX_STACK_LINE(28)
			int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(28)
			int tmp9 = (int)536870912;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(28)
			bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(28)
			if ((tmp10)){
				HX_STACK_LINE(29)
				Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(29)
				int tmp12 = (int(n) >> int((int)25));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(29)
				int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(29)
				tmp4 = ((int)25 + tmp13);
			}
			else{
				HX_STACK_LINE(30)
				int tmp11 = n;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(30)
				int tmp12 = (int)-2147483648;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(30)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(30)
				if ((tmp13)){
					HX_STACK_LINE(31)
					Array< int > tmp14 = log2_4;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(31)
					int tmp15 = (int(n) >> int((int)30));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(31)
					int tmp16 = tmp14->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(31)
					tmp4 = ((int)30 + tmp16);
				}
				else{
					HX_STACK_LINE(33)
					tmp4 = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(14)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathTools_obj,ilog,return )


MathTools_obj::MathTools_obj()
{
}

bool MathTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ilog") ) { outValue = ilog_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathTools_obj::__mClass,"__mClass");
};

#endif

hx::Class MathTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ilog","\xbb","\xbb","\xb9","\x45"),
	::String(null()) };

void MathTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.tools.MathTools","\x19","\x02","\xd0","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MathTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MathTools_obj >;
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
} // end namespace audio2
} // end namespace ogg
} // end namespace tools
