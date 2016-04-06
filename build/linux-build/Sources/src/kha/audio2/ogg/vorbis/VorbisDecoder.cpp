#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecoder
#include <kha/audio2/ogg/vorbis/VorbisDecoder.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisTools
#include <kha/audio2/ogg/vorbis/VorbisTools.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis__VorbisDecodeState_FindPageResult
#include <kha/audio2/ogg/vorbis/_VorbisDecodeState/FindPageResult.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Codebook
#include <kha/audio2/ogg/vorbis/data/Codebook.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor
#include <kha/audio2/ogg/vorbis/data/Floor.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor1
#include <kha/audio2/ogg/vorbis/data/Floor1.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Header
#include <kha/audio2/ogg/vorbis/data/Header.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mapping
#include <kha/audio2/ogg/vorbis/data/Mapping.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel
#include <kha/audio2/ogg/vorbis/data/MappingChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mode
#include <kha/audio2/ogg/vorbis/data/Mode.h>
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
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Residue
#include <kha/audio2/ogg/vorbis/data/Residue.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{

Void VorbisDecoder_obj::__construct(::kha::audio2::ogg::vorbis::data::Header header,::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState)
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","new",0xc43447af,"kha.audio2.ogg.vorbis.VorbisDecoder.new","kha/audio2/ogg/vorbis/VorbisDecoder.hx",44,0xbe2976a1)
HX_STACK_THIS(this)
HX_STACK_ARG(header,"header")
HX_STACK_ARG(decodeState,"decodeState")
{
	HX_STACK_LINE(45)
	this->header = header;
	HX_STACK_LINE(46)
	this->decodeState = decodeState;
	HX_STACK_LINE(47)
	this->totalSample = null();
	HX_STACK_LINE(48)
	this->currentSample = (int)0;
	HX_STACK_LINE(51)
	this->previousLength = (int)0;
	HX_STACK_LINE(53)
	Array< ::Dynamic > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(53)
		Array< ::Dynamic > tmp1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		this1 = tmp1;
		HX_STACK_LINE(53)
		int tmp2 = header->channel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		this1->__SetSizeExact(tmp2);
		HX_STACK_LINE(53)
		tmp = this1;
	}
	HX_STACK_LINE(53)
	this->channelBuffers = tmp;
	HX_STACK_LINE(54)
	Array< ::Dynamic > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(54)
		Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		this1 = tmp2;
		HX_STACK_LINE(54)
		int tmp3 = header->channel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		this1->__SetSizeExact(tmp3);
		HX_STACK_LINE(54)
		tmp1 = this1;
	}
	HX_STACK_LINE(54)
	this->previousWindow = tmp1;
	HX_STACK_LINE(55)
	Array< ::Dynamic > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(55)
		Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		this1 = tmp3;
		HX_STACK_LINE(55)
		int tmp4 = header->channel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		this1->__SetSizeExact(tmp4);
		HX_STACK_LINE(55)
		tmp2 = this1;
	}
	HX_STACK_LINE(55)
	this->finalY = tmp2;
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(57)
		int _g = header->channel;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			if ((tmp4)){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(57)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				Array< Float > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					Array< Float > tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(58)
					{
						HX_STACK_LINE(58)
						Array< Float > this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(58)
						Array< Float > tmp8 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(58)
						this1 = tmp8;
						HX_STACK_LINE(58)
						int tmp9 = header->blocksize1;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(58)
						this1->__SetSizeExact(tmp9);
						HX_STACK_LINE(58)
						tmp7 = this1;
					}
					HX_STACK_LINE(58)
					Array< Float > vec = tmp7;		HX_STACK_VAR(vec,"vec");
					HX_STACK_LINE(58)
					tmp6 = vec;
				}
				HX_STACK_LINE(58)
				Array< Float > val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(58)
				Array< ::Dynamic > tmp7 = this->channelBuffers;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(58)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(58)
				Array< Float > tmp9 = val;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(58)
				Array< Float > tmp10 = tmp7->__unsafe_set(tmp8,tmp9).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(58)
				tmp10;
			}
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(59)
				Array< Float > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				{
					HX_STACK_LINE(59)
					Float tmp7 = (Float(header->blocksize1) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(59)
					int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(59)
					int len = tmp8;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(59)
					Array< Float > tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(59)
					{
						HX_STACK_LINE(59)
						Array< Float > this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(59)
						Array< Float > tmp10 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(59)
						this1 = tmp10;
						HX_STACK_LINE(59)
						int tmp11 = len;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(59)
						this1->__SetSizeExact(tmp11);
						HX_STACK_LINE(59)
						tmp9 = this1;
					}
					HX_STACK_LINE(59)
					Array< Float > vec = tmp9;		HX_STACK_VAR(vec,"vec");
					HX_STACK_LINE(59)
					tmp6 = vec;
				}
				HX_STACK_LINE(59)
				Array< Float > val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(59)
				Array< ::Dynamic > tmp7 = this->previousWindow;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(59)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(59)
				Array< Float > tmp9 = val;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(59)
				Array< Float > tmp10 = tmp7->__unsafe_set(tmp8,tmp9).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(59)
				tmp10;
			}
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				Array< int > val = Array_obj< int >::__new();		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(60)
				Array< ::Dynamic > tmp6 = this->finalY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(60)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(60)
				Array< int > tmp8 = val;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(60)
				Array< int > tmp9 = tmp6->__unsafe_set(tmp7,tmp8).StaticCast< Array< int > >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(60)
				tmp9;
			}
		}
	}
	HX_STACK_LINE(63)
	Array< ::Dynamic > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(63)
		Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		this1 = tmp4;
		HX_STACK_LINE(63)
		this1->__SetSizeExact((int)2);
		HX_STACK_LINE(63)
		tmp3 = this1;
	}
	HX_STACK_LINE(63)
	this->a = tmp3;
	HX_STACK_LINE(64)
	Array< ::Dynamic > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(64)
		Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		this1 = tmp5;
		HX_STACK_LINE(64)
		this1->__SetSizeExact((int)2);
		HX_STACK_LINE(64)
		tmp4 = this1;
	}
	HX_STACK_LINE(64)
	this->b = tmp4;
	HX_STACK_LINE(65)
	Array< ::Dynamic > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(65)
		Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		this1 = tmp6;
		HX_STACK_LINE(65)
		this1->__SetSizeExact((int)2);
		HX_STACK_LINE(65)
		tmp5 = this1;
	}
	HX_STACK_LINE(65)
	this->c = tmp5;
	HX_STACK_LINE(66)
	Array< ::Dynamic > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(66)
		Array< ::Dynamic > tmp7 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		this1 = tmp7;
		HX_STACK_LINE(66)
		this1->__SetSizeExact((int)2);
		HX_STACK_LINE(66)
		tmp6 = this1;
	}
	HX_STACK_LINE(66)
	this->window = tmp6;
	HX_STACK_LINE(67)
	Array< ::Dynamic > tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(67)
		Array< ::Dynamic > tmp8 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(67)
		this1 = tmp8;
		HX_STACK_LINE(67)
		this1->__SetSizeExact((int)2);
		HX_STACK_LINE(67)
		tmp7 = this1;
	}
	HX_STACK_LINE(67)
	this->bitReverseData = tmp7;
	HX_STACK_LINE(68)
	int tmp8 = header->blocksize0;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(68)
	this->initBlocksize((int)0,tmp8);
	HX_STACK_LINE(69)
	int tmp9 = header->blocksize1;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(69)
	this->initBlocksize((int)1,tmp9);
}
;
	return null();
}

//VorbisDecoder_obj::~VorbisDecoder_obj() { }

Dynamic VorbisDecoder_obj::__CreateEmpty() { return  new VorbisDecoder_obj; }
hx::ObjectPtr< VorbisDecoder_obj > VorbisDecoder_obj::__new(::kha::audio2::ogg::vorbis::data::Header header,::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState)
{  hx::ObjectPtr< VorbisDecoder_obj > _result_ = new VorbisDecoder_obj();
	_result_->__construct(header,decodeState);
	return _result_;}

