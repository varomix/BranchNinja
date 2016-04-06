#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Codebook
#include <kha/audio2/ogg/vorbis/data/Codebook.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Comment
#include <kha/audio2/ogg/vorbis/data/Comment.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor
#include <kha/audio2/ogg/vorbis/data/Floor.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Header
#include <kha/audio2/ogg/vorbis/data/Header.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mapping
#include <kha/audio2/ogg/vorbis/data/Mapping.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mode
#include <kha/audio2/ogg/vorbis/data/Mode.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Page
#include <kha/audio2/ogg/vorbis/data/Page.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError
#include <kha/audio2/ogg/vorbis/data/ReaderError.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#include <kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Residue
#include <kha/audio2/ogg/vorbis/data/Residue.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

Void Header_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Header","new",0x66f8bbcf,"kha.audio2.ogg.vorbis.data.Header.new","kha/audio2/ogg/vorbis/data/Header.hx",37,0x4e0c5e60)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Header_obj::~Header_obj() { }

Dynamic Header_obj::__CreateEmpty() { return  new Header_obj; }
hx::ObjectPtr< Header_obj > Header_obj::__new()
{  hx::ObjectPtr< Header_obj > _result_ = new Header_obj();
	_result_->__construct();
	return _result_;}

Dynamic Header_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Header_obj > _result_ = new Header_obj();
	_result_->__construct();
	return _result_;}

int Header_obj::PACKET_ID;

int Header_obj::PACKET_COMMENT;

int Header_obj::PACKET_SETUP;

