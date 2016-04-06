#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_tools_Crc32
#include <kha/audio2/ogg/tools/Crc32.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace tools{

Void Crc32_obj::__construct()
{
	return null();
}

//Crc32_obj::~Crc32_obj() { }

Dynamic Crc32_obj::__CreateEmpty() { return  new Crc32_obj; }
hx::ObjectPtr< Crc32_obj > Crc32_obj::__new()
{  hx::ObjectPtr< Crc32_obj > _result_ = new Crc32_obj();
	_result_->__construct();
	return _result_;}

Dynamic Crc32_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Crc32_obj > _result_ = new Crc32_obj();
	_result_->__construct();
	return _result_;}

int Crc32_obj::POLY;

Array< int > Crc32_obj::table;

Void Crc32_obj::init( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.tools.Crc32","init",0xfae22f45,"kha.audio2.ogg.tools.Crc32.init","kha/audio2/ogg/tools/Crc32.hx",13,0x1d18eae7)
		HX_STACK_LINE(14)
		Array< int > tmp = ::kha::audio2::ogg::tools::Crc32_obj::table;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		if ((tmp1)){
			HX_STACK_LINE(15)
			return null();
		}
		HX_STACK_LINE(18)
		Array< int > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		{
			HX_STACK_LINE(18)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(18)
			Array< int > tmp3 = Array_obj< int >::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(18)
			this1 = tmp3;
			HX_STACK_LINE(18)
			this1->__SetSizeExact((int)256);
			HX_STACK_LINE(18)
			tmp2 = this1;
		}
		HX_STACK_LINE(18)
		::kha::audio2::ogg::tools::Crc32_obj::table = tmp2;
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(19)
			while((true)){
				HX_STACK_LINE(19)
				bool tmp3 = (_g < (int)256);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(19)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(19)
				if ((tmp4)){
					HX_STACK_LINE(19)
					break;
				}
				HX_STACK_LINE(19)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(19)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(20)
				int tmp6 = (int(i) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(20)
				int s = tmp6;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(21)
				{
					HX_STACK_LINE(21)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(21)
					while((true)){
						HX_STACK_LINE(21)
						bool tmp7 = (_g1 < (int)8);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(21)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(21)
						if ((tmp8)){
							HX_STACK_LINE(21)
							break;
						}
						HX_STACK_LINE(21)
						int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(21)
						int j = tmp9;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(22)
						int tmp10 = (int(s) << int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(22)
						int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(22)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(22)
						{
							HX_STACK_LINE(22)
							int tmp13 = (int((int)1) << int((int)31));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(22)
							int b = tmp13;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(22)
							bool tmp14 = (s < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(22)
							bool aNeg = tmp14;		HX_STACK_VAR(aNeg,"aNeg");
							HX_STACK_LINE(22)
							bool tmp15 = (b < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(22)
							bool bNeg = tmp15;		HX_STACK_VAR(bNeg,"bNeg");
							HX_STACK_LINE(22)
							bool tmp16 = (aNeg != bNeg);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(22)
							if ((tmp16)){
								HX_STACK_LINE(22)
								tmp12 = aNeg;
							}
							else{
								HX_STACK_LINE(22)
								tmp12 = (s >= b);
							}
						}
						HX_STACK_LINE(22)
						int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(22)
						if ((tmp12)){
							HX_STACK_LINE(22)
							tmp13 = (int)79764919;
						}
						else{
							HX_STACK_LINE(22)
							tmp13 = (int)0;
						}
						HX_STACK_LINE(22)
						int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(22)
						int tmp15 = (int(tmp11) ^ int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(22)
						s = tmp15;
					}
				}
				HX_STACK_LINE(24)
				Array< int > tmp7 = ::kha::audio2::ogg::tools::Crc32_obj::table;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(24)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(24)
				int tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(24)
				int tmp10 = tmp7->__unsafe_set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(24)
				tmp10;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Crc32_obj,init,(void))

int Crc32_obj::update( int crc,int byte){
	HX_STACK_FRAME("kha.audio2.ogg.tools.Crc32","update",0x0af9b17e,"kha.audio2.ogg.tools.Crc32.update","kha/audio2/ogg/tools/Crc32.hx",29,0x1d18eae7)
	HX_STACK_ARG(crc,"crc")
	HX_STACK_ARG(byte,"byte")
	HX_STACK_LINE(30)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		Array< int > tmp1 = ::kha::audio2::ogg::tools::Crc32_obj::table;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		int tmp2 = byte;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		int tmp3 = hx::UShr(crc,(int)24);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		int tmp5 = (int(tmp2) ^ int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		int tmp7 = tmp1->__unsafe_get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		int b = tmp7;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(30)
		int tmp8 = (int(crc) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(30)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(30)
		int tmp10 = b;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(30)
		tmp = (int(tmp9) ^ int(tmp10));
	}
	HX_STACK_LINE(30)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Crc32_obj,update,return )


Crc32_obj::Crc32_obj()
{
}

bool Crc32_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { outValue = table; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Crc32_obj::POLY,HX_HCSTRING("POLY","\x4c","\x46","\x1d","\x35")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Crc32_obj::table,HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Crc32_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Crc32_obj::POLY,"POLY");
	HX_MARK_MEMBER_NAME(Crc32_obj::table,"table");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Crc32_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Crc32_obj::POLY,"POLY");
	HX_VISIT_MEMBER_NAME(Crc32_obj::table,"table");
};

#endif

hx::Class Crc32_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("POLY","\x4c","\x46","\x1d","\x35"),
	HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

void Crc32_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.tools.Crc32","\x59","\xd8","\x1b","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Crc32_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Crc32_obj >;
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

void Crc32_obj::__boot()
{
	POLY= (int)79764919;
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace tools