Dynamic VorbisDecoder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VorbisDecoder_obj > _result_ = new VorbisDecoder_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int VorbisDecoder_obj::read( Array< Float > output,int samples,int channels,int sampleRate,bool useFloat){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","read",0xec2f3927,"kha.audio2.ogg.vorbis.VorbisDecoder.read","kha/audio2/ogg/vorbis/VorbisDecoder.hx",82,0xbe2976a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(samples,"samples")
	HX_STACK_ARG(channels,"channels")
	HX_STACK_ARG(sampleRate,"sampleRate")
	HX_STACK_ARG(useFloat,"useFloat")
	HX_STACK_LINE(83)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _int = sampleRate;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(83)
			bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			if ((tmp2)){
				HX_STACK_LINE(83)
				tmp1 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(83)
				tmp1 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(83)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::kha::audio2::ogg::vorbis::data::Header tmp3 = this->header;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			int _int = tmp3->sampleRate;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(83)
			bool tmp4 = (_int < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			if ((tmp4)){
				HX_STACK_LINE(83)
				tmp2 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(83)
				tmp2 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(83)
		Float tmp3 = hx::Mod(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		int a = tmp4;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(83)
		tmp = (a != (int)0);
	}
	HX_STACK_LINE(83)
	if ((tmp)){
		HX_STACK_LINE(84)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			::kha::audio2::ogg::vorbis::data::Header tmp2 = this->header;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			int _int = tmp2->sampleRate;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(84)
			bool tmp3 = (_int < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			if ((tmp3)){
				HX_STACK_LINE(84)
				tmp1 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(84)
				tmp1 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(84)
		::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		::String tmp3 = (HX_HCSTRING("Unsupported sampleRate : can't convert ","\xa1","\x80","\x14","\x2c") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::String tmp4 = (tmp3 + HX_HCSTRING(" to ","\x25","\x3a","\x7f","\x15"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		int tmp5 = sampleRate;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(86)
	int tmp1 = channels;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	::kha::audio2::ogg::vorbis::data::Header tmp2 = this->header;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	int tmp3 = tmp2->channel;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	int tmp4 = hx::Mod(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	if ((tmp5)){
		HX_STACK_LINE(87)
		::kha::audio2::ogg::vorbis::data::Header tmp6 = this->header;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		int tmp7 = tmp6->channel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		::String tmp8 = (HX_HCSTRING("Unsupported channels : can't convert ","\x7b","\xf0","\x64","\x21") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(87)
		::String tmp9 = (tmp8 + HX_HCSTRING(" to ","\x25","\x3a","\x7f","\x15"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(87)
		int tmp10 = channels;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(87)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(87)
		HX_STACK_DO_THROW(tmp11);
	}
	HX_STACK_LINE(90)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		int _int = sampleRate;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(90)
		bool tmp7 = (_int < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(90)
		if ((tmp7)){
			HX_STACK_LINE(90)
			tmp6 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(90)
			tmp6 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(90)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		::kha::audio2::ogg::vorbis::data::Header tmp8 = this->header;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(90)
		int _int = tmp8->sampleRate;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(90)
		bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(90)
		if ((tmp9)){
			HX_STACK_LINE(90)
			tmp7 = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(90)
			tmp7 = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(90)
	Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(90)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(90)
	int sampleRepeat = tmp9;		HX_STACK_VAR(sampleRepeat,"sampleRepeat");
	HX_STACK_LINE(91)
	int tmp10 = channels;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(91)
	::kha::audio2::ogg::vorbis::data::Header tmp11 = this->header;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(91)
	int tmp12 = tmp11->channel;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(91)
	Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(91)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(91)
	int channelRepeat = tmp14;		HX_STACK_VAR(channelRepeat,"channelRepeat");
	HX_STACK_LINE(93)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(94)
	Float tmp15 = (Float(samples) / Float(sampleRepeat));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(94)
	int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(94)
	int len = tmp16;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(95)
	Dynamic tmp17 = this->totalSample;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(95)
	bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(95)
	bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(95)
	if ((tmp18)){
		HX_STACK_LINE(95)
		int tmp20 = len;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(95)
		Dynamic tmp21 = this->totalSample;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(95)
		Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(95)
		int tmp23 = this->currentSample;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(95)
		int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(95)
		int tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(95)
		int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(95)
		tmp19 = (tmp20 > tmp26);
	}
	else{
		HX_STACK_LINE(95)
		tmp19 = false;
	}
	HX_STACK_LINE(95)
	if ((tmp19)){
		HX_STACK_LINE(96)
		Dynamic tmp20 = this->totalSample;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(96)
		int tmp21 = this->currentSample;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(96)
		int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(96)
		len = tmp22;
	}
	HX_STACK_LINE(99)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(100)
	while((true)){
		HX_STACK_LINE(100)
		bool tmp20 = (n < len);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(100)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(100)
		if ((tmp21)){
			HX_STACK_LINE(100)
			break;
		}
		HX_STACK_LINE(101)
		int tmp22 = this->channelBufferEnd;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(101)
		int tmp23 = this->channelBufferStart;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(101)
		int tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(101)
		int k = tmp24;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(102)
		int tmp25 = k;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(102)
		int tmp26 = (len - n);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(102)
		bool tmp27 = (tmp25 >= tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(102)
		if ((tmp27)){
			HX_STACK_LINE(102)
			int tmp28 = (len - n);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(102)
			k = tmp28;
		}
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int tmp28 = this->channelBufferStart;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(103)
			int _g1 = tmp28;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(103)
			int tmp29 = this->channelBufferStart;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(103)
			int tmp30 = k;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(103)
			int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(103)
			int _g = tmp31;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			while((true)){
				HX_STACK_LINE(103)
				bool tmp32 = (_g1 < _g);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(103)
				bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(103)
				if ((tmp33)){
					HX_STACK_LINE(103)
					break;
				}
				HX_STACK_LINE(103)
				int tmp34 = (_g1)++;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(103)
				int j = tmp34;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(104)
				{
					HX_STACK_LINE(104)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(104)
					while((true)){
						HX_STACK_LINE(104)
						bool tmp35 = (_g2 < sampleRepeat);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(104)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(104)
						if ((tmp36)){
							HX_STACK_LINE(104)
							break;
						}
						HX_STACK_LINE(104)
						int tmp37 = (_g2)++;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(104)
						int sr = tmp37;		HX_STACK_VAR(sr,"sr");
						HX_STACK_LINE(105)
						{
							HX_STACK_LINE(105)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(105)
							::kha::audio2::ogg::vorbis::data::Header tmp38 = this->header;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(105)
							int _g3 = tmp38->channel;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(105)
							while((true)){
								HX_STACK_LINE(105)
								bool tmp39 = (_g4 < _g3);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(105)
								bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(105)
								if ((tmp40)){
									HX_STACK_LINE(105)
									break;
								}
								HX_STACK_LINE(105)
								int tmp41 = (_g4)++;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(105)
								int i = tmp41;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(106)
								{
									HX_STACK_LINE(106)
									int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(106)
									while((true)){
										HX_STACK_LINE(106)
										bool tmp42 = (_g5 < channelRepeat);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(106)
										bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(106)
										if ((tmp43)){
											HX_STACK_LINE(106)
											break;
										}
										HX_STACK_LINE(106)
										int tmp44 = (_g5)++;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(106)
										int cr = tmp44;		HX_STACK_VAR(cr,"cr");
										HX_STACK_LINE(107)
										Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(107)
										{
											HX_STACK_LINE(107)
											Array< ::Dynamic > tmp46 = this->channelBuffers;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(107)
											int tmp47 = i;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(107)
											Array< Float > tmp48 = tmp46->__unsafe_get(tmp47).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(107)
											Array< Float > this1 = tmp48;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(107)
											int tmp49 = j;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(107)
											Float tmp50 = this1->__unsafe_get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(107)
											tmp45 = tmp50;
										}
										HX_STACK_LINE(107)
										Float value = tmp45;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(108)
										bool tmp46 = (value > (int)1);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(108)
										if ((tmp46)){
											HX_STACK_LINE(109)
											value = (int)1;
										}
										else{
											HX_STACK_LINE(110)
											bool tmp47 = (value < (int)-1);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(110)
											if ((tmp47)){
												HX_STACK_LINE(111)
												value = (int)-1;
											}
										}
										HX_STACK_LINE(114)
										bool tmp47 = useFloat;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(114)
										if ((tmp47)){
											HX_STACK_LINE(116)
											int tmp48 = index;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(116)
											Float tmp49 = value;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(116)
											Float tmp50 = output->__unsafe_set(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(116)
											tmp50;
											HX_STACK_LINE(117)
											++(index);
										}
										else{
										}
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(125)
		hx::AddEq(n,k);
		HX_STACK_LINE(126)
		hx::AddEq(this->channelBufferStart,k);
		HX_STACK_LINE(127)
		bool tmp28 = (n == len);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(127)
		bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(127)
		bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(127)
		if ((tmp29)){
			HX_STACK_LINE(127)
			int tmp31 = this->getFrameFloat();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(127)
			int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(127)
			tmp30 = (tmp32 == (int)0);
		}
		else{
			HX_STACK_LINE(127)
			tmp30 = true;
		}
		HX_STACK_LINE(127)
		if ((tmp30)){
			HX_STACK_LINE(128)
			break;
		}
	}
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		int _g = n;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(132)
		while((true)){
			HX_STACK_LINE(132)
			bool tmp20 = (_g < len);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(132)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(132)
			if ((tmp21)){
				HX_STACK_LINE(132)
				break;
			}
			HX_STACK_LINE(132)
			int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(132)
			int j = tmp22;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(133)
				while((true)){
					HX_STACK_LINE(133)
					bool tmp23 = (_g1 < sampleRepeat);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(133)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(133)
					if ((tmp24)){
						HX_STACK_LINE(133)
						break;
					}
					HX_STACK_LINE(133)
					int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(133)
					int sr = tmp25;		HX_STACK_VAR(sr,"sr");
					HX_STACK_LINE(134)
					{
						HX_STACK_LINE(134)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(134)
						::kha::audio2::ogg::vorbis::data::Header tmp26 = this->header;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(134)
						int _g2 = tmp26->channel;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(134)
						while((true)){
							HX_STACK_LINE(134)
							bool tmp27 = (_g3 < _g2);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(134)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(134)
							if ((tmp28)){
								HX_STACK_LINE(134)
								break;
							}
							HX_STACK_LINE(134)
							int tmp29 = (_g3)++;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(134)
							int i = tmp29;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(135)
							{
								HX_STACK_LINE(135)
								int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(135)
								while((true)){
									HX_STACK_LINE(135)
									bool tmp30 = (_g4 < channelRepeat);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(135)
									bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(135)
									if ((tmp31)){
										HX_STACK_LINE(135)
										break;
									}
									HX_STACK_LINE(135)
									int tmp32 = (_g4)++;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(135)
									int cr = tmp32;		HX_STACK_VAR(cr,"cr");
									HX_STACK_LINE(136)
									bool tmp33 = useFloat;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(136)
									if ((tmp33)){
										HX_STACK_LINE(138)
										int tmp34 = index;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(138)
										Float tmp35 = output->__unsafe_set(tmp34,(int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(138)
										tmp35;
										HX_STACK_LINE(139)
										++(index);
									}
									else{
									}
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(148)
	hx::AddEq(this->currentSample,len);
	HX_STACK_LINE(149)
	int tmp20 = (len * sampleRepeat);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(149)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC5(VorbisDecoder_obj,read,return )

int VorbisDecoder_obj::skipSamples( int len){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","skipSamples",0x136a1299,"kha.audio2.ogg.vorbis.VorbisDecoder.skipSamples","kha/audio2/ogg/vorbis/VorbisDecoder.hx",152,0xbe2976a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(153)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(154)
	Dynamic tmp = this->totalSample;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	if ((tmp1)){
		HX_STACK_LINE(154)
		int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		Dynamic tmp4 = this->totalSample;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		int tmp6 = this->currentSample;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		int tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		tmp2 = (tmp3 > tmp9);
	}
	else{
		HX_STACK_LINE(154)
		tmp2 = false;
	}
	HX_STACK_LINE(154)
	if ((tmp2)){
		HX_STACK_LINE(155)
		Dynamic tmp3 = this->totalSample;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		int tmp4 = this->currentSample;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		len = tmp5;
	}
	HX_STACK_LINE(157)
	while((true)){
		HX_STACK_LINE(157)
		bool tmp3 = (n < len);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		if ((tmp4)){
			HX_STACK_LINE(157)
			break;
		}
		HX_STACK_LINE(158)
		int tmp5 = this->channelBufferEnd;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		int tmp6 = this->channelBufferStart;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		int k = tmp7;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(159)
		int tmp8 = k;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(159)
		int tmp9 = (len - n);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(159)
		bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(159)
		if ((tmp10)){
			HX_STACK_LINE(159)
			int tmp11 = (len - n);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(159)
			k = tmp11;
		}
		HX_STACK_LINE(160)
		hx::AddEq(n,k);
		HX_STACK_LINE(161)
		hx::AddEq(this->channelBufferStart,k);
		HX_STACK_LINE(162)
		bool tmp11 = (n == len);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(162)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(162)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(162)
		if ((tmp12)){
			HX_STACK_LINE(162)
			int tmp14 = this->getFrameFloat();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(162)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(162)
			tmp13 = (tmp15 == (int)0);
		}
		else{
			HX_STACK_LINE(162)
			tmp13 = true;
		}
		HX_STACK_LINE(162)
		if ((tmp13)){
			HX_STACK_LINE(163)
			break;
		}
	}
	HX_STACK_LINE(167)
	hx::AddEq(this->currentSample,len);
	HX_STACK_LINE(168)
	int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(168)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecoder_obj,skipSamples,return )

Void VorbisDecoder_obj::setupSampleNumber( Dynamic seekFunc,int inputLength){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","setupSampleNumber",0xd3bc1c3f,"kha.audio2.ogg.vorbis.VorbisDecoder.setupSampleNumber","kha/audio2/ogg/vorbis/VorbisDecoder.hx",171,0xbe2976a1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(seekFunc,"seekFunc")
		HX_STACK_ARG(inputLength,"inputLength")
		HX_STACK_LINE(172)
		Dynamic tmp = this->totalSample;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		if ((tmp1)){
			HX_STACK_LINE(173)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp2 = this->decodeState;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			Dynamic tmp3 = seekFunc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(173)
			int tmp4 = inputLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			int tmp5 = tmp2->getSampleNumber(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			this->totalSample = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VorbisDecoder_obj,setupSampleNumber,(void))

Void VorbisDecoder_obj::seek( Dynamic seekFunc,int inputLength,int sampleNumber){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","seek",0xecd87349,"kha.audio2.ogg.vorbis.VorbisDecoder.seek","kha/audio2/ogg/vorbis/VorbisDecoder.hx",178,0xbe2976a1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(seekFunc,"seekFunc")
		HX_STACK_ARG(inputLength,"inputLength")
		HX_STACK_ARG(sampleNumber,"sampleNumber")
		HX_STACK_LINE(179)
		int tmp = this->currentSample;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		int tmp1 = sampleNumber;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		if ((tmp2)){
			HX_STACK_LINE(180)
			return null();
		}
		HX_STACK_LINE(184)
		Dynamic tmp3 = this->totalSample;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		if ((tmp4)){
			HX_STACK_LINE(185)
			Dynamic tmp5 = seekFunc;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			int tmp6 = inputLength;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(185)
			this->setupSampleNumber(tmp5,tmp6);
			HX_STACK_LINE(186)
			Dynamic tmp7 = this->totalSample;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(186)
			bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(186)
			if ((tmp8)){
				HX_STACK_LINE(187)
				Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("VorbisDecoder.hx","\x0d","\x8b","\x92","\xa5"),187,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecoder","\x3d","\x44","\x15","\x18"),HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(187)
				::kha::audio2::ogg::vorbis::data::ReaderError tmp10 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::CANT_FIND_LAST_PAGE,null(),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		HX_STACK_LINE(191)
		bool tmp5 = (sampleNumber < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		if ((tmp5)){
			HX_STACK_LINE(192)
			sampleNumber = (int)0;
		}
		HX_STACK_LINE(195)
		::kha::audio2::ogg::vorbis::VorbisDecodeState tmp6 = this->decodeState;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(195)
		::kha::audio2::ogg::vorbis::data::ProbedPage p0 = tmp6->pFirst;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(196)
		::kha::audio2::ogg::vorbis::VorbisDecodeState tmp7 = this->decodeState;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		::kha::audio2::ogg::vorbis::data::ProbedPage p1 = tmp7->pLast;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(198)
		bool tmp8 = (sampleNumber >= p1->lastDecodedSample);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		if ((tmp8)){
			HX_STACK_LINE(199)
			int tmp9 = (p1->lastDecodedSample - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(199)
			sampleNumber = tmp9;
		}
		HX_STACK_LINE(202)
		bool tmp9 = (sampleNumber < p0->lastDecodedSample);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(202)
		if ((tmp9)){
			HX_STACK_LINE(203)
			Dynamic tmp10 = seekFunc;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(203)
			int tmp11 = p0->pageStart;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(203)
			int tmp12 = sampleNumber;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(203)
			this->seekFrameFromPage(tmp10,tmp11,(int)0,tmp12);
		}
		else{
			HX_STACK_LINE(205)
			int attempts = (int)0;		HX_STACK_VAR(attempts,"attempts");
			HX_STACK_LINE(207)
			while((true)){
				HX_STACK_LINE(207)
				bool tmp10 = (p0->pageEnd < p1->pageStart);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(207)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(207)
				if ((tmp11)){
					HX_STACK_LINE(207)
					break;
				}
				HX_STACK_LINE(212)
				int startOffset = p0->pageEnd;		HX_STACK_VAR(startOffset,"startOffset");
				HX_STACK_LINE(213)
				int endOffset = p1->afterPreviousPageStart;		HX_STACK_VAR(endOffset,"endOffset");
				HX_STACK_LINE(214)
				Dynamic startSample = p0->lastDecodedSample;		HX_STACK_VAR(startSample,"startSample");
				HX_STACK_LINE(215)
				Dynamic endSample = p1->lastDecodedSample;		HX_STACK_VAR(endSample,"endSample");
				HX_STACK_LINE(218)
				bool tmp12 = (startSample == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(218)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(218)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(218)
				if ((tmp13)){
					HX_STACK_LINE(218)
					tmp14 = (endSample == null());
				}
				else{
					HX_STACK_LINE(218)
					tmp14 = true;
				}
				HX_STACK_LINE(218)
				if ((tmp14)){
					HX_STACK_LINE(219)
					Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("VorbisDecoder.hx","\x0d","\x8b","\x92","\xa5"),219,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecoder","\x3d","\x44","\x15","\x18"),HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(219)
					::kha::audio2::ogg::vorbis::data::ReaderError tmp16 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::SEEK_FAILED,null(),tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(219)
					HX_STACK_DO_THROW(tmp16);
				}
				HX_STACK_LINE(225)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(225)
					int tmp16 = (startOffset + (int)4000);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(225)
					int a = tmp16;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(225)
					{
						HX_STACK_LINE(225)
						bool tmp17 = (endOffset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(225)
						bool aNeg = tmp17;		HX_STACK_VAR(aNeg,"aNeg");
						HX_STACK_LINE(225)
						bool tmp18 = (a < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(225)
						bool bNeg = tmp18;		HX_STACK_VAR(bNeg,"bNeg");
						HX_STACK_LINE(225)
						bool tmp19 = (aNeg != bNeg);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(225)
						if ((tmp19)){
							HX_STACK_LINE(225)
							tmp15 = aNeg;
						}
						else{
							HX_STACK_LINE(225)
							tmp15 = (endOffset > a);
						}
					}
				}
				HX_STACK_LINE(225)
				if ((tmp15)){
					HX_STACK_LINE(226)
					int tmp16 = (endOffset - (int)4000);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(226)
					endOffset = tmp16;
				}
				HX_STACK_LINE(230)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(230)
					{
						HX_STACK_LINE(230)
						int tmp18 = (endOffset - startOffset);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(230)
						int _int = tmp18;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(230)
						bool tmp19 = (_int < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(230)
						if ((tmp19)){
							HX_STACK_LINE(230)
							tmp17 = (((Float)4294967296.0) + _int);
						}
						else{
							HX_STACK_LINE(230)
							tmp17 = (_int + ((Float)0.0));
						}
					}
					HX_STACK_LINE(230)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(230)
					{
						HX_STACK_LINE(230)
						int tmp19 = (endSample - startSample);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(230)
						int _int = tmp19;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(230)
						bool tmp20 = (_int < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(230)
						if ((tmp20)){
							HX_STACK_LINE(230)
							tmp18 = (((Float)4294967296.0) + _int);
						}
						else{
							HX_STACK_LINE(230)
							tmp18 = (_int + ((Float)0.0));
						}
					}
					HX_STACK_LINE(230)
					Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(230)
					int tmp20 = (sampleNumber - startSample);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(230)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(230)
					int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(230)
					int b = tmp22;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(230)
					tmp16 = (startOffset + b);
				}
				HX_STACK_LINE(230)
				int probe = tmp16;		HX_STACK_VAR(probe,"probe");
				HX_STACK_LINE(234)
				bool tmp17 = (attempts >= (int)4);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(234)
				if ((tmp17)){
					HX_STACK_LINE(235)
					int tmp18 = startOffset;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(235)
					int tmp19 = (endOffset - startOffset);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(235)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(235)
					int tmp21 = hx::UShr(tmp20,(int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(235)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(235)
					int tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(235)
					int probe2 = tmp23;		HX_STACK_VAR(probe2,"probe2");
					HX_STACK_LINE(236)
					bool tmp24 = (attempts >= (int)8);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(236)
					int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(236)
					if ((tmp24)){
						HX_STACK_LINE(237)
						tmp25 = probe2;
					}
					else{
						HX_STACK_LINE(238)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							bool tmp27 = (probe2 < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(238)
							bool aNeg = tmp27;		HX_STACK_VAR(aNeg,"aNeg");
							HX_STACK_LINE(238)
							bool tmp28 = (probe < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(238)
							bool bNeg = tmp28;		HX_STACK_VAR(bNeg,"bNeg");
							HX_STACK_LINE(238)
							bool tmp29 = (aNeg != bNeg);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(238)
							if ((tmp29)){
								HX_STACK_LINE(238)
								tmp26 = aNeg;
							}
							else{
								HX_STACK_LINE(238)
								tmp26 = (probe2 > probe);
							}
						}
						HX_STACK_LINE(238)
						if ((tmp26)){
							HX_STACK_LINE(239)
							int tmp27 = probe;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(239)
							int tmp28 = (probe2 - probe);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(239)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(239)
							int tmp30 = hx::UShr(tmp29,(int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(239)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(239)
							int tmp32 = (tmp27 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(239)
							tmp25 = tmp32;
						}
						else{
							HX_STACK_LINE(241)
							int tmp27 = probe2;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(241)
							int tmp28 = (probe - probe2);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(241)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(241)
							int tmp30 = hx::UShr(tmp29,(int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(241)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(241)
							int tmp32 = (tmp27 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(241)
							tmp25 = tmp32;
						}
					}
					HX_STACK_LINE(236)
					probe = tmp25;
				}
				HX_STACK_LINE(244)
				++(attempts);
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					::kha::audio2::ogg::vorbis::VorbisDecodeState tmp18 = this->decodeState;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(245)
					int tmp19 = tmp18->inputPosition = probe;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(245)
					seekFunc(tmp19).Cast< Void >();
				}
				HX_STACK_LINE(247)
				{
					HX_STACK_LINE(247)
					::kha::audio2::ogg::vorbis::VorbisDecodeState tmp18 = this->decodeState;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(247)
					Dynamic tmp19 = seekFunc;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(247)
					int tmp20 = inputLength;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(247)
					::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult tmp21 = tmp18->findPage(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(247)
					::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult _g = tmp21;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(247)
					switch( (int)(_g->__Index())){
						case (int)1: {
							HX_STACK_LINE(249)
							Dynamic tmp22 = hx::SourceInfo(HX_HCSTRING("VorbisDecoder.hx","\x0d","\x8b","\x92","\xa5"),249,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecoder","\x3d","\x44","\x15","\x18"),HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(249)
							::kha::audio2::ogg::vorbis::data::ReaderError tmp23 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::SEEK_FAILED,null(),tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(249)
							HX_STACK_DO_THROW(tmp23);
						}
						;break;
						case (int)0: {
						}
						;break;
					}
				}
				HX_STACK_LINE(253)
				::kha::audio2::ogg::vorbis::VorbisDecodeState tmp18 = this->decodeState;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(253)
				Dynamic tmp19 = seekFunc;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(253)
				::kha::audio2::ogg::vorbis::data::Header tmp20 = this->header;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(253)
				::kha::audio2::ogg::vorbis::data::ProbedPage tmp21 = tmp18->analyzePage(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(253)
				::kha::audio2::ogg::vorbis::data::ProbedPage q = tmp21;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(254)
				bool tmp22 = (q == null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(254)
				if ((tmp22)){
					HX_STACK_LINE(255)
					Dynamic tmp23 = hx::SourceInfo(HX_HCSTRING("VorbisDecoder.hx","\x0d","\x8b","\x92","\xa5"),255,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecoder","\x3d","\x44","\x15","\x18"),HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(255)
					::kha::audio2::ogg::vorbis::data::ReaderError tmp24 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::SEEK_FAILED,null(),tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(255)
					HX_STACK_DO_THROW(tmp24);
				}
				HX_STACK_LINE(257)
				q->afterPreviousPageStart = probe;
				HX_STACK_LINE(260)
				bool tmp23 = (q->pageStart == p1->pageStart);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(260)
				if ((tmp23)){
					HX_STACK_LINE(261)
					p1 = q;
					HX_STACK_LINE(262)
					continue;
				}
				HX_STACK_LINE(265)
				bool tmp24 = (sampleNumber < q->lastDecodedSample);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(265)
				if ((tmp24)){
					HX_STACK_LINE(266)
					p1 = q;
				}
				else{
					HX_STACK_LINE(268)
					p0 = q;
				}
			}
			HX_STACK_LINE(272)
			bool tmp10 = (p0->lastDecodedSample <= sampleNumber);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(272)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(272)
			if ((tmp10)){
				HX_STACK_LINE(272)
				tmp11 = (sampleNumber < p1->lastDecodedSample);
			}
			else{
				HX_STACK_LINE(272)
				tmp11 = false;
			}
			HX_STACK_LINE(272)
			if ((tmp11)){
				HX_STACK_LINE(273)
				Dynamic tmp12 = seekFunc;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(273)
				int tmp13 = p1->pageStart;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(273)
				Dynamic tmp14 = p0->lastDecodedSample;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(273)
				int tmp15 = sampleNumber;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(273)
				this->seekFrameFromPage(tmp12,tmp13,tmp14,tmp15);
			}
			else{
				HX_STACK_LINE(275)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("VorbisDecoder.hx","\x0d","\x8b","\x92","\xa5"),275,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecoder","\x3d","\x44","\x15","\x18"),HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(275)
				::kha::audio2::ogg::vorbis::data::ReaderError tmp13 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::SEEK_FAILED,null(),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(275)
				HX_STACK_DO_THROW(tmp13);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VorbisDecoder_obj,seek,(void))

Void VorbisDecoder_obj::seekFrameFromPage( Dynamic seekFunc,int pageStart,int firstSample,int targetSample){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","seekFrameFromPage",0x14f3151d,"kha.audio2.ogg.vorbis.VorbisDecoder.seekFrameFromPage","kha/audio2/ogg/vorbis/VorbisDecoder.hx",280,0xbe2976a1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(seekFunc,"seekFunc")
		HX_STACK_ARG(pageStart,"pageStart")
		HX_STACK_ARG(firstSample,"firstSample")
		HX_STACK_ARG(targetSample,"targetSample")
		HX_STACK_LINE(281)
		int frame = (int)0;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(282)
		int frameStart = firstSample;		HX_STACK_VAR(frameStart,"frameStart");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp = this->decodeState;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(287)
			int tmp1 = tmp->inputPosition = pageStart;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(287)
			seekFunc(tmp1).Cast< Void >();
		}
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp = this->decodeState;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(288)
			tmp->nextSeg = (int)-1;
		}
		HX_STACK_LINE(297)
		int leftEnd = (int)0;		HX_STACK_VAR(leftEnd,"leftEnd");
		HX_STACK_LINE(298)
		int leftStart = (int)0;		HX_STACK_VAR(leftStart,"leftStart");
		HX_STACK_LINE(300)
		::kha::audio2::ogg::vorbis::VorbisDecodeState prevState = null();		HX_STACK_VAR(prevState,"prevState");
		HX_STACK_LINE(301)
		::kha::audio2::ogg::vorbis::VorbisDecodeState lastState = null();		HX_STACK_VAR(lastState,"lastState");
		HX_STACK_LINE(303)
		while((true)){
			HX_STACK_LINE(304)
			prevState = lastState;
			HX_STACK_LINE(305)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp = this->decodeState;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(305)
			Dynamic tmp1 = seekFunc;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(305)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp2 = tmp->clone(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			lastState = tmp2;
			HX_STACK_LINE(307)
			Dynamic tmp3 = this->decodeInitial();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(307)
			Dynamic initialResult = tmp3;		HX_STACK_VAR(initialResult,"initialResult");
			HX_STACK_LINE(308)
			bool tmp4 = (initialResult == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			if ((tmp4)){
				HX_STACK_LINE(309)
				lastState = prevState;
				HX_STACK_LINE(310)
				break;
			}
			HX_STACK_LINE(313)
			int tmp5 = initialResult->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(313)
			leftStart = tmp5;
			HX_STACK_LINE(314)
			int tmp6 = initialResult->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(314)
			leftEnd = tmp6;
			HX_STACK_LINE(316)
			bool tmp7 = (frame == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(316)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(316)
			if ((tmp7)){
				HX_STACK_LINE(317)
				tmp8 = leftEnd;
			}
			else{
				HX_STACK_LINE(319)
				tmp8 = leftStart;
			}
			HX_STACK_LINE(316)
			int start = tmp8;		HX_STACK_VAR(start,"start");
			HX_STACK_LINE(324)
			int tmp9 = targetSample;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			int tmp10 = frameStart;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(324)
			int tmp11 = initialResult->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(324)
			int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(324)
			int tmp13 = start;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(324)
			int tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(324)
			bool tmp15 = (tmp9 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(324)
			if ((tmp15)){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				::kha::audio2::ogg::vorbis::VorbisDecodeState tmp16 = this->decodeState;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(328)
				::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(328)
				while((true)){
					HX_STACK_LINE(328)
					bool tmp17 = (_this->bytesInSeg != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(328)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(328)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(328)
					if ((tmp18)){
						HX_STACK_LINE(328)
						bool tmp20 = _this->lastSeg;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(328)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(328)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(328)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(328)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(328)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(328)
						if ((tmp25)){
							HX_STACK_LINE(328)
							int tmp26 = _this->next();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(328)
							int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(328)
							int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(328)
							tmp19 = (tmp28 != (int)0);
						}
						else{
							HX_STACK_LINE(328)
							tmp19 = false;
						}
					}
					else{
						HX_STACK_LINE(328)
						tmp19 = true;
					}
					HX_STACK_LINE(328)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(328)
					if ((tmp20)){
						HX_STACK_LINE(328)
						break;
					}
					HX_STACK_LINE(328)
					(_this->bytesInSeg)--;
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(328)
						hx::AddEq(_this->inputPosition,(int)1);
						HX_STACK_LINE(328)
						_this->input->readByte();
					}
				}
			}
			HX_STACK_LINE(329)
			int tmp16 = initialResult->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(329)
			int tmp17 = start;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(329)
			int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(329)
			hx::AddEq(frameStart,tmp18);
			HX_STACK_LINE(330)
			++(frame);
		}
		HX_STACK_LINE(333)
		this->decodeState = lastState;
		HX_STACK_LINE(334)
		::kha::audio2::ogg::vorbis::VorbisDecodeState tmp = this->decodeState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		int tmp1 = tmp->inputPosition;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		seekFunc(tmp1).Cast< Void >();
		HX_STACK_LINE(336)
		this->previousLength = (int)0;
		HX_STACK_LINE(337)
		this->pumpFirstFrame();
		HX_STACK_LINE(339)
		this->currentSample = frameStart;
		HX_STACK_LINE(340)
		int tmp2 = (targetSample - frameStart);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(340)
		this->skipSamples(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VorbisDecoder_obj,seekFrameFromPage,(void))

::kha::audio2::ogg::vorbis::VorbisDecoder VorbisDecoder_obj::clone( Dynamic seekFunc){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","clone",0x1ecb3c6c,"kha.audio2.ogg.vorbis.VorbisDecoder.clone","kha/audio2/ogg/vorbis/VorbisDecoder.hx",343,0xbe2976a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(seekFunc,"seekFunc")
	HX_STACK_LINE(344)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp = ::Type_obj::createEmptyInstance(hx::ClassOf< ::kha::audio2::ogg::vorbis::VorbisDecoder >());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(344)
	::kha::audio2::ogg::vorbis::VorbisDecoder decoder = tmp;		HX_STACK_VAR(decoder,"decoder");
	HX_STACK_LINE(346)
	int tmp1 = this->currentSample;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(346)
	decoder->currentSample = tmp1;
	HX_STACK_LINE(347)
	Dynamic tmp2 = this->totalSample;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(347)
	decoder->totalSample = tmp2;
	HX_STACK_LINE(348)
	int tmp3 = this->previousLength;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(348)
	decoder->previousLength = tmp3;
	HX_STACK_LINE(349)
	int tmp4 = this->channelBufferStart;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(349)
	decoder->channelBufferStart = tmp4;
	HX_STACK_LINE(350)
	int tmp5 = this->channelBufferEnd;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(350)
	decoder->channelBufferEnd = tmp5;
	HX_STACK_LINE(353)
	Array< ::Dynamic > tmp6 = this->a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(353)
	decoder->a = tmp6;
	HX_STACK_LINE(354)
	Array< ::Dynamic > tmp7 = this->b;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(354)
	decoder->b = tmp7;
	HX_STACK_LINE(355)
	Array< ::Dynamic > tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(355)
	decoder->c = tmp8;
	HX_STACK_LINE(356)
	Array< ::Dynamic > tmp9 = this->window;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(356)
	decoder->window = tmp9;
	HX_STACK_LINE(357)
	Array< ::Dynamic > tmp10 = this->bitReverseData;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(357)
	decoder->bitReverseData = tmp10;
	HX_STACK_LINE(358)
	::kha::audio2::ogg::vorbis::data::Header tmp11 = this->header;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(358)
	decoder->header = tmp11;
	HX_STACK_LINE(361)
	::kha::audio2::ogg::vorbis::VorbisDecodeState tmp12 = this->decodeState;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(361)
	Dynamic tmp13 = seekFunc;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(361)
	::kha::audio2::ogg::vorbis::VorbisDecodeState tmp14 = tmp12->clone(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(361)
	decoder->decodeState = tmp14;
	HX_STACK_LINE(362)
	Array< ::Dynamic > tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(362)
	{
		HX_STACK_LINE(362)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(362)
		Array< ::Dynamic > tmp16 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(362)
		this1 = tmp16;
		HX_STACK_LINE(362)
		::kha::audio2::ogg::vorbis::data::Header tmp17 = this->header;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(362)
		int tmp18 = tmp17->channel;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(362)
		this1->__SetSizeExact(tmp18);
		HX_STACK_LINE(362)
		tmp15 = this1;
	}
	HX_STACK_LINE(362)
	decoder->channelBuffers = tmp15;
	HX_STACK_LINE(363)
	Array< ::Dynamic > tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(363)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(363)
		Array< ::Dynamic > tmp17 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(363)
		this1 = tmp17;
		HX_STACK_LINE(363)
		::kha::audio2::ogg::vorbis::data::Header tmp18 = this->header;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(363)
		int tmp19 = tmp18->channel;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(363)
		this1->__SetSizeExact(tmp19);
		HX_STACK_LINE(363)
		tmp16 = this1;
	}
	HX_STACK_LINE(363)
	decoder->previousWindow = tmp16;
	HX_STACK_LINE(364)
	Array< ::Dynamic > tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(364)
	{
		HX_STACK_LINE(364)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(364)
		Array< ::Dynamic > tmp18 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(364)
		this1 = tmp18;
		HX_STACK_LINE(364)
		::kha::audio2::ogg::vorbis::data::Header tmp19 = this->header;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(364)
		int tmp20 = tmp19->channel;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(364)
		this1->__SetSizeExact(tmp20);
		HX_STACK_LINE(364)
		tmp17 = this1;
	}
	HX_STACK_LINE(364)
	decoder->finalY = tmp17;
	HX_STACK_LINE(366)
	{
		HX_STACK_LINE(366)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(366)
		::kha::audio2::ogg::vorbis::data::Header tmp18 = this->header;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(366)
		int _g = tmp18->channel;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(366)
		while((true)){
			HX_STACK_LINE(366)
			bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(366)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(366)
			if ((tmp20)){
				HX_STACK_LINE(366)
				break;
			}
			HX_STACK_LINE(366)
			int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(366)
			int i = tmp21;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(367)
			{
				HX_STACK_LINE(367)
				Array< ::Dynamic > tmp22 = this->channelBuffers;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(367)
				int tmp23 = i;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(367)
				Array< Float > tmp24 = tmp22->__unsafe_get(tmp23).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(367)
				Array< Float > tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(367)
				Array< Float > tmp26 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::copyVector(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(367)
				Array< Float > val = tmp26;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(367)
				int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(367)
				Array< Float > tmp28 = val;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(367)
				Array< Float > tmp29 = decoder->channelBuffers->__unsafe_set(tmp27,tmp28).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(367)
				tmp29;
			}
			HX_STACK_LINE(368)
			{
				HX_STACK_LINE(368)
				Array< ::Dynamic > tmp22 = this->previousWindow;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(368)
				int tmp23 = i;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(368)
				Array< Float > tmp24 = tmp22->__unsafe_get(tmp23).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(368)
				Array< Float > tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(368)
				Array< Float > tmp26 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::copyVector(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(368)
				Array< Float > val = tmp26;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(368)
				int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(368)
				Array< Float > tmp28 = val;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(368)
				Array< Float > tmp29 = decoder->previousWindow->__unsafe_set(tmp27,tmp28).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(368)
				tmp29;
			}
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				Array< ::Dynamic > tmp22 = this->finalY;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(369)
				int tmp23 = i;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(369)
				Array< int > tmp24 = tmp22->__unsafe_get(tmp23).StaticCast< Array< int > >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(369)
				Array< int > tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(369)
				Array< int > tmp26 = ::Lambda_obj::array(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(369)
				Array< int > val = tmp26;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(369)
				int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(369)
				Array< int > tmp28 = val;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(369)
				Array< int > tmp29 = decoder->finalY->__unsafe_set(tmp27,tmp28).StaticCast< Array< int > >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(369)
				tmp29;
			}
		}
	}
	HX_STACK_LINE(372)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp18 = decoder;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(372)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecoder_obj,clone,return )

Void VorbisDecoder_obj::ensurePosition( Dynamic seekFunc){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","ensurePosition",0x02f8fd98,"kha.audio2.ogg.vorbis.VorbisDecoder.ensurePosition","kha/audio2/ogg/vorbis/VorbisDecoder.hx",375,0xbe2976a1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(seekFunc,"seekFunc")
		HX_STACK_LINE(376)
		::kha::audio2::ogg::vorbis::VorbisDecodeState tmp = this->decodeState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		int tmp1 = tmp->inputPosition;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		seekFunc(tmp1).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecoder_obj,ensurePosition,(void))

int VorbisDecoder_obj::getFrameFloat( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","getFrameFloat",0xc68da674,"kha.audio2.ogg.vorbis.VorbisDecoder.getFrameFloat","kha/audio2/ogg/vorbis/VorbisDecoder.hx",379,0xbe2976a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(380)
	Dynamic tmp = this->decodePacket();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(380)
	Dynamic result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(381)
	bool tmp1 = (result == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(381)
	if ((tmp1)){
		HX_STACK_LINE(382)
		int tmp2 = this->channelBufferEnd = (int)0;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(382)
		this->channelBufferStart = tmp2;
		HX_STACK_LINE(383)
		return (int)0;
	}
	HX_STACK_LINE(386)
	Dynamic tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(386)
	int tmp3 = this->finishFrame(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(386)
	int len = tmp3;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(388)
	this->channelBufferStart = result->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic );
	HX_STACK_LINE(389)
	int tmp4 = (result->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic ) + len);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(389)
	this->channelBufferEnd = tmp4;
	HX_STACK_LINE(391)
	int tmp5 = len;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(391)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecoder_obj,getFrameFloat,return )

Void VorbisDecoder_obj::pumpFirstFrame( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","pumpFirstFrame",0xf5d8f1b6,"kha.audio2.ogg.vorbis.VorbisDecoder.pumpFirstFrame","kha/audio2/ogg/vorbis/VorbisDecoder.hx",394,0xbe2976a1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(395)
		Dynamic tmp = this->decodePacket();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(395)
		this->finishFrame(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecoder_obj,pumpFirstFrame,(void))

int VorbisDecoder_obj::finishFrame( Dynamic r){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","finishFrame",0x21b77929,"kha.audio2.ogg.vorbis.VorbisDecoder.finishFrame","kha/audio2/ogg/vorbis/VorbisDecoder.hx",398,0xbe2976a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(399)
	int len = r->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic );		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(400)
	int right = r->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic );		HX_STACK_VAR(right,"right");
	HX_STACK_LINE(401)
	int left = r->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic );		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(412)
	int tmp = this->previousLength;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(412)
	if ((tmp1)){
		HX_STACK_LINE(413)
		int tmp2 = this->previousLength;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(413)
		int n = tmp2;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(414)
		int tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(414)
		Array< Float > tmp4 = this->getWindow(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(414)
		Array< Float > w = tmp4;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(415)
			::kha::audio2::ogg::vorbis::data::Header tmp5 = this->header;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(415)
			int _g = tmp5->channel;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(415)
			while((true)){
				HX_STACK_LINE(415)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(415)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(415)
				if ((tmp7)){
					HX_STACK_LINE(415)
					break;
				}
				HX_STACK_LINE(415)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(415)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(416)
				Array< ::Dynamic > tmp9 = this->channelBuffers;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(416)
				int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(416)
				Array< Float > tmp11 = tmp9->__unsafe_get(tmp10).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(416)
				Array< Float > cb = tmp11;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(417)
				Array< ::Dynamic > tmp12 = this->previousWindow;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(417)
				int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(417)
				Array< Float > tmp14 = tmp12->__unsafe_get(tmp13).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(417)
				Array< Float > pw = tmp14;		HX_STACK_VAR(pw,"pw");
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(418)
					while((true)){
						HX_STACK_LINE(418)
						bool tmp15 = (_g2 < n);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(418)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(418)
						if ((tmp16)){
							HX_STACK_LINE(418)
							break;
						}
						HX_STACK_LINE(418)
						int tmp17 = (_g2)++;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(418)
						int j = tmp17;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							int tmp18 = (left + j);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(419)
							Float tmp19 = cb->__unsafe_get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(419)
							Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(419)
							int tmp21 = j;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(419)
							Float tmp22 = w->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(419)
							Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(419)
							Float tmp24 = (tmp20 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(419)
							int tmp25 = j;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(419)
							Float tmp26 = pw->__unsafe_get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(419)
							Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(419)
							int tmp28 = (n - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(419)
							int tmp29 = j;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(419)
							int tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(419)
							Float tmp31 = w->__unsafe_get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(419)
							Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(419)
							Float tmp33 = (tmp27 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(419)
							Float tmp34 = (tmp24 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(419)
							Float val = tmp34;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(419)
							int tmp35 = (left + j);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(419)
							Float tmp36 = val;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(419)
							Float tmp37 = cb->__unsafe_set(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(419)
							tmp37;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(424)
	int tmp2 = this->previousLength;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(424)
	int prev = tmp2;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(427)
	int tmp3 = (len - right);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(427)
	this->previousLength = tmp3;
	HX_STACK_LINE(435)
	{
		HX_STACK_LINE(435)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(435)
		::kha::audio2::ogg::vorbis::data::Header tmp4 = this->header;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(435)
		int _g = tmp4->channel;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(435)
		while((true)){
			HX_STACK_LINE(435)
			bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(435)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(435)
			if ((tmp6)){
				HX_STACK_LINE(435)
				break;
			}
			HX_STACK_LINE(435)
			int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(435)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(436)
			Array< ::Dynamic > tmp8 = this->previousWindow;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(436)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(436)
			Array< Float > tmp10 = tmp8->__unsafe_get(tmp9).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(436)
			Array< Float > pw = tmp10;		HX_STACK_VAR(pw,"pw");
			HX_STACK_LINE(437)
			Array< ::Dynamic > tmp11 = this->channelBuffers;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(437)
			int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(437)
			Array< Float > tmp13 = tmp11->__unsafe_get(tmp12).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(437)
			Array< Float > cb = tmp13;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(438)
			{
				HX_STACK_LINE(438)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(438)
				int tmp14 = (len - right);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(438)
				int _g2 = tmp14;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(438)
				while((true)){
					HX_STACK_LINE(438)
					bool tmp15 = (_g3 < _g2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(438)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(438)
					if ((tmp16)){
						HX_STACK_LINE(438)
						break;
					}
					HX_STACK_LINE(438)
					int tmp17 = (_g3)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(438)
					int j = tmp17;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(439)
					{
						HX_STACK_LINE(439)
						int tmp18 = (right + j);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(439)
						Float tmp19 = cb->__unsafe_get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(439)
						Float val = tmp19;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(439)
						int tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(439)
						Float tmp21 = val;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(439)
						Float tmp22 = pw->__unsafe_set(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(439)
						tmp22;
					}
				}
			}
		}
	}
	HX_STACK_LINE(443)
	bool tmp4 = (prev == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(443)
	if ((tmp4)){
		HX_STACK_LINE(447)
		return (int)0;
	}
	HX_STACK_LINE(451)
	bool tmp5 = (len < right);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(451)
	if ((tmp5)){
		HX_STACK_LINE(452)
		right = len;
	}
	HX_STACK_LINE(455)
	int tmp6 = (right - left);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(455)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecoder_obj,finishFrame,return )

Array< Float > VorbisDecoder_obj::getWindow( int len){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","getWindow",0x0a1679b5,"kha.audio2.ogg.vorbis.VorbisDecoder.getWindow","kha/audio2/ogg/vorbis/VorbisDecoder.hx",459,0xbe2976a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(460)
	hx::ShlEq(len,(int)1);
	HX_STACK_LINE(461)
	int tmp = len;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(461)
	::kha::audio2::ogg::vorbis::data::Header tmp1 = this->header;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(461)
	int tmp2 = tmp1->blocksize0;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(461)
	bool tmp3 = (tmp == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(461)
	Array< Float > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(461)
	if ((tmp3)){
		HX_STACK_LINE(462)
		Array< ::Dynamic > tmp5 = this->window;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(462)
		Array< Float > tmp6 = tmp5->__unsafe_get((int)0).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(462)
		tmp4 = tmp6;
	}
	else{
		HX_STACK_LINE(463)
		int tmp5 = len;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(463)
		::kha::audio2::ogg::vorbis::data::Header tmp6 = this->header;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(463)
		int tmp7 = tmp6->blocksize1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(463)
		bool tmp8 = (tmp5 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(463)
		if ((tmp8)){
			HX_STACK_LINE(464)
			Array< ::Dynamic > tmp9 = this->window;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(464)
			Array< Float > tmp10 = tmp9->__unsafe_get((int)1).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(464)
			tmp4 = tmp10;
		}
		else{
			HX_STACK_LINE(467)
			tmp4 = null();
		}
	}
	HX_STACK_LINE(461)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecoder_obj,getWindow,return )

Void VorbisDecoder_obj::initBlocksize( int bs,int n){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","initBlocksize",0x6667536d,"kha.audio2.ogg.vorbis.VorbisDecoder.initBlocksize","kha/audio2/ogg/vorbis/VorbisDecoder.hx",472,0xbe2976a1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bs,"bs")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(473)
		int tmp = (int(n) >> int((int)1));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(473)
		int n2 = tmp;		HX_STACK_VAR(n2,"n2");
		HX_STACK_LINE(473)
		int tmp1 = (int(n) >> int((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(473)
		int n4 = tmp1;		HX_STACK_VAR(n4,"n4");
		HX_STACK_LINE(473)
		int tmp2 = (int(n) >> int((int)3));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(473)
		int n8 = tmp2;		HX_STACK_VAR(n8,"n8");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			Array< Float > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(474)
			{
				HX_STACK_LINE(474)
				Array< Float > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(474)
				Array< Float > tmp4 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(474)
				this1 = tmp4;
				HX_STACK_LINE(474)
				int tmp5 = n2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(474)
				this1->__SetSizeExact(tmp5);
				HX_STACK_LINE(474)
				tmp3 = this1;
			}
			HX_STACK_LINE(474)
			Array< Float > val = tmp3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(474)
			Array< ::Dynamic > tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(474)
			int tmp5 = bs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(474)
			Array< Float > tmp6 = val;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(474)
			Array< Float > tmp7 = tmp4->__unsafe_set(tmp5,tmp6).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(474)
			tmp7;
		}
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			Array< Float > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				Array< Float > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(475)
				Array< Float > tmp4 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(475)
				this1 = tmp4;
				HX_STACK_LINE(475)
				int tmp5 = n2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(475)
				this1->__SetSizeExact(tmp5);
				HX_STACK_LINE(475)
				tmp3 = this1;
			}
			HX_STACK_LINE(475)
			Array< Float > val = tmp3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(475)
			Array< ::Dynamic > tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(475)
			int tmp5 = bs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(475)
			Array< Float > tmp6 = val;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(475)
			Array< Float > tmp7 = tmp4->__unsafe_set(tmp5,tmp6).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(475)
			tmp7;
		}
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			Array< Float > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				Array< Float > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(476)
				Array< Float > tmp4 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(476)
				this1 = tmp4;
				HX_STACK_LINE(476)
				int tmp5 = n4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(476)
				this1->__SetSizeExact(tmp5);
				HX_STACK_LINE(476)
				tmp3 = this1;
			}
			HX_STACK_LINE(476)
			Array< Float > val = tmp3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(476)
			Array< ::Dynamic > tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(476)
			int tmp5 = bs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(476)
			Array< Float > tmp6 = val;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(476)
			Array< Float > tmp7 = tmp4->__unsafe_set(tmp5,tmp6).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(476)
			tmp7;
		}
		HX_STACK_LINE(477)
		{
			HX_STACK_LINE(477)
			Array< Float > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				Array< Float > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(477)
				Array< Float > tmp4 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(477)
				this1 = tmp4;
				HX_STACK_LINE(477)
				int tmp5 = n2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(477)
				this1->__SetSizeExact(tmp5);
				HX_STACK_LINE(477)
				tmp3 = this1;
			}
			HX_STACK_LINE(477)
			Array< Float > val = tmp3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(477)
			Array< ::Dynamic > tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(477)
			int tmp5 = bs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(477)
			Array< Float > tmp6 = val;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(477)
			Array< Float > tmp7 = tmp4->__unsafe_set(tmp5,tmp6).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(477)
			tmp7;
		}
		HX_STACK_LINE(478)
		{
			HX_STACK_LINE(478)
			Array< int > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(478)
				Array< int > tmp4 = Array_obj< int >::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(478)
				this1 = tmp4;
				HX_STACK_LINE(478)
				int tmp5 = n8;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(478)
				this1->__SetSizeExact(tmp5);
				HX_STACK_LINE(478)
				tmp3 = this1;
			}
			HX_STACK_LINE(478)
			Array< int > val = tmp3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(478)
			Array< ::Dynamic > tmp4 = this->bitReverseData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(478)
			int tmp5 = bs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(478)
			Array< int > tmp6 = val;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(478)
			Array< int > tmp7 = tmp4->__unsafe_set(tmp5,tmp6).StaticCast< Array< int > >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(478)
			tmp7;
		}
		HX_STACK_LINE(480)
		int tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		Array< ::Dynamic > tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(480)
		int tmp5 = bs;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(480)
		Array< Float > tmp6 = tmp4->__unsafe_get(tmp5).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(480)
		Array< Float > tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(480)
		Array< ::Dynamic > tmp8 = this->b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(480)
		int tmp9 = bs;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(480)
		Array< Float > tmp10 = tmp8->__unsafe_get(tmp9).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(480)
		Array< Float > tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(480)
		Array< ::Dynamic > tmp12 = this->c;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(480)
		int tmp13 = bs;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(480)
		Array< Float > tmp14 = tmp12->__unsafe_get(tmp13).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(480)
		Array< Float > tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(480)
		::kha::audio2::ogg::vorbis::VorbisTools_obj::computeTwiddleFactors(tmp3,tmp7,tmp11,tmp15);
		HX_STACK_LINE(481)
		int tmp16 = n;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(481)
		Array< ::Dynamic > tmp17 = this->window;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(481)
		int tmp18 = bs;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(481)
		Array< Float > tmp19 = tmp17->__unsafe_get(tmp18).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(481)
		Array< Float > tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(481)
		::kha::audio2::ogg::vorbis::VorbisTools_obj::computeWindow(tmp16,tmp20);
		HX_STACK_LINE(482)
		int tmp21 = n;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(482)
		Array< ::Dynamic > tmp22 = this->bitReverseData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(482)
		int tmp23 = bs;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(482)
		Array< int > tmp24 = tmp22->__unsafe_get(tmp23).StaticCast< Array< int > >();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(482)
		Array< int > tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(482)
		::kha::audio2::ogg::vorbis::VorbisTools_obj::computeBitReverse(tmp21,tmp25);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VorbisDecoder_obj,initBlocksize,(void))

Void VorbisDecoder_obj::inverseMdct( Array< Float > buffer,int n,bool blocktype){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","inverseMdct",0x15d967e7,"kha.audio2.ogg.vorbis.VorbisDecoder.inverseMdct","kha/audio2/ogg/vorbis/VorbisDecoder.hx",485,0xbe2976a1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(blocktype,"blocktype")
		HX_STACK_LINE(486)
		bool tmp = blocktype;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(486)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(486)
		if ((tmp)){
			HX_STACK_LINE(486)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(486)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(486)
		int bt = tmp1;		HX_STACK_VAR(bt,"bt");
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(487)
			Array< ::Dynamic > tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(487)
			int tmp3 = bt;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(487)
			Array< Float > tmp4 = tmp2->__unsafe_get(tmp3).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(487)
			Array< Float > a = tmp4;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(487)
			Array< ::Dynamic > tmp5 = this->b;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(487)
			int tmp6 = bt;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(487)
			Array< Float > tmp7 = tmp5->__unsafe_get(tmp6).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(487)
			Array< Float > b = tmp7;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(487)
			Array< ::Dynamic > tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(487)
			int tmp9 = bt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(487)
			Array< Float > tmp10 = tmp8->__unsafe_get(tmp9).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(487)
			Array< Float > c = tmp10;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(487)
			Array< ::Dynamic > tmp11 = this->bitReverseData;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(487)
			int tmp12 = bt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(487)
			Array< int > tmp13 = tmp11->__unsafe_get(tmp12).StaticCast< Array< int > >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(487)
			Array< int > bitReverse = tmp13;		HX_STACK_VAR(bitReverse,"bitReverse");
			HX_STACK_LINE(487)
			int tmp14 = (int(n) >> int((int)1));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(487)
			int n2 = tmp14;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(487)
			int tmp15 = (int(n) >> int((int)2));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(487)
			int n4 = tmp15;		HX_STACK_VAR(n4,"n4");
			HX_STACK_LINE(487)
			int tmp16 = (int(n) >> int((int)3));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(487)
			int n8 = tmp16;		HX_STACK_VAR(n8,"n8");
			HX_STACK_LINE(487)
			Array< Float > tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				Array< Float > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(487)
				Array< Float > tmp18 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(487)
				this1 = tmp18;
				HX_STACK_LINE(487)
				int tmp19 = n2;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(487)
				this1->__SetSizeExact(tmp19);
				HX_STACK_LINE(487)
				tmp17 = this1;
			}
			HX_STACK_LINE(487)
			Array< Float > buf2 = tmp17;		HX_STACK_VAR(buf2,"buf2");
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp18 = (n2 - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(487)
				int dOffset = tmp18;		HX_STACK_VAR(dOffset,"dOffset");
				HX_STACK_LINE(487)
				int aaOffset = (int)0;		HX_STACK_VAR(aaOffset,"aaOffset");
				HX_STACK_LINE(487)
				int eOffset = (int)0;		HX_STACK_VAR(eOffset,"eOffset");
				HX_STACK_LINE(487)
				int eStopOffset = n2;		HX_STACK_VAR(eStopOffset,"eStopOffset");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					bool tmp19 = (eOffset != eStopOffset);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(487)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(487)
					if ((tmp20)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp21 = eOffset;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(487)
						Float tmp22 = buffer->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(487)
						Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(487)
						int tmp24 = aaOffset;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(487)
						Float tmp25 = a->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(487)
						Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						int tmp28 = (eOffset + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = buffer->__unsafe_get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						int tmp31 = (aaOffset + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(487)
						Float tmp32 = a->__unsafe_get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(487)
						Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(487)
						Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(487)
						Float tmp35 = (tmp27 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(487)
						Float val = tmp35;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp36 = (dOffset + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(487)
						Float tmp37 = val;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(487)
						Float tmp38 = buf2->__unsafe_set(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(487)
						tmp38;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp21 = eOffset;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(487)
						Float tmp22 = buffer->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(487)
						Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(487)
						int tmp24 = (aaOffset + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(487)
						Float tmp25 = a->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(487)
						Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						int tmp28 = (eOffset + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = buffer->__unsafe_get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						int tmp31 = aaOffset;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(487)
						Float tmp32 = a->__unsafe_get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(487)
						Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(487)
						Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(487)
						Float tmp35 = (tmp27 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(487)
						Float val = tmp35;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp36 = dOffset;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(487)
						Float tmp37 = val;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(487)
						Float tmp38 = buf2->__unsafe_set(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(487)
						tmp38;
					}
					HX_STACK_LINE(487)
					hx::SubEq(dOffset,(int)2);
					HX_STACK_LINE(487)
					hx::AddEq(aaOffset,(int)2);
					HX_STACK_LINE(487)
					hx::AddEq(eOffset,(int)4);
				}
				HX_STACK_LINE(487)
				int tmp19 = (n2 - (int)3);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(487)
				eOffset = tmp19;
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					bool tmp20 = (dOffset >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(487)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(487)
					if ((tmp21)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp22 = (eOffset + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(487)
						Float tmp23 = buffer->__unsafe_get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(487)
						Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(487)
						Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(487)
						int tmp26 = aaOffset;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						Float tmp27 = a->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						int tmp30 = eOffset;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						Float tmp31 = buffer->__unsafe_get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(487)
						Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(487)
						Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(487)
						int tmp34 = (aaOffset + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(487)
						Float tmp35 = a->__unsafe_get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(487)
						Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(487)
						Float tmp37 = (tmp33 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(487)
						Float tmp38 = (tmp29 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(487)
						Float val = tmp38;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp39 = (dOffset + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(487)
						Float tmp40 = val;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(487)
						Float tmp41 = buf2->__unsafe_set(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(487)
						tmp41;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp22 = (eOffset + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(487)
						Float tmp23 = buffer->__unsafe_get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(487)
						Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(487)
						Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(487)
						int tmp26 = (aaOffset + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						Float tmp27 = a->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						int tmp30 = eOffset;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						Float tmp31 = buffer->__unsafe_get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(487)
						Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(487)
						Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(487)
						int tmp34 = aaOffset;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(487)
						Float tmp35 = a->__unsafe_get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(487)
						Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(487)
						Float tmp37 = (tmp33 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(487)
						Float tmp38 = (tmp29 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(487)
						Float val = tmp38;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp39 = dOffset;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(487)
						Float tmp40 = val;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(487)
						Float tmp41 = buf2->__unsafe_set(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(487)
						tmp41;
					}
					HX_STACK_LINE(487)
					hx::SubEq(dOffset,(int)2);
					HX_STACK_LINE(487)
					hx::AddEq(aaOffset,(int)2);
					HX_STACK_LINE(487)
					hx::SubEq(eOffset,(int)4);
				}
			}
			HX_STACK_LINE(487)
			Array< Float > u = buffer;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(487)
			Array< Float > v = buf2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp18 = (n2 - (int)8);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(487)
				int aaOffset = tmp18;		HX_STACK_VAR(aaOffset,"aaOffset");
				HX_STACK_LINE(487)
				int eOffset0 = n4;		HX_STACK_VAR(eOffset0,"eOffset0");
				HX_STACK_LINE(487)
				int eOffset1 = (int)0;		HX_STACK_VAR(eOffset1,"eOffset1");
				HX_STACK_LINE(487)
				int dOffset0 = n4;		HX_STACK_VAR(dOffset0,"dOffset0");
				HX_STACK_LINE(487)
				int dOffset1 = (int)0;		HX_STACK_VAR(dOffset1,"dOffset1");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					bool tmp19 = (aaOffset >= (int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(487)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(487)
					if ((tmp20)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp21 = (eOffset0 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(487)
					Float tmp22 = v->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(487)
					Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(487)
					int tmp24 = (eOffset1 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(487)
					Float tmp25 = v->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(487)
					Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(487)
					Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(487)
					Float v41_21 = tmp27;		HX_STACK_VAR(v41_21,"v41_21");
					HX_STACK_LINE(487)
					int tmp28 = eOffset0;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(487)
					Float tmp29 = v->__unsafe_get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(487)
					Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					int tmp31 = eOffset1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					Float tmp32 = v->__unsafe_get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					Float v40_20 = tmp34;		HX_STACK_VAR(v40_20,"v40_20");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp35 = (eOffset0 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(487)
						Float tmp36 = v->__unsafe_get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(487)
						Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(487)
						int tmp38 = (eOffset1 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(487)
						Float tmp39 = v->__unsafe_get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(487)
						Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(487)
						Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(487)
						Float val = tmp41;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp42 = (dOffset0 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(487)
						Float tmp43 = val;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(487)
						Float tmp44 = u->__unsafe_set(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(487)
						tmp44;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp35 = eOffset0;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(487)
						Float tmp36 = v->__unsafe_get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(487)
						Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(487)
						int tmp38 = eOffset1;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(487)
						Float tmp39 = v->__unsafe_get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(487)
						Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(487)
						Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(487)
						Float val = tmp41;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp42 = dOffset0;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(487)
						Float tmp43 = val;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(487)
						Float tmp44 = u->__unsafe_set(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(487)
						tmp44;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp35 = v41_21;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(487)
						int tmp36 = (aaOffset + (int)4);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(487)
						Float tmp37 = a->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(487)
						Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(487)
						Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(487)
						Float tmp40 = v40_20;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(487)
						int tmp41 = (aaOffset + (int)5);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(487)
						Float tmp42 = a->__unsafe_get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(487)
						Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(487)
						Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(487)
						Float tmp45 = (tmp39 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(487)
						Float val = tmp45;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp46 = (dOffset1 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(487)
						Float tmp47 = val;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						Float tmp48 = u->__unsafe_set(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						tmp48;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp35 = v40_20;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(487)
						int tmp36 = (aaOffset + (int)4);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(487)
						Float tmp37 = a->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(487)
						Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(487)
						Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(487)
						Float tmp40 = v41_21;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(487)
						int tmp41 = (aaOffset + (int)5);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(487)
						Float tmp42 = a->__unsafe_get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(487)
						Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(487)
						Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(487)
						Float tmp45 = (tmp39 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(487)
						Float val = tmp45;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp46 = dOffset1;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(487)
						Float tmp47 = val;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						Float tmp48 = u->__unsafe_set(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						tmp48;
					}
					HX_STACK_LINE(487)
					int tmp35 = (eOffset0 + (int)3);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					Float tmp36 = v->__unsafe_get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					int tmp38 = (eOffset1 + (int)3);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					Float tmp39 = v->__unsafe_get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(487)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(487)
					Float tmp41 = (tmp37 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(487)
					v41_21 = tmp41;
					HX_STACK_LINE(487)
					int tmp42 = (eOffset0 + (int)2);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(487)
					Float tmp43 = v->__unsafe_get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(487)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(487)
					int tmp45 = (eOffset1 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(487)
					Float tmp46 = v->__unsafe_get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(487)
					Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(487)
					Float tmp48 = (tmp44 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(487)
					v40_20 = tmp48;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp49 = (eOffset0 + (int)3);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = v->__unsafe_get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						int tmp52 = (eOffset1 + (int)3);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						Float tmp53 = v->__unsafe_get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float val = tmp55;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp56 = (dOffset0 + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = val;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float tmp58 = u->__unsafe_set(tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						tmp58;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp49 = (eOffset0 + (int)2);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = v->__unsafe_get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						int tmp52 = (eOffset1 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						Float tmp53 = v->__unsafe_get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float val = tmp55;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp56 = (dOffset0 + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = val;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float tmp58 = u->__unsafe_set(tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						tmp58;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp49 = v41_21;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						int tmp50 = aaOffset;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = a->__unsafe_get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						Float tmp53 = (tmp49 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = v40_20;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						int tmp55 = (aaOffset + (int)1);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = a->__unsafe_get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float tmp58 = (tmp54 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = (tmp53 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float val = tmp59;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp60 = (dOffset1 + (int)3);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						Float tmp61 = val;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						Float tmp62 = u->__unsafe_set(tmp60,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						tmp62;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp49 = v40_20;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						int tmp50 = aaOffset;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = a->__unsafe_get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						Float tmp53 = (tmp49 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = v41_21;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						int tmp55 = (aaOffset + (int)1);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = a->__unsafe_get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float tmp58 = (tmp54 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = (tmp53 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float val = tmp59;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp60 = (dOffset1 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						Float tmp61 = val;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						Float tmp62 = u->__unsafe_set(tmp60,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						tmp62;
					}
					HX_STACK_LINE(487)
					hx::SubEq(aaOffset,(int)8);
					HX_STACK_LINE(487)
					hx::AddEq(dOffset0,(int)4);
					HX_STACK_LINE(487)
					hx::AddEq(dOffset1,(int)4);
					HX_STACK_LINE(487)
					hx::AddEq(eOffset0,(int)4);
					HX_STACK_LINE(487)
					hx::AddEq(eOffset1,(int)4);
				}
			}
			HX_STACK_LINE(487)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				Array< int > tmp19 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(487)
				Array< int > log2_4 = tmp19;		HX_STACK_VAR(log2_4,"log2_4");
				HX_STACK_LINE(487)
				int tmp20 = n;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int tmp21 = (int)16384;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(487)
				if ((tmp22)){
					HX_STACK_LINE(487)
					int tmp23 = n;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(487)
					int tmp24 = (int)16;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(487)
					bool tmp25 = (tmp23 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(487)
					if ((tmp25)){
						HX_STACK_LINE(487)
						int tmp26 = log2_4->__get(n);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						tmp18 = tmp26;
					}
					else{
						HX_STACK_LINE(487)
						int tmp26 = n;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						int tmp27 = (int)512;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						bool tmp28 = (tmp26 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						if ((tmp28)){
							HX_STACK_LINE(487)
							Array< int > tmp29 = log2_4;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(487)
							int tmp30 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(487)
							int tmp31 = tmp29->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(487)
							tmp18 = ((int)5 + tmp31);
						}
						else{
							HX_STACK_LINE(487)
							Array< int > tmp29 = log2_4;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(487)
							int tmp30 = (int(n) >> int((int)10));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(487)
							int tmp31 = tmp29->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(487)
							tmp18 = ((int)10 + tmp31);
						}
					}
				}
				else{
					HX_STACK_LINE(487)
					int tmp23 = n;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(487)
					int tmp24 = (int)16777216;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(487)
					bool tmp25 = (tmp23 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(487)
					if ((tmp25)){
						HX_STACK_LINE(487)
						int tmp26 = n;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						int tmp27 = (int)524288;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						bool tmp28 = (tmp26 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						if ((tmp28)){
							HX_STACK_LINE(487)
							Array< int > tmp29 = log2_4;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(487)
							int tmp30 = (int(n) >> int((int)15));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(487)
							int tmp31 = tmp29->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(487)
							tmp18 = ((int)15 + tmp31);
						}
						else{
							HX_STACK_LINE(487)
							Array< int > tmp29 = log2_4;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(487)
							int tmp30 = (int(n) >> int((int)20));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(487)
							int tmp31 = tmp29->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(487)
							tmp18 = ((int)20 + tmp31);
						}
					}
					else{
						HX_STACK_LINE(487)
						int tmp26 = n;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						int tmp27 = (int)536870912;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						bool tmp28 = (tmp26 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						if ((tmp28)){
							HX_STACK_LINE(487)
							Array< int > tmp29 = log2_4;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(487)
							int tmp30 = (int(n) >> int((int)25));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(487)
							int tmp31 = tmp29->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(487)
							tmp18 = ((int)25 + tmp31);
						}
						else{
							HX_STACK_LINE(487)
							int tmp29 = n;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(487)
							int tmp30 = (int)-2147483648;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(487)
							bool tmp31 = (tmp29 < tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(487)
							if ((tmp31)){
								HX_STACK_LINE(487)
								Array< int > tmp32 = log2_4;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(487)
								int tmp33 = (int(n) >> int((int)30));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(487)
								int tmp34 = tmp32->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(487)
								tmp18 = ((int)30 + tmp34);
							}
							else{
								HX_STACK_LINE(487)
								tmp18 = (int)0;
							}
						}
					}
				}
			}
			HX_STACK_LINE(487)
			int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(487)
			int ld = tmp19;		HX_STACK_VAR(ld,"ld");
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp20 = (n2 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int tmp21 = (n4 * (int)0);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(487)
				int i_off = tmp22;		HX_STACK_VAR(i_off,"i_off");
				HX_STACK_LINE(487)
				int eeOffset0 = i_off;		HX_STACK_VAR(eeOffset0,"eeOffset0");
				HX_STACK_LINE(487)
				int tmp23 = i_off;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(487)
				int tmp24 = (int(n) >> int((int)3));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(487)
				int tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(487)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(487)
				int eeOffset2 = tmp26;		HX_STACK_VAR(eeOffset2,"eeOffset2");
				HX_STACK_LINE(487)
				int aOffset = (int)0;		HX_STACK_VAR(aOffset,"aOffset");
				HX_STACK_LINE(487)
				int tmp27 = (int(n) >> int((int)4));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(487)
				int tmp28 = (int(tmp27) >> int((int)2));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(487)
				int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(487)
				int i = tmp29;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					int tmp30 = --(i);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					bool tmp31 = (tmp30 > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					if ((tmp32)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp33 = eeOffset0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					Float tmp34 = u->__unsafe_get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					int tmp36 = eeOffset2;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					Float tmp37 = u->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(487)
					Float k00_20 = tmp39;		HX_STACK_VAR(k00_20,"k00_20");
					HX_STACK_LINE(487)
					int tmp40 = (eeOffset0 + (int)-1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(487)
					Float tmp41 = u->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(487)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(487)
					int tmp43 = (eeOffset2 + (int)-1);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(487)
					Float tmp44 = u->__unsafe_get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(487)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(487)
					Float tmp46 = (tmp42 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(487)
					Float k01_21 = tmp46;		HX_STACK_VAR(k01_21,"k01_21");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = eeOffset0;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = eeOffset2;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = (eeOffset0 + (int)-1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = (eeOffset2 + (int)-1);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k00_20;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k01_21;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = eeOffset2;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k01_21;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k00_20;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = (eeOffset2 + (int)-1);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)8);
					HX_STACK_LINE(487)
					int tmp47 = (eeOffset0 + (int)-2);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(487)
					Float tmp48 = u->__unsafe_get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(487)
					Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(487)
					int tmp50 = (eeOffset2 + (int)-2);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(487)
					Float tmp51 = u->__unsafe_get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(487)
					Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(487)
					Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(487)
					k00_20 = tmp53;
					HX_STACK_LINE(487)
					int tmp54 = (eeOffset0 + (int)-3);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(487)
					Float tmp55 = u->__unsafe_get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(487)
					Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(487)
					int tmp57 = (eeOffset2 + (int)-3);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(487)
					Float tmp58 = u->__unsafe_get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(487)
					Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(487)
					Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(487)
					k01_21 = tmp60;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eeOffset0 + (int)-2);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eeOffset2 + (int)-2);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eeOffset0 + (int)-3);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eeOffset2 + (int)-3);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k00_20;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k01_21;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eeOffset2 + (int)-2);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k01_21;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k00_20;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eeOffset2 + (int)-3);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)8);
					HX_STACK_LINE(487)
					int tmp61 = (eeOffset0 + (int)-4);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(487)
					Float tmp62 = u->__unsafe_get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(487)
					Float tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(487)
					int tmp64 = (eeOffset2 + (int)-4);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(487)
					Float tmp65 = u->__unsafe_get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(487)
					Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(487)
					Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(487)
					k00_20 = tmp67;
					HX_STACK_LINE(487)
					int tmp68 = (eeOffset0 + (int)-5);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(487)
					Float tmp69 = u->__unsafe_get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(487)
					Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(487)
					int tmp71 = (eeOffset2 + (int)-5);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(487)
					Float tmp72 = u->__unsafe_get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(487)
					Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(487)
					Float tmp74 = (tmp70 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(487)
					k01_21 = tmp74;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eeOffset0 + (int)-4);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eeOffset2 + (int)-4);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eeOffset0 + (int)-5);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eeOffset2 + (int)-5);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k00_20;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k01_21;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eeOffset2 + (int)-4);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k01_21;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k00_20;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eeOffset2 + (int)-5);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)8);
					HX_STACK_LINE(487)
					int tmp75 = (eeOffset0 + (int)-6);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(487)
					Float tmp76 = u->__unsafe_get(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(487)
					Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(487)
					int tmp78 = (eeOffset2 + (int)-6);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(487)
					Float tmp79 = u->__unsafe_get(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(487)
					Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(487)
					Float tmp81 = (tmp77 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(487)
					k00_20 = tmp81;
					HX_STACK_LINE(487)
					int tmp82 = (eeOffset0 + (int)-7);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(487)
					Float tmp83 = u->__unsafe_get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(487)
					Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(487)
					int tmp85 = (eeOffset2 + (int)-7);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(487)
					Float tmp86 = u->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(487)
					Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(487)
					Float tmp88 = (tmp84 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(487)
					k01_21 = tmp88;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eeOffset0 + (int)-6);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eeOffset2 + (int)-6);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eeOffset0 + (int)-7);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eeOffset2 + (int)-7);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k00_20;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k01_21;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 - tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eeOffset2 + (int)-6);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k01_21;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k00_20;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eeOffset2 + (int)-7);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)8);
					HX_STACK_LINE(487)
					hx::SubEq(eeOffset0,(int)8);
					HX_STACK_LINE(487)
					hx::SubEq(eeOffset2,(int)8);
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp20 = (n2 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int tmp21 = n4;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(487)
				int i_off = tmp22;		HX_STACK_VAR(i_off,"i_off");
				HX_STACK_LINE(487)
				int eeOffset0 = i_off;		HX_STACK_VAR(eeOffset0,"eeOffset0");
				HX_STACK_LINE(487)
				int tmp23 = i_off;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(487)
				int tmp24 = (int(n) >> int((int)3));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(487)
				int tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(487)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(487)
				int eeOffset2 = tmp26;		HX_STACK_VAR(eeOffset2,"eeOffset2");
				HX_STACK_LINE(487)
				int aOffset = (int)0;		HX_STACK_VAR(aOffset,"aOffset");
				HX_STACK_LINE(487)
				int tmp27 = (int(n) >> int((int)4));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(487)
				int tmp28 = (int(tmp27) >> int((int)2));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(487)
				int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(487)
				int i = tmp29;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					int tmp30 = --(i);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					bool tmp31 = (tmp30 > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					if ((tmp32)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp33 = eeOffset0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					Float tmp34 = u->__unsafe_get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					int tmp36 = eeOffset2;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					Float tmp37 = u->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(487)
					Float k00_20 = tmp39;		HX_STACK_VAR(k00_20,"k00_20");
					HX_STACK_LINE(487)
					int tmp40 = (eeOffset0 + (int)-1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(487)
					Float tmp41 = u->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(487)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(487)
					int tmp43 = (eeOffset2 + (int)-1);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(487)
					Float tmp44 = u->__unsafe_get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(487)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(487)
					Float tmp46 = (tmp42 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(487)
					Float k01_21 = tmp46;		HX_STACK_VAR(k01_21,"k01_21");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = eeOffset0;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = eeOffset2;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = (eeOffset0 + (int)-1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = (eeOffset2 + (int)-1);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k00_20;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k01_21;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = eeOffset2;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k01_21;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k00_20;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = (eeOffset2 + (int)-1);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)8);
					HX_STACK_LINE(487)
					int tmp47 = (eeOffset0 + (int)-2);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(487)
					Float tmp48 = u->__unsafe_get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(487)
					Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(487)
					int tmp50 = (eeOffset2 + (int)-2);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(487)
					Float tmp51 = u->__unsafe_get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(487)
					Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(487)
					Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(487)
					k00_20 = tmp53;
					HX_STACK_LINE(487)
					int tmp54 = (eeOffset0 + (int)-3);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(487)
					Float tmp55 = u->__unsafe_get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(487)
					Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(487)
					int tmp57 = (eeOffset2 + (int)-3);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(487)
					Float tmp58 = u->__unsafe_get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(487)
					Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(487)
					Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(487)
					k01_21 = tmp60;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eeOffset0 + (int)-2);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eeOffset2 + (int)-2);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eeOffset0 + (int)-3);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eeOffset2 + (int)-3);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k00_20;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k01_21;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eeOffset2 + (int)-2);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k01_21;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k00_20;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eeOffset2 + (int)-3);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)8);
					HX_STACK_LINE(487)
					int tmp61 = (eeOffset0 + (int)-4);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(487)
					Float tmp62 = u->__unsafe_get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(487)
					Float tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(487)
					int tmp64 = (eeOffset2 + (int)-4);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(487)
					Float tmp65 = u->__unsafe_get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(487)
					Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(487)
					Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(487)
					k00_20 = tmp67;
					HX_STACK_LINE(487)
					int tmp68 = (eeOffset0 + (int)-5);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(487)
					Float tmp69 = u->__unsafe_get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(487)
					Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(487)
					int tmp71 = (eeOffset2 + (int)-5);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(487)
					Float tmp72 = u->__unsafe_get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(487)
					Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(487)
					Float tmp74 = (tmp70 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(487)
					k01_21 = tmp74;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eeOffset0 + (int)-4);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eeOffset2 + (int)-4);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eeOffset0 + (int)-5);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eeOffset2 + (int)-5);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k00_20;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k01_21;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eeOffset2 + (int)-4);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k01_21;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k00_20;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eeOffset2 + (int)-5);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)8);
					HX_STACK_LINE(487)
					int tmp75 = (eeOffset0 + (int)-6);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(487)
					Float tmp76 = u->__unsafe_get(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(487)
					Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(487)
					int tmp78 = (eeOffset2 + (int)-6);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(487)
					Float tmp79 = u->__unsafe_get(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(487)
					Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(487)
					Float tmp81 = (tmp77 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(487)
					k00_20 = tmp81;
					HX_STACK_LINE(487)
					int tmp82 = (eeOffset0 + (int)-7);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(487)
					Float tmp83 = u->__unsafe_get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(487)
					Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(487)
					int tmp85 = (eeOffset2 + (int)-7);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(487)
					Float tmp86 = u->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(487)
					Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(487)
					Float tmp88 = (tmp84 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(487)
					k01_21 = tmp88;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eeOffset0 + (int)-6);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eeOffset2 + (int)-6);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eeOffset0 + (int)-7);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eeOffset2 + (int)-7);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k00_20;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k01_21;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 - tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eeOffset2 + (int)-6);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k01_21;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k00_20;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eeOffset2 + (int)-7);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)8);
					HX_STACK_LINE(487)
					hx::SubEq(eeOffset0,(int)8);
					HX_STACK_LINE(487)
					hx::SubEq(eeOffset2,(int)8);
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp20 = (n2 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int tmp21 = (n8 * (int)0);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(487)
				int d0 = tmp22;		HX_STACK_VAR(d0,"d0");
				HX_STACK_LINE(487)
				int aOffset = (int)0;		HX_STACK_VAR(aOffset,"aOffset");
				HX_STACK_LINE(487)
				int eOffset0 = d0;		HX_STACK_VAR(eOffset0,"eOffset0");
				HX_STACK_LINE(487)
				int tmp23 = d0;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(487)
				int tmp24 = (int(n) >> int((int)4));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(487)
				int tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(487)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(487)
				int eOffset2 = tmp26;		HX_STACK_VAR(eOffset2,"eOffset2");
				HX_STACK_LINE(487)
				int tmp27 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(487)
				int tmp28 = (int(tmp27) >> int((int)2));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(487)
				int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(487)
				int i = tmp29;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					int tmp30 = --(i);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					bool tmp31 = (tmp30 > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					if ((tmp32)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp33 = eOffset0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					Float tmp34 = u->__unsafe_get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					int tmp36 = eOffset2;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					Float tmp37 = u->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(487)
					Float k00_20 = tmp39;		HX_STACK_VAR(k00_20,"k00_20");
					HX_STACK_LINE(487)
					int tmp40 = (eOffset0 + (int)-1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(487)
					Float tmp41 = u->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(487)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(487)
					int tmp43 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(487)
					Float tmp44 = u->__unsafe_get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(487)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(487)
					Float tmp46 = (tmp42 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(487)
					Float k01_21 = tmp46;		HX_STACK_VAR(k01_21,"k01_21");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = eOffset0;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = eOffset2;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = (eOffset0 + (int)-1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k00_20;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k01_21;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = eOffset2;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k01_21;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k00_20;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp47 = (eOffset0 + (int)-2);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(487)
					Float tmp48 = u->__unsafe_get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(487)
					Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(487)
					int tmp50 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(487)
					Float tmp51 = u->__unsafe_get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(487)
					Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(487)
					Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(487)
					k00_20 = tmp53;
					HX_STACK_LINE(487)
					int tmp54 = (eOffset0 + (int)-3);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(487)
					Float tmp55 = u->__unsafe_get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(487)
					Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(487)
					int tmp57 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(487)
					Float tmp58 = u->__unsafe_get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(487)
					Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(487)
					Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(487)
					k01_21 = tmp60;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eOffset0 + (int)-2);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eOffset0 + (int)-3);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k00_20;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k01_21;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k01_21;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k00_20;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp61 = (eOffset0 + (int)-4);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(487)
					Float tmp62 = u->__unsafe_get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(487)
					Float tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(487)
					int tmp64 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(487)
					Float tmp65 = u->__unsafe_get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(487)
					Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(487)
					Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(487)
					k00_20 = tmp67;
					HX_STACK_LINE(487)
					int tmp68 = (eOffset0 + (int)-5);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(487)
					Float tmp69 = u->__unsafe_get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(487)
					Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(487)
					int tmp71 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(487)
					Float tmp72 = u->__unsafe_get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(487)
					Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(487)
					Float tmp74 = (tmp70 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(487)
					k01_21 = tmp74;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eOffset0 + (int)-4);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eOffset0 + (int)-5);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k00_20;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k01_21;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k01_21;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k00_20;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp75 = (eOffset0 + (int)-6);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(487)
					Float tmp76 = u->__unsafe_get(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(487)
					Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(487)
					int tmp78 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(487)
					Float tmp79 = u->__unsafe_get(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(487)
					Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(487)
					Float tmp81 = (tmp77 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(487)
					k00_20 = tmp81;
					HX_STACK_LINE(487)
					int tmp82 = (eOffset0 + (int)-7);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(487)
					Float tmp83 = u->__unsafe_get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(487)
					Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(487)
					int tmp85 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(487)
					Float tmp86 = u->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(487)
					Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(487)
					Float tmp88 = (tmp84 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(487)
					k01_21 = tmp88;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eOffset0 + (int)-6);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eOffset0 + (int)-7);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k00_20;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k01_21;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 - tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k01_21;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k00_20;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					hx::SubEq(eOffset0,(int)8);
					HX_STACK_LINE(487)
					hx::SubEq(eOffset2,(int)8);
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp20 = (n2 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int tmp21 = n8;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(487)
				int d0 = tmp22;		HX_STACK_VAR(d0,"d0");
				HX_STACK_LINE(487)
				int aOffset = (int)0;		HX_STACK_VAR(aOffset,"aOffset");
				HX_STACK_LINE(487)
				int eOffset0 = d0;		HX_STACK_VAR(eOffset0,"eOffset0");
				HX_STACK_LINE(487)
				int tmp23 = d0;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(487)
				int tmp24 = (int(n) >> int((int)4));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(487)
				int tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(487)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(487)
				int eOffset2 = tmp26;		HX_STACK_VAR(eOffset2,"eOffset2");
				HX_STACK_LINE(487)
				int tmp27 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(487)
				int tmp28 = (int(tmp27) >> int((int)2));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(487)
				int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(487)
				int i = tmp29;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					int tmp30 = --(i);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					bool tmp31 = (tmp30 > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					if ((tmp32)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp33 = eOffset0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					Float tmp34 = u->__unsafe_get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					int tmp36 = eOffset2;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					Float tmp37 = u->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(487)
					Float k00_20 = tmp39;		HX_STACK_VAR(k00_20,"k00_20");
					HX_STACK_LINE(487)
					int tmp40 = (eOffset0 + (int)-1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(487)
					Float tmp41 = u->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(487)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(487)
					int tmp43 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(487)
					Float tmp44 = u->__unsafe_get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(487)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(487)
					Float tmp46 = (tmp42 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(487)
					Float k01_21 = tmp46;		HX_STACK_VAR(k01_21,"k01_21");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = eOffset0;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = eOffset2;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = (eOffset0 + (int)-1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k00_20;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k01_21;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = eOffset2;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k01_21;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k00_20;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp47 = (eOffset0 + (int)-2);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(487)
					Float tmp48 = u->__unsafe_get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(487)
					Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(487)
					int tmp50 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(487)
					Float tmp51 = u->__unsafe_get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(487)
					Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(487)
					Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(487)
					k00_20 = tmp53;
					HX_STACK_LINE(487)
					int tmp54 = (eOffset0 + (int)-3);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(487)
					Float tmp55 = u->__unsafe_get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(487)
					Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(487)
					int tmp57 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(487)
					Float tmp58 = u->__unsafe_get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(487)
					Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(487)
					Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(487)
					k01_21 = tmp60;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eOffset0 + (int)-2);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eOffset0 + (int)-3);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k00_20;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k01_21;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k01_21;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k00_20;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp61 = (eOffset0 + (int)-4);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(487)
					Float tmp62 = u->__unsafe_get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(487)
					Float tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(487)
					int tmp64 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(487)
					Float tmp65 = u->__unsafe_get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(487)
					Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(487)
					Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(487)
					k00_20 = tmp67;
					HX_STACK_LINE(487)
					int tmp68 = (eOffset0 + (int)-5);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(487)
					Float tmp69 = u->__unsafe_get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(487)
					Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(487)
					int tmp71 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(487)
					Float tmp72 = u->__unsafe_get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(487)
					Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(487)
					Float tmp74 = (tmp70 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(487)
					k01_21 = tmp74;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eOffset0 + (int)-4);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eOffset0 + (int)-5);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k00_20;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k01_21;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k01_21;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k00_20;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp75 = (eOffset0 + (int)-6);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(487)
					Float tmp76 = u->__unsafe_get(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(487)
					Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(487)
					int tmp78 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(487)
					Float tmp79 = u->__unsafe_get(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(487)
					Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(487)
					Float tmp81 = (tmp77 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(487)
					k00_20 = tmp81;
					HX_STACK_LINE(487)
					int tmp82 = (eOffset0 + (int)-7);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(487)
					Float tmp83 = u->__unsafe_get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(487)
					Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(487)
					int tmp85 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(487)
					Float tmp86 = u->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(487)
					Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(487)
					Float tmp88 = (tmp84 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(487)
					k01_21 = tmp88;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eOffset0 + (int)-6);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eOffset0 + (int)-7);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k00_20;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k01_21;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 - tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k01_21;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k00_20;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					hx::SubEq(eOffset0,(int)8);
					HX_STACK_LINE(487)
					hx::SubEq(eOffset2,(int)8);
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp20 = (n2 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int tmp21 = (n8 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(487)
				int d0 = tmp22;		HX_STACK_VAR(d0,"d0");
				HX_STACK_LINE(487)
				int aOffset = (int)0;		HX_STACK_VAR(aOffset,"aOffset");
				HX_STACK_LINE(487)
				int eOffset0 = d0;		HX_STACK_VAR(eOffset0,"eOffset0");
				HX_STACK_LINE(487)
				int tmp23 = d0;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(487)
				int tmp24 = (int(n) >> int((int)4));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(487)
				int tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(487)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(487)
				int eOffset2 = tmp26;		HX_STACK_VAR(eOffset2,"eOffset2");
				HX_STACK_LINE(487)
				int tmp27 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(487)
				int tmp28 = (int(tmp27) >> int((int)2));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(487)
				int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(487)
				int i = tmp29;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					int tmp30 = --(i);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					bool tmp31 = (tmp30 > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					if ((tmp32)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp33 = eOffset0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					Float tmp34 = u->__unsafe_get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					int tmp36 = eOffset2;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					Float tmp37 = u->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(487)
					Float k00_20 = tmp39;		HX_STACK_VAR(k00_20,"k00_20");
					HX_STACK_LINE(487)
					int tmp40 = (eOffset0 + (int)-1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(487)
					Float tmp41 = u->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(487)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(487)
					int tmp43 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(487)
					Float tmp44 = u->__unsafe_get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(487)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(487)
					Float tmp46 = (tmp42 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(487)
					Float k01_21 = tmp46;		HX_STACK_VAR(k01_21,"k01_21");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = eOffset0;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = eOffset2;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = (eOffset0 + (int)-1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k00_20;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k01_21;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = eOffset2;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k01_21;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k00_20;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp47 = (eOffset0 + (int)-2);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(487)
					Float tmp48 = u->__unsafe_get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(487)
					Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(487)
					int tmp50 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(487)
					Float tmp51 = u->__unsafe_get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(487)
					Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(487)
					Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(487)
					k00_20 = tmp53;
					HX_STACK_LINE(487)
					int tmp54 = (eOffset0 + (int)-3);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(487)
					Float tmp55 = u->__unsafe_get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(487)
					Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(487)
					int tmp57 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(487)
					Float tmp58 = u->__unsafe_get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(487)
					Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(487)
					Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(487)
					k01_21 = tmp60;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eOffset0 + (int)-2);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eOffset0 + (int)-3);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k00_20;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k01_21;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k01_21;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k00_20;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp61 = (eOffset0 + (int)-4);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(487)
					Float tmp62 = u->__unsafe_get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(487)
					Float tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(487)
					int tmp64 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(487)
					Float tmp65 = u->__unsafe_get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(487)
					Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(487)
					Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(487)
					k00_20 = tmp67;
					HX_STACK_LINE(487)
					int tmp68 = (eOffset0 + (int)-5);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(487)
					Float tmp69 = u->__unsafe_get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(487)
					Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(487)
					int tmp71 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(487)
					Float tmp72 = u->__unsafe_get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(487)
					Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(487)
					Float tmp74 = (tmp70 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(487)
					k01_21 = tmp74;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eOffset0 + (int)-4);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eOffset0 + (int)-5);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k00_20;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k01_21;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k01_21;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k00_20;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp75 = (eOffset0 + (int)-6);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(487)
					Float tmp76 = u->__unsafe_get(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(487)
					Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(487)
					int tmp78 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(487)
					Float tmp79 = u->__unsafe_get(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(487)
					Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(487)
					Float tmp81 = (tmp77 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(487)
					k00_20 = tmp81;
					HX_STACK_LINE(487)
					int tmp82 = (eOffset0 + (int)-7);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(487)
					Float tmp83 = u->__unsafe_get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(487)
					Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(487)
					int tmp85 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(487)
					Float tmp86 = u->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(487)
					Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(487)
					Float tmp88 = (tmp84 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(487)
					k01_21 = tmp88;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eOffset0 + (int)-6);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eOffset0 + (int)-7);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k00_20;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k01_21;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 - tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k01_21;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k00_20;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					hx::SubEq(eOffset0,(int)8);
					HX_STACK_LINE(487)
					hx::SubEq(eOffset2,(int)8);
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp20 = (n2 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int tmp21 = (n8 * (int)3);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(487)
				int d0 = tmp22;		HX_STACK_VAR(d0,"d0");
				HX_STACK_LINE(487)
				int aOffset = (int)0;		HX_STACK_VAR(aOffset,"aOffset");
				HX_STACK_LINE(487)
				int eOffset0 = d0;		HX_STACK_VAR(eOffset0,"eOffset0");
				HX_STACK_LINE(487)
				int tmp23 = d0;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(487)
				int tmp24 = (int(n) >> int((int)4));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(487)
				int tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(487)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(487)
				int eOffset2 = tmp26;		HX_STACK_VAR(eOffset2,"eOffset2");
				HX_STACK_LINE(487)
				int tmp27 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(487)
				int tmp28 = (int(tmp27) >> int((int)2));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(487)
				int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(487)
				int i = tmp29;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					int tmp30 = --(i);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					bool tmp31 = (tmp30 > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					if ((tmp32)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp33 = eOffset0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					Float tmp34 = u->__unsafe_get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					int tmp36 = eOffset2;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					Float tmp37 = u->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(487)
					Float k00_20 = tmp39;		HX_STACK_VAR(k00_20,"k00_20");
					HX_STACK_LINE(487)
					int tmp40 = (eOffset0 + (int)-1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(487)
					Float tmp41 = u->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(487)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(487)
					int tmp43 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(487)
					Float tmp44 = u->__unsafe_get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(487)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(487)
					Float tmp46 = (tmp42 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(487)
					Float k01_21 = tmp46;		HX_STACK_VAR(k01_21,"k01_21");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = eOffset0;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = eOffset2;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp47 = (eOffset0 + (int)-1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int _g = tmp47;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp48 = _g;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							Float tmp49 = u->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							int tmp51 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = (tmp50 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float val = tmp54;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp55 = _g;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							Float tmp56 = val;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							Float tmp57 = u->__unsafe_set(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							tmp57;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k00_20;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k01_21;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = eOffset2;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp47 = k01_21;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(487)
						int tmp48 = aOffset;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(487)
						Float tmp49 = a->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(487)
						Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(487)
						Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(487)
						Float tmp52 = k00_20;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(487)
						int tmp53 = (aOffset + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(487)
						Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(487)
						Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(487)
						Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(487)
						Float tmp57 = (tmp51 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(487)
						Float val = tmp57;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp58 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(487)
						Float tmp59 = val;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(487)
						Float tmp60 = u->__unsafe_set(tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(487)
						tmp60;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp47 = (eOffset0 + (int)-2);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(487)
					Float tmp48 = u->__unsafe_get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(487)
					Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(487)
					int tmp50 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(487)
					Float tmp51 = u->__unsafe_get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(487)
					Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(487)
					Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(487)
					k00_20 = tmp53;
					HX_STACK_LINE(487)
					int tmp54 = (eOffset0 + (int)-3);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(487)
					Float tmp55 = u->__unsafe_get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(487)
					Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(487)
					int tmp57 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(487)
					Float tmp58 = u->__unsafe_get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(487)
					Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(487)
					Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(487)
					k01_21 = tmp60;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eOffset0 + (int)-2);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp61 = (eOffset0 + (int)-3);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int _g = tmp61;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp62 = _g;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = u->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float val = tmp68;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp69 = _g;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							Float tmp70 = val;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							Float tmp71 = u->__unsafe_set(tmp69,tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							tmp71;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k00_20;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k01_21;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp61 = k01_21;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(487)
						int tmp62 = aOffset;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(487)
						Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(487)
						Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(487)
						Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(487)
						Float tmp66 = k00_20;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(487)
						int tmp67 = (aOffset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(487)
						Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(487)
						Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(487)
						Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(487)
						Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(487)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp72 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(487)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(487)
						Float tmp74 = u->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(487)
						tmp74;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp61 = (eOffset0 + (int)-4);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(487)
					Float tmp62 = u->__unsafe_get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(487)
					Float tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(487)
					int tmp64 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(487)
					Float tmp65 = u->__unsafe_get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(487)
					Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(487)
					Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(487)
					k00_20 = tmp67;
					HX_STACK_LINE(487)
					int tmp68 = (eOffset0 + (int)-5);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(487)
					Float tmp69 = u->__unsafe_get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(487)
					Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(487)
					int tmp71 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(487)
					Float tmp72 = u->__unsafe_get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(487)
					Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(487)
					Float tmp74 = (tmp70 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(487)
					k01_21 = tmp74;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eOffset0 + (int)-4);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp75 = (eOffset0 + (int)-5);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int _g = tmp75;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp76 = _g;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(487)
							Float tmp77 = u->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(487)
							Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(487)
							int tmp79 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(487)
							Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(487)
							Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(487)
							Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(487)
							Float val = tmp82;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp83 = _g;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(487)
							Float tmp84 = val;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(487)
							Float tmp85 = u->__unsafe_set(tmp83,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(487)
							tmp85;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k00_20;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k01_21;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp75 = k01_21;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(487)
						int tmp76 = aOffset;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(487)
						Float tmp77 = a->__unsafe_get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(487)
						Float tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(487)
						Float tmp79 = (tmp75 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(487)
						Float tmp80 = k00_20;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(487)
						int tmp81 = (aOffset + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(487)
						Float tmp82 = a->__unsafe_get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(487)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(487)
						Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(487)
						Float tmp85 = (tmp79 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(487)
						Float val = tmp85;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp86 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(487)
						Float tmp87 = val;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(487)
						Float tmp88 = u->__unsafe_set(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(487)
						tmp88;
					}
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
					HX_STACK_LINE(487)
					int tmp75 = (eOffset0 + (int)-6);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(487)
					Float tmp76 = u->__unsafe_get(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(487)
					Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(487)
					int tmp78 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(487)
					Float tmp79 = u->__unsafe_get(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(487)
					Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(487)
					Float tmp81 = (tmp77 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(487)
					k00_20 = tmp81;
					HX_STACK_LINE(487)
					int tmp82 = (eOffset0 + (int)-7);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(487)
					Float tmp83 = u->__unsafe_get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(487)
					Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(487)
					int tmp85 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(487)
					Float tmp86 = u->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(487)
					Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(487)
					Float tmp88 = (tmp84 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(487)
					k01_21 = tmp88;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eOffset0 + (int)-6);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp89 = (eOffset0 + (int)-7);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int _g = tmp89;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp90 = _g;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(487)
							Float tmp91 = u->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(487)
							Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(487)
							int tmp93 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(487)
							Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(487)
							Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(487)
							Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(487)
							Float val = tmp96;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(487)
							int tmp97 = _g;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(487)
							Float tmp98 = val;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(487)
							Float tmp99 = u->__unsafe_set(tmp97,tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(487)
							tmp99;
						}
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k00_20;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k01_21;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 - tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						Float tmp89 = k01_21;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(487)
						int tmp90 = aOffset;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(487)
						Float tmp91 = a->__unsafe_get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(487)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(487)
						Float tmp93 = (tmp89 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(487)
						Float tmp94 = k00_20;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(487)
						int tmp95 = (aOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(487)
						Float tmp96 = a->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(487)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(487)
						Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(487)
						Float tmp99 = (tmp93 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(487)
						Float val = tmp99;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp100 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(487)
						Float tmp101 = val;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(487)
						Float tmp102 = u->__unsafe_set(tmp100,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(487)
						tmp102;
					}
					HX_STACK_LINE(487)
					hx::SubEq(eOffset0,(int)8);
					HX_STACK_LINE(487)
					hx::SubEq(eOffset2,(int)8);
					HX_STACK_LINE(487)
					hx::AddEq(aOffset,(int)16);
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int _g1 = (int)2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(487)
				int tmp20 = (ld - (int)3);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int tmp21 = (int(tmp20) >> int((int)1));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				int _g = tmp21;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(487)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(487)
					if ((tmp23)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(487)
					int l = tmp24;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(487)
					int tmp25 = n;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(487)
					int tmp26 = (l + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(487)
					int tmp27 = (int(tmp25) >> int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(487)
					int k0 = tmp27;		HX_STACK_VAR(k0,"k0");
					HX_STACK_LINE(487)
					int tmp28 = (int(k0) >> int((int)1));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(487)
					int k0_2 = tmp28;		HX_STACK_VAR(k0_2,"k0_2");
					HX_STACK_LINE(487)
					int tmp29 = (l + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(487)
					int tmp30 = (int((int)1) << int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					int lim = tmp30;		HX_STACK_VAR(lim,"lim");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(487)
						while((true)){
							HX_STACK_LINE(487)
							bool tmp31 = (_g2 < lim);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(487)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(487)
							if ((tmp32)){
								HX_STACK_LINE(487)
								break;
							}
							HX_STACK_LINE(487)
							int tmp33 = (_g2)++;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(487)
							int i = tmp33;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(487)
							{
								HX_STACK_LINE(487)
								int tmp34 = (n2 - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(487)
								int tmp35 = (k0 * i);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(487)
								int tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(487)
								int d0 = tmp36;		HX_STACK_VAR(d0,"d0");
								HX_STACK_LINE(487)
								int tmp37 = (l + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(487)
								int tmp38 = (int((int)1) << int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(487)
								int k1 = tmp38;		HX_STACK_VAR(k1,"k1");
								HX_STACK_LINE(487)
								int aOffset = (int)0;		HX_STACK_VAR(aOffset,"aOffset");
								HX_STACK_LINE(487)
								int eOffset0 = d0;		HX_STACK_VAR(eOffset0,"eOffset0");
								HX_STACK_LINE(487)
								int tmp39 = d0;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(487)
								int tmp40 = k0_2;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(487)
								int tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(487)
								int tmp42 = (tmp39 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(487)
								int eOffset2 = tmp42;		HX_STACK_VAR(eOffset2,"eOffset2");
								HX_STACK_LINE(487)
								int tmp43 = n;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(487)
								int tmp44 = (l + (int)4);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(487)
								int tmp45 = (int(tmp43) >> int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(487)
								int tmp46 = (int(tmp45) >> int((int)2));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(487)
								int tmp47 = (tmp46 + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(487)
								int i1 = tmp47;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(487)
								while((true)){
									HX_STACK_LINE(487)
									int tmp48 = --(i1);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(487)
									bool tmp49 = (tmp48 > (int)0);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(487)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(487)
									if ((tmp50)){
										HX_STACK_LINE(487)
										break;
									}
									HX_STACK_LINE(487)
									int tmp51 = eOffset0;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(487)
									Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(487)
									Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(487)
									int tmp54 = eOffset2;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(487)
									Float tmp55 = u->__unsafe_get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(487)
									Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(487)
									Float tmp57 = (tmp53 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(487)
									Float k00_20 = tmp57;		HX_STACK_VAR(k00_20,"k00_20");
									HX_STACK_LINE(487)
									int tmp58 = (eOffset0 + (int)-1);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(487)
									Float tmp59 = u->__unsafe_get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(487)
									Float tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(487)
									int tmp61 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(487)
									Float tmp62 = u->__unsafe_get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(487)
									Float tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(487)
									Float tmp64 = (tmp60 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(487)
									Float k01_21 = tmp64;		HX_STACK_VAR(k01_21,"k01_21");
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										int tmp65 = eOffset0;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(487)
										int _g3 = tmp65;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(487)
										{
											HX_STACK_LINE(487)
											int tmp66 = _g3;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(487)
											Float tmp67 = u->__unsafe_get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(487)
											Float tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(487)
											int tmp69 = eOffset2;		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(487)
											Float tmp70 = u->__unsafe_get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(487)
											Float tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(487)
											Float tmp72 = (tmp68 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(487)
											Float val = tmp72;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(487)
											int tmp73 = _g3;		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(487)
											Float tmp74 = val;		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(487)
											Float tmp75 = u->__unsafe_set(tmp73,tmp74);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(487)
											tmp75;
										}
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										int tmp65 = (eOffset0 + (int)-1);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(487)
										int _g3 = tmp65;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(487)
										{
											HX_STACK_LINE(487)
											int tmp66 = _g3;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(487)
											Float tmp67 = u->__unsafe_get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(487)
											Float tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(487)
											int tmp69 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(487)
											Float tmp70 = u->__unsafe_get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(487)
											Float tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(487)
											Float tmp72 = (tmp68 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(487)
											Float val = tmp72;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(487)
											int tmp73 = _g3;		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(487)
											Float tmp74 = val;		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(487)
											Float tmp75 = u->__unsafe_set(tmp73,tmp74);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(487)
											tmp75;
										}
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										Float tmp65 = k00_20;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(487)
										int tmp66 = aOffset;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(487)
										Float tmp67 = a->__unsafe_get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(487)
										Float tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(487)
										Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(487)
										Float tmp70 = k01_21;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(487)
										int tmp71 = (aOffset + (int)1);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(487)
										Float tmp72 = a->__unsafe_get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(487)
										Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(487)
										Float tmp74 = (tmp70 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(487)
										Float tmp75 = (tmp69 - tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(487)
										Float val = tmp75;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(487)
										int tmp76 = eOffset2;		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(487)
										Float tmp77 = val;		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(487)
										Float tmp78 = u->__unsafe_set(tmp76,tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(487)
										tmp78;
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										Float tmp65 = k01_21;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(487)
										int tmp66 = aOffset;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(487)
										Float tmp67 = a->__unsafe_get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(487)
										Float tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(487)
										Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(487)
										Float tmp70 = k00_20;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(487)
										int tmp71 = (aOffset + (int)1);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(487)
										Float tmp72 = a->__unsafe_get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(487)
										Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(487)
										Float tmp74 = (tmp70 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(487)
										Float tmp75 = (tmp69 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(487)
										Float val = tmp75;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(487)
										int tmp76 = (eOffset2 + (int)-1);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(487)
										Float tmp77 = val;		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(487)
										Float tmp78 = u->__unsafe_set(tmp76,tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(487)
										tmp78;
									}
									HX_STACK_LINE(487)
									hx::AddEq(aOffset,k1);
									HX_STACK_LINE(487)
									int tmp65 = (eOffset0 + (int)-2);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(487)
									Float tmp66 = u->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(487)
									Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(487)
									int tmp68 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(487)
									Float tmp69 = u->__unsafe_get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(487)
									Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(487)
									Float tmp71 = (tmp67 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(487)
									k00_20 = tmp71;
									HX_STACK_LINE(487)
									int tmp72 = (eOffset0 + (int)-3);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(487)
									Float tmp73 = u->__unsafe_get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(487)
									Float tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(487)
									int tmp75 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(487)
									Float tmp76 = u->__unsafe_get(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(487)
									Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(487)
									Float tmp78 = (tmp74 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(487)
									k01_21 = tmp78;
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										int tmp79 = (eOffset0 + (int)-2);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(487)
										int _g3 = tmp79;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(487)
										{
											HX_STACK_LINE(487)
											int tmp80 = _g3;		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(487)
											Float tmp81 = u->__unsafe_get(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(487)
											Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(487)
											int tmp83 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(487)
											Float tmp84 = u->__unsafe_get(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(487)
											Float tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(487)
											Float tmp86 = (tmp82 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(487)
											Float val = tmp86;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(487)
											int tmp87 = _g3;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(487)
											Float tmp88 = val;		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(487)
											Float tmp89 = u->__unsafe_set(tmp87,tmp88);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(487)
											tmp89;
										}
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										int tmp79 = (eOffset0 + (int)-3);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(487)
										int _g3 = tmp79;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(487)
										{
											HX_STACK_LINE(487)
											int tmp80 = _g3;		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(487)
											Float tmp81 = u->__unsafe_get(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(487)
											Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(487)
											int tmp83 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(487)
											Float tmp84 = u->__unsafe_get(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(487)
											Float tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(487)
											Float tmp86 = (tmp82 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(487)
											Float val = tmp86;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(487)
											int tmp87 = _g3;		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(487)
											Float tmp88 = val;		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(487)
											Float tmp89 = u->__unsafe_set(tmp87,tmp88);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(487)
											tmp89;
										}
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										Float tmp79 = k00_20;		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(487)
										int tmp80 = aOffset;		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(487)
										Float tmp81 = a->__unsafe_get(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(487)
										Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(487)
										Float tmp83 = (tmp79 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(487)
										Float tmp84 = k01_21;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(487)
										int tmp85 = (aOffset + (int)1);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(487)
										Float tmp86 = a->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(487)
										Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(487)
										Float tmp88 = (tmp84 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(487)
										Float tmp89 = (tmp83 - tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(487)
										Float val = tmp89;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(487)
										int tmp90 = (eOffset2 + (int)-2);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(487)
										Float tmp91 = val;		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(487)
										Float tmp92 = u->__unsafe_set(tmp90,tmp91);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(487)
										tmp92;
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										Float tmp79 = k01_21;		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(487)
										int tmp80 = aOffset;		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(487)
										Float tmp81 = a->__unsafe_get(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(487)
										Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(487)
										Float tmp83 = (tmp79 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(487)
										Float tmp84 = k00_20;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(487)
										int tmp85 = (aOffset + (int)1);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(487)
										Float tmp86 = a->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(487)
										Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(487)
										Float tmp88 = (tmp84 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(487)
										Float tmp89 = (tmp83 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(487)
										Float val = tmp89;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(487)
										int tmp90 = (eOffset2 + (int)-3);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(487)
										Float tmp91 = val;		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(487)
										Float tmp92 = u->__unsafe_set(tmp90,tmp91);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(487)
										tmp92;
									}
									HX_STACK_LINE(487)
									hx::AddEq(aOffset,k1);
									HX_STACK_LINE(487)
									int tmp79 = (eOffset0 + (int)-4);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(487)
									Float tmp80 = u->__unsafe_get(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(487)
									Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(487)
									int tmp82 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(487)
									Float tmp83 = u->__unsafe_get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(487)
									Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(487)
									Float tmp85 = (tmp81 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(487)
									k00_20 = tmp85;
									HX_STACK_LINE(487)
									int tmp86 = (eOffset0 + (int)-5);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(487)
									Float tmp87 = u->__unsafe_get(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(487)
									Float tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(487)
									int tmp89 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(487)
									Float tmp90 = u->__unsafe_get(tmp89);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(487)
									Float tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(487)
									Float tmp92 = (tmp88 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(487)
									k01_21 = tmp92;
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										int tmp93 = (eOffset0 + (int)-4);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(487)
										int _g3 = tmp93;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(487)
										{
											HX_STACK_LINE(487)
											int tmp94 = _g3;		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(487)
											Float tmp95 = u->__unsafe_get(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(487)
											Float tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(487)
											int tmp97 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(487)
											Float tmp98 = u->__unsafe_get(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(487)
											Float tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(487)
											Float tmp100 = (tmp96 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(487)
											Float val = tmp100;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(487)
											int tmp101 = _g3;		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(487)
											Float tmp102 = val;		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(487)
											Float tmp103 = u->__unsafe_set(tmp101,tmp102);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(487)
											tmp103;
										}
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										int tmp93 = (eOffset0 + (int)-5);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(487)
										int _g3 = tmp93;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(487)
										{
											HX_STACK_LINE(487)
											int tmp94 = _g3;		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(487)
											Float tmp95 = u->__unsafe_get(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(487)
											Float tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(487)
											int tmp97 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(487)
											Float tmp98 = u->__unsafe_get(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(487)
											Float tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(487)
											Float tmp100 = (tmp96 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(487)
											Float val = tmp100;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(487)
											int tmp101 = _g3;		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(487)
											Float tmp102 = val;		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(487)
											Float tmp103 = u->__unsafe_set(tmp101,tmp102);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(487)
											tmp103;
										}
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										Float tmp93 = k00_20;		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(487)
										int tmp94 = aOffset;		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(487)
										Float tmp95 = a->__unsafe_get(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(487)
										Float tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(487)
										Float tmp97 = (tmp93 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(487)
										Float tmp98 = k01_21;		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(487)
										int tmp99 = (aOffset + (int)1);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(487)
										Float tmp100 = a->__unsafe_get(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(487)
										Float tmp101 = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(487)
										Float tmp102 = (tmp98 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(487)
										Float tmp103 = (tmp97 - tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(487)
										Float val = tmp103;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(487)
										int tmp104 = (eOffset2 + (int)-4);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(487)
										Float tmp105 = val;		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(487)
										Float tmp106 = u->__unsafe_set(tmp104,tmp105);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(487)
										tmp106;
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										Float tmp93 = k01_21;		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(487)
										int tmp94 = aOffset;		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(487)
										Float tmp95 = a->__unsafe_get(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(487)
										Float tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(487)
										Float tmp97 = (tmp93 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(487)
										Float tmp98 = k00_20;		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(487)
										int tmp99 = (aOffset + (int)1);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(487)
										Float tmp100 = a->__unsafe_get(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(487)
										Float tmp101 = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(487)
										Float tmp102 = (tmp98 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(487)
										Float tmp103 = (tmp97 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(487)
										Float val = tmp103;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(487)
										int tmp104 = (eOffset2 + (int)-5);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(487)
										Float tmp105 = val;		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(487)
										Float tmp106 = u->__unsafe_set(tmp104,tmp105);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(487)
										tmp106;
									}
									HX_STACK_LINE(487)
									hx::AddEq(aOffset,k1);
									HX_STACK_LINE(487)
									int tmp93 = (eOffset0 + (int)-6);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(487)
									Float tmp94 = u->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(487)
									Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(487)
									int tmp96 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(487)
									Float tmp97 = u->__unsafe_get(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(487)
									Float tmp98 = tmp97;		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(487)
									Float tmp99 = (tmp95 - tmp98);		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(487)
									k00_20 = tmp99;
									HX_STACK_LINE(487)
									int tmp100 = (eOffset0 + (int)-7);		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(487)
									Float tmp101 = u->__unsafe_get(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
									HX_STACK_LINE(487)
									Float tmp102 = tmp101;		HX_STACK_VAR(tmp102,"tmp102");
									HX_STACK_LINE(487)
									int tmp103 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(487)
									Float tmp104 = u->__unsafe_get(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
									HX_STACK_LINE(487)
									Float tmp105 = tmp104;		HX_STACK_VAR(tmp105,"tmp105");
									HX_STACK_LINE(487)
									Float tmp106 = (tmp102 - tmp105);		HX_STACK_VAR(tmp106,"tmp106");
									HX_STACK_LINE(487)
									k01_21 = tmp106;
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										int tmp107 = (eOffset0 + (int)-6);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(487)
										int _g3 = tmp107;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(487)
										{
											HX_STACK_LINE(487)
											int tmp108 = _g3;		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(487)
											Float tmp109 = u->__unsafe_get(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(487)
											Float tmp110 = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(487)
											int tmp111 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(487)
											Float tmp112 = u->__unsafe_get(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(487)
											Float tmp113 = tmp112;		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(487)
											Float tmp114 = (tmp110 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(487)
											Float val = tmp114;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(487)
											int tmp115 = _g3;		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(487)
											Float tmp116 = val;		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(487)
											Float tmp117 = u->__unsafe_set(tmp115,tmp116);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(487)
											tmp117;
										}
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										int tmp107 = (eOffset0 + (int)-7);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(487)
										int _g3 = tmp107;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(487)
										{
											HX_STACK_LINE(487)
											int tmp108 = _g3;		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(487)
											Float tmp109 = u->__unsafe_get(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
											HX_STACK_LINE(487)
											Float tmp110 = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(487)
											int tmp111 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp111,"tmp111");
											HX_STACK_LINE(487)
											Float tmp112 = u->__unsafe_get(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(487)
											Float tmp113 = tmp112;		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(487)
											Float tmp114 = (tmp110 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(487)
											Float val = tmp114;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(487)
											int tmp115 = _g3;		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(487)
											Float tmp116 = val;		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(487)
											Float tmp117 = u->__unsafe_set(tmp115,tmp116);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(487)
											tmp117;
										}
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										Float tmp107 = k00_20;		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(487)
										int tmp108 = aOffset;		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(487)
										Float tmp109 = a->__unsafe_get(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(487)
										Float tmp110 = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(487)
										Float tmp111 = (tmp107 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(487)
										Float tmp112 = k01_21;		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(487)
										int tmp113 = (aOffset + (int)1);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(487)
										Float tmp114 = a->__unsafe_get(tmp113);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(487)
										Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(487)
										Float tmp116 = (tmp112 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(487)
										Float tmp117 = (tmp111 - tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(487)
										Float val = tmp117;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(487)
										int tmp118 = (eOffset2 + (int)-6);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(487)
										Float tmp119 = val;		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(487)
										Float tmp120 = u->__unsafe_set(tmp118,tmp119);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(487)
										tmp120;
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										Float tmp107 = k01_21;		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(487)
										int tmp108 = aOffset;		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(487)
										Float tmp109 = a->__unsafe_get(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(487)
										Float tmp110 = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(487)
										Float tmp111 = (tmp107 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(487)
										Float tmp112 = k00_20;		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(487)
										int tmp113 = (aOffset + (int)1);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(487)
										Float tmp114 = a->__unsafe_get(tmp113);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(487)
										Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(487)
										Float tmp116 = (tmp112 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(487)
										Float tmp117 = (tmp111 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
										HX_STACK_LINE(487)
										Float val = tmp117;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(487)
										int tmp118 = (eOffset2 + (int)-7);		HX_STACK_VAR(tmp118,"tmp118");
										HX_STACK_LINE(487)
										Float tmp119 = val;		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(487)
										Float tmp120 = u->__unsafe_set(tmp118,tmp119);		HX_STACK_VAR(tmp120,"tmp120");
										HX_STACK_LINE(487)
										tmp120;
									}
									HX_STACK_LINE(487)
									hx::SubEq(eOffset0,(int)8);
									HX_STACK_LINE(487)
									hx::SubEq(eOffset2,(int)8);
									HX_STACK_LINE(487)
									hx::AddEq(aOffset,k1);
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp20 = (ld - (int)3);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int tmp21 = (int(tmp20) >> int((int)1));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				int _g1 = tmp21;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(487)
				int tmp22 = (ld - (int)6);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(487)
				int _g = tmp22;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					bool tmp23 = (_g1 < _g);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(487)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(487)
					if ((tmp24)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(487)
					int l = tmp25;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(487)
					int tmp26 = n;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(487)
					int tmp27 = (l + (int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(487)
					int tmp28 = (int(tmp26) >> int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(487)
					int k0 = tmp28;		HX_STACK_VAR(k0,"k0");
					HX_STACK_LINE(487)
					int tmp29 = (l + (int)3);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(487)
					int tmp30 = (int((int)1) << int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					int k1 = tmp30;		HX_STACK_VAR(k1,"k1");
					HX_STACK_LINE(487)
					int tmp31 = (int(k0) >> int((int)1));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					int k0_2 = tmp31;		HX_STACK_VAR(k0_2,"k0_2");
					HX_STACK_LINE(487)
					int tmp32 = n;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					int tmp33 = (l + (int)6);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					int tmp34 = (int(tmp32) >> int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					int rlim = tmp34;		HX_STACK_VAR(rlim,"rlim");
					HX_STACK_LINE(487)
					int tmp35 = (l + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					int tmp36 = (int((int)1) << int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					int lim = tmp36;		HX_STACK_VAR(lim,"lim");
					HX_STACK_LINE(487)
					int aOffset = (int)0;		HX_STACK_VAR(aOffset,"aOffset");
					HX_STACK_LINE(487)
					int tmp37 = (n2 - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					int i_off = tmp37;		HX_STACK_VAR(i_off,"i_off");
					HX_STACK_LINE(487)
					int tmp38 = (rlim + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					int r = tmp38;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(487)
					while((true)){
						HX_STACK_LINE(487)
						int tmp39 = --(r);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(487)
						bool tmp40 = (tmp39 > (int)0);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(487)
						bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(487)
						if ((tmp41)){
							HX_STACK_LINE(487)
							break;
						}
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							int tmp42 = aOffset;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(487)
							Float tmp43 = a->__unsafe_get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(487)
							Float A0 = tmp43;		HX_STACK_VAR(A0,"A0");
							HX_STACK_LINE(487)
							int tmp44 = (aOffset + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(487)
							Float tmp45 = a->__unsafe_get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(487)
							Float A1 = tmp45;		HX_STACK_VAR(A1,"A1");
							HX_STACK_LINE(487)
							int tmp46 = (aOffset + k1);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(487)
							Float tmp47 = a->__unsafe_get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(487)
							Float A2 = tmp47;		HX_STACK_VAR(A2,"A2");
							HX_STACK_LINE(487)
							int tmp48 = (aOffset + k1);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(487)
							int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(487)
							Float tmp50 = a->__unsafe_get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(487)
							Float A3 = tmp50;		HX_STACK_VAR(A3,"A3");
							HX_STACK_LINE(487)
							int tmp51 = aOffset;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(487)
							int tmp52 = (k1 * (int)2);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(487)
							int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(487)
							Float tmp54 = a->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(487)
							Float A4 = tmp54;		HX_STACK_VAR(A4,"A4");
							HX_STACK_LINE(487)
							int tmp55 = aOffset;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(487)
							int tmp56 = (k1 * (int)2);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(487)
							int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(487)
							int tmp58 = (tmp57 + (int)1);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(487)
							Float tmp59 = a->__unsafe_get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(487)
							Float A5 = tmp59;		HX_STACK_VAR(A5,"A5");
							HX_STACK_LINE(487)
							int tmp60 = aOffset;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(487)
							int tmp61 = (k1 * (int)3);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(487)
							int tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(487)
							Float tmp63 = a->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(487)
							Float A6 = tmp63;		HX_STACK_VAR(A6,"A6");
							HX_STACK_LINE(487)
							int tmp64 = aOffset;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(487)
							int tmp65 = (k1 * (int)3);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(487)
							int tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(487)
							int tmp67 = (tmp66 + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(487)
							Float tmp68 = a->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(487)
							Float A7 = tmp68;		HX_STACK_VAR(A7,"A7");
							HX_STACK_LINE(487)
							int eeOffset0 = i_off;		HX_STACK_VAR(eeOffset0,"eeOffset0");
							HX_STACK_LINE(487)
							int tmp69 = i_off;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(487)
							int tmp70 = k0_2;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(487)
							int tmp71 = -(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(487)
							int tmp72 = (tmp69 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(487)
							int eeOffset2 = tmp72;		HX_STACK_VAR(eeOffset2,"eeOffset2");
							HX_STACK_LINE(487)
							int tmp73 = (lim + (int)1);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(487)
							int i = tmp73;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(487)
							while((true)){
								HX_STACK_LINE(487)
								int tmp74 = --(i);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(487)
								bool tmp75 = (tmp74 > (int)0);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(487)
								bool tmp76 = !(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(487)
								if ((tmp76)){
									HX_STACK_LINE(487)
									break;
								}
								HX_STACK_LINE(487)
								int tmp77 = eeOffset0;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(487)
								Float tmp78 = u->__unsafe_get(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(487)
								Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(487)
								int tmp80 = eeOffset2;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(487)
								Float tmp81 = u->__unsafe_get(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(487)
								Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(487)
								Float tmp83 = (tmp79 - tmp82);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(487)
								Float k00 = tmp83;		HX_STACK_VAR(k00,"k00");
								HX_STACK_LINE(487)
								int tmp84 = (eeOffset0 + (int)-1);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(487)
								Float tmp85 = u->__unsafe_get(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(487)
								Float tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(487)
								int tmp87 = (eeOffset2 + (int)-1);		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(487)
								Float tmp88 = u->__unsafe_get(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(487)
								Float tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(487)
								Float tmp90 = (tmp86 - tmp89);		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(487)
								Float k11 = tmp90;		HX_STACK_VAR(k11,"k11");
								HX_STACK_LINE(487)
								{
									HX_STACK_LINE(487)
									int tmp91 = eeOffset0;		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(487)
									Float tmp92 = u->__unsafe_get(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(487)
									Float tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(487)
									int tmp94 = eeOffset2;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(487)
									Float tmp95 = u->__unsafe_get(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(487)
									Float tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(487)
									Float tmp97 = (tmp93 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(487)
									Float val = tmp97;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(487)
									int tmp98 = eeOffset0;		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(487)
									Float tmp99 = val;		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(487)
									Float tmp100 = u->__unsafe_set(tmp98,tmp99);		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(487)
									tmp100;
								}
								HX_STACK_LINE(487)
								{
									HX_STACK_LINE(487)
									int tmp91 = (eeOffset0 + (int)-1);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(487)
									Float tmp92 = u->__unsafe_get(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(487)
									Float tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(487)
									int tmp94 = (eeOffset2 + (int)-1);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(487)
									Float tmp95 = u->__unsafe_get(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(487)
									Float tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(487)
									Float tmp97 = (tmp93 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(487)
									Float val = tmp97;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(487)
									int tmp98 = (eeOffset0 + (int)-1);		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(487)
									Float tmp99 = val;		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(487)
									Float tmp100 = u->__unsafe_set(tmp98,tmp99);		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(487)
									tmp100;
								}
								HX_STACK_LINE(487)
								int tmp91 = eeOffset2;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(487)
								Float tmp92 = (k00 * A0);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(487)
								Float tmp93 = (k11 * A1);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(487)
								Float tmp94 = (tmp92 - tmp93);		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(487)
								Float tmp95 = u->__unsafe_set(tmp91,tmp94);		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(487)
								tmp95;
								HX_STACK_LINE(487)
								int tmp96 = (eeOffset2 + (int)-1);		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(487)
								Float tmp97 = (k11 * A0);		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(487)
								Float tmp98 = (k00 * A1);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(487)
								Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(487)
								Float tmp100 = u->__unsafe_set(tmp96,tmp99);		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(487)
								tmp100;
								HX_STACK_LINE(487)
								int tmp101 = (eeOffset0 + (int)-2);		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(487)
								Float tmp102 = u->__unsafe_get(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(487)
								Float tmp103 = tmp102;		HX_STACK_VAR(tmp103,"tmp103");
								HX_STACK_LINE(487)
								int tmp104 = (eeOffset2 + (int)-2);		HX_STACK_VAR(tmp104,"tmp104");
								HX_STACK_LINE(487)
								Float tmp105 = u->__unsafe_get(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
								HX_STACK_LINE(487)
								Float tmp106 = tmp105;		HX_STACK_VAR(tmp106,"tmp106");
								HX_STACK_LINE(487)
								Float tmp107 = (tmp103 - tmp106);		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(487)
								k00 = tmp107;
								HX_STACK_LINE(487)
								int tmp108 = (eeOffset0 + (int)-3);		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(487)
								Float tmp109 = u->__unsafe_get(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(487)
								Float tmp110 = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(487)
								int tmp111 = (eeOffset2 + (int)-3);		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(487)
								Float tmp112 = u->__unsafe_get(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(487)
								Float tmp113 = tmp112;		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(487)
								Float tmp114 = (tmp110 - tmp113);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(487)
								k11 = tmp114;
								HX_STACK_LINE(487)
								{
									HX_STACK_LINE(487)
									int tmp115 = (eeOffset0 + (int)-2);		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(487)
									Float tmp116 = u->__unsafe_get(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
									HX_STACK_LINE(487)
									Float tmp117 = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(487)
									int tmp118 = (eeOffset2 + (int)-2);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(487)
									Float tmp119 = u->__unsafe_get(tmp118);		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(487)
									Float tmp120 = tmp119;		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(487)
									Float tmp121 = (tmp117 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
									HX_STACK_LINE(487)
									Float val = tmp121;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(487)
									int tmp122 = (eeOffset0 + (int)-2);		HX_STACK_VAR(tmp122,"tmp122");
									HX_STACK_LINE(487)
									Float tmp123 = val;		HX_STACK_VAR(tmp123,"tmp123");
									HX_STACK_LINE(487)
									Float tmp124 = u->__unsafe_set(tmp122,tmp123);		HX_STACK_VAR(tmp124,"tmp124");
									HX_STACK_LINE(487)
									tmp124;
								}
								HX_STACK_LINE(487)
								{
									HX_STACK_LINE(487)
									int tmp115 = (eeOffset0 + (int)-3);		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(487)
									Float tmp116 = u->__unsafe_get(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
									HX_STACK_LINE(487)
									Float tmp117 = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(487)
									int tmp118 = (eeOffset2 + (int)-3);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(487)
									Float tmp119 = u->__unsafe_get(tmp118);		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(487)
									Float tmp120 = tmp119;		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(487)
									Float tmp121 = (tmp117 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
									HX_STACK_LINE(487)
									Float val = tmp121;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(487)
									int tmp122 = (eeOffset0 + (int)-3);		HX_STACK_VAR(tmp122,"tmp122");
									HX_STACK_LINE(487)
									Float tmp123 = val;		HX_STACK_VAR(tmp123,"tmp123");
									HX_STACK_LINE(487)
									Float tmp124 = u->__unsafe_set(tmp122,tmp123);		HX_STACK_VAR(tmp124,"tmp124");
									HX_STACK_LINE(487)
									tmp124;
								}
								HX_STACK_LINE(487)
								int tmp115 = (eeOffset2 + (int)-2);		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(487)
								Float tmp116 = (k00 * A2);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(487)
								Float tmp117 = (k11 * A3);		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(487)
								Float tmp118 = (tmp116 - tmp117);		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(487)
								Float tmp119 = u->__unsafe_set(tmp115,tmp118);		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(487)
								tmp119;
								HX_STACK_LINE(487)
								int tmp120 = (eeOffset2 + (int)-3);		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(487)
								Float tmp121 = (k11 * A2);		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(487)
								Float tmp122 = (k00 * A3);		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(487)
								Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(487)
								Float tmp124 = u->__unsafe_set(tmp120,tmp123);		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(487)
								tmp124;
								HX_STACK_LINE(487)
								int tmp125 = (eeOffset0 + (int)-4);		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(487)
								Float tmp126 = u->__unsafe_get(tmp125);		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(487)
								Float tmp127 = tmp126;		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(487)
								int tmp128 = (eeOffset2 + (int)-4);		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(487)
								Float tmp129 = u->__unsafe_get(tmp128);		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(487)
								Float tmp130 = tmp129;		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(487)
								Float tmp131 = (tmp127 - tmp130);		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(487)
								k00 = tmp131;
								HX_STACK_LINE(487)
								int tmp132 = (eeOffset0 + (int)-5);		HX_STACK_VAR(tmp132,"tmp132");
								HX_STACK_LINE(487)
								Float tmp133 = u->__unsafe_get(tmp132);		HX_STACK_VAR(tmp133,"tmp133");
								HX_STACK_LINE(487)
								Float tmp134 = tmp133;		HX_STACK_VAR(tmp134,"tmp134");
								HX_STACK_LINE(487)
								int tmp135 = (eeOffset2 + (int)-5);		HX_STACK_VAR(tmp135,"tmp135");
								HX_STACK_LINE(487)
								Float tmp136 = u->__unsafe_get(tmp135);		HX_STACK_VAR(tmp136,"tmp136");
								HX_STACK_LINE(487)
								Float tmp137 = tmp136;		HX_STACK_VAR(tmp137,"tmp137");
								HX_STACK_LINE(487)
								Float tmp138 = (tmp134 - tmp137);		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(487)
								k11 = tmp138;
								HX_STACK_LINE(487)
								{
									HX_STACK_LINE(487)
									int tmp139 = (eeOffset0 + (int)-4);		HX_STACK_VAR(tmp139,"tmp139");
									HX_STACK_LINE(487)
									Float tmp140 = u->__unsafe_get(tmp139);		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(487)
									Float tmp141 = tmp140;		HX_STACK_VAR(tmp141,"tmp141");
									HX_STACK_LINE(487)
									int tmp142 = (eeOffset2 + (int)-4);		HX_STACK_VAR(tmp142,"tmp142");
									HX_STACK_LINE(487)
									Float tmp143 = u->__unsafe_get(tmp142);		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(487)
									Float tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(487)
									Float tmp145 = (tmp141 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(487)
									Float val = tmp145;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(487)
									int tmp146 = (eeOffset0 + (int)-4);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(487)
									Float tmp147 = val;		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(487)
									Float tmp148 = u->__unsafe_set(tmp146,tmp147);		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(487)
									tmp148;
								}
								HX_STACK_LINE(487)
								{
									HX_STACK_LINE(487)
									int tmp139 = (eeOffset0 + (int)-5);		HX_STACK_VAR(tmp139,"tmp139");
									HX_STACK_LINE(487)
									Float tmp140 = u->__unsafe_get(tmp139);		HX_STACK_VAR(tmp140,"tmp140");
									HX_STACK_LINE(487)
									Float tmp141 = tmp140;		HX_STACK_VAR(tmp141,"tmp141");
									HX_STACK_LINE(487)
									int tmp142 = (eeOffset2 + (int)-5);		HX_STACK_VAR(tmp142,"tmp142");
									HX_STACK_LINE(487)
									Float tmp143 = u->__unsafe_get(tmp142);		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(487)
									Float tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(487)
									Float tmp145 = (tmp141 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(487)
									Float val = tmp145;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(487)
									int tmp146 = (eeOffset0 + (int)-5);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(487)
									Float tmp147 = val;		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(487)
									Float tmp148 = u->__unsafe_set(tmp146,tmp147);		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(487)
									tmp148;
								}
								HX_STACK_LINE(487)
								int tmp139 = (eeOffset2 + (int)-4);		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(487)
								Float tmp140 = (k00 * A4);		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(487)
								Float tmp141 = (k11 * A5);		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(487)
								Float tmp142 = (tmp140 - tmp141);		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(487)
								Float tmp143 = u->__unsafe_set(tmp139,tmp142);		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(487)
								tmp143;
								HX_STACK_LINE(487)
								int tmp144 = (eeOffset2 + (int)-5);		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(487)
								Float tmp145 = (k11 * A4);		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(487)
								Float tmp146 = (k00 * A5);		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(487)
								Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(487)
								Float tmp148 = u->__unsafe_set(tmp144,tmp147);		HX_STACK_VAR(tmp148,"tmp148");
								HX_STACK_LINE(487)
								tmp148;
								HX_STACK_LINE(487)
								int tmp149 = (eeOffset0 + (int)-6);		HX_STACK_VAR(tmp149,"tmp149");
								HX_STACK_LINE(487)
								Float tmp150 = u->__unsafe_get(tmp149);		HX_STACK_VAR(tmp150,"tmp150");
								HX_STACK_LINE(487)
								Float tmp151 = tmp150;		HX_STACK_VAR(tmp151,"tmp151");
								HX_STACK_LINE(487)
								int tmp152 = (eeOffset2 + (int)-6);		HX_STACK_VAR(tmp152,"tmp152");
								HX_STACK_LINE(487)
								Float tmp153 = u->__unsafe_get(tmp152);		HX_STACK_VAR(tmp153,"tmp153");
								HX_STACK_LINE(487)
								Float tmp154 = tmp153;		HX_STACK_VAR(tmp154,"tmp154");
								HX_STACK_LINE(487)
								Float tmp155 = (tmp151 - tmp154);		HX_STACK_VAR(tmp155,"tmp155");
								HX_STACK_LINE(487)
								k00 = tmp155;
								HX_STACK_LINE(487)
								int tmp156 = (eeOffset0 + (int)-7);		HX_STACK_VAR(tmp156,"tmp156");
								HX_STACK_LINE(487)
								Float tmp157 = u->__unsafe_get(tmp156);		HX_STACK_VAR(tmp157,"tmp157");
								HX_STACK_LINE(487)
								Float tmp158 = tmp157;		HX_STACK_VAR(tmp158,"tmp158");
								HX_STACK_LINE(487)
								int tmp159 = (eeOffset2 + (int)-7);		HX_STACK_VAR(tmp159,"tmp159");
								HX_STACK_LINE(487)
								Float tmp160 = u->__unsafe_get(tmp159);		HX_STACK_VAR(tmp160,"tmp160");
								HX_STACK_LINE(487)
								Float tmp161 = tmp160;		HX_STACK_VAR(tmp161,"tmp161");
								HX_STACK_LINE(487)
								Float tmp162 = (tmp158 - tmp161);		HX_STACK_VAR(tmp162,"tmp162");
								HX_STACK_LINE(487)
								k11 = tmp162;
								HX_STACK_LINE(487)
								{
									HX_STACK_LINE(487)
									int tmp163 = (eeOffset0 + (int)-6);		HX_STACK_VAR(tmp163,"tmp163");
									HX_STACK_LINE(487)
									Float tmp164 = u->__unsafe_get(tmp163);		HX_STACK_VAR(tmp164,"tmp164");
									HX_STACK_LINE(487)
									Float tmp165 = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
									HX_STACK_LINE(487)
									int tmp166 = (eeOffset2 + (int)-6);		HX_STACK_VAR(tmp166,"tmp166");
									HX_STACK_LINE(487)
									Float tmp167 = u->__unsafe_get(tmp166);		HX_STACK_VAR(tmp167,"tmp167");
									HX_STACK_LINE(487)
									Float tmp168 = tmp167;		HX_STACK_VAR(tmp168,"tmp168");
									HX_STACK_LINE(487)
									Float tmp169 = (tmp165 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
									HX_STACK_LINE(487)
									Float val = tmp169;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(487)
									int tmp170 = (eeOffset0 + (int)-6);		HX_STACK_VAR(tmp170,"tmp170");
									HX_STACK_LINE(487)
									Float tmp171 = val;		HX_STACK_VAR(tmp171,"tmp171");
									HX_STACK_LINE(487)
									Float tmp172 = u->__unsafe_set(tmp170,tmp171);		HX_STACK_VAR(tmp172,"tmp172");
									HX_STACK_LINE(487)
									tmp172;
								}
								HX_STACK_LINE(487)
								{
									HX_STACK_LINE(487)
									int tmp163 = (eeOffset0 + (int)-7);		HX_STACK_VAR(tmp163,"tmp163");
									HX_STACK_LINE(487)
									Float tmp164 = u->__unsafe_get(tmp163);		HX_STACK_VAR(tmp164,"tmp164");
									HX_STACK_LINE(487)
									Float tmp165 = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
									HX_STACK_LINE(487)
									int tmp166 = (eeOffset2 + (int)-7);		HX_STACK_VAR(tmp166,"tmp166");
									HX_STACK_LINE(487)
									Float tmp167 = u->__unsafe_get(tmp166);		HX_STACK_VAR(tmp167,"tmp167");
									HX_STACK_LINE(487)
									Float tmp168 = tmp167;		HX_STACK_VAR(tmp168,"tmp168");
									HX_STACK_LINE(487)
									Float tmp169 = (tmp165 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
									HX_STACK_LINE(487)
									Float val = tmp169;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(487)
									int tmp170 = (eeOffset0 + (int)-7);		HX_STACK_VAR(tmp170,"tmp170");
									HX_STACK_LINE(487)
									Float tmp171 = val;		HX_STACK_VAR(tmp171,"tmp171");
									HX_STACK_LINE(487)
									Float tmp172 = u->__unsafe_set(tmp170,tmp171);		HX_STACK_VAR(tmp172,"tmp172");
									HX_STACK_LINE(487)
									tmp172;
								}
								HX_STACK_LINE(487)
								int tmp163 = (eeOffset2 + (int)-6);		HX_STACK_VAR(tmp163,"tmp163");
								HX_STACK_LINE(487)
								Float tmp164 = (k00 * A6);		HX_STACK_VAR(tmp164,"tmp164");
								HX_STACK_LINE(487)
								Float tmp165 = (k11 * A7);		HX_STACK_VAR(tmp165,"tmp165");
								HX_STACK_LINE(487)
								Float tmp166 = (tmp164 - tmp165);		HX_STACK_VAR(tmp166,"tmp166");
								HX_STACK_LINE(487)
								Float tmp167 = u->__unsafe_set(tmp163,tmp166);		HX_STACK_VAR(tmp167,"tmp167");
								HX_STACK_LINE(487)
								tmp167;
								HX_STACK_LINE(487)
								int tmp168 = (eeOffset2 + (int)-7);		HX_STACK_VAR(tmp168,"tmp168");
								HX_STACK_LINE(487)
								Float tmp169 = (k11 * A6);		HX_STACK_VAR(tmp169,"tmp169");
								HX_STACK_LINE(487)
								Float tmp170 = (k00 * A7);		HX_STACK_VAR(tmp170,"tmp170");
								HX_STACK_LINE(487)
								Float tmp171 = (tmp169 + tmp170);		HX_STACK_VAR(tmp171,"tmp171");
								HX_STACK_LINE(487)
								Float tmp172 = u->__unsafe_set(tmp168,tmp171);		HX_STACK_VAR(tmp172,"tmp172");
								HX_STACK_LINE(487)
								tmp172;
								HX_STACK_LINE(487)
								hx::SubEq(eeOffset0,k0);
								HX_STACK_LINE(487)
								hx::SubEq(eeOffset2,k0);
							}
						}
						HX_STACK_LINE(487)
						int tmp42 = (k1 * (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(487)
						hx::AddEq(aOffset,tmp42);
						HX_STACK_LINE(487)
						hx::SubEq(i_off,(int)8);
					}
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp20 = (n2 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int i_off = tmp20;		HX_STACK_VAR(i_off,"i_off");
				HX_STACK_LINE(487)
				int tmp21 = (int(n) >> int((int)3));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				Float tmp22 = a->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(487)
				Float A2 = tmp22;		HX_STACK_VAR(A2,"A2");
				HX_STACK_LINE(487)
				int zOffset = i_off;		HX_STACK_VAR(zOffset,"zOffset");
				HX_STACK_LINE(487)
				int tmp23 = i_off;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(487)
				int tmp24 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(487)
				int tmp25 = ((int)16 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(487)
				int tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(487)
				int baseOffset = tmp26;		HX_STACK_VAR(baseOffset,"baseOffset");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					bool tmp27 = (zOffset > baseOffset);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(487)
					bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(487)
					if ((tmp28)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp29 = zOffset;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(487)
					Float tmp30 = u->__unsafe_get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					Float t0 = tmp30;		HX_STACK_VAR(t0,"t0");
					HX_STACK_LINE(487)
					int tmp31 = (zOffset + (int)-8);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					Float tmp32 = u->__unsafe_get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					Float t1 = tmp32;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(487)
					int tmp33 = (zOffset + (int)-8);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					Float tmp34 = (t0 - t1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					Float tmp35 = u->__unsafe_set(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					tmp35;
					HX_STACK_LINE(487)
					int tmp36 = zOffset;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					Float tmp37 = (t0 + t1);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					Float tmp38 = u->__unsafe_set(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					tmp38;
					HX_STACK_LINE(487)
					int tmp39 = (zOffset + (int)-1);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(487)
					Float tmp40 = u->__unsafe_get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(487)
					t0 = tmp40;
					HX_STACK_LINE(487)
					int tmp41 = (zOffset + (int)-9);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(487)
					Float tmp42 = u->__unsafe_get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(487)
					t1 = tmp42;
					HX_STACK_LINE(487)
					int tmp43 = (zOffset + (int)-9);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(487)
					Float tmp44 = (t0 - t1);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(487)
					Float tmp45 = u->__unsafe_set(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(487)
					tmp45;
					HX_STACK_LINE(487)
					int tmp46 = (zOffset + (int)-1);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(487)
					Float tmp47 = (t0 + t1);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(487)
					Float tmp48 = u->__unsafe_set(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(487)
					tmp48;
					HX_STACK_LINE(487)
					int tmp49 = (zOffset + (int)-2);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(487)
					Float tmp50 = u->__unsafe_get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(487)
					t0 = tmp50;
					HX_STACK_LINE(487)
					int tmp51 = (zOffset + (int)-10);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(487)
					Float tmp52 = u->__unsafe_get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(487)
					t1 = tmp52;
					HX_STACK_LINE(487)
					Float tmp53 = (t0 - t1);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(487)
					Float k00 = tmp53;		HX_STACK_VAR(k00,"k00");
					HX_STACK_LINE(487)
					int tmp54 = (zOffset + (int)-2);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(487)
					Float tmp55 = (t0 + t1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(487)
					Float tmp56 = u->__unsafe_set(tmp54,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(487)
					tmp56;
					HX_STACK_LINE(487)
					int tmp57 = (zOffset + (int)-3);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(487)
					Float tmp58 = u->__unsafe_get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(487)
					t0 = tmp58;
					HX_STACK_LINE(487)
					int tmp59 = (zOffset + (int)-11);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(487)
					Float tmp60 = u->__unsafe_get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(487)
					t1 = tmp60;
					HX_STACK_LINE(487)
					Float tmp61 = (t0 - t1);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(487)
					Float k11 = tmp61;		HX_STACK_VAR(k11,"k11");
					HX_STACK_LINE(487)
					int tmp62 = (zOffset + (int)-3);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(487)
					Float tmp63 = (t0 + t1);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(487)
					Float tmp64 = u->__unsafe_set(tmp62,tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(487)
					tmp64;
					HX_STACK_LINE(487)
					int tmp65 = (zOffset + (int)-10);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(487)
					Float tmp66 = (k00 + k11);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(487)
					Float tmp67 = A2;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(487)
					Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(487)
					Float tmp69 = u->__unsafe_set(tmp65,tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(487)
					tmp69;
					HX_STACK_LINE(487)
					int tmp70 = (zOffset + (int)-11);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(487)
					Float tmp71 = (k11 - k00);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(487)
					Float tmp72 = A2;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(487)
					Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(487)
					Float tmp74 = u->__unsafe_set(tmp70,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(487)
					tmp74;
					HX_STACK_LINE(487)
					int tmp75 = (zOffset + (int)-4);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(487)
					Float tmp76 = u->__unsafe_get(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(487)
					t0 = tmp76;
					HX_STACK_LINE(487)
					int tmp77 = (zOffset + (int)-12);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(487)
					Float tmp78 = u->__unsafe_get(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(487)
					t1 = tmp78;
					HX_STACK_LINE(487)
					Float tmp79 = (t1 - t0);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(487)
					k00 = tmp79;
					HX_STACK_LINE(487)
					int tmp80 = (zOffset + (int)-4);		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(487)
					Float tmp81 = (t0 + t1);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(487)
					Float tmp82 = u->__unsafe_set(tmp80,tmp81);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(487)
					tmp82;
					HX_STACK_LINE(487)
					int tmp83 = (zOffset + (int)-5);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(487)
					Float tmp84 = u->__unsafe_get(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(487)
					t0 = tmp84;
					HX_STACK_LINE(487)
					int tmp85 = (zOffset + (int)-13);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(487)
					Float tmp86 = u->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(487)
					t1 = tmp86;
					HX_STACK_LINE(487)
					Float tmp87 = (t0 - t1);		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(487)
					k11 = tmp87;
					HX_STACK_LINE(487)
					int tmp88 = (zOffset + (int)-5);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(487)
					Float tmp89 = (t0 + t1);		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(487)
					Float tmp90 = u->__unsafe_set(tmp88,tmp89);		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(487)
					tmp90;
					HX_STACK_LINE(487)
					int tmp91 = (zOffset + (int)-12);		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(487)
					Float tmp92 = k11;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(487)
					Float tmp93 = u->__unsafe_set(tmp91,tmp92);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(487)
					tmp93;
					HX_STACK_LINE(487)
					int tmp94 = (zOffset + (int)-13);		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(487)
					Float tmp95 = k00;		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(487)
					Float tmp96 = u->__unsafe_set(tmp94,tmp95);		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(487)
					tmp96;
					HX_STACK_LINE(487)
					int tmp97 = (zOffset + (int)-6);		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(487)
					Float tmp98 = u->__unsafe_get(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(487)
					t0 = tmp98;
					HX_STACK_LINE(487)
					int tmp99 = (zOffset + (int)-14);		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(487)
					Float tmp100 = u->__unsafe_get(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(487)
					t1 = tmp100;
					HX_STACK_LINE(487)
					Float tmp101 = (t1 - t0);		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(487)
					k00 = tmp101;
					HX_STACK_LINE(487)
					int tmp102 = (zOffset + (int)-6);		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(487)
					Float tmp103 = (t0 + t1);		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(487)
					Float tmp104 = u->__unsafe_set(tmp102,tmp103);		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(487)
					tmp104;
					HX_STACK_LINE(487)
					int tmp105 = (zOffset + (int)-7);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(487)
					Float tmp106 = u->__unsafe_get(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(487)
					t0 = tmp106;
					HX_STACK_LINE(487)
					int tmp107 = (zOffset + (int)-15);		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(487)
					Float tmp108 = u->__unsafe_get(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(487)
					t1 = tmp108;
					HX_STACK_LINE(487)
					Float tmp109 = (t0 - t1);		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(487)
					k11 = tmp109;
					HX_STACK_LINE(487)
					int tmp110 = (zOffset + (int)-7);		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(487)
					Float tmp111 = (t0 + t1);		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(487)
					Float tmp112 = u->__unsafe_set(tmp110,tmp111);		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(487)
					tmp112;
					HX_STACK_LINE(487)
					int tmp113 = (zOffset + (int)-14);		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(487)
					Float tmp114 = (k00 + k11);		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(487)
					Float tmp115 = A2;		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(487)
					Float tmp116 = (tmp114 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(487)
					Float tmp117 = u->__unsafe_set(tmp113,tmp116);		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(487)
					tmp117;
					HX_STACK_LINE(487)
					int tmp118 = (zOffset + (int)-15);		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(487)
					Float tmp119 = (k00 - k11);		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(487)
					Float tmp120 = A2;		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(487)
					Float tmp121 = (tmp119 * tmp120);		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(487)
					Float tmp122 = u->__unsafe_set(tmp118,tmp121);		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(487)
					tmp122;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp123 = zOffset;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(487)
						Float tmp124 = u->__unsafe_get(tmp123);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(487)
						Float t01 = tmp124;		HX_STACK_VAR(t01,"t01");
						HX_STACK_LINE(487)
						int tmp125 = (zOffset + (int)-4);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(487)
						Float tmp126 = u->__unsafe_get(tmp125);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(487)
						Float t11 = tmp126;		HX_STACK_VAR(t11,"t11");
						HX_STACK_LINE(487)
						Float tmp127 = (t01 - t11);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(487)
						Float k001 = tmp127;		HX_STACK_VAR(k001,"k001");
						HX_STACK_LINE(487)
						Float tmp128 = (t01 + t11);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(487)
						Float y0 = tmp128;		HX_STACK_VAR(y0,"y0");
						HX_STACK_LINE(487)
						int tmp129 = (zOffset + (int)-2);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(487)
						Float tmp130 = u->__unsafe_get(tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(487)
						t01 = tmp130;
						HX_STACK_LINE(487)
						int tmp131 = (zOffset + (int)-6);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(487)
						Float tmp132 = u->__unsafe_get(tmp131);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(487)
						t11 = tmp132;
						HX_STACK_LINE(487)
						Float tmp133 = (t01 + t11);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(487)
						Float y2 = tmp133;		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(487)
						Float tmp134 = (t01 - t11);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(487)
						Float k22 = tmp134;		HX_STACK_VAR(k22,"k22");
						HX_STACK_LINE(487)
						int tmp135 = zOffset;		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(487)
						Float tmp136 = (y0 + y2);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(487)
						Float tmp137 = u->__unsafe_set(tmp135,tmp136);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(487)
						tmp137;
						HX_STACK_LINE(487)
						int tmp138 = (zOffset + (int)-2);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(487)
						Float tmp139 = (y0 - y2);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(487)
						Float tmp140 = u->__unsafe_set(tmp138,tmp139);		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(487)
						tmp140;
						HX_STACK_LINE(487)
						int tmp141 = (zOffset + (int)-3);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(487)
						Float tmp142 = u->__unsafe_get(tmp141);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(487)
						Float tmp143 = tmp142;		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(487)
						int tmp144 = (zOffset + (int)-7);		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(487)
						Float tmp145 = u->__unsafe_get(tmp144);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(487)
						Float tmp146 = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(487)
						Float tmp147 = (tmp143 - tmp146);		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(487)
						Float k33 = tmp147;		HX_STACK_VAR(k33,"k33");
						HX_STACK_LINE(487)
						int tmp148 = (zOffset + (int)-4);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(487)
						Float tmp149 = (k001 + k33);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(487)
						Float tmp150 = u->__unsafe_set(tmp148,tmp149);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(487)
						tmp150;
						HX_STACK_LINE(487)
						int tmp151 = (zOffset + (int)-6);		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(487)
						Float tmp152 = (k001 - k33);		HX_STACK_VAR(tmp152,"tmp152");
						HX_STACK_LINE(487)
						Float tmp153 = u->__unsafe_set(tmp151,tmp152);		HX_STACK_VAR(tmp153,"tmp153");
						HX_STACK_LINE(487)
						tmp153;
						HX_STACK_LINE(487)
						int tmp154 = (zOffset + (int)-1);		HX_STACK_VAR(tmp154,"tmp154");
						HX_STACK_LINE(487)
						Float tmp155 = u->__unsafe_get(tmp154);		HX_STACK_VAR(tmp155,"tmp155");
						HX_STACK_LINE(487)
						t01 = tmp155;
						HX_STACK_LINE(487)
						int tmp156 = (zOffset + (int)-5);		HX_STACK_VAR(tmp156,"tmp156");
						HX_STACK_LINE(487)
						Float tmp157 = u->__unsafe_get(tmp156);		HX_STACK_VAR(tmp157,"tmp157");
						HX_STACK_LINE(487)
						t11 = tmp157;
						HX_STACK_LINE(487)
						Float tmp158 = (t01 - t11);		HX_STACK_VAR(tmp158,"tmp158");
						HX_STACK_LINE(487)
						Float k111 = tmp158;		HX_STACK_VAR(k111,"k111");
						HX_STACK_LINE(487)
						Float tmp159 = (t01 + t11);		HX_STACK_VAR(tmp159,"tmp159");
						HX_STACK_LINE(487)
						Float y1 = tmp159;		HX_STACK_VAR(y1,"y1");
						HX_STACK_LINE(487)
						int tmp160 = (zOffset + (int)-3);		HX_STACK_VAR(tmp160,"tmp160");
						HX_STACK_LINE(487)
						Float tmp161 = u->__unsafe_get(tmp160);		HX_STACK_VAR(tmp161,"tmp161");
						HX_STACK_LINE(487)
						Float tmp162 = tmp161;		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(487)
						int tmp163 = (zOffset + (int)-7);		HX_STACK_VAR(tmp163,"tmp163");
						HX_STACK_LINE(487)
						Float tmp164 = u->__unsafe_get(tmp163);		HX_STACK_VAR(tmp164,"tmp164");
						HX_STACK_LINE(487)
						Float tmp165 = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
						HX_STACK_LINE(487)
						Float tmp166 = (tmp162 + tmp165);		HX_STACK_VAR(tmp166,"tmp166");
						HX_STACK_LINE(487)
						Float y3 = tmp166;		HX_STACK_VAR(y3,"y3");
						HX_STACK_LINE(487)
						int tmp167 = (zOffset + (int)-1);		HX_STACK_VAR(tmp167,"tmp167");
						HX_STACK_LINE(487)
						Float tmp168 = (y1 + y3);		HX_STACK_VAR(tmp168,"tmp168");
						HX_STACK_LINE(487)
						Float tmp169 = u->__unsafe_set(tmp167,tmp168);		HX_STACK_VAR(tmp169,"tmp169");
						HX_STACK_LINE(487)
						tmp169;
						HX_STACK_LINE(487)
						int tmp170 = (zOffset + (int)-3);		HX_STACK_VAR(tmp170,"tmp170");
						HX_STACK_LINE(487)
						Float tmp171 = (y1 - y3);		HX_STACK_VAR(tmp171,"tmp171");
						HX_STACK_LINE(487)
						Float tmp172 = u->__unsafe_set(tmp170,tmp171);		HX_STACK_VAR(tmp172,"tmp172");
						HX_STACK_LINE(487)
						tmp172;
						HX_STACK_LINE(487)
						int tmp173 = (zOffset + (int)-5);		HX_STACK_VAR(tmp173,"tmp173");
						HX_STACK_LINE(487)
						Float tmp174 = (k111 - k22);		HX_STACK_VAR(tmp174,"tmp174");
						HX_STACK_LINE(487)
						Float tmp175 = u->__unsafe_set(tmp173,tmp174);		HX_STACK_VAR(tmp175,"tmp175");
						HX_STACK_LINE(487)
						tmp175;
						HX_STACK_LINE(487)
						int tmp176 = (zOffset + (int)-7);		HX_STACK_VAR(tmp176,"tmp176");
						HX_STACK_LINE(487)
						Float tmp177 = (k111 + k22);		HX_STACK_VAR(tmp177,"tmp177");
						HX_STACK_LINE(487)
						Float tmp178 = u->__unsafe_set(tmp176,tmp177);		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(487)
						tmp178;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp123 = (zOffset - (int)8);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(487)
						int zOffset1 = tmp123;		HX_STACK_VAR(zOffset1,"zOffset1");
						HX_STACK_LINE(487)
						int tmp124 = zOffset1;		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(487)
						Float tmp125 = u->__unsafe_get(tmp124);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(487)
						Float t01 = tmp125;		HX_STACK_VAR(t01,"t01");
						HX_STACK_LINE(487)
						int tmp126 = (zOffset1 + (int)-4);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(487)
						Float tmp127 = u->__unsafe_get(tmp126);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(487)
						Float t11 = tmp127;		HX_STACK_VAR(t11,"t11");
						HX_STACK_LINE(487)
						Float tmp128 = (t01 - t11);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(487)
						Float k001 = tmp128;		HX_STACK_VAR(k001,"k001");
						HX_STACK_LINE(487)
						Float tmp129 = (t01 + t11);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(487)
						Float y0 = tmp129;		HX_STACK_VAR(y0,"y0");
						HX_STACK_LINE(487)
						int tmp130 = (zOffset1 + (int)-2);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(487)
						Float tmp131 = u->__unsafe_get(tmp130);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(487)
						t01 = tmp131;
						HX_STACK_LINE(487)
						int tmp132 = (zOffset1 + (int)-6);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(487)
						Float tmp133 = u->__unsafe_get(tmp132);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(487)
						t11 = tmp133;
						HX_STACK_LINE(487)
						Float tmp134 = (t01 + t11);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(487)
						Float y2 = tmp134;		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(487)
						Float tmp135 = (t01 - t11);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(487)
						Float k22 = tmp135;		HX_STACK_VAR(k22,"k22");
						HX_STACK_LINE(487)
						int tmp136 = zOffset1;		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(487)
						Float tmp137 = (y0 + y2);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(487)
						Float tmp138 = u->__unsafe_set(tmp136,tmp137);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(487)
						tmp138;
						HX_STACK_LINE(487)
						int tmp139 = (zOffset1 + (int)-2);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(487)
						Float tmp140 = (y0 - y2);		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(487)
						Float tmp141 = u->__unsafe_set(tmp139,tmp140);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(487)
						tmp141;
						HX_STACK_LINE(487)
						int tmp142 = (zOffset1 + (int)-3);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(487)
						Float tmp143 = u->__unsafe_get(tmp142);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(487)
						Float tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(487)
						int tmp145 = (zOffset1 + (int)-7);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(487)
						Float tmp146 = u->__unsafe_get(tmp145);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(487)
						Float tmp147 = tmp146;		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(487)
						Float tmp148 = (tmp144 - tmp147);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(487)
						Float k33 = tmp148;		HX_STACK_VAR(k33,"k33");
						HX_STACK_LINE(487)
						int tmp149 = (zOffset1 + (int)-4);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(487)
						Float tmp150 = (k001 + k33);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(487)
						Float tmp151 = u->__unsafe_set(tmp149,tmp150);		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(487)
						tmp151;
						HX_STACK_LINE(487)
						int tmp152 = (zOffset1 + (int)-6);		HX_STACK_VAR(tmp152,"tmp152");
						HX_STACK_LINE(487)
						Float tmp153 = (k001 - k33);		HX_STACK_VAR(tmp153,"tmp153");
						HX_STACK_LINE(487)
						Float tmp154 = u->__unsafe_set(tmp152,tmp153);		HX_STACK_VAR(tmp154,"tmp154");
						HX_STACK_LINE(487)
						tmp154;
						HX_STACK_LINE(487)
						int tmp155 = (zOffset1 + (int)-1);		HX_STACK_VAR(tmp155,"tmp155");
						HX_STACK_LINE(487)
						Float tmp156 = u->__unsafe_get(tmp155);		HX_STACK_VAR(tmp156,"tmp156");
						HX_STACK_LINE(487)
						t01 = tmp156;
						HX_STACK_LINE(487)
						int tmp157 = (zOffset1 + (int)-5);		HX_STACK_VAR(tmp157,"tmp157");
						HX_STACK_LINE(487)
						Float tmp158 = u->__unsafe_get(tmp157);		HX_STACK_VAR(tmp158,"tmp158");
						HX_STACK_LINE(487)
						t11 = tmp158;
						HX_STACK_LINE(487)
						Float tmp159 = (t01 - t11);		HX_STACK_VAR(tmp159,"tmp159");
						HX_STACK_LINE(487)
						Float k111 = tmp159;		HX_STACK_VAR(k111,"k111");
						HX_STACK_LINE(487)
						Float tmp160 = (t01 + t11);		HX_STACK_VAR(tmp160,"tmp160");
						HX_STACK_LINE(487)
						Float y1 = tmp160;		HX_STACK_VAR(y1,"y1");
						HX_STACK_LINE(487)
						int tmp161 = (zOffset1 + (int)-3);		HX_STACK_VAR(tmp161,"tmp161");
						HX_STACK_LINE(487)
						Float tmp162 = u->__unsafe_get(tmp161);		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(487)
						Float tmp163 = tmp162;		HX_STACK_VAR(tmp163,"tmp163");
						HX_STACK_LINE(487)
						int tmp164 = (zOffset1 + (int)-7);		HX_STACK_VAR(tmp164,"tmp164");
						HX_STACK_LINE(487)
						Float tmp165 = u->__unsafe_get(tmp164);		HX_STACK_VAR(tmp165,"tmp165");
						HX_STACK_LINE(487)
						Float tmp166 = tmp165;		HX_STACK_VAR(tmp166,"tmp166");
						HX_STACK_LINE(487)
						Float tmp167 = (tmp163 + tmp166);		HX_STACK_VAR(tmp167,"tmp167");
						HX_STACK_LINE(487)
						Float y3 = tmp167;		HX_STACK_VAR(y3,"y3");
						HX_STACK_LINE(487)
						int tmp168 = (zOffset1 + (int)-1);		HX_STACK_VAR(tmp168,"tmp168");
						HX_STACK_LINE(487)
						Float tmp169 = (y1 + y3);		HX_STACK_VAR(tmp169,"tmp169");
						HX_STACK_LINE(487)
						Float tmp170 = u->__unsafe_set(tmp168,tmp169);		HX_STACK_VAR(tmp170,"tmp170");
						HX_STACK_LINE(487)
						tmp170;
						HX_STACK_LINE(487)
						int tmp171 = (zOffset1 + (int)-3);		HX_STACK_VAR(tmp171,"tmp171");
						HX_STACK_LINE(487)
						Float tmp172 = (y1 - y3);		HX_STACK_VAR(tmp172,"tmp172");
						HX_STACK_LINE(487)
						Float tmp173 = u->__unsafe_set(tmp171,tmp172);		HX_STACK_VAR(tmp173,"tmp173");
						HX_STACK_LINE(487)
						tmp173;
						HX_STACK_LINE(487)
						int tmp174 = (zOffset1 + (int)-5);		HX_STACK_VAR(tmp174,"tmp174");
						HX_STACK_LINE(487)
						Float tmp175 = (k111 - k22);		HX_STACK_VAR(tmp175,"tmp175");
						HX_STACK_LINE(487)
						Float tmp176 = u->__unsafe_set(tmp174,tmp175);		HX_STACK_VAR(tmp176,"tmp176");
						HX_STACK_LINE(487)
						tmp176;
						HX_STACK_LINE(487)
						int tmp177 = (zOffset1 + (int)-7);		HX_STACK_VAR(tmp177,"tmp177");
						HX_STACK_LINE(487)
						Float tmp178 = (k111 + k22);		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(487)
						Float tmp179 = u->__unsafe_set(tmp177,tmp178);		HX_STACK_VAR(tmp179,"tmp179");
						HX_STACK_LINE(487)
						tmp179;
					}
					HX_STACK_LINE(487)
					hx::SubEq(zOffset,(int)16);
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int brOffset = (int)0;		HX_STACK_VAR(brOffset,"brOffset");
				HX_STACK_LINE(487)
				int tmp20 = (n4 - (int)4);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int dOffset0 = tmp20;		HX_STACK_VAR(dOffset0,"dOffset0");
				HX_STACK_LINE(487)
				int tmp21 = (n2 - (int)4);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				int dOffset1 = tmp21;		HX_STACK_VAR(dOffset1,"dOffset1");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					bool tmp22 = (dOffset0 >= (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(487)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(487)
					if ((tmp23)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp24 = brOffset;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(487)
					int tmp25 = bitReverse->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(487)
					int k4 = tmp25;		HX_STACK_VAR(k4,"k4");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp26 = k4;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						Float tmp27 = u->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						Float val = tmp27;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp28 = (dOffset1 + (int)3);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = val;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						Float tmp30 = v->__unsafe_set(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						tmp30;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp26 = (k4 + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						Float tmp27 = u->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						Float val = tmp27;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp28 = (dOffset1 + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = val;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						Float tmp30 = v->__unsafe_set(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						tmp30;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp26 = (k4 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						Float tmp27 = u->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						Float val = tmp27;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp28 = (dOffset0 + (int)3);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = val;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						Float tmp30 = v->__unsafe_set(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						tmp30;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp26 = (k4 + (int)3);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(487)
						Float tmp27 = u->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						Float val = tmp27;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp28 = (dOffset0 + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = val;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						Float tmp30 = v->__unsafe_set(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						tmp30;
					}
					HX_STACK_LINE(487)
					int tmp26 = (brOffset + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(487)
					int tmp27 = bitReverse->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(487)
					k4 = tmp27;
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp28 = k4;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = u->__unsafe_get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						Float val = tmp29;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp30 = (dOffset1 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						Float tmp31 = val;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(487)
						Float tmp32 = v->__unsafe_set(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(487)
						tmp32;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp28 = (k4 + (int)1);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = u->__unsafe_get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						Float val = tmp29;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp30 = dOffset1;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						Float tmp31 = val;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(487)
						Float tmp32 = v->__unsafe_set(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(487)
						tmp32;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp28 = (k4 + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = u->__unsafe_get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						Float val = tmp29;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp30 = (dOffset0 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						Float tmp31 = val;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(487)
						Float tmp32 = v->__unsafe_set(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(487)
						tmp32;
					}
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						int tmp28 = (k4 + (int)3);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						Float tmp29 = u->__unsafe_get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(487)
						Float val = tmp29;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(487)
						int tmp30 = dOffset0;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(487)
						Float tmp31 = val;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(487)
						Float tmp32 = v->__unsafe_set(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(487)
						tmp32;
					}
					HX_STACK_LINE(487)
					hx::SubEq(dOffset0,(int)4);
					HX_STACK_LINE(487)
					hx::SubEq(dOffset1,(int)4);
					HX_STACK_LINE(487)
					hx::AddEq(brOffset,(int)2);
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int cOffset = (int)0;		HX_STACK_VAR(cOffset,"cOffset");
				HX_STACK_LINE(487)
				int dOffset = (int)0;		HX_STACK_VAR(dOffset,"dOffset");
				HX_STACK_LINE(487)
				int tmp20 = (n2 - (int)4);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int eOffset = tmp20;		HX_STACK_VAR(eOffset,"eOffset");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					bool tmp21 = (dOffset < eOffset);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(487)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(487)
					if ((tmp22)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp23 = dOffset;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(487)
					Float tmp24 = v->__unsafe_get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(487)
					Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(487)
					int tmp26 = (eOffset + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(487)
					Float tmp27 = v->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(487)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(487)
					Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(487)
					Float a02 = tmp29;		HX_STACK_VAR(a02,"a02");
					HX_STACK_LINE(487)
					int tmp30 = (dOffset + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					Float tmp31 = v->__unsafe_get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					int tmp33 = (eOffset + (int)3);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					Float tmp34 = v->__unsafe_get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					Float a11 = tmp36;		HX_STACK_VAR(a11,"a11");
					HX_STACK_LINE(487)
					int tmp37 = (cOffset + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					Float tmp38 = c->__unsafe_get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(487)
					Float tmp40 = a02;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(487)
					Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(487)
					int tmp42 = cOffset;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(487)
					Float tmp43 = c->__unsafe_get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(487)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(487)
					Float tmp45 = a11;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(487)
					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(487)
					Float tmp47 = (tmp41 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(487)
					Float b0 = tmp47;		HX_STACK_VAR(b0,"b0");
					HX_STACK_LINE(487)
					int tmp48 = (cOffset + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(487)
					Float tmp49 = c->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(487)
					Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(487)
					Float tmp51 = a11;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(487)
					Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(487)
					int tmp53 = cOffset;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(487)
					Float tmp54 = c->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(487)
					Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(487)
					Float tmp56 = a02;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(487)
					Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(487)
					Float tmp58 = (tmp52 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(487)
					Float b1 = tmp58;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(487)
					int tmp59 = dOffset;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(487)
					Float tmp60 = v->__unsafe_get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(487)
					Float tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(487)
					int tmp62 = (eOffset + (int)2);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(487)
					Float tmp63 = v->__unsafe_get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(487)
					Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(487)
					Float tmp65 = (tmp61 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(487)
					Float b2 = tmp65;		HX_STACK_VAR(b2,"b2");
					HX_STACK_LINE(487)
					int tmp66 = (dOffset + (int)1);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(487)
					Float tmp67 = v->__unsafe_get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(487)
					Float tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(487)
					int tmp69 = (eOffset + (int)3);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(487)
					Float tmp70 = v->__unsafe_get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(487)
					Float tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(487)
					Float tmp72 = (tmp68 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(487)
					Float b3 = tmp72;		HX_STACK_VAR(b3,"b3");
					HX_STACK_LINE(487)
					int tmp73 = dOffset;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(487)
					Float tmp74 = (b2 + b0);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(487)
					Float tmp75 = v->__unsafe_set(tmp73,tmp74);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(487)
					tmp75;
					HX_STACK_LINE(487)
					int tmp76 = (dOffset + (int)1);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(487)
					Float tmp77 = (b3 + b1);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(487)
					Float tmp78 = v->__unsafe_set(tmp76,tmp77);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(487)
					tmp78;
					HX_STACK_LINE(487)
					int tmp79 = (eOffset + (int)2);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(487)
					Float tmp80 = (b2 - b0);		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(487)
					Float tmp81 = v->__unsafe_set(tmp79,tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(487)
					tmp81;
					HX_STACK_LINE(487)
					int tmp82 = (eOffset + (int)3);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(487)
					Float tmp83 = (b1 - b3);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(487)
					Float tmp84 = v->__unsafe_set(tmp82,tmp83);		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(487)
					tmp84;
					HX_STACK_LINE(487)
					int tmp85 = (dOffset + (int)2);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(487)
					Float tmp86 = v->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(487)
					Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(487)
					int tmp88 = eOffset;		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(487)
					Float tmp89 = v->__unsafe_get(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(487)
					Float tmp90 = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(487)
					Float tmp91 = (tmp87 - tmp90);		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(487)
					a02 = tmp91;
					HX_STACK_LINE(487)
					int tmp92 = (dOffset + (int)3);		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(487)
					Float tmp93 = v->__unsafe_get(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(487)
					Float tmp94 = tmp93;		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(487)
					int tmp95 = (eOffset + (int)1);		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(487)
					Float tmp96 = v->__unsafe_get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(487)
					Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(487)
					Float tmp98 = (tmp94 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(487)
					a11 = tmp98;
					HX_STACK_LINE(487)
					int tmp99 = (cOffset + (int)3);		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(487)
					Float tmp100 = c->__unsafe_get(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(487)
					Float tmp101 = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(487)
					Float tmp102 = a02;		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(487)
					Float tmp103 = (tmp101 * tmp102);		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(487)
					int tmp104 = (cOffset + (int)2);		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(487)
					Float tmp105 = c->__unsafe_get(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(487)
					Float tmp106 = tmp105;		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(487)
					Float tmp107 = a11;		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(487)
					Float tmp108 = (tmp106 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(487)
					Float tmp109 = (tmp103 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(487)
					b0 = tmp109;
					HX_STACK_LINE(487)
					int tmp110 = (cOffset + (int)3);		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(487)
					Float tmp111 = c->__unsafe_get(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(487)
					Float tmp112 = tmp111;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(487)
					Float tmp113 = a11;		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(487)
					Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(487)
					int tmp115 = (cOffset + (int)2);		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(487)
					Float tmp116 = c->__unsafe_get(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(487)
					Float tmp117 = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(487)
					Float tmp118 = a02;		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(487)
					Float tmp119 = (tmp117 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(487)
					Float tmp120 = (tmp114 - tmp119);		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(487)
					b1 = tmp120;
					HX_STACK_LINE(487)
					int tmp121 = (dOffset + (int)2);		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(487)
					Float tmp122 = v->__unsafe_get(tmp121);		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(487)
					Float tmp123 = tmp122;		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(487)
					int tmp124 = eOffset;		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(487)
					Float tmp125 = v->__unsafe_get(tmp124);		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(487)
					Float tmp126 = tmp125;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(487)
					Float tmp127 = (tmp123 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
					HX_STACK_LINE(487)
					b2 = tmp127;
					HX_STACK_LINE(487)
					int tmp128 = (dOffset + (int)3);		HX_STACK_VAR(tmp128,"tmp128");
					HX_STACK_LINE(487)
					Float tmp129 = v->__unsafe_get(tmp128);		HX_STACK_VAR(tmp129,"tmp129");
					HX_STACK_LINE(487)
					Float tmp130 = tmp129;		HX_STACK_VAR(tmp130,"tmp130");
					HX_STACK_LINE(487)
					int tmp131 = (eOffset + (int)1);		HX_STACK_VAR(tmp131,"tmp131");
					HX_STACK_LINE(487)
					Float tmp132 = v->__unsafe_get(tmp131);		HX_STACK_VAR(tmp132,"tmp132");
					HX_STACK_LINE(487)
					Float tmp133 = tmp132;		HX_STACK_VAR(tmp133,"tmp133");
					HX_STACK_LINE(487)
					Float tmp134 = (tmp130 - tmp133);		HX_STACK_VAR(tmp134,"tmp134");
					HX_STACK_LINE(487)
					b3 = tmp134;
					HX_STACK_LINE(487)
					int tmp135 = (dOffset + (int)2);		HX_STACK_VAR(tmp135,"tmp135");
					HX_STACK_LINE(487)
					Float tmp136 = (b2 + b0);		HX_STACK_VAR(tmp136,"tmp136");
					HX_STACK_LINE(487)
					Float tmp137 = v->__unsafe_set(tmp135,tmp136);		HX_STACK_VAR(tmp137,"tmp137");
					HX_STACK_LINE(487)
					tmp137;
					HX_STACK_LINE(487)
					int tmp138 = (dOffset + (int)3);		HX_STACK_VAR(tmp138,"tmp138");
					HX_STACK_LINE(487)
					Float tmp139 = (b3 + b1);		HX_STACK_VAR(tmp139,"tmp139");
					HX_STACK_LINE(487)
					Float tmp140 = v->__unsafe_set(tmp138,tmp139);		HX_STACK_VAR(tmp140,"tmp140");
					HX_STACK_LINE(487)
					tmp140;
					HX_STACK_LINE(487)
					int tmp141 = eOffset;		HX_STACK_VAR(tmp141,"tmp141");
					HX_STACK_LINE(487)
					Float tmp142 = (b2 - b0);		HX_STACK_VAR(tmp142,"tmp142");
					HX_STACK_LINE(487)
					Float tmp143 = v->__unsafe_set(tmp141,tmp142);		HX_STACK_VAR(tmp143,"tmp143");
					HX_STACK_LINE(487)
					tmp143;
					HX_STACK_LINE(487)
					int tmp144 = (eOffset + (int)1);		HX_STACK_VAR(tmp144,"tmp144");
					HX_STACK_LINE(487)
					Float tmp145 = (b1 - b3);		HX_STACK_VAR(tmp145,"tmp145");
					HX_STACK_LINE(487)
					Float tmp146 = v->__unsafe_set(tmp144,tmp145);		HX_STACK_VAR(tmp146,"tmp146");
					HX_STACK_LINE(487)
					tmp146;
					HX_STACK_LINE(487)
					hx::AddEq(cOffset,(int)4);
					HX_STACK_LINE(487)
					hx::AddEq(dOffset,(int)4);
					HX_STACK_LINE(487)
					hx::SubEq(eOffset,(int)4);
				}
			}
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				int tmp20 = (n2 - (int)8);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				int bOffset = tmp20;		HX_STACK_VAR(bOffset,"bOffset");
				HX_STACK_LINE(487)
				int tmp21 = (n2 - (int)8);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(487)
				int eOffset = tmp21;		HX_STACK_VAR(eOffset,"eOffset");
				HX_STACK_LINE(487)
				int dOffset0 = (int)0;		HX_STACK_VAR(dOffset0,"dOffset0");
				HX_STACK_LINE(487)
				int tmp22 = (n2 - (int)4);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(487)
				int dOffset1 = tmp22;		HX_STACK_VAR(dOffset1,"dOffset1");
				HX_STACK_LINE(487)
				int dOffset2 = n2;		HX_STACK_VAR(dOffset2,"dOffset2");
				HX_STACK_LINE(487)
				int tmp23 = (n - (int)4);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(487)
				int dOffset3 = tmp23;		HX_STACK_VAR(dOffset3,"dOffset3");
				HX_STACK_LINE(487)
				while((true)){
					HX_STACK_LINE(487)
					bool tmp24 = (eOffset >= (int)0);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(487)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(487)
					if ((tmp25)){
						HX_STACK_LINE(487)
						break;
					}
					HX_STACK_LINE(487)
					int tmp26 = (eOffset + (int)6);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(487)
					Float tmp27 = buf2->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(487)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(487)
					int tmp29 = (bOffset + (int)7);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(487)
					Float tmp30 = b->__unsafe_get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(487)
					Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(487)
					Float tmp32 = (tmp28 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(487)
					int tmp33 = (eOffset + (int)7);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(487)
					Float tmp34 = buf2->__unsafe_get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(487)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(487)
					int tmp36 = (bOffset + (int)6);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(487)
					Float tmp37 = b->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(487)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(487)
					Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(487)
					Float tmp40 = (tmp32 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(487)
					Float p3 = tmp40;		HX_STACK_VAR(p3,"p3");
					HX_STACK_LINE(487)
					int tmp41 = (eOffset + (int)6);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(487)
					Float tmp42 = buf2->__unsafe_get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(487)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(487)
					Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(487)
					int tmp45 = (bOffset + (int)6);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(487)
					Float tmp46 = b->__unsafe_get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(487)
					Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(487)
					Float tmp48 = (tmp44 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(487)
					int tmp49 = (eOffset + (int)7);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(487)
					Float tmp50 = buf2->__unsafe_get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(487)
					Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(487)
					int tmp52 = (bOffset + (int)7);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(487)
					Float tmp53 = b->__unsafe_get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(487)
					Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(487)
					Float tmp55 = (tmp51 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(487)
					Float tmp56 = (tmp48 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(487)
					Float p2 = tmp56;		HX_STACK_VAR(p2,"p2");
					HX_STACK_LINE(487)
					int tmp57 = dOffset0;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(487)
					Float tmp58 = p3;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(487)
					Float tmp59 = buffer->__unsafe_set(tmp57,tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(487)
					tmp59;
					HX_STACK_LINE(487)
					int tmp60 = (dOffset1 + (int)3);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(487)
					Float tmp61 = p3;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(487)
					Float tmp62 = -(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(487)
					Float tmp63 = buffer->__unsafe_set(tmp60,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(487)
					tmp63;
					HX_STACK_LINE(487)
					int tmp64 = dOffset2;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(487)
					Float tmp65 = p2;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(487)
					Float tmp66 = buffer->__unsafe_set(tmp64,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(487)
					tmp66;
					HX_STACK_LINE(487)
					int tmp67 = (dOffset3 + (int)3);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(487)
					Float tmp68 = p2;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(487)
					Float tmp69 = buffer->__unsafe_set(tmp67,tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(487)
					tmp69;
					HX_STACK_LINE(487)
					int tmp70 = (eOffset + (int)4);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(487)
					Float tmp71 = buf2->__unsafe_get(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(487)
					Float tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(487)
					int tmp73 = (bOffset + (int)5);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(487)
					Float tmp74 = b->__unsafe_get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(487)
					Float tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(487)
					Float tmp76 = (tmp72 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(487)
					int tmp77 = (eOffset + (int)5);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(487)
					Float tmp78 = buf2->__unsafe_get(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(487)
					Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(487)
					int tmp80 = (bOffset + (int)4);		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(487)
					Float tmp81 = b->__unsafe_get(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(487)
					Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(487)
					Float tmp83 = (tmp79 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(487)
					Float tmp84 = (tmp76 - tmp83);		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(487)
					Float p1 = tmp84;		HX_STACK_VAR(p1,"p1");
					HX_STACK_LINE(487)
					int tmp85 = (eOffset + (int)4);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(487)
					Float tmp86 = buf2->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(487)
					Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(487)
					Float tmp88 = -(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(487)
					int tmp89 = (bOffset + (int)4);		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(487)
					Float tmp90 = b->__unsafe_get(tmp89);		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(487)
					Float tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(487)
					Float tmp92 = (tmp88 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(487)
					int tmp93 = (eOffset + (int)5);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(487)
					Float tmp94 = buf2->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(487)
					Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(487)
					int tmp96 = (bOffset + (int)5);		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(487)
					Float tmp97 = b->__unsafe_get(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(487)
					Float tmp98 = tmp97;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(487)
					Float tmp99 = (tmp95 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(487)
					Float tmp100 = (tmp92 - tmp99);		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(487)
					Float p0 = tmp100;		HX_STACK_VAR(p0,"p0");
					HX_STACK_LINE(487)
					int tmp101 = (dOffset0 + (int)1);		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(487)
					Float tmp102 = p1;		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(487)
					Float tmp103 = buffer->__unsafe_set(tmp101,tmp102);		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(487)
					tmp103;
					HX_STACK_LINE(487)
					int tmp104 = (dOffset1 + (int)2);		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(487)
					Float tmp105 = p1;		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(487)
					Float tmp106 = -(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(487)
					Float tmp107 = buffer->__unsafe_set(tmp104,tmp106);		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(487)
					tmp107;
					HX_STACK_LINE(487)
					int tmp108 = (dOffset2 + (int)1);		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(487)
					Float tmp109 = p0;		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(487)
					Float tmp110 = buffer->__unsafe_set(tmp108,tmp109);		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(487)
					tmp110;
					HX_STACK_LINE(487)
					int tmp111 = (dOffset3 + (int)2);		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(487)
					Float tmp112 = p0;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(487)
					Float tmp113 = buffer->__unsafe_set(tmp111,tmp112);		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(487)
					tmp113;
					HX_STACK_LINE(487)
					int tmp114 = (eOffset + (int)2);		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(487)
					Float tmp115 = buf2->__unsafe_get(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(487)
					Float tmp116 = tmp115;		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(487)
					int tmp117 = (bOffset + (int)3);		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(487)
					Float tmp118 = b->__unsafe_get(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(487)
					Float tmp119 = tmp118;		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(487)
					Float tmp120 = (tmp116 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(487)
					int tmp121 = (eOffset + (int)3);		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(487)
					Float tmp122 = buf2->__unsafe_get(tmp121);		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(487)
					Float tmp123 = tmp122;		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(487)
					int tmp124 = (bOffset + (int)2);		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(487)
					Float tmp125 = b->__unsafe_get(tmp124);		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(487)
					Float tmp126 = tmp125;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(487)
					Float tmp127 = (tmp123 * tmp126);		HX_STACK_VAR(tmp127,"tmp127");
					HX_STACK_LINE(487)
					Float tmp128 = (tmp120 - tmp127);		HX_STACK_VAR(tmp128,"tmp128");
					HX_STACK_LINE(487)
					p3 = tmp128;
					HX_STACK_LINE(487)
					int tmp129 = (eOffset + (int)2);		HX_STACK_VAR(tmp129,"tmp129");
					HX_STACK_LINE(487)
					Float tmp130 = buf2->__unsafe_get(tmp129);		HX_STACK_VAR(tmp130,"tmp130");
					HX_STACK_LINE(487)
					Float tmp131 = tmp130;		HX_STACK_VAR(tmp131,"tmp131");
					HX_STACK_LINE(487)
					Float tmp132 = -(tmp131);		HX_STACK_VAR(tmp132,"tmp132");
					HX_STACK_LINE(487)
					int tmp133 = (bOffset + (int)2);		HX_STACK_VAR(tmp133,"tmp133");
					HX_STACK_LINE(487)
					Float tmp134 = b->__unsafe_get(tmp133);		HX_STACK_VAR(tmp134,"tmp134");
					HX_STACK_LINE(487)
					Float tmp135 = tmp134;		HX_STACK_VAR(tmp135,"tmp135");
					HX_STACK_LINE(487)
					Float tmp136 = (tmp132 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
					HX_STACK_LINE(487)
					int tmp137 = (eOffset + (int)3);		HX_STACK_VAR(tmp137,"tmp137");
					HX_STACK_LINE(487)
					Float tmp138 = buf2->__unsafe_get(tmp137);		HX_STACK_VAR(tmp138,"tmp138");
					HX_STACK_LINE(487)
					Float tmp139 = tmp138;		HX_STACK_VAR(tmp139,"tmp139");
					HX_STACK_LINE(487)
					int tmp140 = (bOffset + (int)3);		HX_STACK_VAR(tmp140,"tmp140");
					HX_STACK_LINE(487)
					Float tmp141 = b->__unsafe_get(tmp140);		HX_STACK_VAR(tmp141,"tmp141");
					HX_STACK_LINE(487)
					Float tmp142 = tmp141;		HX_STACK_VAR(tmp142,"tmp142");
					HX_STACK_LINE(487)
					Float tmp143 = (tmp139 * tmp142);		HX_STACK_VAR(tmp143,"tmp143");
					HX_STACK_LINE(487)
					Float tmp144 = (tmp136 - tmp143);		HX_STACK_VAR(tmp144,"tmp144");
					HX_STACK_LINE(487)
					p2 = tmp144;
					HX_STACK_LINE(487)
					int tmp145 = (dOffset0 + (int)2);		HX_STACK_VAR(tmp145,"tmp145");
					HX_STACK_LINE(487)
					Float tmp146 = p3;		HX_STACK_VAR(tmp146,"tmp146");
					HX_STACK_LINE(487)
					Float tmp147 = buffer->__unsafe_set(tmp145,tmp146);		HX_STACK_VAR(tmp147,"tmp147");
					HX_STACK_LINE(487)
					tmp147;
					HX_STACK_LINE(487)
					int tmp148 = (dOffset1 + (int)1);		HX_STACK_VAR(tmp148,"tmp148");
					HX_STACK_LINE(487)
					Float tmp149 = p3;		HX_STACK_VAR(tmp149,"tmp149");
					HX_STACK_LINE(487)
					Float tmp150 = -(tmp149);		HX_STACK_VAR(tmp150,"tmp150");
					HX_STACK_LINE(487)
					Float tmp151 = buffer->__unsafe_set(tmp148,tmp150);		HX_STACK_VAR(tmp151,"tmp151");
					HX_STACK_LINE(487)
					tmp151;
					HX_STACK_LINE(487)
					int tmp152 = (dOffset2 + (int)2);		HX_STACK_VAR(tmp152,"tmp152");
					HX_STACK_LINE(487)
					Float tmp153 = p2;		HX_STACK_VAR(tmp153,"tmp153");
					HX_STACK_LINE(487)
					Float tmp154 = buffer->__unsafe_set(tmp152,tmp153);		HX_STACK_VAR(tmp154,"tmp154");
					HX_STACK_LINE(487)
					tmp154;
					HX_STACK_LINE(487)
					int tmp155 = (dOffset3 + (int)1);		HX_STACK_VAR(tmp155,"tmp155");
					HX_STACK_LINE(487)
					Float tmp156 = p2;		HX_STACK_VAR(tmp156,"tmp156");
					HX_STACK_LINE(487)
					Float tmp157 = buffer->__unsafe_set(tmp155,tmp156);		HX_STACK_VAR(tmp157,"tmp157");
					HX_STACK_LINE(487)
					tmp157;
					HX_STACK_LINE(487)
					int tmp158 = eOffset;		HX_STACK_VAR(tmp158,"tmp158");
					HX_STACK_LINE(487)
					Float tmp159 = buf2->__unsafe_get(tmp158);		HX_STACK_VAR(tmp159,"tmp159");
					HX_STACK_LINE(487)
					Float tmp160 = tmp159;		HX_STACK_VAR(tmp160,"tmp160");
					HX_STACK_LINE(487)
					int tmp161 = (bOffset + (int)1);		HX_STACK_VAR(tmp161,"tmp161");
					HX_STACK_LINE(487)
					Float tmp162 = b->__unsafe_get(tmp161);		HX_STACK_VAR(tmp162,"tmp162");
					HX_STACK_LINE(487)
					Float tmp163 = tmp162;		HX_STACK_VAR(tmp163,"tmp163");
					HX_STACK_LINE(487)
					Float tmp164 = (tmp160 * tmp163);		HX_STACK_VAR(tmp164,"tmp164");
					HX_STACK_LINE(487)
					int tmp165 = (eOffset + (int)1);		HX_STACK_VAR(tmp165,"tmp165");
					HX_STACK_LINE(487)
					Float tmp166 = buf2->__unsafe_get(tmp165);		HX_STACK_VAR(tmp166,"tmp166");
					HX_STACK_LINE(487)
					Float tmp167 = tmp166;		HX_STACK_VAR(tmp167,"tmp167");
					HX_STACK_LINE(487)
					int tmp168 = bOffset;		HX_STACK_VAR(tmp168,"tmp168");
					HX_STACK_LINE(487)
					Float tmp169 = b->__unsafe_get(tmp168);		HX_STACK_VAR(tmp169,"tmp169");
					HX_STACK_LINE(487)
					Float tmp170 = tmp169;		HX_STACK_VAR(tmp170,"tmp170");
					HX_STACK_LINE(487)
					Float tmp171 = (tmp167 * tmp170);		HX_STACK_VAR(tmp171,"tmp171");
					HX_STACK_LINE(487)
					Float tmp172 = (tmp164 - tmp171);		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(487)
					p1 = tmp172;
					HX_STACK_LINE(487)
					int tmp173 = eOffset;		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(487)
					Float tmp174 = buf2->__unsafe_get(tmp173);		HX_STACK_VAR(tmp174,"tmp174");
					HX_STACK_LINE(487)
					Float tmp175 = tmp174;		HX_STACK_VAR(tmp175,"tmp175");
					HX_STACK_LINE(487)
					Float tmp176 = -(tmp175);		HX_STACK_VAR(tmp176,"tmp176");
					HX_STACK_LINE(487)
					int tmp177 = bOffset;		HX_STACK_VAR(tmp177,"tmp177");
					HX_STACK_LINE(487)
					Float tmp178 = b->__unsafe_get(tmp177);		HX_STACK_VAR(tmp178,"tmp178");
					HX_STACK_LINE(487)
					Float tmp179 = tmp178;		HX_STACK_VAR(tmp179,"tmp179");
					HX_STACK_LINE(487)
					Float tmp180 = (tmp176 * tmp179);		HX_STACK_VAR(tmp180,"tmp180");
					HX_STACK_LINE(487)
					int tmp181 = (eOffset + (int)1);		HX_STACK_VAR(tmp181,"tmp181");
					HX_STACK_LINE(487)
					Float tmp182 = buf2->__unsafe_get(tmp181);		HX_STACK_VAR(tmp182,"tmp182");
					HX_STACK_LINE(487)
					Float tmp183 = tmp182;		HX_STACK_VAR(tmp183,"tmp183");
					HX_STACK_LINE(487)
					int tmp184 = (bOffset + (int)1);		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(487)
					Float tmp185 = b->__unsafe_get(tmp184);		HX_STACK_VAR(tmp185,"tmp185");
					HX_STACK_LINE(487)
					Float tmp186 = tmp185;		HX_STACK_VAR(tmp186,"tmp186");
					HX_STACK_LINE(487)
					Float tmp187 = (tmp183 * tmp186);		HX_STACK_VAR(tmp187,"tmp187");
					HX_STACK_LINE(487)
					Float tmp188 = (tmp180 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
					HX_STACK_LINE(487)
					p0 = tmp188;
					HX_STACK_LINE(487)
					int tmp189 = (dOffset0 + (int)3);		HX_STACK_VAR(tmp189,"tmp189");
					HX_STACK_LINE(487)
					Float tmp190 = p1;		HX_STACK_VAR(tmp190,"tmp190");
					HX_STACK_LINE(487)
					Float tmp191 = buffer->__unsafe_set(tmp189,tmp190);		HX_STACK_VAR(tmp191,"tmp191");
					HX_STACK_LINE(487)
					tmp191;
					HX_STACK_LINE(487)
					int tmp192 = dOffset1;		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(487)
					Float tmp193 = p1;		HX_STACK_VAR(tmp193,"tmp193");
					HX_STACK_LINE(487)
					Float tmp194 = -(tmp193);		HX_STACK_VAR(tmp194,"tmp194");
					HX_STACK_LINE(487)
					Float tmp195 = buffer->__unsafe_set(tmp192,tmp194);		HX_STACK_VAR(tmp195,"tmp195");
					HX_STACK_LINE(487)
					tmp195;
					HX_STACK_LINE(487)
					int tmp196 = (dOffset2 + (int)3);		HX_STACK_VAR(tmp196,"tmp196");
					HX_STACK_LINE(487)
					Float tmp197 = p0;		HX_STACK_VAR(tmp197,"tmp197");
					HX_STACK_LINE(487)
					Float tmp198 = buffer->__unsafe_set(tmp196,tmp197);		HX_STACK_VAR(tmp198,"tmp198");
					HX_STACK_LINE(487)
					tmp198;
					HX_STACK_LINE(487)
					int tmp199 = dOffset3;		HX_STACK_VAR(tmp199,"tmp199");
					HX_STACK_LINE(487)
					Float tmp200 = p0;		HX_STACK_VAR(tmp200,"tmp200");
					HX_STACK_LINE(487)
					Float tmp201 = buffer->__unsafe_set(tmp199,tmp200);		HX_STACK_VAR(tmp201,"tmp201");
					HX_STACK_LINE(487)
					tmp201;
					HX_STACK_LINE(487)
					hx::SubEq(bOffset,(int)8);
					HX_STACK_LINE(487)
					hx::SubEq(eOffset,(int)8);
					HX_STACK_LINE(487)
					hx::AddEq(dOffset0,(int)4);
					HX_STACK_LINE(487)
					hx::AddEq(dOffset2,(int)4);
					HX_STACK_LINE(487)
					hx::SubEq(dOffset1,(int)4);
					HX_STACK_LINE(487)
					hx::SubEq(dOffset3,(int)4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VorbisDecoder_obj,inverseMdct,(void))

Dynamic VorbisDecoder_obj::decodePacket( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","decodePacket",0xe6ace627,"kha.audio2.ogg.vorbis.VorbisDecoder.decodePacket","kha/audio2/ogg/vorbis/VorbisDecoder.hx",491,0xbe2976a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(492)
	Dynamic tmp = this->decodeInitial();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(492)
	Dynamic result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(493)
	bool tmp1 = (result == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(493)
	if ((tmp1)){
		HX_STACK_LINE(494)
		return null();
	}
	HX_STACK_LINE(496)
	Dynamic tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(496)
	Dynamic tmp3 = this->decodePacketRest(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(496)
	Dynamic rest = tmp3;		HX_STACK_VAR(rest,"rest");
	HX_STACK_LINE(497)
	Dynamic tmp4 = rest;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(497)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecoder_obj,decodePacket,return )

Dynamic VorbisDecoder_obj::decodeInitial( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","decodeInitial",0x7a874d05,"kha.audio2.ogg.vorbis.VorbisDecoder.decodeInitial","kha/audio2/ogg/vorbis/VorbisDecoder.hx",501,0xbe2976a1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(502)
	int tmp = this->channelBufferEnd = (int)0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(502)
	this->channelBufferStart = tmp;
	HX_STACK_LINE(504)
	do{
		HX_STACK_LINE(505)
		::kha::audio2::ogg::vorbis::VorbisDecodeState tmp1 = this->decodeState;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(505)
		bool tmp2 = tmp1->maybeStartPacket();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(505)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(505)
		if ((tmp3)){
			HX_STACK_LINE(506)
			return null();
		}
		HX_STACK_LINE(510)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp5 = this->decodeState;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(510)
			::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(510)
			bool tmp6 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(510)
			if ((tmp6)){
				HX_STACK_LINE(510)
				tmp4 = (int)0;
			}
			else{
				HX_STACK_LINE(510)
				bool tmp7 = (_this->validBits < (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(510)
				if ((tmp7)){
					HX_STACK_LINE(510)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(510)
					if ((tmp8)){
						HX_STACK_LINE(510)
						int tmp9 = _this->readBits((int)24);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(510)
						int tmp10 = (int)-23;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(510)
						int tmp11 = _this->readBits(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(510)
						int tmp12 = (int(tmp11) << int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(510)
						tmp4 = (tmp9 + tmp12);
					}
					else{
						HX_STACK_LINE(510)
						bool tmp9 = (_this->validBits == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(510)
						if ((tmp9)){
							HX_STACK_LINE(510)
							_this->acc = (int)0;
						}
						HX_STACK_LINE(510)
						while((true)){
							HX_STACK_LINE(510)
							bool tmp10 = (_this->bytesInSeg == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(510)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(510)
							if ((tmp10)){
								HX_STACK_LINE(510)
								bool tmp12 = _this->lastSeg;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(510)
								bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(510)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(510)
								bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(510)
								bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(510)
								if ((tmp16)){
									HX_STACK_LINE(510)
									int tmp17 = _this->next();		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(510)
									int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(510)
									int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(510)
									tmp11 = (tmp19 == (int)0);
								}
								else{
									HX_STACK_LINE(510)
									tmp11 = true;
								}
							}
							else{
								HX_STACK_LINE(510)
								tmp11 = false;
							}
							HX_STACK_LINE(510)
							if ((tmp11)){
								HX_STACK_LINE(510)
								_this->validBits = (int)-1;
								HX_STACK_LINE(510)
								break;
							}
							else{
								HX_STACK_LINE(510)
								(_this->bytesInSeg)--;
								HX_STACK_LINE(510)
								int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(510)
								{
									HX_STACK_LINE(510)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(510)
									{
										HX_STACK_LINE(510)
										hx::AddEq(_this->inputPosition,(int)1);
										HX_STACK_LINE(510)
										tmp13 = _this->input->readByte();
									}
									HX_STACK_LINE(510)
									int tmp14 = _this->validBits;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(510)
									int tmp15 = (int(tmp13) << int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(510)
									int b = tmp15;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(510)
									tmp12 = (_this->acc + b);
								}
								HX_STACK_LINE(510)
								_this->acc = tmp12;
								HX_STACK_LINE(510)
								hx::AddEq(_this->validBits,(int)8);
							}
							HX_STACK_LINE(510)
							bool tmp12 = (_this->validBits < (int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(510)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(510)
							if ((tmp13)){
								HX_STACK_LINE(510)
								break;
							}
						}
						HX_STACK_LINE(510)
						bool tmp10 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(510)
						if ((tmp10)){
							HX_STACK_LINE(510)
							tmp4 = (int)0;
						}
						else{
							HX_STACK_LINE(510)
							int tmp11 = _this->acc;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(510)
							int tmp12 = (int)2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(510)
							int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(510)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(510)
							int tmp15 = (int(tmp11) & int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(510)
							int z = tmp15;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(510)
							int tmp16 = hx::UShr(_this->acc,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(510)
							_this->acc = tmp16;
							HX_STACK_LINE(510)
							hx::SubEq(_this->validBits,(int)1);
							HX_STACK_LINE(510)
							tmp4 = z;
						}
					}
				}
				else{
					HX_STACK_LINE(510)
					int tmp8 = _this->acc;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(510)
					int tmp9 = (int)2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(510)
					int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(510)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(510)
					int tmp12 = (int(tmp8) & int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(510)
					int z = tmp12;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(510)
					int tmp13 = hx::UShr(_this->acc,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(510)
					_this->acc = tmp13;
					HX_STACK_LINE(510)
					hx::SubEq(_this->validBits,(int)1);
					HX_STACK_LINE(510)
					tmp4 = z;
				}
			}
		}
		HX_STACK_LINE(510)
		bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(510)
		if ((tmp5)){
			HX_STACK_LINE(511)
			while((true)){
				HX_STACK_LINE(511)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(511)
				{
					HX_STACK_LINE(511)
					::kha::audio2::ogg::vorbis::VorbisDecodeState tmp7 = this->decodeState;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(511)
					::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(511)
					bool tmp8 = (_this->bytesInSeg == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(511)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(511)
					if ((tmp8)){
						HX_STACK_LINE(511)
						bool tmp10 = _this->lastSeg;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(511)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(511)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(511)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(511)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(511)
						if ((tmp14)){
							HX_STACK_LINE(511)
							int tmp15 = _this->next();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(511)
							int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(511)
							int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(511)
							tmp9 = (tmp17 == (int)0);
						}
						else{
							HX_STACK_LINE(511)
							tmp9 = true;
						}
					}
					else{
						HX_STACK_LINE(511)
						tmp9 = false;
					}
					HX_STACK_LINE(511)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(511)
					if ((tmp9)){
						HX_STACK_LINE(511)
						tmp10 = (int)-1;
					}
					else{
						HX_STACK_LINE(511)
						(_this->bytesInSeg)--;
						HX_STACK_LINE(511)
						{
							HX_STACK_LINE(511)
							hx::AddEq(_this->inputPosition,(int)1);
							HX_STACK_LINE(511)
							tmp10 = _this->input->readByte();
						}
					}
					HX_STACK_LINE(511)
					int x = tmp10;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(511)
					_this->validBits = (int)0;
					HX_STACK_LINE(511)
					tmp6 = x;
				}
				HX_STACK_LINE(511)
				bool tmp7 = ((int)-1 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(511)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(511)
				if ((tmp8)){
					HX_STACK_LINE(511)
					break;
				}
			}
			HX_STACK_LINE(512)
			continue;
		}
		HX_STACK_LINE(514)
		break;
	}
while((true));
	HX_STACK_LINE(517)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(517)
	{
		HX_STACK_LINE(517)
		::kha::audio2::ogg::vorbis::VorbisDecodeState tmp2 = this->decodeState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(517)
		::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(517)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(517)
		{
			HX_STACK_LINE(517)
			::kha::audio2::ogg::vorbis::data::Header tmp4 = this->header;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(517)
			int tmp5 = tmp4->modes->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(517)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(517)
			int n = tmp6;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(517)
			Array< int > tmp7 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(517)
			Array< int > log2_4 = tmp7;		HX_STACK_VAR(log2_4,"log2_4");
			HX_STACK_LINE(517)
			bool tmp8 = (n < (int)16384);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(517)
			if ((tmp8)){
				HX_STACK_LINE(517)
				bool tmp9 = (n < (int)16);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(517)
				if ((tmp9)){
					HX_STACK_LINE(517)
					tmp3 = log2_4->__get(n);
				}
				else{
					HX_STACK_LINE(517)
					bool tmp10 = (n < (int)512);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(517)
					if ((tmp10)){
						HX_STACK_LINE(517)
						Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(517)
						int tmp12 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(517)
						int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(517)
						tmp3 = ((int)5 + tmp13);
					}
					else{
						HX_STACK_LINE(517)
						Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(517)
						int tmp12 = (int(n) >> int((int)10));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(517)
						int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(517)
						tmp3 = ((int)10 + tmp13);
					}
				}
			}
			else{
				HX_STACK_LINE(517)
				bool tmp9 = (n < (int)16777216);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(517)
				if ((tmp9)){
					HX_STACK_LINE(517)
					bool tmp10 = (n < (int)524288);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(517)
					if ((tmp10)){
						HX_STACK_LINE(517)
						Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(517)
						int tmp12 = (int(n) >> int((int)15));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(517)
						int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(517)
						tmp3 = ((int)15 + tmp13);
					}
					else{
						HX_STACK_LINE(517)
						Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(517)
						int tmp12 = (int(n) >> int((int)20));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(517)
						int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(517)
						tmp3 = ((int)20 + tmp13);
					}
				}
				else{
					HX_STACK_LINE(517)
					bool tmp10 = (n < (int)536870912);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(517)
					if ((tmp10)){
						HX_STACK_LINE(517)
						Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(517)
						int tmp12 = (int(n) >> int((int)25));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(517)
						int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(517)
						tmp3 = ((int)25 + tmp13);
					}
					else{
						HX_STACK_LINE(517)
						bool tmp11 = (n < (int)-2147483648);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(517)
						if ((tmp11)){
							HX_STACK_LINE(517)
							Array< int > tmp12 = log2_4;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(517)
							int tmp13 = (int(n) >> int((int)30));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(517)
							int tmp14 = tmp12->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(517)
							tmp3 = ((int)30 + tmp14);
						}
						else{
							HX_STACK_LINE(517)
							tmp3 = (int)0;
						}
					}
				}
			}
		}
		HX_STACK_LINE(517)
		int n = tmp3;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(517)
		bool tmp4 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(517)
		if ((tmp4)){
			HX_STACK_LINE(517)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(517)
			bool tmp5 = (_this->validBits < n);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(517)
			if ((tmp5)){
				HX_STACK_LINE(517)
				bool tmp6 = (n > (int)24);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(517)
				if ((tmp6)){
					HX_STACK_LINE(517)
					int tmp7 = _this->readBits((int)24);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(517)
					int tmp8 = (n - (int)24);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(517)
					int tmp9 = _this->readBits(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(517)
					int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(517)
					tmp1 = (tmp7 + tmp10);
				}
				else{
					HX_STACK_LINE(517)
					bool tmp7 = (_this->validBits == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(517)
					if ((tmp7)){
						HX_STACK_LINE(517)
						_this->acc = (int)0;
					}
					HX_STACK_LINE(517)
					while((true)){
						HX_STACK_LINE(517)
						bool tmp8 = (_this->bytesInSeg == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(517)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(517)
						if ((tmp8)){
							HX_STACK_LINE(517)
							bool tmp10 = _this->lastSeg;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(517)
							bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(517)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(517)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(517)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(517)
							if ((tmp14)){
								HX_STACK_LINE(517)
								int tmp15 = _this->next();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(517)
								int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(517)
								int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(517)
								tmp9 = (tmp17 == (int)0);
							}
							else{
								HX_STACK_LINE(517)
								tmp9 = true;
							}
						}
						else{
							HX_STACK_LINE(517)
							tmp9 = false;
						}
						HX_STACK_LINE(517)
						if ((tmp9)){
							HX_STACK_LINE(517)
							_this->validBits = (int)-1;
							HX_STACK_LINE(517)
							break;
						}
						else{
							HX_STACK_LINE(517)
							(_this->bytesInSeg)--;
							HX_STACK_LINE(517)
							int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(517)
							{
								HX_STACK_LINE(517)
								int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(517)
								{
									HX_STACK_LINE(517)
									hx::AddEq(_this->inputPosition,(int)1);
									HX_STACK_LINE(517)
									tmp11 = _this->input->readByte();
								}
								HX_STACK_LINE(517)
								int tmp12 = _this->validBits;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(517)
								int tmp13 = (int(tmp11) << int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(517)
								int b = tmp13;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(517)
								tmp10 = (_this->acc + b);
							}
							HX_STACK_LINE(517)
							_this->acc = tmp10;
							HX_STACK_LINE(517)
							hx::AddEq(_this->validBits,(int)8);
						}
						HX_STACK_LINE(517)
						bool tmp10 = (_this->validBits < n);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(517)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(517)
						if ((tmp11)){
							HX_STACK_LINE(517)
							break;
						}
					}
					HX_STACK_LINE(517)
					bool tmp8 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(517)
					if ((tmp8)){
						HX_STACK_LINE(517)
						tmp1 = (int)0;
					}
					else{
						HX_STACK_LINE(517)
						int tmp9 = _this->acc;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(517)
						int tmp10 = (int((int)1) << int(n));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(517)
						int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(517)
						int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(517)
						int tmp13 = (int(tmp9) & int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(517)
						int z = tmp13;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(517)
						int tmp14 = hx::UShr(_this->acc,n);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(517)
						_this->acc = tmp14;
						HX_STACK_LINE(517)
						hx::SubEq(_this->validBits,n);
						HX_STACK_LINE(517)
						tmp1 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(517)
				int tmp6 = _this->acc;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(517)
				int tmp7 = (int((int)1) << int(n));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(517)
				int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(517)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(517)
				int tmp10 = (int(tmp6) & int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(517)
				int z = tmp10;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(517)
				int tmp11 = hx::UShr(_this->acc,n);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(517)
				_this->acc = tmp11;
				HX_STACK_LINE(517)
				hx::SubEq(_this->validBits,n);
				HX_STACK_LINE(517)
				tmp1 = z;
			}
		}
	}
	HX_STACK_LINE(517)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(518)
	bool tmp2 = (i == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(518)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(518)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(518)
	if ((tmp3)){
		HX_STACK_LINE(518)
		int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(518)
		::kha::audio2::ogg::vorbis::data::Header tmp6 = this->header;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(518)
		::kha::audio2::ogg::vorbis::data::Header tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(518)
		int tmp8 = tmp7->modes->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(518)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(518)
		tmp4 = (tmp5 >= tmp9);
	}
	else{
		HX_STACK_LINE(518)
		tmp4 = true;
	}
	HX_STACK_LINE(518)
	if ((tmp4)){
		HX_STACK_LINE(519)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("VorbisDecoder.hx","\x0d","\x8b","\x92","\xa5"),519,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecoder","\x3d","\x44","\x15","\x18"),HX_HCSTRING("decodeInitial","\xf6","\xfc","\x28","\xf6"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(519)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp6 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::SEEK_FAILED,null(),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(519)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(522)
	::kha::audio2::ogg::vorbis::data::Header tmp5 = this->header;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(522)
	int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(522)
	::kha::audio2::ogg::vorbis::data::Mode tmp7 = tmp5->modes->__unsafe_get(tmp6).StaticCast< ::kha::audio2::ogg::vorbis::data::Mode >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(522)
	::kha::audio2::ogg::vorbis::data::Mode m = tmp7;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(523)
	int n;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(523)
	int prev;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(523)
	int next;		HX_STACK_VAR(next,"next");
	HX_STACK_LINE(525)
	bool tmp8 = m->blockflag;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(525)
	if ((tmp8)){
		HX_STACK_LINE(526)
		::kha::audio2::ogg::vorbis::data::Header tmp9 = this->header;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(526)
		n = tmp9->blocksize1;
		HX_STACK_LINE(527)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(527)
		{
			HX_STACK_LINE(527)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp11 = this->decodeState;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(527)
			::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(527)
			bool tmp12 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(527)
			if ((tmp12)){
				HX_STACK_LINE(527)
				tmp10 = (int)0;
			}
			else{
				HX_STACK_LINE(527)
				bool tmp13 = (_this->validBits < (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(527)
				if ((tmp13)){
					HX_STACK_LINE(527)
					bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(527)
					if ((tmp14)){
						HX_STACK_LINE(527)
						int tmp15 = _this->readBits((int)24);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(527)
						int tmp16 = (int)-23;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(527)
						int tmp17 = _this->readBits(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(527)
						int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(527)
						tmp10 = (tmp15 + tmp18);
					}
					else{
						HX_STACK_LINE(527)
						bool tmp15 = (_this->validBits == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(527)
						if ((tmp15)){
							HX_STACK_LINE(527)
							_this->acc = (int)0;
						}
						HX_STACK_LINE(527)
						while((true)){
							HX_STACK_LINE(527)
							bool tmp16 = (_this->bytesInSeg == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(527)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(527)
							if ((tmp16)){
								HX_STACK_LINE(527)
								bool tmp18 = _this->lastSeg;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(527)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(527)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(527)
								bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(527)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(527)
								if ((tmp22)){
									HX_STACK_LINE(527)
									int tmp23 = _this->next();		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(527)
									int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(527)
									int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(527)
									tmp17 = (tmp25 == (int)0);
								}
								else{
									HX_STACK_LINE(527)
									tmp17 = true;
								}
							}
							else{
								HX_STACK_LINE(527)
								tmp17 = false;
							}
							HX_STACK_LINE(527)
							if ((tmp17)){
								HX_STACK_LINE(527)
								_this->validBits = (int)-1;
								HX_STACK_LINE(527)
								break;
							}
							else{
								HX_STACK_LINE(527)
								(_this->bytesInSeg)--;
								HX_STACK_LINE(527)
								int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(527)
								{
									HX_STACK_LINE(527)
									int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(527)
									{
										HX_STACK_LINE(527)
										hx::AddEq(_this->inputPosition,(int)1);
										HX_STACK_LINE(527)
										tmp19 = _this->input->readByte();
									}
									HX_STACK_LINE(527)
									int tmp20 = _this->validBits;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(527)
									int tmp21 = (int(tmp19) << int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(527)
									int b = tmp21;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(527)
									tmp18 = (_this->acc + b);
								}
								HX_STACK_LINE(527)
								_this->acc = tmp18;
								HX_STACK_LINE(527)
								hx::AddEq(_this->validBits,(int)8);
							}
							HX_STACK_LINE(527)
							bool tmp18 = (_this->validBits < (int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(527)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(527)
							if ((tmp19)){
								HX_STACK_LINE(527)
								break;
							}
						}
						HX_STACK_LINE(527)
						bool tmp16 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(527)
						if ((tmp16)){
							HX_STACK_LINE(527)
							tmp10 = (int)0;
						}
						else{
							HX_STACK_LINE(527)
							int tmp17 = _this->acc;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(527)
							int tmp18 = (int)2;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(527)
							int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(527)
							int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(527)
							int tmp21 = (int(tmp17) & int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(527)
							int z = tmp21;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(527)
							int tmp22 = hx::UShr(_this->acc,(int)1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(527)
							_this->acc = tmp22;
							HX_STACK_LINE(527)
							hx::SubEq(_this->validBits,(int)1);
							HX_STACK_LINE(527)
							tmp10 = z;
						}
					}
				}
				else{
					HX_STACK_LINE(527)
					int tmp14 = _this->acc;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(527)
					int tmp15 = (int)2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(527)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(527)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(527)
					int tmp18 = (int(tmp14) & int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(527)
					int z = tmp18;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(527)
					int tmp19 = hx::UShr(_this->acc,(int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(527)
					_this->acc = tmp19;
					HX_STACK_LINE(527)
					hx::SubEq(_this->validBits,(int)1);
					HX_STACK_LINE(527)
					tmp10 = z;
				}
			}
		}
		HX_STACK_LINE(527)
		prev = tmp10;
		HX_STACK_LINE(528)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(528)
		{
			HX_STACK_LINE(528)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp12 = this->decodeState;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(528)
			::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(528)
			bool tmp13 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(528)
			if ((tmp13)){
				HX_STACK_LINE(528)
				tmp11 = (int)0;
			}
			else{
				HX_STACK_LINE(528)
				bool tmp14 = (_this->validBits < (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(528)
				if ((tmp14)){
					HX_STACK_LINE(528)
					bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(528)
					if ((tmp15)){
						HX_STACK_LINE(528)
						int tmp16 = _this->readBits((int)24);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(528)
						int tmp17 = (int)-23;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(528)
						int tmp18 = _this->readBits(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(528)
						int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(528)
						tmp11 = (tmp16 + tmp19);
					}
					else{
						HX_STACK_LINE(528)
						bool tmp16 = (_this->validBits == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(528)
						if ((tmp16)){
							HX_STACK_LINE(528)
							_this->acc = (int)0;
						}
						HX_STACK_LINE(528)
						while((true)){
							HX_STACK_LINE(528)
							bool tmp17 = (_this->bytesInSeg == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(528)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(528)
							if ((tmp17)){
								HX_STACK_LINE(528)
								bool tmp19 = _this->lastSeg;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(528)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(528)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(528)
								bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(528)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(528)
								if ((tmp23)){
									HX_STACK_LINE(528)
									int tmp24 = _this->next();		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(528)
									int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(528)
									int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(528)
									tmp18 = (tmp26 == (int)0);
								}
								else{
									HX_STACK_LINE(528)
									tmp18 = true;
								}
							}
							else{
								HX_STACK_LINE(528)
								tmp18 = false;
							}
							HX_STACK_LINE(528)
							if ((tmp18)){
								HX_STACK_LINE(528)
								_this->validBits = (int)-1;
								HX_STACK_LINE(528)
								break;
							}
							else{
								HX_STACK_LINE(528)
								(_this->bytesInSeg)--;
								HX_STACK_LINE(528)
								int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(528)
								{
									HX_STACK_LINE(528)
									int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(528)
									{
										HX_STACK_LINE(528)
										hx::AddEq(_this->inputPosition,(int)1);
										HX_STACK_LINE(528)
										tmp20 = _this->input->readByte();
									}
									HX_STACK_LINE(528)
									int tmp21 = _this->validBits;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(528)
									int tmp22 = (int(tmp20) << int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(528)
									int b = tmp22;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(528)
									tmp19 = (_this->acc + b);
								}
								HX_STACK_LINE(528)
								_this->acc = tmp19;
								HX_STACK_LINE(528)
								hx::AddEq(_this->validBits,(int)8);
							}
							HX_STACK_LINE(528)
							bool tmp19 = (_this->validBits < (int)1);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(528)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(528)
							if ((tmp20)){
								HX_STACK_LINE(528)
								break;
							}
						}
						HX_STACK_LINE(528)
						bool tmp17 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(528)
						if ((tmp17)){
							HX_STACK_LINE(528)
							tmp11 = (int)0;
						}
						else{
							HX_STACK_LINE(528)
							int tmp18 = _this->acc;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(528)
							int tmp19 = (int)2;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(528)
							int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(528)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(528)
							int tmp22 = (int(tmp18) & int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(528)
							int z = tmp22;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(528)
							int tmp23 = hx::UShr(_this->acc,(int)1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(528)
							_this->acc = tmp23;
							HX_STACK_LINE(528)
							hx::SubEq(_this->validBits,(int)1);
							HX_STACK_LINE(528)
							tmp11 = z;
						}
					}
				}
				else{
					HX_STACK_LINE(528)
					int tmp15 = _this->acc;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(528)
					int tmp16 = (int)2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(528)
					int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(528)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(528)
					int tmp19 = (int(tmp15) & int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(528)
					int z = tmp19;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(528)
					int tmp20 = hx::UShr(_this->acc,(int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(528)
					_this->acc = tmp20;
					HX_STACK_LINE(528)
					hx::SubEq(_this->validBits,(int)1);
					HX_STACK_LINE(528)
					tmp11 = z;
				}
			}
		}
		HX_STACK_LINE(528)
		next = tmp11;
	}
	else{
		HX_STACK_LINE(530)
		int tmp9 = next = (int)0;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(530)
		prev = tmp9;
		HX_STACK_LINE(531)
		::kha::audio2::ogg::vorbis::data::Header tmp10 = this->header;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(531)
		n = tmp10->blocksize0;
	}
	HX_STACK_LINE(535)
	int tmp9 = (int(n) >> int((int)1));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(535)
	int windowCenter = tmp9;		HX_STACK_VAR(windowCenter,"windowCenter");
	HX_STACK_LINE(538)
	int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(539)
	bool tmp11 = m->blockflag;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(539)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(539)
	if ((tmp11)){
		HX_STACK_LINE(539)
		tmp12 = (prev == (int)0);
	}
	else{
		HX_STACK_LINE(539)
		tmp12 = false;
	}
	HX_STACK_LINE(539)
	Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(539)
	if ((tmp12)){
		HX_STACK_LINE(540)
		int tmp14 = n;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(540)
		::kha::audio2::ogg::vorbis::data::Header tmp15 = this->header;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(540)
		int tmp16 = tmp15->blocksize0;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(540)
		int tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(540)
		int tmp18 = (int(tmp17) >> int((int)2));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(541)
		int tmp19 = n;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(541)
		::kha::audio2::ogg::vorbis::data::Header tmp20 = this->header;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(541)
		int tmp21 = tmp20->blocksize0;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(541)
		int tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(541)
		int tmp23 = (int(tmp22) >> int((int)2));		HX_STACK_VAR(tmp23,"tmp23");
		struct _Function_2_1{
			inline static Dynamic Block( int &tmp23,int &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/audio2/ogg/vorbis/VorbisDecoder.hx",539,0xbe2976a1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("start","\x62","\x74","\x0b","\x84") , tmp18,false);
					__result->Add(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00") , tmp23,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(539)
		tmp13 = _Function_2_1::Block(tmp23,tmp18);
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( int &windowCenter){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/audio2/ogg/vorbis/VorbisDecoder.hx",542,0xbe2976a1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("start","\x62","\x74","\x0b","\x84") , (int)0,false);
					__result->Add(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00") , windowCenter,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(542)
		tmp13 = _Function_2_1::Block(windowCenter);
	}
	HX_STACK_LINE(546)
	bool tmp14 = m->blockflag;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(546)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(546)
	if ((tmp14)){
		HX_STACK_LINE(546)
		tmp15 = (next == (int)0);
	}
	else{
		HX_STACK_LINE(546)
		tmp15 = false;
	}
	HX_STACK_LINE(546)
	Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(546)
	if ((tmp15)){
		HX_STACK_LINE(547)
		int tmp17 = (n * (int)3);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(547)
		::kha::audio2::ogg::vorbis::data::Header tmp18 = this->header;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(547)
		int tmp19 = tmp18->blocksize0;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(547)
		int tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(547)
		int tmp21 = (int(tmp20) >> int((int)2));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(548)
		int tmp22 = (n * (int)3);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(548)
		::kha::audio2::ogg::vorbis::data::Header tmp23 = this->header;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(548)
		int tmp24 = tmp23->blocksize0;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(548)
		int tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(548)
		int tmp26 = (int(tmp25) >> int((int)2));		HX_STACK_VAR(tmp26,"tmp26");
		struct _Function_2_1{
			inline static Dynamic Block( int &tmp26,int &tmp21){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/audio2/ogg/vorbis/VorbisDecoder.hx",546,0xbe2976a1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("start","\x62","\x74","\x0b","\x84") , tmp21,false);
					__result->Add(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00") , tmp26,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(546)
		tmp16 = _Function_2_1::Block(tmp26,tmp21);
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( int &n,int &windowCenter){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/audio2/ogg/vorbis/VorbisDecoder.hx",549,0xbe2976a1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("start","\x62","\x74","\x0b","\x84") , windowCenter,false);
					__result->Add(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00") , n,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(549)
		tmp16 = _Function_2_1::Block(n,windowCenter);
	}
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &tmp13,int &tmp10,Dynamic &tmp16){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/audio2/ogg/vorbis/VorbisDecoder.hx",537,0xbe2976a1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48") , tmp10,false);
				__result->Add(HX_HCSTRING("left","\x07","\x08","\xb0","\x47") , tmp13,false);
				__result->Add(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9") , tmp16,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(537)
	Dynamic tmp17 = _Function_1_1::Block(tmp13,tmp10,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(537)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(VorbisDecoder_obj,decodeInitial,return )

Dynamic VorbisDecoder_obj::decodePacketRest( Dynamic r){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","decodePacketRest",0x81390cdb,"kha.audio2.ogg.vorbis.VorbisDecoder.decodePacketRest","kha/audio2/ogg/vorbis/VorbisDecoder.hx",558,0xbe2976a1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(559)
	int len = (int)0;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(560)
	::kha::audio2::ogg::vorbis::data::Header tmp = this->header;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(560)
	int tmp1 = r->__Field(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(560)
	::kha::audio2::ogg::vorbis::data::Mode tmp2 = tmp->modes->__unsafe_get(tmp1).StaticCast< ::kha::audio2::ogg::vorbis::data::Mode >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(560)
	::kha::audio2::ogg::vorbis::data::Mode m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(562)
	Array< bool > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(562)
	{
		HX_STACK_LINE(562)
		Array< bool > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(562)
		Array< bool > tmp4 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(562)
		this1 = tmp4;
		HX_STACK_LINE(562)
		this1->__SetSizeExact((int)256);
		HX_STACK_LINE(562)
		tmp3 = this1;
	}
	HX_STACK_LINE(562)
	Array< bool > zeroChannel = tmp3;		HX_STACK_VAR(zeroChannel,"zeroChannel");
	HX_STACK_LINE(563)
	Array< bool > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(563)
	{
		HX_STACK_LINE(563)
		Array< bool > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(563)
		Array< bool > tmp5 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(563)
		this1 = tmp5;
		HX_STACK_LINE(563)
		this1->__SetSizeExact((int)256);
		HX_STACK_LINE(563)
		tmp4 = this1;
	}
	HX_STACK_LINE(563)
	Array< bool > reallyZeroChannel = tmp4;		HX_STACK_VAR(reallyZeroChannel,"reallyZeroChannel");
	HX_STACK_LINE(567)
	bool tmp5 = m->blockflag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(567)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(567)
	if ((tmp5)){
		HX_STACK_LINE(567)
		::kha::audio2::ogg::vorbis::data::Header tmp7 = this->header;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(567)
		tmp6 = tmp7->blocksize1;
	}
	else{
		HX_STACK_LINE(567)
		::kha::audio2::ogg::vorbis::data::Header tmp7 = this->header;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(567)
		tmp6 = tmp7->blocksize0;
	}
	HX_STACK_LINE(567)
	int n = tmp6;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(568)
	::kha::audio2::ogg::vorbis::data::Header tmp7 = this->header;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(568)
	int tmp8 = m->mapping;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(568)
	::kha::audio2::ogg::vorbis::data::Mapping tmp9 = tmp7->mapping->__unsafe_get(tmp8).StaticCast< ::kha::audio2::ogg::vorbis::data::Mapping >();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(568)
	::kha::audio2::ogg::vorbis::data::Mapping map = tmp9;		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(571)
	int tmp10 = (int(n) >> int((int)1));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(571)
	int n2 = tmp10;		HX_STACK_VAR(n2,"n2");
	HX_STACK_LINE(573)
	Array< int > tmp11 = Array_obj< int >::__new().Add((int)256).Add((int)128).Add((int)86).Add((int)64);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(573)
	Array< int > rangeList = tmp11;		HX_STACK_VAR(rangeList,"rangeList");
	HX_STACK_LINE(574)
	::kha::audio2::ogg::vorbis::data::Header tmp12 = this->header;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(574)
	Array< ::Dynamic > codebooks = tmp12->codebooks;		HX_STACK_VAR(codebooks,"codebooks");
	HX_STACK_LINE(576)
	{
		HX_STACK_LINE(576)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(576)
		::kha::audio2::ogg::vorbis::data::Header tmp13 = this->header;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(576)
		int _g = tmp13->channel;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(576)
		while((true)){
			HX_STACK_LINE(576)
			bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(576)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(576)
			if ((tmp15)){
				HX_STACK_LINE(576)
				break;
			}
			HX_STACK_LINE(576)
			int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(576)
			int i = tmp16;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(577)
			int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(577)
			::kha::audio2::ogg::vorbis::data::MappingChannel tmp18 = map->chan->__unsafe_get(tmp17).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(577)
			int tmp19 = tmp18->mux;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(577)
			int s = tmp19;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(578)
			int tmp20 = i;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(578)
			bool tmp21 = zeroChannel->__unsafe_set(tmp20,false);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(578)
			tmp21;
			HX_STACK_LINE(579)
			::kha::audio2::ogg::vorbis::data::Floor tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				int tmp23 = s;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(579)
				int tmp24 = map->submapFloor->__unsafe_get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(579)
				int index = tmp24;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(579)
				::kha::audio2::ogg::vorbis::data::Header tmp25 = this->header;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(579)
				int tmp26 = index;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(579)
				::kha::audio2::ogg::vorbis::data::Floor tmp27 = tmp25->floorConfig->__unsafe_get(tmp26).StaticCast< ::kha::audio2::ogg::vorbis::data::Floor >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(579)
				tmp22 = tmp27;
			}
			HX_STACK_LINE(579)
			::kha::audio2::ogg::vorbis::data::Floor floor = tmp22;		HX_STACK_VAR(floor,"floor");
			HX_STACK_LINE(580)
			bool tmp23 = (floor->type == (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(580)
			if ((tmp23)){
				HX_STACK_LINE(581)
				Dynamic tmp24 = hx::SourceInfo(HX_HCSTRING("VorbisDecoder.hx","\x0d","\x8b","\x92","\xa5"),581,HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecoder","\x3d","\x44","\x15","\x18"),HX_HCSTRING("decodePacketRest","\x8a","\x29","\xdb","\x8b"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(581)
				::kha::audio2::ogg::vorbis::data::ReaderError tmp25 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_STREAM,null(),tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(581)
				HX_STACK_DO_THROW(tmp25);
			}
			else{
				HX_STACK_LINE(583)
				::kha::audio2::ogg::vorbis::data::Floor1 g = floor->floor1;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(584)
				int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(584)
				{
					HX_STACK_LINE(584)
					::kha::audio2::ogg::vorbis::VorbisDecodeState tmp25 = this->decodeState;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(584)
					::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp25;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(584)
					bool tmp26 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(584)
					if ((tmp26)){
						HX_STACK_LINE(584)
						tmp24 = (int)0;
					}
					else{
						HX_STACK_LINE(584)
						bool tmp27 = (_this->validBits < (int)1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(584)
						if ((tmp27)){
							HX_STACK_LINE(584)
							bool tmp28 = false;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(584)
							if ((tmp28)){
								HX_STACK_LINE(584)
								int tmp29 = _this->readBits((int)24);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(584)
								int tmp30 = (int)-23;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(584)
								int tmp31 = _this->readBits(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(584)
								int tmp32 = (int(tmp31) << int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(584)
								tmp24 = (tmp29 + tmp32);
							}
							else{
								HX_STACK_LINE(584)
								bool tmp29 = (_this->validBits == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(584)
								if ((tmp29)){
									HX_STACK_LINE(584)
									_this->acc = (int)0;
								}
								HX_STACK_LINE(584)
								while((true)){
									HX_STACK_LINE(584)
									bool tmp30 = (_this->bytesInSeg == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(584)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(584)
									if ((tmp30)){
										HX_STACK_LINE(584)
										bool tmp32 = _this->lastSeg;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(584)
										bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(584)
										bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(584)
										bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(584)
										bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(584)
										if ((tmp36)){
											HX_STACK_LINE(584)
											int tmp37 = _this->next();		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(584)
											int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(584)
											int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(584)
											tmp31 = (tmp39 == (int)0);
										}
										else{
											HX_STACK_LINE(584)
											tmp31 = true;
										}
									}
									else{
										HX_STACK_LINE(584)
										tmp31 = false;
									}
									HX_STACK_LINE(584)
									if ((tmp31)){
										HX_STACK_LINE(584)
										_this->validBits = (int)-1;
										HX_STACK_LINE(584)
										break;
									}
									else{
										HX_STACK_LINE(584)
										(_this->bytesInSeg)--;
										HX_STACK_LINE(584)
										int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(584)
										{
											HX_STACK_LINE(584)
											int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(584)
											{
												HX_STACK_LINE(584)
												hx::AddEq(_this->inputPosition,(int)1);
												HX_STACK_LINE(584)
												tmp33 = _this->input->readByte();
											}
											HX_STACK_LINE(584)
											int tmp34 = _this->validBits;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(584)
											int tmp35 = (int(tmp33) << int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(584)
											int b = tmp35;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(584)
											tmp32 = (_this->acc + b);
										}
										HX_STACK_LINE(584)
										_this->acc = tmp32;
										HX_STACK_LINE(584)
										hx::AddEq(_this->validBits,(int)8);
									}
									HX_STACK_LINE(584)
									bool tmp32 = (_this->validBits < (int)1);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(584)
									bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(584)
									if ((tmp33)){
										HX_STACK_LINE(584)
										break;
									}
								}
								HX_STACK_LINE(584)
								bool tmp30 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(584)
								if ((tmp30)){
									HX_STACK_LINE(584)
									tmp24 = (int)0;
								}
								else{
									HX_STACK_LINE(584)
									int tmp31 = _this->acc;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(584)
									int tmp32 = (int)2;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(584)
									int tmp33 = (tmp32 - (int)1);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(584)
									int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(584)
									int tmp35 = (int(tmp31) & int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(584)
									int z = tmp35;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(584)
									int tmp36 = hx::UShr(_this->acc,(int)1);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(584)
									_this->acc = tmp36;
									HX_STACK_LINE(584)
									hx::SubEq(_this->validBits,(int)1);
									HX_STACK_LINE(584)
									tmp24 = z;
								}
							}
						}
						else{
							HX_STACK_LINE(584)
							int tmp28 = _this->acc;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(584)
							int tmp29 = (int)2;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(584)
							int tmp30 = (tmp29 - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(584)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(584)
							int tmp32 = (int(tmp28) & int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(584)
							int z = tmp32;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(584)
							int tmp33 = hx::UShr(_this->acc,(int)1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(584)
							_this->acc = tmp33;
							HX_STACK_LINE(584)
							hx::SubEq(_this->validBits,(int)1);
							HX_STACK_LINE(584)
							tmp24 = z;
						}
					}
				}
				HX_STACK_LINE(584)
				bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(584)
				if ((tmp25)){
					HX_STACK_LINE(585)
					Array< int > fy = Array_obj< int >::__new();		HX_STACK_VAR(fy,"fy");
					HX_STACK_LINE(586)
					Array< bool > tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(586)
					{
						HX_STACK_LINE(586)
						Array< bool > this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(586)
						Array< bool > tmp27 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(586)
						this1 = tmp27;
						HX_STACK_LINE(586)
						this1->__SetSizeExact((int)256);
						HX_STACK_LINE(586)
						tmp26 = this1;
					}
					HX_STACK_LINE(586)
					Array< bool > step2Flag = tmp26;		HX_STACK_VAR(step2Flag,"step2Flag");
					HX_STACK_LINE(587)
					Array< int > tmp27 = rangeList;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(587)
					int tmp28 = (g->floor1Multiplier - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(587)
					int tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(587)
					int range = tmp29;		HX_STACK_VAR(range,"range");
					HX_STACK_LINE(588)
					int offset = (int)2;		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(589)
					Array< ::Dynamic > tmp30 = this->finalY;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(589)
					int tmp31 = i;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(589)
					Array< int > tmp32 = tmp30->__unsafe_get(tmp31).StaticCast< Array< int > >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(589)
					fy = tmp32;
					HX_STACK_LINE(590)
					int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(590)
					{
						HX_STACK_LINE(590)
						::kha::audio2::ogg::vorbis::VorbisDecodeState tmp34 = this->decodeState;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(590)
						::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp34;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(590)
						int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(590)
						{
							HX_STACK_LINE(590)
							Array< int > tmp36 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(590)
							Array< int > log2_4 = tmp36;		HX_STACK_VAR(log2_4,"log2_4");
							HX_STACK_LINE(590)
							bool tmp37 = (range < (int)16384);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(590)
							if ((tmp37)){
								HX_STACK_LINE(590)
								bool tmp38 = (range < (int)16);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(590)
								if ((tmp38)){
									HX_STACK_LINE(590)
									tmp35 = log2_4->__get(range);
								}
								else{
									HX_STACK_LINE(590)
									bool tmp39 = (range < (int)512);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(590)
									if ((tmp39)){
										HX_STACK_LINE(590)
										Array< int > tmp40 = log2_4;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(590)
										int tmp41 = (int(range) >> int((int)5));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(590)
										int tmp42 = tmp40->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(590)
										tmp35 = ((int)5 + tmp42);
									}
									else{
										HX_STACK_LINE(590)
										Array< int > tmp40 = log2_4;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(590)
										int tmp41 = (int(range) >> int((int)10));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(590)
										int tmp42 = tmp40->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(590)
										tmp35 = ((int)10 + tmp42);
									}
								}
							}
							else{
								HX_STACK_LINE(590)
								bool tmp38 = (range < (int)16777216);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(590)
								if ((tmp38)){
									HX_STACK_LINE(590)
									bool tmp39 = (range < (int)524288);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(590)
									if ((tmp39)){
										HX_STACK_LINE(590)
										Array< int > tmp40 = log2_4;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(590)
										int tmp41 = (int(range) >> int((int)15));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(590)
										int tmp42 = tmp40->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(590)
										tmp35 = ((int)15 + tmp42);
									}
									else{
										HX_STACK_LINE(590)
										Array< int > tmp40 = log2_4;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(590)
										int tmp41 = (int(range) >> int((int)20));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(590)
										int tmp42 = tmp40->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(590)
										tmp35 = ((int)20 + tmp42);
									}
								}
								else{
									HX_STACK_LINE(590)
									bool tmp39 = (range < (int)536870912);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(590)
									if ((tmp39)){
										HX_STACK_LINE(590)
										Array< int > tmp40 = log2_4;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(590)
										int tmp41 = (int(range) >> int((int)25));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(590)
										int tmp42 = tmp40->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(590)
										tmp35 = ((int)25 + tmp42);
									}
									else{
										HX_STACK_LINE(590)
										bool tmp40 = (range < (int)-2147483648);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(590)
										if ((tmp40)){
											HX_STACK_LINE(590)
											Array< int > tmp41 = log2_4;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(590)
											int tmp42 = (int(range) >> int((int)30));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(590)
											int tmp43 = tmp41->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(590)
											tmp35 = ((int)30 + tmp43);
										}
										else{
											HX_STACK_LINE(590)
											tmp35 = (int)0;
										}
									}
								}
							}
						}
						HX_STACK_LINE(590)
						int tmp36 = (tmp35 - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(590)
						int n1 = tmp36;		HX_STACK_VAR(n1,"n1");
						HX_STACK_LINE(590)
						bool tmp37 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(590)
						if ((tmp37)){
							HX_STACK_LINE(590)
							tmp33 = (int)0;
						}
						else{
							HX_STACK_LINE(590)
							bool tmp38 = (_this->validBits < n1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(590)
							if ((tmp38)){
								HX_STACK_LINE(590)
								bool tmp39 = (n1 > (int)24);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(590)
								if ((tmp39)){
									HX_STACK_LINE(590)
									int tmp40 = _this->readBits((int)24);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(590)
									int tmp41 = (n1 - (int)24);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(590)
									int tmp42 = _this->readBits(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(590)
									int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(590)
									tmp33 = (tmp40 + tmp43);
								}
								else{
									HX_STACK_LINE(590)
									bool tmp40 = (_this->validBits == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(590)
									if ((tmp40)){
										HX_STACK_LINE(590)
										_this->acc = (int)0;
									}
									HX_STACK_LINE(590)
									while((true)){
										HX_STACK_LINE(590)
										bool tmp41 = (_this->bytesInSeg == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(590)
										bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(590)
										if ((tmp41)){
											HX_STACK_LINE(590)
											bool tmp43 = _this->lastSeg;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(590)
											bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(590)
											bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(590)
											bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(590)
											bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(590)
											if ((tmp47)){
												HX_STACK_LINE(590)
												int tmp48 = _this->next();		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(590)
												int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(590)
												int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(590)
												tmp42 = (tmp50 == (int)0);
											}
											else{
												HX_STACK_LINE(590)
												tmp42 = true;
											}
										}
										else{
											HX_STACK_LINE(590)
											tmp42 = false;
										}
										HX_STACK_LINE(590)
										if ((tmp42)){
											HX_STACK_LINE(590)
											_this->validBits = (int)-1;
											HX_STACK_LINE(590)
											break;
										}
										else{
											HX_STACK_LINE(590)
											(_this->bytesInSeg)--;
											HX_STACK_LINE(590)
											int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(590)
												{
													HX_STACK_LINE(590)
													hx::AddEq(_this->inputPosition,(int)1);
													HX_STACK_LINE(590)
													tmp44 = _this->input->readByte();
												}
												HX_STACK_LINE(590)
												int tmp45 = _this->validBits;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(590)
												int tmp46 = (int(tmp44) << int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(590)
												int b = tmp46;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(590)
												tmp43 = (_this->acc + b);
											}
											HX_STACK_LINE(590)
											_this->acc = tmp43;
											HX_STACK_LINE(590)
											hx::AddEq(_this->validBits,(int)8);
										}
										HX_STACK_LINE(590)
										bool tmp43 = (_this->validBits < n1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(590)
										bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(590)
										if ((tmp44)){
											HX_STACK_LINE(590)
											break;
										}
									}
									HX_STACK_LINE(590)
									bool tmp41 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(590)
									if ((tmp41)){
										HX_STACK_LINE(590)
										tmp33 = (int)0;
									}
									else{
										HX_STACK_LINE(590)
										int tmp42 = _this->acc;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(590)
										int tmp43 = (int((int)1) << int(n1));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(590)
										int tmp44 = (tmp43 - (int)1);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(590)
										int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(590)
										int tmp46 = (int(tmp42) & int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(590)
										int z = tmp46;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(590)
										int tmp47 = hx::UShr(_this->acc,n1);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(590)
										_this->acc = tmp47;
										HX_STACK_LINE(590)
										hx::SubEq(_this->validBits,n1);
										HX_STACK_LINE(590)
										tmp33 = z;
									}
								}
							}
							else{
								HX_STACK_LINE(590)
								int tmp39 = _this->acc;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(590)
								int tmp40 = (int((int)1) << int(n1));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(590)
								int tmp41 = (tmp40 - (int)1);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(590)
								int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(590)
								int tmp43 = (int(tmp39) & int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(590)
								int z = tmp43;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(590)
								int tmp44 = hx::UShr(_this->acc,n1);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(590)
								_this->acc = tmp44;
								HX_STACK_LINE(590)
								hx::SubEq(_this->validBits,n1);
								HX_STACK_LINE(590)
								tmp33 = z;
							}
						}
					}
					HX_STACK_LINE(590)
					fy[(int)0] = tmp33;
					HX_STACK_LINE(591)
					int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(591)
					{
						HX_STACK_LINE(591)
						::kha::audio2::ogg::vorbis::VorbisDecodeState tmp35 = this->decodeState;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(591)
						::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp35;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(591)
						int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(591)
						{
							HX_STACK_LINE(591)
							Array< int > tmp37 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(591)
							Array< int > log2_4 = tmp37;		HX_STACK_VAR(log2_4,"log2_4");
							HX_STACK_LINE(591)
							bool tmp38 = (range < (int)16384);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(591)
							if ((tmp38)){
								HX_STACK_LINE(591)
								bool tmp39 = (range < (int)16);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(591)
								if ((tmp39)){
									HX_STACK_LINE(591)
									tmp36 = log2_4->__get(range);
								}
								else{
									HX_STACK_LINE(591)
									bool tmp40 = (range < (int)512);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(591)
									if ((tmp40)){
										HX_STACK_LINE(591)
										Array< int > tmp41 = log2_4;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(591)
										int tmp42 = (int(range) >> int((int)5));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(591)
										int tmp43 = tmp41->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(591)
										tmp36 = ((int)5 + tmp43);
									}
									else{
										HX_STACK_LINE(591)
										Array< int > tmp41 = log2_4;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(591)
										int tmp42 = (int(range) >> int((int)10));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(591)
										int tmp43 = tmp41->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(591)
										tmp36 = ((int)10 + tmp43);
									}
								}
							}
							else{
								HX_STACK_LINE(591)
								bool tmp39 = (range < (int)16777216);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(591)
								if ((tmp39)){
									HX_STACK_LINE(591)
									bool tmp40 = (range < (int)524288);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(591)
									if ((tmp40)){
										HX_STACK_LINE(591)
										Array< int > tmp41 = log2_4;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(591)
										int tmp42 = (int(range) >> int((int)15));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(591)
										int tmp43 = tmp41->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(591)
										tmp36 = ((int)15 + tmp43);
									}
									else{
										HX_STACK_LINE(591)
										Array< int > tmp41 = log2_4;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(591)
										int tmp42 = (int(range) >> int((int)20));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(591)
										int tmp43 = tmp41->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(591)
										tmp36 = ((int)20 + tmp43);
									}
								}
								else{
									HX_STACK_LINE(591)
									bool tmp40 = (range < (int)536870912);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(591)
									if ((tmp40)){
										HX_STACK_LINE(591)
										Array< int > tmp41 = log2_4;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(591)
										int tmp42 = (int(range) >> int((int)25));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(591)
										int tmp43 = tmp41->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(591)
										tmp36 = ((int)25 + tmp43);
									}
									else{
										HX_STACK_LINE(591)
										bool tmp41 = (range < (int)-2147483648);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(591)
										if ((tmp41)){
											HX_STACK_LINE(591)
											Array< int > tmp42 = log2_4;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(591)
											int tmp43 = (int(range) >> int((int)30));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(591)
											int tmp44 = tmp42->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(591)
											tmp36 = ((int)30 + tmp44);
										}
										else{
											HX_STACK_LINE(591)
											tmp36 = (int)0;
										}
									}
								}
							}
						}
						HX_STACK_LINE(591)
						int tmp37 = (tmp36 - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(591)
						int n1 = tmp37;		HX_STACK_VAR(n1,"n1");
						HX_STACK_LINE(591)
						bool tmp38 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(591)
						if ((tmp38)){
							HX_STACK_LINE(591)
							tmp34 = (int)0;
						}
						else{
							HX_STACK_LINE(591)
							bool tmp39 = (_this->validBits < n1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(591)
							if ((tmp39)){
								HX_STACK_LINE(591)
								bool tmp40 = (n1 > (int)24);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(591)
								if ((tmp40)){
									HX_STACK_LINE(591)
									int tmp41 = _this->readBits((int)24);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(591)
									int tmp42 = (n1 - (int)24);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(591)
									int tmp43 = _this->readBits(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(591)
									int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(591)
									tmp34 = (tmp41 + tmp44);
								}
								else{
									HX_STACK_LINE(591)
									bool tmp41 = (_this->validBits == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(591)
									if ((tmp41)){
										HX_STACK_LINE(591)
										_this->acc = (int)0;
									}
									HX_STACK_LINE(591)
									while((true)){
										HX_STACK_LINE(591)
										bool tmp42 = (_this->bytesInSeg == (int)0);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(591)
										bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(591)
										if ((tmp42)){
											HX_STACK_LINE(591)
											bool tmp44 = _this->lastSeg;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(591)
											bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(591)
											bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(591)
											bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(591)
											bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(591)
											if ((tmp48)){
												HX_STACK_LINE(591)
												int tmp49 = _this->next();		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(591)
												int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(591)
												int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(591)
												tmp43 = (tmp51 == (int)0);
											}
											else{
												HX_STACK_LINE(591)
												tmp43 = true;
											}
										}
										else{
											HX_STACK_LINE(591)
											tmp43 = false;
										}
										HX_STACK_LINE(591)
										if ((tmp43)){
											HX_STACK_LINE(591)
											_this->validBits = (int)-1;
											HX_STACK_LINE(591)
											break;
										}
										else{
											HX_STACK_LINE(591)
											(_this->bytesInSeg)--;
											HX_STACK_LINE(591)
											int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(591)
											{
												HX_STACK_LINE(591)
												int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(591)
												{
													HX_STACK_LINE(591)
													hx::AddEq(_this->inputPosition,(int)1);
													HX_STACK_LINE(591)
													tmp45 = _this->input->readByte();
												}
												HX_STACK_LINE(591)
												int tmp46 = _this->validBits;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(591)
												int tmp47 = (int(tmp45) << int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(591)
												int b = tmp47;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(591)
												tmp44 = (_this->acc + b);
											}
											HX_STACK_LINE(591)
											_this->acc = tmp44;
											HX_STACK_LINE(591)
											hx::AddEq(_this->validBits,(int)8);
										}
										HX_STACK_LINE(591)
										bool tmp44 = (_this->validBits < n1);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(591)
										bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(591)
										if ((tmp45)){
											HX_STACK_LINE(591)
											break;
										}
									}
									HX_STACK_LINE(591)
									bool tmp42 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(591)
									if ((tmp42)){
										HX_STACK_LINE(591)
										tmp34 = (int)0;
									}
									else{
										HX_STACK_LINE(591)
										int tmp43 = _this->acc;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(591)
										int tmp44 = (int((int)1) << int(n1));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(591)
										int tmp45 = (tmp44 - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(591)
										int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(591)
										int tmp47 = (int(tmp43) & int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(591)
										int z = tmp47;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(591)
										int tmp48 = hx::UShr(_this->acc,n1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(591)
										_this->acc = tmp48;
										HX_STACK_LINE(591)
										hx::SubEq(_this->validBits,n1);
										HX_STACK_LINE(591)
										tmp34 = z;
									}
								}
							}
							else{
								HX_STACK_LINE(591)
								int tmp40 = _this->acc;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(591)
								int tmp41 = (int((int)1) << int(n1));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(591)
								int tmp42 = (tmp41 - (int)1);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(591)
								int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(591)
								int tmp44 = (int(tmp40) & int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(591)
								int z = tmp44;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(591)
								int tmp45 = hx::UShr(_this->acc,n1);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(591)
								_this->acc = tmp45;
								HX_STACK_LINE(591)
								hx::SubEq(_this->validBits,n1);
								HX_STACK_LINE(591)
								tmp34 = z;
							}
						}
					}
					HX_STACK_LINE(591)
					fy[(int)1] = tmp34;
					HX_STACK_LINE(592)
					{
						HX_STACK_LINE(592)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(592)
						int _g2 = g->partitions;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(592)
						while((true)){
							HX_STACK_LINE(592)
							bool tmp35 = (_g3 < _g2);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(592)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(592)
							if ((tmp36)){
								HX_STACK_LINE(592)
								break;
							}
							HX_STACK_LINE(592)
							int tmp37 = (_g3)++;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(592)
							int j = tmp37;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(593)
							int tmp38 = j;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(593)
							int tmp39 = g->partitionClassList->__unsafe_get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(593)
							int pclass = tmp39;		HX_STACK_VAR(pclass,"pclass");
							HX_STACK_LINE(594)
							int tmp40 = pclass;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(594)
							int tmp41 = g->classDimensions->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(594)
							int cdim = tmp41;		HX_STACK_VAR(cdim,"cdim");
							HX_STACK_LINE(595)
							int tmp42 = pclass;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(595)
							int tmp43 = g->classSubclasses->__unsafe_get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(595)
							int cbits = tmp43;		HX_STACK_VAR(cbits,"cbits");
							HX_STACK_LINE(596)
							int tmp44 = (int((int)1) << int(cbits));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(596)
							int tmp45 = (tmp44 - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(596)
							int csub = tmp45;		HX_STACK_VAR(csub,"csub");
							HX_STACK_LINE(597)
							int cval = (int)0;		HX_STACK_VAR(cval,"cval");
							HX_STACK_LINE(598)
							bool tmp46 = (cbits != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(598)
							if ((tmp46)){
								HX_STACK_LINE(599)
								::kha::audio2::ogg::vorbis::data::Codebook tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(599)
								{
									HX_STACK_LINE(599)
									int tmp48 = pclass;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(599)
									int tmp49 = g->classMasterbooks->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(599)
									int index = tmp49;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(599)
									int tmp50 = index;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(599)
									::kha::audio2::ogg::vorbis::data::Codebook tmp51 = codebooks->__unsafe_get(tmp50).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(599)
									tmp47 = tmp51;
								}
								HX_STACK_LINE(599)
								::kha::audio2::ogg::vorbis::data::Codebook c = tmp47;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(600)
								int tmp48;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(600)
								{
									HX_STACK_LINE(600)
									::kha::audio2::ogg::vorbis::VorbisDecodeState tmp49 = this->decodeState;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(600)
									::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp49;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(600)
									int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(600)
									{
										HX_STACK_LINE(600)
										bool tmp51 = (_this->validBits < (int)10);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(600)
										if ((tmp51)){
											HX_STACK_LINE(600)
											_this->prepHuffman();
										}
										HX_STACK_LINE(600)
										int tmp52 = (int(_this->acc) & int((int)1023));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(600)
										int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(600)
										int tmp54 = c->fastHuffman->__unsafe_get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(600)
										int i1 = tmp54;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(600)
										bool tmp55 = (i1 >= (int)0);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(600)
										if ((tmp55)){
											HX_STACK_LINE(600)
											int tmp56 = i1;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(600)
											int tmp57 = c->codewordLengths->__unsafe_get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(600)
											int l = tmp57;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(600)
											int tmp58 = hx::UShr(_this->acc,l);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(600)
											_this->acc = tmp58;
											HX_STACK_LINE(600)
											hx::SubEq(_this->validBits,l);
											HX_STACK_LINE(600)
											bool tmp59 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(600)
											if ((tmp59)){
												HX_STACK_LINE(600)
												_this->validBits = (int)0;
												HX_STACK_LINE(600)
												tmp50 = (int)-1;
											}
											else{
												HX_STACK_LINE(600)
												tmp50 = i1;
											}
										}
										else{
											HX_STACK_LINE(600)
											::kha::audio2::ogg::vorbis::data::Codebook tmp56 = c;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(600)
											tmp50 = _this->decodeScalarRaw(tmp56);
										}
									}
									HX_STACK_LINE(600)
									int val = tmp50;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(600)
									bool tmp51 = c->sparse;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(600)
									if ((tmp51)){
										HX_STACK_LINE(600)
										int tmp52 = val;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(600)
										int tmp53 = c->sortedValues->__unsafe_get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(600)
										val = tmp53;
									}
									HX_STACK_LINE(600)
									tmp48 = val;
								}
								HX_STACK_LINE(600)
								cval = tmp48;
							}
							HX_STACK_LINE(603)
							int tmp47 = pclass;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(603)
							Array< int > tmp48 = g->subclassBooks->__unsafe_get(tmp47).StaticCast< Array< int > >();		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(603)
							Array< int > books = tmp48;		HX_STACK_VAR(books,"books");
							HX_STACK_LINE(604)
							{
								HX_STACK_LINE(604)
								int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(604)
								while((true)){
									HX_STACK_LINE(604)
									bool tmp49 = (_g4 < cdim);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(604)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(604)
									if ((tmp50)){
										HX_STACK_LINE(604)
										break;
									}
									HX_STACK_LINE(604)
									int tmp51 = (_g4)++;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(604)
									int k = tmp51;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(605)
									int tmp52 = (int(cval) & int(csub));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(605)
									int tmp53 = books->__unsafe_get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(605)
									int book = tmp53;		HX_STACK_VAR(book,"book");
									HX_STACK_LINE(606)
									hx::ShrEq(cval,cbits);
									HX_STACK_LINE(607)
									Array< int > tmp54 = fy;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(607)
									int tmp55 = (offset)++;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(607)
									bool tmp56 = (book >= (int)0);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(607)
									int tmp57;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(607)
									if ((tmp56)){
										HX_STACK_LINE(608)
										::kha::audio2::ogg::vorbis::VorbisDecodeState tmp58 = this->decodeState;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(608)
										::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp58;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(608)
										int tmp59 = book;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(608)
										::kha::audio2::ogg::vorbis::data::Codebook tmp60 = codebooks->__unsafe_get(tmp59).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(608)
										::kha::audio2::ogg::vorbis::data::Codebook c = tmp60;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(608)
										int tmp61;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(608)
										{
											HX_STACK_LINE(608)
											bool tmp62 = (_this->validBits < (int)10);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(608)
											if ((tmp62)){
												HX_STACK_LINE(608)
												_this->prepHuffman();
											}
											HX_STACK_LINE(608)
											int tmp63 = (int(_this->acc) & int((int)1023));		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(608)
											int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(608)
											int tmp65 = c->fastHuffman->__unsafe_get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(608)
											int i1 = tmp65;		HX_STACK_VAR(i1,"i1");
											HX_STACK_LINE(608)
											bool tmp66 = (i1 >= (int)0);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(608)
											if ((tmp66)){
												HX_STACK_LINE(608)
												int tmp67 = i1;		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(608)
												int tmp68 = c->codewordLengths->__unsafe_get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(608)
												int l = tmp68;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(608)
												int tmp69 = hx::UShr(_this->acc,l);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(608)
												_this->acc = tmp69;
												HX_STACK_LINE(608)
												hx::SubEq(_this->validBits,l);
												HX_STACK_LINE(608)
												bool tmp70 = (_this->validBits < (int)0);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(608)
												if ((tmp70)){
													HX_STACK_LINE(608)
													_this->validBits = (int)0;
													HX_STACK_LINE(608)
													tmp61 = (int)-1;
												}
												else{
													HX_STACK_LINE(608)
													tmp61 = i1;
												}
											}
											else{
												HX_STACK_LINE(608)
												::kha::audio2::ogg::vorbis::data::Codebook tmp67 = c;		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(608)
												tmp61 = _this->decodeScalarRaw(tmp67);
											}
										}
										HX_STACK_LINE(608)
										int val = tmp61;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(608)
										bool tmp62 = c->sparse;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(608)
										if ((tmp62)){
											HX_STACK_LINE(608)
											int tmp63 = val;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(608)
											int tmp64 = c->sortedValues->__unsafe_get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(608)
											val = tmp64;
										}
										HX_STACK_LINE(608)
										tmp57 = val;
									}
									else{
										HX_STACK_LINE(610)
										tmp57 = (int)0;
									}
									HX_STACK_LINE(607)
									tmp54[tmp55] = tmp57;
								}
							}
						}
					}
					HX_STACK_LINE(615)
					::kha::audio2::ogg::vorbis::VorbisDecodeState tmp35 = this->decodeState;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(615)
					int tmp36 = tmp35->validBits;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(615)
					bool tmp37 = (tmp36 == (int)-1);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(615)
					if ((tmp37)){
						HX_STACK_LINE(616)
						int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(616)
						bool tmp39 = zeroChannel->__unsafe_set(tmp38,true);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(616)
						tmp39;
						HX_STACK_LINE(617)
						continue;
					}
					HX_STACK_LINE(620)
					{
						HX_STACK_LINE(620)
						bool tmp38 = step2Flag->__unsafe_set((int)1,true);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(620)
						bool val = tmp38;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(620)
						bool tmp39 = val;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(620)
						bool tmp40 = step2Flag->__unsafe_set((int)0,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(620)
						tmp40;
					}
					HX_STACK_LINE(621)
					Array< ::Dynamic > naighbors = g->neighbors;		HX_STACK_VAR(naighbors,"naighbors");
					HX_STACK_LINE(622)
					Array< int > xlist = g->xlist;		HX_STACK_VAR(xlist,"xlist");
					HX_STACK_LINE(623)
					{
						HX_STACK_LINE(623)
						int _g3 = (int)2;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(623)
						int _g2 = g->values;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(623)
						while((true)){
							HX_STACK_LINE(623)
							bool tmp38 = (_g3 < _g2);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(623)
							bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(623)
							if ((tmp39)){
								HX_STACK_LINE(623)
								break;
							}
							HX_STACK_LINE(623)
							int tmp40 = (_g3)++;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(623)
							int j = tmp40;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(624)
							int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(624)
							{
								HX_STACK_LINE(624)
								int tmp42 = j;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(624)
								Array< int > tmp43 = naighbors->__unsafe_get(tmp42).StaticCast< Array< int > >();		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(624)
								Array< int > this1 = tmp43;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(624)
								int tmp44 = this1->__unsafe_get((int)0);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(624)
								tmp41 = tmp44;
							}
							HX_STACK_LINE(624)
							int low = tmp41;		HX_STACK_VAR(low,"low");
							HX_STACK_LINE(625)
							int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(625)
							{
								HX_STACK_LINE(625)
								int tmp43 = j;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(625)
								Array< int > tmp44 = naighbors->__unsafe_get(tmp43).StaticCast< Array< int > >();		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(625)
								Array< int > this1 = tmp44;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(625)
								int tmp45 = this1->__unsafe_get((int)1);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(625)
								tmp42 = tmp45;
							}
							HX_STACK_LINE(625)
							int high = tmp42;		HX_STACK_VAR(high,"high");
							HX_STACK_LINE(626)
							int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(626)
							{
								HX_STACK_LINE(626)
								int tmp44 = j;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(626)
								int tmp45 = xlist->__unsafe_get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(626)
								int x = tmp45;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(626)
								int tmp46 = low;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(626)
								int tmp47 = xlist->__unsafe_get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(626)
								int x0 = tmp47;		HX_STACK_VAR(x0,"x0");
								HX_STACK_LINE(626)
								int tmp48 = high;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(626)
								int tmp49 = xlist->__unsafe_get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(626)
								int x1 = tmp49;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(626)
								int tmp50 = fy->__get(low);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(626)
								int y0 = tmp50;		HX_STACK_VAR(y0,"y0");
								HX_STACK_LINE(626)
								int tmp51 = fy->__get(high);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(626)
								int tmp52 = y0;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(626)
								int tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(626)
								int dy = tmp53;		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(626)
								int tmp54 = (x1 - x0);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(626)
								int adx = tmp54;		HX_STACK_VAR(adx,"adx");
								HX_STACK_LINE(626)
								int tmp55 = dy;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(626)
								Float tmp56 = ::Math_obj::abs(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(626)
								int tmp57 = (x - x0);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(626)
								Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(626)
								Float err = tmp58;		HX_STACK_VAR(err,"err");
								HX_STACK_LINE(626)
								Float tmp59 = (Float(err) / Float(adx));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(626)
								int tmp60 = ::Std_obj::_int(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(626)
								int off = tmp60;		HX_STACK_VAR(off,"off");
								HX_STACK_LINE(626)
								bool tmp61 = (dy < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(626)
								if ((tmp61)){
									HX_STACK_LINE(626)
									tmp43 = (y0 - off);
								}
								else{
									HX_STACK_LINE(626)
									tmp43 = (y0 + off);
								}
							}
							HX_STACK_LINE(626)
							int lowroom = tmp43;		HX_STACK_VAR(lowroom,"lowroom");
							HX_STACK_LINE(627)
							int tmp44 = fy->__get(j);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(627)
							int val = tmp44;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(628)
							int tmp45 = (range - lowroom);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(628)
							int highroom = tmp45;		HX_STACK_VAR(highroom,"highroom");
							HX_STACK_LINE(629)
							bool tmp46 = (highroom < lowroom);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(629)
							int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(629)
							if ((tmp46)){
								HX_STACK_LINE(630)
								tmp47 = (highroom * (int)2);
							}
							else{
								HX_STACK_LINE(632)
								tmp47 = (lowroom * (int)2);
							}
							HX_STACK_LINE(629)
							int room = tmp47;		HX_STACK_VAR(room,"room");
							HX_STACK_LINE(634)
							bool tmp48 = (val != (int)0);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(634)
							if ((tmp48)){
								HX_STACK_LINE(635)
								{
									HX_STACK_LINE(635)
									int tmp49 = high;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(635)
									bool tmp50 = step2Flag->__unsafe_set(tmp49,true);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(635)
									bool val1 = tmp50;		HX_STACK_VAR(val1,"val1");
									HX_STACK_LINE(635)
									int tmp51 = low;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(635)
									bool tmp52 = val1;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(635)
									bool tmp53 = step2Flag->__unsafe_set(tmp51,tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(635)
									tmp53;
								}
								HX_STACK_LINE(636)
								int tmp49 = j;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(636)
								bool tmp50 = step2Flag->__unsafe_set(tmp49,true);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(636)
								tmp50;
								HX_STACK_LINE(637)
								bool tmp51 = (val >= room);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(637)
								if ((tmp51)){
									HX_STACK_LINE(638)
									bool tmp52 = (highroom > lowroom);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(638)
									if ((tmp52)){
										HX_STACK_LINE(639)
										int tmp53 = (val - lowroom);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(639)
										int tmp54 = lowroom;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(639)
										int tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(639)
										fy[j] = tmp55;
									}
									else{
										HX_STACK_LINE(641)
										int tmp53 = (lowroom - val);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(641)
										int tmp54 = highroom;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(641)
										int tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(641)
										int tmp56 = (tmp55 - (int)1);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(641)
										fy[j] = tmp56;
									}
								}
								else{
									HX_STACK_LINE(644)
									int tmp52 = (int(val) & int((int)1));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(644)
									bool tmp53 = (tmp52 != (int)0);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(644)
									if ((tmp53)){
										HX_STACK_LINE(645)
										int tmp54 = lowroom;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(645)
										int tmp55 = (val + (int)1);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(645)
										int tmp56 = (int(tmp55) >> int((int)1));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(645)
										int tmp57 = (tmp54 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(645)
										fy[j] = tmp57;
									}
									else{
										HX_STACK_LINE(647)
										int tmp54 = lowroom;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(647)
										int tmp55 = (int(val) >> int((int)1));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(647)
										int tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(647)
										fy[j] = tmp56;
									}
								}
							}
							else{
								HX_STACK_LINE(651)
								int tmp49 = j;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(651)
								bool tmp50 = step2Flag->__unsafe_set(tmp49,false);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(651)
								tmp50;
								HX_STACK_LINE(652)
								int tmp51 = lowroom;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(652)
								fy[j] = tmp51;
							}
						}
					}
					HX_STACK_LINE(657)
					{
						HX_STACK_LINE(657)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(657)
						int _g2 = g->values;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(657)
						while((true)){
							HX_STACK_LINE(657)
							bool tmp38 = (_g3 < _g2);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(657)
							bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(657)
							if ((tmp39)){
								HX_STACK_LINE(657)
								break;
							}
							HX_STACK_LINE(657)
							int tmp40 = (_g3)++;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(657)
							int j = tmp40;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(658)
							int tmp41 = j;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(658)
							bool tmp42 = step2Flag->__unsafe_get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(658)
							bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(658)
							bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(658)
							if ((tmp44)){
								HX_STACK_LINE(659)
								fy[j] = (int)-1;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(664)
					int tmp26 = i;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(664)
					bool tmp27 = zeroChannel->__unsafe_set(tmp26,true);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(664)
					tmp27;
				}
			}
		}
	}
	HX_STACK_LINE(678)
	{
		HX_STACK_LINE(678)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(678)
		::kha::audio2::ogg::vorbis::data::Header tmp13 = this->header;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(678)
		int _g = tmp13->channel;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(678)
		while((true)){
			HX_STACK_LINE(678)
			bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(678)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(678)
			if ((tmp15)){
				HX_STACK_LINE(678)
				break;
			}
			HX_STACK_LINE(678)
			int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(678)
			int i = tmp16;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(679)
			{
				HX_STACK_LINE(679)
				int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(679)
				bool tmp18 = zeroChannel->__unsafe_get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(679)
				bool val = tmp18;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(679)
				int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(679)
				bool tmp20 = val;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(679)
				bool tmp21 = reallyZeroChannel->__unsafe_set(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(679)
				tmp21;
			}
		}
	}
	HX_STACK_LINE(681)
	{
		HX_STACK_LINE(681)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(681)
		int _g = map->couplingSteps;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(681)
		while((true)){
			HX_STACK_LINE(681)
			bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(681)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(681)
			if ((tmp14)){
				HX_STACK_LINE(681)
				break;
			}
			HX_STACK_LINE(681)
			int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(681)
			int i = tmp15;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(682)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(682)
			{
				HX_STACK_LINE(682)
				int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(682)
				::kha::audio2::ogg::vorbis::data::MappingChannel tmp18 = map->chan->__unsafe_get(tmp17).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(682)
				int tmp19 = tmp18->magnitude;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(682)
				int index = tmp19;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(682)
				int tmp20 = index;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(682)
				bool tmp21 = zeroChannel->__unsafe_get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(682)
				tmp16 = tmp21;
			}
			HX_STACK_LINE(682)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(682)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(682)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(682)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(682)
			if ((tmp19)){
				HX_STACK_LINE(682)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(682)
				{
					HX_STACK_LINE(682)
					int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(682)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(682)
					::kha::audio2::ogg::vorbis::data::MappingChannel tmp24 = map->chan->__unsafe_get(tmp23).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(682)
					::kha::audio2::ogg::vorbis::data::MappingChannel tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(682)
					int tmp26 = tmp25->angle;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(682)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(682)
					int index = tmp27;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(682)
					int tmp28 = index;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(682)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(682)
					bool tmp30 = zeroChannel->__unsafe_get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(682)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(682)
					tmp21 = tmp31;
				}
				HX_STACK_LINE(682)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(682)
				tmp20 = !(tmp22);
			}
			else{
				HX_STACK_LINE(682)
				tmp20 = true;
			}
			HX_STACK_LINE(682)
			if ((tmp20)){
				HX_STACK_LINE(683)
				int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(683)
				::kha::audio2::ogg::vorbis::data::MappingChannel tmp22 = map->chan->__unsafe_get(tmp21).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(683)
				int tmp23 = tmp22->magnitude;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(683)
				int index = tmp23;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(683)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(683)
				{
					HX_STACK_LINE(683)
					int tmp25 = i;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(683)
					::kha::audio2::ogg::vorbis::data::MappingChannel tmp26 = map->chan->__unsafe_get(tmp25).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(683)
					int tmp27 = tmp26->angle;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(683)
					int index1 = tmp27;		HX_STACK_VAR(index1,"index1");
					HX_STACK_LINE(683)
					int tmp28 = index1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(683)
					bool tmp29 = zeroChannel->__unsafe_set(tmp28,false);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(683)
					tmp24 = tmp29;
				}
				HX_STACK_LINE(683)
				bool val = tmp24;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(683)
				int tmp25 = index;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(683)
				bool tmp26 = val;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(683)
				bool tmp27 = zeroChannel->__unsafe_set(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(683)
				tmp27;
			}
		}
	}
	HX_STACK_LINE(687)
	{
		HX_STACK_LINE(687)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(687)
		int _g = map->submaps;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(687)
		while((true)){
			HX_STACK_LINE(687)
			bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(687)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(687)
			if ((tmp14)){
				HX_STACK_LINE(687)
				break;
			}
			HX_STACK_LINE(687)
			int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(687)
			int i = tmp15;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(688)
			Array< ::Dynamic > tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(688)
				Array< ::Dynamic > tmp17 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(688)
				this1 = tmp17;
				HX_STACK_LINE(688)
				::kha::audio2::ogg::vorbis::data::Header tmp18 = this->header;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(688)
				int tmp19 = tmp18->channel;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(688)
				this1->__SetSizeExact(tmp19);
				HX_STACK_LINE(688)
				tmp16 = this1;
			}
			HX_STACK_LINE(688)
			Array< ::Dynamic > residueBuffers = tmp16;		HX_STACK_VAR(residueBuffers,"residueBuffers");
			HX_STACK_LINE(689)
			Array< bool > tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(689)
			{
				HX_STACK_LINE(689)
				Array< bool > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(689)
				Array< bool > tmp18 = Array_obj< bool >::__new();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(689)
				this1 = tmp18;
				HX_STACK_LINE(689)
				this1->__SetSizeExact((int)256);
				HX_STACK_LINE(689)
				tmp17 = this1;
			}
			HX_STACK_LINE(689)
			Array< bool > doNotDecode = tmp17;		HX_STACK_VAR(doNotDecode,"doNotDecode");
			HX_STACK_LINE(690)
			int ch = (int)0;		HX_STACK_VAR(ch,"ch");
			HX_STACK_LINE(691)
			{
				HX_STACK_LINE(691)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(691)
				::kha::audio2::ogg::vorbis::data::Header tmp18 = this->header;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(691)
				int _g2 = tmp18->channel;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(691)
				while((true)){
					HX_STACK_LINE(691)
					bool tmp19 = (_g3 < _g2);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(691)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(691)
					if ((tmp20)){
						HX_STACK_LINE(691)
						break;
					}
					HX_STACK_LINE(691)
					int tmp21 = (_g3)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(691)
					int j = tmp21;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(693)
					int tmp22 = j;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(693)
					::kha::audio2::ogg::vorbis::data::MappingChannel tmp23 = map->chan->__unsafe_get(tmp22).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(693)
					int tmp24 = tmp23->mux;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(693)
					int tmp25 = i;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(693)
					bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(693)
					if ((tmp26)){
						HX_STACK_LINE(694)
						int tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(694)
						bool tmp28 = zeroChannel->__unsafe_get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(694)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(694)
						if ((tmp29)){
							HX_STACK_LINE(695)
							int tmp30 = ch;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(695)
							bool tmp31 = doNotDecode->__unsafe_set(tmp30,true);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(695)
							tmp31;
							HX_STACK_LINE(696)
							int tmp32 = ch;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(696)
							Array< Float > tmp33 = residueBuffers->__unsafe_set(tmp32,null()).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(696)
							tmp33;
						}
						else{
							HX_STACK_LINE(698)
							int tmp30 = ch;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(698)
							bool tmp31 = doNotDecode->__unsafe_set(tmp30,false);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(698)
							tmp31;
							HX_STACK_LINE(699)
							{
								HX_STACK_LINE(699)
								Array< ::Dynamic > tmp32 = this->channelBuffers;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(699)
								int tmp33 = j;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(699)
								Array< Float > tmp34 = tmp32->__unsafe_get(tmp33).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(699)
								Array< Float > val = tmp34;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(699)
								int tmp35 = ch;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(699)
								Array< Float > tmp36 = val;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(699)
								Array< Float > tmp37 = residueBuffers->__unsafe_set(tmp35,tmp36).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(699)
								tmp37;
							}
						}
						HX_STACK_LINE(701)
						++(ch);
					}
				}
			}
			HX_STACK_LINE(705)
			int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(705)
			int tmp19 = map->submapResidue->__unsafe_get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(705)
			int r1 = tmp19;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(706)
			::kha::audio2::ogg::vorbis::data::Header tmp20 = this->header;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(706)
			int tmp21 = r1;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(706)
			::kha::audio2::ogg::vorbis::data::Residue tmp22 = tmp20->residueConfig->__unsafe_get(tmp21).StaticCast< ::kha::audio2::ogg::vorbis::data::Residue >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(706)
			::kha::audio2::ogg::vorbis::data::Residue residue = tmp22;		HX_STACK_VAR(residue,"residue");
			HX_STACK_LINE(707)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp23 = this->decodeState;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(707)
			::kha::audio2::ogg::vorbis::data::Header tmp24 = this->header;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(707)
			Array< ::Dynamic > tmp25 = residueBuffers;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(707)
			int tmp26 = ch;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(707)
			int tmp27 = n2;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(707)
			Array< bool > tmp28 = doNotDecode;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(707)
			Array< ::Dynamic > tmp29 = this->channelBuffers;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(707)
			residue->decode(tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29);
		}
	}
	HX_STACK_LINE(713)
	int i = map->couplingSteps;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(714)
	int tmp13 = (int(n) >> int((int)1));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(714)
	int n21 = tmp13;		HX_STACK_VAR(n21,"n21");
	HX_STACK_LINE(715)
	while((true)){
		HX_STACK_LINE(715)
		int tmp14 = --(i);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(715)
		bool tmp15 = (tmp14 >= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(715)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(715)
		if ((tmp16)){
			HX_STACK_LINE(715)
			break;
		}
		HX_STACK_LINE(716)
		Array< Float > tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(716)
		{
			HX_STACK_LINE(716)
			int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(716)
			::kha::audio2::ogg::vorbis::data::MappingChannel tmp19 = map->chan->__unsafe_get(tmp18).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(716)
			int tmp20 = tmp19->magnitude;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(716)
			int index = tmp20;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(716)
			Array< ::Dynamic > tmp21 = this->channelBuffers;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(716)
			int tmp22 = index;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(716)
			Array< Float > tmp23 = tmp21->__unsafe_get(tmp22).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(716)
			tmp17 = tmp23;
		}
		HX_STACK_LINE(716)
		Array< Float > m1 = tmp17;		HX_STACK_VAR(m1,"m1");
		HX_STACK_LINE(717)
		Array< Float > tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(717)
		{
			HX_STACK_LINE(717)
			int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(717)
			::kha::audio2::ogg::vorbis::data::MappingChannel tmp20 = map->chan->__unsafe_get(tmp19).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(717)
			int tmp21 = tmp20->angle;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(717)
			int index = tmp21;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(717)
			Array< ::Dynamic > tmp22 = this->channelBuffers;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(717)
			int tmp23 = index;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(717)
			Array< Float > tmp24 = tmp22->__unsafe_get(tmp23).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(717)
			tmp18 = tmp24;
		}
		HX_STACK_LINE(717)
		Array< Float > a = tmp18;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(718)
		{
			HX_STACK_LINE(718)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(718)
			while((true)){
				HX_STACK_LINE(718)
				bool tmp19 = (_g < n21);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(718)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(718)
				if ((tmp20)){
					HX_STACK_LINE(718)
					break;
				}
				HX_STACK_LINE(718)
				int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(718)
				int j = tmp21;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(719)
				Float a2;		HX_STACK_VAR(a2,"a2");
				HX_STACK_LINE(719)
				Float m2;		HX_STACK_VAR(m2,"m2");
				HX_STACK_LINE(720)
				int tmp22 = j;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(720)
				Float tmp23 = m1->__unsafe_get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(720)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(720)
				bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(720)
				if ((tmp25)){
					HX_STACK_LINE(721)
					int tmp26 = j;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(721)
					Float tmp27 = a->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(721)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(721)
					bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(721)
					if ((tmp29)){
						HX_STACK_LINE(722)
						int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(722)
						Float tmp31 = m1->__unsafe_get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(722)
						m2 = tmp31;
						HX_STACK_LINE(723)
						int tmp32 = j;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(723)
						Float tmp33 = m1->__unsafe_get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(723)
						Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(723)
						int tmp35 = j;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(723)
						Float tmp36 = a->__unsafe_get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(723)
						Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(723)
						Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(723)
						a2 = tmp38;
					}
					else{
						HX_STACK_LINE(725)
						int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(725)
						Float tmp31 = m1->__unsafe_get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(725)
						a2 = tmp31;
						HX_STACK_LINE(726)
						int tmp32 = j;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(726)
						Float tmp33 = m1->__unsafe_get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(726)
						Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(726)
						int tmp35 = j;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(726)
						Float tmp36 = a->__unsafe_get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(726)
						Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(726)
						Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(726)
						m2 = tmp38;
					}
				}
				else{
					HX_STACK_LINE(729)
					int tmp26 = j;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(729)
					Float tmp27 = a->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(729)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(729)
					bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(729)
					if ((tmp29)){
						HX_STACK_LINE(730)
						int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(730)
						Float tmp31 = m1->__unsafe_get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(730)
						m2 = tmp31;
						HX_STACK_LINE(731)
						int tmp32 = j;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(731)
						Float tmp33 = m1->__unsafe_get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(731)
						Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(731)
						int tmp35 = j;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(731)
						Float tmp36 = a->__unsafe_get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(731)
						Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(731)
						Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(731)
						a2 = tmp38;
					}
					else{
						HX_STACK_LINE(733)
						int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(733)
						Float tmp31 = m1->__unsafe_get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(733)
						a2 = tmp31;
						HX_STACK_LINE(734)
						int tmp32 = j;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(734)
						Float tmp33 = m1->__unsafe_get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(734)
						Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(734)
						int tmp35 = j;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(734)
						Float tmp36 = a->__unsafe_get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(734)
						Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(734)
						Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(734)
						m2 = tmp38;
					}
				}
				HX_STACK_LINE(737)
				int tmp26 = j;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(737)
				Float tmp27 = m2;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(737)
				Float tmp28 = m1->__unsafe_set(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(737)
				tmp28;
				HX_STACK_LINE(738)
				int tmp29 = j;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(738)
				Float tmp30 = a2;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(738)
				Float tmp31 = a->__unsafe_set(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(738)
				tmp31;
			}
		}
	}
	HX_STACK_LINE(744)
	{
		HX_STACK_LINE(744)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(744)
		::kha::audio2::ogg::vorbis::data::Header tmp14 = this->header;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(744)
		int _g = tmp14->channel;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(744)
		while((true)){
			HX_STACK_LINE(744)
			bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(744)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(744)
			if ((tmp16)){
				HX_STACK_LINE(744)
				break;
			}
			HX_STACK_LINE(744)
			int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(744)
			int i1 = tmp17;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(745)
			int tmp18 = i1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(745)
			bool tmp19 = reallyZeroChannel->__unsafe_get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(745)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(745)
			if ((tmp20)){
				HX_STACK_LINE(746)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(746)
				while((true)){
					HX_STACK_LINE(746)
					bool tmp21 = (_g2 < n21);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(746)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(746)
					if ((tmp22)){
						HX_STACK_LINE(746)
						break;
					}
					HX_STACK_LINE(746)
					int tmp23 = (_g2)++;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(746)
					int j = tmp23;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(747)
					{
						HX_STACK_LINE(747)
						Array< ::Dynamic > tmp24 = this->channelBuffers;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(747)
						int tmp25 = i1;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(747)
						Array< Float > tmp26 = tmp24->__unsafe_get(tmp25).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(747)
						Array< Float > this1 = tmp26;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(747)
						int tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(747)
						Float tmp28 = this1->__unsafe_set(tmp27,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(747)
						tmp28;
					}
				}
			}
			else{
				HX_STACK_LINE(750)
				::kha::audio2::ogg::vorbis::data::Header tmp21 = this->header;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(750)
				Array< ::Dynamic > tmp22 = tmp21->floorConfig;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(750)
				int tmp23 = i1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(750)
				int tmp24 = n;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(750)
				Array< ::Dynamic > tmp25 = this->channelBuffers;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(750)
				int tmp26 = i1;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(750)
				Array< Float > tmp27 = tmp25->__unsafe_get(tmp26).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(750)
				Array< Float > tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(750)
				Array< ::Dynamic > tmp29 = this->finalY;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(750)
				int tmp30 = i1;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(750)
				Array< int > tmp31 = tmp29->__unsafe_get(tmp30).StaticCast< Array< int > >();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(750)
				Array< int > tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(750)
				map->doFloor(tmp22,tmp23,tmp24,tmp28,tmp32,null());
			}
		}
	}
	HX_STACK_LINE(756)
	{
		HX_STACK_LINE(756)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(756)
		::kha::audio2::ogg::vorbis::data::Header tmp14 = this->header;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(756)
		int _g = tmp14->channel;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(756)
		while((true)){
			HX_STACK_LINE(756)
			bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(756)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(756)
			if ((tmp16)){
				HX_STACK_LINE(756)
				break;
			}
			HX_STACK_LINE(756)
			int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(756)
			int i1 = tmp17;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(757)
			Array< ::Dynamic > tmp18 = this->channelBuffers;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(757)
			int tmp19 = i1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(757)
			Array< Float > tmp20 = tmp18->__unsafe_get(tmp19).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(757)
			Array< Float > tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(757)
			int tmp22 = n;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(757)
			bool tmp23 = m->blockflag;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(757)
			this->inverseMdct(tmp21,tmp22,tmp23);
		}
	}
	HX_STACK_LINE(763)
	{
		HX_STACK_LINE(763)
		::kha::audio2::ogg::vorbis::VorbisDecodeState tmp14 = this->decodeState;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(763)
		::kha::audio2::ogg::vorbis::VorbisDecodeState _this = tmp14;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(763)
		while((true)){
			HX_STACK_LINE(763)
			bool tmp15 = (_this->bytesInSeg != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(763)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(763)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(763)
			if ((tmp16)){
				HX_STACK_LINE(763)
				bool tmp18 = _this->lastSeg;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(763)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(763)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(763)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(763)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(763)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(763)
				if ((tmp23)){
					HX_STACK_LINE(763)
					int tmp24 = _this->next();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(763)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(763)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(763)
					tmp17 = (tmp26 != (int)0);
				}
				else{
					HX_STACK_LINE(763)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(763)
				tmp17 = true;
			}
			HX_STACK_LINE(763)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(763)
			if ((tmp18)){
				HX_STACK_LINE(763)
				break;
			}
			HX_STACK_LINE(763)
			(_this->bytesInSeg)--;
			HX_STACK_LINE(763)
			{
				HX_STACK_LINE(763)
				hx::AddEq(_this->inputPosition,(int)1);
				HX_STACK_LINE(763)
				_this->input->readByte();
			}
		}
	}
	HX_STACK_LINE(765)
	::kha::audio2::ogg::vorbis::VorbisDecodeState tmp14 = this->decodeState;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(765)
	int tmp15 = this->previousLength;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(765)
	int tmp16 = n;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(765)
	Dynamic tmp17 = r;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(765)
	Dynamic tmp18 = tmp14->finishDecodePacket(tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(765)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC1(VorbisDecoder_obj,decodePacketRest,return )

::kha::audio2::ogg::vorbis::VorbisDecoder VorbisDecoder_obj::start( ::haxe::io::Input input){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisDecoder","start",0x5a739d71,"kha.audio2.ogg.vorbis.VorbisDecoder.start","kha/audio2/ogg/vorbis/VorbisDecoder.hx",72,0xbe2976a1)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(73)
	::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState = ::kha::audio2::ogg::vorbis::VorbisDecodeState_obj::__new(input);		HX_STACK_VAR(decodeState,"decodeState");
	HX_STACK_LINE(74)
	::kha::audio2::ogg::vorbis::VorbisDecodeState tmp = decodeState;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::kha::audio2::ogg::vorbis::data::Header tmp1 = ::kha::audio2::ogg::vorbis::data::Header_obj::read(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::kha::audio2::ogg::vorbis::data::Header header = tmp1;		HX_STACK_VAR(header,"header");
	HX_STACK_LINE(75)
	::kha::audio2::ogg::vorbis::VorbisDecoder decoder = ::kha::audio2::ogg::vorbis::VorbisDecoder_obj::__new(header,decodeState);		HX_STACK_VAR(decoder,"decoder");
	HX_STACK_LINE(76)
	decodeState->startFirstDecode();
	HX_STACK_LINE(77)
	decoder->pumpFirstFrame();
	HX_STACK_LINE(79)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp2 = decoder;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisDecoder_obj,start,return )


VorbisDecoder_obj::VorbisDecoder_obj()
{
}

void VorbisDecoder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VorbisDecoder);
	HX_MARK_MEMBER_NAME(previousWindow,"previousWindow");
	HX_MARK_MEMBER_NAME(previousLength,"previousLength");
	HX_MARK_MEMBER_NAME(finalY,"finalY");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(bitReverseData,"bitReverseData");
	HX_MARK_MEMBER_NAME(channelBuffers,"channelBuffers");
	HX_MARK_MEMBER_NAME(channelBufferStart,"channelBufferStart");
	HX_MARK_MEMBER_NAME(channelBufferEnd,"channelBufferEnd");
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(currentSample,"currentSample");
	HX_MARK_MEMBER_NAME(totalSample,"totalSample");
	HX_MARK_MEMBER_NAME(decodeState,"decodeState");
	HX_MARK_END_CLASS();
}

void VorbisDecoder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(previousWindow,"previousWindow");
	HX_VISIT_MEMBER_NAME(previousLength,"previousLength");
	HX_VISIT_MEMBER_NAME(finalY,"finalY");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(bitReverseData,"bitReverseData");
	HX_VISIT_MEMBER_NAME(channelBuffers,"channelBuffers");
	HX_VISIT_MEMBER_NAME(channelBufferStart,"channelBufferStart");
	HX_VISIT_MEMBER_NAME(channelBufferEnd,"channelBufferEnd");
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(currentSample,"currentSample");
	HX_VISIT_MEMBER_NAME(totalSample,"totalSample");
	HX_VISIT_MEMBER_NAME(decodeState,"decodeState");
}

Dynamic VorbisDecoder_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		if (HX_FIELD_EQ(inName,"seek") ) { return seek_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"finalY") ) { return finalY; }
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"header") ) { return header; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getWindow") ) { return getWindow_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalSample") ) { return totalSample; }
		if (HX_FIELD_EQ(inName,"decodeState") ) { return decodeState; }
		if (HX_FIELD_EQ(inName,"skipSamples") ) { return skipSamples_dyn(); }
		if (HX_FIELD_EQ(inName,"finishFrame") ) { return finishFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"inverseMdct") ) { return inverseMdct_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"decodePacket") ) { return decodePacket_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentSample") ) { return currentSample; }
		if (HX_FIELD_EQ(inName,"getFrameFloat") ) { return getFrameFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"initBlocksize") ) { return initBlocksize_dyn(); }
		if (HX_FIELD_EQ(inName,"decodeInitial") ) { return decodeInitial_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"previousWindow") ) { return previousWindow; }
		if (HX_FIELD_EQ(inName,"previousLength") ) { return previousLength; }
		if (HX_FIELD_EQ(inName,"bitReverseData") ) { return bitReverseData; }
		if (HX_FIELD_EQ(inName,"channelBuffers") ) { return channelBuffers; }
		if (HX_FIELD_EQ(inName,"ensurePosition") ) { return ensurePosition_dyn(); }
		if (HX_FIELD_EQ(inName,"pumpFirstFrame") ) { return pumpFirstFrame_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"channelBufferEnd") ) { return channelBufferEnd; }
		if (HX_FIELD_EQ(inName,"decodePacketRest") ) { return decodePacketRest_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setupSampleNumber") ) { return setupSampleNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"seekFrameFromPage") ) { return seekFrameFromPage_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"channelBufferStart") ) { return channelBufferStart; }
	}
	return super::__Field(inName,inCallProp);
}

bool VorbisDecoder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true;  }
	}
	return false;
}

Dynamic VorbisDecoder_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"finalY") ) { finalY=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast< ::kha::audio2::ogg::vorbis::data::Header >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalSample") ) { totalSample=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"decodeState") ) { decodeState=inValue.Cast< ::kha::audio2::ogg::vorbis::VorbisDecodeState >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentSample") ) { currentSample=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"previousWindow") ) { previousWindow=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"previousLength") ) { previousLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitReverseData") ) { bitReverseData=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"channelBuffers") ) { channelBuffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"channelBufferEnd") ) { channelBufferEnd=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"channelBufferStart") ) { channelBufferStart=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VorbisDecoder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void VorbisDecoder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("previousWindow","\x87","\x47","\x23","\x41"));
	outFields->push(HX_HCSTRING("previousLength","\x7d","\x48","\x9e","\x8d"));
	outFields->push(HX_HCSTRING("finalY","\x23","\x28","\x79","\x86"));
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("bitReverseData","\x9f","\x9c","\x26","\xb2"));
	outFields->push(HX_HCSTRING("channelBuffers","\xf0","\xb8","\xbc","\x61"));
	outFields->push(HX_HCSTRING("channelBufferStart","\x3f","\x1f","\xc8","\xba"));
	outFields->push(HX_HCSTRING("channelBufferEnd","\x78","\x4d","\xee","\xd4"));
	outFields->push(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"));
	outFields->push(HX_HCSTRING("currentSample","\x43","\xe1","\xa6","\x00"));
	outFields->push(HX_HCSTRING("totalSample","\x0e","\x53","\x80","\xe3"));
	outFields->push(HX_HCSTRING("decodeState","\x03","\x02","\x25","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecoder_obj,previousWindow),HX_HCSTRING("previousWindow","\x87","\x47","\x23","\x41")},
	{hx::fsInt,(int)offsetof(VorbisDecoder_obj,previousLength),HX_HCSTRING("previousLength","\x7d","\x48","\x9e","\x8d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecoder_obj,finalY),HX_HCSTRING("finalY","\x23","\x28","\x79","\x86")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecoder_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecoder_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecoder_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecoder_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecoder_obj,bitReverseData),HX_HCSTRING("bitReverseData","\x9f","\x9c","\x26","\xb2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VorbisDecoder_obj,channelBuffers),HX_HCSTRING("channelBuffers","\xf0","\xb8","\xbc","\x61")},
	{hx::fsInt,(int)offsetof(VorbisDecoder_obj,channelBufferStart),HX_HCSTRING("channelBufferStart","\x3f","\x1f","\xc8","\xba")},
	{hx::fsInt,(int)offsetof(VorbisDecoder_obj,channelBufferEnd),HX_HCSTRING("channelBufferEnd","\x78","\x4d","\xee","\xd4")},
	{hx::fsObject /*::kha::audio2::ogg::vorbis::data::Header*/ ,(int)offsetof(VorbisDecoder_obj,header),HX_HCSTRING("header","\x8d","\x09","\x00","\xfd")},
	{hx::fsInt,(int)offsetof(VorbisDecoder_obj,currentSample),HX_HCSTRING("currentSample","\x43","\xe1","\xa6","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VorbisDecoder_obj,totalSample),HX_HCSTRING("totalSample","\x0e","\x53","\x80","\xe3")},
	{hx::fsObject /*::kha::audio2::ogg::vorbis::VorbisDecodeState*/ ,(int)offsetof(VorbisDecoder_obj,decodeState),HX_HCSTRING("decodeState","\x03","\x02","\x25","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("previousWindow","\x87","\x47","\x23","\x41"),
	HX_HCSTRING("previousLength","\x7d","\x48","\x9e","\x8d"),
	HX_HCSTRING("finalY","\x23","\x28","\x79","\x86"),
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("bitReverseData","\x9f","\x9c","\x26","\xb2"),
	HX_HCSTRING("channelBuffers","\xf0","\xb8","\xbc","\x61"),
	HX_HCSTRING("channelBufferStart","\x3f","\x1f","\xc8","\xba"),
	HX_HCSTRING("channelBufferEnd","\x78","\x4d","\xee","\xd4"),
	HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"),
	HX_HCSTRING("currentSample","\x43","\xe1","\xa6","\x00"),
	HX_HCSTRING("totalSample","\x0e","\x53","\x80","\xe3"),
	HX_HCSTRING("decodeState","\x03","\x02","\x25","\x4c"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("skipSamples","\x4a","\x34","\x3b","\x1f"),
	HX_HCSTRING("setupSampleNumber","\xb0","\x18","\xf3","\x16"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("seekFrameFromPage","\x8e","\x11","\x2a","\x58"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("ensurePosition","\x87","\x40","\xd1","\xb4"),
	HX_HCSTRING("getFrameFloat","\x65","\x56","\x2f","\x42"),
	HX_HCSTRING("pumpFirstFrame","\xa5","\x34","\xb1","\xa7"),
	HX_HCSTRING("finishFrame","\xda","\x9a","\x88","\x2d"),
	HX_HCSTRING("getWindow","\x26","\x1d","\xe3","\xce"),
	HX_HCSTRING("initBlocksize","\x5e","\x03","\x09","\xe2"),
	HX_HCSTRING("inverseMdct","\x98","\x89","\xaa","\x21"),
	HX_HCSTRING("decodePacket","\x56","\x3f","\xd9","\x31"),
	HX_HCSTRING("decodeInitial","\xf6","\xfc","\x28","\xf6"),
	HX_HCSTRING("decodePacketRest","\x8a","\x29","\xdb","\x8b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VorbisDecoder_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VorbisDecoder_obj::__mClass,"__mClass");
};

#endif

hx::Class VorbisDecoder_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	::String(null()) };

void VorbisDecoder_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisDecoder","\x3d","\x44","\x15","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VorbisDecoder_obj::__GetStatic;
	__mClass->mSetStaticField = &VorbisDecoder_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VorbisDecoder_obj >;
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
} // end namespace vorbis