::kha::audio2::ogg::vorbis::data::Header Header_obj::read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Header","read",0xb5506107,"kha.audio2.ogg.vorbis.data.Header.read","kha/audio2/ogg/vorbis/data/Header.hx",41,0x4e0c5e60)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_LINE(42)
	::kha::audio2::ogg::vorbis::data::Page page = decodeState->page;		HX_STACK_VAR(page,"page");
	HX_STACK_LINE(43)
	::kha::audio2::ogg::vorbis::VorbisDecodeState tmp = decodeState;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	page->start(tmp);
	HX_STACK_LINE(45)
	int tmp1 = (int(page->flag) & int((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	if ((tmp2)){
		HX_STACK_LINE(46)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),46,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp4 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_FIRST_PAGE,HX_HCSTRING("not firstPage","\x52","\x61","\xee","\xe9"),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(48)
	int tmp3 = (int(page->flag) & int((int)4));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	if ((tmp4)){
		HX_STACK_LINE(49)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),49,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp6 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_FIRST_PAGE,HX_HCSTRING("lastPage","\xc5","\xf3","\x9a","\xdd"),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(51)
	int tmp5 = (int(page->flag) & int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	if ((tmp6)){
		HX_STACK_LINE(52)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),52,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp8 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_FIRST_PAGE,HX_HCSTRING("continuedPacket","\x85","\x39","\xee","\x94"),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		HX_STACK_DO_THROW(tmp8);
	}
	HX_STACK_LINE(55)
	decodeState->firstPageValidate();
	HX_STACK_LINE(56)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		hx::AddEq(decodeState->inputPosition,(int)1);
		HX_STACK_LINE(56)
		tmp7 = decodeState->input->readByte();
	}
	HX_STACK_LINE(56)
	bool tmp8 = (tmp7 != (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(56)
	if ((tmp8)){
		HX_STACK_LINE(57)
		Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),57,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp10 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_FIRST_PAGE,HX_HCSTRING("decodeState head","\x5d","\x8c","\x63","\x29"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		HX_STACK_DO_THROW(tmp10);
	}
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc((int)6);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		::haxe::io::Bytes header = tmp9;		HX_STACK_VAR(header,"header");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			while((true)){
				HX_STACK_LINE(61)
				bool tmp10 = (_g < (int)6);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(61)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(61)
				if ((tmp11)){
					HX_STACK_LINE(61)
					break;
				}
				HX_STACK_LINE(61)
				int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(61)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(61)
					{
						HX_STACK_LINE(61)
						bool tmp14 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(61)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(61)
						if ((tmp14)){
							HX_STACK_LINE(61)
							bool tmp16 = decodeState->lastSeg;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(61)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(61)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(61)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(61)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(61)
							if ((tmp20)){
								HX_STACK_LINE(61)
								int tmp21 = decodeState->next();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(61)
								int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(61)
								int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(61)
								tmp15 = (tmp23 == (int)0);
							}
							else{
								HX_STACK_LINE(61)
								tmp15 = true;
							}
						}
						else{
							HX_STACK_LINE(61)
							tmp15 = false;
						}
						HX_STACK_LINE(61)
						int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(61)
						if ((tmp15)){
							HX_STACK_LINE(61)
							tmp16 = (int)-1;
						}
						else{
							HX_STACK_LINE(61)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(61)
							{
								HX_STACK_LINE(61)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(61)
								tmp16 = decodeState->input->readByte();
							}
						}
						HX_STACK_LINE(61)
						int x = tmp16;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(61)
						decodeState->validBits = (int)0;
						HX_STACK_LINE(61)
						tmp13 = x;
					}
					HX_STACK_LINE(61)
					int v = tmp13;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(61)
					int tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(61)
					header->b[i] = tmp14;
				}
			}
		}
		HX_STACK_LINE(61)
		::String tmp10 = header->toString();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		bool tmp11 = (tmp10 != HX_HCSTRING("vorbis","\x53","\x03","\x3c","\x63"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		if ((tmp11)){
			HX_STACK_LINE(61)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),300,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("vorbisValidate","\x09","\x9b","\x51","\x16"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp13 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,HX_HCSTRING("vorbis header","\xba","\x3e","\xa4","\x0e"),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			HX_STACK_DO_THROW(tmp13);
		}
	}
	HX_STACK_LINE(64)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		hx::AddEq(decodeState->inputPosition,(int)4);
		HX_STACK_LINE(64)
		tmp9 = decodeState->input->readInt32();
	}
	HX_STACK_LINE(64)
	int version = tmp9;		HX_STACK_VAR(version,"version");
	HX_STACK_LINE(65)
	bool tmp10 = (version != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(65)
	if ((tmp10)){
		HX_STACK_LINE(66)
		::String tmp11 = (HX_HCSTRING("vorbis version : ","\x5b","\xe2","\x58","\x09") + version);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(66)
		Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),66,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(66)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp13 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_FIRST_PAGE,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(66)
		HX_STACK_DO_THROW(tmp13);
	}
	HX_STACK_LINE(69)
	::kha::audio2::ogg::vorbis::data::Header header = ::kha::audio2::ogg::vorbis::data::Header_obj::__new();		HX_STACK_VAR(header,"header");
	HX_STACK_LINE(71)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		hx::AddEq(decodeState->inputPosition,(int)1);
		HX_STACK_LINE(71)
		tmp11 = decodeState->input->readByte();
	}
	HX_STACK_LINE(71)
	header->channel = tmp11;
	HX_STACK_LINE(72)
	bool tmp12 = (header->channel == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(72)
	if ((tmp12)){
		HX_STACK_LINE(73)
		Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),73,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(73)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp14 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_FIRST_PAGE,HX_HCSTRING("no channel","\xe4","\x4d","\xcc","\x09"),tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(73)
		HX_STACK_DO_THROW(tmp14);
	}
	else{
		HX_STACK_LINE(74)
		bool tmp13 = (header->channel > (int)16);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(74)
		if ((tmp13)){
			HX_STACK_LINE(75)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),75,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(75)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp15 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::TOO_MANY_CHANNELS,HX_HCSTRING("too many channels","\x65","\x2f","\x80","\x4b"),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(75)
			HX_STACK_DO_THROW(tmp15);
		}
	}
	HX_STACK_LINE(78)
	int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		hx::AddEq(decodeState->inputPosition,(int)4);
		HX_STACK_LINE(78)
		tmp13 = decodeState->input->readInt32();
	}
	HX_STACK_LINE(78)
	header->sampleRate = tmp13;
	HX_STACK_LINE(79)
	bool tmp14 = (header->sampleRate == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(79)
	if ((tmp14)){
		HX_STACK_LINE(80)
		Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),80,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(80)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp16 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_FIRST_PAGE,HX_HCSTRING("no sampling rate","\x9a","\x91","\xba","\xfc"),tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(80)
		HX_STACK_DO_THROW(tmp16);
	}
	HX_STACK_LINE(83)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		hx::AddEq(decodeState->inputPosition,(int)4);
		HX_STACK_LINE(83)
		tmp15 = decodeState->input->readInt32();
	}
	HX_STACK_LINE(83)
	header->maximumBitRate = tmp15;
	HX_STACK_LINE(84)
	int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		hx::AddEq(decodeState->inputPosition,(int)4);
		HX_STACK_LINE(84)
		tmp16 = decodeState->input->readInt32();
	}
	HX_STACK_LINE(84)
	header->nominalBitRate = tmp16;
	HX_STACK_LINE(85)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		hx::AddEq(decodeState->inputPosition,(int)4);
		HX_STACK_LINE(85)
		tmp17 = decodeState->input->readInt32();
	}
	HX_STACK_LINE(85)
	header->minimumBitRate = tmp17;
	HX_STACK_LINE(87)
	int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		hx::AddEq(decodeState->inputPosition,(int)1);
		HX_STACK_LINE(87)
		tmp18 = decodeState->input->readByte();
	}
	HX_STACK_LINE(87)
	int x = tmp18;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(88)
	int tmp19 = (int(x) & int((int)15));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(88)
	int log0 = tmp19;		HX_STACK_VAR(log0,"log0");
	HX_STACK_LINE(89)
	int tmp20 = (int(x) >> int((int)4));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(89)
	int log1 = tmp20;		HX_STACK_VAR(log1,"log1");
	HX_STACK_LINE(90)
	int tmp21 = (int((int)1) << int(log0));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(90)
	header->blocksize0 = tmp21;
	HX_STACK_LINE(91)
	int tmp22 = (int((int)1) << int(log1));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(91)
	header->blocksize1 = tmp22;
	HX_STACK_LINE(92)
	bool tmp23 = (log0 < (int)6);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(92)
	bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(92)
	bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(92)
	if ((tmp24)){
		HX_STACK_LINE(92)
		tmp25 = (log0 > (int)13);
	}
	else{
		HX_STACK_LINE(92)
		tmp25 = true;
	}
	HX_STACK_LINE(92)
	if ((tmp25)){
		HX_STACK_LINE(93)
		Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),93,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(93)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp27 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(93)
		HX_STACK_DO_THROW(tmp27);
	}
	HX_STACK_LINE(95)
	bool tmp26 = (log1 < (int)6);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(95)
	bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(95)
	bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(95)
	if ((tmp27)){
		HX_STACK_LINE(95)
		tmp28 = (log1 > (int)13);
	}
	else{
		HX_STACK_LINE(95)
		tmp28 = true;
	}
	HX_STACK_LINE(95)
	if ((tmp28)){
		HX_STACK_LINE(96)
		Dynamic tmp29 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),96,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(96)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp30 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(96)
		HX_STACK_DO_THROW(tmp30);
	}
	HX_STACK_LINE(98)
	bool tmp29 = (log0 > log1);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(98)
	if ((tmp29)){
		HX_STACK_LINE(99)
		Dynamic tmp30 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),99,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(99)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp31 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(99)
		HX_STACK_DO_THROW(tmp31);
	}
	HX_STACK_LINE(103)
	int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		hx::AddEq(decodeState->inputPosition,(int)1);
		HX_STACK_LINE(103)
		tmp30 = decodeState->input->readByte();
	}
	HX_STACK_LINE(103)
	int x1 = tmp30;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(104)
	int tmp31 = (int(x1) & int((int)1));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(104)
	bool tmp32 = (tmp31 == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(104)
	if ((tmp32)){
		HX_STACK_LINE(105)
		Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),105,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(105)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp34 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_FIRST_PAGE,null(),tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(105)
		HX_STACK_DO_THROW(tmp34);
	}
	HX_STACK_LINE(109)
	::kha::audio2::ogg::vorbis::VorbisDecodeState tmp33 = decodeState;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(109)
	decodeState->page->start(tmp33);
	HX_STACK_LINE(110)
	decodeState->startPacket();
	HX_STACK_LINE(112)
	int len = (int)0;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(113)
	::haxe::io::BytesOutput output = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(114)
	while((true)){
		HX_STACK_LINE(114)
		int tmp34 = decodeState->next();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(114)
		int tmp35 = len = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(114)
		bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(114)
		bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(114)
		if ((tmp37)){
			HX_STACK_LINE(114)
			break;
		}
		HX_STACK_LINE(115)
		::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			hx::AddEq(decodeState->inputPosition,len);
			HX_STACK_LINE(115)
			int tmp39 = len;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(115)
			tmp38 = decodeState->input->read(tmp39);
		}
		HX_STACK_LINE(115)
		output->write(tmp38);
		HX_STACK_LINE(116)
		decodeState->bytesInSeg = (int)0;
	}
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(120)
		::haxe::io::Bytes tmp34 = output->getBytes();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(120)
		::haxe::io::BytesInput tmp35 = ::haxe::io::BytesInput_obj::__new(tmp34,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(120)
		::haxe::io::BytesInput packetInput = tmp35;		HX_STACK_VAR(packetInput,"packetInput");
		HX_STACK_LINE(121)
		packetInput->readByte();
		HX_STACK_LINE(122)
		packetInput->read((int)6);
		HX_STACK_LINE(124)
		int tmp36 = packetInput->readInt32();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(124)
		int vendorLength = tmp36;		HX_STACK_VAR(vendorLength,"vendorLength");
		HX_STACK_LINE(125)
		int tmp37 = vendorLength;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(125)
		::String tmp38 = packetInput->readString(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(125)
		header->vendor = tmp38;
		HX_STACK_LINE(126)
		::kha::audio2::ogg::vorbis::data::Comment tmp39 = ::kha::audio2::ogg::vorbis::data::Comment_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(126)
		header->comment = tmp39;
		HX_STACK_LINE(128)
		int tmp40 = packetInput->readInt32();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(128)
		int commentCount = tmp40;		HX_STACK_VAR(commentCount,"commentCount");
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			while((true)){
				HX_STACK_LINE(130)
				bool tmp41 = (_g < commentCount);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(130)
				bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(130)
				if ((tmp42)){
					HX_STACK_LINE(130)
					break;
				}
				HX_STACK_LINE(130)
				int tmp43 = (_g)++;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(130)
				int i = tmp43;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(131)
				int tmp44 = packetInput->readInt32();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(131)
				int n = tmp44;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(132)
				int tmp45 = n;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(132)
				::String tmp46 = packetInput->readString(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(132)
				::String str = tmp46;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(133)
				int tmp47 = str.indexOf(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(133)
				int splitter = tmp47;		HX_STACK_VAR(splitter,"splitter");
				HX_STACK_LINE(134)
				bool tmp48 = (splitter != (int)-1);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(134)
				if ((tmp48)){
					HX_STACK_LINE(135)
					int tmp49 = splitter;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(135)
					::String tmp50 = str.substring((int)0,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(135)
					int tmp51 = (splitter + (int)1);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(135)
					::String tmp52 = str.substring(tmp51,null());		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(135)
					header->comment->add(tmp50,tmp52);
				}
			}
		}
		HX_STACK_LINE(139)
		int tmp41 = packetInput->readByte();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(139)
		int x2 = tmp41;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(140)
		int tmp42 = (int(x2) & int((int)1));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(140)
		bool tmp43 = (tmp42 == (int)0);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(140)
		if ((tmp43)){
			HX_STACK_LINE(141)
			Dynamic tmp44 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),141,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(141)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp45 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(141)
			HX_STACK_DO_THROW(tmp45);
		}
	}
	HX_STACK_LINE(146)
	decodeState->startPacket();
	HX_STACK_LINE(148)
	int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		bool tmp35 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(148)
		bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(148)
		if ((tmp35)){
			HX_STACK_LINE(148)
			bool tmp37 = decodeState->lastSeg;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(148)
			bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(148)
			bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(148)
			bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(148)
			bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(148)
			if ((tmp41)){
				HX_STACK_LINE(148)
				int tmp42 = decodeState->next();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(148)
				int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(148)
				int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(148)
				tmp36 = (tmp44 == (int)0);
			}
			else{
				HX_STACK_LINE(148)
				tmp36 = true;
			}
		}
		else{
			HX_STACK_LINE(148)
			tmp36 = false;
		}
		HX_STACK_LINE(148)
		int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(148)
		if ((tmp36)){
			HX_STACK_LINE(148)
			tmp37 = (int)-1;
		}
		else{
			HX_STACK_LINE(148)
			(decodeState->bytesInSeg)--;
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				hx::AddEq(decodeState->inputPosition,(int)1);
				HX_STACK_LINE(148)
				tmp37 = decodeState->input->readByte();
			}
		}
		HX_STACK_LINE(148)
		int x2 = tmp37;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(148)
		decodeState->validBits = (int)0;
		HX_STACK_LINE(148)
		tmp34 = x2;
	}
	HX_STACK_LINE(148)
	bool tmp35 = (tmp34 != (int)5);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(148)
	if ((tmp35)){
		HX_STACK_LINE(149)
		Dynamic tmp36 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),149,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(149)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp37 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,HX_HCSTRING("setup packet","\xcb","\xfa","\x2a","\x07"),tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(149)
		HX_STACK_DO_THROW(tmp37);
	}
	HX_STACK_LINE(152)
	{
		HX_STACK_LINE(152)
		::haxe::io::Bytes tmp36 = ::haxe::io::Bytes_obj::alloc((int)6);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(152)
		::haxe::io::Bytes header1 = tmp36;		HX_STACK_VAR(header1,"header1");
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(152)
			while((true)){
				HX_STACK_LINE(152)
				bool tmp37 = (_g < (int)6);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(152)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(152)
				if ((tmp38)){
					HX_STACK_LINE(152)
					break;
				}
				HX_STACK_LINE(152)
				int tmp39 = (_g)++;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(152)
				int i = tmp39;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(152)
					{
						HX_STACK_LINE(152)
						bool tmp41 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(152)
						bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(152)
						if ((tmp41)){
							HX_STACK_LINE(152)
							bool tmp43 = decodeState->lastSeg;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(152)
							bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(152)
							bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(152)
							bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(152)
							bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(152)
							if ((tmp47)){
								HX_STACK_LINE(152)
								int tmp48 = decodeState->next();		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(152)
								int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(152)
								int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(152)
								tmp42 = (tmp50 == (int)0);
							}
							else{
								HX_STACK_LINE(152)
								tmp42 = true;
							}
						}
						else{
							HX_STACK_LINE(152)
							tmp42 = false;
						}
						HX_STACK_LINE(152)
						int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(152)
						if ((tmp42)){
							HX_STACK_LINE(152)
							tmp43 = (int)-1;
						}
						else{
							HX_STACK_LINE(152)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(152)
							{
								HX_STACK_LINE(152)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(152)
								tmp43 = decodeState->input->readByte();
							}
						}
						HX_STACK_LINE(152)
						int x2 = tmp43;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(152)
						decodeState->validBits = (int)0;
						HX_STACK_LINE(152)
						tmp40 = x2;
					}
					HX_STACK_LINE(152)
					int v = tmp40;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(152)
					int tmp41 = v;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(152)
					header1->b[i] = tmp41;
				}
			}
		}
		HX_STACK_LINE(152)
		::String tmp37 = header1->toString();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(152)
		bool tmp38 = (tmp37 != HX_HCSTRING("vorbis","\x53","\x03","\x3c","\x63"));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(152)
		if ((tmp38)){
			HX_STACK_LINE(152)
			Dynamic tmp39 = hx::SourceInfo(HX_HCSTRING("VorbisDecodeState.hx","\x6e","\x33","\xf8","\x9f"),300,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecodeState","\x3c","\x6b","\x03","\x19"),HX_HCSTRING("vorbisValidate","\x09","\x9b","\x51","\x16"));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(152)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp40 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,HX_HCSTRING("vorbis header","\xba","\x3e","\xa4","\x0e"),tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(152)
			HX_STACK_DO_THROW(tmp40);
		}
	}
	HX_STACK_LINE(155)
	bool tmp36 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(155)
	int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(155)
	if ((tmp36)){
		HX_STACK_LINE(155)
		tmp37 = (int)0;
	}
	else{
		HX_STACK_LINE(155)
		bool tmp38 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(155)
		if ((tmp38)){
			HX_STACK_LINE(155)
			bool tmp39 = false;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(155)
			if ((tmp39)){
				HX_STACK_LINE(155)
				int tmp40 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(155)
				int tmp41 = (int)-16;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(155)
				int tmp42 = decodeState->readBits(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(155)
				int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(155)
				tmp37 = (tmp40 + tmp43);
			}
			else{
				HX_STACK_LINE(155)
				bool tmp40 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(155)
				if ((tmp40)){
					HX_STACK_LINE(155)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(155)
				while((true)){
					HX_STACK_LINE(155)
					bool tmp41 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(155)
					bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(155)
					if ((tmp41)){
						HX_STACK_LINE(155)
						bool tmp43 = decodeState->lastSeg;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(155)
						bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(155)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(155)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(155)
						bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(155)
						if ((tmp47)){
							HX_STACK_LINE(155)
							int tmp48 = decodeState->next();		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(155)
							int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(155)
							int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(155)
							tmp42 = (tmp50 == (int)0);
						}
						else{
							HX_STACK_LINE(155)
							tmp42 = true;
						}
					}
					else{
						HX_STACK_LINE(155)
						tmp42 = false;
					}
					HX_STACK_LINE(155)
					if ((tmp42)){
						HX_STACK_LINE(155)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(155)
						break;
					}
					else{
						HX_STACK_LINE(155)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(155)
						int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(155)
							{
								HX_STACK_LINE(155)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(155)
								tmp44 = decodeState->input->readByte();
							}
							HX_STACK_LINE(155)
							int tmp45 = decodeState->validBits;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(155)
							int tmp46 = (int(tmp44) << int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(155)
							int b = tmp46;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(155)
							tmp43 = (decodeState->acc + b);
						}
						HX_STACK_LINE(155)
						decodeState->acc = tmp43;
						HX_STACK_LINE(155)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(155)
					bool tmp43 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(155)
					bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(155)
					if ((tmp44)){
						HX_STACK_LINE(155)
						break;
					}
				}
				HX_STACK_LINE(155)
				bool tmp41 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(155)
				if ((tmp41)){
					HX_STACK_LINE(155)
					tmp37 = (int)0;
				}
				else{
					HX_STACK_LINE(155)
					int tmp42 = decodeState->acc;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(155)
					int tmp43 = (int)256;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(155)
					int tmp44 = (tmp43 - (int)1);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(155)
					int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(155)
					int tmp46 = (int(tmp42) & int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(155)
					int z = tmp46;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(155)
					int tmp47 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(155)
					decodeState->acc = tmp47;
					HX_STACK_LINE(155)
					hx::SubEq(decodeState->validBits,(int)8);
					HX_STACK_LINE(155)
					tmp37 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(155)
			int tmp39 = decodeState->acc;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(155)
			int tmp40 = (int)256;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(155)
			int tmp41 = (tmp40 - (int)1);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(155)
			int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(155)
			int tmp43 = (int(tmp39) & int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(155)
			int z = tmp43;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(155)
			int tmp44 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(155)
			decodeState->acc = tmp44;
			HX_STACK_LINE(155)
			hx::SubEq(decodeState->validBits,(int)8);
			HX_STACK_LINE(155)
			tmp37 = z;
		}
	}
	HX_STACK_LINE(155)
	int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(155)
	int codebookCount = tmp38;		HX_STACK_VAR(codebookCount,"codebookCount");
	HX_STACK_LINE(156)
	Array< ::Dynamic > tmp39;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(156)
		Array< ::Dynamic > tmp40 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(156)
		this1 = tmp40;
		HX_STACK_LINE(156)
		int tmp41 = codebookCount;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(156)
		this1->__SetSizeExact(tmp41);
		HX_STACK_LINE(156)
		tmp39 = this1;
	}
	HX_STACK_LINE(156)
	header->codebooks = tmp39;
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		while((true)){
			HX_STACK_LINE(157)
			bool tmp40 = (_g < codebookCount);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(157)
			bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(157)
			if ((tmp41)){
				HX_STACK_LINE(157)
				break;
			}
			HX_STACK_LINE(157)
			int tmp42 = (_g)++;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(157)
			int i = tmp42;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				::kha::audio2::ogg::vorbis::VorbisDecodeState tmp43 = decodeState;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(158)
				::kha::audio2::ogg::vorbis::data::Codebook tmp44 = ::kha::audio2::ogg::vorbis::data::Codebook_obj::read(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(158)
				::kha::audio2::ogg::vorbis::data::Codebook val = tmp44;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(158)
				int tmp45 = i;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(158)
				::kha::audio2::ogg::vorbis::data::Codebook tmp46 = val;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(158)
				::kha::audio2::ogg::vorbis::data::Codebook tmp47 = header->codebooks->__unsafe_set(tmp45,tmp46).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(158)
				tmp47;
			}
		}
	}
	HX_STACK_LINE(162)
	bool tmp40 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(162)
	int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(162)
	if ((tmp40)){
		HX_STACK_LINE(162)
		tmp41 = (int)0;
	}
	else{
		HX_STACK_LINE(162)
		bool tmp42 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(162)
		if ((tmp42)){
			HX_STACK_LINE(162)
			bool tmp43 = false;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(162)
			if ((tmp43)){
				HX_STACK_LINE(162)
				int tmp44 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(162)
				int tmp45 = (int)-18;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(162)
				int tmp46 = decodeState->readBits(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(162)
				int tmp47 = (int(tmp46) << int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(162)
				tmp41 = (tmp44 + tmp47);
			}
			else{
				HX_STACK_LINE(162)
				bool tmp44 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(162)
				if ((tmp44)){
					HX_STACK_LINE(162)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(162)
				while((true)){
					HX_STACK_LINE(162)
					bool tmp45 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(162)
					bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(162)
					if ((tmp45)){
						HX_STACK_LINE(162)
						bool tmp47 = decodeState->lastSeg;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(162)
						bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(162)
						bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(162)
						bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(162)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(162)
						if ((tmp51)){
							HX_STACK_LINE(162)
							int tmp52 = decodeState->next();		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(162)
							int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(162)
							int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(162)
							tmp46 = (tmp54 == (int)0);
						}
						else{
							HX_STACK_LINE(162)
							tmp46 = true;
						}
					}
					else{
						HX_STACK_LINE(162)
						tmp46 = false;
					}
					HX_STACK_LINE(162)
					if ((tmp46)){
						HX_STACK_LINE(162)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(162)
						break;
					}
					else{
						HX_STACK_LINE(162)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(162)
						int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(162)
						{
							HX_STACK_LINE(162)
							int tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(162)
							{
								HX_STACK_LINE(162)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(162)
								tmp48 = decodeState->input->readByte();
							}
							HX_STACK_LINE(162)
							int tmp49 = decodeState->validBits;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(162)
							int tmp50 = (int(tmp48) << int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(162)
							int b = tmp50;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(162)
							tmp47 = (decodeState->acc + b);
						}
						HX_STACK_LINE(162)
						decodeState->acc = tmp47;
						HX_STACK_LINE(162)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(162)
					bool tmp47 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(162)
					bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(162)
					if ((tmp48)){
						HX_STACK_LINE(162)
						break;
					}
				}
				HX_STACK_LINE(162)
				bool tmp45 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(162)
				if ((tmp45)){
					HX_STACK_LINE(162)
					tmp41 = (int)0;
				}
				else{
					HX_STACK_LINE(162)
					int tmp46 = decodeState->acc;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(162)
					int tmp47 = (int)64;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(162)
					int tmp48 = (tmp47 - (int)1);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(162)
					int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(162)
					int tmp50 = (int(tmp46) & int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(162)
					int z = tmp50;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(162)
					int tmp51 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(162)
					decodeState->acc = tmp51;
					HX_STACK_LINE(162)
					hx::SubEq(decodeState->validBits,(int)6);
					HX_STACK_LINE(162)
					tmp41 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(162)
			int tmp43 = decodeState->acc;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(162)
			int tmp44 = (int)64;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(162)
			int tmp45 = (tmp44 - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(162)
			int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(162)
			int tmp47 = (int(tmp43) & int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(162)
			int z = tmp47;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(162)
			int tmp48 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(162)
			decodeState->acc = tmp48;
			HX_STACK_LINE(162)
			hx::SubEq(decodeState->validBits,(int)6);
			HX_STACK_LINE(162)
			tmp41 = z;
		}
	}
	HX_STACK_LINE(162)
	int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(162)
	x1 = tmp42;
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		while((true)){
			HX_STACK_LINE(163)
			bool tmp43 = (_g < x1);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(163)
			bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(163)
			if ((tmp44)){
				HX_STACK_LINE(163)
				break;
			}
			HX_STACK_LINE(163)
			int tmp45 = (_g)++;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(163)
			int i = tmp45;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(164)
			bool tmp46 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(164)
			int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(164)
			if ((tmp46)){
				HX_STACK_LINE(164)
				tmp47 = (int)0;
			}
			else{
				HX_STACK_LINE(164)
				bool tmp48 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(164)
				if ((tmp48)){
					HX_STACK_LINE(164)
					bool tmp49 = false;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(164)
					if ((tmp49)){
						HX_STACK_LINE(164)
						int tmp50 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(164)
						int tmp51 = (int)-8;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(164)
						int tmp52 = decodeState->readBits(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(164)
						int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(164)
						tmp47 = (tmp50 + tmp53);
					}
					else{
						HX_STACK_LINE(164)
						bool tmp50 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(164)
						if ((tmp50)){
							HX_STACK_LINE(164)
							decodeState->acc = (int)0;
						}
						HX_STACK_LINE(164)
						while((true)){
							HX_STACK_LINE(164)
							bool tmp51 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(164)
							bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(164)
							if ((tmp51)){
								HX_STACK_LINE(164)
								bool tmp53 = decodeState->lastSeg;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(164)
								bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(164)
								bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(164)
								bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(164)
								bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(164)
								if ((tmp57)){
									HX_STACK_LINE(164)
									int tmp58 = decodeState->next();		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(164)
									int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(164)
									int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(164)
									tmp52 = (tmp60 == (int)0);
								}
								else{
									HX_STACK_LINE(164)
									tmp52 = true;
								}
							}
							else{
								HX_STACK_LINE(164)
								tmp52 = false;
							}
							HX_STACK_LINE(164)
							if ((tmp52)){
								HX_STACK_LINE(164)
								decodeState->validBits = (int)-1;
								HX_STACK_LINE(164)
								break;
							}
							else{
								HX_STACK_LINE(164)
								(decodeState->bytesInSeg)--;
								HX_STACK_LINE(164)
								int tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(164)
								{
									HX_STACK_LINE(164)
									int tmp54;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(164)
									{
										HX_STACK_LINE(164)
										hx::AddEq(decodeState->inputPosition,(int)1);
										HX_STACK_LINE(164)
										tmp54 = decodeState->input->readByte();
									}
									HX_STACK_LINE(164)
									int tmp55 = decodeState->validBits;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(164)
									int tmp56 = (int(tmp54) << int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(164)
									int b = tmp56;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(164)
									tmp53 = (decodeState->acc + b);
								}
								HX_STACK_LINE(164)
								decodeState->acc = tmp53;
								HX_STACK_LINE(164)
								hx::AddEq(decodeState->validBits,(int)8);
							}
							HX_STACK_LINE(164)
							bool tmp53 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(164)
							bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(164)
							if ((tmp54)){
								HX_STACK_LINE(164)
								break;
							}
						}
						HX_STACK_LINE(164)
						bool tmp51 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(164)
						if ((tmp51)){
							HX_STACK_LINE(164)
							tmp47 = (int)0;
						}
						else{
							HX_STACK_LINE(164)
							int tmp52 = decodeState->acc;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(164)
							int tmp53 = (int)65536;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(164)
							int tmp54 = (tmp53 - (int)1);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(164)
							int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(164)
							int tmp56 = (int(tmp52) & int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(164)
							int z = tmp56;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(164)
							int tmp57 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(164)
							decodeState->acc = tmp57;
							HX_STACK_LINE(164)
							hx::SubEq(decodeState->validBits,(int)16);
							HX_STACK_LINE(164)
							tmp47 = z;
						}
					}
				}
				else{
					HX_STACK_LINE(164)
					int tmp49 = decodeState->acc;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(164)
					int tmp50 = (int)65536;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(164)
					int tmp51 = (tmp50 - (int)1);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(164)
					int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(164)
					int tmp53 = (int(tmp49) & int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(164)
					int z = tmp53;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(164)
					int tmp54 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(164)
					decodeState->acc = tmp54;
					HX_STACK_LINE(164)
					hx::SubEq(decodeState->validBits,(int)16);
					HX_STACK_LINE(164)
					tmp47 = z;
				}
			}
			HX_STACK_LINE(164)
			bool tmp48 = (tmp47 != (int)0);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(164)
			if ((tmp48)){
				HX_STACK_LINE(165)
				Dynamic tmp49 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),165,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(165)
				::kha::audio2::ogg::vorbis::data::ReaderError tmp50 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(165)
				HX_STACK_DO_THROW(tmp50);
			}
		}
	}
	HX_STACK_LINE(170)
	bool tmp43 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(170)
	int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(170)
	if ((tmp43)){
		HX_STACK_LINE(170)
		tmp44 = (int)0;
	}
	else{
		HX_STACK_LINE(170)
		bool tmp45 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(170)
		if ((tmp45)){
			HX_STACK_LINE(170)
			bool tmp46 = false;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(170)
			if ((tmp46)){
				HX_STACK_LINE(170)
				int tmp47 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(170)
				int tmp48 = (int)-18;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(170)
				int tmp49 = decodeState->readBits(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(170)
				int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(170)
				tmp44 = (tmp47 + tmp50);
			}
			else{
				HX_STACK_LINE(170)
				bool tmp47 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(170)
				if ((tmp47)){
					HX_STACK_LINE(170)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(170)
				while((true)){
					HX_STACK_LINE(170)
					bool tmp48 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(170)
					bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(170)
					if ((tmp48)){
						HX_STACK_LINE(170)
						bool tmp50 = decodeState->lastSeg;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(170)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(170)
						bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(170)
						bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(170)
						bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(170)
						if ((tmp54)){
							HX_STACK_LINE(170)
							int tmp55 = decodeState->next();		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(170)
							int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(170)
							int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(170)
							tmp49 = (tmp57 == (int)0);
						}
						else{
							HX_STACK_LINE(170)
							tmp49 = true;
						}
					}
					else{
						HX_STACK_LINE(170)
						tmp49 = false;
					}
					HX_STACK_LINE(170)
					if ((tmp49)){
						HX_STACK_LINE(170)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(170)
						break;
					}
					else{
						HX_STACK_LINE(170)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(170)
						int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							int tmp51;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(170)
								tmp51 = decodeState->input->readByte();
							}
							HX_STACK_LINE(170)
							int tmp52 = decodeState->validBits;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(170)
							int tmp53 = (int(tmp51) << int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(170)
							int b = tmp53;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(170)
							tmp50 = (decodeState->acc + b);
						}
						HX_STACK_LINE(170)
						decodeState->acc = tmp50;
						HX_STACK_LINE(170)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(170)
					bool tmp50 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(170)
					bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(170)
					if ((tmp51)){
						HX_STACK_LINE(170)
						break;
					}
				}
				HX_STACK_LINE(170)
				bool tmp48 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(170)
				if ((tmp48)){
					HX_STACK_LINE(170)
					tmp44 = (int)0;
				}
				else{
					HX_STACK_LINE(170)
					int tmp49 = decodeState->acc;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(170)
					int tmp50 = (int)64;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(170)
					int tmp51 = (tmp50 - (int)1);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(170)
					int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(170)
					int tmp53 = (int(tmp49) & int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(170)
					int z = tmp53;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(170)
					int tmp54 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(170)
					decodeState->acc = tmp54;
					HX_STACK_LINE(170)
					hx::SubEq(decodeState->validBits,(int)6);
					HX_STACK_LINE(170)
					tmp44 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(170)
			int tmp46 = decodeState->acc;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(170)
			int tmp47 = (int)64;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(170)
			int tmp48 = (tmp47 - (int)1);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(170)
			int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(170)
			int tmp50 = (int(tmp46) & int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(170)
			int z = tmp50;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(170)
			int tmp51 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(170)
			decodeState->acc = tmp51;
			HX_STACK_LINE(170)
			hx::SubEq(decodeState->validBits,(int)6);
			HX_STACK_LINE(170)
			tmp44 = z;
		}
	}
	HX_STACK_LINE(170)
	int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(170)
	int floorCount = tmp45;		HX_STACK_VAR(floorCount,"floorCount");
	HX_STACK_LINE(171)
	Array< ::Dynamic > tmp46;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(171)
	{
		HX_STACK_LINE(171)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(171)
		Array< ::Dynamic > tmp47 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(171)
		this1 = tmp47;
		HX_STACK_LINE(171)
		int tmp48 = floorCount;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(171)
		this1->__SetSizeExact(tmp48);
		HX_STACK_LINE(171)
		tmp46 = this1;
	}
	HX_STACK_LINE(171)
	header->floorConfig = tmp46;
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			bool tmp47 = (_g < floorCount);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(172)
			bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(172)
			if ((tmp48)){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(172)
			int tmp49 = (_g)++;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(172)
			int i = tmp49;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(173)
			{
				HX_STACK_LINE(173)
				::kha::audio2::ogg::vorbis::VorbisDecodeState tmp50 = decodeState;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(173)
				Array< ::Dynamic > tmp51 = header->codebooks;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(173)
				::kha::audio2::ogg::vorbis::data::Floor tmp52 = ::kha::audio2::ogg::vorbis::data::Floor_obj::read(tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(173)
				::kha::audio2::ogg::vorbis::data::Floor val = tmp52;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(173)
				int tmp53 = i;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(173)
				::kha::audio2::ogg::vorbis::data::Floor tmp54 = val;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(173)
				::kha::audio2::ogg::vorbis::data::Floor tmp55 = header->floorConfig->__unsafe_set(tmp53,tmp54).StaticCast< ::kha::audio2::ogg::vorbis::data::Floor >();		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(173)
				tmp55;
			}
		}
	}
	HX_STACK_LINE(177)
	bool tmp47 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(177)
	int tmp48;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(177)
	if ((tmp47)){
		HX_STACK_LINE(177)
		tmp48 = (int)0;
	}
	else{
		HX_STACK_LINE(177)
		bool tmp49 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(177)
		if ((tmp49)){
			HX_STACK_LINE(177)
			bool tmp50 = false;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(177)
			if ((tmp50)){
				HX_STACK_LINE(177)
				int tmp51 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(177)
				int tmp52 = (int)-18;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(177)
				int tmp53 = decodeState->readBits(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(177)
				int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(177)
				tmp48 = (tmp51 + tmp54);
			}
			else{
				HX_STACK_LINE(177)
				bool tmp51 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(177)
				if ((tmp51)){
					HX_STACK_LINE(177)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(177)
				while((true)){
					HX_STACK_LINE(177)
					bool tmp52 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(177)
					bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(177)
					if ((tmp52)){
						HX_STACK_LINE(177)
						bool tmp54 = decodeState->lastSeg;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(177)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(177)
						bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(177)
						bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(177)
						bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(177)
						if ((tmp58)){
							HX_STACK_LINE(177)
							int tmp59 = decodeState->next();		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(177)
							int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(177)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(177)
							tmp53 = (tmp61 == (int)0);
						}
						else{
							HX_STACK_LINE(177)
							tmp53 = true;
						}
					}
					else{
						HX_STACK_LINE(177)
						tmp53 = false;
					}
					HX_STACK_LINE(177)
					if ((tmp53)){
						HX_STACK_LINE(177)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(177)
						break;
					}
					else{
						HX_STACK_LINE(177)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(177)
						int tmp54;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(177)
							{
								HX_STACK_LINE(177)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(177)
								tmp55 = decodeState->input->readByte();
							}
							HX_STACK_LINE(177)
							int tmp56 = decodeState->validBits;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(177)
							int tmp57 = (int(tmp55) << int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(177)
							int b = tmp57;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(177)
							tmp54 = (decodeState->acc + b);
						}
						HX_STACK_LINE(177)
						decodeState->acc = tmp54;
						HX_STACK_LINE(177)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(177)
					bool tmp54 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(177)
					bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(177)
					if ((tmp55)){
						HX_STACK_LINE(177)
						break;
					}
				}
				HX_STACK_LINE(177)
				bool tmp52 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(177)
				if ((tmp52)){
					HX_STACK_LINE(177)
					tmp48 = (int)0;
				}
				else{
					HX_STACK_LINE(177)
					int tmp53 = decodeState->acc;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(177)
					int tmp54 = (int)64;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(177)
					int tmp55 = (tmp54 - (int)1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(177)
					int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(177)
					int tmp57 = (int(tmp53) & int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(177)
					int z = tmp57;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(177)
					int tmp58 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(177)
					decodeState->acc = tmp58;
					HX_STACK_LINE(177)
					hx::SubEq(decodeState->validBits,(int)6);
					HX_STACK_LINE(177)
					tmp48 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(177)
			int tmp50 = decodeState->acc;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(177)
			int tmp51 = (int)64;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(177)
			int tmp52 = (tmp51 - (int)1);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(177)
			int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(177)
			int tmp54 = (int(tmp50) & int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(177)
			int z = tmp54;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(177)
			int tmp55 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(177)
			decodeState->acc = tmp55;
			HX_STACK_LINE(177)
			hx::SubEq(decodeState->validBits,(int)6);
			HX_STACK_LINE(177)
			tmp48 = z;
		}
	}
	HX_STACK_LINE(177)
	int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(177)
	int residueCount = tmp49;		HX_STACK_VAR(residueCount,"residueCount");
	HX_STACK_LINE(178)
	Array< ::Dynamic > tmp50;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(178)
		Array< ::Dynamic > tmp51 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(178)
		this1 = tmp51;
		HX_STACK_LINE(178)
		int tmp52 = residueCount;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(178)
		this1->__SetSizeExact(tmp52);
		HX_STACK_LINE(178)
		tmp50 = this1;
	}
	HX_STACK_LINE(178)
	header->residueConfig = tmp50;
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(179)
		while((true)){
			HX_STACK_LINE(179)
			bool tmp51 = (_g < residueCount);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(179)
			bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(179)
			if ((tmp52)){
				HX_STACK_LINE(179)
				break;
			}
			HX_STACK_LINE(179)
			int tmp53 = (_g)++;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(179)
			int i = tmp53;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(180)
			{
				HX_STACK_LINE(180)
				::kha::audio2::ogg::vorbis::VorbisDecodeState tmp54 = decodeState;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(180)
				Array< ::Dynamic > tmp55 = header->codebooks;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(180)
				::kha::audio2::ogg::vorbis::data::Residue tmp56 = ::kha::audio2::ogg::vorbis::data::Residue_obj::read(tmp54,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(180)
				::kha::audio2::ogg::vorbis::data::Residue val = tmp56;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(180)
				int tmp57 = i;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(180)
				::kha::audio2::ogg::vorbis::data::Residue tmp58 = val;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(180)
				::kha::audio2::ogg::vorbis::data::Residue tmp59 = header->residueConfig->__unsafe_set(tmp57,tmp58).StaticCast< ::kha::audio2::ogg::vorbis::data::Residue >();		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(180)
				tmp59;
			}
		}
	}
	HX_STACK_LINE(184)
	bool tmp51 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(184)
	int tmp52;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(184)
	if ((tmp51)){
		HX_STACK_LINE(184)
		tmp52 = (int)0;
	}
	else{
		HX_STACK_LINE(184)
		bool tmp53 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(184)
		if ((tmp53)){
			HX_STACK_LINE(184)
			bool tmp54 = false;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(184)
			if ((tmp54)){
				HX_STACK_LINE(184)
				int tmp55 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(184)
				int tmp56 = (int)-18;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(184)
				int tmp57 = decodeState->readBits(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(184)
				int tmp58 = (int(tmp57) << int((int)24));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(184)
				tmp52 = (tmp55 + tmp58);
			}
			else{
				HX_STACK_LINE(184)
				bool tmp55 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(184)
				if ((tmp55)){
					HX_STACK_LINE(184)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(184)
				while((true)){
					HX_STACK_LINE(184)
					bool tmp56 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(184)
					bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(184)
					if ((tmp56)){
						HX_STACK_LINE(184)
						bool tmp58 = decodeState->lastSeg;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(184)
						bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(184)
						bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(184)
						bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(184)
						bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(184)
						if ((tmp62)){
							HX_STACK_LINE(184)
							int tmp63 = decodeState->next();		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(184)
							int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(184)
							int tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(184)
							tmp57 = (tmp65 == (int)0);
						}
						else{
							HX_STACK_LINE(184)
							tmp57 = true;
						}
					}
					else{
						HX_STACK_LINE(184)
						tmp57 = false;
					}
					HX_STACK_LINE(184)
					if ((tmp57)){
						HX_STACK_LINE(184)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(184)
						break;
					}
					else{
						HX_STACK_LINE(184)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(184)
						int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(184)
						{
							HX_STACK_LINE(184)
							int tmp59;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(184)
							{
								HX_STACK_LINE(184)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(184)
								tmp59 = decodeState->input->readByte();
							}
							HX_STACK_LINE(184)
							int tmp60 = decodeState->validBits;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(184)
							int tmp61 = (int(tmp59) << int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(184)
							int b = tmp61;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(184)
							tmp58 = (decodeState->acc + b);
						}
						HX_STACK_LINE(184)
						decodeState->acc = tmp58;
						HX_STACK_LINE(184)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(184)
					bool tmp58 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(184)
					bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(184)
					if ((tmp59)){
						HX_STACK_LINE(184)
						break;
					}
				}
				HX_STACK_LINE(184)
				bool tmp56 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(184)
				if ((tmp56)){
					HX_STACK_LINE(184)
					tmp52 = (int)0;
				}
				else{
					HX_STACK_LINE(184)
					int tmp57 = decodeState->acc;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(184)
					int tmp58 = (int)64;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(184)
					int tmp59 = (tmp58 - (int)1);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(184)
					int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(184)
					int tmp61 = (int(tmp57) & int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(184)
					int z = tmp61;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(184)
					int tmp62 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(184)
					decodeState->acc = tmp62;
					HX_STACK_LINE(184)
					hx::SubEq(decodeState->validBits,(int)6);
					HX_STACK_LINE(184)
					tmp52 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(184)
			int tmp54 = decodeState->acc;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(184)
			int tmp55 = (int)64;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(184)
			int tmp56 = (tmp55 - (int)1);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(184)
			int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(184)
			int tmp58 = (int(tmp54) & int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(184)
			int z = tmp58;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(184)
			int tmp59 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(184)
			decodeState->acc = tmp59;
			HX_STACK_LINE(184)
			hx::SubEq(decodeState->validBits,(int)6);
			HX_STACK_LINE(184)
			tmp52 = z;
		}
	}
	HX_STACK_LINE(184)
	int tmp53 = (tmp52 + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(184)
	int mappingCount = tmp53;		HX_STACK_VAR(mappingCount,"mappingCount");
	HX_STACK_LINE(185)
	Array< ::Dynamic > tmp54;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(185)
		Array< ::Dynamic > tmp55 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(185)
		this1 = tmp55;
		HX_STACK_LINE(185)
		int tmp56 = mappingCount;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(185)
		this1->__SetSizeExact(tmp56);
		HX_STACK_LINE(185)
		tmp54 = this1;
	}
	HX_STACK_LINE(185)
	header->mapping = tmp54;
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			bool tmp55 = (_g < mappingCount);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(186)
			bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(186)
			if ((tmp56)){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(186)
			int tmp57 = (_g)++;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(186)
			int i = tmp57;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(187)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp58 = decodeState;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(187)
			int tmp59 = header->channel;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(187)
			::kha::audio2::ogg::vorbis::data::Mapping tmp60 = ::kha::audio2::ogg::vorbis::data::Mapping_obj::read(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(187)
			::kha::audio2::ogg::vorbis::data::Mapping map = tmp60;		HX_STACK_VAR(map,"map");
			HX_STACK_LINE(188)
			int tmp61 = i;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(188)
			::kha::audio2::ogg::vorbis::data::Mapping tmp62 = map;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(188)
			::kha::audio2::ogg::vorbis::data::Mapping tmp63 = header->mapping->__unsafe_set(tmp61,tmp62).StaticCast< ::kha::audio2::ogg::vorbis::data::Mapping >();		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(188)
			tmp63;
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(189)
				int _g1 = map->submaps;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(189)
				while((true)){
					HX_STACK_LINE(189)
					bool tmp64 = (_g2 < _g1);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(189)
					bool tmp65 = !(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(189)
					if ((tmp65)){
						HX_STACK_LINE(189)
						break;
					}
					HX_STACK_LINE(189)
					int tmp66 = (_g2)++;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(189)
					int j = tmp66;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(190)
					int tmp67 = j;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(190)
					int tmp68 = map->submapFloor->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(190)
					int tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(190)
					int tmp70 = header->floorConfig->length;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(190)
					bool tmp71 = (tmp69 >= tmp70);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(190)
					if ((tmp71)){
						HX_STACK_LINE(191)
						Dynamic tmp72 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),191,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(191)
						::kha::audio2::ogg::vorbis::data::ReaderError tmp73 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(191)
						HX_STACK_DO_THROW(tmp73);
					}
					HX_STACK_LINE(193)
					int tmp72 = j;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(193)
					int tmp73 = map->submapResidue->__unsafe_get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(193)
					int tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(193)
					int tmp75 = header->residueConfig->length;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(193)
					bool tmp76 = (tmp74 >= tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(193)
					if ((tmp76)){
						HX_STACK_LINE(194)
						Dynamic tmp77 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),194,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(194)
						::kha::audio2::ogg::vorbis::data::ReaderError tmp78 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp77);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(194)
						HX_STACK_DO_THROW(tmp78);
					}
				}
			}
		}
	}
	HX_STACK_LINE(199)
	bool tmp55 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(199)
	int tmp56;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(199)
	if ((tmp55)){
		HX_STACK_LINE(199)
		tmp56 = (int)0;
	}
	else{
		HX_STACK_LINE(199)
		bool tmp57 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(199)
		if ((tmp57)){
			HX_STACK_LINE(199)
			bool tmp58 = false;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(199)
			if ((tmp58)){
				HX_STACK_LINE(199)
				int tmp59 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(199)
				int tmp60 = (int)-18;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(199)
				int tmp61 = decodeState->readBits(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(199)
				int tmp62 = (int(tmp61) << int((int)24));		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(199)
				tmp56 = (tmp59 + tmp62);
			}
			else{
				HX_STACK_LINE(199)
				bool tmp59 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(199)
				if ((tmp59)){
					HX_STACK_LINE(199)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(199)
				while((true)){
					HX_STACK_LINE(199)
					bool tmp60 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(199)
					bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(199)
					if ((tmp60)){
						HX_STACK_LINE(199)
						bool tmp62 = decodeState->lastSeg;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(199)
						bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(199)
						bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(199)
						bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(199)
						bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(199)
						if ((tmp66)){
							HX_STACK_LINE(199)
							int tmp67 = decodeState->next();		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(199)
							int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(199)
							int tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(199)
							tmp61 = (tmp69 == (int)0);
						}
						else{
							HX_STACK_LINE(199)
							tmp61 = true;
						}
					}
					else{
						HX_STACK_LINE(199)
						tmp61 = false;
					}
					HX_STACK_LINE(199)
					if ((tmp61)){
						HX_STACK_LINE(199)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(199)
						break;
					}
					else{
						HX_STACK_LINE(199)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(199)
						int tmp62;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(199)
						{
							HX_STACK_LINE(199)
							int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(199)
							{
								HX_STACK_LINE(199)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(199)
								tmp63 = decodeState->input->readByte();
							}
							HX_STACK_LINE(199)
							int tmp64 = decodeState->validBits;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(199)
							int tmp65 = (int(tmp63) << int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(199)
							int b = tmp65;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(199)
							tmp62 = (decodeState->acc + b);
						}
						HX_STACK_LINE(199)
						decodeState->acc = tmp62;
						HX_STACK_LINE(199)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(199)
					bool tmp62 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(199)
					bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(199)
					if ((tmp63)){
						HX_STACK_LINE(199)
						break;
					}
				}
				HX_STACK_LINE(199)
				bool tmp60 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(199)
				if ((tmp60)){
					HX_STACK_LINE(199)
					tmp56 = (int)0;
				}
				else{
					HX_STACK_LINE(199)
					int tmp61 = decodeState->acc;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(199)
					int tmp62 = (int)64;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(199)
					int tmp63 = (tmp62 - (int)1);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(199)
					int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(199)
					int tmp65 = (int(tmp61) & int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(199)
					int z = tmp65;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(199)
					int tmp66 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(199)
					decodeState->acc = tmp66;
					HX_STACK_LINE(199)
					hx::SubEq(decodeState->validBits,(int)6);
					HX_STACK_LINE(199)
					tmp56 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(199)
			int tmp58 = decodeState->acc;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(199)
			int tmp59 = (int)64;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(199)
			int tmp60 = (tmp59 - (int)1);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(199)
			int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(199)
			int tmp62 = (int(tmp58) & int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(199)
			int z = tmp62;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(199)
			int tmp63 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(199)
			decodeState->acc = tmp63;
			HX_STACK_LINE(199)
			hx::SubEq(decodeState->validBits,(int)6);
			HX_STACK_LINE(199)
			tmp56 = z;
		}
	}
	HX_STACK_LINE(199)
	int tmp57 = (tmp56 + (int)1);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(199)
	int modeCount = tmp57;		HX_STACK_VAR(modeCount,"modeCount");
	HX_STACK_LINE(200)
	Array< ::Dynamic > tmp58;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(200)
		Array< ::Dynamic > tmp59 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(200)
		this1 = tmp59;
		HX_STACK_LINE(200)
		int tmp60 = modeCount;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(200)
		this1->__SetSizeExact(tmp60);
		HX_STACK_LINE(200)
		tmp58 = this1;
	}
	HX_STACK_LINE(200)
	header->modes = tmp58;
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(201)
		while((true)){
			HX_STACK_LINE(201)
			bool tmp59 = (_g < modeCount);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(201)
			bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(201)
			if ((tmp60)){
				HX_STACK_LINE(201)
				break;
			}
			HX_STACK_LINE(201)
			int tmp61 = (_g)++;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(201)
			int i = tmp61;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(202)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp62 = decodeState;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(202)
			::kha::audio2::ogg::vorbis::data::Mode tmp63 = ::kha::audio2::ogg::vorbis::data::Mode_obj::read(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(202)
			::kha::audio2::ogg::vorbis::data::Mode mode = tmp63;		HX_STACK_VAR(mode,"mode");
			HX_STACK_LINE(203)
			int tmp64 = i;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(203)
			::kha::audio2::ogg::vorbis::data::Mode tmp65 = mode;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(203)
			::kha::audio2::ogg::vorbis::data::Mode tmp66 = header->modes->__unsafe_set(tmp64,tmp65).StaticCast< ::kha::audio2::ogg::vorbis::data::Mode >();		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(203)
			tmp66;
			HX_STACK_LINE(204)
			int tmp67 = mode->mapping;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(204)
			int tmp68 = header->mapping->length;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(204)
			bool tmp69 = (tmp67 >= tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(204)
			if ((tmp69)){
				HX_STACK_LINE(205)
				Dynamic tmp70 = hx::SourceInfo(HX_HCSTRING("Header.hx","\x31","\xcf","\x14","\x15"),205,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(205)
				::kha::audio2::ogg::vorbis::data::ReaderError tmp71 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(205)
				HX_STACK_DO_THROW(tmp71);
			}
		}
	}
	HX_STACK_LINE(209)
	while((true)){
		HX_STACK_LINE(209)
		bool tmp59 = (decodeState->bytesInSeg != (int)0);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(209)
		bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(209)
		bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(209)
		if ((tmp60)){
			HX_STACK_LINE(209)
			bool tmp62 = decodeState->lastSeg;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(209)
			bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(209)
			bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(209)
			bool tmp65 = !(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(209)
			bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(209)
			bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(209)
			if ((tmp67)){
				HX_STACK_LINE(209)
				int tmp68 = decodeState->next();		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(209)
				int tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(209)
				int tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(209)
				tmp61 = (tmp70 != (int)0);
			}
			else{
				HX_STACK_LINE(209)
				tmp61 = false;
			}
		}
		else{
			HX_STACK_LINE(209)
			tmp61 = true;
		}
		HX_STACK_LINE(209)
		bool tmp62 = !(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(209)
		if ((tmp62)){
			HX_STACK_LINE(209)
			break;
		}
		HX_STACK_LINE(209)
		(decodeState->bytesInSeg)--;
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			hx::AddEq(decodeState->inputPosition,(int)1);
			HX_STACK_LINE(209)
			decodeState->input->readByte();
		}
	}
	HX_STACK_LINE(211)
	::kha::audio2::ogg::vorbis::data::Header tmp59 = header;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(211)
	return tmp59;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Header_obj,read,return )


Header_obj::Header_obj()
{
}

void Header_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Header);
	HX_MARK_MEMBER_NAME(maximumBitRate,"maximumBitRate");
	HX_MARK_MEMBER_NAME(nominalBitRate,"nominalBitRate");
	HX_MARK_MEMBER_NAME(minimumBitRate,"minimumBitRate");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(channel,"channel");
	HX_MARK_MEMBER_NAME(blocksize0,"blocksize0");
	HX_MARK_MEMBER_NAME(blocksize1,"blocksize1");
	HX_MARK_MEMBER_NAME(codebooks,"codebooks");
	HX_MARK_MEMBER_NAME(floorConfig,"floorConfig");
	HX_MARK_MEMBER_NAME(residueConfig,"residueConfig");
	HX_MARK_MEMBER_NAME(mapping,"mapping");
	HX_MARK_MEMBER_NAME(modes,"modes");
	HX_MARK_MEMBER_NAME(comment,"comment");
	HX_MARK_MEMBER_NAME(vendor,"vendor");
	HX_MARK_END_CLASS();
}

void Header_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maximumBitRate,"maximumBitRate");
	HX_VISIT_MEMBER_NAME(nominalBitRate,"nominalBitRate");
	HX_VISIT_MEMBER_NAME(minimumBitRate,"minimumBitRate");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(channel,"channel");
	HX_VISIT_MEMBER_NAME(blocksize0,"blocksize0");
	HX_VISIT_MEMBER_NAME(blocksize1,"blocksize1");
	HX_VISIT_MEMBER_NAME(codebooks,"codebooks");
	HX_VISIT_MEMBER_NAME(floorConfig,"floorConfig");
	HX_VISIT_MEMBER_NAME(residueConfig,"residueConfig");
	HX_VISIT_MEMBER_NAME(mapping,"mapping");
	HX_VISIT_MEMBER_NAME(modes,"modes");
	HX_VISIT_MEMBER_NAME(comment,"comment");
	HX_VISIT_MEMBER_NAME(vendor,"vendor");
}

Dynamic Header_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"modes") ) { return modes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vendor") ) { return vendor; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"channel") ) { return channel; }
		if (HX_FIELD_EQ(inName,"mapping") ) { return mapping; }
		if (HX_FIELD_EQ(inName,"comment") ) { return comment; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"codebooks") ) { return codebooks; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return sampleRate; }
		if (HX_FIELD_EQ(inName,"blocksize0") ) { return blocksize0; }
		if (HX_FIELD_EQ(inName,"blocksize1") ) { return blocksize1; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floorConfig") ) { return floorConfig; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"residueConfig") ) { return residueConfig; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maximumBitRate") ) { return maximumBitRate; }
		if (HX_FIELD_EQ(inName,"nominalBitRate") ) { return nominalBitRate; }
		if (HX_FIELD_EQ(inName,"minimumBitRate") ) { return minimumBitRate; }
	}
	return super::__Field(inName,inCallProp);
}

bool Header_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true;  }
	}
	return false;
}

Dynamic Header_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"modes") ) { modes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"vendor") ) { vendor=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"channel") ) { channel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mapping") ) { mapping=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comment") ) { comment=inValue.Cast< ::kha::audio2::ogg::vorbis::data::Comment >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"codebooks") ) { codebooks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blocksize0") ) { blocksize0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blocksize1") ) { blocksize1=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floorConfig") ) { floorConfig=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"residueConfig") ) { residueConfig=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maximumBitRate") ) { maximumBitRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nominalBitRate") ) { nominalBitRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minimumBitRate") ) { minimumBitRate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Header_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Header_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("maximumBitRate","\x4d","\x56","\x30","\x56"));
	outFields->push(HX_HCSTRING("nominalBitRate","\x91","\xa2","\x66","\x22"));
	outFields->push(HX_HCSTRING("minimumBitRate","\x1f","\xfa","\xb9","\xf2"));
	outFields->push(HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"));
	outFields->push(HX_HCSTRING("channel","\xc3","\x00","\xd2","\xcc"));
	outFields->push(HX_HCSTRING("blocksize0","\xe2","\x3b","\x0f","\xc1"));
	outFields->push(HX_HCSTRING("blocksize1","\xe3","\x3b","\x0f","\xc1"));
	outFields->push(HX_HCSTRING("codebooks","\xdd","\x0b","\xa1","\xb7"));
	outFields->push(HX_HCSTRING("floorConfig","\xae","\xfd","\x8a","\x3c"));
	outFields->push(HX_HCSTRING("residueConfig","\x6d","\x4d","\x6d","\xb1"));
	outFields->push(HX_HCSTRING("mapping","\x0e","\x7b","\x7a","\x44"));
	outFields->push(HX_HCSTRING("modes","\xb0","\x23","\x58","\x0c"));
	outFields->push(HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81"));
	outFields->push(HX_HCSTRING("vendor","\x88","\xe5","\x96","\x9e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Header_obj,maximumBitRate),HX_HCSTRING("maximumBitRate","\x4d","\x56","\x30","\x56")},
	{hx::fsInt,(int)offsetof(Header_obj,nominalBitRate),HX_HCSTRING("nominalBitRate","\x91","\xa2","\x66","\x22")},
	{hx::fsInt,(int)offsetof(Header_obj,minimumBitRate),HX_HCSTRING("minimumBitRate","\x1f","\xfa","\xb9","\xf2")},
	{hx::fsInt,(int)offsetof(Header_obj,sampleRate),HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67")},
	{hx::fsInt,(int)offsetof(Header_obj,channel),HX_HCSTRING("channel","\xc3","\x00","\xd2","\xcc")},
	{hx::fsInt,(int)offsetof(Header_obj,blocksize0),HX_HCSTRING("blocksize0","\xe2","\x3b","\x0f","\xc1")},
	{hx::fsInt,(int)offsetof(Header_obj,blocksize1),HX_HCSTRING("blocksize1","\xe3","\x3b","\x0f","\xc1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Header_obj,codebooks),HX_HCSTRING("codebooks","\xdd","\x0b","\xa1","\xb7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Header_obj,floorConfig),HX_HCSTRING("floorConfig","\xae","\xfd","\x8a","\x3c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Header_obj,residueConfig),HX_HCSTRING("residueConfig","\x6d","\x4d","\x6d","\xb1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Header_obj,mapping),HX_HCSTRING("mapping","\x0e","\x7b","\x7a","\x44")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Header_obj,modes),HX_HCSTRING("modes","\xb0","\x23","\x58","\x0c")},
	{hx::fsObject /*::kha::audio2::ogg::vorbis::data::Comment*/ ,(int)offsetof(Header_obj,comment),HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81")},
	{hx::fsString,(int)offsetof(Header_obj,vendor),HX_HCSTRING("vendor","\x88","\xe5","\x96","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Header_obj::PACKET_ID,HX_HCSTRING("PACKET_ID","\x72","\x37","\x96","\x42")},
	{hx::fsInt,(void *) &Header_obj::PACKET_COMMENT,HX_HCSTRING("PACKET_COMMENT","\x48","\x73","\x92","\xc8")},
	{hx::fsInt,(void *) &Header_obj::PACKET_SETUP,HX_HCSTRING("PACKET_SETUP","\x26","\x87","\x2b","\x68")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("maximumBitRate","\x4d","\x56","\x30","\x56"),
	HX_HCSTRING("nominalBitRate","\x91","\xa2","\x66","\x22"),
	HX_HCSTRING("minimumBitRate","\x1f","\xfa","\xb9","\xf2"),
	HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"),
	HX_HCSTRING("channel","\xc3","\x00","\xd2","\xcc"),
	HX_HCSTRING("blocksize0","\xe2","\x3b","\x0f","\xc1"),
	HX_HCSTRING("blocksize1","\xe3","\x3b","\x0f","\xc1"),
	HX_HCSTRING("codebooks","\xdd","\x0b","\xa1","\xb7"),
	HX_HCSTRING("floorConfig","\xae","\xfd","\x8a","\x3c"),
	HX_HCSTRING("residueConfig","\x6d","\x4d","\x6d","\xb1"),
	HX_HCSTRING("mapping","\x0e","\x7b","\x7a","\x44"),
	HX_HCSTRING("modes","\xb0","\x23","\x58","\x0c"),
	HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81"),
	HX_HCSTRING("vendor","\x88","\xe5","\x96","\x9e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Header_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Header_obj::PACKET_ID,"PACKET_ID");
	HX_MARK_MEMBER_NAME(Header_obj::PACKET_COMMENT,"PACKET_COMMENT");
	HX_MARK_MEMBER_NAME(Header_obj::PACKET_SETUP,"PACKET_SETUP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Header_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Header_obj::PACKET_ID,"PACKET_ID");
	HX_VISIT_MEMBER_NAME(Header_obj::PACKET_COMMENT,"PACKET_COMMENT");
	HX_VISIT_MEMBER_NAME(Header_obj::PACKET_SETUP,"PACKET_SETUP");
};

#endif

hx::Class Header_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PACKET_ID","\x72","\x37","\x96","\x42"),
	HX_HCSTRING("PACKET_COMMENT","\x48","\x73","\x92","\xc8"),
	HX_HCSTRING("PACKET_SETUP","\x26","\x87","\x2b","\x68"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	::String(null()) };

void Header_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Header","\x5d","\x28","\x45","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Header_obj::__GetStatic;
	__mClass->mSetStaticField = &Header_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Header_obj >;
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

void Header_obj::__boot()
{
	PACKET_ID= (int)1;
	PACKET_COMMENT= (int)3;
	PACKET_SETUP= (int)5;
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
