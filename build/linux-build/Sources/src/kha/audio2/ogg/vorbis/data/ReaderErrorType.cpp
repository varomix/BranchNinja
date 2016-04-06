#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#include <kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::BAD_PACKET_TYPE;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::CANT_FIND_LAST_PAGE;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::CONTINUED_PACKET_FLAG_INVALID;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::FEATURE_NOT_SUPPORTED;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::FILE_OPEN_FAILURE;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::INCORRECT_STREAM_SERIAL_NUMBER;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::INVALID_API_MIXING;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::INVALID_FIRST_PAGE;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::INVALID_SETUP;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::INVALID_STREAM;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::INVALID_STREAM_STRUCTURE_VERSION;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::MISSING_CAPTURE_PATTERN;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::NEED_MORE_DATA;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::OTHER;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::OUTOFMEM;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::SEEK_FAILED;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::SEEK_INVALID;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::SEEK_WITHOUT_LENGTH;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::TOO_MANY_CHANNELS;

::kha::audio2::ogg::vorbis::data::ReaderErrorType ReaderErrorType_obj::UNEXPECTED_EOF;

HX_DEFINE_CREATE_ENUM(ReaderErrorType_obj)

int ReaderErrorType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BAD_PACKET_TYPE","\x37","\x65","\x8a","\x89")) return 16;
	if (inName==HX_HCSTRING("CANT_FIND_LAST_PAGE","\x0d","\x60","\xa4","\x66")) return 17;
	if (inName==HX_HCSTRING("CONTINUED_PACKET_FLAG_INVALID","\xd9","\x2f","\x6e","\x7b")) return 13;
	if (inName==HX_HCSTRING("FEATURE_NOT_SUPPORTED","\xd9","\xc5","\x59","\x6d")) return 3;
	if (inName==HX_HCSTRING("FILE_OPEN_FAILURE","\x58","\xe2","\xfb","\xaa")) return 5;
	if (inName==HX_HCSTRING("INCORRECT_STREAM_SERIAL_NUMBER","\x6f","\xd0","\x09","\x81")) return 14;
	if (inName==HX_HCSTRING("INVALID_API_MIXING","\xd3","\x5c","\xe6","\x63")) return 1;
	if (inName==HX_HCSTRING("INVALID_FIRST_PAGE","\xc6","\xc3","\x85","\xe2")) return 15;
	if (inName==HX_HCSTRING("INVALID_SETUP","\xb5","\x17","\x9e","\xf8")) return 9;
	if (inName==HX_HCSTRING("INVALID_STREAM","\x28","\xbc","\x5a","\x33")) return 10;
	if (inName==HX_HCSTRING("INVALID_STREAM_STRUCTURE_VERSION","\x75","\x2e","\x4f","\xbe")) return 12;
	if (inName==HX_HCSTRING("MISSING_CAPTURE_PATTERN","\xde","\xef","\x15","\x71")) return 11;
	if (inName==HX_HCSTRING("NEED_MORE_DATA","\xeb","\xb5","\xe3","\x4e")) return 0;
	if (inName==HX_HCSTRING("OTHER","\xb0","\x9e","\x64","\xb4")) return 19;
	if (inName==HX_HCSTRING("OUTOFMEM","\x10","\x62","\x53","\xb6")) return 2;
	if (inName==HX_HCSTRING("SEEK_FAILED","\xe4","\x54","\x00","\x42")) return 18;
	if (inName==HX_HCSTRING("SEEK_INVALID","\xd0","\x8d","\xa3","\xa2")) return 8;
	if (inName==HX_HCSTRING("SEEK_WITHOUT_LENGTH","\x84","\xc3","\x3b","\x4c")) return 6;
	if (inName==HX_HCSTRING("TOO_MANY_CHANNELS","\xe5","\xf6","\x08","\x7e")) return 4;
	if (inName==HX_HCSTRING("UNEXPECTED_EOF","\xee","\x2b","\xb5","\x75")) return 7;
	return super::__FindIndex(inName);
}

