#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_Reader
#include <kha/audio2/ogg/vorbis/Reader.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecoder
#include <kha/audio2/ogg/vorbis/VorbisDecoder.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Comment
#include <kha/audio2/ogg/vorbis/data/Comment.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Header
#include <kha/audio2/ogg/vorbis/data/Header.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileSeek
#include <sys/io/FileSeek.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{

Void Reader_obj::__construct(::haxe::io::Input input,Dynamic seekFunc,int inputLength)
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","new",0x26b8f869,"kha.audio2.ogg.vorbis.Reader.new","kha/audio2/ogg/vorbis/Reader.hx",76,0x425c5327)
HX_STACK_THIS(this)
HX_STACK_ARG(input,"input")
HX_STACK_ARG(seekFunc,"seekFunc")
HX_STACK_ARG(inputLength,"inputLength")
{
	HX_STACK_LINE(77)
	this->seekFunc = seekFunc;
	HX_STACK_LINE(78)
	this->inputLength = inputLength;
	HX_STACK_LINE(79)
	::haxe::io::Input tmp = input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp1 = ::kha::audio2::ogg::vorbis::VorbisDecoder_obj::start(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	this->decoder = tmp1;
	HX_STACK_LINE(80)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp2 = this->decoder;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	Dynamic tmp3 = seekFunc;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	int tmp4 = inputLength;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	tmp2->setupSampleNumber(tmp3,tmp4);
	HX_STACK_LINE(81)
	::kha::audio2::ogg::vorbis::data::Header tmp5 = this->get_header();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	Dynamic tmp6 = tmp5->comment->get_loopStart();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	this->loopStart = tmp6;
	HX_STACK_LINE(82)
	::kha::audio2::ogg::vorbis::data::Header tmp7 = this->get_header();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(82)
	Dynamic tmp8 = tmp7->comment->get_loopLength();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(82)
	this->loopLength = tmp8;
}
;
	return null();
}

//Reader_obj::~Reader_obj() { }

Dynamic Reader_obj::__CreateEmpty() { return  new Reader_obj; }
hx::ObjectPtr< Reader_obj > Reader_obj::__new(::haxe::io::Input input,Dynamic seekFunc,int inputLength)
{  hx::ObjectPtr< Reader_obj > _result_ = new Reader_obj();
	_result_->__construct(input,seekFunc,inputLength);
	return _result_;}

