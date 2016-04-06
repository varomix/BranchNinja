#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_tools_Crc32
#include <kha/audio2/ogg/tools/Crc32.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis__VorbisDecodeState_FindPageResult
#include <kha/audio2/ogg/vorbis/_VorbisDecodeState/FindPageResult.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Codebook
#include <kha/audio2/ogg/vorbis/data/Codebook.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Header
#include <kha/audio2/ogg/vorbis/data/Header.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mode
#include <kha/audio2/ogg/vorbis/data/Mode.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Page
#include <kha/audio2/ogg/vorbis/data/Page.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ProbedPage
#include <kha/audio2/ogg/vorbis/data/ProbedPage.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError
#include <kha/audio2/ogg/vorbis/data/ReaderError.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#include <kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{

Void VorbisDecodeState_obj::__construct(::haxe::io::Input input)
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","new",0xe15b5a2e,"kha.audio2.ogg.vorbis.VorbisDecodeState.new","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",27,0x1d2e7902)
HX_STACK_THIS(this)
HX_STACK_ARG(input,"input")
{
	HX_STACK_LINE(54)
	this->nextSeg = (int)0;
	HX_STACK_LINE(53)
	this->firstDecode = false;
	HX_STACK_LINE(40)
	this->bytesInSeg = (int)0;
	HX_STACK_LINE(35)
	this->validBits = (int)0;
	HX_STACK_LINE(72)
	this->input = input;
	HX_STACK_LINE(73)
	this->inputPosition = (int)0;
	HX_STACK_LINE(74)
	::kha::audio2::ogg::vorbis::data::Page tmp = ::kha::audio2::ogg::vorbis::data::Page_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	this->page = tmp;
	HX_STACK_LINE(75)
	::kha::audio2::ogg::tools::Crc32_obj::init();
}
;
	return null();
}

//VorbisDecodeState_obj::~VorbisDecodeState_obj() { }

Dynamic VorbisDecodeState_obj::__CreateEmpty() { return  new VorbisDecodeState_obj; }
hx::ObjectPtr< VorbisDecodeState_obj > VorbisDecodeState_obj::__new(::haxe::io::Input input)
{  hx::ObjectPtr< VorbisDecodeState_obj > _result_ = new VorbisDecodeState_obj();
	_result_->__construct(input);
	return _result_;}

