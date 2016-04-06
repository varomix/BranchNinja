#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#define INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,ReaderErrorType)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class ReaderErrorType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ReaderErrorType_obj OBJ_;

	public:
		ReaderErrorType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.audio2.ogg.vorbis.data.ReaderErrorType","\x0f","\xf0","\xfb","\x45"); }
		::String __ToString() const { return HX_HCSTRING("ReaderErrorType.","\x8f","\x36","\xa3","\x71") + tag; }

		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType BAD_PACKET_TYPE;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType BAD_PACKET_TYPE_dyn() { return BAD_PACKET_TYPE; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType CANT_FIND_LAST_PAGE;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType CANT_FIND_LAST_PAGE_dyn() { return CANT_FIND_LAST_PAGE; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType CONTINUED_PACKET_FLAG_INVALID;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType CONTINUED_PACKET_FLAG_INVALID_dyn() { return CONTINUED_PACKET_FLAG_INVALID; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType FEATURE_NOT_SUPPORTED;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType FEATURE_NOT_SUPPORTED_dyn() { return FEATURE_NOT_SUPPORTED; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType FILE_OPEN_FAILURE;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType FILE_OPEN_FAILURE_dyn() { return FILE_OPEN_FAILURE; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType INCORRECT_STREAM_SERIAL_NUMBER;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType INCORRECT_STREAM_SERIAL_NUMBER_dyn() { return INCORRECT_STREAM_SERIAL_NUMBER; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType INVALID_API_MIXING;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType INVALID_API_MIXING_dyn() { return INVALID_API_MIXING; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType INVALID_FIRST_PAGE;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType INVALID_FIRST_PAGE_dyn() { return INVALID_FIRST_PAGE; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType INVALID_SETUP;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType INVALID_SETUP_dyn() { return INVALID_SETUP; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType INVALID_STREAM;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType INVALID_STREAM_dyn() { return INVALID_STREAM; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType INVALID_STREAM_STRUCTURE_VERSION;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType INVALID_STREAM_STRUCTURE_VERSION_dyn() { return INVALID_STREAM_STRUCTURE_VERSION; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType MISSING_CAPTURE_PATTERN;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType MISSING_CAPTURE_PATTERN_dyn() { return MISSING_CAPTURE_PATTERN; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType NEED_MORE_DATA;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType NEED_MORE_DATA_dyn() { return NEED_MORE_DATA; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType OTHER;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType OTHER_dyn() { return OTHER; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType OUTOFMEM;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType OUTOFMEM_dyn() { return OUTOFMEM; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType SEEK_FAILED;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType SEEK_FAILED_dyn() { return SEEK_FAILED; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType SEEK_INVALID;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType SEEK_INVALID_dyn() { return SEEK_INVALID; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType SEEK_WITHOUT_LENGTH;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType SEEK_WITHOUT_LENGTH_dyn() { return SEEK_WITHOUT_LENGTH; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType TOO_MANY_CHANNELS;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType TOO_MANY_CHANNELS_dyn() { return TOO_MANY_CHANNELS; }
		static ::kha::audio2::ogg::vorbis::data::ReaderErrorType UNEXPECTED_EOF;
		static inline ::kha::audio2::ogg::vorbis::data::ReaderErrorType UNEXPECTED_EOF_dyn() { return UNEXPECTED_EOF; }
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType */ 