int ReaderErrorType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BAD_PACKET_TYPE","\x37","\x65","\x8a","\x89")) return 0;
	if (inName==HX_HCSTRING("CANT_FIND_LAST_PAGE","\x0d","\x60","\xa4","\x66")) return 0;
	if (inName==HX_HCSTRING("CONTINUED_PACKET_FLAG_INVALID","\xd9","\x2f","\x6e","\x7b")) return 0;
	if (inName==HX_HCSTRING("FEATURE_NOT_SUPPORTED","\xd9","\xc5","\x59","\x6d")) return 0;
	if (inName==HX_HCSTRING("FILE_OPEN_FAILURE","\x58","\xe2","\xfb","\xaa")) return 0;
	if (inName==HX_HCSTRING("INCORRECT_STREAM_SERIAL_NUMBER","\x6f","\xd0","\x09","\x81")) return 0;
	if (inName==HX_HCSTRING("INVALID_API_MIXING","\xd3","\x5c","\xe6","\x63")) return 0;
	if (inName==HX_HCSTRING("INVALID_FIRST_PAGE","\xc6","\xc3","\x85","\xe2")) return 0;
	if (inName==HX_HCSTRING("INVALID_SETUP","\xb5","\x17","\x9e","\xf8")) return 0;
	if (inName==HX_HCSTRING("INVALID_STREAM","\x28","\xbc","\x5a","\x33")) return 0;
	if (inName==HX_HCSTRING("INVALID_STREAM_STRUCTURE_VERSION","\x75","\x2e","\x4f","\xbe")) return 0;
	if (inName==HX_HCSTRING("MISSING_CAPTURE_PATTERN","\xde","\xef","\x15","\x71")) return 0;
	if (inName==HX_HCSTRING("NEED_MORE_DATA","\xeb","\xb5","\xe3","\x4e")) return 0;
	if (inName==HX_HCSTRING("OTHER","\xb0","\x9e","\x64","\xb4")) return 0;
	if (inName==HX_HCSTRING("OUTOFMEM","\x10","\x62","\x53","\xb6")) return 0;
	if (inName==HX_HCSTRING("SEEK_FAILED","\xe4","\x54","\x00","\x42")) return 0;
	if (inName==HX_HCSTRING("SEEK_INVALID","\xd0","\x8d","\xa3","\xa2")) return 0;
	if (inName==HX_HCSTRING("SEEK_WITHOUT_LENGTH","\x84","\xc3","\x3b","\x4c")) return 0;
	if (inName==HX_HCSTRING("TOO_MANY_CHANNELS","\xe5","\xf6","\x08","\x7e")) return 0;
	if (inName==HX_HCSTRING("UNEXPECTED_EOF","\xee","\x2b","\xb5","\x75")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ReaderErrorType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BAD_PACKET_TYPE","\x37","\x65","\x8a","\x89")) return BAD_PACKET_TYPE;
	if (inName==HX_HCSTRING("CANT_FIND_LAST_PAGE","\x0d","\x60","\xa4","\x66")) return CANT_FIND_LAST_PAGE;
	if (inName==HX_HCSTRING("CONTINUED_PACKET_FLAG_INVALID","\xd9","\x2f","\x6e","\x7b")) return CONTINUED_PACKET_FLAG_INVALID;
	if (inName==HX_HCSTRING("FEATURE_NOT_SUPPORTED","\xd9","\xc5","\x59","\x6d")) return FEATURE_NOT_SUPPORTED;
	if (inName==HX_HCSTRING("FILE_OPEN_FAILURE","\x58","\xe2","\xfb","\xaa")) return FILE_OPEN_FAILURE;
	if (inName==HX_HCSTRING("INCORRECT_STREAM_SERIAL_NUMBER","\x6f","\xd0","\x09","\x81")) return INCORRECT_STREAM_SERIAL_NUMBER;
	if (inName==HX_HCSTRING("INVALID_API_MIXING","\xd3","\x5c","\xe6","\x63")) return INVALID_API_MIXING;
	if (inName==HX_HCSTRING("INVALID_FIRST_PAGE","\xc6","\xc3","\x85","\xe2")) return INVALID_FIRST_PAGE;
	if (inName==HX_HCSTRING("INVALID_SETUP","\xb5","\x17","\x9e","\xf8")) return INVALID_SETUP;
	if (inName==HX_HCSTRING("INVALID_STREAM","\x28","\xbc","\x5a","\x33")) return INVALID_STREAM;
	if (inName==HX_HCSTRING("INVALID_STREAM_STRUCTURE_VERSION","\x75","\x2e","\x4f","\xbe")) return INVALID_STREAM_STRUCTURE_VERSION;
	if (inName==HX_HCSTRING("MISSING_CAPTURE_PATTERN","\xde","\xef","\x15","\x71")) return MISSING_CAPTURE_PATTERN;
	if (inName==HX_HCSTRING("NEED_MORE_DATA","\xeb","\xb5","\xe3","\x4e")) return NEED_MORE_DATA;
	if (inName==HX_HCSTRING("OTHER","\xb0","\x9e","\x64","\xb4")) return OTHER;
	if (inName==HX_HCSTRING("OUTOFMEM","\x10","\x62","\x53","\xb6")) return OUTOFMEM;
	if (inName==HX_HCSTRING("SEEK_FAILED","\xe4","\x54","\x00","\x42")) return SEEK_FAILED;
	if (inName==HX_HCSTRING("SEEK_INVALID","\xd0","\x8d","\xa3","\xa2")) return SEEK_INVALID;
	if (inName==HX_HCSTRING("SEEK_WITHOUT_LENGTH","\x84","\xc3","\x3b","\x4c")) return SEEK_WITHOUT_LENGTH;
	if (inName==HX_HCSTRING("TOO_MANY_CHANNELS","\xe5","\xf6","\x08","\x7e")) return TOO_MANY_CHANNELS;
	if (inName==HX_HCSTRING("UNEXPECTED_EOF","\xee","\x2b","\xb5","\x75")) return UNEXPECTED_EOF;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NEED_MORE_DATA","\xeb","\xb5","\xe3","\x4e"),
	HX_HCSTRING("INVALID_API_MIXING","\xd3","\x5c","\xe6","\x63"),
	HX_HCSTRING("OUTOFMEM","\x10","\x62","\x53","\xb6"),
	HX_HCSTRING("FEATURE_NOT_SUPPORTED","\xd9","\xc5","\x59","\x6d"),
	HX_HCSTRING("TOO_MANY_CHANNELS","\xe5","\xf6","\x08","\x7e"),
	HX_HCSTRING("FILE_OPEN_FAILURE","\x58","\xe2","\xfb","\xaa"),
	HX_HCSTRING("SEEK_WITHOUT_LENGTH","\x84","\xc3","\x3b","\x4c"),
	HX_HCSTRING("UNEXPECTED_EOF","\xee","\x2b","\xb5","\x75"),
	HX_HCSTRING("SEEK_INVALID","\xd0","\x8d","\xa3","\xa2"),
	HX_HCSTRING("INVALID_SETUP","\xb5","\x17","\x9e","\xf8"),
	HX_HCSTRING("INVALID_STREAM","\x28","\xbc","\x5a","\x33"),
	HX_HCSTRING("MISSING_CAPTURE_PATTERN","\xde","\xef","\x15","\x71"),
	HX_HCSTRING("INVALID_STREAM_STRUCTURE_VERSION","\x75","\x2e","\x4f","\xbe"),
	HX_HCSTRING("CONTINUED_PACKET_FLAG_INVALID","\xd9","\x2f","\x6e","\x7b"),
	HX_HCSTRING("INCORRECT_STREAM_SERIAL_NUMBER","\x6f","\xd0","\x09","\x81"),
	HX_HCSTRING("INVALID_FIRST_PAGE","\xc6","\xc3","\x85","\xe2"),
	HX_HCSTRING("BAD_PACKET_TYPE","\x37","\x65","\x8a","\x89"),
	HX_HCSTRING("CANT_FIND_LAST_PAGE","\x0d","\x60","\xa4","\x66"),
	HX_HCSTRING("SEEK_FAILED","\xe4","\x54","\x00","\x42"),
	HX_HCSTRING("OTHER","\xb0","\x9e","\x64","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::BAD_PACKET_TYPE,"BAD_PACKET_TYPE");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::CANT_FIND_LAST_PAGE,"CANT_FIND_LAST_PAGE");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::CONTINUED_PACKET_FLAG_INVALID,"CONTINUED_PACKET_FLAG_INVALID");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::FEATURE_NOT_SUPPORTED,"FEATURE_NOT_SUPPORTED");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::FILE_OPEN_FAILURE,"FILE_OPEN_FAILURE");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::INCORRECT_STREAM_SERIAL_NUMBER,"INCORRECT_STREAM_SERIAL_NUMBER");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::INVALID_API_MIXING,"INVALID_API_MIXING");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::INVALID_FIRST_PAGE,"INVALID_FIRST_PAGE");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::INVALID_SETUP,"INVALID_SETUP");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::INVALID_STREAM,"INVALID_STREAM");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::INVALID_STREAM_STRUCTURE_VERSION,"INVALID_STREAM_STRUCTURE_VERSION");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::MISSING_CAPTURE_PATTERN,"MISSING_CAPTURE_PATTERN");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::NEED_MORE_DATA,"NEED_MORE_DATA");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::OTHER,"OTHER");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::OUTOFMEM,"OUTOFMEM");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::SEEK_FAILED,"SEEK_FAILED");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::SEEK_INVALID,"SEEK_INVALID");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::SEEK_WITHOUT_LENGTH,"SEEK_WITHOUT_LENGTH");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::TOO_MANY_CHANNELS,"TOO_MANY_CHANNELS");
	HX_MARK_MEMBER_NAME(ReaderErrorType_obj::UNEXPECTED_EOF,"UNEXPECTED_EOF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::BAD_PACKET_TYPE,"BAD_PACKET_TYPE");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::CANT_FIND_LAST_PAGE,"CANT_FIND_LAST_PAGE");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::CONTINUED_PACKET_FLAG_INVALID,"CONTINUED_PACKET_FLAG_INVALID");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::FEATURE_NOT_SUPPORTED,"FEATURE_NOT_SUPPORTED");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::FILE_OPEN_FAILURE,"FILE_OPEN_FAILURE");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::INCORRECT_STREAM_SERIAL_NUMBER,"INCORRECT_STREAM_SERIAL_NUMBER");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::INVALID_API_MIXING,"INVALID_API_MIXING");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::INVALID_FIRST_PAGE,"INVALID_FIRST_PAGE");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::INVALID_SETUP,"INVALID_SETUP");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::INVALID_STREAM,"INVALID_STREAM");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::INVALID_STREAM_STRUCTURE_VERSION,"INVALID_STREAM_STRUCTURE_VERSION");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::MISSING_CAPTURE_PATTERN,"MISSING_CAPTURE_PATTERN");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::NEED_MORE_DATA,"NEED_MORE_DATA");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::OTHER,"OTHER");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::OUTOFMEM,"OUTOFMEM");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::SEEK_FAILED,"SEEK_FAILED");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::SEEK_INVALID,"SEEK_INVALID");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::SEEK_WITHOUT_LENGTH,"SEEK_WITHOUT_LENGTH");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::TOO_MANY_CHANNELS,"TOO_MANY_CHANNELS");
	HX_VISIT_MEMBER_NAME(ReaderErrorType_obj::UNEXPECTED_EOF,"UNEXPECTED_EOF");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ReaderErrorType_obj::__mClass;

Dynamic __Create_ReaderErrorType_obj() { return new ReaderErrorType_obj; }

void ReaderErrorType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.audio2.ogg.vorbis.data.ReaderErrorType","\x0f","\xf0","\xfb","\x45"), hx::TCanCast< ReaderErrorType_obj >,sStaticFields,sMemberFields,
	&__Create_ReaderErrorType_obj, &__Create,
	&super::__SGetClass(), &CreateReaderErrorType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ReaderErrorType_obj::__boot()
{
hx::Static(BAD_PACKET_TYPE) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("BAD_PACKET_TYPE","\x37","\x65","\x8a","\x89"),16);
hx::Static(CANT_FIND_LAST_PAGE) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("CANT_FIND_LAST_PAGE","\x0d","\x60","\xa4","\x66"),17);
hx::Static(CONTINUED_PACKET_FLAG_INVALID) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("CONTINUED_PACKET_FLAG_INVALID","\xd9","\x2f","\x6e","\x7b"),13);
hx::Static(FEATURE_NOT_SUPPORTED) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("FEATURE_NOT_SUPPORTED","\xd9","\xc5","\x59","\x6d"),3);
hx::Static(FILE_OPEN_FAILURE) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("FILE_OPEN_FAILURE","\x58","\xe2","\xfb","\xaa"),5);
hx::Static(INCORRECT_STREAM_SERIAL_NUMBER) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("INCORRECT_STREAM_SERIAL_NUMBER","\x6f","\xd0","\x09","\x81"),14);
hx::Static(INVALID_API_MIXING) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("INVALID_API_MIXING","\xd3","\x5c","\xe6","\x63"),1);
hx::Static(INVALID_FIRST_PAGE) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("INVALID_FIRST_PAGE","\xc6","\xc3","\x85","\xe2"),15);
hx::Static(INVALID_SETUP) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("INVALID_SETUP","\xb5","\x17","\x9e","\xf8"),9);
hx::Static(INVALID_STREAM) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("INVALID_STREAM","\x28","\xbc","\x5a","\x33"),10);
hx::Static(INVALID_STREAM_STRUCTURE_VERSION) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("INVALID_STREAM_STRUCTURE_VERSION","\x75","\x2e","\x4f","\xbe"),12);
hx::Static(MISSING_CAPTURE_PATTERN) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("MISSING_CAPTURE_PATTERN","\xde","\xef","\x15","\x71"),11);
hx::Static(NEED_MORE_DATA) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("NEED_MORE_DATA","\xeb","\xb5","\xe3","\x4e"),0);
hx::Static(OTHER) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("OTHER","\xb0","\x9e","\x64","\xb4"),19);
hx::Static(OUTOFMEM) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("OUTOFMEM","\x10","\x62","\x53","\xb6"),2);
hx::Static(SEEK_FAILED) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("SEEK_FAILED","\xe4","\x54","\x00","\x42"),18);
hx::Static(SEEK_INVALID) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("SEEK_INVALID","\xd0","\x8d","\xa3","\xa2"),8);
hx::Static(SEEK_WITHOUT_LENGTH) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("SEEK_WITHOUT_LENGTH","\x84","\xc3","\x3b","\x4c"),6);
hx::Static(TOO_MANY_CHANNELS) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("TOO_MANY_CHANNELS","\xe5","\xf6","\x08","\x7e"),4);
hx::Static(UNEXPECTED_EOF) = hx::CreateEnum< ReaderErrorType_obj >(HX_HCSTRING("UNEXPECTED_EOF","\xee","\x2b","\xb5","\x75"),7);
}


} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