Dynamic VorbisDecodeState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VorbisDecodeState_obj > _result_ = new VorbisDecodeState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void VorbisDecodeState_obj::setup( int loc0,int loc1){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","setup",0x5387c7cb,"kha.audio2.ogg.vorbis.VorbisDecodeState.setup","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",78,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loc0,"loc0")
		HX_STACK_ARG(loc1,"loc1")
		HX_STACK_LINE(79)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			hx::AddEq(this->inputPosition,(int)1);
			HX_STACK_LINE(79)
			::haxe::io::Input tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(79)
			tmp = tmp1->readByte();
		}
		HX_STACK_LINE(79)
		int segmentCount = tmp;		HX_STACK_VAR(segmentCount,"segmentCount");
		HX_STACK_LINE(80)
		Array< int > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			hx::AddEq(this->inputPosition,segmentCount);
			HX_STACK_LINE(80)
			Array< int > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(80)
				Array< int > tmp3 = Array_obj< int >::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(80)
				this1 = tmp3;
				HX_STACK_LINE(80)
				int tmp4 = segmentCount;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(80)
				this1->__SetSizeExact(tmp4);
				HX_STACK_LINE(80)
				tmp2 = this1;
			}
			HX_STACK_LINE(80)
			Array< int > vec = tmp2;		HX_STACK_VAR(vec,"vec");
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(80)
				while((true)){
					HX_STACK_LINE(80)
					bool tmp3 = (_g < segmentCount);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(80)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(80)
					if ((tmp4)){
						HX_STACK_LINE(80)
						break;
					}
					HX_STACK_LINE(80)
					int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(80)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						::haxe::io::Input tmp6 = this->input;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(80)
						int tmp7 = tmp6->readByte();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(80)
						int val = tmp7;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(80)
						int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(80)
						int tmp9 = val;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(80)
						int tmp10 = vec->__unsafe_set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(80)
						tmp10;
					}
				}
			}
			HX_STACK_LINE(80)
			tmp1 = vec;
		}
		HX_STACK_LINE(80)
		this->segments = tmp1;
		HX_STACK_LINE(83)
		this->endSegWithKnownLoc = (int)-2;
		HX_STACK_LINE(84)
		bool tmp2 = (loc0 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		if ((tmp3)){
			HX_STACK_LINE(84)
			tmp4 = (loc1 != (int)-1);
		}
		else{
			HX_STACK_LINE(84)
			tmp4 = true;
		}
		HX_STACK_LINE(84)
		if ((tmp4)){
			HX_STACK_LINE(85)
			int tmp5 = (segmentCount - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				bool tmp6 = (i >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(86)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(86)
				if ((tmp7)){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(87)
				Array< int > tmp8 = this->segments;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(87)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				int tmp10 = tmp8->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(87)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(87)
				bool tmp12 = (tmp11 < (int)255);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				if ((tmp12)){
					HX_STACK_LINE(88)
					break;
				}
				HX_STACK_LINE(90)
				bool tmp13 = (i >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(90)
				if ((tmp13)){
					HX_STACK_LINE(91)
					this->endSegWithKnownLoc = i;
					HX_STACK_LINE(92)
					this->knownLocForPacket = loc0;
				}
				HX_STACK_LINE(94)
				(i)--;
			}
		}
		HX_STACK_LINE(98)
		bool tmp5 = this->firstDecode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		if ((tmp5)){
			HX_STACK_LINE(99)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(100)
			int len = (int)0;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(101)
			::kha::audio2::ogg::vorbis::data::ProbedPage p = ::kha::audio2::ogg::vorbis::data::ProbedPage_obj::__new();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(103)
			{
				HX_STACK_LINE(103)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(103)
				while((true)){
					HX_STACK_LINE(103)
					bool tmp6 = (_g < segmentCount);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(103)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(103)
					if ((tmp7)){
						HX_STACK_LINE(103)
						break;
					}
					HX_STACK_LINE(103)
					int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					int i1 = tmp8;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(104)
					Array< int > tmp9 = this->segments;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(104)
					int tmp10 = i1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(104)
					int tmp11 = tmp9->__unsafe_get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(104)
					hx::AddEq(len,tmp11);
				}
			}
			HX_STACK_LINE(106)
			int tmp6 = ((int)27 + segmentCount);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			hx::AddEq(len,tmp6);
			HX_STACK_LINE(108)
			int tmp7 = this->firstAudioPageOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(108)
			p->pageStart = tmp7;
			HX_STACK_LINE(109)
			int tmp8 = (p->pageStart + len);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(109)
			p->pageEnd = tmp8;
			HX_STACK_LINE(110)
			p->firstDecodedSample = (int)0;
			HX_STACK_LINE(111)
			p->lastDecodedSample = loc0;
			HX_STACK_LINE(112)
			this->pFirst = p;
		}
		HX_STACK_LINE(115)
		this->nextSeg = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VorbisDecodeState_obj,setup,(void))

::kha::audio2::ogg::vorbis::VorbisDecodeState VorbisDecodeState_obj::clone( Dynamic seekFunc){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","clone",0x21bb2cab,"kha.audio2.ogg.vorbis.VorbisDecodeState.clone","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",119,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(seekFunc,"seekFunc")
	HX_STACK_LINE(120)
	::kha::audio2::ogg::vorbis::VorbisDecodeState tmp = ::Type_obj::createEmptyInstance(hx::ClassOf< ::kha::audio2::ogg::vorbis::VorbisDecodeState >());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	::kha::audio2::ogg::vorbis::VorbisDecodeState state = tmp;		HX_STACK_VAR(state,"state");
	HX_STACK_LINE(122)
	int tmp1 = this->inputPosition;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	seekFunc(tmp1).Cast< Void >();
	HX_STACK_LINE(123)
	::haxe::io::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	state->input = tmp2;
	HX_STACK_LINE(126)
	bool tmp3 = this->eof;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	state->eof = tmp3;
	HX_STACK_LINE(127)
	int tmp4 = this->validBits;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	state->validBits = tmp4;
	HX_STACK_LINE(128)
	int tmp5 = this->discardSamplesDeferred;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(128)
	state->discardSamplesDeferred = tmp5;
	HX_STACK_LINE(129)
	bool tmp6 = this->firstDecode;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(129)
	state->firstDecode = tmp6;
	HX_STACK_LINE(130)
	int tmp7 = this->nextSeg;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(130)
	state->nextSeg = tmp7;
	HX_STACK_LINE(131)
	int tmp8 = this->bytesInSeg;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(131)
	state->bytesInSeg = tmp8;
	HX_STACK_LINE(132)
	state->acc = state->acc;
	HX_STACK_LINE(133)
	bool tmp9 = this->lastSeg;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(133)
	state->lastSeg = tmp9;
	HX_STACK_LINE(134)
	int tmp10 = this->lastSegWhich;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(134)
	state->lastSegWhich = tmp10;
	HX_STACK_LINE(135)
	int tmp11 = this->currentLoc;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(135)
	state->currentLoc = tmp11;
	HX_STACK_LINE(136)
	int tmp12 = this->currentLocValid;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(136)
	state->currentLocValid = tmp12;
	HX_STACK_LINE(137)
	int tmp13 = this->inputPosition;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(137)
	state->inputPosition = tmp13;
	HX_STACK_LINE(138)
	int tmp14 = this->firstAudioPageOffset;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(138)
	state->firstAudioPageOffset = tmp14;
	HX_STACK_LINE(141)
	::kha::audio2::ogg::vorbis::data::ReaderError tmp15 = this->error;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(141)
	state->error = tmp15;
	HX_STACK_LINE(142)
	Array< int > tmp16 = this->segments;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(142)
	state->segments = tmp16;
	HX_STACK_LINE(143)
	::kha::audio2::ogg::vorbis::data::ProbedPage tmp17 = this->pFirst;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(143)
	state->pFirst = tmp17;
	HX_STACK_LINE(144)
	::kha::audio2::ogg::vorbis::data::ProbedPage tmp18 = this->pLast;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(144)
	state->pLast = tmp18;
	HX_STACK_LINE(147)
	::kha::audio2::ogg::vorbis::data::Page tmp19 = this->page;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(147)
	::kha::audio2::ogg::vorbis::data::Page tmp20 = tmp19->clone();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(147)
	state->page = tmp20;
	HX_STACK_LINE(149)
	::kha::audio2::ogg::vorbis::VorbisDecodeState tmp21 = state;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(149)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecodeState_obj,clone,return )

int VorbisDecodeState_obj::next( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","next",0x4e938f65,"kha.audio2.ogg.vorbis.VorbisDecodeState.next","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",154,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	bool tmp = this->lastSeg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	if ((tmp)){
		HX_STACK_LINE(156)
		return (int)0;
	}
	HX_STACK_LINE(159)
	int tmp1 = this->nextSeg;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	if ((tmp2)){
		HX_STACK_LINE(160)
		Array< int > tmp3 = this->segments;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		this->lastSegWhich = tmp5;
		HX_STACK_LINE(162)
		try
		{
		HX_STACK_CATCHABLE(::kha::audio2::ogg::vorbis::data::ReaderError, 0);
		{
			HX_STACK_LINE(163)
			::kha::audio2::ogg::vorbis::data::Page tmp6 = this->page;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(163)
			tmp6->start(hx::ObjectPtr<OBJ_>(this));
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::kha::audio2::ogg::vorbis::data::ReaderError >() ){
				HX_STACK_BEGIN_CATCH
				::kha::audio2::ogg::vorbis::data::ReaderError e = __e;{
					HX_STACK_LINE(165)
					this->lastSeg = true;
					HX_STACK_LINE(166)
					this->error = e;
					HX_STACK_LINE(167)
					return (int)0;
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(170)
		::kha::audio2::ogg::vorbis::data::Page tmp6 = this->page;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		int tmp7 = tmp6->flag;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		int tmp8 = (int(tmp7) & int((int)1));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		if ((tmp9)){
			HX_STACK_LINE(171)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),171,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(171)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp11 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::CONTINUED_PACKET_FLAG_INVALID,null(),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(171)
			HX_STACK_DO_THROW(tmp11);
		}
	}
	HX_STACK_LINE(175)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		int tmp4 = (this->nextSeg)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		int index = tmp4;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(175)
		Array< int > tmp5 = this->segments;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(175)
		int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(175)
		int tmp7 = tmp5->__unsafe_get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(175)
		tmp3 = tmp7;
	}
	HX_STACK_LINE(175)
	int len = tmp3;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(176)
	bool tmp4 = (len < (int)255);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(176)
	if ((tmp4)){
		HX_STACK_LINE(177)
		this->lastSeg = true;
		HX_STACK_LINE(178)
		int tmp5 = this->nextSeg;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		this->lastSegWhich = tmp6;
	}
	HX_STACK_LINE(180)
	int tmp5 = this->nextSeg;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(180)
	Array< int > tmp6 = this->segments;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(180)
	bool tmp8 = (tmp5 >= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(180)
	if ((tmp8)){
		HX_STACK_LINE(181)
		this->nextSeg = (int)-1;
	}
	HX_STACK_LINE(185)
	this->bytesInSeg = len;
	HX_STACK_LINE(186)
	int tmp9 = len;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(186)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,next,return )

Void VorbisDecodeState_obj::startPacket( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","startPacket",0x0af9bd58,"kha.audio2.ogg.vorbis.VorbisDecodeState.startPacket","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",189,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		while((true)){
			HX_STACK_LINE(190)
			int tmp = this->nextSeg;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(190)
			bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(190)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(190)
			if ((tmp2)){
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(191)
			::kha::audio2::ogg::vorbis::data::Page tmp3 = this->page;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(191)
			tmp3->start(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(192)
			::kha::audio2::ogg::vorbis::data::Page tmp4 = this->page;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(192)
			int tmp5 = tmp4->flag;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(192)
			int tmp6 = (int(tmp5) & int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(192)
			if ((tmp7)){
				HX_STACK_LINE(193)
				Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),193,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("startPacket","\x8a","\xb5","\x7e","\x5b"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(193)
				::kha::audio2::ogg::vorbis::data::ReaderError tmp9 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::MISSING_CAPTURE_PATTERN,null(),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(193)
				HX_STACK_DO_THROW(tmp9);
			}
		}
		HX_STACK_LINE(197)
		this->lastSeg = false;
		HX_STACK_LINE(198)
		this->validBits = (int)0;
		HX_STACK_LINE(199)
		this->bytesInSeg = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,startPacket,(void))

bool VorbisDecodeState_obj::maybeStartPacket( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","maybeStartPacket",0x5a5cf834,"kha.audio2.ogg.vorbis.VorbisDecodeState.maybeStartPacket","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",203,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	int tmp = this->nextSeg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	if ((tmp1)){
		HX_STACK_LINE(205)
		bool eof = false;		HX_STACK_VAR(eof,"eof");
		HX_STACK_LINE(206)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		try
		{
		HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
		{
			HX_STACK_LINE(207)
			hx::AddEq(this->inputPosition,(int)1);
			HX_STACK_LINE(207)
			::haxe::io::Input tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			tmp2 = tmp3->readByte();
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::haxe::io::Eof >() ){
				HX_STACK_BEGIN_CATCH
				::haxe::io::Eof e = __e;{
					HX_STACK_LINE(209)
					eof = true;
					HX_STACK_LINE(210)
					tmp2 = (int)0;
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(206)
		int x = tmp2;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(213)
		bool tmp3 = eof;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		if ((tmp3)){
			HX_STACK_LINE(214)
			return false;
		}
		HX_STACK_LINE(217)
		bool tmp4 = (x != (int)79);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		if ((tmp6)){
			HX_STACK_LINE(217)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				hx::AddEq(this->inputPosition,(int)1);
				HX_STACK_LINE(217)
				::haxe::io::Input tmp9 = this->input;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(217)
				::haxe::io::Input tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(217)
				::haxe::io::Input tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(217)
				int tmp12 = tmp11->readByte();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(217)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(217)
				tmp8 = tmp13;
			}
			HX_STACK_LINE(217)
			tmp7 = (tmp8 != (int)103);
		}
		else{
			HX_STACK_LINE(217)
			tmp7 = true;
		}
		HX_STACK_LINE(217)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(217)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(217)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(217)
		if ((tmp9)){
			HX_STACK_LINE(217)
			int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				hx::AddEq(this->inputPosition,(int)1);
				HX_STACK_LINE(217)
				::haxe::io::Input tmp12 = this->input;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(217)
				::haxe::io::Input tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(217)
				::haxe::io::Input tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(217)
				int tmp15 = tmp14->readByte();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(217)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(217)
				tmp11 = tmp16;
			}
			HX_STACK_LINE(217)
			tmp10 = (tmp11 != (int)103);
		}
		else{
			HX_STACK_LINE(217)
			tmp10 = true;
		}
		HX_STACK_LINE(217)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(217)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(217)
		if ((tmp11)){
			HX_STACK_LINE(217)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				hx::AddEq(this->inputPosition,(int)1);
				HX_STACK_LINE(217)
				::haxe::io::Input tmp14 = this->input;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(217)
				::haxe::io::Input tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(217)
				int tmp16 = tmp15->readByte();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(217)
				tmp13 = tmp16;
			}
			HX_STACK_LINE(217)
			tmp12 = (tmp13 != (int)83);
		}
		else{
			HX_STACK_LINE(217)
			tmp12 = true;
		}
		HX_STACK_LINE(217)
		if ((tmp12)){
			HX_STACK_LINE(218)
			Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),218,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("maybeStartPacket","\xc2","\x0a","\xad","\x2a"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(218)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp14 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::MISSING_CAPTURE_PATTERN,null(),tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(218)
			HX_STACK_DO_THROW(tmp14);
		}
		HX_STACK_LINE(221)
		::kha::audio2::ogg::vorbis::data::Page tmp13 = this->page;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(221)
		tmp13->startWithoutCapturePattern(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(224)
	this->startPacket();
	HX_STACK_LINE(225)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,maybeStartPacket,return )

int VorbisDecodeState_obj::readBits( int n){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","readBits",0xb09b00ee,"kha.audio2.ogg.vorbis.VorbisDecodeState.readBits","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",231,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(232)
	int tmp = this->validBits;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	if ((tmp1)){
		HX_STACK_LINE(233)
		return (int)0;
	}
	else{
		HX_STACK_LINE(234)
		int tmp2 = this->validBits;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		int tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(234)
		if ((tmp4)){
			HX_STACK_LINE(235)
			bool tmp5 = (n > (int)24);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			if ((tmp5)){
				HX_STACK_LINE(237)
				int tmp6 = this->readBits((int)24);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(237)
				int tmp7 = (n - (int)24);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(237)
				int tmp8 = this->readBits(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				int tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(237)
				return tmp10;
			}
			else{
				HX_STACK_LINE(239)
				int tmp6 = this->validBits;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(239)
				bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(239)
				if ((tmp7)){
					HX_STACK_LINE(240)
					this->acc = (int)0;
				}
				HX_STACK_LINE(243)
				while((true)){
					HX_STACK_LINE(244)
					int tmp8 = this->bytesInSeg;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(244)
					bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(244)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(244)
					if ((tmp9)){
						HX_STACK_LINE(244)
						bool tmp11 = this->lastSeg;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(244)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(244)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(244)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(244)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(244)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(244)
						if ((tmp16)){
							HX_STACK_LINE(244)
							int tmp17 = this->next();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(244)
							int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(244)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(244)
							tmp10 = (tmp19 == (int)0);
						}
						else{
							HX_STACK_LINE(244)
							tmp10 = true;
						}
					}
					else{
						HX_STACK_LINE(244)
						tmp10 = false;
					}
					HX_STACK_LINE(244)
					if ((tmp10)){
						HX_STACK_LINE(245)
						this->validBits = (int)-1;
						HX_STACK_LINE(246)
						break;
					}
					else{
						HX_STACK_LINE(248)
						(this->bytesInSeg)--;
						HX_STACK_LINE(249)
						int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(249)
						{
							HX_STACK_LINE(249)
							int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(249)
							{
								HX_STACK_LINE(249)
								hx::AddEq(this->inputPosition,(int)1);
								HX_STACK_LINE(249)
								::haxe::io::Input tmp13 = this->input;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(249)
								tmp12 = tmp13->readByte();
							}
							HX_STACK_LINE(249)
							int tmp13 = this->validBits;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(249)
							int tmp14 = (int(tmp12) << int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(249)
							int b = tmp14;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(249)
							int tmp15 = this->acc;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(249)
							int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(249)
							int tmp17 = b;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(249)
							tmp11 = (tmp16 + tmp17);
						}
						HX_STACK_LINE(249)
						this->acc = tmp11;
						HX_STACK_LINE(250)
						hx::AddEq(this->validBits,(int)8);
					}
					HX_STACK_LINE(252)
					int tmp11 = this->validBits;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(252)
					int tmp12 = n;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(252)
					bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(252)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(243)
					if ((tmp14)){
						HX_STACK_LINE(243)
						break;
					}
				}
				HX_STACK_LINE(254)
				int tmp8 = this->validBits;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(254)
				bool tmp9 = (tmp8 < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(254)
				if ((tmp9)){
					HX_STACK_LINE(255)
					return (int)0;
				}
				else{
					HX_STACK_LINE(257)
					int tmp10 = this->acc;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(257)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(257)
					int tmp12 = (int((int)1) << int(n));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(257)
					int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(257)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(257)
					int tmp15 = (int(tmp11) & int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(257)
					int z = tmp15;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(258)
					int tmp16 = this->acc;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(258)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(258)
					int tmp18 = n;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(258)
					int tmp19 = hx::UShr(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(258)
					this->acc = tmp19;
					HX_STACK_LINE(259)
					hx::SubEq(this->validBits,n);
					HX_STACK_LINE(260)
					int tmp20 = z;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(260)
					return tmp20;
				}
			}
		}
		else{
			HX_STACK_LINE(264)
			int tmp5 = this->acc;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(264)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(264)
			int tmp7 = (int((int)1) << int(n));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(264)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(264)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(264)
			int tmp10 = (int(tmp6) & int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(264)
			int z = tmp10;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(265)
			int tmp11 = this->acc;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(265)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(265)
			int tmp13 = n;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(265)
			int tmp14 = hx::UShr(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(265)
			this->acc = tmp14;
			HX_STACK_LINE(266)
			hx::SubEq(this->validBits,n);
			HX_STACK_LINE(267)
			int tmp15 = z;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(267)
			return tmp15;
		}
	}
	HX_STACK_LINE(232)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecodeState_obj,readBits,return )

int VorbisDecodeState_obj::readPacketRaw( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","readPacketRaw",0xa4b12c58,"kha.audio2.ogg.vorbis.VorbisDecodeState.readPacketRaw","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",270,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_LINE(271)
	int tmp = this->bytesInSeg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	if ((tmp1)){
		HX_STACK_LINE(271)
		bool tmp3 = this->lastSeg;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(271)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(271)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(271)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(271)
		if ((tmp8)){
			HX_STACK_LINE(271)
			int tmp9 = this->next();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(271)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(271)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(271)
			tmp2 = (tmp11 == (int)0);
		}
		else{
			HX_STACK_LINE(271)
			tmp2 = true;
		}
	}
	else{
		HX_STACK_LINE(271)
		tmp2 = false;
	}
	HX_STACK_LINE(271)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(271)
	if ((tmp2)){
		HX_STACK_LINE(272)
		tmp3 = (int)-1;
	}
	else{
		HX_STACK_LINE(275)
		(this->bytesInSeg)--;
		HX_STACK_LINE(276)
		{
			HX_STACK_LINE(276)
			hx::AddEq(this->inputPosition,(int)1);
			HX_STACK_LINE(276)
			::haxe::io::Input tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(276)
			tmp3 = tmp4->readByte();
		}
	}
	HX_STACK_LINE(271)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,readPacketRaw,return )

int VorbisDecodeState_obj::readPacket( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","readPacket",0x4097a770,"kha.audio2.ogg.vorbis.VorbisDecodeState.readPacket","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",281,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	int tmp = this->bytesInSeg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(282)
	if ((tmp1)){
		HX_STACK_LINE(282)
		bool tmp3 = this->lastSeg;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(282)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(282)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(282)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(282)
		if ((tmp8)){
			HX_STACK_LINE(282)
			int tmp9 = this->next();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(282)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(282)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(282)
			tmp2 = (tmp11 == (int)0);
		}
		else{
			HX_STACK_LINE(282)
			tmp2 = true;
		}
	}
	else{
		HX_STACK_LINE(282)
		tmp2 = false;
	}
	HX_STACK_LINE(282)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(282)
	if ((tmp2)){
		HX_STACK_LINE(282)
		tmp3 = (int)-1;
	}
	else{
		HX_STACK_LINE(282)
		(this->bytesInSeg)--;
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			hx::AddEq(this->inputPosition,(int)1);
			HX_STACK_LINE(282)
			::haxe::io::Input tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(282)
			tmp3 = tmp4->readByte();
		}
	}
	HX_STACK_LINE(282)
	int x = tmp3;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(283)
	this->validBits = (int)0;
	HX_STACK_LINE(284)
	int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(284)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,readPacket,return )

Void VorbisDecodeState_obj::flushPacket( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","flushPacket",0x3e67a13a,"kha.audio2.ogg.vorbis.VorbisDecodeState.flushPacket","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",288,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(288)
		while((true)){
			HX_STACK_LINE(288)
			int tmp = this->bytesInSeg;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(288)
			bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(288)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(288)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(288)
			if ((tmp2)){
				HX_STACK_LINE(288)
				bool tmp4 = this->lastSeg;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(288)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(288)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(288)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(288)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(288)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(288)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				if ((tmp10)){
					HX_STACK_LINE(288)
					int tmp11 = this->next();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(288)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(288)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(288)
					tmp3 = (tmp13 != (int)0);
				}
				else{
					HX_STACK_LINE(288)
					tmp3 = false;
				}
			}
			else{
				HX_STACK_LINE(288)
				tmp3 = true;
			}
			HX_STACK_LINE(288)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(288)
			if ((tmp4)){
				HX_STACK_LINE(288)
				break;
			}
			HX_STACK_LINE(289)
			(this->bytesInSeg)--;
			HX_STACK_LINE(290)
			{
				HX_STACK_LINE(290)
				hx::AddEq(this->inputPosition,(int)1);
				HX_STACK_LINE(290)
				::haxe::io::Input tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(290)
				tmp5->readByte();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,flushPacket,(void))

Void VorbisDecodeState_obj::vorbisValidate( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","vorbisValidate",0x2e5ee7fb,"kha.audio2.ogg.vorbis.VorbisDecodeState.vorbisValidate","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",294,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(295)
		::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::alloc((int)6);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(295)
		::haxe::io::Bytes header = tmp;		HX_STACK_VAR(header,"header");
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(296)
			while((true)){
				HX_STACK_LINE(296)
				bool tmp1 = (_g < (int)6);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(296)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(296)
				if ((tmp2)){
					HX_STACK_LINE(296)
					break;
				}
				HX_STACK_LINE(296)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(296)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						int tmp5 = this->bytesInSeg;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(297)
						bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(297)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(297)
						if ((tmp6)){
							HX_STACK_LINE(297)
							bool tmp8 = this->lastSeg;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(297)
							bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(297)
							bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(297)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(297)
							bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(297)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(297)
							if ((tmp13)){
								HX_STACK_LINE(297)
								int tmp14 = this->next();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(297)
								int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(297)
								int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(297)
								tmp7 = (tmp16 == (int)0);
							}
							else{
								HX_STACK_LINE(297)
								tmp7 = true;
							}
						}
						else{
							HX_STACK_LINE(297)
							tmp7 = false;
						}
						HX_STACK_LINE(297)
						int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(297)
						if ((tmp7)){
							HX_STACK_LINE(297)
							tmp8 = (int)-1;
						}
						else{
							HX_STACK_LINE(297)
							(this->bytesInSeg)--;
							HX_STACK_LINE(297)
							{
								HX_STACK_LINE(297)
								hx::AddEq(this->inputPosition,(int)1);
								HX_STACK_LINE(297)
								::haxe::io::Input tmp9 = this->input;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(297)
								tmp8 = tmp9->readByte();
							}
						}
						HX_STACK_LINE(297)
						int x = tmp8;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(297)
						this->validBits = (int)0;
						HX_STACK_LINE(297)
						tmp4 = x;
					}
					HX_STACK_LINE(297)
					int v = tmp4;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(297)
					int tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(297)
					header->b[i] = tmp5;
				}
			}
		}
		HX_STACK_LINE(299)
		::String tmp1 = header->toString();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		bool tmp2 = (tmp1 != HX_HCSTRING("vorbis","\x53","\x03","\x3c","\x63"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		if ((tmp2)){
			HX_STACK_LINE(300)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),300,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("vorbisValidate","\x09","\x9b","\x51","\x16"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp4 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,HX_HCSTRING("vorbis header","\xba","\x3e","\xa4","\x0e"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			HX_STACK_DO_THROW(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,vorbisValidate,(void))

Void VorbisDecodeState_obj::firstPageValidate( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","firstPageValidate",0xa72bf0a3,"kha.audio2.ogg.vorbis.VorbisDecodeState.firstPageValidate","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",305,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		Array< int > tmp = this->segments;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		bool tmp2 = (tmp1 != (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		if ((tmp2)){
			HX_STACK_LINE(307)
			Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),307,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("firstPageValidate","\x55","\x1a","\xec","\x1c"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(307)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp4 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_FIRST_PAGE,HX_HCSTRING("segmentCount","\x1c","\x1c","\x95","\x3d"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(307)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(309)
		Array< int > tmp3 = this->segments;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		int tmp4 = tmp3->__unsafe_get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(309)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
		bool tmp6 = (tmp5 != (int)30);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(309)
		if ((tmp6)){
			HX_STACK_LINE(310)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),310,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("firstPageValidate","\x55","\x1a","\xec","\x1c"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(310)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp8 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_FIRST_PAGE,HX_HCSTRING("decodeState head","\x5d","\x8c","\x63","\x29"),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(310)
			HX_STACK_DO_THROW(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,firstPageValidate,(void))

Void VorbisDecodeState_obj::startFirstDecode( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","startFirstDecode",0xf83b15ae,"kha.audio2.ogg.vorbis.VorbisDecodeState.startFirstDecode","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",315,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(316)
		int tmp = this->inputPosition;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		this->firstAudioPageOffset = tmp;
		HX_STACK_LINE(317)
		this->firstDecode = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,startFirstDecode,(void))

Void VorbisDecodeState_obj::capturePattern( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","capturePattern",0x38c5675c,"kha.audio2.ogg.vorbis.VorbisDecodeState.capturePattern","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",321,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		{
			HX_STACK_LINE(322)
			hx::AddEq(this->inputPosition,(int)1);
			HX_STACK_LINE(322)
			::haxe::io::Input tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(322)
			tmp = tmp1->readByte();
		}
		HX_STACK_LINE(322)
		bool tmp1 = (tmp != (int)79);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(322)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(322)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(322)
		if ((tmp3)){
			HX_STACK_LINE(322)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				hx::AddEq(this->inputPosition,(int)1);
				HX_STACK_LINE(322)
				::haxe::io::Input tmp6 = this->input;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(322)
				::haxe::io::Input tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(322)
				::haxe::io::Input tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(322)
				int tmp9 = tmp8->readByte();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(322)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(322)
				tmp5 = tmp10;
			}
			HX_STACK_LINE(322)
			tmp4 = (tmp5 != (int)103);
		}
		else{
			HX_STACK_LINE(322)
			tmp4 = true;
		}
		HX_STACK_LINE(322)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(322)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(322)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(322)
		if ((tmp6)){
			HX_STACK_LINE(322)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				hx::AddEq(this->inputPosition,(int)1);
				HX_STACK_LINE(322)
				::haxe::io::Input tmp9 = this->input;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(322)
				::haxe::io::Input tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(322)
				::haxe::io::Input tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(322)
				int tmp12 = tmp11->readByte();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(322)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(322)
				tmp8 = tmp13;
			}
			HX_STACK_LINE(322)
			tmp7 = (tmp8 != (int)103);
		}
		else{
			HX_STACK_LINE(322)
			tmp7 = true;
		}
		HX_STACK_LINE(322)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(322)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(322)
		if ((tmp8)){
			HX_STACK_LINE(322)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				hx::AddEq(this->inputPosition,(int)1);
				HX_STACK_LINE(322)
				::haxe::io::Input tmp11 = this->input;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(322)
				::haxe::io::Input tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(322)
				int tmp13 = tmp12->readByte();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(322)
				tmp10 = tmp13;
			}
			HX_STACK_LINE(322)
			tmp9 = (tmp10 != (int)83);
		}
		else{
			HX_STACK_LINE(322)
			tmp9 = true;
		}
		HX_STACK_LINE(322)
		if ((tmp9)){
			HX_STACK_LINE(323)
			Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),323,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("capturePattern","\x6a","\x1a","\xb8","\x20"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(323)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp11 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::MISSING_CAPTURE_PATTERN,null(),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(323)
			HX_STACK_DO_THROW(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,capturePattern,(void))

Void VorbisDecodeState_obj::skip( int len){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","skip",0x51e620f1,"kha.audio2.ogg.vorbis.VorbisDecodeState.skip","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",329,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(329)
		hx::AddEq(this->inputPosition,len);
		HX_STACK_LINE(329)
		Array< int > tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(329)
			Array< int > tmp1 = Array_obj< int >::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(329)
			this1 = tmp1;
			HX_STACK_LINE(329)
			int tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(329)
			this1->__SetSizeExact(tmp2);
			HX_STACK_LINE(329)
			tmp = this1;
		}
		HX_STACK_LINE(329)
		Array< int > vec = tmp;		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(329)
			while((true)){
				HX_STACK_LINE(329)
				bool tmp1 = (_g < len);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(329)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(329)
				if ((tmp2)){
					HX_STACK_LINE(329)
					break;
				}
				HX_STACK_LINE(329)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(329)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(329)
				{
					HX_STACK_LINE(329)
					::haxe::io::Input tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(329)
					int tmp5 = tmp4->readByte();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(329)
					int val = tmp5;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(329)
					int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(329)
					int tmp7 = val;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(329)
					int tmp8 = vec->__unsafe_set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(329)
					tmp8;
				}
			}
		}
		HX_STACK_LINE(329)
		vec;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecodeState_obj,skip,(void))

Void VorbisDecodeState_obj::prepHuffman( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","prepHuffman",0x69ac478e,"kha.audio2.ogg.vorbis.VorbisDecodeState.prepHuffman","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",333,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(334)
		int tmp = this->validBits;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		bool tmp1 = (tmp <= (int)24);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		if ((tmp1)){
			HX_STACK_LINE(335)
			int tmp2 = this->validBits;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(335)
			bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			if ((tmp3)){
				HX_STACK_LINE(336)
				this->acc = (int)0;
			}
			HX_STACK_LINE(338)
			while((true)){
				HX_STACK_LINE(339)
				int tmp4 = this->bytesInSeg;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(339)
				bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(339)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(339)
				if ((tmp5)){
					HX_STACK_LINE(339)
					bool tmp7 = this->lastSeg;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(339)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(339)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(339)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(339)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(339)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(339)
					if ((tmp12)){
						HX_STACK_LINE(339)
						int tmp13 = this->next();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(339)
						int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(339)
						int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(339)
						tmp6 = (tmp15 == (int)0);
					}
					else{
						HX_STACK_LINE(339)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(339)
					tmp6 = false;
				}
				HX_STACK_LINE(339)
				if ((tmp6)){
					HX_STACK_LINE(340)
					return null();
				}
				else{
					HX_STACK_LINE(342)
					(this->bytesInSeg)--;
					HX_STACK_LINE(343)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(343)
					{
						HX_STACK_LINE(343)
						int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							hx::AddEq(this->inputPosition,(int)1);
							HX_STACK_LINE(343)
							::haxe::io::Input tmp9 = this->input;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(343)
							tmp8 = tmp9->readByte();
						}
						HX_STACK_LINE(343)
						int tmp9 = this->validBits;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(343)
						int tmp10 = (int(tmp8) << int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(343)
						int b = tmp10;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(343)
						int tmp11 = this->acc;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(343)
						int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(343)
						int tmp13 = b;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(343)
						tmp7 = (tmp12 + tmp13);
					}
					HX_STACK_LINE(343)
					this->acc = tmp7;
					HX_STACK_LINE(344)
					hx::AddEq(this->validBits,(int)8);
				}
				HX_STACK_LINE(346)
				int tmp7 = this->validBits;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(346)
				bool tmp8 = (tmp7 <= (int)24);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(346)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(338)
				if ((tmp9)){
					HX_STACK_LINE(338)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,prepHuffman,(void))

int VorbisDecodeState_obj::decode( ::kha::audio2::ogg::vorbis::data::Codebook c){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","decode",0xb8ab6820,"kha.audio2.ogg.vorbis.VorbisDecodeState.decode","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",350,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(351)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	{
		HX_STACK_LINE(351)
		int tmp1 = this->validBits;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		bool tmp2 = (tmp1 < (int)10);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(351)
		if ((tmp2)){
			HX_STACK_LINE(351)
			this->prepHuffman();
		}
		HX_STACK_LINE(351)
		int tmp3 = this->acc;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(351)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(351)
		int tmp5 = (int(tmp4) & int((int)1023));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(351)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(351)
		int tmp7 = c->fastHuffman->__unsafe_get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(351)
		int i = tmp7;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(351)
		bool tmp8 = (i >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(351)
		if ((tmp8)){
			HX_STACK_LINE(351)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(351)
			int tmp10 = c->codewordLengths->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(351)
			int l = tmp10;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(351)
			int tmp11 = this->acc;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(351)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(351)
			int tmp13 = l;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(351)
			int tmp14 = hx::UShr(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(351)
			this->acc = tmp14;
			HX_STACK_LINE(351)
			hx::SubEq(this->validBits,l);
			HX_STACK_LINE(351)
			int tmp15 = this->validBits;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(351)
			bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(351)
			if ((tmp16)){
				HX_STACK_LINE(351)
				this->validBits = (int)0;
				HX_STACK_LINE(351)
				tmp = (int)-1;
			}
			else{
				HX_STACK_LINE(351)
				tmp = i;
			}
		}
		else{
			HX_STACK_LINE(351)
			::kha::audio2::ogg::vorbis::data::Codebook tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(351)
			tmp = this->decodeScalarRaw(tmp9);
		}
	}
	HX_STACK_LINE(351)
	int val = tmp;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(352)
	bool tmp1 = c->sparse;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(352)
	if ((tmp1)){
		HX_STACK_LINE(353)
		int tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		int tmp3 = c->sortedValues->__unsafe_get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(353)
		val = tmp3;
	}
	HX_STACK_LINE(355)
	int tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(355)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecodeState_obj,decode,return )

int VorbisDecodeState_obj::decodeRaw( ::kha::audio2::ogg::vorbis::data::Codebook c){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","decodeRaw",0x97caf9a8,"kha.audio2.ogg.vorbis.VorbisDecodeState.decodeRaw","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",359,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(360)
	int tmp = this->validBits;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	bool tmp1 = (tmp < (int)10);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(360)
	if ((tmp1)){
		HX_STACK_LINE(361)
		this->prepHuffman();
	}
	HX_STACK_LINE(365)
	int tmp2 = this->acc;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(365)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(365)
	int tmp4 = (int(tmp3) & int((int)1023));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(365)
	int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(365)
	int tmp6 = c->fastHuffman->__unsafe_get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(365)
	int i = tmp6;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(367)
	bool tmp7 = (i >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(367)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(367)
	if ((tmp7)){
		HX_STACK_LINE(368)
		int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(368)
		int tmp10 = c->codewordLengths->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(368)
		int l = tmp10;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(369)
		int tmp11 = this->acc;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(369)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(369)
		int tmp13 = l;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(369)
		int tmp14 = hx::UShr(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(369)
		this->acc = tmp14;
		HX_STACK_LINE(370)
		hx::SubEq(this->validBits,l);
		HX_STACK_LINE(371)
		int tmp15 = this->validBits;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(371)
		bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(371)
		if ((tmp16)){
			HX_STACK_LINE(372)
			this->validBits = (int)0;
			HX_STACK_LINE(373)
			tmp8 = (int)-1;
		}
		else{
			HX_STACK_LINE(375)
			tmp8 = i;
		}
	}
	else{
		HX_STACK_LINE(378)
		::kha::audio2::ogg::vorbis::data::Codebook tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(378)
		tmp8 = this->decodeScalarRaw(tmp9);
	}
	HX_STACK_LINE(367)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecodeState_obj,decodeRaw,return )

bool VorbisDecodeState_obj::isLastByte( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","isLastByte",0xb29eb67a,"kha.audio2.ogg.vorbis.VorbisDecodeState.isLastByte","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",383,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_LINE(384)
	int tmp = this->bytesInSeg;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(384)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(384)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(384)
	if ((tmp1)){
		HX_STACK_LINE(384)
		tmp2 = this->lastSeg;
	}
	else{
		HX_STACK_LINE(384)
		tmp2 = false;
	}
	HX_STACK_LINE(384)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,isLastByte,return )

Dynamic VorbisDecodeState_obj::finishDecodePacket( int previousLength,int n,Dynamic r){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","finishDecodePacket",0xed4f2a3b,"kha.audio2.ogg.vorbis.VorbisDecodeState.finishDecodePacket","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",388,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(previousLength,"previousLength")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(389)
	int tmp = r->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(389)
	int left = tmp;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(390)
	bool currentLocValid = false;		HX_STACK_VAR(currentLocValid,"currentLocValid");
	HX_STACK_LINE(391)
	int tmp1 = (int(n) >> int((int)1));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(391)
	int n2 = tmp1;		HX_STACK_VAR(n2,"n2");
	HX_STACK_LINE(393)
	bool tmp2 = this->firstDecode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(393)
	if ((tmp2)){
		HX_STACK_LINE(398)
		int tmp3 = n2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(398)
		this->currentLoc = tmp4;
		HX_STACK_LINE(401)
		int tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(401)
		int tmp6 = r->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(401)
		int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(401)
		this->discardSamplesDeferred = tmp7;
		HX_STACK_LINE(402)
		currentLocValid = true;
		HX_STACK_LINE(403)
		this->firstDecode = false;
	}
	else{
		HX_STACK_LINE(404)
		int tmp3 = this->discardSamplesDeferred;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(404)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(404)
		if ((tmp4)){
			HX_STACK_LINE(405)
			int tmp5 = this->discardSamplesDeferred;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(405)
			hx::AddEq(r->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")),tmp5);
			HX_STACK_LINE(406)
			int tmp6 = r->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(406)
			left = tmp6;
			HX_STACK_LINE(407)
			this->discardSamplesDeferred = (int)0;
		}
		else{
			HX_STACK_LINE(408)
			bool tmp5 = (previousLength == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(408)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(408)
			if ((tmp5)){
				HX_STACK_LINE(408)
				tmp6 = currentLocValid;
			}
			else{
				HX_STACK_LINE(408)
				tmp6 = false;
			}
			HX_STACK_LINE(408)
			if ((tmp6)){
			}
		}
	}
	HX_STACK_LINE(418)
	int tmp3 = this->lastSegWhich;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(418)
	int tmp4 = this->endSegWithKnownLoc;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(418)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(418)
	if ((tmp5)){
		HX_STACK_LINE(420)
		bool tmp6 = currentLocValid;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(420)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(420)
		if ((tmp6)){
			HX_STACK_LINE(420)
			::kha::audio2::ogg::vorbis::data::Page tmp8 = this->page;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(420)
			::kha::audio2::ogg::vorbis::data::Page tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(420)
			int tmp10 = tmp9->flag;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(420)
			int tmp11 = (int(tmp10) & int((int)4));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(420)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(420)
			tmp7 = (tmp12 != (int)0);
		}
		else{
			HX_STACK_LINE(420)
			tmp7 = false;
		}
		HX_STACK_LINE(420)
		if ((tmp7)){
			HX_STACK_LINE(421)
			int tmp8 = this->knownLocForPacket;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(421)
			int tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(421)
			int tmp10 = r->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(421)
			int tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(421)
			int tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(421)
			int currentEnd = tmp12;		HX_STACK_VAR(currentEnd,"currentEnd");
			HX_STACK_LINE(423)
			int tmp13 = currentEnd;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(423)
			int tmp14 = this->currentLoc;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(423)
			int tmp15 = r->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(423)
			int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(423)
			bool tmp17 = (tmp13 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(423)
			if ((tmp17)){
				HX_STACK_LINE(424)
				int tmp18 = currentEnd;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(424)
				int tmp19 = this->currentLoc;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(424)
				bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(424)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(424)
				if ((tmp20)){
					HX_STACK_LINE(426)
					tmp21 = (int)0;
				}
				else{
					HX_STACK_LINE(428)
					int tmp22 = currentEnd;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(428)
					int tmp23 = this->currentLoc;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(428)
					tmp21 = (tmp22 - tmp23);
				}
				HX_STACK_LINE(424)
				int len = tmp21;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(430)
				int tmp22 = r->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(430)
				hx::AddEq(len,tmp22);
				HX_STACK_LINE(431)
				hx::AddEq(this->currentLoc,len);
				HX_STACK_LINE(434)
				int tmp23 = len;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(435)
				int tmp24 = left;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(436)
				int tmp25 = r->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
				struct _Function_4_1{
					inline static Dynamic Block( int &tmp23,int &tmp24,int &tmp25){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",433,0x1d2e7902)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00") , tmp23,false);
							__result->Add(HX_HCSTRING("left","\x07","\x08","\xb0","\x47") , tmp24,false);
							__result->Add(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9") , tmp25,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(433)
				Dynamic tmp26 = _Function_4_1::Block(tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(433)
				return tmp26;
			}
		}
		HX_STACK_LINE(444)
		int tmp8 = this->knownLocForPacket;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(444)
		int tmp9 = n2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(444)
		int tmp10 = r->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(444)
		int tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(444)
		int tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(444)
		this->currentLoc = tmp12;
		HX_STACK_LINE(445)
		currentLocValid = true;
	}
	HX_STACK_LINE(448)
	bool tmp6 = currentLocValid;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(448)
	if ((tmp6)){
		HX_STACK_LINE(449)
		int tmp7 = r->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(449)
		int tmp8 = r->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(449)
		int tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(449)
		hx::AddEq(this->currentLoc,tmp9);
	}
	HX_STACK_LINE(456)
	int tmp7 = r->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(457)
	int tmp8 = left;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(458)
	int tmp9 = r->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	struct _Function_1_1{
		inline static Dynamic Block( int &tmp9,int &tmp7,int &tmp8){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",455,0x1d2e7902)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00") , tmp7,false);
				__result->Add(HX_HCSTRING("left","\x07","\x08","\xb0","\x47") , tmp8,false);
				__result->Add(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9") , tmp9,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(455)
	Dynamic tmp10 = _Function_1_1::Block(tmp9,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(455)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC3(VorbisDecodeState_obj,finishDecodePacket,return )

int VorbisDecodeState_obj::readInt32( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","readInt32",0xe221b866,"kha.audio2.ogg.vorbis.VorbisDecodeState.readInt32","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",463,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_LINE(464)
	hx::AddEq(this->inputPosition,(int)4);
	HX_STACK_LINE(465)
	::haxe::io::Input tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(465)
	int tmp1 = tmp->readInt32();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(465)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,readInt32,return )

int VorbisDecodeState_obj::readByte( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","readByte",0xb0a724f0,"kha.audio2.ogg.vorbis.VorbisDecodeState.readByte","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",469,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_LINE(470)
	hx::AddEq(this->inputPosition,(int)1);
	HX_STACK_LINE(471)
	::haxe::io::Input tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(471)
	int tmp1 = tmp->readByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(471)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,readByte,return )

Array< int > VorbisDecodeState_obj::read( int n){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","read",0x513855c8,"kha.audio2.ogg.vorbis.VorbisDecodeState.read","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",474,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(475)
	hx::AddEq(this->inputPosition,n);
	HX_STACK_LINE(476)
	Array< int > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	{
		HX_STACK_LINE(476)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(476)
		Array< int > tmp1 = Array_obj< int >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(476)
		this1 = tmp1;
		HX_STACK_LINE(476)
		int tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		this1->__SetSizeExact(tmp2);
		HX_STACK_LINE(476)
		tmp = this1;
	}
	HX_STACK_LINE(476)
	Array< int > vec = tmp;		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(477)
	{
		HX_STACK_LINE(477)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(477)
		while((true)){
			HX_STACK_LINE(477)
			bool tmp1 = (_g < n);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(477)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(477)
			if ((tmp2)){
				HX_STACK_LINE(477)
				break;
			}
			HX_STACK_LINE(477)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(477)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				::haxe::io::Input tmp4 = this->input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(478)
				int tmp5 = tmp4->readByte();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(478)
				int val = tmp5;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(478)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(478)
				int tmp7 = val;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(478)
				int tmp8 = vec->__unsafe_set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(478)
				tmp8;
			}
		}
	}
	HX_STACK_LINE(480)
	Array< int > tmp1 = vec;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecodeState_obj,read,return )

::haxe::io::Bytes VorbisDecodeState_obj::readBytes( int n){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","readBytes",0xe1992d83,"kha.audio2.ogg.vorbis.VorbisDecodeState.readBytes","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",483,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(484)
	hx::AddEq(this->inputPosition,n);
	HX_STACK_LINE(485)
	::haxe::io::Input tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(485)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(485)
	::haxe::io::Bytes tmp2 = tmp->read(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(485)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecodeState_obj,readBytes,return )

::String VorbisDecodeState_obj::readString( int n){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","readString",0x6e2f78b9,"kha.audio2.ogg.vorbis.VorbisDecodeState.readString","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",489,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(490)
	hx::AddEq(this->inputPosition,n);
	HX_STACK_LINE(491)
	::haxe::io::Input tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(491)
	int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(491)
	::String tmp2 = tmp->readString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(491)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecodeState_obj,readString,return )

int VorbisDecodeState_obj::getSampleNumber( Dynamic seekFunc,int inputLength){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","getSampleNumber",0xfc673317,"kha.audio2.ogg.vorbis.VorbisDecodeState.getSampleNumber","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",494,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(seekFunc,"seekFunc")
	HX_STACK_ARG(inputLength,"inputLength")
	HX_STACK_LINE(497)
	int tmp = this->inputPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	int restoreOffset = tmp;		HX_STACK_VAR(restoreOffset,"restoreOffset");
	HX_STACK_LINE(501)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(501)
	{
		HX_STACK_LINE(501)
		bool tmp2 = (inputLength < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(501)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(501)
		bool aNeg = tmp3;		HX_STACK_VAR(aNeg,"aNeg");
		HX_STACK_LINE(501)
		bool tmp4 = ((int)65536 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(501)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		bool bNeg = tmp5;		HX_STACK_VAR(bNeg,"bNeg");
		HX_STACK_LINE(501)
		bool tmp6 = (aNeg != bNeg);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(501)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(501)
		if ((tmp8)){
			HX_STACK_LINE(501)
			tmp1 = aNeg;
		}
		else{
			HX_STACK_LINE(501)
			tmp1 = (inputLength >= (int)65536);
		}
	}
	HX_STACK_LINE(501)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(501)
	if ((tmp1)){
		HX_STACK_LINE(501)
		int tmp3 = (inputLength - (int)65536);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(501)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(501)
		int a = tmp4;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(501)
		int tmp5 = this->firstAudioPageOffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		int b = tmp6;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(501)
		bool tmp7 = (a < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(501)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(501)
		bool aNeg = tmp8;		HX_STACK_VAR(aNeg,"aNeg");
		HX_STACK_LINE(501)
		bool tmp9 = (b < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(501)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(501)
		bool bNeg = tmp10;		HX_STACK_VAR(bNeg,"bNeg");
		HX_STACK_LINE(501)
		bool tmp11 = (aNeg != bNeg);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(501)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(501)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(501)
		if ((tmp13)){
			HX_STACK_LINE(501)
			tmp2 = aNeg;
		}
		else{
			HX_STACK_LINE(501)
			tmp2 = (a >= b);
		}
	}
	else{
		HX_STACK_LINE(501)
		tmp2 = false;
	}
	HX_STACK_LINE(501)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(501)
	if ((tmp2)){
		HX_STACK_LINE(502)
		int tmp4 = (inputLength - (int)65536);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(502)
		tmp3 = tmp4;
	}
	else{
		HX_STACK_LINE(504)
		tmp3 = this->firstAudioPageOffset;
	}
	HX_STACK_LINE(501)
	int previousSafe = tmp3;		HX_STACK_VAR(previousSafe,"previousSafe");
	HX_STACK_LINE(507)
	{
		HX_STACK_LINE(507)
		int tmp4 = this->inputPosition = previousSafe;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(507)
		seekFunc(tmp4).Cast< Void >();
	}
	HX_STACK_LINE(511)
	int end = (int)0;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(512)
	bool last = false;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		Dynamic tmp4 = seekFunc;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(513)
		int tmp5 = inputLength;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(513)
		::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult tmp6 = this->findPage(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(513)
		::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(513)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(513)
				bool tmp7 = (::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult(_g))->__Param(1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(513)
				bool l = tmp7;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(513)
				int tmp8 = (::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult(_g))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(513)
				int e = tmp8;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(515)
					end = e;
					HX_STACK_LINE(516)
					last = l;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(518)
				Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),518,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("getSampleNumber","\x49","\x2c","\xd1","\x08"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(518)
				::kha::audio2::ogg::vorbis::data::ReaderError tmp8 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::CANT_FIND_LAST_PAGE,null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(518)
				HX_STACK_DO_THROW(tmp8);
			}
			;break;
		}
	}
	HX_STACK_LINE(522)
	int tmp4 = this->inputPosition;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(522)
	int lastPageLoc = tmp4;		HX_STACK_VAR(lastPageLoc,"lastPageLoc");
	HX_STACK_LINE(527)
	while((true)){
		HX_STACK_LINE(527)
		bool tmp5 = last;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(527)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(527)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(527)
		if ((tmp7)){
			HX_STACK_LINE(527)
			break;
		}
		HX_STACK_LINE(528)
		{
			HX_STACK_LINE(528)
			int tmp8 = this->inputPosition = end;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(528)
			seekFunc(tmp8).Cast< Void >();
		}
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			Dynamic tmp8 = seekFunc;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(529)
			int tmp9 = inputLength;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(529)
			::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult tmp10 = this->findPage(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(529)
			::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult _g = tmp10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(529)
			int _switch_1 = (_g->__Index());
			if (  ( _switch_1==(int)0)){
				HX_STACK_LINE(529)
				bool tmp11 = (::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult(_g))->__Param(1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(529)
				bool l = tmp11;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(529)
				int tmp12 = (::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult(_g))->__Param(0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(529)
				int e = tmp12;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(530)
				{
					HX_STACK_LINE(531)
					end = e;
					HX_STACK_LINE(532)
					last = l;
				}
			}
			else if (  ( _switch_1==(int)1)){
				HX_STACK_LINE(536)
				break;
			}
		}
		HX_STACK_LINE(539)
		int tmp8 = (lastPageLoc + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(539)
		previousSafe = tmp8;
		HX_STACK_LINE(540)
		int tmp9 = this->inputPosition;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(540)
		lastPageLoc = tmp9;
	}
	HX_STACK_LINE(543)
	{
		HX_STACK_LINE(543)
		int tmp5 = this->inputPosition = lastPageLoc;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(543)
		seekFunc(tmp5).Cast< Void >();
	}
	HX_STACK_LINE(546)
	Array< int > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(546)
	{
		HX_STACK_LINE(546)
		hx::AddEq(this->inputPosition,(int)6);
		HX_STACK_LINE(546)
		Array< int > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(546)
		{
			HX_STACK_LINE(546)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(546)
			Array< int > tmp7 = Array_obj< int >::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(546)
			this1 = tmp7;
			HX_STACK_LINE(546)
			this1->__SetSizeExact((int)6);
			HX_STACK_LINE(546)
			tmp6 = this1;
		}
		HX_STACK_LINE(546)
		Array< int > vec = tmp6;		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(546)
		{
			HX_STACK_LINE(546)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(546)
			while((true)){
				HX_STACK_LINE(546)
				bool tmp7 = (_g < (int)6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(546)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(546)
				if ((tmp8)){
					HX_STACK_LINE(546)
					break;
				}
				HX_STACK_LINE(546)
				int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(546)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(546)
				{
					HX_STACK_LINE(546)
					::haxe::io::Input tmp10 = this->input;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(546)
					int tmp11 = tmp10->readByte();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(546)
					int val = tmp11;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(546)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(546)
					int tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(546)
					int tmp14 = vec->__unsafe_set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(546)
					tmp14;
				}
			}
		}
		HX_STACK_LINE(546)
		tmp5 = vec;
	}
	HX_STACK_LINE(546)
	Array< int > vorbisHeader = tmp5;		HX_STACK_VAR(vorbisHeader,"vorbisHeader");
	HX_STACK_LINE(549)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(549)
	{
		HX_STACK_LINE(549)
		hx::AddEq(this->inputPosition,(int)4);
		HX_STACK_LINE(549)
		::haxe::io::Input tmp7 = this->input;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(549)
		tmp6 = tmp7->readInt32();
	}
	HX_STACK_LINE(549)
	int lo = tmp6;		HX_STACK_VAR(lo,"lo");
	HX_STACK_LINE(550)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(550)
	{
		HX_STACK_LINE(550)
		hx::AddEq(this->inputPosition,(int)4);
		HX_STACK_LINE(550)
		::haxe::io::Input tmp8 = this->input;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(550)
		tmp7 = tmp8->readInt32();
	}
	HX_STACK_LINE(550)
	int hi = tmp7;		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(551)
	bool tmp8 = (lo == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(551)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(551)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(551)
	if ((tmp9)){
		HX_STACK_LINE(551)
		tmp10 = (hi == (int)-1);
	}
	else{
		HX_STACK_LINE(551)
		tmp10 = false;
	}
	HX_STACK_LINE(551)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(551)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(551)
	if ((tmp11)){
		HX_STACK_LINE(551)
		tmp12 = (hi > (int)0);
	}
	else{
		HX_STACK_LINE(551)
		tmp12 = true;
	}
	HX_STACK_LINE(551)
	if ((tmp12)){
		HX_STACK_LINE(552)
		Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),552,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("getSampleNumber","\x49","\x2c","\xd1","\x08"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(552)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp14 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::CANT_FIND_LAST_PAGE,null(),tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(552)
		HX_STACK_DO_THROW(tmp14);
	}
	HX_STACK_LINE(555)
	::kha::audio2::ogg::vorbis::data::ProbedPage tmp13 = ::kha::audio2::ogg::vorbis::data::ProbedPage_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(555)
	this->pLast = tmp13;
	HX_STACK_LINE(556)
	::kha::audio2::ogg::vorbis::data::ProbedPage tmp14 = this->pLast;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(556)
	tmp14->pageStart = lastPageLoc;
	HX_STACK_LINE(557)
	::kha::audio2::ogg::vorbis::data::ProbedPage tmp15 = this->pLast;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(557)
	tmp15->pageEnd = end;
	HX_STACK_LINE(558)
	::kha::audio2::ogg::vorbis::data::ProbedPage tmp16 = this->pLast;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(558)
	tmp16->lastDecodedSample = lo;
	HX_STACK_LINE(559)
	::kha::audio2::ogg::vorbis::data::ProbedPage tmp17 = this->pLast;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(559)
	tmp17->firstDecodedSample = null();
	HX_STACK_LINE(560)
	::kha::audio2::ogg::vorbis::data::ProbedPage tmp18 = this->pLast;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(560)
	tmp18->afterPreviousPageStart = previousSafe;
	HX_STACK_LINE(562)
	{
		HX_STACK_LINE(562)
		int tmp19 = this->inputPosition = restoreOffset;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(562)
		seekFunc(tmp19).Cast< Void >();
	}
	HX_STACK_LINE(563)
	int tmp19 = lo;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(563)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC2(VorbisDecodeState_obj,getSampleNumber,return )

Void VorbisDecodeState_obj::forcePageResync( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","forcePageResync",0xba9c57d6,"kha.audio2.ogg.vorbis.VorbisDecodeState.forcePageResync","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",568,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_LINE(568)
		this->nextSeg = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecodeState_obj,forcePageResync,(void))

Void VorbisDecodeState_obj::setInputOffset( Dynamic seekFunc,int n){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","setInputOffset",0x153efbad,"kha.audio2.ogg.vorbis.VorbisDecodeState.setInputOffset","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",572,0x1d2e7902)
		HX_STACK_THIS(this)
		HX_STACK_ARG(seekFunc,"seekFunc")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(573)
		int tmp = this->inputPosition = n;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(573)
		seekFunc(tmp).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VorbisDecodeState_obj,setInputOffset,(void))

::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult VorbisDecodeState_obj::findPage( Dynamic seekFunc,int inputLength){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","findPage",0xe472129a,"kha.audio2.ogg.vorbis.VorbisDecodeState.findPage","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",577,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(seekFunc,"seekFunc")
	HX_STACK_ARG(inputLength,"inputLength")
	HX_STACK_LINE(577)
	try
	{
	HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
	{
		HX_STACK_LINE(578)
		while((true)){
			HX_STACK_LINE(579)
			int tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				hx::AddEq(this->inputPosition,(int)1);
				HX_STACK_LINE(579)
				::haxe::io::Input tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(579)
				tmp = tmp1->readByte();
			}
			HX_STACK_LINE(579)
			int n = tmp;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(580)
			bool tmp1 = (n == (int)79);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(580)
			if ((tmp1)){
				HX_STACK_LINE(581)
				int tmp2 = this->inputPosition;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(581)
				int retryLoc = tmp2;		HX_STACK_VAR(retryLoc,"retryLoc");
				HX_STACK_LINE(583)
				int tmp3 = (retryLoc - (int)25);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(583)
				int tmp4 = inputLength;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(583)
				bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(583)
				if ((tmp5)){
					HX_STACK_LINE(584)
					return ::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult_obj::NotFound;
				}
				HX_STACK_LINE(587)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(587)
				{
					HX_STACK_LINE(587)
					hx::AddEq(this->inputPosition,(int)1);
					HX_STACK_LINE(587)
					::haxe::io::Input tmp7 = this->input;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(587)
					tmp6 = tmp7->readByte();
				}
				HX_STACK_LINE(587)
				bool tmp7 = (tmp6 != (int)103);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(587)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(587)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(587)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(587)
				if ((tmp9)){
					HX_STACK_LINE(587)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(587)
					{
						HX_STACK_LINE(587)
						hx::AddEq(this->inputPosition,(int)1);
						HX_STACK_LINE(587)
						::haxe::io::Input tmp12 = this->input;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(587)
						::haxe::io::Input tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(587)
						::haxe::io::Input tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(587)
						int tmp15 = tmp14->readByte();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(587)
						int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(587)
						tmp11 = tmp16;
					}
					HX_STACK_LINE(587)
					tmp10 = (tmp11 != (int)103);
				}
				else{
					HX_STACK_LINE(587)
					tmp10 = true;
				}
				HX_STACK_LINE(587)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(587)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(587)
				if ((tmp11)){
					HX_STACK_LINE(587)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(587)
					{
						HX_STACK_LINE(587)
						hx::AddEq(this->inputPosition,(int)1);
						HX_STACK_LINE(587)
						::haxe::io::Input tmp14 = this->input;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(587)
						::haxe::io::Input tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(587)
						int tmp16 = tmp15->readByte();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(587)
						tmp13 = tmp16;
					}
					HX_STACK_LINE(587)
					tmp12 = (tmp13 != (int)83);
				}
				else{
					HX_STACK_LINE(587)
					tmp12 = true;
				}
				HX_STACK_LINE(587)
				if ((tmp12)){
					HX_STACK_LINE(588)
					continue;
				}
				HX_STACK_LINE(591)
				Array< int > tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(591)
				{
					HX_STACK_LINE(591)
					Array< int > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(591)
					Array< int > tmp14 = Array_obj< int >::__new();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(591)
					this1 = tmp14;
					HX_STACK_LINE(591)
					this1->__SetSizeExact((int)27);
					HX_STACK_LINE(591)
					tmp13 = this1;
				}
				HX_STACK_LINE(591)
				Array< int > header = tmp13;		HX_STACK_VAR(header,"header");
				HX_STACK_LINE(592)
				int tmp14 = header->__unsafe_set((int)0,(int)79);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(592)
				tmp14;
				HX_STACK_LINE(593)
				int tmp15 = header->__unsafe_set((int)1,(int)103);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(593)
				tmp15;
				HX_STACK_LINE(594)
				int tmp16 = header->__unsafe_set((int)2,(int)103);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(594)
				tmp16;
				HX_STACK_LINE(595)
				int tmp17 = header->__unsafe_set((int)3,(int)83);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(595)
				tmp17;
				HX_STACK_LINE(596)
				{
					HX_STACK_LINE(596)
					int _g = (int)4;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(596)
					while((true)){
						HX_STACK_LINE(596)
						bool tmp18 = (_g < (int)27);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(596)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(596)
						if ((tmp19)){
							HX_STACK_LINE(596)
							break;
						}
						HX_STACK_LINE(596)
						int tmp20 = (_g)++;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(596)
						int i = tmp20;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(597)
						{
							HX_STACK_LINE(597)
							int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(597)
							{
								HX_STACK_LINE(597)
								hx::AddEq(this->inputPosition,(int)1);
								HX_STACK_LINE(597)
								::haxe::io::Input tmp22 = this->input;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(597)
								tmp21 = tmp22->readByte();
							}
							HX_STACK_LINE(597)
							int val = tmp21;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(597)
							int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(597)
							int tmp23 = val;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(597)
							int tmp24 = header->__unsafe_set(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(597)
							tmp24;
						}
					}
				}
				HX_STACK_LINE(600)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(600)
				{
					HX_STACK_LINE(600)
					int tmp19 = header->__unsafe_get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(600)
					int a = tmp19;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(600)
					tmp18 = (a != (int)0);
				}
				HX_STACK_LINE(600)
				if ((tmp18)){
					HX_STACK_LINE(601)
					{
						HX_STACK_LINE(601)
						int tmp19 = this->inputPosition = retryLoc;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(601)
						seekFunc(tmp19).Cast< Void >();
					}
					HX_STACK_LINE(602)
					continue;
				}
				HX_STACK_LINE(605)
				int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(605)
				{
					HX_STACK_LINE(605)
					int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(605)
					{
						HX_STACK_LINE(605)
						int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(605)
						{
							HX_STACK_LINE(605)
							int tmp22 = header->__unsafe_get((int)22);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(605)
							int a = tmp22;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(605)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(605)
							{
								HX_STACK_LINE(605)
								int tmp24 = header->__unsafe_get((int)23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(605)
								int a1 = tmp24;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(605)
								tmp23 = (int(a1) << int((int)8));
							}
							HX_STACK_LINE(605)
							int b = tmp23;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(605)
							tmp21 = (a + b);
						}
						HX_STACK_LINE(605)
						int a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(605)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(605)
						{
							HX_STACK_LINE(605)
							int tmp23 = header->__unsafe_get((int)24);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(605)
							int a1 = tmp23;		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(605)
							tmp22 = (int(a1) << int((int)16));
						}
						HX_STACK_LINE(605)
						int b = tmp22;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(605)
						tmp20 = (a + b);
					}
					HX_STACK_LINE(605)
					int a = tmp20;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(605)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(605)
					{
						HX_STACK_LINE(605)
						int tmp22 = header->__unsafe_get((int)25);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(605)
						int a1 = tmp22;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(605)
						tmp21 = (int(a1) << int((int)24));
					}
					HX_STACK_LINE(605)
					int b = tmp21;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(605)
					tmp19 = (a + b);
				}
				HX_STACK_LINE(605)
				int goal = tmp19;		HX_STACK_VAR(goal,"goal");
				HX_STACK_LINE(606)
				{
					HX_STACK_LINE(606)
					int _g = (int)22;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(606)
					while((true)){
						HX_STACK_LINE(606)
						bool tmp20 = (_g < (int)26);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(606)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(606)
						if ((tmp21)){
							HX_STACK_LINE(606)
							break;
						}
						HX_STACK_LINE(606)
						int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(606)
						int i = tmp22;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(607)
						int tmp23 = i;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(607)
						int tmp24 = header->__unsafe_set(tmp23,(int)0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(607)
						tmp24;
					}
				}
				HX_STACK_LINE(610)
				int crc = (int)0;		HX_STACK_VAR(crc,"crc");
				HX_STACK_LINE(611)
				{
					HX_STACK_LINE(611)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(611)
					while((true)){
						HX_STACK_LINE(611)
						bool tmp20 = (_g < (int)27);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(611)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(611)
						if ((tmp21)){
							HX_STACK_LINE(611)
							break;
						}
						HX_STACK_LINE(611)
						int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(611)
						int i = tmp22;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(612)
						int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(612)
						{
							HX_STACK_LINE(612)
							int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(612)
							int tmp25 = header->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(612)
							int byte = tmp25;		HX_STACK_VAR(byte,"byte");
							HX_STACK_LINE(612)
							{
								HX_STACK_LINE(612)
								Array< int > tmp26 = ::kha::audio2::ogg::tools::Crc32_obj::table;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(612)
								int tmp27 = byte;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(612)
								int tmp28 = hx::UShr(crc,(int)24);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(612)
								int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(612)
								int tmp30 = (int(tmp27) ^ int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(612)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(612)
								int tmp32 = tmp26->__unsafe_get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(612)
								int b = tmp32;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(612)
								int tmp33 = (int(crc) << int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(612)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(612)
								int tmp35 = b;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(612)
								tmp23 = (int(tmp34) ^ int(tmp35));
							}
						}
						HX_STACK_LINE(612)
						crc = tmp23;
					}
				}
				HX_STACK_LINE(615)
				int len = (int)0;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(616)
				try
				{
				HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
				{
					HX_STACK_LINE(617)
					{
						HX_STACK_LINE(617)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(617)
						int tmp20 = header->__unsafe_get((int)26);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(617)
						int _g = tmp20;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(617)
						while((true)){
							HX_STACK_LINE(617)
							bool tmp21 = (_g1 < _g);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(617)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(617)
							if ((tmp22)){
								HX_STACK_LINE(617)
								break;
							}
							HX_STACK_LINE(617)
							int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(617)
							int i = tmp23;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(618)
							int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(618)
							{
								HX_STACK_LINE(618)
								hx::AddEq(this->inputPosition,(int)1);
								HX_STACK_LINE(618)
								::haxe::io::Input tmp25 = this->input;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(618)
								tmp24 = tmp25->readByte();
							}
							HX_STACK_LINE(618)
							int s = tmp24;		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(619)
							int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(619)
							{
								HX_STACK_LINE(619)
								Array< int > tmp26 = ::kha::audio2::ogg::tools::Crc32_obj::table;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(619)
								int tmp27 = s;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(619)
								int tmp28 = hx::UShr(crc,(int)24);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(619)
								int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(619)
								int tmp30 = (int(tmp27) ^ int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(619)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(619)
								int tmp32 = tmp26->__unsafe_get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(619)
								int b = tmp32;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(619)
								int tmp33 = (int(crc) << int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(619)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(619)
								int tmp35 = b;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(619)
								tmp25 = (int(tmp34) ^ int(tmp35));
							}
							HX_STACK_LINE(619)
							crc = tmp25;
							HX_STACK_LINE(620)
							hx::AddEq(len,s);
						}
					}
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(622)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(622)
						while((true)){
							HX_STACK_LINE(622)
							bool tmp20 = (_g < len);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(622)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(622)
							if ((tmp21)){
								HX_STACK_LINE(622)
								break;
							}
							HX_STACK_LINE(622)
							int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(622)
							int i = tmp22;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(623)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(623)
							{
								HX_STACK_LINE(623)
								int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(623)
								{
									HX_STACK_LINE(623)
									hx::AddEq(this->inputPosition,(int)1);
									HX_STACK_LINE(623)
									::haxe::io::Input tmp25 = this->input;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(623)
									tmp24 = tmp25->readByte();
								}
								HX_STACK_LINE(623)
								int byte = tmp24;		HX_STACK_VAR(byte,"byte");
								HX_STACK_LINE(623)
								{
									HX_STACK_LINE(623)
									Array< int > tmp25 = ::kha::audio2::ogg::tools::Crc32_obj::table;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(623)
									int tmp26 = byte;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(623)
									int tmp27 = hx::UShr(crc,(int)24);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(623)
									int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(623)
									int tmp29 = (int(tmp26) ^ int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(623)
									int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(623)
									int tmp31 = tmp25->__unsafe_get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(623)
									int b = tmp31;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(623)
									int tmp32 = (int(crc) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(623)
									int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(623)
									int tmp34 = b;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(623)
									tmp23 = (int(tmp33) ^ int(tmp34));
								}
							}
							HX_STACK_LINE(623)
							crc = tmp23;
						}
					}
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::haxe::io::Eof >() ){
						HX_STACK_BEGIN_CATCH
						::haxe::io::Eof e = __e;{
							HX_STACK_LINE(626)
							return ::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult_obj::NotFound;
						}
					}
					else {
					    HX_STACK_DO_THROW(__e);
					}
				}
				HX_STACK_LINE(630)
				bool tmp20 = (crc == goal);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(630)
				if ((tmp20)){
					HX_STACK_LINE(639)
					int tmp21 = this->inputPosition;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(639)
					int end = tmp21;		HX_STACK_VAR(end,"end");
					HX_STACK_LINE(640)
					{
						HX_STACK_LINE(640)
						int tmp22 = (retryLoc - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(640)
						int tmp23 = this->inputPosition = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(640)
						seekFunc(tmp23).Cast< Void >();
					}
					HX_STACK_LINE(641)
					int tmp22 = end;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(641)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(641)
					{
						HX_STACK_LINE(641)
						int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(641)
						{
							HX_STACK_LINE(641)
							int tmp25 = header->__unsafe_get((int)5);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(641)
							int a = tmp25;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(641)
							tmp24 = (int(a) & int((int)4));
						}
						HX_STACK_LINE(641)
						int a = tmp24;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(641)
						tmp23 = (a != (int)0);
					}
					HX_STACK_LINE(641)
					::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult tmp24 = ::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult_obj::Found(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(641)
					return tmp24;
				}
			}
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
				HX_STACK_LINE(646)
				return ::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult_obj::NotFound;
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(577)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VorbisDecodeState_obj,findPage,return )

::kha::audio2::ogg::vorbis::data::ProbedPage VorbisDecodeState_obj::analyzePage( Dynamic seekFunc,::kha::audio2::ogg::vorbis::data::Header h){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","analyzePage",0xfe54df89,"kha.audio2.ogg.vorbis.VorbisDecodeState.analyzePage","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",651,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(seekFunc,"seekFunc")
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(652)
	::kha::audio2::ogg::vorbis::data::ProbedPage z = ::kha::audio2::ogg::vorbis::data::ProbedPage_obj::__new();		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(653)
	Array< bool > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(653)
	{
		HX_STACK_LINE(653)
		Array< bool > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(653)
		Array< bool > tmp1 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(653)
		this1 = tmp1;
		HX_STACK_LINE(653)
		this1->__SetSizeExact((int)255);
		HX_STACK_LINE(653)
		tmp = this1;
	}
	HX_STACK_LINE(653)
	Array< bool > packetType = tmp;		HX_STACK_VAR(packetType,"packetType");
	HX_STACK_LINE(656)
	int tmp1 = this->inputPosition;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(656)
	z->pageStart = tmp1;
	HX_STACK_LINE(659)
	Array< int > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(659)
	{
		HX_STACK_LINE(659)
		hx::AddEq(this->inputPosition,(int)27);
		HX_STACK_LINE(659)
		Array< int > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(659)
		{
			HX_STACK_LINE(659)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(659)
			Array< int > tmp4 = Array_obj< int >::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(659)
			this1 = tmp4;
			HX_STACK_LINE(659)
			this1->__SetSizeExact((int)27);
			HX_STACK_LINE(659)
			tmp3 = this1;
		}
		HX_STACK_LINE(659)
		Array< int > vec = tmp3;		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(659)
		{
			HX_STACK_LINE(659)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(659)
			while((true)){
				HX_STACK_LINE(659)
				bool tmp4 = (_g < (int)27);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(659)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(659)
				if ((tmp5)){
					HX_STACK_LINE(659)
					break;
				}
				HX_STACK_LINE(659)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(659)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(659)
				{
					HX_STACK_LINE(659)
					::haxe::io::Input tmp7 = this->input;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(659)
					int tmp8 = tmp7->readByte();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(659)
					int val = tmp8;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(659)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(659)
					int tmp10 = val;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(659)
					int tmp11 = vec->__unsafe_set(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(659)
					tmp11;
				}
			}
		}
		HX_STACK_LINE(659)
		tmp2 = vec;
	}
	HX_STACK_LINE(659)
	Array< int > pageHeader = tmp2;		HX_STACK_VAR(pageHeader,"pageHeader");
	HX_STACK_LINE(660)
	{
		HX_STACK_LINE(660)
		int tmp3 = pageHeader->__unsafe_get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(660)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(660)
		bool tmp5 = (tmp4 == (int)79);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(660)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(660)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(660)
		if ((tmp6)){
			HX_STACK_LINE(660)
			int tmp8 = pageHeader->__unsafe_get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(660)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(660)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(660)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(660)
			tmp7 = (tmp11 == (int)103);
		}
		else{
			HX_STACK_LINE(660)
			tmp7 = false;
		}
		HX_STACK_LINE(660)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(660)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(660)
		if ((tmp8)){
			HX_STACK_LINE(660)
			int tmp10 = pageHeader->__unsafe_get((int)2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(660)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(660)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(660)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(660)
			tmp9 = (tmp13 == (int)103);
		}
		else{
			HX_STACK_LINE(660)
			tmp9 = false;
		}
		HX_STACK_LINE(660)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(660)
		if ((tmp9)){
			HX_STACK_LINE(660)
			int tmp11 = pageHeader->__unsafe_get((int)3);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(660)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(660)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(660)
			tmp10 = (tmp13 == (int)83);
		}
		else{
			HX_STACK_LINE(660)
			tmp10 = false;
		}
		HX_STACK_LINE(660)
		bool b = tmp10;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(660)
		Dynamic();
	}
	HX_STACK_LINE(661)
	Array< int > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(661)
	{
		HX_STACK_LINE(661)
		int tmp4 = pageHeader->__unsafe_get((int)26);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(661)
		int n = tmp4;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(661)
		hx::AddEq(this->inputPosition,n);
		HX_STACK_LINE(661)
		Array< int > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(661)
		{
			HX_STACK_LINE(661)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(661)
			Array< int > tmp6 = Array_obj< int >::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(661)
			this1 = tmp6;
			HX_STACK_LINE(661)
			int tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(661)
			this1->__SetSizeExact(tmp7);
			HX_STACK_LINE(661)
			tmp5 = this1;
		}
		HX_STACK_LINE(661)
		Array< int > vec = tmp5;		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(661)
		{
			HX_STACK_LINE(661)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(661)
			while((true)){
				HX_STACK_LINE(661)
				bool tmp6 = (_g < n);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(661)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(661)
				if ((tmp7)){
					HX_STACK_LINE(661)
					break;
				}
				HX_STACK_LINE(661)
				int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(661)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					::haxe::io::Input tmp9 = this->input;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(661)
					int tmp10 = tmp9->readByte();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(661)
					int val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(661)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(661)
					int tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(661)
					int tmp13 = vec->__unsafe_set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(661)
					tmp13;
				}
			}
		}
		HX_STACK_LINE(661)
		tmp3 = vec;
	}
	HX_STACK_LINE(661)
	Array< int > lacing = tmp3;		HX_STACK_VAR(lacing,"lacing");
	HX_STACK_LINE(664)
	int len = (int)0;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(665)
	{
		HX_STACK_LINE(665)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(665)
		int tmp4 = pageHeader->__unsafe_get((int)26);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(665)
		int _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(665)
		while((true)){
			HX_STACK_LINE(665)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(665)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(665)
			if ((tmp6)){
				HX_STACK_LINE(665)
				break;
			}
			HX_STACK_LINE(665)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(665)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(666)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(666)
			int tmp9 = lacing->__unsafe_get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(666)
			hx::AddEq(len,tmp9);
		}
	}
	HX_STACK_LINE(670)
	int tmp4 = (z->pageStart + (int)27);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(670)
	int tmp5 = pageHeader->__unsafe_get((int)26);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(670)
	int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(670)
	int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(670)
	int tmp8 = len;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(670)
	int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(670)
	z->pageEnd = tmp9;
	HX_STACK_LINE(673)
	int tmp10 = pageHeader->__unsafe_get((int)6);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(673)
	int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(673)
	int tmp12 = pageHeader->__unsafe_get((int)7);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(673)
	int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(673)
	int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(673)
	int tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(673)
	int tmp16 = pageHeader->__unsafe_get((int)8);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(673)
	int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(673)
	int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(673)
	int tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(673)
	int tmp20 = pageHeader->__unsafe_get((int)9);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(673)
	int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(673)
	int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(673)
	int tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(673)
	z->lastDecodedSample = tmp23;
	HX_STACK_LINE(675)
	int tmp24 = pageHeader->__unsafe_get((int)5);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(675)
	int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(675)
	int tmp26 = (int(tmp25) & int((int)4));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(675)
	bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(675)
	if ((tmp27)){
		HX_STACK_LINE(678)
		z->firstDecodedSample = null();
		HX_STACK_LINE(679)
		{
			HX_STACK_LINE(679)
			int tmp28 = this->inputPosition = z->pageStart;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(679)
			seekFunc(tmp28).Cast< Void >();
		}
		HX_STACK_LINE(680)
		::kha::audio2::ogg::vorbis::data::ProbedPage tmp28 = z;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(680)
		return tmp28;
	}
	HX_STACK_LINE(687)
	int numPacket = (int)0;		HX_STACK_VAR(numPacket,"numPacket");
	HX_STACK_LINE(688)
	int tmp28 = pageHeader->__unsafe_get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(688)
	int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(688)
	int tmp30 = (int(tmp29) & int((int)1));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(688)
	bool tmp31 = (tmp30 == (int)0);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(688)
	bool packetStart = tmp31;		HX_STACK_VAR(packetStart,"packetStart");
	HX_STACK_LINE(690)
	int tmp32 = h->modes->length;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(690)
	int modeCount = tmp32;		HX_STACK_VAR(modeCount,"modeCount");
	HX_STACK_LINE(692)
	{
		HX_STACK_LINE(692)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(692)
		int tmp33 = pageHeader->__unsafe_get((int)26);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(692)
		int _g = tmp33;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(692)
		while((true)){
			HX_STACK_LINE(692)
			bool tmp34 = (_g1 < _g);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(692)
			bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(692)
			if ((tmp35)){
				HX_STACK_LINE(692)
				break;
			}
			HX_STACK_LINE(692)
			int tmp36 = (_g1)++;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(692)
			int i = tmp36;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(693)
			bool tmp37 = packetStart;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(693)
			if ((tmp37)){
				HX_STACK_LINE(694)
				int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(694)
				int tmp39 = lacing->__unsafe_get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(694)
				int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(694)
				bool tmp41 = (tmp40 == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(694)
				if ((tmp41)){
					HX_STACK_LINE(696)
					{
						HX_STACK_LINE(696)
						int tmp42 = this->inputPosition = z->pageStart;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(696)
						seekFunc(tmp42).Cast< Void >();
					}
					HX_STACK_LINE(697)
					return null();
				}
				HX_STACK_LINE(699)
				int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(699)
				{
					HX_STACK_LINE(699)
					hx::AddEq(this->inputPosition,(int)1);
					HX_STACK_LINE(699)
					::haxe::io::Input tmp43 = this->input;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(699)
					tmp42 = tmp43->readByte();
				}
				HX_STACK_LINE(699)
				int n = tmp42;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(702)
				int tmp43 = (int(n) & int((int)1));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(702)
				bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(702)
				if ((tmp44)){
					HX_STACK_LINE(703)
					{
						HX_STACK_LINE(703)
						int tmp45 = this->inputPosition = z->pageStart;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(703)
						seekFunc(tmp45).Cast< Void >();
					}
					HX_STACK_LINE(704)
					return null();
				}
				HX_STACK_LINE(706)
				hx::ShrEq(n,(int)1);
				HX_STACK_LINE(707)
				int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(707)
				{
					HX_STACK_LINE(707)
					int tmp46 = (modeCount - (int)1);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(707)
					int n1 = tmp46;		HX_STACK_VAR(n1,"n1");
					HX_STACK_LINE(707)
					Array< int > tmp47 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(707)
					Array< int > log2_4 = tmp47;		HX_STACK_VAR(log2_4,"log2_4");
					HX_STACK_LINE(707)
					int tmp48 = n1;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(707)
					int tmp49 = (int)16384;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(707)
					bool tmp50 = (tmp48 < tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(707)
					if ((tmp50)){
						HX_STACK_LINE(707)
						int tmp51 = n1;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(707)
						int tmp52 = (int)16;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(707)
						bool tmp53 = (tmp51 < tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(707)
						if ((tmp53)){
							HX_STACK_LINE(707)
							int tmp54 = log2_4->__get(n1);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(707)
							tmp45 = tmp54;
						}
						else{
							HX_STACK_LINE(707)
							int tmp54 = n1;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(707)
							int tmp55 = (int)512;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(707)
							bool tmp56 = (tmp54 < tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(707)
							if ((tmp56)){
								HX_STACK_LINE(707)
								Array< int > tmp57 = log2_4;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(707)
								int tmp58 = (int(n1) >> int((int)5));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(707)
								int tmp59 = tmp57->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(707)
								tmp45 = ((int)5 + tmp59);
							}
							else{
								HX_STACK_LINE(707)
								Array< int > tmp57 = log2_4;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(707)
								int tmp58 = (int(n1) >> int((int)10));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(707)
								int tmp59 = tmp57->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(707)
								tmp45 = ((int)10 + tmp59);
							}
						}
					}
					else{
						HX_STACK_LINE(707)
						int tmp51 = n1;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(707)
						int tmp52 = (int)16777216;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(707)
						bool tmp53 = (tmp51 < tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(707)
						if ((tmp53)){
							HX_STACK_LINE(707)
							int tmp54 = n1;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(707)
							int tmp55 = (int)524288;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(707)
							bool tmp56 = (tmp54 < tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(707)
							if ((tmp56)){
								HX_STACK_LINE(707)
								Array< int > tmp57 = log2_4;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(707)
								int tmp58 = (int(n1) >> int((int)15));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(707)
								int tmp59 = tmp57->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(707)
								tmp45 = ((int)15 + tmp59);
							}
							else{
								HX_STACK_LINE(707)
								Array< int > tmp57 = log2_4;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(707)
								int tmp58 = (int(n1) >> int((int)20));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(707)
								int tmp59 = tmp57->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(707)
								tmp45 = ((int)20 + tmp59);
							}
						}
						else{
							HX_STACK_LINE(707)
							int tmp54 = n1;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(707)
							int tmp55 = (int)536870912;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(707)
							bool tmp56 = (tmp54 < tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(707)
							if ((tmp56)){
								HX_STACK_LINE(707)
								Array< int > tmp57 = log2_4;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(707)
								int tmp58 = (int(n1) >> int((int)25));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(707)
								int tmp59 = tmp57->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(707)
								tmp45 = ((int)25 + tmp59);
							}
							else{
								HX_STACK_LINE(707)
								int tmp57 = n1;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(707)
								int tmp58 = (int)-2147483648;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(707)
								bool tmp59 = (tmp57 < tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(707)
								if ((tmp59)){
									HX_STACK_LINE(707)
									Array< int > tmp60 = log2_4;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(707)
									int tmp61 = (int(n1) >> int((int)30));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(707)
									int tmp62 = tmp60->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(707)
									tmp45 = ((int)30 + tmp62);
								}
								else{
									HX_STACK_LINE(707)
									tmp45 = (int)0;
								}
							}
						}
					}
				}
				HX_STACK_LINE(707)
				int b = tmp45;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(708)
				int tmp46 = (int((int)1) << int(b));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(708)
				int tmp47 = (tmp46 - (int)1);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(708)
				hx::AndEq(n,tmp47);
				HX_STACK_LINE(709)
				bool tmp48 = (n >= modeCount);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(709)
				if ((tmp48)){
					HX_STACK_LINE(710)
					{
						HX_STACK_LINE(710)
						int tmp49 = this->inputPosition = z->pageStart;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(710)
						seekFunc(tmp49).Cast< Void >();
					}
					HX_STACK_LINE(711)
					return null();
				}
				HX_STACK_LINE(713)
				{
					HX_STACK_LINE(713)
					int tmp49 = (numPacket)++;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(713)
					int index = tmp49;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(713)
					int tmp50 = n;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(713)
					::kha::audio2::ogg::vorbis::data::Mode tmp51 = h->modes->__unsafe_get(tmp50).StaticCast< ::kha::audio2::ogg::vorbis::data::Mode >();		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(713)
					bool tmp52 = tmp51->blockflag;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(713)
					bool val = tmp52;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(713)
					int tmp53 = index;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(713)
					bool tmp54 = val;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(713)
					bool tmp55 = packetType->__unsafe_set(tmp53,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(713)
					tmp55;
				}
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					int tmp49 = i;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(714)
					int tmp50 = lacing->__unsafe_get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(714)
					int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(714)
					int tmp52 = (tmp51 - (int)1);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(714)
					int len1 = tmp52;		HX_STACK_VAR(len1,"len1");
					HX_STACK_LINE(714)
					{
						HX_STACK_LINE(714)
						hx::AddEq(this->inputPosition,len1);
						HX_STACK_LINE(714)
						Array< int > tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(714)
						{
							HX_STACK_LINE(714)
							Array< int > this1;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(714)
							Array< int > tmp54 = Array_obj< int >::__new();		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(714)
							this1 = tmp54;
							HX_STACK_LINE(714)
							int tmp55 = len1;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(714)
							this1->__SetSizeExact(tmp55);
							HX_STACK_LINE(714)
							tmp53 = this1;
						}
						HX_STACK_LINE(714)
						Array< int > vec = tmp53;		HX_STACK_VAR(vec,"vec");
						HX_STACK_LINE(714)
						{
							HX_STACK_LINE(714)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(714)
							while((true)){
								HX_STACK_LINE(714)
								bool tmp54 = (_g2 < len1);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(714)
								bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(714)
								if ((tmp55)){
									HX_STACK_LINE(714)
									break;
								}
								HX_STACK_LINE(714)
								int tmp56 = (_g2)++;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(714)
								int i1 = tmp56;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(714)
								{
									HX_STACK_LINE(714)
									::haxe::io::Input tmp57 = this->input;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(714)
									int tmp58 = tmp57->readByte();		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(714)
									int val = tmp58;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(714)
									int tmp59 = i1;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(714)
									int tmp60 = val;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(714)
									int tmp61 = vec->__unsafe_set(tmp59,tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(714)
									tmp61;
								}
							}
						}
						HX_STACK_LINE(714)
						vec;
					}
				}
			}
			else{
				HX_STACK_LINE(716)
				int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(716)
				int tmp39 = lacing->__unsafe_get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(716)
				int len1 = tmp39;		HX_STACK_VAR(len1,"len1");
				HX_STACK_LINE(716)
				{
					HX_STACK_LINE(716)
					hx::AddEq(this->inputPosition,len1);
					HX_STACK_LINE(716)
					Array< int > tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(716)
					{
						HX_STACK_LINE(716)
						Array< int > this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(716)
						Array< int > tmp41 = Array_obj< int >::__new();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(716)
						this1 = tmp41;
						HX_STACK_LINE(716)
						int tmp42 = len1;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(716)
						this1->__SetSizeExact(tmp42);
						HX_STACK_LINE(716)
						tmp40 = this1;
					}
					HX_STACK_LINE(716)
					Array< int > vec = tmp40;		HX_STACK_VAR(vec,"vec");
					HX_STACK_LINE(716)
					{
						HX_STACK_LINE(716)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(716)
						while((true)){
							HX_STACK_LINE(716)
							bool tmp41 = (_g2 < len1);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(716)
							bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(716)
							if ((tmp42)){
								HX_STACK_LINE(716)
								break;
							}
							HX_STACK_LINE(716)
							int tmp43 = (_g2)++;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(716)
							int i1 = tmp43;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(716)
							{
								HX_STACK_LINE(716)
								::haxe::io::Input tmp44 = this->input;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(716)
								int tmp45 = tmp44->readByte();		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(716)
								int val = tmp45;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(716)
								int tmp46 = i1;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(716)
								int tmp47 = val;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(716)
								int tmp48 = vec->__unsafe_set(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(716)
								tmp48;
							}
						}
					}
					HX_STACK_LINE(716)
					vec;
				}
			}
			HX_STACK_LINE(718)
			int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(718)
			int tmp39 = lacing->__unsafe_get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(718)
			int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(718)
			bool tmp41 = (tmp40 < (int)255);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(718)
			packetStart = tmp41;
		}
	}
	HX_STACK_LINE(723)
	int samples = (int)0;		HX_STACK_VAR(samples,"samples");
	HX_STACK_LINE(731)
	bool tmp33 = (numPacket > (int)1);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(731)
	if ((tmp33)){
		HX_STACK_LINE(732)
		int tmp34 = (numPacket - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(732)
		bool tmp35 = packetType->__unsafe_get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(732)
		bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(732)
		int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(732)
		if ((tmp36)){
			HX_STACK_LINE(732)
			tmp37 = h->blocksize1;
		}
		else{
			HX_STACK_LINE(732)
			tmp37 = h->blocksize0;
		}
		HX_STACK_LINE(732)
		hx::AddEq(samples,tmp37);
	}
	HX_STACK_LINE(735)
	int tmp34 = (numPacket - (int)2);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(735)
	int i = tmp34;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(736)
	while((true)){
		HX_STACK_LINE(736)
		bool tmp35 = (i >= (int)1);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(736)
		bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(736)
		if ((tmp36)){
			HX_STACK_LINE(736)
			break;
		}
		HX_STACK_LINE(737)
		(i)--;
		HX_STACK_LINE(740)
		int tmp37 = i;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(740)
		bool tmp38 = packetType->__unsafe_get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(740)
		bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(740)
		if ((tmp39)){
			HX_STACK_LINE(741)
			int tmp40 = (i + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(741)
			bool tmp41 = packetType->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(741)
			bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(741)
			if ((tmp42)){
				HX_STACK_LINE(742)
				int tmp43 = (int(h->blocksize1) >> int((int)1));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(742)
				hx::AddEq(samples,tmp43);
			}
			else{
				HX_STACK_LINE(744)
				int tmp43 = (h->blocksize1 - h->blocksize0);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(744)
				int tmp44 = (int(tmp43) >> int((int)2));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(744)
				int tmp45 = (int(h->blocksize0) >> int((int)1));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(744)
				int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(744)
				hx::AddEq(samples,tmp46);
			}
		}
		else{
			HX_STACK_LINE(747)
			int tmp40 = (int(h->blocksize0) >> int((int)1));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(747)
			hx::AddEq(samples,tmp40);
		}
		HX_STACK_LINE(749)
		(i)--;
	}
	HX_STACK_LINE(775)
	int tmp35 = (z->lastDecodedSample - samples);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(775)
	z->firstDecodedSample = tmp35;
	HX_STACK_LINE(778)
	{
		HX_STACK_LINE(778)
		int tmp36 = this->inputPosition = z->pageStart;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(778)
		seekFunc(tmp36).Cast< Void >();
	}
	HX_STACK_LINE(779)
	::kha::audio2::ogg::vorbis::data::ProbedPage tmp36 = z;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(779)
	return tmp36;
}


HX_DEFINE_DYNAMIC_FUNC2(VorbisDecodeState_obj,analyzePage,return )

int VorbisDecodeState_obj::decodeScalarRaw( ::kha::audio2::ogg::vorbis::data::Codebook c){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecodeState","decodeScalarRaw",0x3c61dddc,"kha.audio2.ogg.vorbis.VorbisDecodeState.decodeScalarRaw","kha/audio2/ogg/vorbis/VorbisDecodeState.hx",784,0x1d2e7902)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(785)
	this->prepHuffman();
	HX_STACK_LINE(790)
	Array< int > codewordLengths = c->codewordLengths;		HX_STACK_VAR(codewordLengths,"codewordLengths");
	HX_STACK_LINE(791)
	Array< int > codewords = c->codewords;		HX_STACK_VAR(codewords,"codewords");
	HX_STACK_LINE(792)
	Array< int > sortedCodewords = c->sortedCodewords;		HX_STACK_VAR(sortedCodewords,"sortedCodewords");
	HX_STACK_LINE(794)
	bool tmp = (c->entries > (int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(794)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(794)
	if ((tmp)){
		HX_STACK_LINE(794)
		tmp1 = (sortedCodewords != null());
	}
	else{
		HX_STACK_LINE(794)
		tmp1 = (codewords != null());
	}
	HX_STACK_LINE(794)
	if ((tmp1)){
		HX_STACK_LINE(796)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(796)
		{
			HX_STACK_LINE(796)
			int tmp3 = this->acc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(796)
			int n = tmp3;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(796)
			int tmp4 = (int(n) & int((int)-1431655766));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(796)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(796)
			int tmp6 = hx::UShr(tmp5,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(796)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(796)
			int tmp8 = (int(n) & int((int)1431655765));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(796)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(796)
			int tmp10 = (int(tmp9) << int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(796)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(796)
			int tmp12 = (int(tmp7) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(796)
			n = tmp12;
			HX_STACK_LINE(796)
			int tmp13 = (int(n) & int((int)-858993460));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(796)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(796)
			int tmp15 = hx::UShr(tmp14,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(796)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(796)
			int tmp17 = (int(n) & int((int)858993459));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(796)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(796)
			int tmp19 = (int(tmp18) << int((int)2));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(796)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(796)
			int tmp21 = (int(tmp16) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(796)
			n = tmp21;
			HX_STACK_LINE(796)
			int tmp22 = (int(n) & int((int)-252645136));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(796)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(796)
			int tmp24 = hx::UShr(tmp23,(int)4);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(796)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(796)
			int tmp26 = (int(n) & int((int)252645135));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(796)
			int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(796)
			int tmp28 = (int(tmp27) << int((int)4));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(796)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(796)
			int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(796)
			n = tmp30;
			HX_STACK_LINE(796)
			int tmp31 = (int(n) & int((int)-16711936));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(796)
			int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(796)
			int tmp33 = hx::UShr(tmp32,(int)8);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(796)
			int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(796)
			int tmp35 = (int(n) & int((int)16711935));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(796)
			int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(796)
			int tmp37 = (int(tmp36) << int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(796)
			int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(796)
			int tmp39 = (int(tmp34) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(796)
			n = tmp39;
			HX_STACK_LINE(796)
			int tmp40 = hx::UShr(n,(int)16);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(796)
			int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(796)
			int tmp42 = (int(n) << int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(796)
			int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(796)
			int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(796)
			tmp2 = tmp44;
		}
		HX_STACK_LINE(796)
		int code = tmp2;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(797)
		int x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(798)
		int n = c->sortedEntries;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(800)
		while((true)){
			HX_STACK_LINE(800)
			bool tmp3 = (n > (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(800)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(800)
			if ((tmp4)){
				HX_STACK_LINE(800)
				break;
			}
			HX_STACK_LINE(802)
			int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(802)
			int tmp6 = (int(n) >> int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(802)
			int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(802)
			int m = tmp7;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(803)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(803)
			{
				HX_STACK_LINE(803)
				int tmp9 = sortedCodewords->__get(m);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(803)
				int a = tmp9;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(803)
				{
					HX_STACK_LINE(803)
					bool tmp10 = (code < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(803)
					bool aNeg = tmp10;		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(803)
					bool tmp11 = (a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(803)
					bool bNeg = tmp11;		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(803)
					bool tmp12 = (aNeg != bNeg);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(803)
					if ((tmp12)){
						HX_STACK_LINE(803)
						tmp8 = aNeg;
					}
					else{
						HX_STACK_LINE(803)
						tmp8 = (code >= a);
					}
				}
			}
			HX_STACK_LINE(803)
			if ((tmp8)){
				HX_STACK_LINE(804)
				x = m;
				HX_STACK_LINE(805)
				int tmp9 = (int(n) >> int((int)1));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(805)
				hx::SubEq(n,tmp9);
			}
			else{
				HX_STACK_LINE(807)
				hx::ShrEq(n,(int)1);
			}
		}
		HX_STACK_LINE(812)
		bool tmp3 = c->sparse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(812)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(812)
		if ((tmp4)){
			HX_STACK_LINE(813)
			int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(813)
			int tmp6 = c->sortedValues->__unsafe_get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(813)
			x = tmp6;
		}
		HX_STACK_LINE(817)
		int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(817)
		int tmp6 = codewordLengths->__unsafe_get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(817)
		int len = tmp6;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(818)
		int tmp7 = this->validBits;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(818)
		int tmp8 = len;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(818)
		bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(818)
		if ((tmp9)){
			HX_STACK_LINE(819)
			int tmp10 = this->acc;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(819)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(819)
			int tmp12 = len;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(819)
			int tmp13 = hx::UShr(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(819)
			this->acc = tmp13;
			HX_STACK_LINE(820)
			hx::SubEq(this->validBits,len);
			HX_STACK_LINE(821)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(821)
			return tmp14;
		}
		HX_STACK_LINE(824)
		this->validBits = (int)0;
		HX_STACK_LINE(825)
		return (int)-1;
	}
	HX_STACK_LINE(830)
	{
		HX_STACK_LINE(830)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(830)
		int _g = c->entries;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(830)
		while((true)){
			HX_STACK_LINE(830)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(830)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(830)
			if ((tmp3)){
				HX_STACK_LINE(830)
				break;
			}
			HX_STACK_LINE(830)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(830)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(831)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(831)
			int tmp6 = codewordLengths->__unsafe_get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(831)
			int cl = tmp6;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(832)
			bool tmp7 = (cl == (int)255);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(832)
			if ((tmp7)){
				HX_STACK_LINE(833)
				continue;
			}
			HX_STACK_LINE(835)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(835)
			{
				HX_STACK_LINE(835)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(835)
				int tmp10 = codewords->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(835)
				int a = tmp10;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(835)
				int tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(835)
				int tmp12 = this->acc;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(835)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(835)
				int tmp14 = (int((int)1) << int(cl));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(835)
				int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(835)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(835)
				int tmp17 = (int(tmp13) & int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(835)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(835)
				tmp8 = (tmp11 == tmp18);
			}
			HX_STACK_LINE(835)
			if ((tmp8)){
				HX_STACK_LINE(836)
				int tmp9 = this->validBits;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(836)
				int tmp10 = cl;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(836)
				bool tmp11 = (tmp9 >= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(836)
				if ((tmp11)){
					HX_STACK_LINE(837)
					int tmp12 = this->acc;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(837)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(837)
					int tmp14 = cl;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(837)
					int tmp15 = hx::UShr(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(837)
					this->acc = tmp15;
					HX_STACK_LINE(838)
					hx::SubEq(this->validBits,cl);
					HX_STACK_LINE(839)
					int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(839)
					return tmp16;
				}
				HX_STACK_LINE(841)
				this->validBits = (int)0;
				HX_STACK_LINE(842)
				return (int)-1;
			}
		}
	}
	HX_STACK_LINE(846)
	Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),846,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("decodeScalarRaw","\x0e","\xd7","\xcb","\x48"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(846)
	::kha::audio2::ogg::vorbis::data::ReaderError tmp3 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_STREAM,null(),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(846)
	this->error = tmp3;
	HX_STACK_LINE(847)
	this->validBits = (int)0;
	HX_STACK_LINE(848)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecodeState_obj,decodeScalarRaw,return )

int VorbisDecodeState_obj::INVALID_BITS;


VorbisDecodeState_obj::VorbisDecodeState_obj()
{
}

void VorbisDecodeState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VorbisDecodeState);
	HX_MARK_MEMBER_NAME(page,"page");
	HX_MARK_MEMBER_NAME(eof,"eof");
	HX_MARK_MEMBER_NAME(pFirst,"pFirst");
	HX_MARK_MEMBER_NAME(pLast,"pLast");
	HX_MARK_MEMBER_NAME(validBits,"validBits");
	HX_MARK_MEMBER_NAME(inputPosition,"inputPosition");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(discardSamplesDeferred,"discardSamplesDeferred");
	HX_MARK_MEMBER_NAME(segments,"segments");
	HX_MARK_MEMBER_NAME(bytesInSeg,"bytesInSeg");
	HX_MARK_MEMBER_NAME(channelBuffers,"channelBuffers");
	HX_MARK_MEMBER_NAME(channelBufferStart,"channelBufferStart");
	HX_MARK_MEMBER_NAME(channelBufferEnd,"channelBufferEnd");
	HX_MARK_MEMBER_NAME(currentSample,"currentSample");
	HX_MARK_MEMBER_NAME(previousWindow,"previousWindow");
	HX_MARK_MEMBER_NAME(previousLength,"previousLength");
	HX_MARK_MEMBER_NAME(finalY,"finalY");
	HX_MARK_MEMBER_NAME(firstDecode,"firstDecode");
	HX_MARK_MEMBER_NAME(nextSeg,"nextSeg");
	HX_MARK_MEMBER_NAME(acc,"acc");
	HX_MARK_MEMBER_NAME(lastSeg,"lastSeg");
	HX_MARK_MEMBER_NAME(lastSegWhich,"lastSegWhich");
	HX_MARK_MEMBER_NAME(endSegWithKnownLoc,"endSegWithKnownLoc");
	HX_MARK_MEMBER_NAME(knownLocForPacket,"knownLocForPacket");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(currentLoc,"currentLoc");
	HX_MARK_MEMBER_NAME(currentLocValid,"currentLocValid");
	HX_MARK_MEMBER_NAME(firstAudioPageOffset,"firstAudioPageOffset");
	HX_MARK_END_CLASS();
}

void VorbisDecodeState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(page,"page");
	HX_VISIT_MEMBER_NAME(eof,"eof");
	HX_VISIT_MEMBER_NAME(pFirst,"pFirst");
	HX_VISIT_MEMBER_NAME(pLast,"pLast");
	HX_VISIT_MEMBER_NAME(validBits,"validBits");
	HX_VISIT_MEMBER_NAME(inputPosition,"inputPosition");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(discardSamplesDeferred,"discardSamplesDeferred");
	HX_VISIT_MEMBER_NAME(segments,"segments");
	HX_VISIT_MEMBER_NAME(bytesInSeg,"bytesInSeg");
	HX_VISIT_MEMBER_NAME(channelBuffers,"channelBuffers");
	HX_VISIT_MEMBER_NAME(channelBufferStart,"channelBufferStart");
	HX_VISIT_MEMBER_NAME(channelBufferEnd,"channelBufferEnd");
	HX_VISIT_MEMBER_NAME(currentSample,"currentSample");
	HX_VISIT_MEMBER_NAME(previousWindow,"previousWindow");
	HX_VISIT_MEMBER_NAME(previousLength,"previousLength");
	HX_VISIT_MEMBER_NAME(finalY,"finalY");
	HX_VISIT_MEMBER_NAME(firstDecode,"firstDecode");
	HX_VISIT_MEMBER_NAME(nextSeg,"nextSeg");
	HX_VISIT_MEMBER_NAME(acc,"acc");
	HX_VISIT_MEMBER_NAME(lastSeg,"lastSeg");
	HX_VISIT_MEMBER_NAME(lastSegWhich,"lastSegWhich");
	HX_VISIT_MEMBER_NAME(endSegWithKnownLoc,"endSegWithKnownLoc");
	HX_VISIT_MEMBER_NAME(knownLocForPacket,"knownLocForPacket");
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(currentLoc,"currentLoc");
	HX_VISIT_MEMBER_NAME(currentLocValid,"currentLocValid");
	HX_VISIT_MEMBER_NAME(firstAudioPageOffset,"firstAudioPageOffset");
}

Dynamic VorbisDecodeState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { return eof; }
		if (HX_FIELD_EQ(inName,"acc") ) { return acc; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"page") ) { return page; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"skip") ) { return skip_dyn(); }
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pLast") ) { return pLast; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		if (HX_FIELD_EQ(inName,"setup") ) { return setup_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pFirst") ) { return pFirst; }
		if (HX_FIELD_EQ(inName,"finalY") ) { return finalY; }
		if (HX_FIELD_EQ(inName,"decode") ) { return decode_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nextSeg") ) { return nextSeg; }
		if (HX_FIELD_EQ(inName,"lastSeg") ) { return lastSeg; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"segments") ) { return segments; }
		if (HX_FIELD_EQ(inName,"readBits") ) { return readBits_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"findPage") ) { return findPage_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"validBits") ) { return validBits; }
		if (HX_FIELD_EQ(inName,"decodeRaw") ) { return decodeRaw_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt32") ) { return readInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesInSeg") ) { return bytesInSeg; }
		if (HX_FIELD_EQ(inName,"currentLoc") ) { return currentLoc; }
		if (HX_FIELD_EQ(inName,"readPacket") ) { return readPacket_dyn(); }
		if (HX_FIELD_EQ(inName,"isLastByte") ) { return isLastByte_dyn(); }
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstDecode") ) { return firstDecode; }
		if (HX_FIELD_EQ(inName,"startPacket") ) { return startPacket_dyn(); }
		if (HX_FIELD_EQ(inName,"flushPacket") ) { return flushPacket_dyn(); }
		if (HX_FIELD_EQ(inName,"prepHuffman") ) { return prepHuffman_dyn(); }
		if (HX_FIELD_EQ(inName,"analyzePage") ) { return analyzePage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastSegWhich") ) { return lastSegWhich; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inputPosition") ) { return inputPosition; }
		if (HX_FIELD_EQ(inName,"currentSample") ) { return currentSample; }
		if (HX_FIELD_EQ(inName,"readPacketRaw") ) { return readPacketRaw_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"channelBuffers") ) { return channelBuffers; }
		if (HX_FIELD_EQ(inName,"previousWindow") ) { return previousWindow; }
		if (HX_FIELD_EQ(inName,"previousLength") ) { return previousLength; }
		if (HX_FIELD_EQ(inName,"vorbisValidate") ) { return vorbisValidate_dyn(); }
		if (HX_FIELD_EQ(inName,"capturePattern") ) { return capturePattern_dyn(); }
		if (HX_FIELD_EQ(inName,"setInputOffset") ) { return setInputOffset_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentLocValid") ) { return currentLocValid; }
		if (HX_FIELD_EQ(inName,"getSampleNumber") ) { return getSampleNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"forcePageResync") ) { return forcePageResync_dyn(); }
		if (HX_FIELD_EQ(inName,"decodeScalarRaw") ) { return decodeScalarRaw_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"channelBufferEnd") ) { return channelBufferEnd; }
		if (HX_FIELD_EQ(inName,"maybeStartPacket") ) { return maybeStartPacket_dyn(); }
		if (HX_FIELD_EQ(inName,"startFirstDecode") ) { return startFirstDecode_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"knownLocForPacket") ) { return knownLocForPacket; }
		if (HX_FIELD_EQ(inName,"firstPageValidate") ) { return firstPageValidate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"channelBufferStart") ) { return channelBufferStart; }
		if (HX_FIELD_EQ(inName,"endSegWithKnownLoc") ) { return endSegWithKnownLoc; }
		if (HX_FIELD_EQ(inName,"finishDecodePacket") ) { return finishDecodePacket_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"firstAudioPageOffset") ) { return firstAudioPageOffset; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"discardSamplesDeferred") ) { return discardSamplesDeferred; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VorbisDecodeState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { eof=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acc") ) { acc=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"page") ) { page=inValue.Cast< ::kha::audio2::ogg::vorbis::data::Page >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pLast") ) { pLast=inValue.Cast< ::kha::audio2::ogg::vorbis::data::ProbedPage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< ::kha::audio2::ogg::vorbis::data::ReaderError >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pFirst") ) { pFirst=inValue.Cast< ::kha::audio2::ogg::vorbis::data::ProbedPage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finalY") ) { finalY=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nextSeg") ) { nextSeg=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSeg") ) { lastSeg=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"segments") ) { segments=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"validBits") ) { validBits=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesInSeg") ) { bytesInSeg=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentLoc") ) { currentLoc=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstDecode") ) { firstDecode=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastSegWhich") ) { lastSegWhich=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inputPosition") ) { inputPosition=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentSample") ) { currentSample=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"channelBuffers") ) { channelBuffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"previousWindow") ) { previousWindow=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"previousLength") ) { previousLength=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentLocValid") ) { currentLocValid=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"channelBufferEnd") ) { channelBufferEnd=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"knownLocForPacket") ) { knownLocForPacket=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"channelBufferStart") ) { channelBufferStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endSegWithKnownLoc") ) { endSegWithKnownLoc=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"firstAudioPageOffset") ) { firstAudioPageOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"discardSamplesDeferred") ) { discardSamplesDeferred=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VorbisDecodeState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void VorbisDecodeState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("page","\x4f","\xda","\x51","\x4a"));
	outFields->push(HX_HCSTRING("eof","\xbc","\x04","\x4d","\x00"));
	outFields->push(HX_HCSTRING("pFirst","\xa0","\x51","\xc3","\x5b"));
	outFields->push(HX_HCSTRING("pLast","\xe6","\x2e","\x67","\xaf"));
	outFields->push(HX_HCSTRING("validBits","\x22","\xca","\xec","\x2d"));
	outFields->push(HX_HCSTRING("inputPosition","\xd3","\x3a","\x9c","\x59"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("discardSamplesDeferred","\xca","\x30","\xf6","\x72"));
	outFields->push(HX_HCSTRING("segments","\x60","\xed","\x26","\x4e"));
	outFields->push(HX_HCSTRING("bytesInSeg","\x45","\xb8","\xaf","\xef"));
	outFields->push(HX_HCSTRING("channelBuffers","\xf0","\xb8","\xbc","\x61"));
	outFields->push(HX_HCSTRING("channelBufferStart","\x3f","\x1f","\xc8","\xba"));
	outFields->push(HX_HCSTRING("channelBufferEnd","\x78","\x4d","\xee","\xd4"));
	outFields->push(HX_HCSTRING("currentSample","\x43","\xe1","\xa6","\x00"));
	outFields->push(HX_HCSTRING("previousWindow","\x87","\x47","\x23","\x41"));
	outFields->push(HX_HCSTRING("previousLength","\x7d","\x48","\x9e","\x8d"));
	outFields->push(HX_HCSTRING("finalY","\x23","\x28","\x79","\x86"));
	outFields->push(HX_HCSTRING("firstDecode","\x7e","\x8d","\x8f","\x49"));
	outFields->push(HX_HCSTRING("nextSeg","\x62","\x28","\x46","\xa5"));
	outFields->push(HX_HCSTRING("acc","\x41","\xf1","\x49","\x00"));
	outFields->push(HX_HCSTRING("lastSeg","\xdf","\xe2","\xac","\xd7"));
	outFields->push(HX_HCSTRING("lastSegWhich","\x7e","\x00","\xe0","\x06"));
	outFields->push(HX_HCSTRING("endSegWithKnownLoc","\x7d","\x01","\xc0","\x57"));
	outFields->push(HX_HCSTRING("knownLocForPacket","\xf4","\xab","\xab","\x3c"));
	outFields->push(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"));
	outFields->push(HX_HCSTRING("currentLoc","\xc7","\x19","\x2d","\xc7"));
	outFields->push(HX_HCSTRING("currentLocValid","\xb5","\xf9","\xa2","\x57"));
	outFields->push(HX_HCSTRING("firstAudioPageOffset","\x68","\x75","\x67","\x0d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::audio2::ogg::vorbis::data::Page*/ ,(int)offsetof(VorbisDecodeState_obj,page),HX_HCSTRING("page","\x4f","\xda","\x51","\x4a")},
	{hx::fsBool,(int)offsetof(VorbisDecodeState_obj,eof),HX_HCSTRING("eof","\xbc","\x04","\x4d","\x00")},
	{hx::fsObject /*::kha::audio2::ogg::vorbis::data::ProbedPage*/ ,(int)offsetof(VorbisDecodeState_obj,pFirst),HX_HCSTRING("pFirst","\xa0","\x51","\xc3","\x5b")},
	{hx::fsObject /*::kha::audio2::ogg::vorbis::data::ProbedPage*/ ,(int)offsetof(VorbisDecodeState_obj,pLast),HX_HCSTRING("pLast","\xe6","\x2e","\x67","\xaf")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,validBits),HX_HCSTRING("validBits","\x22","\xca","\xec","\x2d")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,inputPosition),HX_HCSTRING("inputPosition","\xd3","\x3a","\x9c","\x59")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(VorbisDecodeState_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,discardSamplesDeferred),HX_HCSTRING("discardSamplesDeferred","\xca","\x30","\xf6","\x72")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(VorbisDecodeState_obj,segments),HX_HCSTRING("segments","\x60","\xed","\x26","\x4e")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,bytesInSeg),HX_HCSTRING("bytesInSeg","\x45","\xb8","\xaf","\xef")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecodeState_obj,channelBuffers),HX_HCSTRING("channelBuffers","\xf0","\xb8","\xbc","\x61")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,channelBufferStart),HX_HCSTRING("channelBufferStart","\x3f","\x1f","\xc8","\xba")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,channelBufferEnd),HX_HCSTRING("channelBufferEnd","\x78","\x4d","\xee","\xd4")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,currentSample),HX_HCSTRING("currentSample","\x43","\xe1","\xa6","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecodeState_obj,previousWindow),HX_HCSTRING("previousWindow","\x87","\x47","\x23","\x41")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,previousLength),HX_HCSTRING("previousLength","\x7d","\x48","\x9e","\x8d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecodeState_obj,finalY),HX_HCSTRING("finalY","\x23","\x28","\x79","\x86")},
	{hx::fsBool,(int)offsetof(VorbisDecodeState_obj,firstDecode),HX_HCSTRING("firstDecode","\x7e","\x8d","\x8f","\x49")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,nextSeg),HX_HCSTRING("nextSeg","\x62","\x28","\x46","\xa5")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,acc),HX_HCSTRING("acc","\x41","\xf1","\x49","\x00")},
	{hx::fsBool,(int)offsetof(VorbisDecodeState_obj,lastSeg),HX_HCSTRING("lastSeg","\xdf","\xe2","\xac","\xd7")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,lastSegWhich),HX_HCSTRING("lastSegWhich","\x7e","\x00","\xe0","\x06")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,endSegWithKnownLoc),HX_HCSTRING("endSegWithKnownLoc","\x7d","\x01","\xc0","\x57")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,knownLocForPacket),HX_HCSTRING("knownLocForPacket","\xf4","\xab","\xab","\x3c")},
	{hx::fsObject /*::kha::audio2::ogg::vorbis::data::ReaderError*/ ,(int)offsetof(VorbisDecodeState_obj,error),HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,currentLoc),HX_HCSTRING("currentLoc","\xc7","\x19","\x2d","\xc7")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,currentLocValid),HX_HCSTRING("currentLocValid","\xb5","\xf9","\xa2","\x57")},
	{hx::fsInt,(int)offsetof(VorbisDecodeState_obj,firstAudioPageOffset),HX_HCSTRING("firstAudioPageOffset","\x68","\x75","\x67","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &VorbisDecodeState_obj::INVALID_BITS,HX_HCSTRING("INVALID_BITS","\xae","\x04","\x71","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("page","\x4f","\xda","\x51","\x4a"),
	HX_HCSTRING("eof","\xbc","\x04","\x4d","\x00"),
	HX_HCSTRING("pFirst","\xa0","\x51","\xc3","\x5b"),
	HX_HCSTRING("pLast","\xe6","\x2e","\x67","\xaf"),
	HX_HCSTRING("validBits","\x22","\xca","\xec","\x2d"),
	HX_HCSTRING("inputPosition","\xd3","\x3a","\x9c","\x59"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("discardSamplesDeferred","\xca","\x30","\xf6","\x72"),
	HX_HCSTRING("segments","\x60","\xed","\x26","\x4e"),
	HX_HCSTRING("bytesInSeg","\x45","\xb8","\xaf","\xef"),
	HX_HCSTRING("channelBuffers","\xf0","\xb8","\xbc","\x61"),
	HX_HCSTRING("channelBufferStart","\x3f","\x1f","\xc8","\xba"),
	HX_HCSTRING("channelBufferEnd","\x78","\x4d","\xee","\xd4"),
	HX_HCSTRING("currentSample","\x43","\xe1","\xa6","\x00"),
	HX_HCSTRING("previousWindow","\x87","\x47","\x23","\x41"),
	HX_HCSTRING("previousLength","\x7d","\x48","\x9e","\x8d"),
	HX_HCSTRING("finalY","\x23","\x28","\x79","\x86"),
	HX_HCSTRING("firstDecode","\x7e","\x8d","\x8f","\x49"),
	HX_HCSTRING("nextSeg","\x62","\x28","\x46","\xa5"),
	HX_HCSTRING("acc","\x41","\xf1","\x49","\x00"),
	HX_HCSTRING("lastSeg","\xdf","\xe2","\xac","\xd7"),
	HX_HCSTRING("lastSegWhich","\x7e","\x00","\xe0","\x06"),
	HX_HCSTRING("endSegWithKnownLoc","\x7d","\x01","\xc0","\x57"),
	HX_HCSTRING("knownLocForPacket","\xf4","\xab","\xab","\x3c"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("currentLoc","\xc7","\x19","\x2d","\xc7"),
	HX_HCSTRING("currentLocValid","\xb5","\xf9","\xa2","\x57"),
	HX_HCSTRING("firstAudioPageOffset","\x68","\x75","\x67","\x0d"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("startPacket","\x8a","\xb5","\x7e","\x5b"),
	HX_HCSTRING("maybeStartPacket","\xc2","\x0a","\xad","\x2a"),
	HX_HCSTRING("readBits","\x7c","\xd5","\x0e","\x69"),
	HX_HCSTRING("readPacketRaw","\x0a","\x15","\x8a","\xda"),
	HX_HCSTRING("readPacket","\x7e","\x3b","\x14","\xdd"),
	HX_HCSTRING("flushPacket","\x6c","\x99","\xec","\x8e"),
	HX_HCSTRING("vorbisValidate","\x09","\x9b","\x51","\x16"),
	HX_HCSTRING("firstPageValidate","\x55","\x1a","\xec","\x1c"),
	HX_HCSTRING("startFirstDecode","\x3c","\x28","\x8b","\xc8"),
	HX_HCSTRING("capturePattern","\x6a","\x1a","\xb8","\x20"),
	HX_HCSTRING("skip","\x7f","\x16","\x55","\x4c"),
	HX_HCSTRING("prepHuffman","\xc0","\x3f","\x31","\xba"),
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	HX_HCSTRING("decodeRaw","\x5a","\x21","\xb1","\x44"),
	HX_HCSTRING("isLastByte","\x88","\x4a","\x1b","\x4f"),
	HX_HCSTRING("finishDecodePacket","\x49","\x7c","\xb3","\x7f"),
	HX_HCSTRING("readInt32","\x18","\xe0","\x07","\x8f"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	HX_HCSTRING("getSampleNumber","\x49","\x2c","\xd1","\x08"),
	HX_HCSTRING("forcePageResync","\x08","\x51","\x06","\xc7"),
	HX_HCSTRING("setInputOffset","\xbb","\xae","\x31","\xfd"),
	HX_HCSTRING("findPage","\x28","\xe7","\xe5","\x9c"),
	HX_HCSTRING("analyzePage","\xbb","\xd7","\xd9","\x4e"),
	HX_HCSTRING("decodeScalarRaw","\x0e","\xd7","\xcb","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VorbisDecodeState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VorbisDecodeState_obj::INVALID_BITS,"INVALID_BITS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VorbisDecodeState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VorbisDecodeState_obj::INVALID_BITS,"INVALID_BITS");
};

#endif

hx::Class VorbisDecodeState_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("INVALID_BITS","\xae","\x04","\x71","\x11"),
	::String(null()) };

void VorbisDecodeState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &VorbisDecodeState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VorbisDecodeState_obj >;
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

void VorbisDecodeState_obj::__boot()
{
	INVALID_BITS= (int)-1;
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
