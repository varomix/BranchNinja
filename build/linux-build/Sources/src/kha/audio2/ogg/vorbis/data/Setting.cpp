#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Setting
#include <kha/audio2/ogg/vorbis/data/Setting.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

Void Setting_obj::__construct()
{
	return null();
}

//Setting_obj::~Setting_obj() { }

Dynamic Setting_obj::__CreateEmpty() { return  new Setting_obj; }
hx::ObjectPtr< Setting_obj > Setting_obj::__new()
{  hx::ObjectPtr< Setting_obj > _result_ = new Setting_obj();
	_result_->__construct();
	return _result_;}

Dynamic Setting_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Setting_obj > _result_ = new Setting_obj();
	_result_->__construct();
	return _result_;}

int Setting_obj::MAX_CHANNELS;

int Setting_obj::PUSHDATA_CRC_COUNT;

int Setting_obj::FAST_HUFFMAN_LENGTH;

int Setting_obj::FAST_HUFFMAN_TABLE_SIZE;

int Setting_obj::FAST_HUFFMAN_TABLE_MASK;


Setting_obj::Setting_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Setting_obj::MAX_CHANNELS,HX_HCSTRING("MAX_CHANNELS","\xab","\x9a","\xb0","\xa4")},
	{hx::fsInt,(void *) &Setting_obj::PUSHDATA_CRC_COUNT,HX_HCSTRING("PUSHDATA_CRC_COUNT","\x69","\x37","\x15","\xf6")},
	{hx::fsInt,(void *) &Setting_obj::FAST_HUFFMAN_LENGTH,HX_HCSTRING("FAST_HUFFMAN_LENGTH","\x9b","\x48","\x12","\xdb")},
	{hx::fsInt,(void *) &Setting_obj::FAST_HUFFMAN_TABLE_SIZE,HX_HCSTRING("FAST_HUFFMAN_TABLE_SIZE","\x27","\x9c","\xff","\x32")},
	{hx::fsInt,(void *) &Setting_obj::FAST_HUFFMAN_TABLE_MASK,HX_HCSTRING("FAST_HUFFMAN_TABLE_MASK","\x52","\x3c","\x02","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Setting_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Setting_obj::MAX_CHANNELS,"MAX_CHANNELS");
	HX_MARK_MEMBER_NAME(Setting_obj::PUSHDATA_CRC_COUNT,"PUSHDATA_CRC_COUNT");
	HX_MARK_MEMBER_NAME(Setting_obj::FAST_HUFFMAN_LENGTH,"FAST_HUFFMAN_LENGTH");
	HX_MARK_MEMBER_NAME(Setting_obj::FAST_HUFFMAN_TABLE_SIZE,"FAST_HUFFMAN_TABLE_SIZE");
	HX_MARK_MEMBER_NAME(Setting_obj::FAST_HUFFMAN_TABLE_MASK,"FAST_HUFFMAN_TABLE_MASK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Setting_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Setting_obj::MAX_CHANNELS,"MAX_CHANNELS");
	HX_VISIT_MEMBER_NAME(Setting_obj::PUSHDATA_CRC_COUNT,"PUSHDATA_CRC_COUNT");
	HX_VISIT_MEMBER_NAME(Setting_obj::FAST_HUFFMAN_LENGTH,"FAST_HUFFMAN_LENGTH");
	HX_VISIT_MEMBER_NAME(Setting_obj::FAST_HUFFMAN_TABLE_SIZE,"FAST_HUFFMAN_TABLE_SIZE");
	HX_VISIT_MEMBER_NAME(Setting_obj::FAST_HUFFMAN_TABLE_MASK,"FAST_HUFFMAN_TABLE_MASK");
};

#endif

hx::Class Setting_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MAX_CHANNELS","\xab","\x9a","\xb0","\xa4"),
	HX_HCSTRING("PUSHDATA_CRC_COUNT","\x69","\x37","\x15","\xf6"),
	HX_HCSTRING("FAST_HUFFMAN_LENGTH","\x9b","\x48","\x12","\xdb"),
	HX_HCSTRING("FAST_HUFFMAN_TABLE_SIZE","\x27","\x9c","\xff","\x32"),
	HX_HCSTRING("FAST_HUFFMAN_TABLE_MASK","\x52","\x3c","\x02","\x2f"),
	::String(null()) };

void Setting_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Setting","\xc0","\xb8","\xdd","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Setting_obj >;
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

void Setting_obj::__boot()
{
	MAX_CHANNELS= (int)16;
	PUSHDATA_CRC_COUNT= (int)4;
	FAST_HUFFMAN_LENGTH= (int)10;
	FAST_HUFFMAN_TABLE_SIZE= (int)1024;
	FAST_HUFFMAN_TABLE_MASK= (int)1023;
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
