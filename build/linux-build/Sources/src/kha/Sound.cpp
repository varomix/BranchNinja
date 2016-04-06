#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_Reader
#include <kha/audio2/ogg/vorbis/Reader.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Header
#include <kha/audio2/ogg/vorbis/data/Header.h>
#endif
namespace kha{

Void Sound_obj::__construct()
{
HX_STACK_FRAME("kha.Sound","new",0x1f644c57,"kha.Sound.new","kha/Sound.hx",15,0x5f2333fa)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new()
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Sound_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::Resource_obj)) return operator ::kha::Resource_obj *();
	return super::__ToInterface(inType);
}

Sound_obj::operator ::kha::Resource_obj *()
	{ return new ::kha::Resource_delegate_< Sound_obj >(this); }
Void Sound_obj::uncompress( Dynamic done){
{
		HX_STACK_FRAME("kha.Sound","uncompress",0x58f42fe4,"kha.Sound.uncompress","kha/Sound.hx",17,0x5f2333fa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(18)
		::haxe::io::BytesOutput output = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(19)
		::haxe::io::Bytes tmp = this->compressedData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		::haxe::io::BytesOutput tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		::kha::audio2::ogg::vorbis::data::Header tmp2 = ::kha::audio2::ogg::vorbis::Reader_obj::readAll(tmp,tmp1,true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		::kha::audio2::ogg::vorbis::data::Header header = tmp2;		HX_STACK_VAR(header,"header");
		HX_STACK_LINE(20)
		::haxe::io::Bytes tmp3 = output->getBytes();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		::haxe::io::Bytes soundBytes = tmp3;		HX_STACK_VAR(soundBytes,"soundBytes");
		HX_STACK_LINE(21)
		Float tmp4 = (Float(soundBytes->length) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		int count = tmp5;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(22)
		bool tmp6 = (header->channel == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		if ((tmp6)){
			HX_STACK_LINE(23)
			Array< Float > tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(23)
			{
				HX_STACK_LINE(23)
				Array< Float > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(23)
				Array< Float > tmp8 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(23)
				this1 = tmp8;
				HX_STACK_LINE(23)
				int tmp9 = (count * (int)2);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(23)
				this1->__SetSizeExact(tmp9);
				HX_STACK_LINE(23)
				tmp7 = this1;
			}
			HX_STACK_LINE(23)
			this->uncompressedData = tmp7;
			HX_STACK_LINE(24)
			{
				HX_STACK_LINE(24)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(24)
				while((true)){
					HX_STACK_LINE(24)
					bool tmp8 = (_g < count);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(24)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(24)
					if ((tmp9)){
						HX_STACK_LINE(24)
						break;
					}
					HX_STACK_LINE(24)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(24)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(25)
					{
						HX_STACK_LINE(25)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(25)
						{
							HX_STACK_LINE(25)
							int tmp12 = (i * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(25)
							int pos = tmp12;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(25)
							bool tmp13 = (pos < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(25)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(25)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(25)
							if ((tmp14)){
								HX_STACK_LINE(25)
								int tmp16 = (pos + (int)4);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(25)
								int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(25)
								int tmp18 = soundBytes->length;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(25)
								tmp15 = (tmp17 > tmp18);
							}
							else{
								HX_STACK_LINE(25)
								tmp15 = true;
							}
							HX_STACK_LINE(25)
							if ((tmp15)){
								HX_STACK_LINE(25)
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							HX_STACK_LINE(25)
							tmp11 = ::__hxcpp_memory_get_float(soundBytes->b,pos);
						}
						HX_STACK_LINE(25)
						Float val = tmp11;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(25)
						Array< Float > tmp12 = this->uncompressedData;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(25)
						int tmp13 = (i * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(25)
						Float tmp14 = val;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(25)
						Float tmp15 = tmp12->__unsafe_set(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(25)
						tmp15;
					}
					HX_STACK_LINE(26)
					{
						HX_STACK_LINE(26)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(26)
						{
							HX_STACK_LINE(26)
							int tmp12 = (i * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(26)
							int pos = tmp12;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(26)
							bool tmp13 = (pos < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(26)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(26)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(26)
							if ((tmp14)){
								HX_STACK_LINE(26)
								int tmp16 = (pos + (int)4);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(26)
								int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(26)
								int tmp18 = soundBytes->length;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(26)
								tmp15 = (tmp17 > tmp18);
							}
							else{
								HX_STACK_LINE(26)
								tmp15 = true;
							}
							HX_STACK_LINE(26)
							if ((tmp15)){
								HX_STACK_LINE(26)
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							HX_STACK_LINE(26)
							tmp11 = ::__hxcpp_memory_get_float(soundBytes->b,pos);
						}
						HX_STACK_LINE(26)
						Float val = tmp11;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(26)
						Array< Float > tmp12 = this->uncompressedData;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(26)
						int tmp13 = (i * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(26)
						int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(26)
						Float tmp15 = val;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(26)
						Float tmp16 = tmp12->__unsafe_set(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(26)
						tmp16;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(30)
			Array< Float > tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				Array< Float > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(30)
				Array< Float > tmp8 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				this1 = tmp8;
				HX_STACK_LINE(30)
				int tmp9 = count;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(30)
				this1->__SetSizeExact(tmp9);
				HX_STACK_LINE(30)
				tmp7 = this1;
			}
			HX_STACK_LINE(30)
			this->uncompressedData = tmp7;
			HX_STACK_LINE(31)
			{
				HX_STACK_LINE(31)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(31)
				while((true)){
					HX_STACK_LINE(31)
					bool tmp8 = (_g < count);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(31)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(31)
					if ((tmp9)){
						HX_STACK_LINE(31)
						break;
					}
					HX_STACK_LINE(31)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(31)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(32)
					{
						HX_STACK_LINE(32)
						Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(32)
						{
							HX_STACK_LINE(32)
							int tmp12 = (i * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(32)
							int pos = tmp12;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(32)
							bool tmp13 = (pos < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(32)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(32)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(32)
							if ((tmp14)){
								HX_STACK_LINE(32)
								int tmp16 = (pos + (int)4);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(32)
								int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(32)
								int tmp18 = soundBytes->length;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(32)
								tmp15 = (tmp17 > tmp18);
							}
							else{
								HX_STACK_LINE(32)
								tmp15 = true;
							}
							HX_STACK_LINE(32)
							if ((tmp15)){
								HX_STACK_LINE(32)
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							HX_STACK_LINE(32)
							tmp11 = ::__hxcpp_memory_get_float(soundBytes->b,pos);
						}
						HX_STACK_LINE(32)
						Float val = tmp11;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(32)
						Array< Float > tmp12 = this->uncompressedData;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(32)
						int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(32)
						Float tmp14 = val;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(32)
						Float tmp15 = tmp12->__unsafe_set(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(32)
						tmp15;
					}
				}
			}
		}
		HX_STACK_LINE(35)
		this->compressedData = null();
		HX_STACK_LINE(36)
		done().Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,uncompress,(void))

Void Sound_obj::unload( ){
{
		HX_STACK_FRAME("kha.Sound","unload",0x00feb968,"kha.Sound.unload","kha/Sound.hx",39,0x5f2333fa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->compressedData = null();
		HX_STACK_LINE(41)
		this->uncompressedData = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,unload,(void))


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(compressedData,"compressedData");
	HX_MARK_MEMBER_NAME(uncompressedData,"uncompressedData");
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(compressedData,"compressedData");
	HX_VISIT_MEMBER_NAME(uncompressedData,"uncompressedData");
}

Dynamic Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compressedData") ) { return compressedData; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uncompressedData") ) { return uncompressedData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"compressedData") ) { compressedData=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uncompressedData") ) { uncompressedData=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("compressedData","\x4b","\xa3","\xdd","\x44"));
	outFields->push(HX_HCSTRING("uncompressedData","\x64","\x13","\xff","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Sound_obj,compressedData),HX_HCSTRING("compressedData","\x4b","\xa3","\xdd","\x44")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Sound_obj,uncompressedData),HX_HCSTRING("uncompressedData","\x64","\x13","\xff","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("compressedData","\x4b","\xa3","\xdd","\x44"),
	HX_HCSTRING("uncompressedData","\x64","\x13","\xff","\x51"),
	HX_HCSTRING("uncompress","\xfb","\x2e","\x83","\x09"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

hx::Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Sound","\xe5","\xd4","\x6b","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Sound_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
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
