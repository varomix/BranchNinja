#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis__VorbisDecodeState_FindPageResult
#include <kha/audio2/ogg/vorbis/_VorbisDecodeState/FindPageResult.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace _VorbisDecodeState{

::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult  FindPageResult_obj::Found(int end,bool last)
	{ return hx::CreateEnum< FindPageResult_obj >(HX_HCSTRING("Found","\x22","\x72","\xc4","\x97"),0,hx::DynamicArray(0,2).Add(end).Add(last)); }

::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult FindPageResult_obj::NotFound;

HX_DEFINE_CREATE_ENUM(FindPageResult_obj)

int FindPageResult_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Found","\x22","\x72","\xc4","\x97")) return 0;
	if (inName==HX_HCSTRING("NotFound","\x4f","\x90","\x57","\x6e")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FindPageResult_obj,Found,return)

int FindPageResult_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Found","\x22","\x72","\xc4","\x97")) return 2;
	if (inName==HX_HCSTRING("NotFound","\x4f","\x90","\x57","\x6e")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FindPageResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Found","\x22","\x72","\xc4","\x97")) return Found_dyn();
	if (inName==HX_HCSTRING("NotFound","\x4f","\x90","\x57","\x6e")) return NotFound;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Found","\x22","\x72","\xc4","\x97"),
	HX_HCSTRING("NotFound","\x4f","\x90","\x57","\x6e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FindPageResult_obj::NotFound,"NotFound");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FindPageResult_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FindPageResult_obj::NotFound,"NotFound");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FindPageResult_obj::__mClass;

Dynamic __Create_FindPageResult_obj() { return new FindPageResult_obj; }

void FindPageResult_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("kha.audio2.ogg.vorbis._VorbisDecodeState.FindPageResult","\xee","\x31","\xc2","\x12"), hx::TCanCast< FindPageResult_obj >,sStaticFields,sMemberFields,
	&__Create_FindPageResult_obj, &__Create,
	&super::__SGetClass(), &CreateFindPageResult_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FindPageResult_obj::__boot()
{
hx::Static(NotFound) = hx::CreateEnum< FindPageResult_obj >(HX_HCSTRING("NotFound","\x4f","\x90","\x57","\x6e"),1);
}


} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace _VorbisDecodeState
