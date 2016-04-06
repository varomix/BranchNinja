#ifndef INCLUDED_kha_audio2_ogg_vorbis__VorbisDecodeState_FindPageResult
#define INCLUDED_kha_audio2_ogg_vorbis__VorbisDecodeState_FindPageResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,_VorbisDecodeState,FindPageResult)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace _VorbisDecodeState{


class FindPageResult_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FindPageResult_obj OBJ_;

	public:
		FindPageResult_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.audio2.ogg.vorbis._VorbisDecodeState.FindPageResult","\xee","\x31","\xc2","\x12"); }
		::String __ToString() const { return HX_HCSTRING("FindPageResult.","\x49","\x56","\xcb","\x07") + tag; }

		static ::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult Found(int end,bool last);
		static Dynamic Found_dyn();
		static ::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult NotFound;
		static inline ::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult NotFound_dyn() { return NotFound; }
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace _VorbisDecodeState

#endif /* INCLUDED_kha_audio2_ogg_vorbis__VorbisDecodeState_FindPageResult */ 