Dynamic Reader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reader_obj > _result_ = new Reader_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::kha::audio2::ogg::vorbis::data::Header Reader_obj::get_header( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","get_header",0x725d546d,"kha.audio2.ogg.vorbis.Reader.get_header","kha/audio2/ogg/vorbis/Reader.hx",33,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp = this->decoder;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::kha::audio2::ogg::vorbis::data::Header tmp1 = tmp->header;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,get_header,return )

int Reader_obj::get_totalSample( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","get_totalSample",0xd5a79c2e,"kha.audio2.ogg.vorbis.Reader.get_totalSample","kha/audio2/ogg/vorbis/Reader.hx",38,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp = this->decoder;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	Dynamic tmp1 = tmp->totalSample;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,get_totalSample,return )

Float Reader_obj::get_totalMillisecond( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","get_totalMillisecond",0x288b80bd,"kha.audio2.ogg.vorbis.Reader.get_totalMillisecond","kha/audio2/ogg/vorbis/Reader.hx",44,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::kha::audio2::ogg::vorbis::VorbisDecoder tmp1 = this->decoder;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		int samples = tmp1->totalSample;		HX_STACK_VAR(samples,"samples");
		HX_STACK_LINE(45)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::kha::audio2::ogg::vorbis::data::Header tmp3 = this->get_header();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			int b = tmp3->sampleRate;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(45)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				int _int = samples;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(45)
				bool tmp5 = (_int < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				if ((tmp5)){
					HX_STACK_LINE(45)
					tmp4 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(45)
					tmp4 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(45)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				int _int = b;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(45)
				bool tmp6 = (_int < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				if ((tmp6)){
					HX_STACK_LINE(45)
					tmp5 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(45)
					tmp5 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(45)
			tmp2 = (Float(tmp4) / Float(tmp5));
		}
		HX_STACK_LINE(45)
		tmp = (tmp2 * (int)1000);
	}
	HX_STACK_LINE(45)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,get_totalMillisecond,return )

int Reader_obj::get_currentSample( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","get_currentSample",0x420ab263,"kha.audio2.ogg.vorbis.Reader.get_currentSample","kha/audio2/ogg/vorbis/Reader.hx",49,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp = this->decoder;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = tmp->currentSample;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,get_currentSample,return )

int Reader_obj::set_currentSample( int value){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","set_currentSample",0x65788a6f,"kha.audio2.ogg.vorbis.Reader.set_currentSample","kha/audio2/ogg/vorbis/Reader.hx",53,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(54)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp = this->decoder;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	Dynamic tmp1 = this->seekFunc_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	int tmp2 = this->inputLength;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	tmp->seek(tmp1,tmp2,tmp3);
	HX_STACK_LINE(55)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp4 = this->decoder;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	int tmp5 = tmp4->currentSample;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(55)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,set_currentSample,return )

Float Reader_obj::get_currentMillisecond( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","get_currentMillisecond",0x0022ca68,"kha.audio2.ogg.vorbis.Reader.get_currentMillisecond","kha/audio2/ogg/vorbis/Reader.hx",61,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int tmp1 = this->get_currentSample();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		int samples = tmp1;		HX_STACK_VAR(samples,"samples");
		HX_STACK_LINE(62)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			::kha::audio2::ogg::vorbis::data::Header tmp3 = this->get_header();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			int b = tmp3->sampleRate;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(62)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				int _int = samples;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(62)
				bool tmp5 = (_int < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(62)
				if ((tmp5)){
					HX_STACK_LINE(62)
					tmp4 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(62)
					tmp4 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(62)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				int _int = b;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(62)
				bool tmp6 = (_int < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(62)
				if ((tmp6)){
					HX_STACK_LINE(62)
					tmp5 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(62)
					tmp5 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(62)
			tmp2 = (Float(tmp4) / Float(tmp5));
		}
		HX_STACK_LINE(62)
		tmp = (tmp2 * (int)1000);
	}
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,get_currentMillisecond,return )

Float Reader_obj::set_currentMillisecond( Float value){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","set_currentMillisecond",0x33ce46dc,"kha.audio2.ogg.vorbis.Reader.set_currentMillisecond","kha/audio2/ogg/vorbis/Reader.hx",65,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		Float tmp1 = (Float(value) / Float((int)1000));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		Float _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		::kha::audio2::ogg::vorbis::data::Header tmp2 = this->get_header();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		int _g1 = tmp2->sampleRate;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int _int = _g1;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(66)
			bool tmp4 = (_int < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			if ((tmp4)){
				HX_STACK_LINE(66)
				tmp3 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(66)
				tmp3 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(66)
		Float tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		tmp = (tmp3 * tmp4);
	}
	HX_STACK_LINE(66)
	int tmp1 = ::Math_obj::floor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	this->set_currentSample(tmp1);
	HX_STACK_LINE(67)
	Float tmp2 = this->get_currentMillisecond();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,set_currentMillisecond,return )

int Reader_obj::read( Array< Float > output,Dynamic samples,Dynamic channels,Dynamic sampleRate,hx::Null< bool >  __o_useFloat){
bool useFloat = __o_useFloat.Default(false);
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","read",0xbdc52b2d,"kha.audio2.ogg.vorbis.Reader.read","kha/audio2/ogg/vorbis/Reader.hx",121,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(samples,"samples")
	HX_STACK_ARG(channels,"channels")
	HX_STACK_ARG(sampleRate,"sampleRate")
	HX_STACK_ARG(useFloat,"useFloat")
{
		HX_STACK_LINE(122)
		::kha::audio2::ogg::vorbis::VorbisDecoder tmp = this->decoder;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		Dynamic tmp1 = this->seekFunc_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		tmp->ensurePosition(tmp1);
		HX_STACK_LINE(124)
		bool tmp2 = (samples == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		if ((tmp2)){
			HX_STACK_LINE(125)
			::kha::audio2::ogg::vorbis::VorbisDecoder tmp3 = this->decoder;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			samples = tmp3->totalSample;
		}
		HX_STACK_LINE(127)
		bool tmp3 = (channels == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		if ((tmp3)){
			HX_STACK_LINE(128)
			::kha::audio2::ogg::vorbis::data::Header tmp4 = this->get_header();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			channels = tmp4->channel;
		}
		HX_STACK_LINE(130)
		bool tmp4 = (sampleRate == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		if ((tmp4)){
			HX_STACK_LINE(131)
			::kha::audio2::ogg::vorbis::data::Header tmp5 = this->get_header();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			sampleRate = tmp5->sampleRate;
		}
		HX_STACK_LINE(133)
		::kha::audio2::ogg::vorbis::VorbisDecoder tmp5 = this->decoder;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		Array< Float > tmp6 = output;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		Dynamic tmp7 = samples;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(133)
		Dynamic tmp8 = channels;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(133)
		Dynamic tmp9 = sampleRate;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(133)
		bool tmp10 = useFloat;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(133)
		int tmp11 = tmp5->read(tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(133)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Reader_obj,read,return )

::kha::audio2::ogg::vorbis::Reader Reader_obj::clone( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","clone",0xb0690fa6,"kha.audio2.ogg.vorbis.Reader.clone","kha/audio2/ogg/vorbis/Reader.hx",136,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	::kha::audio2::ogg::vorbis::Reader tmp = ::Type_obj::createEmptyInstance(hx::ClassOf< ::kha::audio2::ogg::vorbis::Reader >());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	::kha::audio2::ogg::vorbis::Reader reader = tmp;		HX_STACK_VAR(reader,"reader");
	HX_STACK_LINE(138)
	Dynamic tmp1 = this->seekFunc_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	reader->seekFunc = tmp1;
	HX_STACK_LINE(139)
	int tmp2 = this->inputLength;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	reader->inputLength = tmp2;
	HX_STACK_LINE(140)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp3 = this->decoder;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(140)
	Dynamic tmp4 = this->seekFunc_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(140)
	::kha::audio2::ogg::vorbis::VorbisDecoder tmp5 = tmp3->clone(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(140)
	reader->decoder = tmp5;
	HX_STACK_LINE(141)
	Dynamic tmp6 = this->loopStart;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(141)
	reader->loopStart = tmp6;
	HX_STACK_LINE(142)
	Dynamic tmp7 = this->loopLength;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(142)
	reader->loopLength = tmp7;
	HX_STACK_LINE(143)
	::kha::audio2::ogg::vorbis::Reader tmp8 = reader;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(143)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,clone,return )

Float Reader_obj::sampleToMillisecond( int samples){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","sampleToMillisecond",0x1841f105,"kha.audio2.ogg.vorbis.Reader.sampleToMillisecond","kha/audio2/ogg/vorbis/Reader.hx",147,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_ARG(samples,"samples")
	HX_STACK_LINE(148)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		::kha::audio2::ogg::vorbis::data::Header tmp1 = this->get_header();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		int b = tmp1->sampleRate;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(148)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _int = samples;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(148)
			bool tmp3 = (_int < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(148)
			if ((tmp3)){
				HX_STACK_LINE(148)
				tmp2 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(148)
				tmp2 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(148)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _int = b;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(148)
			bool tmp4 = (_int < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			if ((tmp4)){
				HX_STACK_LINE(148)
				tmp3 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(148)
				tmp3 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(148)
		tmp = (Float(tmp2) / Float(tmp3));
	}
	HX_STACK_LINE(148)
	Float tmp1 = (tmp * (int)1000);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,sampleToMillisecond,return )

int Reader_obj::millisecondToSample( Float millseconds){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","millisecondToSample",0x3285c26f,"kha.audio2.ogg.vorbis.Reader.millisecondToSample","kha/audio2/ogg/vorbis/Reader.hx",151,0x425c5327)
	HX_STACK_THIS(this)
	HX_STACK_ARG(millseconds,"millseconds")
	HX_STACK_LINE(152)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	{
		HX_STACK_LINE(152)
		Float tmp1 = (Float(millseconds) / Float((int)1000));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		Float _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		::kha::audio2::ogg::vorbis::data::Header tmp2 = this->get_header();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		int _g1 = tmp2->sampleRate;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			int _int = _g1;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(152)
			bool tmp4 = (_int < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			if ((tmp4)){
				HX_STACK_LINE(152)
				tmp3 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(152)
				tmp3 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(152)
		Float tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		tmp = (tmp3 * tmp4);
	}
	HX_STACK_LINE(152)
	int tmp1 = ::Math_obj::floor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,millisecondToSample,return )

::kha::audio2::ogg::vorbis::Reader Reader_obj::openFromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","openFromBytes",0xcd22f2c0,"kha.audio2.ogg.vorbis.Reader.openFromBytes","kha/audio2/ogg/vorbis/Reader.hx",85,0x425c5327)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(86)
	::haxe::io::BytesInput input = ::haxe::io::BytesInput_obj::__new(bytes,null(),null());		HX_STACK_VAR(input,"input");
	HX_STACK_LINE(87)
	::haxe::io::BytesInput tmp = input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	Dynamic tmp1 = ::kha::audio2::ogg::vorbis::Reader_obj::seekBytes_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	::haxe::io::BytesInput tmp2 = input;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(87)
		::haxe::io::BytesInput a1 = tmp2;		HX_STACK_VAR(a1,"a1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::haxe::io::BytesInput,a1,Dynamic,f)
		int __ArgCount() const { return 1; }
		Void run(int a2){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","kha/audio2/ogg/vorbis/Reader.hx",87,0x425c5327)
			HX_STACK_ARG(a2,"a2")
			{
				HX_STACK_LINE(87)
				::haxe::io::BytesInput tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				int tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				f(tmp4,tmp5).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(87)
		tmp3 =  Dynamic(new _Function_2_1(a1,f));
	}
	HX_STACK_LINE(87)
	int tmp4 = bytes->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(87)
	::kha::audio2::ogg::vorbis::Reader tmp5 = ::kha::audio2::ogg::vorbis::Reader_obj::__new(tmp,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(87)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,openFromBytes,return )

Void Reader_obj::seekBytes( ::haxe::io::BytesInput bytes,int pos){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","seekBytes",0x253a749c,"kha.audio2.ogg.vorbis.Reader.seekBytes","kha/audio2/ogg/vorbis/Reader.hx",90,0x425c5327)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(91)
		int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		bytes->set_position(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,seekBytes,(void))

::kha::audio2::ogg::vorbis::Reader Reader_obj::openFromFile( ::String fileName){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","openFromFile",0xa9f945c7,"kha.audio2.ogg.vorbis.Reader.openFromFile","kha/audio2/ogg/vorbis/Reader.hx",95,0x425c5327)
	HX_STACK_ARG(fileName,"fileName")
	HX_STACK_LINE(96)
	::String tmp = fileName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	::sys::io::FileInput tmp1 = ::sys::io::File_obj::read(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	::sys::io::FileInput file = tmp1;		HX_STACK_VAR(file,"file");
	HX_STACK_LINE(97)
	::String tmp2 = fileName;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	Dynamic tmp3 = ::sys::FileSystem_obj::stat(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	Dynamic stat = tmp3;		HX_STACK_VAR(stat,"stat");
	HX_STACK_LINE(98)
	::sys::io::FileInput tmp4 = file;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	Dynamic tmp5 = file->seek_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(98)
	Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		Dynamic f = tmp5;		HX_STACK_VAR(f,"f");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
		int __ArgCount() const { return 1; }
		Void run(int p){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","kha/audio2/ogg/vorbis/Reader.hx",98,0x425c5327)
			HX_STACK_ARG(p,"p")
			{
				HX_STACK_LINE(98)
				int tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(98)
				::sys::io::FileSeek tmp8 = ::sys::io::FileSeek_obj::SeekBegin;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(98)
				f(tmp7,tmp8).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(98)
		tmp6 =  Dynamic(new _Function_2_1(f));
	}
	HX_STACK_LINE(98)
	int tmp7 = stat->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(98)
	::kha::audio2::ogg::vorbis::Reader tmp8 = ::kha::audio2::ogg::vorbis::Reader_obj::__new(tmp4,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(98)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,openFromFile,return )

::kha::audio2::ogg::vorbis::data::Header Reader_obj::readAll( ::haxe::io::Bytes bytes,::haxe::io::Output output,hx::Null< bool >  __o_useFloat){
bool useFloat = __o_useFloat.Default(false);
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.Reader","readAll",0xf577fff4,"kha.audio2.ogg.vorbis.Reader.readAll","kha/audio2/ogg/vorbis/Reader.hx",102,0x425c5327)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(useFloat,"useFloat")
{
		HX_STACK_LINE(103)
		::haxe::io::BytesInput input = ::haxe::io::BytesInput_obj::__new(bytes,null(),null());		HX_STACK_VAR(input,"input");
		HX_STACK_LINE(104)
		::haxe::io::BytesInput tmp = input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		::kha::audio2::ogg::vorbis::VorbisDecoder tmp1 = ::kha::audio2::ogg::vorbis::VorbisDecoder_obj::start(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		::kha::audio2::ogg::vorbis::VorbisDecoder decoder = tmp1;		HX_STACK_VAR(decoder,"decoder");
		HX_STACK_LINE(105)
		Dynamic tmp2 = ::kha::audio2::ogg::vorbis::Reader_obj::seekBytes_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		::haxe::io::BytesInput tmp3 = input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			Dynamic f = tmp2;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(105)
			::haxe::io::BytesInput a1 = tmp3;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::haxe::io::BytesInput,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","kha/audio2/ogg/vorbis/Reader.hx",105,0x425c5327)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(105)
					::haxe::io::BytesInput tmp5 = a1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(105)
					int tmp6 = a2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(105)
					f(tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(105)
			tmp4 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(105)
		int tmp5 = bytes->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		decoder->setupSampleNumber(tmp4,tmp5);
		HX_STACK_LINE(106)
		::kha::audio2::ogg::vorbis::data::Header header = decoder->header;		HX_STACK_VAR(header,"header");
		HX_STACK_LINE(107)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(108)
		int bufferSize = (int)4096;		HX_STACK_VAR(bufferSize,"bufferSize");
		HX_STACK_LINE(109)
		Array< Float > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(109)
			Array< Float > tmp7 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(109)
			this1 = tmp7;
			HX_STACK_LINE(109)
			int tmp8 = (bufferSize * header->channel);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(109)
			this1->__SetSizeExact(tmp8);
			HX_STACK_LINE(109)
			tmp6 = this1;
		}
		HX_STACK_LINE(109)
		Array< Float > buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(110)
		while((true)){
			HX_STACK_LINE(111)
			Array< Float > tmp7 = buffer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			int tmp8 = bufferSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			int tmp9 = header->channel;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(111)
			int tmp10 = header->sampleRate;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(111)
			bool tmp11 = useFloat;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			int tmp12 = decoder->read(tmp7,tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			int n = tmp12;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(112)
				int tmp13 = (n * header->channel);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(112)
				int _g = tmp13;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(112)
				while((true)){
					HX_STACK_LINE(112)
					bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(112)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(112)
					if ((tmp15)){
						HX_STACK_LINE(112)
						break;
					}
					HX_STACK_LINE(112)
					int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(112)
					int i = tmp16;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(113)
					{
						HX_STACK_LINE(113)
						int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(113)
						Float tmp18 = buffer->__unsafe_get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(113)
						Float x = tmp18;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(113)
						Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(113)
						int tmp20 = ::haxe::io::FPHelper_obj::floatToI32(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(113)
						output->writeInt32(tmp20);
					}
				}
			}
			HX_STACK_LINE(115)
			bool tmp13 = (n == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(115)
			if ((tmp13)){
				HX_STACK_LINE(115)
				break;
			}
			HX_STACK_LINE(116)
			hx::AddEq(count,n);
		}
		HX_STACK_LINE(118)
		::kha::audio2::ogg::vorbis::data::Header tmp7 = decoder->header;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reader_obj,readAll,return )


Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(decoder,"decoder");
	HX_MARK_MEMBER_NAME(loopStart,"loopStart");
	HX_MARK_MEMBER_NAME(loopLength,"loopLength");
	HX_MARK_MEMBER_NAME(seekFunc,"seekFunc");
	HX_MARK_MEMBER_NAME(inputLength,"inputLength");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(decoder,"decoder");
	HX_VISIT_MEMBER_NAME(loopStart,"loopStart");
	HX_VISIT_MEMBER_NAME(loopLength,"loopLength");
	HX_VISIT_MEMBER_NAME(seekFunc,"seekFunc");
	HX_VISIT_MEMBER_NAME(inputLength,"inputLength");
}

Dynamic Reader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { if (inCallProp == hx::paccAlways) return get_header(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"decoder") ) { return decoder; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"seekFunc") ) { return seekFunc; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopStart") ) { return loopStart; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_header") ) { return get_header_dyn(); }
		if (HX_FIELD_EQ(inName,"loopLength") ) { return loopLength; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalSample") ) { if (inCallProp == hx::paccAlways) return get_totalSample(); }
		if (HX_FIELD_EQ(inName,"inputLength") ) { return inputLength; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentSample") ) { if (inCallProp == hx::paccAlways) return get_currentSample(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalSample") ) { return get_totalSample_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"totalMillisecond") ) { if (inCallProp == hx::paccAlways) return get_totalMillisecond(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_currentSample") ) { return get_currentSample_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentSample") ) { return set_currentSample_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentMillisecond") ) { if (inCallProp == hx::paccAlways) return get_currentMillisecond(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sampleToMillisecond") ) { return sampleToMillisecond_dyn(); }
		if (HX_FIELD_EQ(inName,"millisecondToSample") ) { return millisecondToSample_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_totalMillisecond") ) { return get_totalMillisecond_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_currentMillisecond") ) { return get_currentMillisecond_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentMillisecond") ) { return set_currentMillisecond_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Reader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"readAll") ) { outValue = readAll_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"seekBytes") ) { outValue = seekBytes_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openFromFile") ) { outValue = openFromFile_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"openFromBytes") ) { outValue = openFromBytes_dyn(); return true;  }
	}
	return false;
}

Dynamic Reader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"decoder") ) { decoder=inValue.Cast< ::kha::audio2::ogg::vorbis::VorbisDecoder >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"seekFunc") ) { seekFunc=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopStart") ) { loopStart=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loopLength") ) { loopLength=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputLength") ) { inputLength=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentSample") ) { if (inCallProp == hx::paccAlways) return set_currentSample(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentMillisecond") ) { if (inCallProp == hx::paccAlways) return set_currentMillisecond(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Reader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("decoder","\x84","\x2b","\xc4","\xea"));
	outFields->push(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"));
	outFields->push(HX_HCSTRING("totalSample","\x0e","\x53","\x80","\xe3"));
	outFields->push(HX_HCSTRING("totalMillisecond","\xdd","\xdd","\x4f","\x6f"));
	outFields->push(HX_HCSTRING("currentSample","\x43","\xe1","\xa6","\x00"));
	outFields->push(HX_HCSTRING("currentMillisecond","\x88","\xaf","\x90","\xc6"));
	outFields->push(HX_HCSTRING("loopStart","\x5e","\x93","\xb7","\xb1"));
	outFields->push(HX_HCSTRING("loopLength","\x6a","\x92","\xf6","\x67"));
	outFields->push(HX_HCSTRING("inputLength","\x90","\x70","\x3b","\x94"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::audio2::ogg::vorbis::VorbisDecoder*/ ,(int)offsetof(Reader_obj,decoder),HX_HCSTRING("decoder","\x84","\x2b","\xc4","\xea")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Reader_obj,loopStart),HX_HCSTRING("loopStart","\x5e","\x93","\xb7","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Reader_obj,loopLength),HX_HCSTRING("loopLength","\x6a","\x92","\xf6","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Reader_obj,seekFunc),HX_HCSTRING("seekFunc","\xdc","\xb8","\x2a","\x46")},
	{hx::fsInt,(int)offsetof(Reader_obj,inputLength),HX_HCSTRING("inputLength","\x90","\x70","\x3b","\x94")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("decoder","\x84","\x2b","\xc4","\xea"),
	HX_HCSTRING("get_header","\x56","\x79","\x87","\xed"),
	HX_HCSTRING("get_totalSample","\xa5","\x0a","\x62","\xa4"),
	HX_HCSTRING("get_totalMillisecond","\xe6","\x42","\xba","\x8d"),
	HX_HCSTRING("get_currentSample","\x9a","\xec","\x16","\x07"),
	HX_HCSTRING("set_currentSample","\xa6","\xc4","\x84","\x2a"),
	HX_HCSTRING("get_currentMillisecond","\xd1","\x28","\x25","\x20"),
	HX_HCSTRING("set_currentMillisecond","\x45","\xa5","\xd0","\x53"),
	HX_HCSTRING("loopStart","\x5e","\x93","\xb7","\xb1"),
	HX_HCSTRING("loopLength","\x6a","\x92","\xf6","\x67"),
	HX_HCSTRING("seekFunc","\xdc","\xb8","\x2a","\x46"),
	HX_HCSTRING("inputLength","\x90","\x70","\x3b","\x94"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("sampleToMillisecond","\xfc","\x66","\x7a","\x64"),
	HX_HCSTRING("millisecondToSample","\x66","\x38","\xbe","\x7e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#endif

hx::Class Reader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("openFromBytes","\x77","\x05","\xea","\x8d"),
	HX_HCSTRING("seekBytes","\xd3","\x1f","\x46","\xd4"),
	HX_HCSTRING("openFromFile","\xf0","\x36","\xa5","\xdf"),
	HX_HCSTRING("readAll","\x6b","\x9f","\xc3","\x02"),
	::String(null()) };

void Reader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.Reader","\xf7","\x8f","\x10","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reader_obj::__GetStatic;
	__mClass->mSetStaticField = &Reader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Reader_obj >;
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
