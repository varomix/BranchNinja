#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_StbTruetype
#include <kha/graphics2/truetype/StbTruetype.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__active_edge
#include <kha/graphics2/truetype/Stbtt__active_edge.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__bitmap
#include <kha/graphics2/truetype/Stbtt__bitmap.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__edge
#include <kha/graphics2/truetype/Stbtt__edge.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__point
#include <kha/graphics2/truetype/Stbtt__point.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_aligned_quad
#include <kha/graphics2/truetype/Stbtt_aligned_quad.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_bakedchar
#include <kha/graphics2/truetype/Stbtt_bakedchar.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo
#include <kha/graphics2/truetype/Stbtt_fontinfo.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_font_v_metrics
#include <kha/graphics2/truetype/Stbtt_temp_font_v_metrics.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_glyph_h_metrics
#include <kha/graphics2/truetype/Stbtt_temp_glyph_h_metrics.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_rect
#include <kha/graphics2/truetype/Stbtt_temp_rect.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_region
#include <kha/graphics2/truetype/Stbtt_temp_region.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_vertex
#include <kha/graphics2/truetype/Stbtt_vertex.h>
#endif
namespace kha{
namespace graphics2{
namespace truetype{

Void StbTruetype_obj::__construct()
{
	return null();
}

//StbTruetype_obj::~StbTruetype_obj() { }

Dynamic StbTruetype_obj::__CreateEmpty() { return  new StbTruetype_obj; }
hx::ObjectPtr< StbTruetype_obj > StbTruetype_obj::__new()
{  hx::ObjectPtr< StbTruetype_obj > _result_ = new StbTruetype_obj();
	_result_->__construct();
	return _result_;}

Dynamic StbTruetype_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StbTruetype_obj > _result_ = new StbTruetype_obj();
	_result_->__construct();
	return _result_;}

Void StbTruetype_obj::STBTT_assert( bool value){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","STBTT_assert",0x69bc9cde,"kha.graphics2.truetype.StbTruetype.STBTT_assert","kha/graphics2/truetype/StbTruetype.hx",177,0x5d9e0de9)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(177)
		bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(177)
			HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StbTruetype_obj,STBTT_assert,(void))

Float StbTruetype_obj::STBTT_POINT_SIZE( Float x){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","STBTT_POINT_SIZE",0xe08bac88,"kha.graphics2.truetype.StbTruetype.STBTT_POINT_SIZE","kha/graphics2/truetype/StbTruetype.hx",178,0x5d9e0de9)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(178)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StbTruetype_obj,STBTT_POINT_SIZE,return )

int StbTruetype_obj::STBTT_vmove;

int StbTruetype_obj::STBTT_vline;

int StbTruetype_obj::STBTT_vcurve;

int StbTruetype_obj::STBTT_MACSTYLE_DONTCARE;

int StbTruetype_obj::STBTT_MACSTYLE_BOLD;

int StbTruetype_obj::STBTT_MACSTYLE_ITALIC;

int StbTruetype_obj::STBTT_MACSTYLE_UNDERSCORE;

int StbTruetype_obj::STBTT_MACSTYLE_NONE;

int StbTruetype_obj::STBTT_PLATFORM_ID_UNICODE;

int StbTruetype_obj::STBTT_PLATFORM_ID_MAC;

int StbTruetype_obj::STBTT_PLATFORM_ID_ISO;

int StbTruetype_obj::STBTT_PLATFORM_ID_MICROSOFT;

int StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_1_0;

int StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_1_1;

int StbTruetype_obj::STBTT_UNICODE_EID_ISO_10646;

int StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_2_0_BMP;

int StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_2_0_FULL;

int StbTruetype_obj::STBTT_MS_EID_SYMBOL;

int StbTruetype_obj::STBTT_MS_EID_UNICODE_BMP;

int StbTruetype_obj::STBTT_MS_EID_SHIFTJIS;

int StbTruetype_obj::STBTT_MS_EID_UNICODE_FULL;

int StbTruetype_obj::STBTT_MAC_EID_ROMAN;

int StbTruetype_obj::STBTT_MAC_EID_ARABIC;

int StbTruetype_obj::STBTT_MAC_EID_JAPANESE;

int StbTruetype_obj::STBTT_MAC_EID_HEBREW;

int StbTruetype_obj::STBTT_MAC_EID_CHINESE_TRAD;

int StbTruetype_obj::STBTT_MAC_EID_GREEK;

int StbTruetype_obj::STBTT_MAC_EID_KOREAN;

int StbTruetype_obj::STBTT_MAC_EID_RUSSIAN;

int StbTruetype_obj::STBTT_MS_LANG_ENGLISH;

int StbTruetype_obj::STBTT_MS_LANG_ITALIAN;

int StbTruetype_obj::STBTT_MS_LANG_CHINESE;

int StbTruetype_obj::STBTT_MS_LANG_JAPANESE;

int StbTruetype_obj::STBTT_MS_LANG_DUTCH;

int StbTruetype_obj::STBTT_MS_LANG_KOREAN;

int StbTruetype_obj::STBTT_MS_LANG_FRENCH;

int StbTruetype_obj::STBTT_MS_LANG_RUSSIAN;

int StbTruetype_obj::STBTT_MS_LANG_GERMAN;

int StbTruetype_obj::STBTT_MS_LANG_SPANISH;

int StbTruetype_obj::STBTT_MS_LANG_HEBREW;

int StbTruetype_obj::STBTT_MS_LANG_SWEDISH;

int StbTruetype_obj::STBTT_MAC_LANG_ENGLISH;

int StbTruetype_obj::STBTT_MAC_LANG_JAPANESE;

int StbTruetype_obj::STBTT_MAC_LANG_ARABIC;

int StbTruetype_obj::STBTT_MAC_LANG_KOREAN;

int StbTruetype_obj::STBTT_MAC_LANG_DUTCH;

int StbTruetype_obj::STBTT_MAC_LANG_RUSSIAN;

int StbTruetype_obj::STBTT_MAC_LANG_FRENCH;

int StbTruetype_obj::STBTT_MAC_LANG_SPANISH;

int StbTruetype_obj::STBTT_MAC_LANG_GERMAN;

int StbTruetype_obj::STBTT_MAC_LANG_SWEDISH;

int StbTruetype_obj::STBTT_MAC_LANG_HEBREW;

int StbTruetype_obj::STBTT_MAC_LANG_CHINESE_SIMPLIFIED;

int StbTruetype_obj::STBTT_MAC_LANG_ITALIAN;

int StbTruetype_obj::STBTT_MAC_LANG_CHINESE_TRAD;

int StbTruetype_obj::STBTT_MAX_OVERSAMPLE;

int StbTruetype_obj::STBTT_RASTERIZER_VERSION;

int StbTruetype_obj::ttBYTE( ::kha::Blob p,hx::Null< int >  __o_pos){
int pos = __o_pos.Default(0);
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","ttBYTE",0x1ef477a2,"kha.graphics2.truetype.StbTruetype.ttBYTE","kha/graphics2/truetype/StbTruetype.hx",254,0x5d9e0de9)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(pos,"pos")
{
		HX_STACK_LINE(255)
		int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		int tmp1 = p->readU8(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,ttBYTE,return )

int StbTruetype_obj::ttCHAR( ::kha::Blob p,hx::Null< int >  __o_pos){
int pos = __o_pos.Default(0);
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","ttCHAR",0x1f90b770,"kha.graphics2.truetype.StbTruetype.ttCHAR","kha/graphics2/truetype/StbTruetype.hx",258,0x5d9e0de9)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(pos,"pos")
{
		HX_STACK_LINE(259)
		int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		int tmp1 = p->readU8(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		int n = tmp1;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(260)
		bool tmp2 = (n >= (int)128);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(260)
		if ((tmp2)){
			HX_STACK_LINE(261)
			int tmp3 = (n - (int)256);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(261)
			return tmp3;
		}
		HX_STACK_LINE(262)
		int tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,ttCHAR,return )

int StbTruetype_obj::ttUSHORT( ::kha::Blob p,hx::Null< int >  __o_pos){
int pos = __o_pos.Default(0);
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","ttUSHORT",0x3b34d301,"kha.graphics2.truetype.StbTruetype.ttUSHORT","kha/graphics2/truetype/StbTruetype.hx",265,0x5d9e0de9)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(pos,"pos")
{
		HX_STACK_LINE(266)
		int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		int tmp1 = p->readU8(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		int ch1 = tmp1;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(267)
		int tmp2 = (pos + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		int tmp3 = p->readU8(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		int ch2 = tmp3;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(268)
		int tmp4 = ch2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(268)
		int tmp5 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(268)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(268)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,ttUSHORT,return )

int StbTruetype_obj::ttSHORT( ::kha::Blob p,hx::Null< int >  __o_pos){
int pos = __o_pos.Default(0);
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","ttSHORT",0xb583b282,"kha.graphics2.truetype.StbTruetype.ttSHORT","kha/graphics2/truetype/StbTruetype.hx",271,0x5d9e0de9)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(pos,"pos")
{
		HX_STACK_LINE(272)
		int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		int tmp1 = p->readU8(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		int ch1 = tmp1;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(273)
		int tmp2 = (pos + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		int tmp3 = p->readU8(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		int ch2 = tmp3;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(274)
		int tmp4 = ch2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		int tmp5 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(274)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(274)
		int n = tmp6;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(275)
		int tmp7 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(275)
		bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(275)
		if ((tmp8)){
			HX_STACK_LINE(276)
			int tmp9 = (n - (int)65536);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(276)
			return tmp9;
		}
		HX_STACK_LINE(277)
		int tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(277)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,ttSHORT,return )

int StbTruetype_obj::ttULONG( ::kha::Blob p,hx::Null< int >  __o_pos){
int pos = __o_pos.Default(0);
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","ttULONG",0xdef5b277,"kha.graphics2.truetype.StbTruetype.ttULONG","kha/graphics2/truetype/StbTruetype.hx",280,0x5d9e0de9)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(pos,"pos")
{
		HX_STACK_LINE(280)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			int tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			int tmp2 = p->readU8(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(280)
			int ch1 = tmp2;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(280)
			int tmp3 = (pos + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(280)
			int tmp4 = p->readU8(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(280)
			int ch2 = tmp4;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(280)
			int tmp5 = (pos + (int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(280)
			int tmp6 = p->readU8(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(280)
			int ch3 = tmp6;		HX_STACK_VAR(ch3,"ch3");
			HX_STACK_LINE(280)
			int tmp7 = (pos + (int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(280)
			int tmp8 = p->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(280)
			int ch4 = tmp8;		HX_STACK_VAR(ch4,"ch4");
			HX_STACK_LINE(280)
			int tmp9 = ch4;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(280)
			int tmp10 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(280)
			int tmp11 = (int(tmp9) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(280)
			int tmp12 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(280)
			int tmp13 = (int(tmp11) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(280)
			int tmp14 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(280)
			tmp = (int(tmp13) | int(tmp14));
		}
		HX_STACK_LINE(280)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,ttULONG,return )

int StbTruetype_obj::ttLONG( ::kha::Blob p,hx::Null< int >  __o_pos){
int pos = __o_pos.Default(0);
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","ttLONG",0x2588fe16,"kha.graphics2.truetype.StbTruetype.ttLONG","kha/graphics2/truetype/StbTruetype.hx",282,0x5d9e0de9)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(pos,"pos")
{
		HX_STACK_LINE(283)
		int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		int tmp1 = p->readU8(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		int ch1 = tmp1;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(284)
		int tmp2 = (pos + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		int tmp3 = p->readU8(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(284)
		int ch2 = tmp3;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(285)
		int tmp4 = (pos + (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(285)
		int tmp5 = p->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(285)
		int ch3 = tmp5;		HX_STACK_VAR(ch3,"ch3");
		HX_STACK_LINE(286)
		int tmp6 = (pos + (int)3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(286)
		int tmp7 = p->readU8(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(286)
		int ch4 = tmp7;		HX_STACK_VAR(ch4,"ch4");
		HX_STACK_LINE(287)
		int tmp8 = ch4;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(287)
		int tmp9 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(287)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(287)
		int tmp11 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(287)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(287)
		int tmp13 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(287)
		int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(287)
		return tmp14;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,ttLONG,return )

int StbTruetype_obj::ttFixed( ::kha::Blob p,hx::Null< int >  __o_pos){
int pos = __o_pos.Default(0);
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","ttFixed",0x4f3d5f7a,"kha.graphics2.truetype.StbTruetype.ttFixed","kha/graphics2/truetype/StbTruetype.hx",290,0x5d9e0de9)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(pos,"pos")
{
		HX_STACK_LINE(290)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			int tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			int tmp2 = p->readU8(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			int ch1 = tmp2;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(290)
			int tmp3 = (pos + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			int tmp4 = p->readU8(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			int ch2 = tmp4;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(290)
			int tmp5 = (pos + (int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			int tmp6 = p->readU8(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(290)
			int ch3 = tmp6;		HX_STACK_VAR(ch3,"ch3");
			HX_STACK_LINE(290)
			int tmp7 = (pos + (int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(290)
			int tmp8 = p->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(290)
			int ch4 = tmp8;		HX_STACK_VAR(ch4,"ch4");
			HX_STACK_LINE(290)
			int tmp9 = ch4;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(290)
			int tmp10 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(290)
			int tmp11 = (int(tmp9) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(290)
			int tmp12 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(290)
			int tmp13 = (int(tmp11) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(290)
			int tmp14 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(290)
			tmp = (int(tmp13) | int(tmp14));
		}
		HX_STACK_LINE(290)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,ttFixed,return )

bool StbTruetype_obj::stbtt_tag4( ::kha::Blob p,int pos,int c0,int c1,int c2,int c3){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_tag4",0x787a9892,"kha.graphics2.truetype.StbTruetype.stbtt_tag4","kha/graphics2/truetype/StbTruetype.hx",292,0x5d9e0de9)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(c0,"c0")
	HX_STACK_ARG(c1,"c1")
	HX_STACK_ARG(c2,"c2")
	HX_STACK_ARG(c3,"c3")
	HX_STACK_LINE(292)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	int tmp1 = p->readU8(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(292)
	int tmp2 = c0;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(292)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(292)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(292)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(292)
	if ((tmp4)){
		HX_STACK_LINE(292)
		int tmp6 = (pos + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(292)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(292)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(292)
		int tmp11 = p->readU8(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(292)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(292)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(292)
		int tmp14 = c1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(292)
		tmp5 = (tmp13 == tmp14);
	}
	else{
		HX_STACK_LINE(292)
		tmp5 = false;
	}
	HX_STACK_LINE(292)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(292)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(292)
	if ((tmp6)){
		HX_STACK_LINE(292)
		int tmp8 = (pos + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(292)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(292)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(292)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(292)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(292)
		int tmp13 = p->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(292)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(292)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(292)
		int tmp16 = c2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(292)
		tmp7 = (tmp15 == tmp16);
	}
	else{
		HX_STACK_LINE(292)
		tmp7 = false;
	}
	HX_STACK_LINE(292)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(292)
	if ((tmp7)){
		HX_STACK_LINE(292)
		int tmp9 = (pos + (int)3);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(292)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(292)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(292)
		int tmp12 = p->readU8(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(292)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(292)
		int tmp14 = c3;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(292)
		tmp8 = (tmp13 == tmp14);
	}
	else{
		HX_STACK_LINE(292)
		tmp8 = false;
	}
	HX_STACK_LINE(292)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(StbTruetype_obj,stbtt_tag4,return )

bool StbTruetype_obj::stbtt_tag( ::kha::Blob p,int pos,::String str){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_tag",0x6ebf1d62,"kha.graphics2.truetype.StbTruetype.stbtt_tag","kha/graphics2/truetype/StbTruetype.hx",293,0x5d9e0de9)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(293)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		Dynamic tmp1 = str.charCodeAt((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		int c0 = tmp1;		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(293)
		Dynamic tmp2 = str.charCodeAt((int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		int c1 = tmp2;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(293)
		Dynamic tmp3 = str.charCodeAt((int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(293)
		int c2 = tmp3;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(293)
		Dynamic tmp4 = str.charCodeAt((int)3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(293)
		int c3 = tmp4;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(293)
		int tmp5 = pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(293)
		int tmp6 = p->readU8(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(293)
		int tmp7 = c0;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(293)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(293)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(293)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(293)
		if ((tmp9)){
			HX_STACK_LINE(293)
			int tmp11 = (pos + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(293)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(293)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(293)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(293)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(293)
			int tmp16 = p->readU8(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(293)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(293)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(293)
			int tmp19 = c1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(293)
			tmp10 = (tmp18 == tmp19);
		}
		else{
			HX_STACK_LINE(293)
			tmp10 = false;
		}
		HX_STACK_LINE(293)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(293)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(293)
		if ((tmp11)){
			HX_STACK_LINE(293)
			int tmp13 = (pos + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(293)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(293)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(293)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(293)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(293)
			int tmp18 = p->readU8(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(293)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(293)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(293)
			int tmp21 = c2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(293)
			tmp12 = (tmp20 == tmp21);
		}
		else{
			HX_STACK_LINE(293)
			tmp12 = false;
		}
		HX_STACK_LINE(293)
		if ((tmp12)){
			HX_STACK_LINE(293)
			int tmp13 = (pos + (int)3);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(293)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(293)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(293)
			int tmp16 = p->readU8(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(293)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(293)
			int tmp18 = c3;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(293)
			tmp = (tmp17 == tmp18);
		}
		else{
			HX_STACK_LINE(293)
			tmp = false;
		}
	}
	HX_STACK_LINE(293)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StbTruetype_obj,stbtt_tag,return )

bool StbTruetype_obj::stbtt__isfont( ::kha::Blob font){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__isfont",0x3c7def60,"kha.graphics2.truetype.StbTruetype.stbtt__isfont","kha/graphics2/truetype/StbTruetype.hx",295,0x5d9e0de9)
	HX_STACK_ARG(font,"font")
	HX_STACK_LINE(297)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		Dynamic tmp1 = HX_HCSTRING("1","\x31","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(297)
		int c0 = tmp1;		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(297)
		int tmp2 = (int)0;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(297)
		int tmp3 = font->readU8(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		int tmp4 = c0;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(297)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(297)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(297)
		if ((tmp6)){
			HX_STACK_LINE(297)
			int tmp8 = (int)1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(297)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(297)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			int tmp13 = font->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(297)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(297)
			tmp7 = (tmp15 == (int)0);
		}
		else{
			HX_STACK_LINE(297)
			tmp7 = false;
		}
		HX_STACK_LINE(297)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(297)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(297)
		if ((tmp8)){
			HX_STACK_LINE(297)
			int tmp10 = (int)2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(297)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(297)
			int tmp15 = font->readU8(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(297)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(297)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(297)
			tmp9 = (tmp17 == (int)0);
		}
		else{
			HX_STACK_LINE(297)
			tmp9 = false;
		}
		HX_STACK_LINE(297)
		if ((tmp9)){
			HX_STACK_LINE(297)
			int tmp10 = (int)3;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(297)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			int tmp13 = font->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(297)
			tmp = (tmp14 == (int)0);
		}
		else{
			HX_STACK_LINE(297)
			tmp = false;
		}
	}
	HX_STACK_LINE(297)
	if ((tmp)){
		HX_STACK_LINE(297)
		return true;
	}
	HX_STACK_LINE(298)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	{
		HX_STACK_LINE(298)
		Dynamic tmp2 = HX_HCSTRING("typ1","\x86","\xf2","\x08","\x4d").charCodeAt((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		int c0 = tmp2;		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(298)
		Dynamic tmp3 = HX_HCSTRING("typ1","\x86","\xf2","\x08","\x4d").charCodeAt((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		int c1 = tmp3;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(298)
		Dynamic tmp4 = HX_HCSTRING("typ1","\x86","\xf2","\x08","\x4d").charCodeAt((int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		int c2 = tmp4;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(298)
		Dynamic tmp5 = HX_HCSTRING("typ1","\x86","\xf2","\x08","\x4d").charCodeAt((int)3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(298)
		int c3 = tmp5;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(298)
		int tmp6 = (int)0;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		int tmp7 = font->readU8(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(298)
		int tmp8 = c0;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(298)
		bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(298)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(298)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(298)
		if ((tmp10)){
			HX_STACK_LINE(298)
			int tmp12 = (int)1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(298)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(298)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(298)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(298)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(298)
			int tmp17 = font->readU8(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(298)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(298)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(298)
			int tmp20 = c1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(298)
			tmp11 = (tmp19 == tmp20);
		}
		else{
			HX_STACK_LINE(298)
			tmp11 = false;
		}
		HX_STACK_LINE(298)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(298)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(298)
		if ((tmp12)){
			HX_STACK_LINE(298)
			int tmp14 = (int)2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(298)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(298)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(298)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(298)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(298)
			int tmp19 = font->readU8(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(298)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(298)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(298)
			int tmp22 = c2;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(298)
			tmp13 = (tmp21 == tmp22);
		}
		else{
			HX_STACK_LINE(298)
			tmp13 = false;
		}
		HX_STACK_LINE(298)
		if ((tmp13)){
			HX_STACK_LINE(298)
			int tmp14 = (int)3;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(298)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(298)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(298)
			int tmp17 = font->readU8(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(298)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(298)
			int tmp19 = c3;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(298)
			tmp1 = (tmp18 == tmp19);
		}
		else{
			HX_STACK_LINE(298)
			tmp1 = false;
		}
	}
	HX_STACK_LINE(298)
	if ((tmp1)){
		HX_STACK_LINE(298)
		return true;
	}
	HX_STACK_LINE(299)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(299)
		Dynamic tmp3 = HX_HCSTRING("OTTO","\xe0","\xe1","\x77","\x34").charCodeAt((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(299)
		int c0 = tmp3;		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(299)
		Dynamic tmp4 = HX_HCSTRING("OTTO","\xe0","\xe1","\x77","\x34").charCodeAt((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(299)
		int c1 = tmp4;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(299)
		Dynamic tmp5 = HX_HCSTRING("OTTO","\xe0","\xe1","\x77","\x34").charCodeAt((int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(299)
		int c2 = tmp5;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(299)
		Dynamic tmp6 = HX_HCSTRING("OTTO","\xe0","\xe1","\x77","\x34").charCodeAt((int)3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(299)
		int c3 = tmp6;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(299)
		int tmp7 = (int)0;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(299)
		int tmp8 = font->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(299)
		int tmp9 = c0;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(299)
		bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(299)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(299)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(299)
		if ((tmp11)){
			HX_STACK_LINE(299)
			int tmp13 = (int)1;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(299)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(299)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(299)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(299)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(299)
			int tmp18 = font->readU8(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(299)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(299)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(299)
			int tmp21 = c1;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(299)
			tmp12 = (tmp20 == tmp21);
		}
		else{
			HX_STACK_LINE(299)
			tmp12 = false;
		}
		HX_STACK_LINE(299)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(299)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(299)
		if ((tmp13)){
			HX_STACK_LINE(299)
			int tmp15 = (int)2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(299)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(299)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(299)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(299)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(299)
			int tmp20 = font->readU8(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(299)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(299)
			int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(299)
			int tmp23 = c2;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(299)
			tmp14 = (tmp22 == tmp23);
		}
		else{
			HX_STACK_LINE(299)
			tmp14 = false;
		}
		HX_STACK_LINE(299)
		if ((tmp14)){
			HX_STACK_LINE(299)
			int tmp15 = (int)3;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(299)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(299)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(299)
			int tmp18 = font->readU8(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(299)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(299)
			int tmp20 = c3;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(299)
			tmp2 = (tmp19 == tmp20);
		}
		else{
			HX_STACK_LINE(299)
			tmp2 = false;
		}
	}
	HX_STACK_LINE(299)
	if ((tmp2)){
		HX_STACK_LINE(299)
		return true;
	}
	HX_STACK_LINE(300)
	int tmp3 = (int)0;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(300)
	int tmp4 = font->readU8(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(300)
	bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(300)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(300)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(300)
	if ((tmp6)){
		HX_STACK_LINE(300)
		int tmp8 = (int)1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(300)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(300)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(300)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(300)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(300)
		int tmp13 = font->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(300)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(300)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(300)
		tmp7 = (tmp15 == (int)1);
	}
	else{
		HX_STACK_LINE(300)
		tmp7 = false;
	}
	HX_STACK_LINE(300)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(300)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(300)
	if ((tmp8)){
		HX_STACK_LINE(300)
		int tmp10 = (int)2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(300)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(300)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(300)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(300)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(300)
		int tmp15 = font->readU8(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(300)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(300)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(300)
		tmp9 = (tmp17 == (int)0);
	}
	else{
		HX_STACK_LINE(300)
		tmp9 = false;
	}
	HX_STACK_LINE(300)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(300)
	if ((tmp9)){
		HX_STACK_LINE(300)
		int tmp11 = (int)3;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(300)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(300)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(300)
		int tmp14 = font->readU8(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(300)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(300)
		tmp10 = (tmp15 == (int)0);
	}
	else{
		HX_STACK_LINE(300)
		tmp10 = false;
	}
	HX_STACK_LINE(300)
	if ((tmp10)){
		HX_STACK_LINE(300)
		return true;
	}
	HX_STACK_LINE(301)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StbTruetype_obj,stbtt__isfont,return )

int StbTruetype_obj::stbtt__find_table( ::kha::Blob data,int fontstart,::String tag){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__find_table",0x8d01186f,"kha.graphics2.truetype.StbTruetype.stbtt__find_table","kha/graphics2/truetype/StbTruetype.hx",305,0x5d9e0de9)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(fontstart,"fontstart")
	HX_STACK_ARG(tag,"tag")
	HX_STACK_LINE(306)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	{
		HX_STACK_LINE(306)
		int tmp1 = (fontstart + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		int pos = tmp1;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(306)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		int tmp3 = data->readU8(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(306)
		int tmp4 = (pos + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		int tmp5 = data->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(306)
		int ch2 = tmp5;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(306)
		int tmp6 = ch2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(306)
		int tmp7 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(306)
		tmp = (int(tmp6) | int(tmp7));
	}
	HX_STACK_LINE(306)
	int num_tables = tmp;		HX_STACK_VAR(num_tables,"num_tables");
	HX_STACK_LINE(307)
	int tmp1 = (fontstart + (int)12);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	int tabledir = tmp1;		HX_STACK_VAR(tabledir,"tabledir");
	HX_STACK_LINE(308)
	{
		HX_STACK_LINE(308)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(308)
		while((true)){
			HX_STACK_LINE(308)
			bool tmp2 = (_g < num_tables);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(308)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			if ((tmp3)){
				HX_STACK_LINE(308)
				break;
			}
			HX_STACK_LINE(308)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(309)
			int tmp5 = tabledir;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(309)
			int tmp6 = ((int)16 * i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(309)
			int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(309)
			int loc = tmp7;		HX_STACK_VAR(loc,"loc");
			HX_STACK_LINE(310)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				Dynamic tmp9 = tag.charCodeAt((int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(310)
				int c0 = tmp9;		HX_STACK_VAR(c0,"c0");
				HX_STACK_LINE(310)
				Dynamic tmp10 = tag.charCodeAt((int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(310)
				int c1 = tmp10;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(310)
				Dynamic tmp11 = tag.charCodeAt((int)2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(310)
				int c2 = tmp11;		HX_STACK_VAR(c2,"c2");
				HX_STACK_LINE(310)
				Dynamic tmp12 = tag.charCodeAt((int)3);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(310)
				int c3 = tmp12;		HX_STACK_VAR(c3,"c3");
				HX_STACK_LINE(310)
				int tmp13 = loc;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(310)
				int tmp14 = data->readU8(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(310)
				int tmp15 = c0;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(310)
				bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(310)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(310)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(310)
				if ((tmp17)){
					HX_STACK_LINE(310)
					int tmp19 = (loc + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(310)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(310)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(310)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(310)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(310)
					int tmp24 = data->readU8(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(310)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(310)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(310)
					int tmp27 = c1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(310)
					tmp18 = (tmp26 == tmp27);
				}
				else{
					HX_STACK_LINE(310)
					tmp18 = false;
				}
				HX_STACK_LINE(310)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(310)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(310)
				if ((tmp19)){
					HX_STACK_LINE(310)
					int tmp21 = (loc + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(310)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(310)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(310)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(310)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(310)
					int tmp26 = data->readU8(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(310)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(310)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(310)
					int tmp29 = c2;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(310)
					tmp20 = (tmp28 == tmp29);
				}
				else{
					HX_STACK_LINE(310)
					tmp20 = false;
				}
				HX_STACK_LINE(310)
				if ((tmp20)){
					HX_STACK_LINE(310)
					int tmp21 = (loc + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(310)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(310)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(310)
					int tmp24 = data->readU8(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(310)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(310)
					int tmp26 = c3;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(310)
					tmp8 = (tmp25 == tmp26);
				}
				else{
					HX_STACK_LINE(310)
					tmp8 = false;
				}
			}
			HX_STACK_LINE(310)
			if ((tmp8)){
				HX_STACK_LINE(311)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					int tmp10 = (loc + (int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(311)
					int pos = tmp10;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						int tmp11 = pos;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(311)
						int tmp12 = data->readU8(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(311)
						int ch1 = tmp12;		HX_STACK_VAR(ch1,"ch1");
						HX_STACK_LINE(311)
						int tmp13 = (pos + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(311)
						int tmp14 = data->readU8(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(311)
						int ch2 = tmp14;		HX_STACK_VAR(ch2,"ch2");
						HX_STACK_LINE(311)
						int tmp15 = (pos + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(311)
						int tmp16 = data->readU8(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(311)
						int ch3 = tmp16;		HX_STACK_VAR(ch3,"ch3");
						HX_STACK_LINE(311)
						int tmp17 = (pos + (int)3);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(311)
						int tmp18 = data->readU8(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(311)
						int ch4 = tmp18;		HX_STACK_VAR(ch4,"ch4");
						HX_STACK_LINE(311)
						int tmp19 = ch4;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(311)
						int tmp20 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(311)
						int tmp21 = (int(tmp19) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(311)
						int tmp22 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(311)
						int tmp23 = (int(tmp21) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(311)
						int tmp24 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(311)
						tmp9 = (int(tmp23) | int(tmp24));
					}
				}
				HX_STACK_LINE(311)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(313)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StbTruetype_obj,stbtt__find_table,return )

int StbTruetype_obj::stbtt_GetFontOffsetForIndex( ::kha::Blob font_collection,int index){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetFontOffsetForIndex",0x75577749,"kha.graphics2.truetype.StbTruetype.stbtt_GetFontOffsetForIndex","kha/graphics2/truetype/StbTruetype.hx",316,0x5d9e0de9)
	HX_STACK_ARG(font_collection,"font_collection")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(318)
	::kha::Blob tmp = font_collection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	bool tmp1 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__isfont(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	if ((tmp1)){
		HX_STACK_LINE(319)
		bool tmp2 = (index == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		if ((tmp2)){
			HX_STACK_LINE(319)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(319)
			tmp3 = (int)-1;
		}
		HX_STACK_LINE(319)
		return tmp3;
	}
	HX_STACK_LINE(322)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	{
		HX_STACK_LINE(322)
		Dynamic tmp3 = HX_HCSTRING("ttcf","\x23","\x1c","\x05","\x4d").charCodeAt((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(322)
		int c0 = tmp3;		HX_STACK_VAR(c0,"c0");
		HX_STACK_LINE(322)
		Dynamic tmp4 = HX_HCSTRING("ttcf","\x23","\x1c","\x05","\x4d").charCodeAt((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(322)
		int c1 = tmp4;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(322)
		Dynamic tmp5 = HX_HCSTRING("ttcf","\x23","\x1c","\x05","\x4d").charCodeAt((int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(322)
		int c2 = tmp5;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(322)
		Dynamic tmp6 = HX_HCSTRING("ttcf","\x23","\x1c","\x05","\x4d").charCodeAt((int)3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(322)
		int c3 = tmp6;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(322)
		int tmp7 = (int)0;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(322)
		int tmp8 = font_collection->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(322)
		int tmp9 = c0;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(322)
		bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(322)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(322)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(322)
		if ((tmp11)){
			HX_STACK_LINE(322)
			int tmp13 = (int)1;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(322)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(322)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(322)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(322)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(322)
			int tmp18 = font_collection->readU8(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(322)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(322)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(322)
			int tmp21 = c1;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(322)
			tmp12 = (tmp20 == tmp21);
		}
		else{
			HX_STACK_LINE(322)
			tmp12 = false;
		}
		HX_STACK_LINE(322)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(322)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(322)
		if ((tmp13)){
			HX_STACK_LINE(322)
			int tmp15 = (int)2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(322)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(322)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(322)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(322)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(322)
			int tmp20 = font_collection->readU8(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(322)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(322)
			int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(322)
			int tmp23 = c2;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(322)
			tmp14 = (tmp22 == tmp23);
		}
		else{
			HX_STACK_LINE(322)
			tmp14 = false;
		}
		HX_STACK_LINE(322)
		if ((tmp14)){
			HX_STACK_LINE(322)
			int tmp15 = (int)3;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(322)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(322)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(322)
			int tmp18 = font_collection->readU8(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(322)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(322)
			int tmp20 = c3;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(322)
			tmp2 = (tmp19 == tmp20);
		}
		else{
			HX_STACK_LINE(322)
			tmp2 = false;
		}
	}
	HX_STACK_LINE(322)
	if ((tmp2)){
		HX_STACK_LINE(324)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(324)
			int tmp5 = font_collection->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(324)
			int ch1 = tmp5;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(324)
			int tmp6 = (int)5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(324)
			int tmp7 = font_collection->readU8(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(324)
			int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(324)
			int tmp8 = (int)6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(324)
			int tmp9 = font_collection->readU8(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			int ch3 = tmp9;		HX_STACK_VAR(ch3,"ch3");
			HX_STACK_LINE(324)
			int tmp10 = (int)7;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(324)
			int tmp11 = font_collection->readU8(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(324)
			int ch4 = tmp11;		HX_STACK_VAR(ch4,"ch4");
			HX_STACK_LINE(324)
			int tmp12 = ch4;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(324)
			int tmp13 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(324)
			int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(324)
			int tmp15 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(324)
			int tmp16 = (int(tmp14) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(324)
			int tmp17 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(324)
			tmp3 = (int(tmp16) | int(tmp17));
		}
		HX_STACK_LINE(324)
		bool tmp4 = (tmp3 == (int)65536);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(324)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(324)
		if ((tmp5)){
			HX_STACK_LINE(324)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(324)
			{
				HX_STACK_LINE(324)
				int tmp8 = (int)4;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(324)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(324)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(324)
				int tmp11 = font_collection->readU8(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(324)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(324)
				int ch1 = tmp12;		HX_STACK_VAR(ch1,"ch1");
				HX_STACK_LINE(324)
				int tmp13 = (int)5;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(324)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(324)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(324)
				int tmp16 = font_collection->readU8(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(324)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(324)
				int ch2 = tmp17;		HX_STACK_VAR(ch2,"ch2");
				HX_STACK_LINE(324)
				int tmp18 = (int)6;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(324)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(324)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(324)
				int tmp21 = font_collection->readU8(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(324)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(324)
				int ch3 = tmp22;		HX_STACK_VAR(ch3,"ch3");
				HX_STACK_LINE(324)
				int tmp23 = (int)7;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(324)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(324)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(324)
				int tmp26 = font_collection->readU8(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(324)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(324)
				int ch4 = tmp27;		HX_STACK_VAR(ch4,"ch4");
				HX_STACK_LINE(324)
				int tmp28 = ch4;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(324)
				int tmp29 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(324)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(324)
				int tmp31 = (int(tmp28) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(324)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(324)
				int tmp33 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(324)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(324)
				int tmp35 = (int(tmp32) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(324)
				int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(324)
				int tmp37 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(324)
				int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(324)
				int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(324)
				tmp7 = tmp39;
			}
			HX_STACK_LINE(324)
			tmp6 = (tmp7 == (int)131072);
		}
		else{
			HX_STACK_LINE(324)
			tmp6 = true;
		}
		HX_STACK_LINE(324)
		if ((tmp6)){
			HX_STACK_LINE(325)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(325)
			{
				HX_STACK_LINE(325)
				int tmp8 = (int)8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(325)
				int tmp9 = font_collection->readU8(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(325)
				int ch1 = tmp9;		HX_STACK_VAR(ch1,"ch1");
				HX_STACK_LINE(325)
				int tmp10 = (int)9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(325)
				int tmp11 = font_collection->readU8(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(325)
				int ch2 = tmp11;		HX_STACK_VAR(ch2,"ch2");
				HX_STACK_LINE(325)
				int tmp12 = (int)10;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(325)
				int tmp13 = font_collection->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(325)
				int ch3 = tmp13;		HX_STACK_VAR(ch3,"ch3");
				HX_STACK_LINE(325)
				int tmp14 = (int)11;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(325)
				int tmp15 = font_collection->readU8(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(325)
				int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
				HX_STACK_LINE(325)
				int tmp16 = ch4;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(325)
				int tmp17 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(325)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(325)
				int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(325)
				int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(325)
				int tmp21 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(325)
				tmp7 = (int(tmp20) | int(tmp21));
			}
			HX_STACK_LINE(325)
			int n = tmp7;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(326)
			bool tmp8 = (index >= n);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(326)
			if ((tmp8)){
				HX_STACK_LINE(327)
				return (int)-1;
			}
			HX_STACK_LINE(328)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				int tmp10 = (index * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(328)
				int tmp11 = ((int)12 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(328)
				int pos = tmp11;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(328)
				{
					HX_STACK_LINE(328)
					int tmp12 = pos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(328)
					int tmp13 = font_collection->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(328)
					int ch1 = tmp13;		HX_STACK_VAR(ch1,"ch1");
					HX_STACK_LINE(328)
					int tmp14 = (pos + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(328)
					int tmp15 = font_collection->readU8(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(328)
					int ch2 = tmp15;		HX_STACK_VAR(ch2,"ch2");
					HX_STACK_LINE(328)
					int tmp16 = (pos + (int)2);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(328)
					int tmp17 = font_collection->readU8(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(328)
					int ch3 = tmp17;		HX_STACK_VAR(ch3,"ch3");
					HX_STACK_LINE(328)
					int tmp18 = (pos + (int)3);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(328)
					int tmp19 = font_collection->readU8(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(328)
					int ch4 = tmp19;		HX_STACK_VAR(ch4,"ch4");
					HX_STACK_LINE(328)
					int tmp20 = ch4;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(328)
					int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(328)
					int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(328)
					int tmp23 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(328)
					int tmp24 = (int(tmp22) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(328)
					int tmp25 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(328)
					tmp9 = (int(tmp24) | int(tmp25));
				}
			}
			HX_STACK_LINE(328)
			return tmp9;
		}
	}
	HX_STACK_LINE(331)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt_GetFontOffsetForIndex,return )

bool StbTruetype_obj::stbtt_InitFont( ::kha::graphics2::truetype::Stbtt_fontinfo info,::kha::Blob data,int fontstart){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_InitFont",0x8c3a8917,"kha.graphics2.truetype.StbTruetype.stbtt_InitFont","kha/graphics2/truetype/StbTruetype.hx",334,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(fontstart,"fontstart")
	HX_STACK_LINE(335)
	int cmap;		HX_STACK_VAR(cmap,"cmap");
	HX_STACK_LINE(335)
	int t;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(336)
	int numTables;		HX_STACK_VAR(numTables,"numTables");
	HX_STACK_LINE(338)
	info->data = data;
	HX_STACK_LINE(339)
	info->fontstart = fontstart;
	HX_STACK_LINE(341)
	::kha::Blob tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	int tmp1 = fontstart;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(341)
	int tmp2 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__find_table(tmp,tmp1,HX_HCSTRING("cmap","\x19","\x2a","\xc3","\x41"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(341)
	cmap = tmp2;
	HX_STACK_LINE(342)
	::kha::Blob tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(342)
	int tmp4 = fontstart;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(342)
	int tmp5 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__find_table(tmp3,tmp4,HX_HCSTRING("loca","\xe1","\x9b","\xb7","\x47"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(342)
	info->loca = tmp5;
	HX_STACK_LINE(343)
	::kha::Blob tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(343)
	int tmp7 = fontstart;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(343)
	int tmp8 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__find_table(tmp6,tmp7,HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(343)
	info->head = tmp8;
	HX_STACK_LINE(344)
	::kha::Blob tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(344)
	int tmp10 = fontstart;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(344)
	int tmp11 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__find_table(tmp9,tmp10,HX_HCSTRING("glyf","\x32","\x57","\x67","\x44"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(344)
	info->glyf = tmp11;
	HX_STACK_LINE(345)
	::kha::Blob tmp12 = data;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(345)
	int tmp13 = fontstart;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(345)
	int tmp14 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__find_table(tmp12,tmp13,HX_HCSTRING("hhea","\x5c","\x73","\x0d","\x45"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(345)
	info->hhea = tmp14;
	HX_STACK_LINE(346)
	::kha::Blob tmp15 = data;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(346)
	int tmp16 = fontstart;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(346)
	int tmp17 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__find_table(tmp15,tmp16,HX_HCSTRING("hmtx","\xc9","\x4b","\x11","\x45"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(346)
	info->hmtx = tmp17;
	HX_STACK_LINE(347)
	::kha::Blob tmp18 = data;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(347)
	int tmp19 = fontstart;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(347)
	int tmp20 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__find_table(tmp18,tmp19,HX_HCSTRING("kern","\xd6","\xdb","\x06","\x47"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(347)
	info->kern = tmp20;
	HX_STACK_LINE(348)
	bool tmp21 = (cmap == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(348)
	bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(348)
	bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(348)
	bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(348)
	if ((tmp23)){
		HX_STACK_LINE(348)
		tmp24 = (info->loca == (int)0);
	}
	else{
		HX_STACK_LINE(348)
		tmp24 = true;
	}
	HX_STACK_LINE(348)
	bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(348)
	bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(348)
	bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(348)
	if ((tmp26)){
		HX_STACK_LINE(348)
		tmp27 = (info->head == (int)0);
	}
	else{
		HX_STACK_LINE(348)
		tmp27 = true;
	}
	HX_STACK_LINE(348)
	bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(348)
	bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(348)
	bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(348)
	if ((tmp29)){
		HX_STACK_LINE(348)
		tmp30 = (info->glyf == (int)0);
	}
	else{
		HX_STACK_LINE(348)
		tmp30 = true;
	}
	HX_STACK_LINE(348)
	bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(348)
	bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(348)
	bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(348)
	if ((tmp32)){
		HX_STACK_LINE(348)
		tmp33 = (info->hhea == (int)0);
	}
	else{
		HX_STACK_LINE(348)
		tmp33 = true;
	}
	HX_STACK_LINE(348)
	bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(348)
	bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(348)
	if ((tmp34)){
		HX_STACK_LINE(348)
		tmp35 = (info->hmtx == (int)0);
	}
	else{
		HX_STACK_LINE(348)
		tmp35 = true;
	}
	HX_STACK_LINE(348)
	if ((tmp35)){
		HX_STACK_LINE(349)
		return false;
	}
	HX_STACK_LINE(351)
	::kha::Blob tmp36 = data;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(351)
	int tmp37 = fontstart;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(351)
	int tmp38 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__find_table(tmp36,tmp37,HX_HCSTRING("maxp","\x4c","\x45","\x56","\x48"));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(351)
	t = tmp38;
	HX_STACK_LINE(352)
	bool tmp39 = (t != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(352)
	if ((tmp39)){
		HX_STACK_LINE(353)
		int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			int tmp41 = (t + (int)4);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(353)
			int pos = tmp41;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(353)
			int tmp42 = pos;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(353)
			int tmp43 = data->readU8(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(353)
			int ch1 = tmp43;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(353)
			int tmp44 = (pos + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(353)
			int tmp45 = data->readU8(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(353)
			int ch2 = tmp45;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(353)
			int tmp46 = ch2;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(353)
			int tmp47 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(353)
			tmp40 = (int(tmp46) | int(tmp47));
		}
		HX_STACK_LINE(353)
		info->numGlyphs = tmp40;
	}
	else{
		HX_STACK_LINE(355)
		info->numGlyphs = (int)65535;
	}
	HX_STACK_LINE(360)
	int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(360)
	{
		HX_STACK_LINE(360)
		int tmp41 = (cmap + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(360)
		int pos = tmp41;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(360)
		int tmp42 = pos;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(360)
		int tmp43 = data->readU8(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(360)
		int ch1 = tmp43;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(360)
		int tmp44 = (pos + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(360)
		int tmp45 = data->readU8(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(360)
		int ch2 = tmp45;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(360)
		int tmp46 = ch2;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(360)
		int tmp47 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(360)
		tmp40 = (int(tmp46) | int(tmp47));
	}
	HX_STACK_LINE(360)
	numTables = tmp40;
	HX_STACK_LINE(361)
	info->index_map = (int)0;
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(363)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(363)
		while((true)){
			HX_STACK_LINE(363)
			bool tmp41 = (_g < numTables);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(363)
			bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(363)
			if ((tmp42)){
				HX_STACK_LINE(363)
				break;
			}
			HX_STACK_LINE(363)
			int tmp43 = (_g)++;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(363)
			int i = tmp43;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(364)
			int tmp44 = (cmap + (int)4);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(364)
			int tmp45 = ((int)8 * i);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(364)
			int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(364)
			int encoding_record = tmp46;		HX_STACK_VAR(encoding_record,"encoding_record");
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					int tmp48 = encoding_record;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(366)
					int tmp49 = data->readU8(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(366)
					int ch1 = tmp49;		HX_STACK_VAR(ch1,"ch1");
					HX_STACK_LINE(366)
					int tmp50 = (encoding_record + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(366)
					int tmp51 = data->readU8(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(366)
					int ch2 = tmp51;		HX_STACK_VAR(ch2,"ch2");
					HX_STACK_LINE(366)
					int tmp52 = ch2;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(366)
					int tmp53 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(366)
					tmp47 = (int(tmp52) | int(tmp53));
				}
				HX_STACK_LINE(366)
				int _g1 = tmp47;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(366)
				int tmp48 = _g1;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(366)
				switch( (int)(tmp48)){
					case (int)3: {
						HX_STACK_LINE(368)
						int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							int tmp50 = (encoding_record + (int)2);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(368)
							int pos = tmp50;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(368)
							int tmp51 = pos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(368)
							int tmp52 = data->readU8(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(368)
							int ch1 = tmp52;		HX_STACK_VAR(ch1,"ch1");
							HX_STACK_LINE(368)
							int tmp53 = (pos + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(368)
							int tmp54 = data->readU8(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(368)
							int ch2 = tmp54;		HX_STACK_VAR(ch2,"ch2");
							HX_STACK_LINE(368)
							int tmp55 = ch2;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(368)
							int tmp56 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(368)
							tmp49 = (int(tmp55) | int(tmp56));
						}
						HX_STACK_LINE(368)
						int _g2 = tmp49;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(368)
						int tmp50 = _g2;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(368)
						switch( (int)(tmp50)){
							case (int)1: case (int)10: {
								HX_STACK_LINE(371)
								int tmp51 = cmap;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(371)
								int tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(371)
								{
									HX_STACK_LINE(371)
									int tmp53 = (encoding_record + (int)4);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(371)
									int pos = tmp53;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(371)
									{
										HX_STACK_LINE(371)
										int tmp54 = pos;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(371)
										int tmp55 = data->readU8(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(371)
										int ch1 = tmp55;		HX_STACK_VAR(ch1,"ch1");
										HX_STACK_LINE(371)
										int tmp56 = (pos + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(371)
										int tmp57 = data->readU8(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(371)
										int ch2 = tmp57;		HX_STACK_VAR(ch2,"ch2");
										HX_STACK_LINE(371)
										int tmp58 = (pos + (int)2);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(371)
										int tmp59 = data->readU8(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(371)
										int ch3 = tmp59;		HX_STACK_VAR(ch3,"ch3");
										HX_STACK_LINE(371)
										int tmp60 = (pos + (int)3);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(371)
										int tmp61 = data->readU8(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(371)
										int ch4 = tmp61;		HX_STACK_VAR(ch4,"ch4");
										HX_STACK_LINE(371)
										int tmp62 = ch4;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(371)
										int tmp63 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(371)
										int tmp64 = (int(tmp62) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(371)
										int tmp65 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(371)
										int tmp66 = (int(tmp64) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(371)
										int tmp67 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(371)
										tmp52 = (int(tmp66) | int(tmp67));
									}
								}
								HX_STACK_LINE(371)
								int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(371)
								info->index_map = tmp53;
							}
							;break;
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(376)
						int tmp49 = cmap;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(376)
						int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							int tmp51 = (encoding_record + (int)4);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(376)
							int pos = tmp51;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(376)
							{
								HX_STACK_LINE(376)
								int tmp52 = pos;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(376)
								int tmp53 = data->readU8(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(376)
								int ch1 = tmp53;		HX_STACK_VAR(ch1,"ch1");
								HX_STACK_LINE(376)
								int tmp54 = (pos + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(376)
								int tmp55 = data->readU8(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(376)
								int ch2 = tmp55;		HX_STACK_VAR(ch2,"ch2");
								HX_STACK_LINE(376)
								int tmp56 = (pos + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(376)
								int tmp57 = data->readU8(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(376)
								int ch3 = tmp57;		HX_STACK_VAR(ch3,"ch3");
								HX_STACK_LINE(376)
								int tmp58 = (pos + (int)3);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(376)
								int tmp59 = data->readU8(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(376)
								int ch4 = tmp59;		HX_STACK_VAR(ch4,"ch4");
								HX_STACK_LINE(376)
								int tmp60 = ch4;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(376)
								int tmp61 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(376)
								int tmp62 = (int(tmp60) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(376)
								int tmp63 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(376)
								int tmp64 = (int(tmp62) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(376)
								int tmp65 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(376)
								tmp50 = (int(tmp64) | int(tmp65));
							}
						}
						HX_STACK_LINE(376)
						int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(376)
						info->index_map = tmp51;
					}
					;break;
				}
			}
		}
	}
	HX_STACK_LINE(379)
	bool tmp41 = (info->index_map == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(379)
	if ((tmp41)){
		HX_STACK_LINE(380)
		return false;
	}
	HX_STACK_LINE(382)
	int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(382)
	{
		HX_STACK_LINE(382)
		int tmp43 = (info->head + (int)50);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(382)
		int pos = tmp43;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(382)
		int tmp44 = pos;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(382)
		int tmp45 = data->readU8(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(382)
		int ch1 = tmp45;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(382)
		int tmp46 = (pos + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(382)
		int tmp47 = data->readU8(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(382)
		int ch2 = tmp47;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(382)
		int tmp48 = ch2;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(382)
		int tmp49 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(382)
		tmp42 = (int(tmp48) | int(tmp49));
	}
	HX_STACK_LINE(382)
	info->indexToLocFormat = tmp42;
	HX_STACK_LINE(383)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StbTruetype_obj,stbtt_InitFont,return )

int StbTruetype_obj::stbtt_FindGlyphIndex( ::kha::graphics2::truetype::Stbtt_fontinfo info,int unicode_codepoint){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_FindGlyphIndex",0xbf6bd177,"kha.graphics2.truetype.StbTruetype.stbtt_FindGlyphIndex","kha/graphics2/truetype/StbTruetype.hx",386,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(unicode_codepoint,"unicode_codepoint")
	HX_STACK_LINE(387)
	::kha::Blob data = info->data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(388)
	int index_map = info->index_map;		HX_STACK_VAR(index_map,"index_map");
	HX_STACK_LINE(390)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		int tmp1 = index_map;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		int tmp2 = data->readU8(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		int ch1 = tmp2;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(390)
		int tmp3 = (index_map + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(390)
		int tmp4 = data->readU8(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		int ch2 = tmp4;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(390)
		int tmp5 = ch2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(390)
		int tmp6 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(390)
		tmp = (int(tmp5) | int(tmp6));
	}
	HX_STACK_LINE(390)
	int format = tmp;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(391)
	bool tmp1 = (format == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(391)
	if ((tmp1)){
		HX_STACK_LINE(392)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int tmp3 = (index_map + (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(392)
			int pos = tmp3;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(392)
			int tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(392)
			int tmp5 = data->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(392)
			int ch1 = tmp5;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(392)
			int tmp6 = (pos + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(392)
			int tmp7 = data->readU8(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(392)
			int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(392)
			int tmp8 = ch2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			int tmp9 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(392)
			tmp2 = (int(tmp8) | int(tmp9));
		}
		HX_STACK_LINE(392)
		int bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(393)
		int tmp3 = unicode_codepoint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		int tmp4 = (bytes - (int)6);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(393)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(393)
		if ((tmp5)){
			HX_STACK_LINE(394)
			int tmp6 = (index_map + (int)6);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(394)
			int tmp7 = unicode_codepoint;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(394)
			int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(394)
			int tmp9 = data->readU8(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(394)
			return tmp9;
		}
		HX_STACK_LINE(395)
		return (int)0;
	}
	else{
		HX_STACK_LINE(396)
		bool tmp2 = (format == (int)6);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		if ((tmp2)){
			HX_STACK_LINE(397)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(397)
			{
				HX_STACK_LINE(397)
				int tmp4 = (index_map + (int)6);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(397)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(397)
				int tmp5 = pos;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(397)
				int tmp6 = data->readU8(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(397)
				int ch1 = tmp6;		HX_STACK_VAR(ch1,"ch1");
				HX_STACK_LINE(397)
				int tmp7 = (pos + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(397)
				int tmp8 = data->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(397)
				int ch2 = tmp8;		HX_STACK_VAR(ch2,"ch2");
				HX_STACK_LINE(397)
				int tmp9 = ch2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(397)
				int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(397)
				tmp3 = (int(tmp9) | int(tmp10));
			}
			HX_STACK_LINE(397)
			int first = tmp3;		HX_STACK_VAR(first,"first");
			HX_STACK_LINE(398)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(398)
			{
				HX_STACK_LINE(398)
				int tmp5 = (index_map + (int)8);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(398)
				int pos = tmp5;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(398)
				int tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(398)
				int tmp7 = data->readU8(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(398)
				int ch1 = tmp7;		HX_STACK_VAR(ch1,"ch1");
				HX_STACK_LINE(398)
				int tmp8 = (pos + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(398)
				int tmp9 = data->readU8(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(398)
				int ch2 = tmp9;		HX_STACK_VAR(ch2,"ch2");
				HX_STACK_LINE(398)
				int tmp10 = ch2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(398)
				int tmp11 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(398)
				tmp4 = (int(tmp10) | int(tmp11));
			}
			HX_STACK_LINE(398)
			int count = tmp4;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(399)
			bool tmp5 = (unicode_codepoint >= first);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(399)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			if ((tmp5)){
				HX_STACK_LINE(399)
				int tmp7 = unicode_codepoint;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(399)
				int tmp8 = (first + count);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(399)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(399)
				tmp6 = (tmp7 < tmp9);
			}
			else{
				HX_STACK_LINE(399)
				tmp6 = false;
			}
			HX_STACK_LINE(399)
			if ((tmp6)){
				HX_STACK_LINE(400)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(400)
				{
					HX_STACK_LINE(400)
					int tmp8 = (index_map + (int)10);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(400)
					int tmp9 = (unicode_codepoint - first);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(400)
					int tmp10 = (tmp9 * (int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(400)
					int tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(400)
					int pos = tmp11;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(400)
					int tmp12 = pos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(400)
					int tmp13 = data->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(400)
					int ch1 = tmp13;		HX_STACK_VAR(ch1,"ch1");
					HX_STACK_LINE(400)
					int tmp14 = (pos + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(400)
					int tmp15 = data->readU8(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(400)
					int ch2 = tmp15;		HX_STACK_VAR(ch2,"ch2");
					HX_STACK_LINE(400)
					int tmp16 = ch2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(400)
					int tmp17 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(400)
					tmp7 = (int(tmp16) | int(tmp17));
				}
				HX_STACK_LINE(400)
				return tmp7;
			}
			HX_STACK_LINE(401)
			return (int)0;
		}
		else{
			HX_STACK_LINE(402)
			bool tmp3 = (format == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(402)
			if ((tmp3)){
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(403)
					if ((tmp4)){
						HX_STACK_LINE(403)
						HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
					}
				}
				HX_STACK_LINE(404)
				return (int)0;
			}
			else{
				HX_STACK_LINE(405)
				bool tmp4 = (format == (int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(405)
				if ((tmp4)){
					HX_STACK_LINE(406)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(406)
					{
						HX_STACK_LINE(406)
						int tmp6 = (index_map + (int)6);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(406)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(406)
						int tmp7 = pos;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(406)
						int tmp8 = data->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(406)
						int ch1 = tmp8;		HX_STACK_VAR(ch1,"ch1");
						HX_STACK_LINE(406)
						int tmp9 = (pos + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(406)
						int tmp10 = data->readU8(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(406)
						int ch2 = tmp10;		HX_STACK_VAR(ch2,"ch2");
						HX_STACK_LINE(406)
						int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(406)
						int tmp12 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(406)
						tmp5 = (int(tmp11) | int(tmp12));
					}
					HX_STACK_LINE(406)
					int tmp6 = (int(tmp5) >> int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(406)
					int segcount = tmp6;		HX_STACK_VAR(segcount,"segcount");
					HX_STACK_LINE(407)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(407)
					{
						HX_STACK_LINE(407)
						int tmp8 = (index_map + (int)8);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(407)
						int pos = tmp8;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(407)
						int tmp9 = pos;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(407)
						int tmp10 = data->readU8(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(407)
						int ch1 = tmp10;		HX_STACK_VAR(ch1,"ch1");
						HX_STACK_LINE(407)
						int tmp11 = (pos + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(407)
						int tmp12 = data->readU8(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(407)
						int ch2 = tmp12;		HX_STACK_VAR(ch2,"ch2");
						HX_STACK_LINE(407)
						int tmp13 = ch2;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(407)
						int tmp14 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(407)
						tmp7 = (int(tmp13) | int(tmp14));
					}
					HX_STACK_LINE(407)
					int tmp8 = (int(tmp7) >> int((int)1));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(407)
					int searchRange = tmp8;		HX_STACK_VAR(searchRange,"searchRange");
					HX_STACK_LINE(408)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(408)
					{
						HX_STACK_LINE(408)
						int tmp10 = (index_map + (int)10);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(408)
						int pos = tmp10;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(408)
						int tmp11 = pos;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(408)
						int tmp12 = data->readU8(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(408)
						int ch1 = tmp12;		HX_STACK_VAR(ch1,"ch1");
						HX_STACK_LINE(408)
						int tmp13 = (pos + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(408)
						int tmp14 = data->readU8(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(408)
						int ch2 = tmp14;		HX_STACK_VAR(ch2,"ch2");
						HX_STACK_LINE(408)
						int tmp15 = ch2;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(408)
						int tmp16 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(408)
						tmp9 = (int(tmp15) | int(tmp16));
					}
					HX_STACK_LINE(408)
					int entrySelector = tmp9;		HX_STACK_VAR(entrySelector,"entrySelector");
					HX_STACK_LINE(409)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						int tmp11 = (index_map + (int)12);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(409)
						int pos = tmp11;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(409)
						int tmp12 = pos;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(409)
						int tmp13 = data->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(409)
						int ch1 = tmp13;		HX_STACK_VAR(ch1,"ch1");
						HX_STACK_LINE(409)
						int tmp14 = (pos + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(409)
						int tmp15 = data->readU8(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(409)
						int ch2 = tmp15;		HX_STACK_VAR(ch2,"ch2");
						HX_STACK_LINE(409)
						int tmp16 = ch2;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(409)
						int tmp17 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(409)
						tmp10 = (int(tmp16) | int(tmp17));
					}
					HX_STACK_LINE(409)
					int tmp11 = (int(tmp10) >> int((int)1));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(409)
					int rangeShift = tmp11;		HX_STACK_VAR(rangeShift,"rangeShift");
					HX_STACK_LINE(412)
					int tmp12 = (index_map + (int)14);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(412)
					int endCount = tmp12;		HX_STACK_VAR(endCount,"endCount");
					HX_STACK_LINE(413)
					int search = endCount;		HX_STACK_VAR(search,"search");
					HX_STACK_LINE(415)
					bool tmp13 = (unicode_codepoint > (int)65535);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(415)
					if ((tmp13)){
						HX_STACK_LINE(416)
						return (int)0;
					}
					HX_STACK_LINE(420)
					int tmp14 = unicode_codepoint;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(420)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(420)
					{
						HX_STACK_LINE(420)
						int tmp16 = search;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(420)
						int tmp17 = (rangeShift * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(420)
						int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(420)
						int pos = tmp18;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(420)
						int tmp19 = pos;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(420)
						int tmp20 = data->readU8(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(420)
						int ch1 = tmp20;		HX_STACK_VAR(ch1,"ch1");
						HX_STACK_LINE(420)
						int tmp21 = (pos + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(420)
						int tmp22 = data->readU8(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(420)
						int ch2 = tmp22;		HX_STACK_VAR(ch2,"ch2");
						HX_STACK_LINE(420)
						int tmp23 = ch2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(420)
						int tmp24 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(420)
						tmp15 = (int(tmp23) | int(tmp24));
					}
					HX_STACK_LINE(420)
					bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(420)
					if ((tmp16)){
						HX_STACK_LINE(421)
						int tmp17 = (rangeShift * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(421)
						hx::AddEq(search,tmp17);
					}
					HX_STACK_LINE(424)
					hx::SubEq(search,(int)2);
					HX_STACK_LINE(425)
					while((true)){
						HX_STACK_LINE(425)
						bool tmp17 = (entrySelector != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(425)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(425)
						if ((tmp18)){
							HX_STACK_LINE(425)
							break;
						}
						HX_STACK_LINE(426)
						int end;		HX_STACK_VAR(end,"end");
						HX_STACK_LINE(427)
						hx::ShrEq(searchRange,(int)1);
						HX_STACK_LINE(428)
						int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(428)
						{
							HX_STACK_LINE(428)
							int tmp20 = search;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(428)
							int tmp21 = (searchRange * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(428)
							int tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(428)
							int pos = tmp22;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(428)
							int tmp23 = pos;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(428)
							int tmp24 = data->readU8(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(428)
							int ch1 = tmp24;		HX_STACK_VAR(ch1,"ch1");
							HX_STACK_LINE(428)
							int tmp25 = (pos + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(428)
							int tmp26 = data->readU8(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(428)
							int ch2 = tmp26;		HX_STACK_VAR(ch2,"ch2");
							HX_STACK_LINE(428)
							int tmp27 = ch2;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(428)
							int tmp28 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(428)
							tmp19 = (int(tmp27) | int(tmp28));
						}
						HX_STACK_LINE(428)
						end = tmp19;
						HX_STACK_LINE(429)
						bool tmp20 = (unicode_codepoint > end);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(429)
						if ((tmp20)){
							HX_STACK_LINE(430)
							int tmp21 = (searchRange * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(430)
							hx::AddEq(search,tmp21);
						}
						HX_STACK_LINE(431)
						--(entrySelector);
					}
					HX_STACK_LINE(433)
					hx::AddEq(search,(int)2);
					HX_STACK_LINE(435)
					{
						HX_STACK_LINE(436)
						int offset;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(436)
						int start;		HX_STACK_VAR(start,"start");
						HX_STACK_LINE(437)
						int tmp17 = (search - endCount);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(437)
						int tmp18 = (int(tmp17) >> int((int)1));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(437)
						int item = tmp18;		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(439)
						{
							HX_STACK_LINE(439)
							int tmp19 = unicode_codepoint;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(439)
							int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(439)
							{
								HX_STACK_LINE(439)
								int tmp21 = endCount;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(439)
								int tmp22 = ((int)2 * item);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(439)
								int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(439)
								int pos = tmp23;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(439)
								int tmp24 = pos;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(439)
								int tmp25 = data->readU8(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(439)
								int ch1 = tmp25;		HX_STACK_VAR(ch1,"ch1");
								HX_STACK_LINE(439)
								int tmp26 = (pos + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(439)
								int tmp27 = data->readU8(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(439)
								int ch2 = tmp27;		HX_STACK_VAR(ch2,"ch2");
								HX_STACK_LINE(439)
								int tmp28 = ch2;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(439)
								int tmp29 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(439)
								tmp20 = (int(tmp28) | int(tmp29));
							}
							HX_STACK_LINE(439)
							bool tmp21 = (tmp19 <= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(439)
							bool value = tmp21;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(439)
							bool tmp22 = value;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(439)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(439)
							if ((tmp23)){
								HX_STACK_LINE(439)
								HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
							}
						}
						HX_STACK_LINE(440)
						int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							int tmp20 = (index_map + (int)14);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(440)
							int tmp21 = (segcount * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(440)
							int tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(440)
							int tmp23 = (tmp22 + (int)2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(440)
							int tmp24 = ((int)2 * item);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(440)
							int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(440)
							int pos = tmp25;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(440)
							int tmp26 = pos;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(440)
							int tmp27 = data->readU8(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(440)
							int ch1 = tmp27;		HX_STACK_VAR(ch1,"ch1");
							HX_STACK_LINE(440)
							int tmp28 = (pos + (int)1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(440)
							int tmp29 = data->readU8(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(440)
							int ch2 = tmp29;		HX_STACK_VAR(ch2,"ch2");
							HX_STACK_LINE(440)
							int tmp30 = ch2;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(440)
							int tmp31 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(440)
							tmp19 = (int(tmp30) | int(tmp31));
						}
						HX_STACK_LINE(440)
						start = tmp19;
						HX_STACK_LINE(441)
						bool tmp20 = (unicode_codepoint < start);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(441)
						if ((tmp20)){
							HX_STACK_LINE(442)
							return (int)0;
						}
						HX_STACK_LINE(444)
						int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							int tmp22 = (index_map + (int)14);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(444)
							int tmp23 = (segcount * (int)6);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(444)
							int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(444)
							int tmp25 = (tmp24 + (int)2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(444)
							int tmp26 = ((int)2 * item);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(444)
							int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(444)
							int pos = tmp27;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(444)
							int tmp28 = pos;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(444)
							int tmp29 = data->readU8(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(444)
							int ch1 = tmp29;		HX_STACK_VAR(ch1,"ch1");
							HX_STACK_LINE(444)
							int tmp30 = (pos + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(444)
							int tmp31 = data->readU8(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(444)
							int ch2 = tmp31;		HX_STACK_VAR(ch2,"ch2");
							HX_STACK_LINE(444)
							int tmp32 = ch2;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(444)
							int tmp33 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(444)
							tmp21 = (int(tmp32) | int(tmp33));
						}
						HX_STACK_LINE(444)
						offset = tmp21;
						HX_STACK_LINE(445)
						bool tmp22 = (offset == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(445)
						if ((tmp22)){
							HX_STACK_LINE(446)
							int tmp23 = unicode_codepoint;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(446)
							int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								int tmp25 = (index_map + (int)14);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(446)
								int tmp26 = (segcount * (int)4);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(446)
								int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(446)
								int tmp28 = (tmp27 + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(446)
								int tmp29 = ((int)2 * item);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(446)
								int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(446)
								int pos = tmp30;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(446)
								int tmp31 = pos;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(446)
								int tmp32 = data->readU8(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(446)
								int ch1 = tmp32;		HX_STACK_VAR(ch1,"ch1");
								HX_STACK_LINE(446)
								int tmp33 = (pos + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(446)
								int tmp34 = data->readU8(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(446)
								int ch2 = tmp34;		HX_STACK_VAR(ch2,"ch2");
								HX_STACK_LINE(446)
								int tmp35 = ch2;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(446)
								int tmp36 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(446)
								int tmp37 = (int(tmp35) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(446)
								int n = tmp37;		HX_STACK_VAR(n,"n");
								HX_STACK_LINE(446)
								int tmp38 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(446)
								bool tmp39 = (tmp38 != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(446)
								if ((tmp39)){
									HX_STACK_LINE(446)
									tmp24 = (n - (int)65536);
								}
								else{
									HX_STACK_LINE(446)
									tmp24 = n;
								}
							}
							HX_STACK_LINE(446)
							int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(446)
							return tmp25;
						}
						HX_STACK_LINE(448)
						int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(448)
						{
							HX_STACK_LINE(448)
							int tmp24 = offset;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(448)
							int tmp25 = (unicode_codepoint - start);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(448)
							int tmp26 = (tmp25 * (int)2);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(448)
							int tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(448)
							int tmp28 = index_map;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(448)
							int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(448)
							int tmp30 = (tmp29 + (int)14);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(448)
							int tmp31 = (segcount * (int)6);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(448)
							int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(448)
							int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(448)
							int tmp34 = ((int)2 * item);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(448)
							int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(448)
							int pos = tmp35;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(448)
							int tmp36 = pos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(448)
							int tmp37 = data->readU8(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(448)
							int ch1 = tmp37;		HX_STACK_VAR(ch1,"ch1");
							HX_STACK_LINE(448)
							int tmp38 = (pos + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(448)
							int tmp39 = data->readU8(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(448)
							int ch2 = tmp39;		HX_STACK_VAR(ch2,"ch2");
							HX_STACK_LINE(448)
							int tmp40 = ch2;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(448)
							int tmp41 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(448)
							tmp23 = (int(tmp40) | int(tmp41));
						}
						HX_STACK_LINE(448)
						return tmp23;
					}
				}
				else{
					HX_STACK_LINE(450)
					bool tmp5 = (format == (int)12);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(450)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(450)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(450)
					if ((tmp6)){
						HX_STACK_LINE(450)
						tmp7 = (format == (int)13);
					}
					else{
						HX_STACK_LINE(450)
						tmp7 = true;
					}
					HX_STACK_LINE(450)
					if ((tmp7)){
						HX_STACK_LINE(451)
						int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(451)
						{
							HX_STACK_LINE(451)
							int tmp9 = (index_map + (int)12);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(451)
							int pos = tmp9;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(451)
							{
								HX_STACK_LINE(451)
								int tmp10 = pos;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(451)
								int tmp11 = data->readU8(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(451)
								int ch1 = tmp11;		HX_STACK_VAR(ch1,"ch1");
								HX_STACK_LINE(451)
								int tmp12 = (pos + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(451)
								int tmp13 = data->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(451)
								int ch2 = tmp13;		HX_STACK_VAR(ch2,"ch2");
								HX_STACK_LINE(451)
								int tmp14 = (pos + (int)2);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(451)
								int tmp15 = data->readU8(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(451)
								int ch3 = tmp15;		HX_STACK_VAR(ch3,"ch3");
								HX_STACK_LINE(451)
								int tmp16 = (pos + (int)3);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(451)
								int tmp17 = data->readU8(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(451)
								int ch4 = tmp17;		HX_STACK_VAR(ch4,"ch4");
								HX_STACK_LINE(451)
								int tmp18 = ch4;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(451)
								int tmp19 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(451)
								int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(451)
								int tmp21 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(451)
								int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(451)
								int tmp23 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(451)
								tmp8 = (int(tmp22) | int(tmp23));
							}
						}
						HX_STACK_LINE(451)
						int ngroups = tmp8;		HX_STACK_VAR(ngroups,"ngroups");
						HX_STACK_LINE(452)
						int low;		HX_STACK_VAR(low,"low");
						HX_STACK_LINE(452)
						int high;		HX_STACK_VAR(high,"high");
						HX_STACK_LINE(453)
						low = (int)0;
						HX_STACK_LINE(453)
						high = ngroups;
						HX_STACK_LINE(455)
						while((true)){
							HX_STACK_LINE(455)
							bool tmp9 = (low < high);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(455)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(455)
							if ((tmp10)){
								HX_STACK_LINE(455)
								break;
							}
							HX_STACK_LINE(456)
							int tmp11 = low;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(456)
							int tmp12 = (high - low);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(456)
							int tmp13 = (int(tmp12) >> int((int)1));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(456)
							int tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(456)
							int mid = tmp14;		HX_STACK_VAR(mid,"mid");
							HX_STACK_LINE(457)
							int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(457)
							{
								HX_STACK_LINE(457)
								int tmp16 = (index_map + (int)16);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(457)
								int tmp17 = (mid * (int)12);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(457)
								int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(457)
								int pos = tmp18;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(457)
								{
									HX_STACK_LINE(457)
									int tmp19 = pos;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(457)
									int tmp20 = data->readU8(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(457)
									int ch1 = tmp20;		HX_STACK_VAR(ch1,"ch1");
									HX_STACK_LINE(457)
									int tmp21 = (pos + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(457)
									int tmp22 = data->readU8(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(457)
									int ch2 = tmp22;		HX_STACK_VAR(ch2,"ch2");
									HX_STACK_LINE(457)
									int tmp23 = (pos + (int)2);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(457)
									int tmp24 = data->readU8(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(457)
									int ch3 = tmp24;		HX_STACK_VAR(ch3,"ch3");
									HX_STACK_LINE(457)
									int tmp25 = (pos + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(457)
									int tmp26 = data->readU8(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(457)
									int ch4 = tmp26;		HX_STACK_VAR(ch4,"ch4");
									HX_STACK_LINE(457)
									int tmp27 = ch4;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(457)
									int tmp28 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(457)
									int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(457)
									int tmp30 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(457)
									int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(457)
									int tmp32 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(457)
									tmp15 = (int(tmp31) | int(tmp32));
								}
							}
							HX_STACK_LINE(457)
							int start_char = tmp15;		HX_STACK_VAR(start_char,"start_char");
							HX_STACK_LINE(458)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(458)
							{
								HX_STACK_LINE(458)
								int tmp17 = (index_map + (int)16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(458)
								int tmp18 = (mid * (int)12);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(458)
								int tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(458)
								int tmp20 = (tmp19 + (int)4);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(458)
								int pos = tmp20;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(458)
								{
									HX_STACK_LINE(458)
									int tmp21 = pos;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(458)
									int tmp22 = data->readU8(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(458)
									int ch1 = tmp22;		HX_STACK_VAR(ch1,"ch1");
									HX_STACK_LINE(458)
									int tmp23 = (pos + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(458)
									int tmp24 = data->readU8(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(458)
									int ch2 = tmp24;		HX_STACK_VAR(ch2,"ch2");
									HX_STACK_LINE(458)
									int tmp25 = (pos + (int)2);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(458)
									int tmp26 = data->readU8(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(458)
									int ch3 = tmp26;		HX_STACK_VAR(ch3,"ch3");
									HX_STACK_LINE(458)
									int tmp27 = (pos + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(458)
									int tmp28 = data->readU8(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(458)
									int ch4 = tmp28;		HX_STACK_VAR(ch4,"ch4");
									HX_STACK_LINE(458)
									int tmp29 = ch4;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(458)
									int tmp30 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(458)
									int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(458)
									int tmp32 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(458)
									int tmp33 = (int(tmp31) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(458)
									int tmp34 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(458)
									tmp16 = (int(tmp33) | int(tmp34));
								}
							}
							HX_STACK_LINE(458)
							int end_char = tmp16;		HX_STACK_VAR(end_char,"end_char");
							HX_STACK_LINE(459)
							bool tmp17 = (unicode_codepoint < start_char);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(459)
							if ((tmp17)){
								HX_STACK_LINE(460)
								high = mid;
							}
							else{
								HX_STACK_LINE(461)
								bool tmp18 = (unicode_codepoint > end_char);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(461)
								if ((tmp18)){
									HX_STACK_LINE(462)
									int tmp19 = (mid + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(462)
									low = tmp19;
								}
								else{
									HX_STACK_LINE(464)
									int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(464)
									{
										HX_STACK_LINE(464)
										int tmp20 = (index_map + (int)16);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(464)
										int tmp21 = (mid * (int)12);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(464)
										int tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(464)
										int tmp23 = (tmp22 + (int)8);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(464)
										int pos = tmp23;		HX_STACK_VAR(pos,"pos");
										HX_STACK_LINE(464)
										{
											HX_STACK_LINE(464)
											int tmp24 = pos;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(464)
											int tmp25 = data->readU8(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(464)
											int ch1 = tmp25;		HX_STACK_VAR(ch1,"ch1");
											HX_STACK_LINE(464)
											int tmp26 = (pos + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(464)
											int tmp27 = data->readU8(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(464)
											int ch2 = tmp27;		HX_STACK_VAR(ch2,"ch2");
											HX_STACK_LINE(464)
											int tmp28 = (pos + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(464)
											int tmp29 = data->readU8(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(464)
											int ch3 = tmp29;		HX_STACK_VAR(ch3,"ch3");
											HX_STACK_LINE(464)
											int tmp30 = (pos + (int)3);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(464)
											int tmp31 = data->readU8(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(464)
											int ch4 = tmp31;		HX_STACK_VAR(ch4,"ch4");
											HX_STACK_LINE(464)
											int tmp32 = ch4;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(464)
											int tmp33 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(464)
											int tmp34 = (int(tmp32) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(464)
											int tmp35 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(464)
											int tmp36 = (int(tmp34) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(464)
											int tmp37 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(464)
											tmp19 = (int(tmp36) | int(tmp37));
										}
									}
									HX_STACK_LINE(464)
									int start_glyph = tmp19;		HX_STACK_VAR(start_glyph,"start_glyph");
									HX_STACK_LINE(465)
									bool tmp20 = (format == (int)12);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(465)
									if ((tmp20)){
										HX_STACK_LINE(466)
										int tmp21 = (start_glyph + unicode_codepoint);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(466)
										int tmp22 = start_char;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(466)
										int tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(466)
										return tmp23;
									}
									else{
										HX_STACK_LINE(468)
										int tmp21 = start_glyph;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(468)
										return tmp21;
									}
								}
							}
						}
						HX_STACK_LINE(471)
						return (int)0;
					}
				}
			}
		}
	}
	HX_STACK_LINE(474)
	{
		HX_STACK_LINE(474)
		bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(474)
		if ((tmp2)){
			HX_STACK_LINE(474)
			HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
		}
	}
	HX_STACK_LINE(475)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt_FindGlyphIndex,return )

Array< ::Dynamic > StbTruetype_obj::stbtt_GetCodepointShape( ::kha::graphics2::truetype::Stbtt_fontinfo info,int unicode_codepoint){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetCodepointShape",0x654c383c,"kha.graphics2.truetype.StbTruetype.stbtt_GetCodepointShape","kha/graphics2/truetype/StbTruetype.hx",478,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(unicode_codepoint,"unicode_codepoint")
	HX_STACK_LINE(479)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(479)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp1 = info;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	int tmp2 = unicode_codepoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(479)
	int tmp3 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_FindGlyphIndex(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(479)
	Array< ::Dynamic > tmp4 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphShape(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(479)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt_GetCodepointShape,return )

Void StbTruetype_obj::stbtt_setvertex( ::kha::graphics2::truetype::Stbtt_vertex v,int type,int x,int y,int cx,int cy){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_setvertex",0x3161958e,"kha.graphics2.truetype.StbTruetype.stbtt_setvertex","kha/graphics2/truetype/StbTruetype.hx",482,0x5d9e0de9)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_LINE(483)
		v->type = type;
		HX_STACK_LINE(484)
		v->x = x;
		HX_STACK_LINE(485)
		v->y = y;
		HX_STACK_LINE(486)
		v->cx = cx;
		HX_STACK_LINE(487)
		v->cy = cy;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(StbTruetype_obj,stbtt_setvertex,(void))

int StbTruetype_obj::stbtt__GetGlyfOffset( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph_index){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__GetGlyfOffset",0x4b91fab4,"kha.graphics2.truetype.StbTruetype.stbtt__GetGlyfOffset","kha/graphics2/truetype/StbTruetype.hx",490,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(glyph_index,"glyph_index")
	HX_STACK_LINE(491)
	int g1;		HX_STACK_VAR(g1,"g1");
	HX_STACK_LINE(491)
	int g2;		HX_STACK_VAR(g2,"g2");
	HX_STACK_LINE(493)
	bool tmp = (glyph_index >= info->numGlyphs);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(493)
	if ((tmp)){
		HX_STACK_LINE(493)
		return (int)-1;
	}
	HX_STACK_LINE(494)
	bool tmp1 = (info->indexToLocFormat >= (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(494)
	if ((tmp1)){
		HX_STACK_LINE(494)
		return (int)-1;
	}
	HX_STACK_LINE(496)
	bool tmp2 = (info->indexToLocFormat == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(496)
	if ((tmp2)){
		HX_STACK_LINE(497)
		int tmp3 = info->glyf;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(497)
			int tmp5 = info->loca;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(497)
			int tmp6 = (glyph_index * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(497)
			int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(497)
			int pos = tmp7;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(497)
			int tmp8 = pos;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(497)
			int tmp9 = p->readU8(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(497)
			int ch1 = tmp9;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(497)
			int tmp10 = (pos + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(497)
			int tmp11 = p->readU8(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(497)
			int ch2 = tmp11;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(497)
			int tmp12 = ch2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(497)
			int tmp13 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(497)
			tmp4 = (int(tmp12) | int(tmp13));
		}
		HX_STACK_LINE(497)
		int tmp5 = (tmp4 * (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		int tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		g1 = tmp6;
		HX_STACK_LINE(498)
		int tmp7 = info->glyf;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(498)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(498)
			int tmp9 = info->loca;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(498)
			int tmp10 = (glyph_index * (int)2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(498)
			int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(498)
			int tmp12 = (tmp11 + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			int pos = tmp12;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(498)
			int tmp13 = pos;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			int tmp14 = p->readU8(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			int ch1 = tmp14;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(498)
			int tmp15 = (pos + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(498)
			int tmp16 = p->readU8(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(498)
			int ch2 = tmp16;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(498)
			int tmp17 = ch2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(498)
			int tmp18 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(498)
			tmp8 = (int(tmp17) | int(tmp18));
		}
		HX_STACK_LINE(498)
		int tmp9 = (tmp8 * (int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(498)
		int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		g2 = tmp10;
	}
	else{
		HX_STACK_LINE(500)
		int tmp3 = info->glyf;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(500)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(500)
			int tmp5 = info->loca;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(500)
			int tmp6 = (glyph_index * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(500)
			int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(500)
			int pos = tmp7;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(500)
			{
				HX_STACK_LINE(500)
				int tmp8 = pos;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(500)
				int tmp9 = p->readU8(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(500)
				int ch1 = tmp9;		HX_STACK_VAR(ch1,"ch1");
				HX_STACK_LINE(500)
				int tmp10 = (pos + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(500)
				int tmp11 = p->readU8(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(500)
				int ch2 = tmp11;		HX_STACK_VAR(ch2,"ch2");
				HX_STACK_LINE(500)
				int tmp12 = (pos + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(500)
				int tmp13 = p->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(500)
				int ch3 = tmp13;		HX_STACK_VAR(ch3,"ch3");
				HX_STACK_LINE(500)
				int tmp14 = (pos + (int)3);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(500)
				int tmp15 = p->readU8(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(500)
				int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
				HX_STACK_LINE(500)
				int tmp16 = ch4;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(500)
				int tmp17 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(500)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(500)
				int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(500)
				int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(500)
				int tmp21 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(500)
				tmp4 = (int(tmp20) | int(tmp21));
			}
		}
		HX_STACK_LINE(500)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(500)
		g1 = tmp5;
		HX_STACK_LINE(501)
		int tmp6 = info->glyf;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(501)
			int tmp8 = info->loca;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(501)
			int tmp9 = (glyph_index * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(501)
			int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(501)
			int tmp11 = (tmp10 + (int)4);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(501)
			int pos = tmp11;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				int tmp12 = pos;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(501)
				int tmp13 = p->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(501)
				int ch1 = tmp13;		HX_STACK_VAR(ch1,"ch1");
				HX_STACK_LINE(501)
				int tmp14 = (pos + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(501)
				int tmp15 = p->readU8(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(501)
				int ch2 = tmp15;		HX_STACK_VAR(ch2,"ch2");
				HX_STACK_LINE(501)
				int tmp16 = (pos + (int)2);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(501)
				int tmp17 = p->readU8(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(501)
				int ch3 = tmp17;		HX_STACK_VAR(ch3,"ch3");
				HX_STACK_LINE(501)
				int tmp18 = (pos + (int)3);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(501)
				int tmp19 = p->readU8(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(501)
				int ch4 = tmp19;		HX_STACK_VAR(ch4,"ch4");
				HX_STACK_LINE(501)
				int tmp20 = ch4;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(501)
				int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(501)
				int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(501)
				int tmp23 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(501)
				int tmp24 = (int(tmp22) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(501)
				int tmp25 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(501)
				tmp7 = (int(tmp24) | int(tmp25));
			}
		}
		HX_STACK_LINE(501)
		int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(501)
		g2 = tmp8;
	}
	HX_STACK_LINE(504)
	bool tmp3 = (g1 == g2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(504)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(504)
	if ((tmp3)){
		HX_STACK_LINE(504)
		tmp4 = (int)-1;
	}
	else{
		HX_STACK_LINE(504)
		tmp4 = g1;
	}
	HX_STACK_LINE(504)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt__GetGlyfOffset,return )

bool StbTruetype_obj::stbtt_GetGlyphBox( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph_index,::kha::graphics2::truetype::Stbtt_temp_rect rect){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetGlyphBox",0x7a6db15d,"kha.graphics2.truetype.StbTruetype.stbtt_GetGlyphBox","kha/graphics2/truetype/StbTruetype.hx",507,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(glyph_index,"glyph_index")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(508)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(508)
	int tmp1 = glyph_index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(508)
	int tmp2 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__GetGlyfOffset(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(508)
	int g = tmp2;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(509)
	bool tmp3 = (g < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(509)
	if ((tmp3)){
		HX_STACK_LINE(509)
		return false;
	}
	HX_STACK_LINE(511)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(511)
	{
		HX_STACK_LINE(511)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(511)
		int tmp5 = (g + (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(511)
		int pos = tmp5;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(511)
		int tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(511)
		int tmp7 = p->readU8(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(511)
		int ch1 = tmp7;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(511)
		int tmp8 = (pos + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(511)
		int tmp9 = p->readU8(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(511)
		int ch2 = tmp9;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(511)
		int tmp10 = ch2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(511)
		int tmp11 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(511)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(511)
		int n = tmp12;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(511)
		int tmp13 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(511)
		bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(511)
		if ((tmp14)){
			HX_STACK_LINE(511)
			tmp4 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(511)
			tmp4 = n;
		}
	}
	HX_STACK_LINE(511)
	rect->x0 = tmp4;
	HX_STACK_LINE(512)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(512)
	{
		HX_STACK_LINE(512)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(512)
		int tmp6 = (g + (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(512)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(512)
		int tmp7 = pos;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(512)
		int tmp8 = p->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(512)
		int ch1 = tmp8;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(512)
		int tmp9 = (pos + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(512)
		int tmp10 = p->readU8(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(512)
		int ch2 = tmp10;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(512)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(512)
		int tmp12 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(512)
		int tmp13 = (int(tmp11) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(512)
		int n = tmp13;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(512)
		int tmp14 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(512)
		bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(512)
		if ((tmp15)){
			HX_STACK_LINE(512)
			tmp5 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(512)
			tmp5 = n;
		}
	}
	HX_STACK_LINE(512)
	rect->y0 = tmp5;
	HX_STACK_LINE(513)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(513)
		int tmp7 = (g + (int)6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(513)
		int pos = tmp7;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(513)
		int tmp8 = pos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(513)
		int tmp9 = p->readU8(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(513)
		int ch1 = tmp9;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(513)
		int tmp10 = (pos + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(513)
		int tmp11 = p->readU8(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(513)
		int ch2 = tmp11;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(513)
		int tmp12 = ch2;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(513)
		int tmp13 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(513)
		int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(513)
		int n = tmp14;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(513)
		int tmp15 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(513)
		bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(513)
		if ((tmp16)){
			HX_STACK_LINE(513)
			tmp6 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(513)
			tmp6 = n;
		}
	}
	HX_STACK_LINE(513)
	rect->x1 = tmp6;
	HX_STACK_LINE(514)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(514)
	{
		HX_STACK_LINE(514)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(514)
		int tmp8 = (g + (int)8);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(514)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(514)
		int tmp9 = pos;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(514)
		int tmp10 = p->readU8(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(514)
		int ch1 = tmp10;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(514)
		int tmp11 = (pos + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(514)
		int tmp12 = p->readU8(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(514)
		int ch2 = tmp12;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(514)
		int tmp13 = ch2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(514)
		int tmp14 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(514)
		int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(514)
		int n = tmp15;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(514)
		int tmp16 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(514)
		bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(514)
		if ((tmp17)){
			HX_STACK_LINE(514)
			tmp7 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(514)
			tmp7 = n;
		}
	}
	HX_STACK_LINE(514)
	rect->y1 = tmp7;
	HX_STACK_LINE(515)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StbTruetype_obj,stbtt_GetGlyphBox,return )

bool StbTruetype_obj::stbtt_GetCodepointBox( ::kha::graphics2::truetype::Stbtt_fontinfo info,int codepoint,::kha::graphics2::truetype::Stbtt_temp_rect rect){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetCodepointBox",0x10930666,"kha.graphics2.truetype.StbTruetype.stbtt_GetCodepointBox","kha/graphics2/truetype/StbTruetype.hx",518,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(codepoint,"codepoint")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(519)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(519)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp1 = info;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(519)
	int tmp2 = codepoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(519)
	int tmp3 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_FindGlyphIndex(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(519)
	::kha::graphics2::truetype::Stbtt_temp_rect tmp4 = rect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(519)
	bool tmp5 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphBox(tmp,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(519)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StbTruetype_obj,stbtt_GetCodepointBox,return )

bool StbTruetype_obj::stbtt_IsGlyphEmpty( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph_index){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_IsGlyphEmpty",0x18ddade3,"kha.graphics2.truetype.StbTruetype.stbtt_IsGlyphEmpty","kha/graphics2/truetype/StbTruetype.hx",522,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(glyph_index,"glyph_index")
	HX_STACK_LINE(523)
	int numberOfContours;		HX_STACK_VAR(numberOfContours,"numberOfContours");
	HX_STACK_LINE(524)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(524)
	int tmp1 = glyph_index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(524)
	int tmp2 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__GetGlyfOffset(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(524)
	int g = tmp2;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(525)
	bool tmp3 = (g < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(525)
	if ((tmp3)){
		HX_STACK_LINE(525)
		return true;
	}
	HX_STACK_LINE(526)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(526)
	{
		HX_STACK_LINE(526)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(526)
		int tmp5 = g;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(526)
		int tmp6 = p->readU8(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(526)
		int ch1 = tmp6;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(526)
		int tmp7 = (g + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(526)
		int tmp8 = p->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(526)
		int ch2 = tmp8;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(526)
		int tmp9 = ch2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(526)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(526)
		int tmp11 = (int(tmp9) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(526)
		int n = tmp11;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(526)
		int tmp12 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(526)
		bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(526)
		if ((tmp13)){
			HX_STACK_LINE(526)
			tmp4 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(526)
			tmp4 = n;
		}
	}
	HX_STACK_LINE(526)
	numberOfContours = tmp4;
	HX_STACK_LINE(527)
	bool tmp5 = (numberOfContours == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(527)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt_IsGlyphEmpty,return )

int StbTruetype_obj::stbtt__close_shape( Array< ::Dynamic > vertices,int num_vertices,bool was_off,bool start_off,int sx,int sy,int scx,int scy,int cx,int cy){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__close_shape",0xb4462613,"kha.graphics2.truetype.StbTruetype.stbtt__close_shape","kha/graphics2/truetype/StbTruetype.hx",531,0x5d9e0de9)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(num_vertices,"num_vertices")
	HX_STACK_ARG(was_off,"was_off")
	HX_STACK_ARG(start_off,"start_off")
	HX_STACK_ARG(sx,"sx")
	HX_STACK_ARG(sy,"sy")
	HX_STACK_ARG(scx,"scx")
	HX_STACK_ARG(scy,"scy")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_LINE(532)
	bool tmp = start_off;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(532)
	if ((tmp)){
		HX_STACK_LINE(533)
		bool tmp1 = was_off;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(533)
		if ((tmp1)){
			HX_STACK_LINE(534)
			::kha::graphics2::truetype::Stbtt_vertex tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(534)
			{
				HX_STACK_LINE(534)
				int tmp3 = (num_vertices)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(534)
				int index = tmp3;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(534)
				int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(534)
				::kha::graphics2::truetype::Stbtt_vertex tmp5 = vertices->__unsafe_get(tmp4).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(534)
				tmp2 = tmp5;
			}
			HX_STACK_LINE(534)
			int tmp3 = (cx + scx);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(534)
			int tmp4 = (int(tmp3) >> int((int)1));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(534)
			int tmp5 = (cy + scy);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(534)
			int tmp6 = (int(tmp5) >> int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(534)
			int tmp7 = cx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(534)
			int tmp8 = cy;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(534)
			::kha::graphics2::truetype::StbTruetype_obj::stbtt_setvertex(tmp2,(int)3,tmp4,tmp6,tmp7,tmp8);
		}
		HX_STACK_LINE(535)
		::kha::graphics2::truetype::Stbtt_vertex tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(535)
		{
			HX_STACK_LINE(535)
			int tmp3 = (num_vertices)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(535)
			int index = tmp3;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(535)
			int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(535)
			::kha::graphics2::truetype::Stbtt_vertex tmp5 = vertices->__unsafe_get(tmp4).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(535)
			tmp2 = tmp5;
		}
		HX_STACK_LINE(535)
		int tmp3 = sx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(535)
		int tmp4 = sy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(535)
		int tmp5 = scx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(535)
		int tmp6 = scy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(535)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt_setvertex(tmp2,(int)3,tmp3,tmp4,tmp5,tmp6);
	}
	else{
		HX_STACK_LINE(537)
		bool tmp1 = was_off;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(537)
		if ((tmp1)){
			HX_STACK_LINE(538)
			::kha::graphics2::truetype::Stbtt_vertex tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(538)
			{
				HX_STACK_LINE(538)
				int tmp3 = (num_vertices)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(538)
				int index = tmp3;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(538)
				int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(538)
				::kha::graphics2::truetype::Stbtt_vertex tmp5 = vertices->__unsafe_get(tmp4).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(538)
				tmp2 = tmp5;
			}
			HX_STACK_LINE(538)
			int tmp3 = sx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(538)
			int tmp4 = sy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(538)
			int tmp5 = cx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(538)
			int tmp6 = cy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(538)
			::kha::graphics2::truetype::StbTruetype_obj::stbtt_setvertex(tmp2,(int)3,tmp3,tmp4,tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(540)
			::kha::graphics2::truetype::Stbtt_vertex tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				int tmp3 = (num_vertices)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(540)
				int index = tmp3;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(540)
				int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(540)
				::kha::graphics2::truetype::Stbtt_vertex tmp5 = vertices->__unsafe_get(tmp4).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(540)
				tmp2 = tmp5;
			}
			HX_STACK_LINE(540)
			int tmp3 = sx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(540)
			int tmp4 = sy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(540)
			::kha::graphics2::truetype::StbTruetype_obj::stbtt_setvertex(tmp2,(int)2,tmp3,tmp4,(int)0,(int)0);
		}
	}
	HX_STACK_LINE(542)
	int tmp1 = num_vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(542)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(StbTruetype_obj,stbtt__close_shape,return )

Void StbTruetype_obj::copyVertices( Array< ::Dynamic > from,Array< ::Dynamic > to,int offset,int count){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","copyVertices",0xec2e2f68,"kha.graphics2.truetype.StbTruetype.copyVertices","kha/graphics2/truetype/StbTruetype.hx",546,0x5d9e0de9)
		HX_STACK_ARG(from,"from")
		HX_STACK_ARG(to,"to")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(546)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(546)
		while((true)){
			HX_STACK_LINE(546)
			bool tmp = (_g < count);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(546)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(546)
			if ((tmp1)){
				HX_STACK_LINE(546)
				break;
			}
			HX_STACK_LINE(546)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(546)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(547)
				int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(547)
				::kha::graphics2::truetype::Stbtt_vertex tmp4 = from->__unsafe_get(tmp3).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(547)
				::kha::graphics2::truetype::Stbtt_vertex val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(547)
				int tmp5 = (offset + i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(547)
				::kha::graphics2::truetype::Stbtt_vertex tmp6 = val;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(547)
				::kha::graphics2::truetype::Stbtt_vertex tmp7 = to->__unsafe_set(tmp5,tmp6).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(547)
				tmp7;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(StbTruetype_obj,copyVertices,(void))

Array< ::Dynamic > StbTruetype_obj::stbtt_GetGlyphShape( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph_index){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetGlyphShape",0xfb60cef3,"kha.graphics2.truetype.StbTruetype.stbtt_GetGlyphShape","kha/graphics2/truetype/StbTruetype.hx",551,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(glyph_index,"glyph_index")
	HX_STACK_LINE(552)
	int numberOfContours;		HX_STACK_VAR(numberOfContours,"numberOfContours");
	HX_STACK_LINE(553)
	::kha::Blob endPtsOfContours;		HX_STACK_VAR(endPtsOfContours,"endPtsOfContours");
	HX_STACK_LINE(554)
	::kha::Blob data = info->data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(555)
	Array< ::Dynamic > vertices = null();		HX_STACK_VAR(vertices,"vertices");
	HX_STACK_LINE(556)
	int num_vertices = (int)0;		HX_STACK_VAR(num_vertices,"num_vertices");
	HX_STACK_LINE(557)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(557)
	int tmp1 = glyph_index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(557)
	int tmp2 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__GetGlyfOffset(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(557)
	int g = tmp2;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(559)
	bool tmp3 = (g < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(559)
	if ((tmp3)){
		HX_STACK_LINE(559)
		return null();
	}
	HX_STACK_LINE(561)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(561)
	{
		HX_STACK_LINE(561)
		int tmp5 = g;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(561)
		int tmp6 = data->readU8(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(561)
		int ch1 = tmp6;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(561)
		int tmp7 = (g + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(561)
		int tmp8 = data->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(561)
		int ch2 = tmp8;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(561)
		int tmp9 = ch2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(561)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(561)
		int tmp11 = (int(tmp9) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(561)
		int n = tmp11;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(561)
		int tmp12 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(561)
		bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(561)
		if ((tmp13)){
			HX_STACK_LINE(561)
			tmp4 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(561)
			tmp4 = n;
		}
	}
	HX_STACK_LINE(561)
	numberOfContours = tmp4;
	HX_STACK_LINE(563)
	bool tmp5 = (numberOfContours > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(563)
	if ((tmp5)){
		HX_STACK_LINE(564)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(564)
		int flagcount;		HX_STACK_VAR(flagcount,"flagcount");
		HX_STACK_LINE(565)
		int ins;		HX_STACK_VAR(ins,"ins");
		HX_STACK_LINE(565)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(565)
		int m;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(565)
		int n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(565)
		int next_move = (int)0;		HX_STACK_VAR(next_move,"next_move");
		HX_STACK_LINE(565)
		int off = (int)0;		HX_STACK_VAR(off,"off");
		HX_STACK_LINE(566)
		bool was_off = false;		HX_STACK_VAR(was_off,"was_off");
		HX_STACK_LINE(567)
		bool start_off = false;		HX_STACK_VAR(start_off,"start_off");
		HX_STACK_LINE(568)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(568)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(568)
		int cx;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(568)
		int cy;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(568)
		int sx;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(568)
		int sy;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(568)
		int scx;		HX_STACK_VAR(scx,"scx");
		HX_STACK_LINE(568)
		int scy;		HX_STACK_VAR(scy,"scy");
		HX_STACK_LINE(569)
		::kha::Blob points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(570)
		int pointsIndex = (int)0;		HX_STACK_VAR(pointsIndex,"pointsIndex");
		HX_STACK_LINE(571)
		int tmp6 = (g + (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(571)
		int tmp7 = data->get_length();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(571)
		int tmp8 = (g + (int)10);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(571)
		int tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(571)
		::kha::Blob tmp10 = data->sub(tmp6,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(571)
		endPtsOfContours = tmp10;
		HX_STACK_LINE(572)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(572)
		{
			HX_STACK_LINE(572)
			int tmp12 = (g + (int)10);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(572)
			int tmp13 = (numberOfContours * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(572)
			int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(572)
			int pos = tmp14;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(572)
			int tmp15 = pos;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(572)
			int tmp16 = data->readU8(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(572)
			int ch1 = tmp16;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(572)
			int tmp17 = (pos + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(572)
			int tmp18 = data->readU8(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(572)
			int ch2 = tmp18;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(572)
			int tmp19 = ch2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(572)
			int tmp20 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(572)
			tmp11 = (int(tmp19) | int(tmp20));
		}
		HX_STACK_LINE(572)
		ins = tmp11;
		HX_STACK_LINE(573)
		int tmp12 = (g + (int)10);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(573)
		int tmp13 = (numberOfContours * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(573)
		int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(573)
		int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(573)
		int tmp16 = ins;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(573)
		int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(573)
		int tmp18 = data->get_length();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(573)
		int tmp19 = (g + (int)10);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(573)
		int tmp20 = (numberOfContours * (int)2);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(573)
		int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(573)
		int tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(573)
		int tmp23 = ins;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(573)
		int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(573)
		int tmp25 = (tmp18 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(573)
		::kha::Blob tmp26 = data->sub(tmp17,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(573)
		points = tmp26;
		HX_STACK_LINE(575)
		int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(575)
		{
			HX_STACK_LINE(575)
			int tmp28 = (numberOfContours * (int)2);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(575)
			int tmp29 = (tmp28 - (int)2);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(575)
			int pos = tmp29;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(575)
			int tmp30 = pos;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(575)
			int tmp31 = endPtsOfContours->readU8(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(575)
			int ch1 = tmp31;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(575)
			int tmp32 = (pos + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(575)
			int tmp33 = endPtsOfContours->readU8(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(575)
			int ch2 = tmp33;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(575)
			int tmp34 = ch2;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(575)
			int tmp35 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(575)
			tmp27 = (int(tmp34) | int(tmp35));
		}
		HX_STACK_LINE(575)
		int tmp28 = ((int)1 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(575)
		n = tmp28;
		HX_STACK_LINE(577)
		int tmp29 = n;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(577)
		int tmp30 = ((int)2 * numberOfContours);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(577)
		int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(577)
		m = tmp31;
		HX_STACK_LINE(578)
		Array< ::Dynamic > tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(578)
			Array< ::Dynamic > tmp33 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(578)
			this1 = tmp33;
			HX_STACK_LINE(578)
			int tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(578)
			this1->__SetSizeExact(tmp34);
			HX_STACK_LINE(578)
			tmp32 = this1;
		}
		HX_STACK_LINE(578)
		vertices = tmp32;
		HX_STACK_LINE(579)
		bool tmp33 = (vertices == null());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(579)
		if ((tmp33)){
			HX_STACK_LINE(580)
			return null();
		}
		else{
			HX_STACK_LINE(582)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(582)
			int tmp34 = vertices->length;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(582)
			int _g = tmp34;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(582)
			while((true)){
				HX_STACK_LINE(582)
				bool tmp35 = (_g1 < _g);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(582)
				bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(582)
				if ((tmp36)){
					HX_STACK_LINE(582)
					break;
				}
				HX_STACK_LINE(582)
				int tmp37 = (_g1)++;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(582)
				int i = tmp37;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					::kha::graphics2::truetype::Stbtt_vertex val = ::kha::graphics2::truetype::Stbtt_vertex_obj::__new();		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(583)
					int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(583)
					::kha::graphics2::truetype::Stbtt_vertex tmp39 = val;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(583)
					::kha::graphics2::truetype::Stbtt_vertex tmp40 = vertices->__unsafe_set(tmp38,tmp39).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(583)
					tmp40;
				}
			}
		}
		HX_STACK_LINE(587)
		next_move = (int)0;
		HX_STACK_LINE(588)
		flagcount = (int)0;
		HX_STACK_LINE(594)
		int tmp34 = (m - n);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(594)
		off = tmp34;
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(598)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(598)
			while((true)){
				HX_STACK_LINE(598)
				bool tmp35 = (_g < n);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(598)
				bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(598)
				if ((tmp36)){
					HX_STACK_LINE(598)
					break;
				}
				HX_STACK_LINE(598)
				int tmp37 = (_g)++;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(598)
				int i = tmp37;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(599)
				bool tmp38 = (flagcount == (int)0);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(599)
				if ((tmp38)){
					HX_STACK_LINE(600)
					int tmp39 = (pointsIndex)++;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(600)
					int tmp40 = points->readU8(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(600)
					flags = tmp40;
					HX_STACK_LINE(601)
					int tmp41 = (int(flags) & int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(601)
					bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(601)
					if ((tmp42)){
						HX_STACK_LINE(602)
						int tmp43 = (pointsIndex)++;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(602)
						int tmp44 = points->readU8(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(602)
						flagcount = tmp44;
					}
				}
				else{
					HX_STACK_LINE(604)
					--(flagcount);
				}
				HX_STACK_LINE(605)
				int tmp39 = (off + i);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(605)
				::kha::graphics2::truetype::Stbtt_vertex tmp40 = vertices->__unsafe_get(tmp39).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(605)
				tmp40->type = flags;
			}
		}
		HX_STACK_LINE(609)
		x = (int)0;
		HX_STACK_LINE(610)
		{
			HX_STACK_LINE(610)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(610)
			while((true)){
				HX_STACK_LINE(610)
				bool tmp35 = (_g < n);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(610)
				bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(610)
				if ((tmp36)){
					HX_STACK_LINE(610)
					break;
				}
				HX_STACK_LINE(610)
				int tmp37 = (_g)++;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(610)
				int i = tmp37;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(611)
				int tmp38 = (off + i);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(611)
				::kha::graphics2::truetype::Stbtt_vertex tmp39 = vertices->__unsafe_get(tmp38).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(611)
				int tmp40 = tmp39->type;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(611)
				flags = tmp40;
				HX_STACK_LINE(612)
				int tmp41 = (int(flags) & int((int)2));		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(612)
				bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(612)
				if ((tmp42)){
					HX_STACK_LINE(613)
					int tmp43 = (pointsIndex)++;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(613)
					int tmp44 = points->readU8(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(613)
					int dx = tmp44;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(614)
					int tmp45 = (int(flags) & int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(614)
					bool tmp46 = (tmp45 != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(614)
					int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(614)
					if ((tmp46)){
						HX_STACK_LINE(614)
						tmp47 = dx;
					}
					else{
						HX_STACK_LINE(614)
						int tmp48 = dx;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(614)
						tmp47 = -(tmp48);
					}
					HX_STACK_LINE(614)
					hx::AddEq(x,tmp47);
				}
				else{
					HX_STACK_LINE(616)
					int tmp43 = (int(flags) & int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(616)
					bool tmp44 = (tmp43 == (int)0);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(616)
					if ((tmp44)){
						HX_STACK_LINE(617)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(618)
						int tmp45 = pointsIndex;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(618)
						int tmp46 = points->readU8(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(618)
						int ch1 = tmp46;		HX_STACK_VAR(ch1,"ch1");
						HX_STACK_LINE(619)
						int tmp47 = (pointsIndex + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(619)
						int tmp48 = points->readU8(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(619)
						int ch2 = tmp48;		HX_STACK_VAR(ch2,"ch2");
						HX_STACK_LINE(620)
						int tmp49 = ch2;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(620)
						int tmp50 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(620)
						int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(620)
						int n1 = tmp51;		HX_STACK_VAR(n1,"n1");
						HX_STACK_LINE(621)
						int tmp52 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(621)
						bool tmp53 = (tmp52 != (int)0);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(621)
						if ((tmp53)){
							HX_STACK_LINE(622)
							int tmp54 = (n1 - (int)65536);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(622)
							value = tmp54;
						}
						else{
							HX_STACK_LINE(624)
							value = n1;
						}
						HX_STACK_LINE(625)
						int tmp54 = (x + value);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(625)
						x = tmp54;
						HX_STACK_LINE(626)
						hx::AddEq(pointsIndex,(int)2);
					}
				}
				HX_STACK_LINE(629)
				int tmp43 = (off + i);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(629)
				::kha::graphics2::truetype::Stbtt_vertex tmp44 = vertices->__unsafe_get(tmp43).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(629)
				tmp44->x = x;
			}
		}
		HX_STACK_LINE(633)
		y = (int)0;
		HX_STACK_LINE(634)
		{
			HX_STACK_LINE(634)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(634)
			while((true)){
				HX_STACK_LINE(634)
				bool tmp35 = (_g < n);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(634)
				bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(634)
				if ((tmp36)){
					HX_STACK_LINE(634)
					break;
				}
				HX_STACK_LINE(634)
				int tmp37 = (_g)++;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(634)
				int i = tmp37;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(635)
				int tmp38 = (off + i);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(635)
				::kha::graphics2::truetype::Stbtt_vertex tmp39 = vertices->__unsafe_get(tmp38).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(635)
				int tmp40 = tmp39->type;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(635)
				flags = tmp40;
				HX_STACK_LINE(636)
				int tmp41 = (int(flags) & int((int)4));		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(636)
				bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(636)
				if ((tmp42)){
					HX_STACK_LINE(637)
					int tmp43 = (pointsIndex)++;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(637)
					int tmp44 = points->readU8(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(637)
					int dy = tmp44;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(638)
					int tmp45 = (int(flags) & int((int)32));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(638)
					bool tmp46 = (tmp45 != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(638)
					int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(638)
					if ((tmp46)){
						HX_STACK_LINE(638)
						tmp47 = dy;
					}
					else{
						HX_STACK_LINE(638)
						int tmp48 = dy;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(638)
						tmp47 = -(tmp48);
					}
					HX_STACK_LINE(638)
					hx::AddEq(y,tmp47);
				}
				else{
					HX_STACK_LINE(640)
					int tmp43 = (int(flags) & int((int)32));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(640)
					bool tmp44 = (tmp43 == (int)0);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(640)
					if ((tmp44)){
						HX_STACK_LINE(641)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(642)
						int tmp45 = pointsIndex;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(642)
						int tmp46 = points->readU8(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(642)
						int ch1 = tmp46;		HX_STACK_VAR(ch1,"ch1");
						HX_STACK_LINE(643)
						int tmp47 = (pointsIndex + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(643)
						int tmp48 = points->readU8(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(643)
						int ch2 = tmp48;		HX_STACK_VAR(ch2,"ch2");
						HX_STACK_LINE(644)
						int tmp49 = ch2;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(644)
						int tmp50 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(644)
						int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(644)
						int n1 = tmp51;		HX_STACK_VAR(n1,"n1");
						HX_STACK_LINE(645)
						int tmp52 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(645)
						bool tmp53 = (tmp52 != (int)0);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(645)
						if ((tmp53)){
							HX_STACK_LINE(646)
							int tmp54 = (n1 - (int)65536);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(646)
							value = tmp54;
						}
						else{
							HX_STACK_LINE(648)
							value = n1;
						}
						HX_STACK_LINE(649)
						int tmp54 = (y + value);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(649)
						y = tmp54;
						HX_STACK_LINE(650)
						hx::AddEq(pointsIndex,(int)2);
					}
				}
				HX_STACK_LINE(653)
				int tmp43 = (off + i);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(653)
				::kha::graphics2::truetype::Stbtt_vertex tmp44 = vertices->__unsafe_get(tmp43).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(653)
				tmp44->y = y;
			}
		}
		HX_STACK_LINE(657)
		num_vertices = (int)0;
		HX_STACK_LINE(658)
		int tmp35 = scy = (int)0;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(658)
		int tmp36 = scx = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(658)
		int tmp37 = cy = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(658)
		int tmp38 = cx = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(658)
		int tmp39 = sy = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(658)
		sx = tmp39;
		HX_STACK_LINE(659)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(660)
		while((true)){
			HX_STACK_LINE(660)
			bool tmp40 = (i < n);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(660)
			bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(660)
			if ((tmp41)){
				HX_STACK_LINE(660)
				break;
			}
			HX_STACK_LINE(661)
			int tmp42 = (off + i);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(661)
			::kha::graphics2::truetype::Stbtt_vertex tmp43 = vertices->__unsafe_get(tmp42).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(661)
			int tmp44 = tmp43->type;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(661)
			flags = tmp44;
			HX_STACK_LINE(662)
			int tmp45 = (off + i);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(662)
			::kha::graphics2::truetype::Stbtt_vertex tmp46 = vertices->__unsafe_get(tmp45).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(662)
			int tmp47 = tmp46->x;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(662)
			x = tmp47;
			HX_STACK_LINE(663)
			int tmp48 = (off + i);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(663)
			::kha::graphics2::truetype::Stbtt_vertex tmp49 = vertices->__unsafe_get(tmp48).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(663)
			int tmp50 = tmp49->y;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(663)
			y = tmp50;
			HX_STACK_LINE(665)
			bool tmp51 = (next_move == i);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(665)
			if ((tmp51)){
				HX_STACK_LINE(666)
				bool tmp52 = (i != (int)0);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(666)
				if ((tmp52)){
					HX_STACK_LINE(667)
					Array< ::Dynamic > tmp53 = vertices;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(667)
					int tmp54 = num_vertices;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(667)
					bool tmp55 = was_off;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(667)
					bool tmp56 = start_off;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(667)
					int tmp57 = sx;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(667)
					int tmp58 = sy;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(667)
					int tmp59 = scx;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(667)
					int tmp60 = scy;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(667)
					int tmp61 = cx;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(667)
					int tmp62 = cy;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(667)
					int tmp63 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__close_shape(tmp53,tmp54,tmp55,tmp56,tmp57,tmp58,tmp59,tmp60,tmp61,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(667)
					num_vertices = tmp63;
				}
				HX_STACK_LINE(670)
				int tmp53 = (int(flags) & int((int)1));		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(670)
				bool tmp54 = (tmp53 == (int)0);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(670)
				start_off = tmp54;
				HX_STACK_LINE(671)
				bool tmp55 = start_off;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(671)
				if ((tmp55)){
					HX_STACK_LINE(674)
					scx = x;
					HX_STACK_LINE(675)
					scy = y;
					HX_STACK_LINE(676)
					int tmp56 = (off + i);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(676)
					int tmp57 = (tmp56 + (int)1);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(676)
					::kha::graphics2::truetype::Stbtt_vertex tmp58 = vertices->__unsafe_get(tmp57).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(676)
					int tmp59 = tmp58->type;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(676)
					int tmp60 = (int(tmp59) & int((int)1));		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(676)
					bool tmp61 = (tmp60 == (int)0);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(676)
					if ((tmp61)){
						HX_STACK_LINE(678)
						int tmp62 = x;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(678)
						int tmp63 = (off + i);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(678)
						int tmp64 = (tmp63 + (int)1);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(678)
						::kha::graphics2::truetype::Stbtt_vertex tmp65 = vertices->__unsafe_get(tmp64).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(678)
						int tmp66 = tmp65->x;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(678)
						int tmp67 = (tmp62 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(678)
						int tmp68 = (int(tmp67) >> int((int)1));		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(678)
						sx = tmp68;
						HX_STACK_LINE(679)
						int tmp69 = y;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(679)
						int tmp70 = (off + i);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(679)
						int tmp71 = (tmp70 + (int)1);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(679)
						::kha::graphics2::truetype::Stbtt_vertex tmp72 = vertices->__unsafe_get(tmp71).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(679)
						int tmp73 = tmp72->y;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(679)
						int tmp74 = (tmp69 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(679)
						int tmp75 = (int(tmp74) >> int((int)1));		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(679)
						sy = tmp75;
					}
					else{
						HX_STACK_LINE(682)
						int tmp62 = (off + i);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(682)
						int tmp63 = (tmp62 + (int)1);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(682)
						::kha::graphics2::truetype::Stbtt_vertex tmp64 = vertices->__unsafe_get(tmp63).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(682)
						int tmp65 = tmp64->x;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(682)
						sx = tmp65;
						HX_STACK_LINE(683)
						int tmp66 = (off + i);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(683)
						int tmp67 = (tmp66 + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(683)
						::kha::graphics2::truetype::Stbtt_vertex tmp68 = vertices->__unsafe_get(tmp67).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(683)
						int tmp69 = tmp68->y;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(683)
						sy = tmp69;
						HX_STACK_LINE(684)
						++(i);
					}
				}
				else{
					HX_STACK_LINE(687)
					sx = x;
					HX_STACK_LINE(688)
					sy = y;
				}
				HX_STACK_LINE(690)
				::kha::graphics2::truetype::Stbtt_vertex tmp56;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(690)
				{
					HX_STACK_LINE(690)
					int tmp57 = (num_vertices)++;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(690)
					int index = tmp57;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(690)
					int tmp58 = index;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(690)
					::kha::graphics2::truetype::Stbtt_vertex tmp59 = vertices->__unsafe_get(tmp58).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(690)
					tmp56 = tmp59;
				}
				HX_STACK_LINE(690)
				int tmp57 = sx;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(690)
				int tmp58 = sy;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(690)
				::kha::graphics2::truetype::StbTruetype_obj::stbtt_setvertex(tmp56,(int)1,tmp57,tmp58,(int)0,(int)0);
				HX_STACK_LINE(691)
				was_off = false;
				HX_STACK_LINE(692)
				int tmp59;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(692)
				{
					HX_STACK_LINE(692)
					int tmp60 = (j * (int)2);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(692)
					int pos = tmp60;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(692)
					int tmp61 = pos;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(692)
					int tmp62 = endPtsOfContours->readU8(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(692)
					int ch1 = tmp62;		HX_STACK_VAR(ch1,"ch1");
					HX_STACK_LINE(692)
					int tmp63 = (pos + (int)1);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(692)
					int tmp64 = endPtsOfContours->readU8(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(692)
					int ch2 = tmp64;		HX_STACK_VAR(ch2,"ch2");
					HX_STACK_LINE(692)
					int tmp65 = ch2;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(692)
					int tmp66 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(692)
					tmp59 = (int(tmp65) | int(tmp66));
				}
				HX_STACK_LINE(692)
				int tmp60 = ((int)1 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(692)
				next_move = tmp60;
				HX_STACK_LINE(693)
				++(j);
			}
			else{
				HX_STACK_LINE(695)
				int tmp52 = (int(flags) & int((int)1));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(695)
				bool tmp53 = (tmp52 == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(695)
				if ((tmp53)){
					HX_STACK_LINE(696)
					bool tmp54 = was_off;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(696)
					if ((tmp54)){
						HX_STACK_LINE(697)
						::kha::graphics2::truetype::Stbtt_vertex tmp55;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(697)
						{
							HX_STACK_LINE(697)
							int tmp56 = (num_vertices)++;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(697)
							int index = tmp56;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(697)
							int tmp57 = index;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(697)
							::kha::graphics2::truetype::Stbtt_vertex tmp58 = vertices->__unsafe_get(tmp57).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(697)
							tmp55 = tmp58;
						}
						HX_STACK_LINE(697)
						int tmp56 = (cx + x);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(697)
						int tmp57 = (int(tmp56) >> int((int)1));		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(697)
						int tmp58 = (cy + y);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(697)
						int tmp59 = (int(tmp58) >> int((int)1));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(697)
						int tmp60 = cx;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(697)
						int tmp61 = cy;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(697)
						::kha::graphics2::truetype::StbTruetype_obj::stbtt_setvertex(tmp55,(int)3,tmp57,tmp59,tmp60,tmp61);
					}
					HX_STACK_LINE(698)
					cx = x;
					HX_STACK_LINE(699)
					cy = y;
					HX_STACK_LINE(700)
					was_off = true;
				}
				else{
					HX_STACK_LINE(702)
					bool tmp54 = was_off;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(702)
					if ((tmp54)){
						HX_STACK_LINE(703)
						::kha::graphics2::truetype::Stbtt_vertex tmp55;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(703)
						{
							HX_STACK_LINE(703)
							int tmp56 = (num_vertices)++;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(703)
							int index = tmp56;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(703)
							int tmp57 = index;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(703)
							::kha::graphics2::truetype::Stbtt_vertex tmp58 = vertices->__unsafe_get(tmp57).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(703)
							tmp55 = tmp58;
						}
						HX_STACK_LINE(703)
						int tmp56 = x;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(703)
						int tmp57 = y;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(703)
						int tmp58 = cx;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(703)
						int tmp59 = cy;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(703)
						::kha::graphics2::truetype::StbTruetype_obj::stbtt_setvertex(tmp55,(int)3,tmp56,tmp57,tmp58,tmp59);
					}
					else{
						HX_STACK_LINE(705)
						::kha::graphics2::truetype::Stbtt_vertex tmp55;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(705)
						{
							HX_STACK_LINE(705)
							int tmp56 = (num_vertices)++;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(705)
							int index = tmp56;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(705)
							int tmp57 = index;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(705)
							::kha::graphics2::truetype::Stbtt_vertex tmp58 = vertices->__unsafe_get(tmp57).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(705)
							tmp55 = tmp58;
						}
						HX_STACK_LINE(705)
						int tmp56 = x;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(705)
						int tmp57 = y;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(705)
						::kha::graphics2::truetype::StbTruetype_obj::stbtt_setvertex(tmp55,(int)2,tmp56,tmp57,(int)0,(int)0);
					}
					HX_STACK_LINE(706)
					was_off = false;
				}
			}
			HX_STACK_LINE(709)
			++(i);
		}
		HX_STACK_LINE(711)
		Array< ::Dynamic > tmp40 = vertices;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(711)
		int tmp41 = num_vertices;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(711)
		bool tmp42 = was_off;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(711)
		bool tmp43 = start_off;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(711)
		int tmp44 = sx;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(711)
		int tmp45 = sy;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(711)
		int tmp46 = scx;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(711)
		int tmp47 = scy;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(711)
		int tmp48 = cx;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(711)
		int tmp49 = cy;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(711)
		int tmp50 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__close_shape(tmp40,tmp41,tmp42,tmp43,tmp44,tmp45,tmp46,tmp47,tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(711)
		num_vertices = tmp50;
	}
	else{
		HX_STACK_LINE(712)
		bool tmp6 = (numberOfContours == (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(712)
		if ((tmp6)){
			HX_STACK_LINE(714)
			int more = (int)1;		HX_STACK_VAR(more,"more");
			HX_STACK_LINE(715)
			int tmp7 = (g + (int)10);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(715)
			int tmp8 = data->get_length();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(715)
			int tmp9 = (g + (int)10);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(715)
			int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(715)
			::kha::Blob tmp11 = data->sub(tmp7,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(715)
			::kha::Blob comp = tmp11;		HX_STACK_VAR(comp,"comp");
			HX_STACK_LINE(716)
			int compIndex = (int)0;		HX_STACK_VAR(compIndex,"compIndex");
			HX_STACK_LINE(717)
			num_vertices = (int)0;
			HX_STACK_LINE(718)
			vertices = null();
			HX_STACK_LINE(719)
			while((true)){
				HX_STACK_LINE(719)
				bool tmp12 = (more != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(719)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(719)
				if ((tmp13)){
					HX_STACK_LINE(719)
					break;
				}
				HX_STACK_LINE(720)
				int flags;		HX_STACK_VAR(flags,"flags");
				HX_STACK_LINE(720)
				int gidx;		HX_STACK_VAR(gidx,"gidx");
				HX_STACK_LINE(721)
				int comp_num_verts = (int)0;		HX_STACK_VAR(comp_num_verts,"comp_num_verts");
				HX_STACK_LINE(721)
				int i;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(722)
				Array< ::Dynamic > comp_verts = null();		HX_STACK_VAR(comp_verts,"comp_verts");
				HX_STACK_LINE(723)
				Array< ::Dynamic > tmp14 = null();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(724)
				Float mtx0 = (int)1;		HX_STACK_VAR(mtx0,"mtx0");
				HX_STACK_LINE(725)
				Float mtx1 = (int)0;		HX_STACK_VAR(mtx1,"mtx1");
				HX_STACK_LINE(726)
				Float mtx2 = (int)0;		HX_STACK_VAR(mtx2,"mtx2");
				HX_STACK_LINE(727)
				Float mtx3 = (int)1;		HX_STACK_VAR(mtx3,"mtx3");
				HX_STACK_LINE(728)
				Float mtx4 = (int)0;		HX_STACK_VAR(mtx4,"mtx4");
				HX_STACK_LINE(729)
				Float mtx5 = (int)0;		HX_STACK_VAR(mtx5,"mtx5");
				HX_STACK_LINE(730)
				Float m;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(730)
				Float n;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(732)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(732)
				{
					HX_STACK_LINE(732)
					int tmp16 = compIndex;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(732)
					int tmp17 = comp->readU8(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(732)
					int ch1 = tmp17;		HX_STACK_VAR(ch1,"ch1");
					HX_STACK_LINE(732)
					int tmp18 = (compIndex + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(732)
					int tmp19 = comp->readU8(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(732)
					int ch2 = tmp19;		HX_STACK_VAR(ch2,"ch2");
					HX_STACK_LINE(732)
					int tmp20 = ch2;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(732)
					int tmp21 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(732)
					int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(732)
					int n1 = tmp22;		HX_STACK_VAR(n1,"n1");
					HX_STACK_LINE(732)
					int tmp23 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(732)
					bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(732)
					if ((tmp24)){
						HX_STACK_LINE(732)
						tmp15 = (n1 - (int)65536);
					}
					else{
						HX_STACK_LINE(732)
						tmp15 = n1;
					}
				}
				HX_STACK_LINE(732)
				flags = tmp15;
				HX_STACK_LINE(732)
				hx::AddEq(compIndex,(int)2);
				HX_STACK_LINE(733)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(733)
				{
					HX_STACK_LINE(733)
					int tmp17 = compIndex;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(733)
					int tmp18 = comp->readU8(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(733)
					int ch1 = tmp18;		HX_STACK_VAR(ch1,"ch1");
					HX_STACK_LINE(733)
					int tmp19 = (compIndex + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(733)
					int tmp20 = comp->readU8(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(733)
					int ch2 = tmp20;		HX_STACK_VAR(ch2,"ch2");
					HX_STACK_LINE(733)
					int tmp21 = ch2;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(733)
					int tmp22 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(733)
					int tmp23 = (int(tmp21) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(733)
					int n1 = tmp23;		HX_STACK_VAR(n1,"n1");
					HX_STACK_LINE(733)
					int tmp24 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(733)
					bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(733)
					if ((tmp25)){
						HX_STACK_LINE(733)
						tmp16 = (n1 - (int)65536);
					}
					else{
						HX_STACK_LINE(733)
						tmp16 = n1;
					}
				}
				HX_STACK_LINE(733)
				gidx = tmp16;
				HX_STACK_LINE(733)
				hx::AddEq(compIndex,(int)2);
				HX_STACK_LINE(735)
				int tmp17 = (int(flags) & int((int)2));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(735)
				bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(735)
				if ((tmp18)){
					HX_STACK_LINE(736)
					int tmp19 = (int(flags) & int((int)1));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(736)
					bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(736)
					if ((tmp20)){
						HX_STACK_LINE(737)
						int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(737)
						{
							HX_STACK_LINE(737)
							int tmp22 = compIndex;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(737)
							int tmp23 = comp->readU8(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(737)
							int ch1 = tmp23;		HX_STACK_VAR(ch1,"ch1");
							HX_STACK_LINE(737)
							int tmp24 = (compIndex + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(737)
							int tmp25 = comp->readU8(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(737)
							int ch2 = tmp25;		HX_STACK_VAR(ch2,"ch2");
							HX_STACK_LINE(737)
							int tmp26 = ch2;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(737)
							int tmp27 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(737)
							int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(737)
							int n1 = tmp28;		HX_STACK_VAR(n1,"n1");
							HX_STACK_LINE(737)
							int tmp29 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(737)
							bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(737)
							if ((tmp30)){
								HX_STACK_LINE(737)
								tmp21 = (n1 - (int)65536);
							}
							else{
								HX_STACK_LINE(737)
								tmp21 = n1;
							}
						}
						HX_STACK_LINE(737)
						mtx4 = tmp21;
						HX_STACK_LINE(737)
						hx::AddEq(compIndex,(int)2);
						HX_STACK_LINE(738)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(738)
						{
							HX_STACK_LINE(738)
							int tmp23 = compIndex;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(738)
							int tmp24 = comp->readU8(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(738)
							int ch1 = tmp24;		HX_STACK_VAR(ch1,"ch1");
							HX_STACK_LINE(738)
							int tmp25 = (compIndex + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(738)
							int tmp26 = comp->readU8(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(738)
							int ch2 = tmp26;		HX_STACK_VAR(ch2,"ch2");
							HX_STACK_LINE(738)
							int tmp27 = ch2;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(738)
							int tmp28 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(738)
							int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(738)
							int n1 = tmp29;		HX_STACK_VAR(n1,"n1");
							HX_STACK_LINE(738)
							int tmp30 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(738)
							bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(738)
							if ((tmp31)){
								HX_STACK_LINE(738)
								tmp22 = (n1 - (int)65536);
							}
							else{
								HX_STACK_LINE(738)
								tmp22 = n1;
							}
						}
						HX_STACK_LINE(738)
						mtx5 = tmp22;
						HX_STACK_LINE(738)
						hx::AddEq(compIndex,(int)2);
					}
					else{
						HX_STACK_LINE(740)
						int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(740)
						{
							HX_STACK_LINE(740)
							int tmp22 = compIndex;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(740)
							int tmp23 = comp->readU8(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(740)
							int n1 = tmp23;		HX_STACK_VAR(n1,"n1");
							HX_STACK_LINE(740)
							bool tmp24 = (n1 >= (int)128);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(740)
							if ((tmp24)){
								HX_STACK_LINE(740)
								tmp21 = (n1 - (int)256);
							}
							else{
								HX_STACK_LINE(740)
								tmp21 = n1;
							}
						}
						HX_STACK_LINE(740)
						mtx4 = tmp21;
						HX_STACK_LINE(740)
						hx::AddEq(compIndex,(int)1);
						HX_STACK_LINE(741)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(741)
						{
							HX_STACK_LINE(741)
							int tmp23 = compIndex;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(741)
							int tmp24 = comp->readU8(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(741)
							int n1 = tmp24;		HX_STACK_VAR(n1,"n1");
							HX_STACK_LINE(741)
							bool tmp25 = (n1 >= (int)128);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(741)
							if ((tmp25)){
								HX_STACK_LINE(741)
								tmp22 = (n1 - (int)256);
							}
							else{
								HX_STACK_LINE(741)
								tmp22 = n1;
							}
						}
						HX_STACK_LINE(741)
						mtx5 = tmp22;
						HX_STACK_LINE(741)
						hx::AddEq(compIndex,(int)1);
					}
				}
				else{
					HX_STACK_LINE(746)
					bool tmp19 = true;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(746)
					if ((tmp19)){
						HX_STACK_LINE(746)
						HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
					}
				}
				HX_STACK_LINE(748)
				int tmp19 = flags;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(748)
				int tmp20 = (int)8;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(748)
				int tmp21 = (int(tmp19) & int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(748)
				bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(748)
				if ((tmp22)){
					HX_STACK_LINE(749)
					int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(749)
					{
						HX_STACK_LINE(749)
						int tmp24 = compIndex;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(749)
						int tmp25 = comp->readU8(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(749)
						int ch1 = tmp25;		HX_STACK_VAR(ch1,"ch1");
						HX_STACK_LINE(749)
						int tmp26 = (compIndex + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(749)
						int tmp27 = comp->readU8(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(749)
						int ch2 = tmp27;		HX_STACK_VAR(ch2,"ch2");
						HX_STACK_LINE(749)
						int tmp28 = ch2;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(749)
						int tmp29 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(749)
						int tmp30 = (int(tmp28) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(749)
						int n1 = tmp30;		HX_STACK_VAR(n1,"n1");
						HX_STACK_LINE(749)
						int tmp31 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(749)
						bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(749)
						if ((tmp32)){
							HX_STACK_LINE(749)
							tmp23 = (n1 - (int)65536);
						}
						else{
							HX_STACK_LINE(749)
							tmp23 = n1;
						}
					}
					HX_STACK_LINE(749)
					Float tmp24 = (Float(tmp23) / Float(((Float)16384.0)));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(749)
					Float tmp25 = mtx3 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(749)
					mtx0 = tmp25;
					HX_STACK_LINE(749)
					hx::AddEq(compIndex,(int)2);
					HX_STACK_LINE(750)
					Float tmp26 = mtx2 = (int)0;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(750)
					mtx1 = tmp26;
				}
				else{
					HX_STACK_LINE(751)
					int tmp23 = flags;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(751)
					int tmp24 = (int)64;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(751)
					int tmp25 = (int(tmp23) & int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(751)
					bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(751)
					if ((tmp26)){
						HX_STACK_LINE(752)
						int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(752)
						{
							HX_STACK_LINE(752)
							int tmp28 = compIndex;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(752)
							int tmp29 = comp->readU8(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(752)
							int ch1 = tmp29;		HX_STACK_VAR(ch1,"ch1");
							HX_STACK_LINE(752)
							int tmp30 = (compIndex + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(752)
							int tmp31 = comp->readU8(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(752)
							int ch2 = tmp31;		HX_STACK_VAR(ch2,"ch2");
							HX_STACK_LINE(752)
							int tmp32 = ch2;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(752)
							int tmp33 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(752)
							int tmp34 = (int(tmp32) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(752)
							int n1 = tmp34;		HX_STACK_VAR(n1,"n1");
							HX_STACK_LINE(752)
							int tmp35 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(752)
							bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(752)
							if ((tmp36)){
								HX_STACK_LINE(752)
								tmp27 = (n1 - (int)65536);
							}
							else{
								HX_STACK_LINE(752)
								tmp27 = n1;
							}
						}
						HX_STACK_LINE(752)
						Float tmp28 = (Float(tmp27) / Float(((Float)16384.0)));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(752)
						mtx0 = tmp28;
						HX_STACK_LINE(752)
						hx::AddEq(compIndex,(int)2);
						HX_STACK_LINE(753)
						Float tmp29 = mtx2 = (int)0;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(753)
						mtx1 = tmp29;
						HX_STACK_LINE(754)
						int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(754)
						{
							HX_STACK_LINE(754)
							int tmp31 = compIndex;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(754)
							int tmp32 = comp->readU8(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(754)
							int ch1 = tmp32;		HX_STACK_VAR(ch1,"ch1");
							HX_STACK_LINE(754)
							int tmp33 = (compIndex + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(754)
							int tmp34 = comp->readU8(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(754)
							int ch2 = tmp34;		HX_STACK_VAR(ch2,"ch2");
							HX_STACK_LINE(754)
							int tmp35 = ch2;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(754)
							int tmp36 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(754)
							int tmp37 = (int(tmp35) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(754)
							int n1 = tmp37;		HX_STACK_VAR(n1,"n1");
							HX_STACK_LINE(754)
							int tmp38 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(754)
							bool tmp39 = (tmp38 != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(754)
							if ((tmp39)){
								HX_STACK_LINE(754)
								tmp30 = (n1 - (int)65536);
							}
							else{
								HX_STACK_LINE(754)
								tmp30 = n1;
							}
						}
						HX_STACK_LINE(754)
						Float tmp31 = (Float(tmp30) / Float(((Float)16384.0)));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(754)
						mtx3 = tmp31;
						HX_STACK_LINE(754)
						hx::AddEq(compIndex,(int)2);
					}
					else{
						HX_STACK_LINE(755)
						int tmp27 = flags;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(755)
						int tmp28 = (int)128;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(755)
						int tmp29 = (int(tmp27) & int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(755)
						bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(755)
						if ((tmp30)){
							HX_STACK_LINE(756)
							int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(756)
							{
								HX_STACK_LINE(756)
								int tmp32 = compIndex;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(756)
								int tmp33 = comp->readU8(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(756)
								int ch1 = tmp33;		HX_STACK_VAR(ch1,"ch1");
								HX_STACK_LINE(756)
								int tmp34 = (compIndex + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(756)
								int tmp35 = comp->readU8(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(756)
								int ch2 = tmp35;		HX_STACK_VAR(ch2,"ch2");
								HX_STACK_LINE(756)
								int tmp36 = ch2;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(756)
								int tmp37 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(756)
								int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(756)
								int n1 = tmp38;		HX_STACK_VAR(n1,"n1");
								HX_STACK_LINE(756)
								int tmp39 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(756)
								bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(756)
								if ((tmp40)){
									HX_STACK_LINE(756)
									tmp31 = (n1 - (int)65536);
								}
								else{
									HX_STACK_LINE(756)
									tmp31 = n1;
								}
							}
							HX_STACK_LINE(756)
							Float tmp32 = (Float(tmp31) / Float(((Float)16384.0)));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(756)
							mtx0 = tmp32;
							HX_STACK_LINE(756)
							hx::AddEq(compIndex,(int)2);
							HX_STACK_LINE(757)
							int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								int tmp34 = compIndex;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(757)
								int tmp35 = comp->readU8(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(757)
								int ch1 = tmp35;		HX_STACK_VAR(ch1,"ch1");
								HX_STACK_LINE(757)
								int tmp36 = (compIndex + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(757)
								int tmp37 = comp->readU8(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(757)
								int ch2 = tmp37;		HX_STACK_VAR(ch2,"ch2");
								HX_STACK_LINE(757)
								int tmp38 = ch2;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(757)
								int tmp39 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(757)
								int tmp40 = (int(tmp38) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(757)
								int n1 = tmp40;		HX_STACK_VAR(n1,"n1");
								HX_STACK_LINE(757)
								int tmp41 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(757)
								bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(757)
								if ((tmp42)){
									HX_STACK_LINE(757)
									tmp33 = (n1 - (int)65536);
								}
								else{
									HX_STACK_LINE(757)
									tmp33 = n1;
								}
							}
							HX_STACK_LINE(757)
							Float tmp34 = (Float(tmp33) / Float(((Float)16384.0)));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(757)
							mtx1 = tmp34;
							HX_STACK_LINE(757)
							hx::AddEq(compIndex,(int)2);
							HX_STACK_LINE(758)
							int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(758)
							{
								HX_STACK_LINE(758)
								int tmp36 = compIndex;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(758)
								int tmp37 = comp->readU8(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(758)
								int ch1 = tmp37;		HX_STACK_VAR(ch1,"ch1");
								HX_STACK_LINE(758)
								int tmp38 = (compIndex + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(758)
								int tmp39 = comp->readU8(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(758)
								int ch2 = tmp39;		HX_STACK_VAR(ch2,"ch2");
								HX_STACK_LINE(758)
								int tmp40 = ch2;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(758)
								int tmp41 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(758)
								int tmp42 = (int(tmp40) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(758)
								int n1 = tmp42;		HX_STACK_VAR(n1,"n1");
								HX_STACK_LINE(758)
								int tmp43 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(758)
								bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(758)
								if ((tmp44)){
									HX_STACK_LINE(758)
									tmp35 = (n1 - (int)65536);
								}
								else{
									HX_STACK_LINE(758)
									tmp35 = n1;
								}
							}
							HX_STACK_LINE(758)
							Float tmp36 = (Float(tmp35) / Float(((Float)16384.0)));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(758)
							mtx2 = tmp36;
							HX_STACK_LINE(758)
							hx::AddEq(compIndex,(int)2);
							HX_STACK_LINE(759)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(759)
							{
								HX_STACK_LINE(759)
								int tmp38 = compIndex;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(759)
								int tmp39 = comp->readU8(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(759)
								int ch1 = tmp39;		HX_STACK_VAR(ch1,"ch1");
								HX_STACK_LINE(759)
								int tmp40 = (compIndex + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(759)
								int tmp41 = comp->readU8(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(759)
								int ch2 = tmp41;		HX_STACK_VAR(ch2,"ch2");
								HX_STACK_LINE(759)
								int tmp42 = ch2;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(759)
								int tmp43 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(759)
								int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(759)
								int n1 = tmp44;		HX_STACK_VAR(n1,"n1");
								HX_STACK_LINE(759)
								int tmp45 = (int(n1) & int((int)32768));		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(759)
								bool tmp46 = (tmp45 != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(759)
								if ((tmp46)){
									HX_STACK_LINE(759)
									tmp37 = (n1 - (int)65536);
								}
								else{
									HX_STACK_LINE(759)
									tmp37 = n1;
								}
							}
							HX_STACK_LINE(759)
							Float tmp38 = (Float(tmp37) / Float(((Float)16384.0)));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(759)
							mtx3 = tmp38;
							HX_STACK_LINE(759)
							hx::AddEq(compIndex,(int)2);
						}
					}
				}
				HX_STACK_LINE(763)
				Float tmp23 = (mtx0 * mtx0);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(763)
				Float tmp24 = (mtx1 * mtx1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(763)
				Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(763)
				Float tmp26 = ::Math_obj::sqrt(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(763)
				m = tmp26;
				HX_STACK_LINE(764)
				Float tmp27 = (mtx2 * mtx2);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(764)
				Float tmp28 = (mtx3 * mtx3);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(764)
				Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(764)
				Float tmp30 = ::Math_obj::sqrt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(764)
				n = tmp30;
				HX_STACK_LINE(767)
				::kha::graphics2::truetype::Stbtt_fontinfo tmp31 = info;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(767)
				int tmp32 = gidx;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(767)
				Array< ::Dynamic > tmp33 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphShape(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(767)
				comp_verts = tmp33;
				HX_STACK_LINE(768)
				bool tmp34 = (comp_verts == null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(768)
				int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(768)
				if ((tmp34)){
					HX_STACK_LINE(768)
					tmp35 = (int)0;
				}
				else{
					HX_STACK_LINE(768)
					tmp35 = comp_verts->length;
				}
				HX_STACK_LINE(768)
				comp_num_verts = tmp35;
				HX_STACK_LINE(769)
				bool tmp36 = (comp_num_verts > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(769)
				if ((tmp36)){
					HX_STACK_LINE(771)
					{
						HX_STACK_LINE(771)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(771)
						while((true)){
							HX_STACK_LINE(771)
							bool tmp37 = (_g < comp_num_verts);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(771)
							bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(771)
							if ((tmp38)){
								HX_STACK_LINE(771)
								break;
							}
							HX_STACK_LINE(771)
							int tmp39 = (_g)++;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(771)
							int i1 = tmp39;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(772)
							int tmp40 = i1;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(772)
							::kha::graphics2::truetype::Stbtt_vertex tmp41 = comp_verts->__unsafe_get(tmp40).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(772)
							::kha::graphics2::truetype::Stbtt_vertex v = tmp41;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(773)
							int x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(773)
							int y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(774)
							x = v->x;
							HX_STACK_LINE(774)
							y = v->y;
							HX_STACK_LINE(775)
							Float tmp42 = m;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(775)
							Float tmp43 = (mtx0 * x);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(775)
							Float tmp44 = (mtx2 * y);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(775)
							Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(775)
							Float tmp46 = mtx4;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(775)
							Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(775)
							Float tmp48 = (tmp42 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(775)
							int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(775)
							v->x = tmp49;
							HX_STACK_LINE(776)
							Float tmp50 = n;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(776)
							Float tmp51 = (mtx1 * x);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(776)
							Float tmp52 = (mtx3 * y);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(776)
							Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(776)
							Float tmp54 = mtx5;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(776)
							Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(776)
							Float tmp56 = (tmp50 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(776)
							int tmp57 = ::Std_obj::_int(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(776)
							v->y = tmp57;
							HX_STACK_LINE(777)
							x = v->cx;
							HX_STACK_LINE(777)
							y = v->cy;
							HX_STACK_LINE(778)
							Float tmp58 = m;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(778)
							Float tmp59 = (mtx0 * x);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(778)
							Float tmp60 = (mtx2 * y);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(778)
							Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(778)
							Float tmp62 = mtx4;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(778)
							Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(778)
							Float tmp64 = (tmp58 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(778)
							int tmp65 = ::Std_obj::_int(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(778)
							v->cx = tmp65;
							HX_STACK_LINE(779)
							Float tmp66 = n;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(779)
							Float tmp67 = (mtx1 * x);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(779)
							Float tmp68 = (mtx3 * y);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(779)
							Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(779)
							Float tmp70 = mtx5;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(779)
							Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(779)
							Float tmp72 = (tmp66 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(779)
							int tmp73 = ::Std_obj::_int(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(779)
							v->cy = tmp73;
						}
					}
					HX_STACK_LINE(782)
					Array< ::Dynamic > tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(782)
					{
						HX_STACK_LINE(782)
						Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(782)
						Array< ::Dynamic > tmp38 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(782)
						this1 = tmp38;
						HX_STACK_LINE(782)
						int tmp39 = (num_vertices + comp_num_verts);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(782)
						this1->__SetSizeExact(tmp39);
						HX_STACK_LINE(782)
						tmp37 = this1;
					}
					HX_STACK_LINE(782)
					tmp14 = tmp37;
					HX_STACK_LINE(783)
					bool tmp38 = (tmp14 == null());		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(783)
					if ((tmp38)){
						HX_STACK_LINE(784)
						return null();
					}
					HX_STACK_LINE(786)
					bool tmp39 = (num_vertices > (int)0);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(786)
					if ((tmp39)){
						HX_STACK_LINE(786)
						Array< ::Dynamic > tmp40 = vertices;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(786)
						Array< ::Dynamic > tmp41 = tmp14;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(786)
						int tmp42 = num_vertices;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(786)
						::kha::graphics2::truetype::StbTruetype_obj::copyVertices(tmp40,tmp41,(int)0,tmp42);
					}
					HX_STACK_LINE(787)
					Array< ::Dynamic > tmp40 = comp_verts;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(787)
					Array< ::Dynamic > tmp41 = tmp14;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(787)
					int tmp42 = num_vertices;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(787)
					int tmp43 = comp_num_verts;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(787)
					::kha::graphics2::truetype::StbTruetype_obj::copyVertices(tmp40,tmp41,tmp42,tmp43);
					HX_STACK_LINE(788)
					vertices = tmp14;
					HX_STACK_LINE(789)
					hx::AddEq(num_vertices,comp_num_verts);
				}
				HX_STACK_LINE(792)
				int tmp37 = flags;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(792)
				int tmp38 = (int)32;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(792)
				int tmp39 = (int(tmp37) & int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(792)
				more = tmp39;
			}
		}
		else{
			HX_STACK_LINE(794)
			bool tmp7 = (numberOfContours < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(794)
			if ((tmp7)){
				HX_STACK_LINE(796)
				bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(796)
				if ((tmp8)){
					HX_STACK_LINE(796)
					HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
				}
			}
			else{
			}
		}
	}
	HX_STACK_LINE(801)
	bool tmp6 = (vertices == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(801)
	if ((tmp6)){
		HX_STACK_LINE(801)
		return null();
	}
	HX_STACK_LINE(802)
	{
		HX_STACK_LINE(802)
		int tmp7 = vertices->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(802)
		int tmp8 = num_vertices;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(802)
		bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(802)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(802)
		if ((tmp10)){
			HX_STACK_LINE(802)
			HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
		}
	}
	HX_STACK_LINE(803)
	int tmp7 = num_vertices;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(803)
	int tmp8 = vertices->length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(803)
	bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(803)
	if ((tmp9)){
		HX_STACK_LINE(804)
		Array< ::Dynamic > tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(804)
		{
			HX_STACK_LINE(804)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(804)
			Array< ::Dynamic > tmp11 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(804)
			this1 = tmp11;
			HX_STACK_LINE(804)
			int tmp12 = num_vertices;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(804)
			this1->__SetSizeExact(tmp12);
			HX_STACK_LINE(804)
			tmp10 = this1;
		}
		HX_STACK_LINE(804)
		Array< ::Dynamic > tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(805)
		Array< ::Dynamic > tmp12 = vertices;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(805)
		Array< ::Dynamic > tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(805)
		int tmp14 = num_vertices;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(805)
		::kha::graphics2::truetype::StbTruetype_obj::copyVertices(tmp12,tmp13,(int)0,tmp14);
		HX_STACK_LINE(806)
		Array< ::Dynamic > tmp15 = tmp11;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(806)
		return tmp15;
	}
	else{
		HX_STACK_LINE(809)
		Array< ::Dynamic > tmp10 = vertices;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(809)
		return tmp10;
	}
	HX_STACK_LINE(803)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt_GetGlyphShape,return )

::kha::graphics2::truetype::Stbtt_temp_glyph_h_metrics StbTruetype_obj::stbtt_GetGlyphHMetrics( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph_index){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetGlyphHMetrics",0x4333ea29,"kha.graphics2.truetype.StbTruetype.stbtt_GetGlyphHMetrics","kha/graphics2/truetype/StbTruetype.hx",813,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(glyph_index,"glyph_index")
	HX_STACK_LINE(814)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(814)
	{
		HX_STACK_LINE(814)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(814)
		int tmp1 = (info->hhea + (int)34);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(814)
		int pos = tmp1;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(814)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(814)
		int tmp3 = p->readU8(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(814)
		int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(814)
		int tmp4 = (pos + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(814)
		int tmp5 = p->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(814)
		int ch2 = tmp5;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(814)
		int tmp6 = ch2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(814)
		int tmp7 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(814)
		tmp = (int(tmp6) | int(tmp7));
	}
	HX_STACK_LINE(814)
	int numOfLongHorMetrics = tmp;		HX_STACK_VAR(numOfLongHorMetrics,"numOfLongHorMetrics");
	HX_STACK_LINE(815)
	::kha::graphics2::truetype::Stbtt_temp_glyph_h_metrics metrics = ::kha::graphics2::truetype::Stbtt_temp_glyph_h_metrics_obj::__new();		HX_STACK_VAR(metrics,"metrics");
	HX_STACK_LINE(816)
	bool tmp1 = (glyph_index < numOfLongHorMetrics);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(816)
	if ((tmp1)){
		HX_STACK_LINE(817)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(817)
		{
			HX_STACK_LINE(817)
			::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(817)
			int tmp3 = info->hmtx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(817)
			int tmp4 = ((int)4 * glyph_index);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(817)
			int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(817)
			int pos = tmp5;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(817)
			int tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(817)
			int tmp7 = p->readU8(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(817)
			int ch1 = tmp7;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(817)
			int tmp8 = (pos + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(817)
			int tmp9 = p->readU8(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(817)
			int ch2 = tmp9;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(817)
			int tmp10 = ch2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(817)
			int tmp11 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(817)
			int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(817)
			int n = tmp12;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(817)
			int tmp13 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(817)
			bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(817)
			if ((tmp14)){
				HX_STACK_LINE(817)
				tmp2 = (n - (int)65536);
			}
			else{
				HX_STACK_LINE(817)
				tmp2 = n;
			}
		}
		HX_STACK_LINE(817)
		metrics->advanceWidth = tmp2;
		HX_STACK_LINE(818)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(818)
		{
			HX_STACK_LINE(818)
			::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(818)
			int tmp4 = info->hmtx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(818)
			int tmp5 = ((int)4 * glyph_index);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(818)
			int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(818)
			int tmp7 = (tmp6 + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(818)
			int pos = tmp7;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(818)
			int tmp8 = pos;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(818)
			int tmp9 = p->readU8(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(818)
			int ch1 = tmp9;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(818)
			int tmp10 = (pos + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(818)
			int tmp11 = p->readU8(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(818)
			int ch2 = tmp11;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(818)
			int tmp12 = ch2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(818)
			int tmp13 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(818)
			int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(818)
			int n = tmp14;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(818)
			int tmp15 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(818)
			bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(818)
			if ((tmp16)){
				HX_STACK_LINE(818)
				tmp3 = (n - (int)65536);
			}
			else{
				HX_STACK_LINE(818)
				tmp3 = n;
			}
		}
		HX_STACK_LINE(818)
		metrics->leftSideBearing = tmp3;
	}
	else{
		HX_STACK_LINE(820)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(820)
			::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(820)
			int tmp3 = info->hmtx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(820)
			int tmp4 = (numOfLongHorMetrics - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(820)
			int tmp5 = ((int)4 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			int tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(820)
			int pos = tmp6;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(820)
			int tmp7 = pos;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(820)
			int tmp8 = p->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(820)
			int ch1 = tmp8;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(820)
			int tmp9 = (pos + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(820)
			int tmp10 = p->readU8(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(820)
			int ch2 = tmp10;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(820)
			int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(820)
			int tmp12 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(820)
			int tmp13 = (int(tmp11) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(820)
			int n = tmp13;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(820)
			int tmp14 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(820)
			bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(820)
			if ((tmp15)){
				HX_STACK_LINE(820)
				tmp2 = (n - (int)65536);
			}
			else{
				HX_STACK_LINE(820)
				tmp2 = n;
			}
		}
		HX_STACK_LINE(820)
		metrics->advanceWidth = tmp2;
		HX_STACK_LINE(821)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(821)
		{
			HX_STACK_LINE(821)
			::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(821)
			int tmp4 = info->hmtx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(821)
			int tmp5 = ((int)4 * numOfLongHorMetrics);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(821)
			int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(821)
			int tmp7 = (glyph_index - numOfLongHorMetrics);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(821)
			int tmp8 = ((int)2 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(821)
			int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(821)
			int pos = tmp9;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(821)
			int tmp10 = pos;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(821)
			int tmp11 = p->readU8(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(821)
			int ch1 = tmp11;		HX_STACK_VAR(ch1,"ch1");
			HX_STACK_LINE(821)
			int tmp12 = (pos + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(821)
			int tmp13 = p->readU8(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(821)
			int ch2 = tmp13;		HX_STACK_VAR(ch2,"ch2");
			HX_STACK_LINE(821)
			int tmp14 = ch2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(821)
			int tmp15 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(821)
			int tmp16 = (int(tmp14) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(821)
			int n = tmp16;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(821)
			int tmp17 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(821)
			bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(821)
			if ((tmp18)){
				HX_STACK_LINE(821)
				tmp3 = (n - (int)65536);
			}
			else{
				HX_STACK_LINE(821)
				tmp3 = n;
			}
		}
		HX_STACK_LINE(821)
		metrics->leftSideBearing = tmp3;
	}
	HX_STACK_LINE(823)
	::kha::graphics2::truetype::Stbtt_temp_glyph_h_metrics tmp2 = metrics;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(823)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt_GetGlyphHMetrics,return )

int StbTruetype_obj::stbtt_GetGlyphKernAdvance( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph1,int glyph2){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetGlyphKernAdvance",0x1e04b09e,"kha.graphics2.truetype.StbTruetype.stbtt_GetGlyphKernAdvance","kha/graphics2/truetype/StbTruetype.hx",826,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(glyph1,"glyph1")
	HX_STACK_ARG(glyph2,"glyph2")
	HX_STACK_LINE(827)
	int tmp = info->kern;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(827)
	int tmp1 = info->data->get_length();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(827)
	int tmp2 = info->kern;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(827)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(827)
	::kha::Blob tmp4 = info->data->sub(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(827)
	::kha::Blob data = tmp4;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(828)
	int needle;		HX_STACK_VAR(needle,"needle");
	HX_STACK_LINE(828)
	int straw;		HX_STACK_VAR(straw,"straw");
	HX_STACK_LINE(829)
	int l;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(829)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(829)
	int m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(832)
	bool tmp5 = (info->kern == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(832)
	if ((tmp5)){
		HX_STACK_LINE(833)
		return (int)0;
	}
	HX_STACK_LINE(834)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		int tmp7 = (int)2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(834)
		int tmp8 = data->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(834)
		int ch1 = tmp8;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(834)
		int tmp9 = (int)3;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(834)
		int tmp10 = data->readU8(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(834)
		int ch2 = tmp10;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(834)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(834)
		int tmp12 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(834)
		tmp6 = (int(tmp11) | int(tmp12));
	}
	HX_STACK_LINE(834)
	bool tmp7 = (tmp6 < (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(834)
	if ((tmp7)){
		HX_STACK_LINE(835)
		return (int)0;
	}
	HX_STACK_LINE(836)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(836)
	{
		HX_STACK_LINE(836)
		int tmp9 = (int)8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(836)
		int tmp10 = data->readU8(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(836)
		int ch1 = tmp10;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(836)
		int tmp11 = (int)9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(836)
		int tmp12 = data->readU8(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(836)
		int ch2 = tmp12;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(836)
		int tmp13 = ch2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(836)
		int tmp14 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(836)
		tmp8 = (int(tmp13) | int(tmp14));
	}
	HX_STACK_LINE(836)
	bool tmp9 = (tmp8 != (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(836)
	if ((tmp9)){
		HX_STACK_LINE(837)
		return (int)0;
	}
	HX_STACK_LINE(839)
	l = (int)0;
	HX_STACK_LINE(840)
	int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(840)
	{
		HX_STACK_LINE(840)
		int tmp11 = (int)10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(840)
		int tmp12 = data->readU8(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(840)
		int ch1 = tmp12;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(840)
		int tmp13 = (int)11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(840)
		int tmp14 = data->readU8(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(840)
		int ch2 = tmp14;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(840)
		int tmp15 = ch2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(840)
		int tmp16 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(840)
		tmp10 = (int(tmp15) | int(tmp16));
	}
	HX_STACK_LINE(840)
	int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(840)
	r = tmp11;
	HX_STACK_LINE(841)
	int tmp12 = (int(glyph1) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(841)
	int tmp13 = glyph2;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(841)
	int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(841)
	needle = tmp14;
	HX_STACK_LINE(842)
	while((true)){
		HX_STACK_LINE(842)
		bool tmp15 = (l <= r);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(842)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(842)
		if ((tmp16)){
			HX_STACK_LINE(842)
			break;
		}
		HX_STACK_LINE(843)
		int tmp17 = (l + r);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(843)
		int tmp18 = (int(tmp17) >> int((int)1));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(843)
		m = tmp18;
		HX_STACK_LINE(844)
		int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(844)
		{
			HX_STACK_LINE(844)
			int tmp20 = (m * (int)6);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(844)
			int tmp21 = ((int)18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(844)
			int pos = tmp21;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(844)
			{
				HX_STACK_LINE(844)
				int tmp22 = pos;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(844)
				int tmp23 = data->readU8(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(844)
				int ch1 = tmp23;		HX_STACK_VAR(ch1,"ch1");
				HX_STACK_LINE(844)
				int tmp24 = (pos + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(844)
				int tmp25 = data->readU8(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(844)
				int ch2 = tmp25;		HX_STACK_VAR(ch2,"ch2");
				HX_STACK_LINE(844)
				int tmp26 = (pos + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(844)
				int tmp27 = data->readU8(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(844)
				int ch3 = tmp27;		HX_STACK_VAR(ch3,"ch3");
				HX_STACK_LINE(844)
				int tmp28 = (pos + (int)3);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(844)
				int tmp29 = data->readU8(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(844)
				int ch4 = tmp29;		HX_STACK_VAR(ch4,"ch4");
				HX_STACK_LINE(844)
				int tmp30 = ch4;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(844)
				int tmp31 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(844)
				int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(844)
				int tmp33 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(844)
				int tmp34 = (int(tmp32) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(844)
				int tmp35 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(844)
				tmp19 = (int(tmp34) | int(tmp35));
			}
		}
		HX_STACK_LINE(844)
		straw = tmp19;
		HX_STACK_LINE(845)
		bool tmp20 = (needle < straw);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(845)
		if ((tmp20)){
			HX_STACK_LINE(846)
			int tmp21 = (m - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(846)
			r = tmp21;
		}
		else{
			HX_STACK_LINE(847)
			bool tmp21 = (needle > straw);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(847)
			if ((tmp21)){
				HX_STACK_LINE(848)
				int tmp22 = (m + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(848)
				l = tmp22;
			}
			else{
				HX_STACK_LINE(850)
				int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(850)
				{
					HX_STACK_LINE(850)
					int tmp23 = (m * (int)6);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(850)
					int tmp24 = ((int)22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(850)
					int pos = tmp24;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(850)
					int tmp25 = pos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(850)
					int tmp26 = data->readU8(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(850)
					int ch1 = tmp26;		HX_STACK_VAR(ch1,"ch1");
					HX_STACK_LINE(850)
					int tmp27 = (pos + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(850)
					int tmp28 = data->readU8(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(850)
					int ch2 = tmp28;		HX_STACK_VAR(ch2,"ch2");
					HX_STACK_LINE(850)
					int tmp29 = ch2;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(850)
					int tmp30 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(850)
					int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(850)
					int n = tmp31;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(850)
					int tmp32 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(850)
					bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(850)
					if ((tmp33)){
						HX_STACK_LINE(850)
						tmp22 = (n - (int)65536);
					}
					else{
						HX_STACK_LINE(850)
						tmp22 = n;
					}
				}
				HX_STACK_LINE(850)
				return tmp22;
			}
		}
	}
	HX_STACK_LINE(852)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StbTruetype_obj,stbtt_GetGlyphKernAdvance,return )

int StbTruetype_obj::stbtt_GetCodepointKernAdvance( ::kha::graphics2::truetype::Stbtt_fontinfo info,int ch1,int ch2){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetCodepointKernAdvance",0x7383b6a7,"kha.graphics2.truetype.StbTruetype.stbtt_GetCodepointKernAdvance","kha/graphics2/truetype/StbTruetype.hx",855,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(ch1,"ch1")
	HX_STACK_ARG(ch2,"ch2")
	HX_STACK_LINE(856)
	bool tmp = (info->kern == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(856)
	if ((tmp)){
		HX_STACK_LINE(857)
		return (int)0;
	}
	HX_STACK_LINE(858)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp1 = info;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(858)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp2 = info;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(858)
	int tmp3 = ch1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(858)
	int tmp4 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_FindGlyphIndex(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(858)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp5 = info;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(858)
	int tmp6 = ch2;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(858)
	int tmp7 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_FindGlyphIndex(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(858)
	int tmp8 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphKernAdvance(tmp1,tmp4,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(858)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StbTruetype_obj,stbtt_GetCodepointKernAdvance,return )

::kha::graphics2::truetype::Stbtt_temp_glyph_h_metrics StbTruetype_obj::stbtt_GetCodepointHMetrics( ::kha::graphics2::truetype::Stbtt_fontinfo info,int codepoint){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetCodepointHMetrics",0x35d0b480,"kha.graphics2.truetype.StbTruetype.stbtt_GetCodepointHMetrics","kha/graphics2/truetype/StbTruetype.hx",861,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(codepoint,"codepoint")
	HX_STACK_LINE(862)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(862)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp1 = info;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(862)
	int tmp2 = codepoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(862)
	int tmp3 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_FindGlyphIndex(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(862)
	::kha::graphics2::truetype::Stbtt_temp_glyph_h_metrics tmp4 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphHMetrics(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(862)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt_GetCodepointHMetrics,return )

::kha::graphics2::truetype::Stbtt_temp_font_v_metrics StbTruetype_obj::stbtt_GetFontVMetrics( ::kha::graphics2::truetype::Stbtt_fontinfo info){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetFontVMetrics",0x39aaf1fa,"kha.graphics2.truetype.StbTruetype.stbtt_GetFontVMetrics","kha/graphics2/truetype/StbTruetype.hx",865,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(866)
	::kha::graphics2::truetype::Stbtt_temp_font_v_metrics metrics = ::kha::graphics2::truetype::Stbtt_temp_font_v_metrics_obj::__new();		HX_STACK_VAR(metrics,"metrics");
	HX_STACK_LINE(867)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(867)
	{
		HX_STACK_LINE(867)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(867)
		int tmp1 = (info->hhea + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(867)
		int pos = tmp1;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(867)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(867)
		int tmp3 = p->readU8(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(867)
		int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(867)
		int tmp4 = (pos + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(867)
		int tmp5 = p->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(867)
		int ch2 = tmp5;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(867)
		int tmp6 = ch2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(867)
		int tmp7 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(867)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(867)
		int n = tmp8;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(867)
		int tmp9 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(867)
		bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(867)
		if ((tmp10)){
			HX_STACK_LINE(867)
			tmp = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(867)
			tmp = n;
		}
	}
	HX_STACK_LINE(867)
	metrics->ascent = tmp;
	HX_STACK_LINE(868)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(868)
	{
		HX_STACK_LINE(868)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(868)
		int tmp2 = (info->hhea + (int)6);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(868)
		int pos = tmp2;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(868)
		int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(868)
		int tmp4 = p->readU8(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(868)
		int ch1 = tmp4;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(868)
		int tmp5 = (pos + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(868)
		int tmp6 = p->readU8(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(868)
		int ch2 = tmp6;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(868)
		int tmp7 = ch2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(868)
		int tmp8 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(868)
		int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(868)
		int n = tmp9;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(868)
		int tmp10 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(868)
		bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(868)
		if ((tmp11)){
			HX_STACK_LINE(868)
			tmp1 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(868)
			tmp1 = n;
		}
	}
	HX_STACK_LINE(868)
	metrics->descent = tmp1;
	HX_STACK_LINE(869)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(869)
	{
		HX_STACK_LINE(869)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(869)
		int tmp3 = (info->hhea + (int)8);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(869)
		int pos = tmp3;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(869)
		int tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(869)
		int tmp5 = p->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(869)
		int ch1 = tmp5;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(869)
		int tmp6 = (pos + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(869)
		int tmp7 = p->readU8(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(869)
		int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(869)
		int tmp8 = ch2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(869)
		int tmp9 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(869)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(869)
		int n = tmp10;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(869)
		int tmp11 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(869)
		bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(869)
		if ((tmp12)){
			HX_STACK_LINE(869)
			tmp2 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(869)
			tmp2 = n;
		}
	}
	HX_STACK_LINE(869)
	metrics->lineGap = tmp2;
	HX_STACK_LINE(870)
	::kha::graphics2::truetype::Stbtt_temp_font_v_metrics tmp3 = metrics;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(870)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StbTruetype_obj,stbtt_GetFontVMetrics,return )

::kha::graphics2::truetype::Stbtt_temp_rect StbTruetype_obj::stbtt_GetFontBoundingBox( ::kha::graphics2::truetype::Stbtt_fontinfo info){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetFontBoundingBox",0xf62c3d9a,"kha.graphics2.truetype.StbTruetype.stbtt_GetFontBoundingBox","kha/graphics2/truetype/StbTruetype.hx",873,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(874)
	::kha::graphics2::truetype::Stbtt_temp_rect rect = ::kha::graphics2::truetype::Stbtt_temp_rect_obj::__new();		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(875)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(875)
	{
		HX_STACK_LINE(875)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(875)
		int tmp1 = (info->head + (int)36);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(875)
		int pos = tmp1;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(875)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(875)
		int tmp3 = p->readU8(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(875)
		int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(875)
		int tmp4 = (pos + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(875)
		int tmp5 = p->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(875)
		int ch2 = tmp5;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(875)
		int tmp6 = ch2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(875)
		int tmp7 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(875)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(875)
		int n = tmp8;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(875)
		int tmp9 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(875)
		bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(875)
		if ((tmp10)){
			HX_STACK_LINE(875)
			tmp = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(875)
			tmp = n;
		}
	}
	HX_STACK_LINE(875)
	rect->x0 = tmp;
	HX_STACK_LINE(876)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(876)
	{
		HX_STACK_LINE(876)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(876)
		int tmp2 = (info->head + (int)38);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(876)
		int pos = tmp2;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(876)
		int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(876)
		int tmp4 = p->readU8(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(876)
		int ch1 = tmp4;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(876)
		int tmp5 = (pos + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(876)
		int tmp6 = p->readU8(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(876)
		int ch2 = tmp6;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(876)
		int tmp7 = ch2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(876)
		int tmp8 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(876)
		int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(876)
		int n = tmp9;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(876)
		int tmp10 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(876)
		bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(876)
		if ((tmp11)){
			HX_STACK_LINE(876)
			tmp1 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(876)
			tmp1 = n;
		}
	}
	HX_STACK_LINE(876)
	rect->y0 = tmp1;
	HX_STACK_LINE(877)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(877)
	{
		HX_STACK_LINE(877)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(877)
		int tmp3 = (info->head + (int)40);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(877)
		int pos = tmp3;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(877)
		int tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(877)
		int tmp5 = p->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(877)
		int ch1 = tmp5;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(877)
		int tmp6 = (pos + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(877)
		int tmp7 = p->readU8(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(877)
		int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(877)
		int tmp8 = ch2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(877)
		int tmp9 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(877)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(877)
		int n = tmp10;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(877)
		int tmp11 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(877)
		bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(877)
		if ((tmp12)){
			HX_STACK_LINE(877)
			tmp2 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(877)
			tmp2 = n;
		}
	}
	HX_STACK_LINE(877)
	rect->x1 = tmp2;
	HX_STACK_LINE(878)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(878)
	{
		HX_STACK_LINE(878)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(878)
		int tmp4 = (info->head + (int)42);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(878)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(878)
		int tmp5 = pos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(878)
		int tmp6 = p->readU8(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(878)
		int ch1 = tmp6;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(878)
		int tmp7 = (pos + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(878)
		int tmp8 = p->readU8(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(878)
		int ch2 = tmp8;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(878)
		int tmp9 = ch2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(878)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(878)
		int tmp11 = (int(tmp9) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(878)
		int n = tmp11;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(878)
		int tmp12 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(878)
		bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(878)
		if ((tmp13)){
			HX_STACK_LINE(878)
			tmp3 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(878)
			tmp3 = n;
		}
	}
	HX_STACK_LINE(878)
	rect->y1 = tmp3;
	HX_STACK_LINE(879)
	::kha::graphics2::truetype::Stbtt_temp_rect tmp4 = rect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(879)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StbTruetype_obj,stbtt_GetFontBoundingBox,return )

Float StbTruetype_obj::stbtt_ScaleForPixelHeight( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float height){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_ScaleForPixelHeight",0x31fdc196,"kha.graphics2.truetype.StbTruetype.stbtt_ScaleForPixelHeight","kha/graphics2/truetype/StbTruetype.hx",882,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(883)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(883)
	{
		HX_STACK_LINE(883)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(883)
		int tmp1 = (info->hhea + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(883)
		int pos = tmp1;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(883)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(883)
		int tmp3 = p->readU8(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(883)
		int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(883)
		int tmp4 = (pos + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(883)
		int tmp5 = p->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(883)
		int ch2 = tmp5;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(883)
		int tmp6 = ch2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(883)
		int tmp7 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(883)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(883)
		int n = tmp8;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(883)
		int tmp9 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(883)
		bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(883)
		if ((tmp10)){
			HX_STACK_LINE(883)
			tmp = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(883)
			tmp = n;
		}
	}
	HX_STACK_LINE(883)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(883)
	{
		HX_STACK_LINE(883)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(883)
		int tmp2 = (info->hhea + (int)6);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(883)
		int pos = tmp2;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(883)
		int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(883)
		int tmp4 = p->readU8(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(883)
		int ch1 = tmp4;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(883)
		int tmp5 = (pos + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(883)
		int tmp6 = p->readU8(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(883)
		int ch2 = tmp6;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(883)
		int tmp7 = ch2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(883)
		int tmp8 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(883)
		int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(883)
		int n = tmp9;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(883)
		int tmp10 = (int(n) & int((int)32768));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(883)
		bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(883)
		if ((tmp11)){
			HX_STACK_LINE(883)
			tmp1 = (n - (int)65536);
		}
		else{
			HX_STACK_LINE(883)
			tmp1 = n;
		}
	}
	HX_STACK_LINE(883)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(883)
	int fheight = tmp2;		HX_STACK_VAR(fheight,"fheight");
	HX_STACK_LINE(884)
	Float tmp3 = (Float(height) / Float(fheight));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(884)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt_ScaleForPixelHeight,return )

Float StbTruetype_obj::stbtt_ScaleForMappingEmToPixels( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float pixels){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_ScaleForMappingEmToPixels",0xa0885387,"kha.graphics2.truetype.StbTruetype.stbtt_ScaleForMappingEmToPixels","kha/graphics2/truetype/StbTruetype.hx",887,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(pixels,"pixels")
	HX_STACK_LINE(888)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(888)
	{
		HX_STACK_LINE(888)
		::kha::Blob p = info->data;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(888)
		int tmp1 = (info->head + (int)18);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(888)
		int pos = tmp1;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(888)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(888)
		int tmp3 = p->readU8(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(888)
		int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
		HX_STACK_LINE(888)
		int tmp4 = (pos + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(888)
		int tmp5 = p->readU8(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(888)
		int ch2 = tmp5;		HX_STACK_VAR(ch2,"ch2");
		HX_STACK_LINE(888)
		int tmp6 = ch2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(888)
		int tmp7 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(888)
		tmp = (int(tmp6) | int(tmp7));
	}
	HX_STACK_LINE(888)
	int unitsPerEm = tmp;		HX_STACK_VAR(unitsPerEm,"unitsPerEm");
	HX_STACK_LINE(889)
	Float tmp1 = (Float(pixels) / Float(unitsPerEm));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(889)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt_ScaleForMappingEmToPixels,return )

::kha::graphics2::truetype::Stbtt_temp_rect StbTruetype_obj::stbtt_GetGlyphBitmapBoxSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo font,int glyph,Float scale_x,Float scale_y,Float shift_x,Float shift_y){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetGlyphBitmapBoxSubpixel",0x27894954,"kha.graphics2.truetype.StbTruetype.stbtt_GetGlyphBitmapBoxSubpixel","kha/graphics2/truetype/StbTruetype.hx",897,0x5d9e0de9)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(glyph,"glyph")
	HX_STACK_ARG(scale_x,"scale_x")
	HX_STACK_ARG(scale_y,"scale_y")
	HX_STACK_ARG(shift_x,"shift_x")
	HX_STACK_ARG(shift_y,"shift_y")
	HX_STACK_LINE(898)
	::kha::graphics2::truetype::Stbtt_temp_rect rect = ::kha::graphics2::truetype::Stbtt_temp_rect_obj::__new();		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(899)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(899)
	int tmp1 = glyph;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(899)
	::kha::graphics2::truetype::Stbtt_temp_rect tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(899)
	bool tmp3 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphBox(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(899)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(899)
	if ((tmp4)){
		HX_STACK_LINE(901)
		rect->x0 = (int)0;
		HX_STACK_LINE(902)
		rect->y0 = (int)0;
		HX_STACK_LINE(903)
		rect->x1 = (int)0;
		HX_STACK_LINE(904)
		rect->y1 = (int)0;
	}
	else{
		HX_STACK_LINE(907)
		int x0 = rect->x0;		HX_STACK_VAR(x0,"x0");
		HX_STACK_LINE(908)
		int x1 = rect->x1;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(909)
		int y0 = rect->y0;		HX_STACK_VAR(y0,"y0");
		HX_STACK_LINE(910)
		int y1 = rect->y1;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(911)
		Float tmp5 = (x0 * scale_x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(911)
		Float tmp6 = shift_x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(911)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(911)
		int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(911)
		rect->x0 = tmp8;
		HX_STACK_LINE(912)
		int tmp9 = y1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(912)
		int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(912)
		Float tmp11 = scale_y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(912)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(912)
		Float tmp13 = shift_y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(912)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(912)
		int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(912)
		rect->y0 = tmp15;
		HX_STACK_LINE(913)
		Float tmp16 = (x1 * scale_x);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(913)
		Float tmp17 = shift_x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(913)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(913)
		int tmp19 = ::Math_obj::ceil(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(913)
		rect->x1 = tmp19;
		HX_STACK_LINE(914)
		int tmp20 = y0;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(914)
		int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(914)
		Float tmp22 = scale_y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(914)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(914)
		Float tmp24 = shift_y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(914)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(914)
		int tmp26 = ::Math_obj::ceil(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(914)
		rect->y1 = tmp26;
	}
	HX_STACK_LINE(916)
	::kha::graphics2::truetype::Stbtt_temp_rect tmp5 = rect;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(916)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(StbTruetype_obj,stbtt_GetGlyphBitmapBoxSubpixel,return )

::kha::graphics2::truetype::Stbtt_temp_rect StbTruetype_obj::stbtt_GetGlyphBitmapBox( ::kha::graphics2::truetype::Stbtt_fontinfo font,int glyph,Float scale_x,Float scale_y){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetGlyphBitmapBox",0xb80f022e,"kha.graphics2.truetype.StbTruetype.stbtt_GetGlyphBitmapBox","kha/graphics2/truetype/StbTruetype.hx",919,0x5d9e0de9)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(glyph,"glyph")
	HX_STACK_ARG(scale_x,"scale_x")
	HX_STACK_ARG(scale_y,"scale_y")
	HX_STACK_LINE(920)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(920)
	int tmp1 = glyph;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(920)
	Float tmp2 = scale_x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(920)
	Float tmp3 = scale_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(920)
	::kha::graphics2::truetype::Stbtt_temp_rect tmp4 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphBitmapBoxSubpixel(tmp,tmp1,tmp2,tmp3,((Float)0.0),((Float)0.0));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(920)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(StbTruetype_obj,stbtt_GetGlyphBitmapBox,return )

::kha::graphics2::truetype::Stbtt_temp_rect StbTruetype_obj::stbtt_GetCodepointBitmapBoxSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo font,int codepoint,Float scale_x,Float scale_y,Float shift_x,Float shift_y){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetCodepointBitmapBoxSubpixel",0x1d51fc1d,"kha.graphics2.truetype.StbTruetype.stbtt_GetCodepointBitmapBoxSubpixel","kha/graphics2/truetype/StbTruetype.hx",923,0x5d9e0de9)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(codepoint,"codepoint")
	HX_STACK_ARG(scale_x,"scale_x")
	HX_STACK_ARG(scale_y,"scale_y")
	HX_STACK_ARG(shift_x,"shift_x")
	HX_STACK_ARG(shift_y,"shift_y")
	HX_STACK_LINE(924)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(924)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp1 = font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(924)
	int tmp2 = codepoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(924)
	int tmp3 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_FindGlyphIndex(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(924)
	Float tmp4 = scale_x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(924)
	Float tmp5 = scale_y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(924)
	Float tmp6 = shift_x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(924)
	Float tmp7 = shift_y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(924)
	::kha::graphics2::truetype::Stbtt_temp_rect tmp8 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphBitmapBoxSubpixel(tmp,tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(924)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(StbTruetype_obj,stbtt_GetCodepointBitmapBoxSubpixel,return )

::kha::graphics2::truetype::Stbtt_temp_rect StbTruetype_obj::stbtt_GetCodepointBitmapBox( ::kha::graphics2::truetype::Stbtt_fontinfo font,int codepoint,Float scale_x,Float scale_y){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetCodepointBitmapBox",0x0ea343f7,"kha.graphics2.truetype.StbTruetype.stbtt_GetCodepointBitmapBox","kha/graphics2/truetype/StbTruetype.hx",927,0x5d9e0de9)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(codepoint,"codepoint")
	HX_STACK_ARG(scale_x,"scale_x")
	HX_STACK_ARG(scale_y,"scale_y")
	HX_STACK_LINE(928)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(928)
	int tmp1 = codepoint;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(928)
	Float tmp2 = scale_x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(928)
	Float tmp3 = scale_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(928)
	::kha::graphics2::truetype::Stbtt_temp_rect tmp4 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetCodepointBitmapBoxSubpixel(tmp,tmp1,tmp2,tmp3,((Float)0.0),((Float)0.0));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(928)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(StbTruetype_obj,stbtt_GetCodepointBitmapBox,return )

::kha::graphics2::truetype::Stbtt__active_edge StbTruetype_obj::stbtt__new_active( Array< ::Dynamic > e,int eIndex,int off_x,Float start_point){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__new_active",0x85e5272c,"kha.graphics2.truetype.StbTruetype.stbtt__new_active","kha/graphics2/truetype/StbTruetype.hx",935,0x5d9e0de9)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(eIndex,"eIndex")
	HX_STACK_ARG(off_x,"off_x")
	HX_STACK_ARG(start_point,"start_point")
	HX_STACK_LINE(936)
	::kha::graphics2::truetype::Stbtt__active_edge z = ::kha::graphics2::truetype::Stbtt__active_edge_obj::__new();		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(937)
	int tmp = eIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(937)
	::kha::graphics2::truetype::Stbtt__edge tmp1 = e->__unsafe_get(tmp).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(937)
	Float tmp2 = tmp1->x1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(937)
	int tmp3 = eIndex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(937)
	::kha::graphics2::truetype::Stbtt__edge tmp4 = e->__unsafe_get(tmp3).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(937)
	Float tmp5 = tmp4->x0;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(937)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(937)
	int tmp7 = eIndex;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(937)
	::kha::graphics2::truetype::Stbtt__edge tmp8 = e->__unsafe_get(tmp7).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(937)
	Float tmp9 = tmp8->y1;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(937)
	int tmp10 = eIndex;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(937)
	::kha::graphics2::truetype::Stbtt__edge tmp11 = e->__unsafe_get(tmp10).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(937)
	Float tmp12 = tmp11->y0;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(937)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(937)
	Float tmp14 = (Float(tmp6) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(937)
	Float dxdy = tmp14;		HX_STACK_VAR(dxdy,"dxdy");
	HX_STACK_LINE(939)
	bool tmp15 = (z == null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(939)
	if ((tmp15)){
		HX_STACK_LINE(939)
		::kha::graphics2::truetype::Stbtt__active_edge tmp16 = z;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(939)
		return tmp16;
	}
	HX_STACK_LINE(940)
	z->fdx = dxdy;
	HX_STACK_LINE(941)
	bool tmp16 = (dxdy != ((Float)0.0));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(941)
	Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(941)
	if ((tmp16)){
		HX_STACK_LINE(941)
		tmp17 = (Float(((Float)1.0)) / Float(dxdy));
	}
	else{
		HX_STACK_LINE(941)
		tmp17 = ((Float)0.0);
	}
	HX_STACK_LINE(941)
	z->fdy = tmp17;
	HX_STACK_LINE(942)
	int tmp18 = eIndex;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(942)
	::kha::graphics2::truetype::Stbtt__edge tmp19 = e->__unsafe_get(tmp18).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(942)
	Float tmp20 = tmp19->x0;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(942)
	Float tmp21 = dxdy;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(942)
	Float tmp22 = start_point;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(942)
	int tmp23 = eIndex;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(942)
	::kha::graphics2::truetype::Stbtt__edge tmp24 = e->__unsafe_get(tmp23).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(942)
	Float tmp25 = tmp24->y0;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(942)
	Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(942)
	Float tmp27 = (tmp21 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(942)
	Float tmp28 = (tmp20 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(942)
	z->fx = tmp28;
	HX_STACK_LINE(943)
	hx::SubEq(z->fx,off_x);
	HX_STACK_LINE(944)
	int tmp29 = eIndex;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(944)
	::kha::graphics2::truetype::Stbtt__edge tmp30 = e->__unsafe_get(tmp29).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(944)
	bool tmp31 = tmp30->invert;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(944)
	Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(944)
	if ((tmp31)){
		HX_STACK_LINE(944)
		tmp32 = ((Float)1.0);
	}
	else{
		HX_STACK_LINE(944)
		tmp32 = ((Float)-1.0);
	}
	HX_STACK_LINE(944)
	z->direction = tmp32;
	HX_STACK_LINE(945)
	int tmp33 = eIndex;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(945)
	::kha::graphics2::truetype::Stbtt__edge tmp34 = e->__unsafe_get(tmp33).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(945)
	Float tmp35 = tmp34->y0;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(945)
	z->sy = tmp35;
	HX_STACK_LINE(946)
	int tmp36 = eIndex;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(946)
	::kha::graphics2::truetype::Stbtt__edge tmp37 = e->__unsafe_get(tmp36).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(946)
	Float tmp38 = tmp37->y1;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(946)
	z->ey = tmp38;
	HX_STACK_LINE(947)
	z->next = null();
	HX_STACK_LINE(948)
	::kha::graphics2::truetype::Stbtt__active_edge tmp39 = z;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(948)
	return tmp39;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(StbTruetype_obj,stbtt__new_active,return )

Void StbTruetype_obj::stbtt__handle_clipped_edge( Array< Float > scanline,int scanlineIndex,int x,::kha::graphics2::truetype::Stbtt__active_edge e,Float x0,Float y0,Float x1,Float y1){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__handle_clipped_edge",0xa6dfd0ed,"kha.graphics2.truetype.StbTruetype.stbtt__handle_clipped_edge","kha/graphics2/truetype/StbTruetype.hx",953,0x5d9e0de9)
		HX_STACK_ARG(scanline,"scanline")
		HX_STACK_ARG(scanlineIndex,"scanlineIndex")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(x0,"x0")
		HX_STACK_ARG(y0,"y0")
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_LINE(954)
		bool tmp = (y0 == y1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(954)
		if ((tmp)){
			HX_STACK_LINE(954)
			return null();
		}
		HX_STACK_LINE(955)
		{
			HX_STACK_LINE(955)
			bool tmp1 = (y0 < y1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(955)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(955)
			if ((tmp2)){
				HX_STACK_LINE(955)
				HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
			}
		}
		HX_STACK_LINE(956)
		{
			HX_STACK_LINE(956)
			bool tmp1 = (e->sy <= e->ey);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(956)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(956)
			if ((tmp2)){
				HX_STACK_LINE(956)
				HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
			}
		}
		HX_STACK_LINE(957)
		bool tmp1 = (y0 > e->ey);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(957)
		if ((tmp1)){
			HX_STACK_LINE(957)
			return null();
		}
		HX_STACK_LINE(958)
		bool tmp2 = (y1 < e->sy);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(958)
		if ((tmp2)){
			HX_STACK_LINE(958)
			return null();
		}
		HX_STACK_LINE(959)
		bool tmp3 = (y0 < e->sy);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(959)
		if ((tmp3)){
			HX_STACK_LINE(960)
			Float tmp4 = (x1 - x0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(960)
			Float tmp5 = (e->sy - y0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(960)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(960)
			Float tmp7 = (y1 - y0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(960)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(960)
			hx::AddEq(x0,tmp8);
			HX_STACK_LINE(961)
			y0 = e->sy;
		}
		HX_STACK_LINE(963)
		bool tmp4 = (y1 > e->ey);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(963)
		if ((tmp4)){
			HX_STACK_LINE(964)
			Float tmp5 = (x1 - x0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(964)
			Float tmp6 = (e->ey - y1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(964)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(964)
			Float tmp8 = (y1 - y0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(964)
			Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(964)
			hx::AddEq(x1,tmp9);
			HX_STACK_LINE(965)
			y1 = e->ey;
		}
		HX_STACK_LINE(968)
		bool tmp5 = (x0 == x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(968)
		if ((tmp5)){
			HX_STACK_LINE(969)
			Float tmp6 = x1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(969)
			int tmp7 = (x + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(969)
			bool tmp8 = (tmp6 <= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(969)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(969)
			if ((tmp9)){
				HX_STACK_LINE(969)
				HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
			}
		}
		else{
			HX_STACK_LINE(970)
			Float tmp6 = x0;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(970)
			int tmp7 = (x + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(970)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(970)
			if ((tmp8)){
				HX_STACK_LINE(971)
				bool tmp9 = (x1 >= x);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(971)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(971)
				if ((tmp10)){
					HX_STACK_LINE(971)
					HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
				}
			}
			else{
				HX_STACK_LINE(972)
				bool tmp9 = (x0 <= x);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(972)
				if ((tmp9)){
					HX_STACK_LINE(973)
					bool tmp10 = (x1 <= x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(973)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(973)
					if ((tmp11)){
						HX_STACK_LINE(973)
						HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
					}
				}
				else{
					HX_STACK_LINE(974)
					Float tmp10 = x0;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(974)
					int tmp11 = (x + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(974)
					bool tmp12 = (tmp10 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(974)
					if ((tmp12)){
						HX_STACK_LINE(975)
						Float tmp13 = x1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(975)
						int tmp14 = (x + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(975)
						bool tmp15 = (tmp13 >= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(975)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(975)
						if ((tmp16)){
							HX_STACK_LINE(975)
							HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
						}
					}
					else{
						HX_STACK_LINE(977)
						bool tmp13 = (x1 >= x);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(977)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(977)
						if ((tmp13)){
							HX_STACK_LINE(977)
							Float tmp15 = x1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(977)
							int tmp16 = (x + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(977)
							int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(977)
							tmp14 = (tmp15 <= tmp17);
						}
						else{
							HX_STACK_LINE(977)
							tmp14 = false;
						}
						HX_STACK_LINE(977)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(977)
						if ((tmp15)){
							HX_STACK_LINE(977)
							HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(979)
		bool tmp6 = (x0 <= x);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(979)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(979)
		if ((tmp6)){
			HX_STACK_LINE(979)
			tmp7 = (x1 <= x);
		}
		else{
			HX_STACK_LINE(979)
			tmp7 = false;
		}
		HX_STACK_LINE(979)
		if ((tmp7)){
			HX_STACK_LINE(980)
			int tmp8 = (scanlineIndex + x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(980)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(980)
			{
				HX_STACK_LINE(980)
				int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(980)
				Float tmp10 = scanline->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(980)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(980)
				Float tmp12 = e->direction;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(980)
				Float tmp13 = (y1 - y0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(980)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(980)
				Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(980)
				Float val = tmp15;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(980)
				int tmp16 = _g;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(980)
				Float tmp17 = val;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(980)
				Float tmp18 = scanline->__unsafe_set(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(980)
				tmp18;
			}
		}
		else{
			HX_STACK_LINE(981)
			Float tmp8 = x0;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(981)
			int tmp9 = (x + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(981)
			bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(981)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(981)
			if ((tmp10)){
				HX_STACK_LINE(981)
				Float tmp12 = x1;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(981)
				int tmp13 = (x + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(981)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(981)
				tmp11 = (tmp12 >= tmp14);
			}
			else{
				HX_STACK_LINE(981)
				tmp11 = false;
			}
			HX_STACK_LINE(981)
			if ((tmp11)){
			}
			else{
				HX_STACK_LINE(984)
				{
					HX_STACK_LINE(984)
					bool tmp12 = (x0 >= x);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(984)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(984)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(984)
					if ((tmp13)){
						HX_STACK_LINE(984)
						Float tmp15 = x0;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(984)
						int tmp16 = (x + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(984)
						int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(984)
						int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(984)
						tmp14 = (tmp15 <= tmp18);
					}
					else{
						HX_STACK_LINE(984)
						tmp14 = false;
					}
					HX_STACK_LINE(984)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(984)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(984)
					if ((tmp15)){
						HX_STACK_LINE(984)
						tmp16 = (x1 >= x);
					}
					else{
						HX_STACK_LINE(984)
						tmp16 = false;
					}
					HX_STACK_LINE(984)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(984)
					if ((tmp16)){
						HX_STACK_LINE(984)
						Float tmp18 = x1;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(984)
						int tmp19 = (x + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(984)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(984)
						tmp17 = (tmp18 <= tmp20);
					}
					else{
						HX_STACK_LINE(984)
						tmp17 = false;
					}
					HX_STACK_LINE(984)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(984)
					if ((tmp18)){
						HX_STACK_LINE(984)
						HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
					}
				}
				HX_STACK_LINE(985)
				{
					HX_STACK_LINE(985)
					int tmp12 = (scanlineIndex + x);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(985)
					int _g = tmp12;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp13 = _g;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						Float tmp14 = scanline->__unsafe_get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(985)
						Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(985)
						Float tmp16 = e->direction;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(985)
						Float tmp17 = (y1 - y0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(985)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(985)
						Float tmp19 = (x0 - x);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(985)
						Float tmp20 = (x1 - x);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(985)
						Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(985)
						Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(985)
						Float tmp23 = ((int)1 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(985)
						Float tmp24 = (tmp18 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(985)
						Float tmp25 = (tmp15 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(985)
						Float val = tmp25;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						int tmp26 = _g;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(985)
						Float tmp27 = val;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(985)
						Float tmp28 = scanline->__unsafe_set(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(985)
						tmp28;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(StbTruetype_obj,stbtt__handle_clipped_edge,(void))

Void StbTruetype_obj::stbtt__fill_active_edges_new( Array< Float > scanline,Array< Float > scanline_fill,int scanline_fillIndex,int len,::kha::graphics2::truetype::Stbtt__active_edge e,Float y_top){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__fill_active_edges_new",0xf3ac6eb3,"kha.graphics2.truetype.StbTruetype.stbtt__fill_active_edges_new","kha/graphics2/truetype/StbTruetype.hx",989,0x5d9e0de9)
		HX_STACK_ARG(scanline,"scanline")
		HX_STACK_ARG(scanline_fill,"scanline_fill")
		HX_STACK_ARG(scanline_fillIndex,"scanline_fillIndex")
		HX_STACK_ARG(len,"len")
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(y_top,"y_top")
		HX_STACK_LINE(990)
		Float tmp = (y_top + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(990)
		Float y_bottom = tmp;		HX_STACK_VAR(y_bottom,"y_bottom");
		HX_STACK_LINE(992)
		while((true)){
			HX_STACK_LINE(992)
			bool tmp1 = (e != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(992)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(992)
			if ((tmp2)){
				HX_STACK_LINE(992)
				break;
			}
			HX_STACK_LINE(996)
			{
				HX_STACK_LINE(996)
				bool tmp3 = (e->ey >= y_top);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(996)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(996)
				if ((tmp4)){
					HX_STACK_LINE(996)
					HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
				}
			}
			HX_STACK_LINE(998)
			bool tmp3 = (e->fdx == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(998)
			if ((tmp3)){
				HX_STACK_LINE(999)
				Float x0 = e->fx;		HX_STACK_VAR(x0,"x0");
				HX_STACK_LINE(1000)
				bool tmp4 = (x0 < len);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1000)
				if ((tmp4)){
					HX_STACK_LINE(1001)
					bool tmp5 = (x0 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1001)
					if ((tmp5)){
						HX_STACK_LINE(1002)
						Array< Float > tmp6 = scanline;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1002)
						Float tmp7 = x0;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1002)
						int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1002)
						::kha::graphics2::truetype::Stbtt__active_edge tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1002)
						Float tmp10 = x0;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1002)
						Float tmp11 = y_top;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1002)
						Float tmp12 = x0;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1002)
						Float tmp13 = y_bottom;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1002)
						::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp6,(int)0,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
						HX_STACK_LINE(1003)
						Array< Float > tmp14 = scanline_fill;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1003)
						int tmp15 = (scanline_fillIndex - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1003)
						Float tmp16 = (x0 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1003)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1003)
						::kha::graphics2::truetype::Stbtt__active_edge tmp18 = e;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1003)
						Float tmp19 = x0;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1003)
						Float tmp20 = y_top;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1003)
						Float tmp21 = x0;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1003)
						Float tmp22 = y_bottom;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1003)
						::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp14,tmp15,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22);
					}
					else{
						HX_STACK_LINE(1005)
						Array< Float > tmp6 = scanline_fill;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1005)
						int tmp7 = (scanline_fillIndex - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1005)
						::kha::graphics2::truetype::Stbtt__active_edge tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1005)
						Float tmp9 = x0;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1005)
						Float tmp10 = y_top;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1005)
						Float tmp11 = x0;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1005)
						Float tmp12 = y_bottom;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1005)
						::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp6,tmp7,(int)0,tmp8,tmp9,tmp10,tmp11,tmp12);
					}
				}
			}
			else{
				HX_STACK_LINE(1009)
				Float x0 = e->fx;		HX_STACK_VAR(x0,"x0");
				HX_STACK_LINE(1010)
				Float dx = e->fdx;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(1011)
				Float tmp4 = (x0 + dx);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1011)
				Float xb = tmp4;		HX_STACK_VAR(xb,"xb");
				HX_STACK_LINE(1012)
				Float x_top;		HX_STACK_VAR(x_top,"x_top");
				HX_STACK_LINE(1012)
				Float x_bottom;		HX_STACK_VAR(x_bottom,"x_bottom");
				HX_STACK_LINE(1013)
				Float sy0;		HX_STACK_VAR(sy0,"sy0");
				HX_STACK_LINE(1013)
				Float sy1;		HX_STACK_VAR(sy1,"sy1");
				HX_STACK_LINE(1014)
				Float dy = e->fdy;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(1015)
				{
					HX_STACK_LINE(1015)
					bool tmp5 = (e->sy <= y_bottom);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1015)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1015)
					if ((tmp5)){
						HX_STACK_LINE(1015)
						tmp6 = (e->ey >= y_top);
					}
					else{
						HX_STACK_LINE(1015)
						tmp6 = false;
					}
					HX_STACK_LINE(1015)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1015)
					if ((tmp7)){
						HX_STACK_LINE(1015)
						HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
					}
				}
				HX_STACK_LINE(1020)
				bool tmp5 = (e->sy > y_top);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1020)
				if ((tmp5)){
					HX_STACK_LINE(1021)
					Float tmp6 = x0;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1021)
					Float tmp7 = dx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1021)
					Float tmp8 = (e->sy - y_top);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1021)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1021)
					Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1021)
					x_top = tmp10;
					HX_STACK_LINE(1022)
					sy0 = e->sy;
				}
				else{
					HX_STACK_LINE(1024)
					x_top = x0;
					HX_STACK_LINE(1025)
					sy0 = y_top;
				}
				HX_STACK_LINE(1027)
				bool tmp6 = (e->ey < y_bottom);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1027)
				if ((tmp6)){
					HX_STACK_LINE(1028)
					Float tmp7 = x0;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1028)
					Float tmp8 = dx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1028)
					Float tmp9 = (e->ey - y_top);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1028)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1028)
					Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1028)
					x_bottom = tmp11;
					HX_STACK_LINE(1029)
					sy1 = e->ey;
				}
				else{
					HX_STACK_LINE(1031)
					x_bottom = xb;
					HX_STACK_LINE(1032)
					sy1 = y_bottom;
				}
				HX_STACK_LINE(1035)
				bool tmp7 = (x_top >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1035)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1035)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1035)
				if ((tmp8)){
					HX_STACK_LINE(1035)
					tmp9 = (x_bottom >= (int)0);
				}
				else{
					HX_STACK_LINE(1035)
					tmp9 = false;
				}
				HX_STACK_LINE(1035)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1035)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1035)
				if ((tmp10)){
					HX_STACK_LINE(1035)
					tmp11 = (x_top < len);
				}
				else{
					HX_STACK_LINE(1035)
					tmp11 = false;
				}
				HX_STACK_LINE(1035)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1035)
				if ((tmp11)){
					HX_STACK_LINE(1035)
					tmp12 = (x_bottom < len);
				}
				else{
					HX_STACK_LINE(1035)
					tmp12 = false;
				}
				HX_STACK_LINE(1035)
				if ((tmp12)){
					HX_STACK_LINE(1038)
					Float tmp13 = x_top;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1038)
					int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1038)
					Float tmp15 = x_bottom;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1038)
					int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1038)
					bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1038)
					if ((tmp17)){
						HX_STACK_LINE(1039)
						Float height;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(1041)
						Float tmp18 = x_top;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1041)
						int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1041)
						int x = tmp19;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1042)
						Float tmp20 = (sy1 - sy0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1042)
						height = tmp20;
						HX_STACK_LINE(1043)
						{
							HX_STACK_LINE(1043)
							bool tmp21 = (x >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1043)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1043)
							if ((tmp21)){
								HX_STACK_LINE(1043)
								tmp22 = (x < len);
							}
							else{
								HX_STACK_LINE(1043)
								tmp22 = false;
							}
							HX_STACK_LINE(1043)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1043)
							if ((tmp23)){
								HX_STACK_LINE(1043)
								HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
							}
						}
						HX_STACK_LINE(1044)
						{
							HX_STACK_LINE(1044)
							int _g = x;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1044)
							{
								HX_STACK_LINE(1044)
								int tmp21 = _g;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1044)
								Float tmp22 = scanline->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1044)
								Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1044)
								Float tmp24 = e->direction;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1044)
								Float tmp25 = (x_top - x);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1044)
								Float tmp26 = (x_bottom - x);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1044)
								Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1044)
								Float tmp28 = (Float(tmp27) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1044)
								Float tmp29 = ((int)1 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1044)
								Float tmp30 = (tmp24 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1044)
								Float tmp31 = height;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1044)
								Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1044)
								Float tmp33 = (tmp23 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1044)
								Float val = tmp33;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(1044)
								int tmp34 = _g;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1044)
								Float tmp35 = val;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1044)
								Float tmp36 = scanline->__unsafe_set(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1044)
								tmp36;
							}
						}
						HX_STACK_LINE(1045)
						{
							HX_STACK_LINE(1045)
							int tmp21 = (scanline_fillIndex + x);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1045)
							int _g = tmp21;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1045)
							{
								HX_STACK_LINE(1045)
								int tmp22 = _g;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1045)
								Float tmp23 = scanline_fill->__unsafe_get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1045)
								Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1045)
								Float tmp25 = (e->direction * height);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1045)
								Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1045)
								Float val = tmp26;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(1045)
								int tmp27 = _g;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1045)
								Float tmp28 = val;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1045)
								Float tmp29 = scanline_fill->__unsafe_set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1045)
								tmp29;
							}
						}
					}
					else{
						HX_STACK_LINE(1047)
						Dynamic x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1047)
						int x1;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(1047)
						int x2;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(1048)
						Float y_crossing;		HX_STACK_VAR(y_crossing,"y_crossing");
						HX_STACK_LINE(1048)
						Float step;		HX_STACK_VAR(step,"step");
						HX_STACK_LINE(1048)
						Float sign;		HX_STACK_VAR(sign,"sign");
						HX_STACK_LINE(1048)
						Float area;		HX_STACK_VAR(area,"area");
						HX_STACK_LINE(1050)
						bool tmp18 = (x_top > x_bottom);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1050)
						if ((tmp18)){
							HX_STACK_LINE(1052)
							Float t;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1053)
							Float tmp19 = y_bottom;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1053)
							Float tmp20 = (sy0 - y_top);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1053)
							Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1053)
							sy0 = tmp21;
							HX_STACK_LINE(1054)
							Float tmp22 = y_bottom;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1054)
							Float tmp23 = (sy1 - y_top);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1054)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1054)
							sy1 = tmp24;
							HX_STACK_LINE(1055)
							t = sy0;
							HX_STACK_LINE(1055)
							sy0 = sy1;
							HX_STACK_LINE(1055)
							sy1 = t;
							HX_STACK_LINE(1056)
							t = x_bottom;
							HX_STACK_LINE(1056)
							x_bottom = x_top;
							HX_STACK_LINE(1056)
							x_top = t;
							HX_STACK_LINE(1057)
							Float tmp25 = dx;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1057)
							Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1057)
							dx = tmp26;
							HX_STACK_LINE(1058)
							Float tmp27 = dy;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1058)
							Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1058)
							dy = tmp28;
							HX_STACK_LINE(1059)
							t = x0;
							HX_STACK_LINE(1059)
							x0 = xb;
							HX_STACK_LINE(1059)
							xb = t;
						}
						HX_STACK_LINE(1062)
						Float tmp19 = x_top;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1062)
						int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1062)
						x1 = tmp20;
						HX_STACK_LINE(1063)
						Float tmp21 = x_bottom;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1063)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1063)
						x2 = tmp22;
						HX_STACK_LINE(1065)
						int tmp23 = (x1 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1065)
						Float tmp24 = x0;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1065)
						Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1065)
						Float tmp26 = dy;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1065)
						Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1065)
						Float tmp28 = y_top;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1065)
						Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1065)
						y_crossing = tmp29;
						HX_STACK_LINE(1067)
						sign = e->direction;
						HX_STACK_LINE(1069)
						Float tmp30 = sign;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1069)
						Float tmp31 = (y_crossing - sy0);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1069)
						Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1069)
						area = tmp32;
						HX_STACK_LINE(1071)
						{
							HX_STACK_LINE(1071)
							int _g = x1;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1071)
							{
								HX_STACK_LINE(1071)
								int tmp33 = _g;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1071)
								Float tmp34 = scanline->__unsafe_get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1071)
								Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1071)
								Float tmp36 = area;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1071)
								Float tmp37 = (x_top - x1);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1071)
								int tmp38 = (x1 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1071)
								int tmp39 = x1;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1071)
								int tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1071)
								Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1071)
								Float tmp42 = (Float(tmp41) / Float((int)2));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1071)
								Float tmp43 = ((int)1 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1071)
								Float tmp44 = (tmp36 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1071)
								Float tmp45 = (tmp35 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1071)
								Float val = tmp45;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(1071)
								int tmp46 = _g;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1071)
								Float tmp47 = val;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1071)
								Float tmp48 = scanline->__unsafe_set(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1071)
								tmp48;
							}
						}
						HX_STACK_LINE(1073)
						Float tmp33 = (sign * dy);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1073)
						step = tmp33;
						HX_STACK_LINE(1074)
						{
							HX_STACK_LINE(1074)
							int tmp34 = (x1 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1074)
							int _g = tmp34;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1074)
							while((true)){
								HX_STACK_LINE(1074)
								bool tmp35 = (_g < x2);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1074)
								bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1074)
								if ((tmp36)){
									HX_STACK_LINE(1074)
									break;
								}
								HX_STACK_LINE(1074)
								int tmp37 = (_g)++;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1074)
								int x3 = tmp37;		HX_STACK_VAR(x3,"x3");
								HX_STACK_LINE(1075)
								{
									HX_STACK_LINE(1075)
									int _g1 = x3;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(1075)
									{
										HX_STACK_LINE(1075)
										int tmp38 = _g1;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1075)
										Float tmp39 = scanline->__unsafe_get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1075)
										Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1075)
										Float tmp41 = area;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1075)
										Float tmp42 = (Float(step) / Float((int)2));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1075)
										Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1075)
										Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1075)
										Float val = tmp44;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1075)
										int tmp45 = _g1;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1075)
										Float tmp46 = val;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1075)
										Float tmp47 = scanline->__unsafe_set(tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1075)
										tmp47;
									}
								}
								HX_STACK_LINE(1076)
								hx::AddEq(area,step);
							}
						}
						HX_STACK_LINE(1078)
						Float tmp34 = dy;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1078)
						int tmp35 = x2;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1078)
						int tmp36 = (x1 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1078)
						int tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1078)
						Float tmp38 = (tmp34 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1078)
						hx::AddEq(y_crossing,tmp38);
						HX_STACK_LINE(1080)
						{
							HX_STACK_LINE(1080)
							Float tmp39 = area;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1080)
							Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1080)
							bool tmp41 = (tmp40 <= ((Float)1.01));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1080)
							bool value = tmp41;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(1080)
							bool tmp42 = value;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1080)
							bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1080)
							if ((tmp43)){
								HX_STACK_LINE(1080)
								HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
							}
						}
						HX_STACK_LINE(1082)
						{
							HX_STACK_LINE(1082)
							int _g = x2;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1082)
							{
								HX_STACK_LINE(1082)
								int tmp39 = _g;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1082)
								Float tmp40 = scanline->__unsafe_get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1082)
								Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1082)
								Float tmp42 = area;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1082)
								Float tmp43 = sign;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1082)
								int tmp44 = (x2 - x2);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1082)
								Float tmp45 = (x_bottom - x2);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1082)
								Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1082)
								Float tmp47 = (Float(tmp46) / Float((int)2));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1082)
								Float tmp48 = ((int)1 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1082)
								Float tmp49 = (tmp43 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1082)
								Float tmp50 = (sy1 - y_crossing);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1082)
								Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1082)
								Float tmp52 = (tmp42 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1082)
								Float tmp53 = (tmp41 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1082)
								Float val = tmp53;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(1082)
								int tmp54 = _g;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1082)
								Float tmp55 = val;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1082)
								Float tmp56 = scanline->__unsafe_set(tmp54,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1082)
								tmp56;
							}
						}
						HX_STACK_LINE(1084)
						{
							HX_STACK_LINE(1084)
							int tmp39 = (scanline_fillIndex + x2);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1084)
							int _g = tmp39;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1084)
							{
								HX_STACK_LINE(1084)
								int tmp40 = _g;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1084)
								Float tmp41 = scanline_fill->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1084)
								Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1084)
								Float tmp43 = sign;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1084)
								Float tmp44 = (sy1 - sy0);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1084)
								Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1084)
								Float tmp46 = (tmp42 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1084)
								Float val = tmp46;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(1084)
								int tmp47 = _g;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1084)
								Float tmp48 = val;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1084)
								Float tmp49 = scanline_fill->__unsafe_set(tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1084)
								tmp49;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1091)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1091)
					while((true)){
						HX_STACK_LINE(1091)
						bool tmp13 = (_g < len);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1091)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1091)
						if ((tmp14)){
							HX_STACK_LINE(1091)
							break;
						}
						HX_STACK_LINE(1091)
						int tmp15 = (_g)++;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1091)
						int x = tmp15;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1106)
						Float y0 = y_top;		HX_STACK_VAR(y0,"y0");
						HX_STACK_LINE(1107)
						Float x1 = x;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(1108)
						int tmp16 = (x + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1108)
						Float x2 = tmp16;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(1109)
						Float x3 = xb;		HX_STACK_VAR(x3,"x3");
						HX_STACK_LINE(1110)
						Float y3 = y_bottom;		HX_STACK_VAR(y3,"y3");
						HX_STACK_LINE(1111)
						Float y1;		HX_STACK_VAR(y1,"y1");
						HX_STACK_LINE(1111)
						Float y2;		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(1116)
						Float tmp17 = (x - x0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1116)
						Float tmp18 = dx;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1116)
						Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1116)
						Float tmp20 = y_top;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1116)
						Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1116)
						y1 = tmp21;
						HX_STACK_LINE(1117)
						int tmp22 = (x + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1117)
						Float tmp23 = x0;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1117)
						Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1117)
						Float tmp25 = dx;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1117)
						Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1117)
						Float tmp27 = y_top;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1117)
						Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1117)
						y2 = tmp28;
						HX_STACK_LINE(1119)
						bool tmp29 = (x0 < x1);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1119)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1119)
						if ((tmp29)){
							HX_STACK_LINE(1119)
							tmp30 = (x3 > x2);
						}
						else{
							HX_STACK_LINE(1119)
							tmp30 = false;
						}
						HX_STACK_LINE(1119)
						if ((tmp30)){
							HX_STACK_LINE(1120)
							Array< Float > tmp31 = scanline;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1120)
							int tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1120)
							::kha::graphics2::truetype::Stbtt__active_edge tmp33 = e;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1120)
							Float tmp34 = x0;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1120)
							Float tmp35 = y0;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1120)
							Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1120)
							Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1120)
							::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp31,(int)0,tmp32,tmp33,tmp34,tmp35,tmp36,tmp37);
							HX_STACK_LINE(1121)
							Array< Float > tmp38 = scanline;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1121)
							int tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1121)
							::kha::graphics2::truetype::Stbtt__active_edge tmp40 = e;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1121)
							Float tmp41 = x1;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1121)
							Float tmp42 = y1;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1121)
							Float tmp43 = x2;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1121)
							Float tmp44 = y2;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1121)
							::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp38,(int)0,tmp39,tmp40,tmp41,tmp42,tmp43,tmp44);
							HX_STACK_LINE(1122)
							Array< Float > tmp45 = scanline;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1122)
							int tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1122)
							::kha::graphics2::truetype::Stbtt__active_edge tmp47 = e;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1122)
							Float tmp48 = x2;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1122)
							Float tmp49 = y2;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1122)
							Float tmp50 = x3;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1122)
							Float tmp51 = y3;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1122)
							::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp45,(int)0,tmp46,tmp47,tmp48,tmp49,tmp50,tmp51);
						}
						else{
							HX_STACK_LINE(1123)
							bool tmp31 = (x3 < x1);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1123)
							bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1123)
							if ((tmp31)){
								HX_STACK_LINE(1123)
								tmp32 = (x0 > x2);
							}
							else{
								HX_STACK_LINE(1123)
								tmp32 = false;
							}
							HX_STACK_LINE(1123)
							if ((tmp32)){
								HX_STACK_LINE(1124)
								Array< Float > tmp33 = scanline;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1124)
								int tmp34 = x;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1124)
								::kha::graphics2::truetype::Stbtt__active_edge tmp35 = e;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1124)
								Float tmp36 = x0;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1124)
								Float tmp37 = y0;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1124)
								Float tmp38 = x2;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1124)
								Float tmp39 = y2;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1124)
								::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp33,(int)0,tmp34,tmp35,tmp36,tmp37,tmp38,tmp39);
								HX_STACK_LINE(1125)
								Array< Float > tmp40 = scanline;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1125)
								int tmp41 = x;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1125)
								::kha::graphics2::truetype::Stbtt__active_edge tmp42 = e;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1125)
								Float tmp43 = x2;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1125)
								Float tmp44 = y2;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1125)
								Float tmp45 = x1;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1125)
								Float tmp46 = y1;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1125)
								::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp40,(int)0,tmp41,tmp42,tmp43,tmp44,tmp45,tmp46);
								HX_STACK_LINE(1126)
								Array< Float > tmp47 = scanline;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1126)
								int tmp48 = x;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1126)
								::kha::graphics2::truetype::Stbtt__active_edge tmp49 = e;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1126)
								Float tmp50 = x1;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1126)
								Float tmp51 = y1;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1126)
								Float tmp52 = x3;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1126)
								Float tmp53 = y3;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1126)
								::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp47,(int)0,tmp48,tmp49,tmp50,tmp51,tmp52,tmp53);
							}
							else{
								HX_STACK_LINE(1127)
								bool tmp33 = (x0 < x1);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1127)
								bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1127)
								if ((tmp33)){
									HX_STACK_LINE(1127)
									tmp34 = (x3 > x1);
								}
								else{
									HX_STACK_LINE(1127)
									tmp34 = false;
								}
								HX_STACK_LINE(1127)
								if ((tmp34)){
									HX_STACK_LINE(1128)
									Array< Float > tmp35 = scanline;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1128)
									int tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1128)
									::kha::graphics2::truetype::Stbtt__active_edge tmp37 = e;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1128)
									Float tmp38 = x0;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1128)
									Float tmp39 = y0;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1128)
									Float tmp40 = x1;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1128)
									Float tmp41 = y1;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1128)
									::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp35,(int)0,tmp36,tmp37,tmp38,tmp39,tmp40,tmp41);
									HX_STACK_LINE(1129)
									Array< Float > tmp42 = scanline;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1129)
									int tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1129)
									::kha::graphics2::truetype::Stbtt__active_edge tmp44 = e;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1129)
									Float tmp45 = x1;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1129)
									Float tmp46 = y1;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1129)
									Float tmp47 = x3;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1129)
									Float tmp48 = y3;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1129)
									::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp42,(int)0,tmp43,tmp44,tmp45,tmp46,tmp47,tmp48);
								}
								else{
									HX_STACK_LINE(1130)
									bool tmp35 = (x3 < x1);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1130)
									bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1130)
									if ((tmp35)){
										HX_STACK_LINE(1130)
										tmp36 = (x0 > x1);
									}
									else{
										HX_STACK_LINE(1130)
										tmp36 = false;
									}
									HX_STACK_LINE(1130)
									if ((tmp36)){
										HX_STACK_LINE(1131)
										Array< Float > tmp37 = scanline;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1131)
										int tmp38 = x;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1131)
										::kha::graphics2::truetype::Stbtt__active_edge tmp39 = e;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1131)
										Float tmp40 = x0;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1131)
										Float tmp41 = y0;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1131)
										Float tmp42 = x1;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1131)
										Float tmp43 = y1;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1131)
										::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp37,(int)0,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);
										HX_STACK_LINE(1132)
										Array< Float > tmp44 = scanline;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1132)
										int tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1132)
										::kha::graphics2::truetype::Stbtt__active_edge tmp46 = e;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1132)
										Float tmp47 = x1;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1132)
										Float tmp48 = y1;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1132)
										Float tmp49 = x3;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1132)
										Float tmp50 = y3;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(1132)
										::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp44,(int)0,tmp45,tmp46,tmp47,tmp48,tmp49,tmp50);
									}
									else{
										HX_STACK_LINE(1133)
										bool tmp37 = (x0 < x2);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1133)
										bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1133)
										if ((tmp37)){
											HX_STACK_LINE(1133)
											tmp38 = (x3 > x2);
										}
										else{
											HX_STACK_LINE(1133)
											tmp38 = false;
										}
										HX_STACK_LINE(1133)
										if ((tmp38)){
											HX_STACK_LINE(1134)
											Array< Float > tmp39 = scanline;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1134)
											int tmp40 = x;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1134)
											::kha::graphics2::truetype::Stbtt__active_edge tmp41 = e;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1134)
											Float tmp42 = x0;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1134)
											Float tmp43 = y0;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1134)
											Float tmp44 = x2;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1134)
											Float tmp45 = y2;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1134)
											::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp39,(int)0,tmp40,tmp41,tmp42,tmp43,tmp44,tmp45);
											HX_STACK_LINE(1135)
											Array< Float > tmp46 = scanline;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1135)
											int tmp47 = x;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(1135)
											::kha::graphics2::truetype::Stbtt__active_edge tmp48 = e;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(1135)
											Float tmp49 = x2;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(1135)
											Float tmp50 = y2;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1135)
											Float tmp51 = x3;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(1135)
											Float tmp52 = y3;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(1135)
											::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp46,(int)0,tmp47,tmp48,tmp49,tmp50,tmp51,tmp52);
										}
										else{
											HX_STACK_LINE(1136)
											bool tmp39 = (x3 < x2);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1136)
											bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1136)
											if ((tmp39)){
												HX_STACK_LINE(1136)
												tmp40 = (x0 > x2);
											}
											else{
												HX_STACK_LINE(1136)
												tmp40 = false;
											}
											HX_STACK_LINE(1136)
											if ((tmp40)){
												HX_STACK_LINE(1137)
												Array< Float > tmp41 = scanline;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1137)
												int tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1137)
												::kha::graphics2::truetype::Stbtt__active_edge tmp43 = e;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1137)
												Float tmp44 = x0;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1137)
												Float tmp45 = y0;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1137)
												Float tmp46 = x2;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1137)
												Float tmp47 = y2;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1137)
												::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp41,(int)0,tmp42,tmp43,tmp44,tmp45,tmp46,tmp47);
												HX_STACK_LINE(1138)
												Array< Float > tmp48 = scanline;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1138)
												int tmp49 = x;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1138)
												::kha::graphics2::truetype::Stbtt__active_edge tmp50 = e;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1138)
												Float tmp51 = x2;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1138)
												Float tmp52 = y2;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1138)
												Float tmp53 = x3;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1138)
												Float tmp54 = y3;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1138)
												::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp48,(int)0,tmp49,tmp50,tmp51,tmp52,tmp53,tmp54);
											}
											else{
												HX_STACK_LINE(1140)
												Array< Float > tmp41 = scanline;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1140)
												int tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1140)
												::kha::graphics2::truetype::Stbtt__active_edge tmp43 = e;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1140)
												Float tmp44 = x0;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1140)
												Float tmp45 = y0;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1140)
												Float tmp46 = x3;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1140)
												Float tmp47 = y3;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1140)
												::kha::graphics2::truetype::StbTruetype_obj::stbtt__handle_clipped_edge(tmp41,(int)0,tmp42,tmp43,tmp44,tmp45,tmp46,tmp47);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(1145)
			e = e->next;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(StbTruetype_obj,stbtt__fill_active_edges_new,(void))

Void StbTruetype_obj::stbtt__rasterize_sorted_edges( ::kha::graphics2::truetype::Stbtt__bitmap result,Array< ::Dynamic > e,int n,int vsubsample,int off_x,int off_y){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__rasterize_sorted_edges",0x45291a03,"kha.graphics2.truetype.StbTruetype.stbtt__rasterize_sorted_edges","kha/graphics2/truetype/StbTruetype.hx",1150,0x5d9e0de9)
		HX_STACK_ARG(result,"result")
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(vsubsample,"vsubsample")
		HX_STACK_ARG(off_x,"off_x")
		HX_STACK_ARG(off_y,"off_y")
		HX_STACK_LINE(1151)
		::kha::graphics2::truetype::Stbtt__active_edge active = null();		HX_STACK_VAR(active,"active");
		HX_STACK_LINE(1152)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1152)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1152)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1153)
		Array< Float > scanline;		HX_STACK_VAR(scanline,"scanline");
		HX_STACK_LINE(1153)
		Array< Float > scanline2;		HX_STACK_VAR(scanline2,"scanline2");
		HX_STACK_LINE(1154)
		int scanline2Index = (int)0;		HX_STACK_VAR(scanline2Index,"scanline2Index");
		HX_STACK_LINE(1155)
		int eIndex = (int)0;		HX_STACK_VAR(eIndex,"eIndex");
		HX_STACK_LINE(1157)
		bool tmp = (result->w > (int)64);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1157)
		if ((tmp)){
			HX_STACK_LINE(1158)
			Array< Float > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1158)
			{
				HX_STACK_LINE(1158)
				Array< Float > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(1158)
				Array< Float > tmp2 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1158)
				this1 = tmp2;
				HX_STACK_LINE(1158)
				int tmp3 = (result->w * (int)2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1158)
				int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1158)
				this1->__SetSizeExact(tmp4);
				HX_STACK_LINE(1158)
				tmp1 = this1;
			}
			HX_STACK_LINE(1158)
			scanline = tmp1;
		}
		else{
			HX_STACK_LINE(1160)
			Array< Float > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1160)
			{
				HX_STACK_LINE(1160)
				Array< Float > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(1160)
				Array< Float > tmp2 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1160)
				this1 = tmp2;
				HX_STACK_LINE(1160)
				this1->__SetSizeExact((int)129);
				HX_STACK_LINE(1160)
				tmp1 = this1;
			}
			HX_STACK_LINE(1160)
			scanline = tmp1;
		}
		HX_STACK_LINE(1162)
		scanline2 = scanline;
		HX_STACK_LINE(1163)
		scanline2Index = result->w;
		HX_STACK_LINE(1165)
		y = off_y;
		HX_STACK_LINE(1166)
		int tmp1 = (off_y + result->h);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1166)
		int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1166)
		int tmp3 = (eIndex + n);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1166)
		::kha::graphics2::truetype::Stbtt__edge tmp4 = e->__unsafe_get(tmp3).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1166)
		tmp4->y0 = tmp2;
		HX_STACK_LINE(1168)
		while((true)){
			HX_STACK_LINE(1168)
			bool tmp5 = (j < result->h);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1168)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1168)
			if ((tmp6)){
				HX_STACK_LINE(1168)
				break;
			}
			HX_STACK_LINE(1170)
			Float tmp7 = (y + ((Float)0.0));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1170)
			Float scan_y_top = tmp7;		HX_STACK_VAR(scan_y_top,"scan_y_top");
			HX_STACK_LINE(1171)
			Float tmp8 = (y + ((Float)1.0));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1171)
			Float scan_y_bottom = tmp8;		HX_STACK_VAR(scan_y_bottom,"scan_y_bottom");
			HX_STACK_LINE(1172)
			::kha::graphics2::truetype::Stbtt__active_edge step_value = active;		HX_STACK_VAR(step_value,"step_value");
			HX_STACK_LINE(1172)
			Dynamic step_parent = null();		HX_STACK_VAR(step_parent,"step_parent");
			HX_STACK_LINE(1174)
			{
				HX_STACK_LINE(1174)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1174)
				int _g = result->w;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1174)
				while((true)){
					HX_STACK_LINE(1174)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1174)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1174)
					if ((tmp10)){
						HX_STACK_LINE(1174)
						break;
					}
					HX_STACK_LINE(1174)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1174)
					int i1 = tmp11;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1174)
					int tmp12 = i1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1174)
					Float tmp13 = scanline->__unsafe_set(tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1174)
					tmp13;
				}
			}
			HX_STACK_LINE(1175)
			{
				HX_STACK_LINE(1175)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1175)
				int tmp9 = (result->w + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1175)
				int _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1175)
				while((true)){
					HX_STACK_LINE(1175)
					bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1175)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1175)
					if ((tmp11)){
						HX_STACK_LINE(1175)
						break;
					}
					HX_STACK_LINE(1175)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1175)
					int i1 = tmp12;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1175)
					int tmp13 = (scanline2Index + i1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1175)
					Float tmp14 = scanline2->__unsafe_set(tmp13,(int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1175)
					tmp14;
				}
			}
			HX_STACK_LINE(1179)
			while((true)){
				HX_STACK_LINE(1179)
				bool tmp9 = (step_value != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1179)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1179)
				if ((tmp10)){
					HX_STACK_LINE(1179)
					break;
				}
				HX_STACK_LINE(1150)
				::kha::graphics2::truetype::Stbtt__active_edge z = step_value;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(1181)
				bool tmp11 = (z->ey <= scan_y_top);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1181)
				if ((tmp11)){
					HX_STACK_LINE(1183)
					bool tmp12 = (step_parent == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1183)
					if ((tmp12)){
						HX_STACK_LINE(1184)
						active = z->next;
						HX_STACK_LINE(1185)
						step_value = z->next;
					}
					else{
						HX_STACK_LINE(1188)
						step_parent->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = z->next;
						HX_STACK_LINE(1189)
						step_value = z->next;
					}
					HX_STACK_LINE(1192)
					{
						HX_STACK_LINE(1192)
						bool tmp13 = (z->direction != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1192)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1192)
						if ((tmp14)){
							HX_STACK_LINE(1192)
							HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
						}
					}
					HX_STACK_LINE(1193)
					z->direction = (int)0;
				}
				else{
					HX_STACK_LINE(1196)
					step_parent = step_value;
					HX_STACK_LINE(1197)
					step_value = step_value->next;
				}
			}
			HX_STACK_LINE(1202)
			while((true)){
				HX_STACK_LINE(1202)
				int tmp9 = eIndex;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1202)
				::kha::graphics2::truetype::Stbtt__edge tmp10 = e->__unsafe_get(tmp9).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1202)
				Float tmp11 = tmp10->y0;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1202)
				Float tmp12 = scan_y_bottom;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1202)
				bool tmp13 = (tmp11 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1202)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1202)
				if ((tmp14)){
					HX_STACK_LINE(1202)
					break;
				}
				HX_STACK_LINE(1203)
				int tmp15 = eIndex;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1203)
				::kha::graphics2::truetype::Stbtt__edge tmp16 = e->__unsafe_get(tmp15).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1203)
				Float tmp17 = tmp16->y0;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1203)
				int tmp18 = eIndex;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1203)
				::kha::graphics2::truetype::Stbtt__edge tmp19 = e->__unsafe_get(tmp18).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1203)
				Float tmp20 = tmp19->y1;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1203)
				bool tmp21 = (tmp17 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1203)
				if ((tmp21)){
					HX_STACK_LINE(1204)
					Array< ::Dynamic > tmp22 = e;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1204)
					int tmp23 = eIndex;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1204)
					int tmp24 = off_x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1204)
					Float tmp25 = scan_y_top;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1204)
					::kha::graphics2::truetype::Stbtt__active_edge tmp26 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt__new_active(tmp22,tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1204)
					::kha::graphics2::truetype::Stbtt__active_edge z = tmp26;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(1205)
					{
						HX_STACK_LINE(1205)
						bool tmp27 = (z->ey >= scan_y_top);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1205)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1205)
						if ((tmp28)){
							HX_STACK_LINE(1205)
							HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
						}
					}
					HX_STACK_LINE(1207)
					z->next = active;
					HX_STACK_LINE(1208)
					active = z;
				}
				HX_STACK_LINE(1210)
				++(eIndex);
			}
			HX_STACK_LINE(1214)
			bool tmp9 = (active != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1214)
			if ((tmp9)){
				HX_STACK_LINE(1215)
				Array< Float > tmp10 = scanline;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1215)
				Array< Float > tmp11 = scanline2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1215)
				int tmp12 = (scanline2Index + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1215)
				int tmp13 = result->w;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1215)
				::kha::graphics2::truetype::Stbtt__active_edge tmp14 = active;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1215)
				Float tmp15 = scan_y_top;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1215)
				::kha::graphics2::truetype::StbTruetype_obj::stbtt__fill_active_edges_new(tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
			}
			HX_STACK_LINE(1217)
			{
				HX_STACK_LINE(1218)
				Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(1219)
				{
					HX_STACK_LINE(1219)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1219)
					int _g = result->w;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1219)
					while((true)){
						HX_STACK_LINE(1219)
						bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1219)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1219)
						if ((tmp11)){
							HX_STACK_LINE(1219)
							break;
						}
						HX_STACK_LINE(1219)
						int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1219)
						int i1 = tmp12;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(1220)
						Float k;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(1221)
						int m;		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(1222)
						int tmp13 = (scanline2Index + i1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1222)
						Float tmp14 = scanline2->__unsafe_get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1222)
						hx::AddEq(sum,tmp14);
						HX_STACK_LINE(1223)
						int tmp15 = i1;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1223)
						Float tmp16 = scanline->__unsafe_get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1223)
						Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1223)
						Float tmp18 = sum;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1223)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1223)
						k = tmp19;
						HX_STACK_LINE(1224)
						Float tmp20 = k;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1224)
						Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1224)
						Float tmp22 = (tmp21 * ((Float)255.0));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1224)
						Float tmp23 = (tmp22 + ((Float)0.5));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1224)
						k = tmp23;
						HX_STACK_LINE(1225)
						Float tmp24 = k;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1225)
						int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1225)
						m = tmp25;
						HX_STACK_LINE(1226)
						bool tmp26 = (m > (int)255);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1226)
						if ((tmp26)){
							HX_STACK_LINE(1226)
							m = (int)255;
						}
						HX_STACK_LINE(1227)
						int tmp27 = result->pixels_offset;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1227)
						int tmp28 = (j * result->stride);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1227)
						int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1227)
						int tmp30 = i1;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1227)
						int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1227)
						int tmp32 = m;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1227)
						result->pixels->writeU8(tmp31,tmp32);
					}
				}
			}
			HX_STACK_LINE(1231)
			step_parent = null();
			HX_STACK_LINE(1232)
			step_value = active;
			HX_STACK_LINE(1233)
			while((true)){
				HX_STACK_LINE(1233)
				bool tmp10 = (step_value != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1233)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1233)
				if ((tmp11)){
					HX_STACK_LINE(1233)
					break;
				}
				HX_STACK_LINE(1150)
				::kha::graphics2::truetype::Stbtt__active_edge z = step_value;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(1235)
				hx::AddEq(z->fx,z->fdx);
				HX_STACK_LINE(1237)
				step_parent = step_value;
				HX_STACK_LINE(1238)
				step_value = step_value->next;
			}
			HX_STACK_LINE(1241)
			++(y);
			HX_STACK_LINE(1242)
			++(j);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(StbTruetype_obj,stbtt__rasterize_sorted_edges,(void))

bool StbTruetype_obj::STBTT__COMPARE( ::kha::graphics2::truetype::Stbtt__edge a,::kha::graphics2::truetype::Stbtt__edge b){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","STBTT__COMPARE",0x3c42521e,"kha.graphics2.truetype.StbTruetype.STBTT__COMPARE","kha/graphics2/truetype/StbTruetype.hx",1246,0x5d9e0de9)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(1246)
	bool tmp = (a->y0 < b->y0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1246)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,STBTT__COMPARE,return )

Void StbTruetype_obj::stbtt__sort_edges_ins_sort( Array< ::Dynamic > p,int n){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__sort_edges_ins_sort",0x1b014492,"kha.graphics2.truetype.StbTruetype.stbtt__sort_edges_ins_sort","kha/graphics2/truetype/StbTruetype.hx",1248,0x5d9e0de9)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(1249)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1249)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1250)
		{
			HX_STACK_LINE(1250)
			int _g = (int)1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1250)
			while((true)){
				HX_STACK_LINE(1250)
				bool tmp = (_g < n);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1250)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1250)
				if ((tmp1)){
					HX_STACK_LINE(1250)
					break;
				}
				HX_STACK_LINE(1250)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1250)
				int i1 = tmp2;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(1251)
				int tmp3 = i1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1251)
				::kha::graphics2::truetype::Stbtt__edge tmp4 = p->__unsafe_get(tmp3).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1251)
				::kha::graphics2::truetype::Stbtt__edge t = tmp4;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1252)
				::kha::graphics2::truetype::Stbtt__edge a = t;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1253)
				j = i1;
				HX_STACK_LINE(1254)
				while((true)){
					HX_STACK_LINE(1254)
					bool tmp5 = (j > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1254)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1254)
					if ((tmp6)){
						HX_STACK_LINE(1254)
						break;
					}
					HX_STACK_LINE(1255)
					int tmp7 = (j - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1255)
					::kha::graphics2::truetype::Stbtt__edge tmp8 = p->__unsafe_get(tmp7).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1255)
					::kha::graphics2::truetype::Stbtt__edge b = tmp8;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1256)
					::kha::graphics2::truetype::Stbtt__edge tmp9 = a;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1256)
					::kha::graphics2::truetype::Stbtt__edge tmp10 = b;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1256)
					bool tmp11 = ::kha::graphics2::truetype::StbTruetype_obj::STBTT__COMPARE(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1256)
					bool c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(1257)
					bool tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1257)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1257)
					if ((tmp13)){
						HX_STACK_LINE(1257)
						break;
					}
					HX_STACK_LINE(1258)
					{
						HX_STACK_LINE(1258)
						int tmp14 = (j - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1258)
						::kha::graphics2::truetype::Stbtt__edge tmp15 = p->__unsafe_get(tmp14).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1258)
						::kha::graphics2::truetype::Stbtt__edge val = tmp15;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1258)
						int tmp16 = j;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1258)
						::kha::graphics2::truetype::Stbtt__edge tmp17 = val;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1258)
						::kha::graphics2::truetype::Stbtt__edge tmp18 = p->__unsafe_set(tmp16,tmp17).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1258)
						tmp18;
					}
					HX_STACK_LINE(1259)
					--(j);
				}
				HX_STACK_LINE(1261)
				bool tmp5 = (i1 != j);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1261)
				if ((tmp5)){
					HX_STACK_LINE(1262)
					int tmp6 = j;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1262)
					::kha::graphics2::truetype::Stbtt__edge tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1262)
					::kha::graphics2::truetype::Stbtt__edge tmp8 = p->__unsafe_set(tmp6,tmp7).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1262)
					tmp8;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt__sort_edges_ins_sort,(void))

Void StbTruetype_obj::stbtt__sort_edges_quicksort( Array< ::Dynamic > p,int pIndex,int n){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__sort_edges_quicksort",0x0f0bde68,"kha.graphics2.truetype.StbTruetype.stbtt__sort_edges_quicksort","kha/graphics2/truetype/StbTruetype.hx",1268,0x5d9e0de9)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(pIndex,"pIndex")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(1268)
		while((true)){
			HX_STACK_LINE(1268)
			bool tmp = (n > (int)12);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1268)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1268)
			if ((tmp1)){
				HX_STACK_LINE(1268)
				break;
			}
			HX_STACK_LINE(1269)
			::kha::graphics2::truetype::Stbtt__edge t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1270)
			bool c01;		HX_STACK_VAR(c01,"c01");
			HX_STACK_LINE(1270)
			bool c12;		HX_STACK_VAR(c12,"c12");
			HX_STACK_LINE(1270)
			bool c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1271)
			int m;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(1271)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1271)
			int j;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1274)
			int tmp2 = (int(n) >> int((int)1));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1274)
			m = tmp2;
			HX_STACK_LINE(1275)
			int tmp3 = pIndex;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1275)
			::kha::graphics2::truetype::Stbtt__edge tmp4 = p->__unsafe_get(tmp3).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1275)
			::kha::graphics2::truetype::Stbtt__edge tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1275)
			int tmp6 = (pIndex + m);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1275)
			::kha::graphics2::truetype::Stbtt__edge tmp7 = p->__unsafe_get(tmp6).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1275)
			::kha::graphics2::truetype::Stbtt__edge tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1275)
			bool tmp9 = ::kha::graphics2::truetype::StbTruetype_obj::STBTT__COMPARE(tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1275)
			c01 = tmp9;
			HX_STACK_LINE(1276)
			int tmp10 = (pIndex + m);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1276)
			::kha::graphics2::truetype::Stbtt__edge tmp11 = p->__unsafe_get(tmp10).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1276)
			::kha::graphics2::truetype::Stbtt__edge tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1276)
			int tmp13 = (pIndex + n);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1276)
			int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1276)
			::kha::graphics2::truetype::Stbtt__edge tmp15 = p->__unsafe_get(tmp14).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1276)
			::kha::graphics2::truetype::Stbtt__edge tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1276)
			bool tmp17 = ::kha::graphics2::truetype::StbTruetype_obj::STBTT__COMPARE(tmp12,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1276)
			c12 = tmp17;
			HX_STACK_LINE(1278)
			bool tmp18 = (c01 != c12);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1278)
			if ((tmp18)){
				HX_STACK_LINE(1280)
				int z;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(1281)
				int tmp19 = pIndex;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1281)
				::kha::graphics2::truetype::Stbtt__edge tmp20 = p->__unsafe_get(tmp19).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1281)
				::kha::graphics2::truetype::Stbtt__edge tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1281)
				int tmp22 = (pIndex + n);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1281)
				int tmp23 = (tmp22 - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1281)
				::kha::graphics2::truetype::Stbtt__edge tmp24 = p->__unsafe_get(tmp23).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1281)
				::kha::graphics2::truetype::Stbtt__edge tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1281)
				bool tmp26 = ::kha::graphics2::truetype::StbTruetype_obj::STBTT__COMPARE(tmp21,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1281)
				c = tmp26;
				HX_STACK_LINE(1284)
				bool tmp27 = (c == c12);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1284)
				int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1284)
				if ((tmp27)){
					HX_STACK_LINE(1284)
					tmp28 = (int)0;
				}
				else{
					HX_STACK_LINE(1284)
					tmp28 = (n - (int)1);
				}
				HX_STACK_LINE(1284)
				z = tmp28;
				HX_STACK_LINE(1285)
				int tmp29 = (pIndex + z);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1285)
				::kha::graphics2::truetype::Stbtt__edge tmp30 = p->__unsafe_get(tmp29).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1285)
				t = tmp30;
				HX_STACK_LINE(1286)
				{
					HX_STACK_LINE(1286)
					int tmp31 = (pIndex + m);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1286)
					::kha::graphics2::truetype::Stbtt__edge tmp32 = p->__unsafe_get(tmp31).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1286)
					::kha::graphics2::truetype::Stbtt__edge val = tmp32;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1286)
					int tmp33 = (pIndex + z);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1286)
					::kha::graphics2::truetype::Stbtt__edge tmp34 = val;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1286)
					::kha::graphics2::truetype::Stbtt__edge tmp35 = p->__unsafe_set(tmp33,tmp34).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1286)
					tmp35;
				}
				HX_STACK_LINE(1287)
				int tmp31 = (pIndex + m);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1287)
				::kha::graphics2::truetype::Stbtt__edge tmp32 = t;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1287)
				::kha::graphics2::truetype::Stbtt__edge tmp33 = p->__unsafe_set(tmp31,tmp32).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1287)
				tmp33;
			}
			HX_STACK_LINE(1291)
			int tmp19 = pIndex;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1291)
			::kha::graphics2::truetype::Stbtt__edge tmp20 = p->__unsafe_get(tmp19).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1291)
			t = tmp20;
			HX_STACK_LINE(1292)
			{
				HX_STACK_LINE(1292)
				int tmp21 = (pIndex + m);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1292)
				::kha::graphics2::truetype::Stbtt__edge tmp22 = p->__unsafe_get(tmp21).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1292)
				::kha::graphics2::truetype::Stbtt__edge val = tmp22;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(1292)
				int tmp23 = pIndex;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1292)
				::kha::graphics2::truetype::Stbtt__edge tmp24 = val;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1292)
				::kha::graphics2::truetype::Stbtt__edge tmp25 = p->__unsafe_set(tmp23,tmp24).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1292)
				tmp25;
			}
			HX_STACK_LINE(1293)
			int tmp21 = (pIndex + m);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1293)
			::kha::graphics2::truetype::Stbtt__edge tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1293)
			::kha::graphics2::truetype::Stbtt__edge tmp23 = p->__unsafe_set(tmp21,tmp22).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1293)
			tmp23;
			HX_STACK_LINE(1296)
			i = (int)1;
			HX_STACK_LINE(1297)
			int tmp24 = (n - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1297)
			j = tmp24;
			HX_STACK_LINE(1298)
			while((true)){
				HX_STACK_LINE(1301)
				while((true)){
					HX_STACK_LINE(1302)
					int tmp25 = (pIndex + i);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1302)
					::kha::graphics2::truetype::Stbtt__edge tmp26 = p->__unsafe_get(tmp25).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1302)
					::kha::graphics2::truetype::Stbtt__edge tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1302)
					int tmp28 = pIndex;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1302)
					::kha::graphics2::truetype::Stbtt__edge tmp29 = p->__unsafe_get(tmp28).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1302)
					::kha::graphics2::truetype::Stbtt__edge tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1302)
					bool tmp31 = ::kha::graphics2::truetype::StbTruetype_obj::STBTT__COMPARE(tmp27,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1302)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1302)
					if ((tmp32)){
						HX_STACK_LINE(1302)
						break;
					}
					HX_STACK_LINE(1303)
					++(i);
				}
				HX_STACK_LINE(1305)
				while((true)){
					HX_STACK_LINE(1306)
					int tmp25 = pIndex;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1306)
					::kha::graphics2::truetype::Stbtt__edge tmp26 = p->__unsafe_get(tmp25).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1306)
					::kha::graphics2::truetype::Stbtt__edge tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1306)
					int tmp28 = (pIndex + j);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1306)
					::kha::graphics2::truetype::Stbtt__edge tmp29 = p->__unsafe_get(tmp28).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1306)
					::kha::graphics2::truetype::Stbtt__edge tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1306)
					bool tmp31 = ::kha::graphics2::truetype::StbTruetype_obj::STBTT__COMPARE(tmp27,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1306)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1306)
					if ((tmp32)){
						HX_STACK_LINE(1306)
						break;
					}
					HX_STACK_LINE(1307)
					--(j);
				}
				HX_STACK_LINE(1310)
				bool tmp25 = (i >= j);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1310)
				if ((tmp25)){
					HX_STACK_LINE(1310)
					break;
				}
				HX_STACK_LINE(1311)
				int tmp26 = (pIndex + i);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1311)
				::kha::graphics2::truetype::Stbtt__edge tmp27 = p->__unsafe_get(tmp26).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1311)
				t = tmp27;
				HX_STACK_LINE(1312)
				{
					HX_STACK_LINE(1312)
					int tmp28 = (pIndex + j);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1312)
					::kha::graphics2::truetype::Stbtt__edge tmp29 = p->__unsafe_get(tmp28).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1312)
					::kha::graphics2::truetype::Stbtt__edge val = tmp29;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1312)
					int tmp30 = (pIndex + i);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1312)
					::kha::graphics2::truetype::Stbtt__edge tmp31 = val;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1312)
					::kha::graphics2::truetype::Stbtt__edge tmp32 = p->__unsafe_set(tmp30,tmp31).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1312)
					tmp32;
				}
				HX_STACK_LINE(1313)
				int tmp28 = (pIndex + j);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1313)
				::kha::graphics2::truetype::Stbtt__edge tmp29 = t;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1313)
				::kha::graphics2::truetype::Stbtt__edge tmp30 = p->__unsafe_set(tmp28,tmp29).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1313)
				tmp30;
				HX_STACK_LINE(1315)
				++(i);
				HX_STACK_LINE(1316)
				--(j);
			}
			HX_STACK_LINE(1319)
			int tmp25 = j;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1319)
			int tmp26 = (n - i);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1319)
			bool tmp27 = (tmp25 < tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1319)
			if ((tmp27)){
				HX_STACK_LINE(1320)
				Array< ::Dynamic > tmp28 = p;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1320)
				int tmp29 = pIndex;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1320)
				int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1320)
				::kha::graphics2::truetype::StbTruetype_obj::stbtt__sort_edges_quicksort(tmp28,tmp29,tmp30);
				HX_STACK_LINE(1321)
				hx::AddEq(pIndex,i);
				HX_STACK_LINE(1322)
				int tmp31 = (n - i);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1322)
				n = tmp31;
			}
			else{
				HX_STACK_LINE(1324)
				Array< ::Dynamic > tmp28 = p;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1324)
				int tmp29 = (pIndex + i);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1324)
				int tmp30 = (n - i);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1324)
				::kha::graphics2::truetype::StbTruetype_obj::stbtt__sort_edges_quicksort(tmp28,tmp29,tmp30);
				HX_STACK_LINE(1325)
				n = j;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StbTruetype_obj,stbtt__sort_edges_quicksort,(void))

Void StbTruetype_obj::stbtt__sort_edges( Array< ::Dynamic > p,int n){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__sort_edges",0x1f8f8edc,"kha.graphics2.truetype.StbTruetype.stbtt__sort_edges","kha/graphics2/truetype/StbTruetype.hx",1330,0x5d9e0de9)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(1331)
		Array< ::Dynamic > tmp = p;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1331)
		int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1331)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt__sort_edges_quicksort(tmp,(int)0,tmp1);
		HX_STACK_LINE(1332)
		Array< ::Dynamic > tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1332)
		int tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1332)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt__sort_edges_ins_sort(tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StbTruetype_obj,stbtt__sort_edges,(void))

Void StbTruetype_obj::stbtt__rasterize( ::kha::graphics2::truetype::Stbtt__bitmap result,Array< ::Dynamic > pts,Array< int > wcount,int windings,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int off_x,int off_y,bool invert){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__rasterize",0x7ac8deb0,"kha.graphics2.truetype.StbTruetype.stbtt__rasterize","kha/graphics2/truetype/StbTruetype.hx",1335,0x5d9e0de9)
		HX_STACK_ARG(result,"result")
		HX_STACK_ARG(pts,"pts")
		HX_STACK_ARG(wcount,"wcount")
		HX_STACK_ARG(windings,"windings")
		HX_STACK_ARG(scale_x,"scale_x")
		HX_STACK_ARG(scale_y,"scale_y")
		HX_STACK_ARG(shift_x,"shift_x")
		HX_STACK_ARG(shift_y,"shift_y")
		HX_STACK_ARG(off_x,"off_x")
		HX_STACK_ARG(off_y,"off_y")
		HX_STACK_ARG(invert,"invert")
		HX_STACK_LINE(1336)
		bool tmp = invert;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1336)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1336)
		if ((tmp)){
			HX_STACK_LINE(1336)
			Float tmp2 = scale_y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1336)
			tmp1 = -(tmp2);
		}
		else{
			HX_STACK_LINE(1336)
			tmp1 = scale_y;
		}
		HX_STACK_LINE(1336)
		Float y_scale_inv = tmp1;		HX_STACK_VAR(y_scale_inv,"y_scale_inv");
		HX_STACK_LINE(1337)
		Array< ::Dynamic > e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(1338)
		int n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1338)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1338)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1338)
		int k;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1338)
		int m;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(1339)
		int vsubsample = (int)1;		HX_STACK_VAR(vsubsample,"vsubsample");
		HX_STACK_LINE(1340)
		int ptsIndex = (int)0;		HX_STACK_VAR(ptsIndex,"ptsIndex");
		HX_STACK_LINE(1345)
		n = (int)0;
		HX_STACK_LINE(1346)
		{
			HX_STACK_LINE(1346)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1346)
			while((true)){
				HX_STACK_LINE(1346)
				bool tmp2 = (_g < windings);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1346)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1346)
				if ((tmp3)){
					HX_STACK_LINE(1346)
					break;
				}
				HX_STACK_LINE(1346)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1346)
				int i1 = tmp4;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(1347)
				int tmp5 = i1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1347)
				int tmp6 = wcount->__unsafe_get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1347)
				hx::AddEq(n,tmp6);
			}
		}
		HX_STACK_LINE(1349)
		Array< ::Dynamic > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1349)
		{
			HX_STACK_LINE(1349)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(1349)
			Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1349)
			this1 = tmp3;
			HX_STACK_LINE(1349)
			int tmp4 = (n + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1349)
			this1->__SetSizeExact(tmp4);
			HX_STACK_LINE(1349)
			tmp2 = this1;
		}
		HX_STACK_LINE(1349)
		e = tmp2;
		HX_STACK_LINE(1350)
		bool tmp3 = (e == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1350)
		if ((tmp3)){
			HX_STACK_LINE(1350)
			return null();
		}
		else{
			HX_STACK_LINE(1352)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1352)
			int tmp4 = e->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1352)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1352)
			while((true)){
				HX_STACK_LINE(1352)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1352)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1352)
				if ((tmp6)){
					HX_STACK_LINE(1352)
					break;
				}
				HX_STACK_LINE(1352)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1352)
				int i1 = tmp7;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(1353)
				{
					HX_STACK_LINE(1353)
					::kha::graphics2::truetype::Stbtt__edge val = ::kha::graphics2::truetype::Stbtt__edge_obj::__new();		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1353)
					int tmp8 = i1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1353)
					::kha::graphics2::truetype::Stbtt__edge tmp9 = val;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1353)
					::kha::graphics2::truetype::Stbtt__edge tmp10 = e->__unsafe_set(tmp8,tmp9).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1353)
					tmp10;
				}
			}
		}
		HX_STACK_LINE(1356)
		n = (int)0;
		HX_STACK_LINE(1358)
		m = (int)0;
		HX_STACK_LINE(1359)
		{
			HX_STACK_LINE(1359)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1359)
			while((true)){
				HX_STACK_LINE(1359)
				bool tmp4 = (_g < windings);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1359)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1359)
				if ((tmp5)){
					HX_STACK_LINE(1359)
					break;
				}
				HX_STACK_LINE(1359)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1359)
				int i1 = tmp6;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(1360)
				Array< ::Dynamic > p = pts;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1361)
				int tmp7 = (ptsIndex + m);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1361)
				int pIndex = tmp7;		HX_STACK_VAR(pIndex,"pIndex");
				HX_STACK_LINE(1362)
				int tmp8 = i1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1362)
				int tmp9 = wcount->__unsafe_get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1362)
				hx::AddEq(m,tmp9);
				HX_STACK_LINE(1363)
				int tmp10 = i1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1363)
				int tmp11 = wcount->__unsafe_get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1363)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1363)
				int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1363)
				j = tmp13;
				HX_STACK_LINE(1364)
				{
					HX_STACK_LINE(1364)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1364)
					int tmp14 = i1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1364)
					int tmp15 = wcount->__unsafe_get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1364)
					int _g1 = tmp15;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1364)
					while((true)){
						HX_STACK_LINE(1364)
						bool tmp16 = (_g2 < _g1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1364)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1364)
						if ((tmp17)){
							HX_STACK_LINE(1364)
							break;
						}
						HX_STACK_LINE(1364)
						int tmp18 = (_g2)++;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1364)
						int k1 = tmp18;		HX_STACK_VAR(k1,"k1");
						HX_STACK_LINE(1365)
						int a = k1;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(1365)
						int b = j;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(1367)
						int tmp19 = (pIndex + j);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1367)
						::kha::graphics2::truetype::Stbtt__point tmp20 = p->__unsafe_get(tmp19).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1367)
						Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1367)
						int tmp22 = (pIndex + k1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1367)
						::kha::graphics2::truetype::Stbtt__point tmp23 = p->__unsafe_get(tmp22).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1367)
						Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1367)
						bool tmp25 = (tmp21 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1367)
						if ((tmp25)){
							HX_STACK_LINE(1368)
							j = k1;
							HX_STACK_LINE(1369)
							continue;
						}
						HX_STACK_LINE(1372)
						int tmp26 = n;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1372)
						::kha::graphics2::truetype::Stbtt__edge tmp27 = e->__unsafe_get(tmp26).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1372)
						tmp27->invert = false;
						HX_STACK_LINE(1373)
						bool tmp28 = invert;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1373)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1373)
						if ((tmp28)){
							HX_STACK_LINE(1373)
							int tmp30 = (pIndex + j);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1373)
							::kha::graphics2::truetype::Stbtt__point tmp31 = p->__unsafe_get(tmp30).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1373)
							Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1373)
							int tmp33 = (pIndex + k1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1373)
							::kha::graphics2::truetype::Stbtt__point tmp34 = p->__unsafe_get(tmp33).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1373)
							Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1373)
							tmp29 = (tmp32 > tmp35);
						}
						else{
							HX_STACK_LINE(1373)
							int tmp30 = (pIndex + j);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1373)
							::kha::graphics2::truetype::Stbtt__point tmp31 = p->__unsafe_get(tmp30).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1373)
							Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1373)
							int tmp33 = (pIndex + k1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1373)
							::kha::graphics2::truetype::Stbtt__point tmp34 = p->__unsafe_get(tmp33).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1373)
							Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1373)
							tmp29 = (tmp32 < tmp35);
						}
						HX_STACK_LINE(1373)
						if ((tmp29)){
							HX_STACK_LINE(1374)
							int tmp30 = n;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1374)
							::kha::graphics2::truetype::Stbtt__edge tmp31 = e->__unsafe_get(tmp30).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1374)
							tmp31->invert = true;
							HX_STACK_LINE(1375)
							a = j;
							HX_STACK_LINE(1375)
							b = k1;
						}
						HX_STACK_LINE(1377)
						int tmp30 = (pIndex + a);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1377)
						::kha::graphics2::truetype::Stbtt__point tmp31 = p->__unsafe_get(tmp30).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1377)
						Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1377)
						Float tmp33 = scale_x;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1377)
						Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1377)
						Float tmp35 = shift_x;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1377)
						Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1377)
						int tmp37 = n;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1377)
						::kha::graphics2::truetype::Stbtt__edge tmp38 = e->__unsafe_get(tmp37).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1377)
						tmp38->x0 = tmp36;
						HX_STACK_LINE(1378)
						int tmp39 = (pIndex + a);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1378)
						::kha::graphics2::truetype::Stbtt__point tmp40 = p->__unsafe_get(tmp39).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1378)
						Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1378)
						Float tmp42 = y_scale_inv;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1378)
						Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1378)
						Float tmp44 = shift_y;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1378)
						Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1378)
						int tmp46 = vsubsample;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1378)
						Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1378)
						int tmp48 = n;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1378)
						::kha::graphics2::truetype::Stbtt__edge tmp49 = e->__unsafe_get(tmp48).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1378)
						tmp49->y0 = tmp47;
						HX_STACK_LINE(1379)
						int tmp50 = (pIndex + b);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1379)
						::kha::graphics2::truetype::Stbtt__point tmp51 = p->__unsafe_get(tmp50).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1379)
						Float tmp52 = tmp51->x;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1379)
						Float tmp53 = scale_x;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1379)
						Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1379)
						Float tmp55 = shift_x;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1379)
						Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1379)
						int tmp57 = n;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1379)
						::kha::graphics2::truetype::Stbtt__edge tmp58 = e->__unsafe_get(tmp57).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1379)
						tmp58->x1 = tmp56;
						HX_STACK_LINE(1380)
						int tmp59 = (pIndex + b);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1380)
						::kha::graphics2::truetype::Stbtt__point tmp60 = p->__unsafe_get(tmp59).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1380)
						Float tmp61 = tmp60->y;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1380)
						Float tmp62 = y_scale_inv;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(1380)
						Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(1380)
						Float tmp64 = shift_y;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(1380)
						Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(1380)
						int tmp66 = vsubsample;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(1380)
						Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(1380)
						int tmp68 = n;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(1380)
						::kha::graphics2::truetype::Stbtt__edge tmp69 = e->__unsafe_get(tmp68).StaticCast< ::kha::graphics2::truetype::Stbtt__edge >();		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(1380)
						tmp69->y1 = tmp67;
						HX_STACK_LINE(1381)
						++(n);
						HX_STACK_LINE(1382)
						j = k1;
					}
				}
			}
		}
		HX_STACK_LINE(1388)
		Array< ::Dynamic > tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1388)
		int tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1388)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt__sort_edges(tmp4,tmp5);
		HX_STACK_LINE(1391)
		::kha::graphics2::truetype::Stbtt__bitmap tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1391)
		Array< ::Dynamic > tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1391)
		int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1391)
		int tmp9 = vsubsample;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1391)
		int tmp10 = off_x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1391)
		int tmp11 = off_y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1391)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt__rasterize_sorted_edges(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(StbTruetype_obj,stbtt__rasterize,(void))

Void StbTruetype_obj::stbtt__add_point( Array< ::Dynamic > points,int n,Float x,Float y){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__add_point",0xa284662b,"kha.graphics2.truetype.StbTruetype.stbtt__add_point","kha/graphics2/truetype/StbTruetype.hx",1394,0x5d9e0de9)
		HX_STACK_ARG(points,"points")
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1395)
		bool tmp = (points == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1395)
		if ((tmp)){
			HX_STACK_LINE(1395)
			return null();
		}
		HX_STACK_LINE(1396)
		int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1396)
		::kha::graphics2::truetype::Stbtt__point tmp2 = points->__unsafe_get(tmp1).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1396)
		tmp2->x = x;
		HX_STACK_LINE(1397)
		int tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1397)
		::kha::graphics2::truetype::Stbtt__point tmp4 = points->__unsafe_get(tmp3).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1397)
		tmp4->y = y;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(StbTruetype_obj,stbtt__add_point,(void))

int StbTruetype_obj::stbtt__tesselate_curve( Array< ::Dynamic > points,Dynamic num_points,Float x0,Float y0,Float x1,Float y1,Float x2,Float y2,Float objspace_flatness_squared,int n){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt__tesselate_curve",0xc138f203,"kha.graphics2.truetype.StbTruetype.stbtt__tesselate_curve","kha/graphics2/truetype/StbTruetype.hx",1401,0x5d9e0de9)
	HX_STACK_ARG(points,"points")
	HX_STACK_ARG(num_points,"num_points")
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(objspace_flatness_squared,"objspace_flatness_squared")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(1403)
	Float tmp = x0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1403)
	Float tmp1 = ((int)2 * x1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1403)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1403)
	Float tmp3 = x2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1403)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1403)
	Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1403)
	Float mx = tmp5;		HX_STACK_VAR(mx,"mx");
	HX_STACK_LINE(1404)
	Float tmp6 = y0;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1404)
	Float tmp7 = ((int)2 * y1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1404)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1404)
	Float tmp9 = y2;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1404)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1404)
	Float tmp11 = (Float(tmp10) / Float((int)4));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1404)
	Float my = tmp11;		HX_STACK_VAR(my,"my");
	HX_STACK_LINE(1406)
	Float tmp12 = (x0 + x2);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1406)
	Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1406)
	Float tmp14 = mx;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1406)
	Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1406)
	Float dx = tmp15;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1407)
	Float tmp16 = (y0 + y2);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1407)
	Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1407)
	Float tmp18 = my;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1407)
	Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1407)
	Float dy = tmp19;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(1408)
	bool tmp20 = (n > (int)16);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1408)
	if ((tmp20)){
		HX_STACK_LINE(1409)
		return (int)1;
	}
	HX_STACK_LINE(1410)
	Float tmp21 = (dx * dx);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1410)
	Float tmp22 = (dy * dy);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1410)
	Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1410)
	Float tmp24 = objspace_flatness_squared;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1410)
	bool tmp25 = (tmp23 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1410)
	if ((tmp25)){
		HX_STACK_LINE(1411)
		Array< ::Dynamic > tmp26 = points;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1411)
		Dynamic tmp27 = num_points;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1411)
		Float tmp28 = x0;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1411)
		Float tmp29 = y0;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1411)
		Float tmp30 = (x0 + x1);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1411)
		Float tmp31 = (Float(tmp30) / Float(((Float)2.0)));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1411)
		Float tmp32 = (y0 + y1);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1411)
		Float tmp33 = (Float(tmp32) / Float(((Float)2.0)));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1411)
		Float tmp34 = mx;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1411)
		Float tmp35 = my;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1411)
		Float tmp36 = objspace_flatness_squared;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1411)
		int tmp37 = (n + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1411)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt__tesselate_curve(tmp26,tmp27,tmp28,tmp29,tmp31,tmp33,tmp34,tmp35,tmp36,tmp37);
		HX_STACK_LINE(1412)
		Array< ::Dynamic > tmp38 = points;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1412)
		Dynamic tmp39 = num_points;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1412)
		Float tmp40 = mx;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1412)
		Float tmp41 = my;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1412)
		Float tmp42 = (x1 + x2);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1412)
		Float tmp43 = (Float(tmp42) / Float(((Float)2.0)));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1412)
		Float tmp44 = (y1 + y2);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1412)
		Float tmp45 = (Float(tmp44) / Float(((Float)2.0)));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1412)
		Float tmp46 = x2;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1412)
		Float tmp47 = y2;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1412)
		Float tmp48 = objspace_flatness_squared;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(1412)
		int tmp49 = (n + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(1412)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt__tesselate_curve(tmp38,tmp39,tmp40,tmp41,tmp43,tmp45,tmp46,tmp47,tmp48,tmp49);
	}
	else{
		HX_STACK_LINE(1414)
		Array< ::Dynamic > tmp26 = points;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1414)
		int tmp27 = num_points->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1414)
		Float tmp28 = x2;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1414)
		Float tmp29 = y2;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1414)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt__add_point(tmp26,tmp27,tmp28,tmp29);
		HX_STACK_LINE(1415)
		int tmp30 = (num_points->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ) + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1415)
		num_points->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = tmp30;
	}
	HX_STACK_LINE(1417)
	return (int)1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(StbTruetype_obj,stbtt__tesselate_curve,return )

Array< ::Dynamic > StbTruetype_obj::stbtt_FlattenCurves( Array< ::Dynamic > vertices,int num_verts,Float objspace_flatness,Dynamic contour_lengths,Dynamic num_contours){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_FlattenCurves",0x59f844b0,"kha.graphics2.truetype.StbTruetype.stbtt_FlattenCurves","kha/graphics2/truetype/StbTruetype.hx",1421,0x5d9e0de9)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(num_verts,"num_verts")
	HX_STACK_ARG(objspace_flatness,"objspace_flatness")
	HX_STACK_ARG(contour_lengths,"contour_lengths")
	HX_STACK_ARG(num_contours,"num_contours")
	HX_STACK_LINE(1422)
	Array< ::Dynamic > points = null();		HX_STACK_VAR(points,"points");
	HX_STACK_LINE(1423)
	int num_points = (int)0;		HX_STACK_VAR(num_points,"num_points");
	HX_STACK_LINE(1425)
	Float tmp = (objspace_flatness * objspace_flatness);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1425)
	Float objspace_flatness_squared = tmp;		HX_STACK_VAR(objspace_flatness_squared,"objspace_flatness_squared");
	HX_STACK_LINE(1426)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1426)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(1426)
	int start = (int)0;		HX_STACK_VAR(start,"start");
	HX_STACK_LINE(1426)
	int pass;		HX_STACK_VAR(pass,"pass");
	HX_STACK_LINE(1429)
	{
		HX_STACK_LINE(1429)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1429)
		while((true)){
			HX_STACK_LINE(1429)
			bool tmp1 = (_g < num_verts);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1429)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1429)
			if ((tmp2)){
				HX_STACK_LINE(1429)
				break;
			}
			HX_STACK_LINE(1429)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1429)
			int i1 = tmp3;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(1430)
			int tmp4 = i1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1430)
			::kha::graphics2::truetype::Stbtt_vertex tmp5 = vertices->__unsafe_get(tmp4).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1430)
			int tmp6 = tmp5->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1430)
			bool tmp7 = (tmp6 == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1430)
			if ((tmp7)){
				HX_STACK_LINE(1431)
				++(n);
			}
		}
	}
	HX_STACK_LINE(1433)
	num_contours->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = n;
	HX_STACK_LINE(1434)
	bool tmp1 = (n == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1434)
	if ((tmp1)){
		HX_STACK_LINE(1434)
		return null();
	}
	HX_STACK_LINE(1436)
	Array< int > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1436)
	{
		HX_STACK_LINE(1436)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(1436)
		Array< int > tmp3 = Array_obj< int >::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1436)
		this1 = tmp3;
		HX_STACK_LINE(1436)
		int tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1436)
		this1->__SetSizeExact(tmp4);
		HX_STACK_LINE(1436)
		tmp2 = this1;
	}
	HX_STACK_LINE(1436)
	contour_lengths->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = tmp2;
	HX_STACK_LINE(1438)
	bool tmp3 = (contour_lengths->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1438)
	if ((tmp3)){
		HX_STACK_LINE(1439)
		num_contours->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = (int)0;
		HX_STACK_LINE(1440)
		return null();
	}
	HX_STACK_LINE(1444)
	{
		HX_STACK_LINE(1444)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1444)
		while((true)){
			HX_STACK_LINE(1444)
			bool tmp4 = (_g < (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1444)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1444)
			if ((tmp5)){
				HX_STACK_LINE(1444)
				break;
			}
			HX_STACK_LINE(1444)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1444)
			int pass1 = tmp6;		HX_STACK_VAR(pass1,"pass1");
			HX_STACK_LINE(1445)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1445)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1446)
			bool tmp7 = (pass1 == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1446)
			if ((tmp7)){
				HX_STACK_LINE(1447)
				Array< ::Dynamic > tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1447)
				{
					HX_STACK_LINE(1447)
					Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(1447)
					Array< ::Dynamic > tmp9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1447)
					this1 = tmp9;
					HX_STACK_LINE(1447)
					int tmp10 = num_points;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1447)
					this1->__SetSizeExact(tmp10);
					HX_STACK_LINE(1447)
					tmp8 = this1;
				}
				HX_STACK_LINE(1447)
				points = tmp8;
				HX_STACK_LINE(1448)
				bool tmp9 = (points == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1448)
				if ((tmp9)){
					HX_STACK_LINE(1449)
					contour_lengths->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = null();
					HX_STACK_LINE(1450)
					num_contours->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = (int)0;
					HX_STACK_LINE(1451)
					return null();
				}
				else{
					HX_STACK_LINE(1454)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1454)
					int tmp10 = points->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1454)
					int _g1 = tmp10;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1454)
					while((true)){
						HX_STACK_LINE(1454)
						bool tmp11 = (_g2 < _g1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1454)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1454)
						if ((tmp12)){
							HX_STACK_LINE(1454)
							break;
						}
						HX_STACK_LINE(1454)
						int tmp13 = (_g2)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1454)
						int i1 = tmp13;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(1455)
						{
							HX_STACK_LINE(1455)
							::kha::graphics2::truetype::Stbtt__point val = ::kha::graphics2::truetype::Stbtt__point_obj::__new();		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(1455)
							int tmp14 = i1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1455)
							::kha::graphics2::truetype::Stbtt__point tmp15 = val;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1455)
							::kha::graphics2::truetype::Stbtt__point tmp16 = points->__unsafe_set(tmp14,tmp15).StaticCast< ::kha::graphics2::truetype::Stbtt__point >();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1455)
							tmp16;
						}
					}
				}
			}
			HX_STACK_LINE(1459)
			num_points = (int)0;
			HX_STACK_LINE(1460)
			n = (int)-1;
			HX_STACK_LINE(1461)
			{
				HX_STACK_LINE(1461)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1461)
				while((true)){
					HX_STACK_LINE(1461)
					bool tmp8 = (_g1 < num_verts);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1461)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1461)
					if ((tmp9)){
						HX_STACK_LINE(1461)
						break;
					}
					HX_STACK_LINE(1461)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1461)
					int i1 = tmp10;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1462)
					{
						HX_STACK_LINE(1462)
						int tmp11 = i1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1462)
						::kha::graphics2::truetype::Stbtt_vertex tmp12 = vertices->__unsafe_get(tmp11).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1462)
						int tmp13 = tmp12->type;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1462)
						int _g2 = tmp13;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1462)
						int tmp14 = _g2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1462)
						switch( (int)(tmp14)){
							case (int)1: {
								HX_STACK_LINE(1465)
								bool tmp15 = (n >= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1465)
								if ((tmp15)){
									HX_STACK_LINE(1466)
									int tmp16 = n;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1466)
									int tmp17 = (num_points - start);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1466)
									int tmp18 = ((Array< int >)(contour_lengths->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )))->__unsafe_set(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1466)
									tmp18;
								}
								HX_STACK_LINE(1467)
								++(n);
								HX_STACK_LINE(1468)
								start = num_points;
								HX_STACK_LINE(1470)
								int tmp16 = i1;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1470)
								::kha::graphics2::truetype::Stbtt_vertex tmp17 = vertices->__unsafe_get(tmp16).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1470)
								int tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1470)
								x = tmp18;
								HX_STACK_LINE(1470)
								int tmp19 = i1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1470)
								::kha::graphics2::truetype::Stbtt_vertex tmp20 = vertices->__unsafe_get(tmp19).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1470)
								int tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1470)
								y = tmp21;
								HX_STACK_LINE(1471)
								Array< ::Dynamic > tmp22 = points;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1471)
								int tmp23 = (num_points)++;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1471)
								Float tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1471)
								Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1471)
								::kha::graphics2::truetype::StbTruetype_obj::stbtt__add_point(tmp22,tmp23,tmp24,tmp25);
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(1473)
								int tmp15 = i1;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1473)
								::kha::graphics2::truetype::Stbtt_vertex tmp16 = vertices->__unsafe_get(tmp15).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1473)
								int tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1473)
								x = tmp17;
								HX_STACK_LINE(1473)
								int tmp18 = i1;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1473)
								::kha::graphics2::truetype::Stbtt_vertex tmp19 = vertices->__unsafe_get(tmp18).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1473)
								int tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1473)
								y = tmp20;
								HX_STACK_LINE(1474)
								Array< ::Dynamic > tmp21 = points;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1474)
								int tmp22 = (num_points)++;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1474)
								Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1474)
								Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1474)
								::kha::graphics2::truetype::StbTruetype_obj::stbtt__add_point(tmp21,tmp22,tmp23,tmp24);
							}
							;break;
							case (int)3: {
								struct _Function_7_1{
									inline static Dynamic Block( int &num_points){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/graphics2/truetype/StbTruetype.hx",1476,0x5d9e0de9)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , num_points,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(1476)
								Dynamic tmp15 = _Function_7_1::Block(num_points);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1476)
								Dynamic num_points_reference = tmp15;		HX_STACK_VAR(num_points_reference,"num_points_reference");
								HX_STACK_LINE(1477)
								Array< ::Dynamic > tmp16 = points;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1477)
								Dynamic tmp17 = num_points_reference;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1477)
								Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1477)
								Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1478)
								int tmp20 = i1;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1478)
								::kha::graphics2::truetype::Stbtt_vertex tmp21 = vertices->__unsafe_get(tmp20).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1478)
								int tmp22 = tmp21->cx;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1478)
								int tmp23 = i1;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1478)
								::kha::graphics2::truetype::Stbtt_vertex tmp24 = vertices->__unsafe_get(tmp23).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1478)
								int tmp25 = tmp24->cy;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1479)
								int tmp26 = i1;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1479)
								::kha::graphics2::truetype::Stbtt_vertex tmp27 = vertices->__unsafe_get(tmp26).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1479)
								int tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1479)
								int tmp29 = i1;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1479)
								::kha::graphics2::truetype::Stbtt_vertex tmp30 = vertices->__unsafe_get(tmp29).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1479)
								int tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1480)
								Float tmp32 = objspace_flatness_squared;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1477)
								::kha::graphics2::truetype::StbTruetype_obj::stbtt__tesselate_curve(tmp16,tmp17,tmp18,tmp19,tmp22,tmp25,tmp28,tmp31,tmp32,(int)0);
								HX_STACK_LINE(1481)
								num_points = num_points_reference->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
								HX_STACK_LINE(1482)
								int tmp33 = i1;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1482)
								::kha::graphics2::truetype::Stbtt_vertex tmp34 = vertices->__unsafe_get(tmp33).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1482)
								int tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1482)
								x = tmp35;
								HX_STACK_LINE(1482)
								int tmp36 = i1;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1482)
								::kha::graphics2::truetype::Stbtt_vertex tmp37 = vertices->__unsafe_get(tmp36).StaticCast< ::kha::graphics2::truetype::Stbtt_vertex >();		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1482)
								int tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1482)
								y = tmp38;
							}
							;break;
						}
					}
				}
			}
			HX_STACK_LINE(1485)
			int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1485)
			int tmp9 = (num_points - start);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1485)
			int tmp10 = ((Array< int >)(contour_lengths->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )))->__unsafe_set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1485)
			tmp10;
		}
	}
	HX_STACK_LINE(1488)
	Array< ::Dynamic > tmp4 = points;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1488)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StbTruetype_obj,stbtt_FlattenCurves,return )

Void StbTruetype_obj::stbtt_Rasterize( ::kha::graphics2::truetype::Stbtt__bitmap result,Float flatness_in_pixels,Array< ::Dynamic > vertices,int num_verts,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int x_off,int y_off,bool invert){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_Rasterize",0x2524cddf,"kha.graphics2.truetype.StbTruetype.stbtt_Rasterize","kha/graphics2/truetype/StbTruetype.hx",1491,0x5d9e0de9)
		HX_STACK_ARG(result,"result")
		HX_STACK_ARG(flatness_in_pixels,"flatness_in_pixels")
		HX_STACK_ARG(vertices,"vertices")
		HX_STACK_ARG(num_verts,"num_verts")
		HX_STACK_ARG(scale_x,"scale_x")
		HX_STACK_ARG(scale_y,"scale_y")
		HX_STACK_ARG(shift_x,"shift_x")
		HX_STACK_ARG(shift_y,"shift_y")
		HX_STACK_ARG(x_off,"x_off")
		HX_STACK_ARG(y_off,"y_off")
		HX_STACK_ARG(invert,"invert")
		HX_STACK_LINE(1492)
		bool tmp = (scale_x > scale_y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1492)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1492)
		if ((tmp)){
			HX_STACK_LINE(1492)
			tmp1 = scale_y;
		}
		else{
			HX_STACK_LINE(1492)
			tmp1 = scale_x;
		}
		HX_STACK_LINE(1492)
		Float scale = tmp1;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(1493)
		int winding_count = (int)0;		HX_STACK_VAR(winding_count,"winding_count");
		HX_STACK_LINE(1494)
		Array< int > winding_lengths = null();		HX_STACK_VAR(winding_lengths,"winding_lengths");
		struct _Function_1_1{
			inline static Dynamic Block( int &winding_count){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/graphics2/truetype/StbTruetype.hx",1495,0x5d9e0de9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , winding_count,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1495)
		Dynamic tmp2 = _Function_1_1::Block(winding_count);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1495)
		Dynamic winding_count_reference = tmp2;		HX_STACK_VAR(winding_count_reference,"winding_count_reference");
		struct _Function_1_2{
			inline static Dynamic Block( Array< int > &winding_lengths){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/graphics2/truetype/StbTruetype.hx",1496,0x5d9e0de9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , winding_lengths,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1496)
		Dynamic tmp3 = _Function_1_2::Block(winding_lengths);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1496)
		Dynamic winding_lengths_reference = tmp3;		HX_STACK_VAR(winding_lengths_reference,"winding_lengths_reference");
		HX_STACK_LINE(1497)
		Array< ::Dynamic > tmp4 = vertices;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1497)
		int tmp5 = num_verts;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1497)
		Float tmp6 = (Float(flatness_in_pixels) / Float(scale));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1497)
		Dynamic tmp7 = winding_lengths_reference;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1497)
		Dynamic tmp8 = winding_count_reference;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1497)
		Array< ::Dynamic > tmp9 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_FlattenCurves(tmp4,tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1497)
		Array< ::Dynamic > windings = tmp9;		HX_STACK_VAR(windings,"windings");
		HX_STACK_LINE(1498)
		winding_count = winding_count_reference->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
		HX_STACK_LINE(1499)
		winding_lengths = winding_lengths_reference->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
		HX_STACK_LINE(1500)
		bool tmp10 = (windings != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1500)
		if ((tmp10)){
			HX_STACK_LINE(1501)
			::kha::graphics2::truetype::Stbtt__bitmap tmp11 = result;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1501)
			Array< ::Dynamic > tmp12 = windings;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1501)
			Array< int > tmp13 = winding_lengths;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1501)
			int tmp14 = winding_count;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1501)
			Float tmp15 = scale_x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1501)
			Float tmp16 = scale_y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1501)
			Float tmp17 = shift_x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1501)
			Float tmp18 = shift_y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1501)
			int tmp19 = x_off;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1501)
			int tmp20 = y_off;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1501)
			bool tmp21 = invert;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1501)
			::kha::graphics2::truetype::StbTruetype_obj::stbtt__rasterize(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(StbTruetype_obj,stbtt_Rasterize,(void))

::kha::Blob StbTruetype_obj::stbtt_GetGlyphBitmapSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int glyph,::kha::graphics2::truetype::Stbtt_temp_region region){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetGlyphBitmapSubpixel",0x89588a03,"kha.graphics2.truetype.StbTruetype.stbtt_GetGlyphBitmapSubpixel","kha/graphics2/truetype/StbTruetype.hx",1505,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(scale_x,"scale_x")
	HX_STACK_ARG(scale_y,"scale_y")
	HX_STACK_ARG(shift_x,"shift_x")
	HX_STACK_ARG(shift_y,"shift_y")
	HX_STACK_ARG(glyph,"glyph")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(1506)
	int ix0;		HX_STACK_VAR(ix0,"ix0");
	HX_STACK_LINE(1506)
	int iy0;		HX_STACK_VAR(iy0,"iy0");
	HX_STACK_LINE(1506)
	int ix1;		HX_STACK_VAR(ix1,"ix1");
	HX_STACK_LINE(1506)
	int iy1;		HX_STACK_VAR(iy1,"iy1");
	HX_STACK_LINE(1507)
	::kha::graphics2::truetype::Stbtt__bitmap gbm = ::kha::graphics2::truetype::Stbtt__bitmap_obj::__new();		HX_STACK_VAR(gbm,"gbm");
	HX_STACK_LINE(1508)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1508)
	int tmp1 = glyph;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1508)
	Array< ::Dynamic > tmp2 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphShape(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1508)
	Array< ::Dynamic > vertices = tmp2;		HX_STACK_VAR(vertices,"vertices");
	HX_STACK_LINE(1509)
	int tmp3 = vertices->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1509)
	int num_verts = tmp3;		HX_STACK_VAR(num_verts,"num_verts");
	HX_STACK_LINE(1511)
	bool tmp4 = (scale_x == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1511)
	if ((tmp4)){
		HX_STACK_LINE(1511)
		scale_x = scale_y;
	}
	HX_STACK_LINE(1512)
	bool tmp5 = (scale_y == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1512)
	if ((tmp5)){
		HX_STACK_LINE(1513)
		bool tmp6 = (scale_x == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1513)
		if ((tmp6)){
			HX_STACK_LINE(1513)
			return null();
		}
		HX_STACK_LINE(1514)
		scale_y = scale_x;
	}
	HX_STACK_LINE(1517)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp6 = info;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1517)
	int tmp7 = glyph;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1517)
	Float tmp8 = scale_x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1517)
	Float tmp9 = scale_y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1517)
	Float tmp10 = shift_x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1517)
	Float tmp11 = shift_y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1517)
	::kha::graphics2::truetype::Stbtt_temp_rect tmp12 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphBitmapBoxSubpixel(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1517)
	::kha::graphics2::truetype::Stbtt_temp_rect rect = tmp12;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(1518)
	ix0 = rect->x0;
	HX_STACK_LINE(1519)
	iy0 = rect->y0;
	HX_STACK_LINE(1520)
	ix1 = rect->x1;
	HX_STACK_LINE(1521)
	iy1 = rect->y1;
	HX_STACK_LINE(1524)
	int tmp13 = (ix1 - ix0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1524)
	gbm->w = tmp13;
	HX_STACK_LINE(1525)
	int tmp14 = (iy1 - iy0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1525)
	gbm->h = tmp14;
	HX_STACK_LINE(1526)
	gbm->pixels = null();
	HX_STACK_LINE(1528)
	region->width = gbm->w;
	HX_STACK_LINE(1529)
	region->height = gbm->h;
	HX_STACK_LINE(1530)
	region->xoff = ix0;
	HX_STACK_LINE(1531)
	region->yoff = iy0;
	HX_STACK_LINE(1533)
	bool tmp15 = (gbm->w != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1533)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1533)
	if ((tmp15)){
		HX_STACK_LINE(1533)
		tmp16 = (gbm->h != (int)0);
	}
	else{
		HX_STACK_LINE(1533)
		tmp16 = false;
	}
	HX_STACK_LINE(1533)
	if ((tmp16)){
		HX_STACK_LINE(1534)
		int tmp17 = (gbm->w * gbm->h);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1534)
		::kha::Blob tmp18 = ::kha::Blob_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1534)
		gbm->pixels = tmp18;
		HX_STACK_LINE(1535)
		bool tmp19 = (gbm->pixels != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1535)
		if ((tmp19)){
			HX_STACK_LINE(1536)
			gbm->stride = gbm->w;
			HX_STACK_LINE(1538)
			::kha::graphics2::truetype::Stbtt__bitmap tmp20 = gbm;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1538)
			Array< ::Dynamic > tmp21 = vertices;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1538)
			int tmp22 = num_verts;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1538)
			Float tmp23 = scale_x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1538)
			Float tmp24 = scale_y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1538)
			Float tmp25 = shift_x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1538)
			Float tmp26 = shift_y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1538)
			int tmp27 = ix0;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1538)
			int tmp28 = iy0;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1538)
			::kha::graphics2::truetype::StbTruetype_obj::stbtt_Rasterize(tmp20,((Float)0.35),tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,true);
		}
	}
	HX_STACK_LINE(1541)
	::kha::Blob tmp17 = gbm->pixels;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1541)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(StbTruetype_obj,stbtt_GetGlyphBitmapSubpixel,return )

::kha::Blob StbTruetype_obj::stbtt_GetGlyphBitmap( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float scale_x,Float scale_y,int glyph,::kha::graphics2::truetype::Stbtt_temp_region region){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetGlyphBitmap",0xcd367bdd,"kha.graphics2.truetype.StbTruetype.stbtt_GetGlyphBitmap","kha/graphics2/truetype/StbTruetype.hx",1544,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(scale_x,"scale_x")
	HX_STACK_ARG(scale_y,"scale_y")
	HX_STACK_ARG(glyph,"glyph")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(1545)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1545)
	Float tmp1 = scale_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1545)
	Float tmp2 = scale_y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1545)
	int tmp3 = glyph;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1545)
	::kha::graphics2::truetype::Stbtt_temp_region tmp4 = region;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1545)
	::kha::Blob tmp5 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphBitmapSubpixel(tmp,tmp1,tmp2,((Float)0.0),((Float)0.0),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1545)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StbTruetype_obj,stbtt_GetGlyphBitmap,return )

Void StbTruetype_obj::stbtt_MakeGlyphBitmapSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo info,::kha::Blob output,int output_offset,int out_w,int out_h,int out_stride,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int glyph){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_MakeGlyphBitmapSubpixel",0xcea2707b,"kha.graphics2.truetype.StbTruetype.stbtt_MakeGlyphBitmapSubpixel","kha/graphics2/truetype/StbTruetype.hx",1548,0x5d9e0de9)
		HX_STACK_ARG(info,"info")
		HX_STACK_ARG(output,"output")
		HX_STACK_ARG(output_offset,"output_offset")
		HX_STACK_ARG(out_w,"out_w")
		HX_STACK_ARG(out_h,"out_h")
		HX_STACK_ARG(out_stride,"out_stride")
		HX_STACK_ARG(scale_x,"scale_x")
		HX_STACK_ARG(scale_y,"scale_y")
		HX_STACK_ARG(shift_x,"shift_x")
		HX_STACK_ARG(shift_y,"shift_y")
		HX_STACK_ARG(glyph,"glyph")
		HX_STACK_LINE(1549)
		int ix0 = (int)0;		HX_STACK_VAR(ix0,"ix0");
		HX_STACK_LINE(1549)
		int iy0 = (int)0;		HX_STACK_VAR(iy0,"iy0");
		HX_STACK_LINE(1550)
		::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1550)
		int tmp1 = glyph;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1550)
		Array< ::Dynamic > tmp2 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphShape(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1550)
		Array< ::Dynamic > vertices = tmp2;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(1551)
		bool tmp3 = (vertices == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1551)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1551)
		if ((tmp3)){
			HX_STACK_LINE(1551)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(1551)
			tmp4 = vertices->length;
		}
		HX_STACK_LINE(1551)
		int num_verts = tmp4;		HX_STACK_VAR(num_verts,"num_verts");
		HX_STACK_LINE(1552)
		::kha::graphics2::truetype::Stbtt__bitmap gbm = ::kha::graphics2::truetype::Stbtt__bitmap_obj::__new();		HX_STACK_VAR(gbm,"gbm");
		HX_STACK_LINE(1554)
		::kha::graphics2::truetype::Stbtt_fontinfo tmp5 = info;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1554)
		int tmp6 = glyph;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1554)
		Float tmp7 = scale_x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1554)
		Float tmp8 = scale_y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1554)
		Float tmp9 = shift_x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1554)
		Float tmp10 = shift_y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1554)
		::kha::graphics2::truetype::Stbtt_temp_rect tmp11 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphBitmapBoxSubpixel(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1554)
		::kha::graphics2::truetype::Stbtt_temp_rect rect = tmp11;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(1555)
		ix0 = rect->x0;
		HX_STACK_LINE(1556)
		iy0 = rect->y0;
		HX_STACK_LINE(1557)
		gbm->pixels = output;
		HX_STACK_LINE(1558)
		gbm->pixels_offset = output_offset;
		HX_STACK_LINE(1559)
		gbm->w = out_w;
		HX_STACK_LINE(1560)
		gbm->h = out_h;
		HX_STACK_LINE(1561)
		gbm->stride = out_stride;
		HX_STACK_LINE(1563)
		bool tmp12 = (gbm->w != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1563)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1563)
		if ((tmp12)){
			HX_STACK_LINE(1563)
			tmp13 = (gbm->h != (int)0);
		}
		else{
			HX_STACK_LINE(1563)
			tmp13 = false;
		}
		HX_STACK_LINE(1563)
		if ((tmp13)){
			HX_STACK_LINE(1564)
			::kha::graphics2::truetype::Stbtt__bitmap tmp14 = gbm;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1564)
			Array< ::Dynamic > tmp15 = vertices;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1564)
			int tmp16 = num_verts;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1564)
			Float tmp17 = scale_x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1564)
			Float tmp18 = scale_y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1564)
			Float tmp19 = shift_x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1564)
			Float tmp20 = shift_y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1564)
			int tmp21 = ix0;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1564)
			int tmp22 = iy0;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1564)
			::kha::graphics2::truetype::StbTruetype_obj::stbtt_Rasterize(tmp14,((Float)0.35),tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,true);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(StbTruetype_obj,stbtt_MakeGlyphBitmapSubpixel,(void))

Void StbTruetype_obj::stbtt_MakeGlyphBitmap( ::kha::graphics2::truetype::Stbtt_fontinfo info,::kha::Blob output,int output_offset,int out_w,int out_h,int out_stride,Float scale_x,Float scale_y,int glyph){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_MakeGlyphBitmap",0x89f92a55,"kha.graphics2.truetype.StbTruetype.stbtt_MakeGlyphBitmap","kha/graphics2/truetype/StbTruetype.hx",1567,0x5d9e0de9)
		HX_STACK_ARG(info,"info")
		HX_STACK_ARG(output,"output")
		HX_STACK_ARG(output_offset,"output_offset")
		HX_STACK_ARG(out_w,"out_w")
		HX_STACK_ARG(out_h,"out_h")
		HX_STACK_ARG(out_stride,"out_stride")
		HX_STACK_ARG(scale_x,"scale_x")
		HX_STACK_ARG(scale_y,"scale_y")
		HX_STACK_ARG(glyph,"glyph")
		HX_STACK_LINE(1568)
		::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1568)
		::kha::Blob tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1568)
		int tmp2 = output_offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1568)
		int tmp3 = out_w;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1568)
		int tmp4 = out_h;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1568)
		int tmp5 = out_stride;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1568)
		Float tmp6 = scale_x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1568)
		Float tmp7 = scale_y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1568)
		int tmp8 = glyph;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1568)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt_MakeGlyphBitmapSubpixel(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,((Float)0.0),((Float)0.0),tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(StbTruetype_obj,stbtt_MakeGlyphBitmap,(void))

::kha::Blob StbTruetype_obj::stbtt_GetCodepointBitmapSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int codepoint,::kha::graphics2::truetype::Stbtt_temp_region region){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetCodepointBitmapSubpixel",0x6a742f9a,"kha.graphics2.truetype.StbTruetype.stbtt_GetCodepointBitmapSubpixel","kha/graphics2/truetype/StbTruetype.hx",1571,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(scale_x,"scale_x")
	HX_STACK_ARG(scale_y,"scale_y")
	HX_STACK_ARG(shift_x,"shift_x")
	HX_STACK_ARG(shift_y,"shift_y")
	HX_STACK_ARG(codepoint,"codepoint")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(1572)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1572)
	Float tmp1 = scale_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1572)
	Float tmp2 = scale_y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1572)
	Float tmp3 = shift_x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1572)
	Float tmp4 = shift_y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1572)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp5 = info;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1572)
	int tmp6 = codepoint;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1572)
	int tmp7 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_FindGlyphIndex(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1572)
	::kha::graphics2::truetype::Stbtt_temp_region tmp8 = region;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1572)
	::kha::Blob tmp9 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphBitmapSubpixel(tmp,tmp1,tmp2,tmp3,tmp4,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1572)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(StbTruetype_obj,stbtt_GetCodepointBitmapSubpixel,return )

Void StbTruetype_obj::stbtt_MakeCodepointBitmapSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo info,::kha::Blob output,int output_offset,int out_w,int out_h,int out_stride,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int codepoint){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_MakeCodepointBitmapSubpixel",0xc9beb212,"kha.graphics2.truetype.StbTruetype.stbtt_MakeCodepointBitmapSubpixel","kha/graphics2/truetype/StbTruetype.hx",1575,0x5d9e0de9)
		HX_STACK_ARG(info,"info")
		HX_STACK_ARG(output,"output")
		HX_STACK_ARG(output_offset,"output_offset")
		HX_STACK_ARG(out_w,"out_w")
		HX_STACK_ARG(out_h,"out_h")
		HX_STACK_ARG(out_stride,"out_stride")
		HX_STACK_ARG(scale_x,"scale_x")
		HX_STACK_ARG(scale_y,"scale_y")
		HX_STACK_ARG(shift_x,"shift_x")
		HX_STACK_ARG(shift_y,"shift_y")
		HX_STACK_ARG(codepoint,"codepoint")
		HX_STACK_LINE(1576)
		::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1576)
		::kha::Blob tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1576)
		int tmp2 = output_offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1576)
		int tmp3 = out_w;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1576)
		int tmp4 = out_h;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1576)
		int tmp5 = out_stride;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1576)
		Float tmp6 = scale_x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1576)
		Float tmp7 = scale_y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1576)
		Float tmp8 = shift_x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1576)
		Float tmp9 = shift_y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1576)
		::kha::graphics2::truetype::Stbtt_fontinfo tmp10 = info;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1576)
		int tmp11 = codepoint;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1576)
		int tmp12 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_FindGlyphIndex(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1576)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt_MakeGlyphBitmapSubpixel(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp12);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(StbTruetype_obj,stbtt_MakeCodepointBitmapSubpixel,(void))

::kha::Blob StbTruetype_obj::stbtt_GetCodepointBitmap( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float scale_x,Float scale_y,int codepoint,::kha::graphics2::truetype::Stbtt_temp_region region){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetCodepointBitmap",0x11473274,"kha.graphics2.truetype.StbTruetype.stbtt_GetCodepointBitmap","kha/graphics2/truetype/StbTruetype.hx",1579,0x5d9e0de9)
	HX_STACK_ARG(info,"info")
	HX_STACK_ARG(scale_x,"scale_x")
	HX_STACK_ARG(scale_y,"scale_y")
	HX_STACK_ARG(codepoint,"codepoint")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(1580)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1580)
	Float tmp1 = scale_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1580)
	Float tmp2 = scale_y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1580)
	int tmp3 = codepoint;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1580)
	::kha::graphics2::truetype::Stbtt_temp_region tmp4 = region;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1580)
	::kha::Blob tmp5 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetCodepointBitmapSubpixel(tmp,tmp1,tmp2,((Float)0.0),((Float)0.0),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1580)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StbTruetype_obj,stbtt_GetCodepointBitmap,return )

Void StbTruetype_obj::stbtt_MakeCodepointBitmap( ::kha::graphics2::truetype::Stbtt_fontinfo info,::kha::Blob output,int output_offset,int out_w,int out_h,int out_stride,Float scale_x,Float scale_y,int codepoint){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_MakeCodepointBitmap",0x280e7cec,"kha.graphics2.truetype.StbTruetype.stbtt_MakeCodepointBitmap","kha/graphics2/truetype/StbTruetype.hx",1583,0x5d9e0de9)
		HX_STACK_ARG(info,"info")
		HX_STACK_ARG(output,"output")
		HX_STACK_ARG(output_offset,"output_offset")
		HX_STACK_ARG(out_w,"out_w")
		HX_STACK_ARG(out_h,"out_h")
		HX_STACK_ARG(out_stride,"out_stride")
		HX_STACK_ARG(scale_x,"scale_x")
		HX_STACK_ARG(scale_y,"scale_y")
		HX_STACK_ARG(codepoint,"codepoint")
		HX_STACK_LINE(1584)
		::kha::graphics2::truetype::Stbtt_fontinfo tmp = info;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1584)
		::kha::Blob tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1584)
		int tmp2 = output_offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1584)
		int tmp3 = out_w;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1584)
		int tmp4 = out_h;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1584)
		int tmp5 = out_stride;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1584)
		Float tmp6 = scale_x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1584)
		Float tmp7 = scale_y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1584)
		int tmp8 = codepoint;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1584)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt_MakeCodepointBitmapSubpixel(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,((Float)0.0),((Float)0.0),tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(StbTruetype_obj,stbtt_MakeCodepointBitmap,(void))

int StbTruetype_obj::stbtt_BakeFontBitmap( ::kha::Blob data,int offset,Float pixel_height,::kha::Blob pixels,int pw,int ph,int first_char,int num_chars,Array< ::Dynamic > chardata){
	HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_BakeFontBitmap",0x6b4863af,"kha.graphics2.truetype.StbTruetype.stbtt_BakeFontBitmap","kha/graphics2/truetype/StbTruetype.hx",1597,0x5d9e0de9)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(pixel_height,"pixel_height")
	HX_STACK_ARG(pixels,"pixels")
	HX_STACK_ARG(pw,"pw")
	HX_STACK_ARG(ph,"ph")
	HX_STACK_ARG(first_char,"first_char")
	HX_STACK_ARG(num_chars,"num_chars")
	HX_STACK_ARG(chardata,"chardata")
	HX_STACK_LINE(1598)
	Float scale;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(1599)
	int x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1599)
	int y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(1599)
	int bottom_y;		HX_STACK_VAR(bottom_y,"bottom_y");
	HX_STACK_LINE(1600)
	::kha::graphics2::truetype::Stbtt_fontinfo f = ::kha::graphics2::truetype::Stbtt_fontinfo_obj::__new();		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(1601)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp = f;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1601)
	::kha::Blob tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1601)
	int tmp2 = offset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1601)
	bool tmp3 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_InitFont(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1601)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1601)
	if ((tmp4)){
		HX_STACK_LINE(1602)
		return (int)-1;
	}
	HX_STACK_LINE(1603)
	{
		HX_STACK_LINE(1603)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1603)
		int tmp5 = (pw * ph);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1603)
		int _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1603)
		while((true)){
			HX_STACK_LINE(1603)
			bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1603)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1603)
			if ((tmp7)){
				HX_STACK_LINE(1603)
				break;
			}
			HX_STACK_LINE(1603)
			int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1603)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1604)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1604)
			pixels->writeU8(tmp9,(int)0);
		}
	}
	HX_STACK_LINE(1605)
	int tmp5 = y = (int)1;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1605)
	x = tmp5;
	HX_STACK_LINE(1606)
	bottom_y = (int)1;
	HX_STACK_LINE(1608)
	::kha::graphics2::truetype::Stbtt_fontinfo tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1608)
	Float tmp7 = pixel_height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1608)
	Float tmp8 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_ScaleForPixelHeight(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1608)
	scale = tmp8;
	HX_STACK_LINE(1610)
	{
		HX_STACK_LINE(1610)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1610)
		while((true)){
			HX_STACK_LINE(1610)
			bool tmp9 = (_g < num_chars);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1610)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1610)
			if ((tmp10)){
				HX_STACK_LINE(1610)
				break;
			}
			HX_STACK_LINE(1610)
			int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1610)
			int i = tmp11;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1611)
			int advance;		HX_STACK_VAR(advance,"advance");
			HX_STACK_LINE(1611)
			int lsb;		HX_STACK_VAR(lsb,"lsb");
			HX_STACK_LINE(1611)
			int x0;		HX_STACK_VAR(x0,"x0");
			HX_STACK_LINE(1611)
			int y0;		HX_STACK_VAR(y0,"y0");
			HX_STACK_LINE(1611)
			int x1;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1611)
			int y1;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(1611)
			int gw;		HX_STACK_VAR(gw,"gw");
			HX_STACK_LINE(1611)
			int gh;		HX_STACK_VAR(gh,"gh");
			HX_STACK_LINE(1612)
			::kha::graphics2::truetype::Stbtt_fontinfo tmp12 = f;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1612)
			int tmp13 = (first_char + i);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1612)
			int tmp14 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_FindGlyphIndex(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1612)
			int g = tmp14;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(1613)
			::kha::graphics2::truetype::Stbtt_fontinfo tmp15 = f;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1613)
			int tmp16 = g;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1613)
			::kha::graphics2::truetype::Stbtt_temp_glyph_h_metrics tmp17 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphHMetrics(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1613)
			::kha::graphics2::truetype::Stbtt_temp_glyph_h_metrics metrics = tmp17;		HX_STACK_VAR(metrics,"metrics");
			HX_STACK_LINE(1614)
			advance = metrics->advanceWidth;
			HX_STACK_LINE(1615)
			lsb = metrics->leftSideBearing;
			HX_STACK_LINE(1616)
			::kha::graphics2::truetype::Stbtt_fontinfo tmp18 = f;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1616)
			int tmp19 = g;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1616)
			Float tmp20 = scale;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1616)
			Float tmp21 = scale;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1616)
			::kha::graphics2::truetype::Stbtt_temp_rect tmp22 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetGlyphBitmapBox(tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1616)
			::kha::graphics2::truetype::Stbtt_temp_rect rect = tmp22;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1617)
			x0 = rect->x0;
			HX_STACK_LINE(1618)
			y0 = rect->y0;
			HX_STACK_LINE(1619)
			x1 = rect->x1;
			HX_STACK_LINE(1620)
			y1 = rect->y1;
			HX_STACK_LINE(1621)
			int tmp23 = (x1 - x0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1621)
			gw = tmp23;
			HX_STACK_LINE(1622)
			int tmp24 = (y1 - y0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1622)
			gh = tmp24;
			HX_STACK_LINE(1623)
			int tmp25 = (x + gw);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1623)
			int tmp26 = (tmp25 + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1623)
			int tmp27 = pw;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1623)
			bool tmp28 = (tmp26 >= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1623)
			if ((tmp28)){
				HX_STACK_LINE(1624)
				y = bottom_y;
				HX_STACK_LINE(1624)
				x = (int)1;
			}
			HX_STACK_LINE(1626)
			int tmp29 = (y + gh);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1626)
			int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1626)
			int tmp31 = ph;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1626)
			bool tmp32 = (tmp30 >= tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1626)
			if ((tmp32)){
				HX_STACK_LINE(1627)
				int tmp33 = i;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1627)
				int tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1627)
				return tmp34;
			}
			HX_STACK_LINE(1628)
			{
				HX_STACK_LINE(1628)
				int tmp33 = (x + gw);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1628)
				int tmp34 = pw;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1628)
				bool tmp35 = (tmp33 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1628)
				bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1628)
				if ((tmp36)){
					HX_STACK_LINE(1628)
					HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
				}
			}
			HX_STACK_LINE(1629)
			{
				HX_STACK_LINE(1629)
				int tmp33 = (y + gh);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1629)
				int tmp34 = ph;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1629)
				bool tmp35 = (tmp33 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1629)
				bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1629)
				if ((tmp36)){
					HX_STACK_LINE(1629)
					HX_STACK_DO_THROW(HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"));
				}
			}
			HX_STACK_LINE(1630)
			::kha::graphics2::truetype::Stbtt_fontinfo tmp33 = f;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1630)
			::kha::Blob tmp34 = pixels;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1630)
			int tmp35 = x;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1630)
			int tmp36 = (y * pw);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1630)
			int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1630)
			int tmp38 = gw;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1630)
			int tmp39 = gh;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1630)
			int tmp40 = pw;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1630)
			Float tmp41 = scale;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1630)
			Float tmp42 = scale;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1630)
			int tmp43 = g;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1630)
			::kha::graphics2::truetype::StbTruetype_obj::stbtt_MakeGlyphBitmap(tmp33,tmp34,tmp37,tmp38,tmp39,tmp40,tmp41,tmp42,tmp43);
			HX_STACK_LINE(1631)
			int tmp44 = i;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1631)
			::kha::graphics2::truetype::Stbtt_bakedchar tmp45 = chardata->__unsafe_get(tmp44).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1631)
			tmp45->x0 = x;
			HX_STACK_LINE(1632)
			int tmp46 = i;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1632)
			::kha::graphics2::truetype::Stbtt_bakedchar tmp47 = chardata->__unsafe_get(tmp46).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1632)
			tmp47->y0 = y;
			HX_STACK_LINE(1633)
			int tmp48 = (x + gw);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1633)
			int tmp49 = i;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1633)
			::kha::graphics2::truetype::Stbtt_bakedchar tmp50 = chardata->__unsafe_get(tmp49).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1633)
			tmp50->x1 = tmp48;
			HX_STACK_LINE(1634)
			int tmp51 = (y + gh);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1634)
			int tmp52 = i;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1634)
			::kha::graphics2::truetype::Stbtt_bakedchar tmp53 = chardata->__unsafe_get(tmp52).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1634)
			tmp53->y1 = tmp51;
			HX_STACK_LINE(1635)
			Float tmp54 = (scale * advance);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1635)
			int tmp55 = i;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1635)
			::kha::graphics2::truetype::Stbtt_bakedchar tmp56 = chardata->__unsafe_get(tmp55).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1635)
			tmp56->xadvance = tmp54;
			HX_STACK_LINE(1636)
			int tmp57 = i;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1636)
			::kha::graphics2::truetype::Stbtt_bakedchar tmp58 = chardata->__unsafe_get(tmp57).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1636)
			tmp58->xoff = x0;
			HX_STACK_LINE(1637)
			int tmp59 = i;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1637)
			::kha::graphics2::truetype::Stbtt_bakedchar tmp60 = chardata->__unsafe_get(tmp59).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1637)
			tmp60->yoff = y0;
			HX_STACK_LINE(1638)
			int tmp61 = (x + gw);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1638)
			int tmp62 = (tmp61 + (int)1);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1638)
			x = tmp62;
			HX_STACK_LINE(1639)
			int tmp63 = (y + gh);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1639)
			int tmp64 = (tmp63 + (int)1);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1639)
			int tmp65 = bottom_y;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1639)
			bool tmp66 = (tmp64 > tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1639)
			if ((tmp66)){
				HX_STACK_LINE(1640)
				int tmp67 = (y + gh);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1640)
				int tmp68 = (tmp67 + (int)1);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1640)
				bottom_y = tmp68;
			}
		}
	}
	HX_STACK_LINE(1642)
	int tmp9 = bottom_y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1642)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(StbTruetype_obj,stbtt_BakeFontBitmap,return )

Void StbTruetype_obj::stbtt_GetBakedQuad( Array< ::Dynamic > chardata,int pw,int ph,int char_index,Dynamic xpos,Dynamic ypos,::kha::graphics2::truetype::Stbtt_aligned_quad q,bool opengl_fillrule){
{
		HX_STACK_FRAME("kha.graphics2.truetype.StbTruetype","stbtt_GetBakedQuad",0x21e67034,"kha.graphics2.truetype.StbTruetype.stbtt_GetBakedQuad","kha/graphics2/truetype/StbTruetype.hx",1645,0x5d9e0de9)
		HX_STACK_ARG(chardata,"chardata")
		HX_STACK_ARG(pw,"pw")
		HX_STACK_ARG(ph,"ph")
		HX_STACK_ARG(char_index,"char_index")
		HX_STACK_ARG(xpos,"xpos")
		HX_STACK_ARG(ypos,"ypos")
		HX_STACK_ARG(q,"q")
		HX_STACK_ARG(opengl_fillrule,"opengl_fillrule")
		HX_STACK_LINE(1646)
		bool tmp = opengl_fillrule;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1646)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1646)
		if ((tmp)){
			HX_STACK_LINE(1646)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(1646)
			tmp1 = ((Float)-0.5);
		}
		HX_STACK_LINE(1646)
		Float d3d_bias = tmp1;		HX_STACK_VAR(d3d_bias,"d3d_bias");
		HX_STACK_LINE(1647)
		Float tmp2 = (Float(((Float)1.0)) / Float(pw));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1647)
		Float ipw = tmp2;		HX_STACK_VAR(ipw,"ipw");
		HX_STACK_LINE(1647)
		Float tmp3 = (Float(((Float)1.0)) / Float(ph));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1647)
		Float iph = tmp3;		HX_STACK_VAR(iph,"iph");
		HX_STACK_LINE(1648)
		int tmp4 = char_index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1648)
		::kha::graphics2::truetype::Stbtt_bakedchar tmp5 = chardata->__unsafe_get(tmp4).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1648)
		::kha::graphics2::truetype::Stbtt_bakedchar b = tmp5;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1649)
		Float tmp6 = (xpos->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ) + b->xoff);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1649)
		Float tmp7 = (tmp6 + ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1649)
		int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1649)
		int round_x = tmp8;		HX_STACK_VAR(round_x,"round_x");
		HX_STACK_LINE(1650)
		Float tmp9 = (ypos->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ) + b->yoff);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1650)
		Float tmp10 = (tmp9 + ((Float)0.5));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1650)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1650)
		int round_y = tmp11;		HX_STACK_VAR(round_y,"round_y");
		HX_STACK_LINE(1652)
		Float tmp12 = (round_x + d3d_bias);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1652)
		q->x0 = tmp12;
		HX_STACK_LINE(1653)
		Float tmp13 = (round_y + d3d_bias);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1653)
		q->y0 = tmp13;
		HX_STACK_LINE(1654)
		int tmp14 = (round_x + b->x1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1654)
		int tmp15 = b->x0;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1654)
		int tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1654)
		Float tmp17 = d3d_bias;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1654)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1654)
		q->x1 = tmp18;
		HX_STACK_LINE(1655)
		int tmp19 = (round_y + b->y1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1655)
		int tmp20 = b->y0;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1655)
		int tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1655)
		Float tmp22 = d3d_bias;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1655)
		Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1655)
		q->y1 = tmp23;
		HX_STACK_LINE(1657)
		Float tmp24 = (b->x0 * ipw);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1657)
		q->s0 = tmp24;
		HX_STACK_LINE(1658)
		Float tmp25 = (b->y0 * iph);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1658)
		q->t0 = tmp25;
		HX_STACK_LINE(1659)
		Float tmp26 = (b->x1 * ipw);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1659)
		q->s1 = tmp26;
		HX_STACK_LINE(1660)
		Float tmp27 = (b->y1 * iph);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1660)
		q->t1 = tmp27;
		HX_STACK_LINE(1662)
		hx::AddEq(xpos->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")),b->xadvance);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(StbTruetype_obj,stbtt_GetBakedQuad,(void))


StbTruetype_obj::StbTruetype_obj()
{
}

bool StbTruetype_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ttBYTE") ) { outValue = ttBYTE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ttCHAR") ) { outValue = ttCHAR_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ttLONG") ) { outValue = ttLONG_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ttSHORT") ) { outValue = ttSHORT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ttULONG") ) { outValue = ttULONG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ttFixed") ) { outValue = ttFixed_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ttUSHORT") ) { outValue = ttUSHORT_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stbtt_tag") ) { outValue = stbtt_tag_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stbtt_tag4") ) { outValue = stbtt_tag4_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STBTT_assert") ) { outValue = STBTT_assert_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyVertices") ) { outValue = copyVertices_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stbtt__isfont") ) { outValue = stbtt__isfont_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stbtt_InitFont") ) { outValue = stbtt_InitFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"STBTT__COMPARE") ) { outValue = STBTT__COMPARE_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stbtt_setvertex") ) { outValue = stbtt_setvertex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_Rasterize") ) { outValue = stbtt_Rasterize_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"STBTT_POINT_SIZE") ) { outValue = STBTT_POINT_SIZE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__rasterize") ) { outValue = stbtt__rasterize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__add_point") ) { outValue = stbtt__add_point_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stbtt__find_table") ) { outValue = stbtt__find_table_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_GetGlyphBox") ) { outValue = stbtt_GetGlyphBox_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__new_active") ) { outValue = stbtt__new_active_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__sort_edges") ) { outValue = stbtt__sort_edges_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stbtt_IsGlyphEmpty") ) { outValue = stbtt_IsGlyphEmpty_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__close_shape") ) { outValue = stbtt__close_shape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_GetBakedQuad") ) { outValue = stbtt_GetBakedQuad_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stbtt_GetGlyphShape") ) { outValue = stbtt_GetGlyphShape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_FlattenCurves") ) { outValue = stbtt_FlattenCurves_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"stbtt_FindGlyphIndex") ) { outValue = stbtt_FindGlyphIndex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__GetGlyfOffset") ) { outValue = stbtt__GetGlyfOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_GetGlyphBitmap") ) { outValue = stbtt_GetGlyphBitmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_BakeFontBitmap") ) { outValue = stbtt_BakeFontBitmap_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"stbtt_GetCodepointBox") ) { outValue = stbtt_GetCodepointBox_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_GetFontVMetrics") ) { outValue = stbtt_GetFontVMetrics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_MakeGlyphBitmap") ) { outValue = stbtt_MakeGlyphBitmap_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"stbtt_GetGlyphHMetrics") ) { outValue = stbtt_GetGlyphHMetrics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__tesselate_curve") ) { outValue = stbtt__tesselate_curve_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"stbtt_GetCodepointShape") ) { outValue = stbtt_GetCodepointShape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_GetGlyphBitmapBox") ) { outValue = stbtt_GetGlyphBitmapBox_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stbtt_GetFontBoundingBox") ) { outValue = stbtt_GetFontBoundingBox_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_GetCodepointBitmap") ) { outValue = stbtt_GetCodepointBitmap_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"stbtt_GetGlyphKernAdvance") ) { outValue = stbtt_GetGlyphKernAdvance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_ScaleForPixelHeight") ) { outValue = stbtt_ScaleForPixelHeight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_MakeCodepointBitmap") ) { outValue = stbtt_MakeCodepointBitmap_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"stbtt_GetCodepointHMetrics") ) { outValue = stbtt_GetCodepointHMetrics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__handle_clipped_edge") ) { outValue = stbtt__handle_clipped_edge_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__sort_edges_ins_sort") ) { outValue = stbtt__sort_edges_ins_sort_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"stbtt_GetFontOffsetForIndex") ) { outValue = stbtt_GetFontOffsetForIndex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_GetCodepointBitmapBox") ) { outValue = stbtt_GetCodepointBitmapBox_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__sort_edges_quicksort") ) { outValue = stbtt__sort_edges_quicksort_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"stbtt__fill_active_edges_new") ) { outValue = stbtt__fill_active_edges_new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_GetGlyphBitmapSubpixel") ) { outValue = stbtt_GetGlyphBitmapSubpixel_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"stbtt_GetCodepointKernAdvance") ) { outValue = stbtt_GetCodepointKernAdvance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt__rasterize_sorted_edges") ) { outValue = stbtt__rasterize_sorted_edges_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_MakeGlyphBitmapSubpixel") ) { outValue = stbtt_MakeGlyphBitmapSubpixel_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"stbtt_ScaleForMappingEmToPixels") ) { outValue = stbtt_ScaleForMappingEmToPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stbtt_GetGlyphBitmapBoxSubpixel") ) { outValue = stbtt_GetGlyphBitmapBoxSubpixel_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"stbtt_GetCodepointBitmapSubpixel") ) { outValue = stbtt_GetCodepointBitmapSubpixel_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"stbtt_MakeCodepointBitmapSubpixel") ) { outValue = stbtt_MakeCodepointBitmapSubpixel_dyn(); return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"stbtt_GetCodepointBitmapBoxSubpixel") ) { outValue = stbtt_GetCodepointBitmapBoxSubpixel_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_vmove,HX_HCSTRING("STBTT_vmove","\xc9","\x34","\xf2","\xe1")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_vline,HX_HCSTRING("STBTT_vline","\xac","\x69","\x44","\xe1")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_vcurve,HX_HCSTRING("STBTT_vcurve","\xf7","\x7b","\xee","\x13")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MACSTYLE_DONTCARE,HX_HCSTRING("STBTT_MACSTYLE_DONTCARE","\x01","\xcf","\x41","\xcc")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MACSTYLE_BOLD,HX_HCSTRING("STBTT_MACSTYLE_BOLD","\x24","\x22","\x1c","\x92")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MACSTYLE_ITALIC,HX_HCSTRING("STBTT_MACSTYLE_ITALIC","\x4f","\x59","\x45","\x11")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MACSTYLE_UNDERSCORE,HX_HCSTRING("STBTT_MACSTYLE_UNDERSCORE","\x19","\xf9","\x88","\x54")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MACSTYLE_NONE,HX_HCSTRING("STBTT_MACSTYLE_NONE","\x57","\xb3","\x0a","\x9a")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_PLATFORM_ID_UNICODE,HX_HCSTRING("STBTT_PLATFORM_ID_UNICODE","\x67","\xd0","\x88","\xe4")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_PLATFORM_ID_MAC,HX_HCSTRING("STBTT_PLATFORM_ID_MAC","\xd9","\x94","\x7e","\xed")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_PLATFORM_ID_ISO,HX_HCSTRING("STBTT_PLATFORM_ID_ISO","\x8f","\x9b","\x7b","\xed")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_PLATFORM_ID_MICROSOFT,HX_HCSTRING("STBTT_PLATFORM_ID_MICROSOFT","\xb8","\x1d","\xef","\x0e")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_1_0,HX_HCSTRING("STBTT_UNICODE_EID_UNICODE_1_0","\x81","\x8f","\x4b","\x15")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_1_1,HX_HCSTRING("STBTT_UNICODE_EID_UNICODE_1_1","\x82","\x8f","\x4b","\x15")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_UNICODE_EID_ISO_10646,HX_HCSTRING("STBTT_UNICODE_EID_ISO_10646","\x40","\xf7","\xd0","\x91")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_2_0_BMP,HX_HCSTRING("STBTT_UNICODE_EID_UNICODE_2_0_BMP","\xe8","\xf7","\x02","\x13")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_2_0_FULL,HX_HCSTRING("STBTT_UNICODE_EID_UNICODE_2_0_FULL","\x6c","\xdc","\x40","\x92")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_EID_SYMBOL,HX_HCSTRING("STBTT_MS_EID_SYMBOL","\x52","\x05","\x3b","\x46")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_EID_UNICODE_BMP,HX_HCSTRING("STBTT_MS_EID_UNICODE_BMP","\x69","\xb0","\xb5","\x48")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_EID_SHIFTJIS,HX_HCSTRING("STBTT_MS_EID_SHIFTJIS","\x0c","\x48","\x91","\x83")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_EID_UNICODE_FULL,HX_HCSTRING("STBTT_MS_EID_UNICODE_FULL","\xcb","\x94","\xef","\x58")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_EID_ROMAN,HX_HCSTRING("STBTT_MAC_EID_ROMAN","\xb0","\xd0","\x49","\x4b")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_EID_ARABIC,HX_HCSTRING("STBTT_MAC_EID_ARABIC","\x39","\x93","\x81","\x7b")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_EID_JAPANESE,HX_HCSTRING("STBTT_MAC_EID_JAPANESE","\xfe","\x66","\x94","\x3c")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_EID_HEBREW,HX_HCSTRING("STBTT_MAC_EID_HEBREW","\x8c","\xe6","\x80","\xcc")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_EID_CHINESE_TRAD,HX_HCSTRING("STBTT_MAC_EID_CHINESE_TRAD","\xa0","\x9c","\x2f","\x3e")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_EID_GREEK,HX_HCSTRING("STBTT_MAC_EID_GREEK","\x73","\x04","\xd7","\xf7")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_EID_KOREAN,HX_HCSTRING("STBTT_MAC_EID_KOREAN","\xd1","\x51","\x1e","\xcc")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_EID_RUSSIAN,HX_HCSTRING("STBTT_MAC_EID_RUSSIAN","\xc6","\x46","\x51","\xf4")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_ENGLISH,HX_HCSTRING("STBTT_MS_LANG_ENGLISH","\xfa","\xac","\xa2","\xc4")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_ITALIAN,HX_HCSTRING("STBTT_MS_LANG_ITALIAN","\x8a","\x27","\xb5","\x5c")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_CHINESE,HX_HCSTRING("STBTT_MS_LANG_CHINESE","\x77","\x22","\x70","\x33")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_JAPANESE,HX_HCSTRING("STBTT_MS_LANG_JAPANESE","\xc7","\x39","\x2b","\x92")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_DUTCH,HX_HCSTRING("STBTT_MS_LANG_DUTCH","\x72","\xd0","\xe3","\x00")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_KOREAN,HX_HCSTRING("STBTT_MS_LANG_KOREAN","\x5a","\xb0","\x39","\x1d")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_FRENCH,HX_HCSTRING("STBTT_MS_LANG_FRENCH","\xf0","\xaf","\x13","\xcf")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_RUSSIAN,HX_HCSTRING("STBTT_MS_LANG_RUSSIAN","\x1d","\xa0","\x28","\x9b")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_GERMAN,HX_HCSTRING("STBTT_MS_LANG_GERMAN","\xdc","\x83","\xd0","\xc1")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_SPANISH,HX_HCSTRING("STBTT_MS_LANG_SPANISH","\x7e","\xd6","\x70","\x64")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_HEBREW,HX_HCSTRING("STBTT_MS_LANG_HEBREW","\x15","\x45","\x9c","\x1d")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MS_LANG_SWEDISH,HX_HCSTRING("STBTT_MS_LANG_SWEDISH","\xe5","\x8c","\xee","\x77")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_ENGLISH,HX_HCSTRING("STBTT_MAC_LANG_ENGLISH","\x8d","\x78","\xfe","\xbb")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_JAPANESE,HX_HCSTRING("STBTT_MAC_LANG_JAPANESE","\xd4","\x8e","\x21","\x0b")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_ARABIC,HX_HCSTRING("STBTT_MAC_LANG_ARABIC","\x8f","\xf9","\xe7","\xd6")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_KOREAN,HX_HCSTRING("STBTT_MAC_LANG_KOREAN","\x27","\xb8","\x84","\x27")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_DUTCH,HX_HCSTRING("STBTT_MAC_LANG_DUTCH","\x45","\x81","\x53","\x78")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_RUSSIAN,HX_HCSTRING("STBTT_MAC_LANG_RUSSIAN","\xb0","\x6b","\x84","\x92")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_FRENCH,HX_HCSTRING("STBTT_MAC_LANG_FRENCH","\xbd","\xb7","\x5e","\xd9")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_SPANISH,HX_HCSTRING("STBTT_MAC_LANG_SPANISH","\x11","\xa2","\xcc","\x5b")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_GERMAN,HX_HCSTRING("STBTT_MAC_LANG_GERMAN","\xa9","\x8b","\x1b","\xcc")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_SWEDISH,HX_HCSTRING("STBTT_MAC_LANG_SWEDISH","\x78","\x58","\x4a","\x6f")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_HEBREW,HX_HCSTRING("STBTT_MAC_LANG_HEBREW","\xe2","\x4c","\xe7","\x27")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_CHINESE_SIMPLIFIED,HX_HCSTRING("STBTT_MAC_LANG_CHINESE_SIMPLIFIED","\xed","\x7a","\xbc","\xaa")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_ITALIAN,HX_HCSTRING("STBTT_MAC_LANG_ITALIAN","\x1d","\xf3","\x10","\x54")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAC_LANG_CHINESE_TRAD,HX_HCSTRING("STBTT_MAC_LANG_CHINESE_TRAD","\x76","\x67","\x9c","\xaf")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_MAX_OVERSAMPLE,HX_HCSTRING("STBTT_MAX_OVERSAMPLE","\x17","\xd3","\x91","\xa6")},
	{hx::fsInt,(void *) &StbTruetype_obj::STBTT_RASTERIZER_VERSION,HX_HCSTRING("STBTT_RASTERIZER_VERSION","\x92","\x1f","\xd8","\x5e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StbTruetype_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_vmove,"STBTT_vmove");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_vline,"STBTT_vline");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_vcurve,"STBTT_vcurve");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MACSTYLE_DONTCARE,"STBTT_MACSTYLE_DONTCARE");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MACSTYLE_BOLD,"STBTT_MACSTYLE_BOLD");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MACSTYLE_ITALIC,"STBTT_MACSTYLE_ITALIC");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MACSTYLE_UNDERSCORE,"STBTT_MACSTYLE_UNDERSCORE");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MACSTYLE_NONE,"STBTT_MACSTYLE_NONE");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_PLATFORM_ID_UNICODE,"STBTT_PLATFORM_ID_UNICODE");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_PLATFORM_ID_MAC,"STBTT_PLATFORM_ID_MAC");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_PLATFORM_ID_ISO,"STBTT_PLATFORM_ID_ISO");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_PLATFORM_ID_MICROSOFT,"STBTT_PLATFORM_ID_MICROSOFT");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_1_0,"STBTT_UNICODE_EID_UNICODE_1_0");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_1_1,"STBTT_UNICODE_EID_UNICODE_1_1");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_UNICODE_EID_ISO_10646,"STBTT_UNICODE_EID_ISO_10646");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_2_0_BMP,"STBTT_UNICODE_EID_UNICODE_2_0_BMP");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_2_0_FULL,"STBTT_UNICODE_EID_UNICODE_2_0_FULL");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_EID_SYMBOL,"STBTT_MS_EID_SYMBOL");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_EID_UNICODE_BMP,"STBTT_MS_EID_UNICODE_BMP");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_EID_SHIFTJIS,"STBTT_MS_EID_SHIFTJIS");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_EID_UNICODE_FULL,"STBTT_MS_EID_UNICODE_FULL");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_ROMAN,"STBTT_MAC_EID_ROMAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_ARABIC,"STBTT_MAC_EID_ARABIC");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_JAPANESE,"STBTT_MAC_EID_JAPANESE");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_HEBREW,"STBTT_MAC_EID_HEBREW");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_CHINESE_TRAD,"STBTT_MAC_EID_CHINESE_TRAD");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_GREEK,"STBTT_MAC_EID_GREEK");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_KOREAN,"STBTT_MAC_EID_KOREAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_RUSSIAN,"STBTT_MAC_EID_RUSSIAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_ENGLISH,"STBTT_MS_LANG_ENGLISH");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_ITALIAN,"STBTT_MS_LANG_ITALIAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_CHINESE,"STBTT_MS_LANG_CHINESE");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_JAPANESE,"STBTT_MS_LANG_JAPANESE");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_DUTCH,"STBTT_MS_LANG_DUTCH");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_KOREAN,"STBTT_MS_LANG_KOREAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_FRENCH,"STBTT_MS_LANG_FRENCH");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_RUSSIAN,"STBTT_MS_LANG_RUSSIAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_GERMAN,"STBTT_MS_LANG_GERMAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_SPANISH,"STBTT_MS_LANG_SPANISH");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_HEBREW,"STBTT_MS_LANG_HEBREW");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_SWEDISH,"STBTT_MS_LANG_SWEDISH");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_ENGLISH,"STBTT_MAC_LANG_ENGLISH");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_JAPANESE,"STBTT_MAC_LANG_JAPANESE");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_ARABIC,"STBTT_MAC_LANG_ARABIC");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_KOREAN,"STBTT_MAC_LANG_KOREAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_DUTCH,"STBTT_MAC_LANG_DUTCH");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_RUSSIAN,"STBTT_MAC_LANG_RUSSIAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_FRENCH,"STBTT_MAC_LANG_FRENCH");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_SPANISH,"STBTT_MAC_LANG_SPANISH");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_GERMAN,"STBTT_MAC_LANG_GERMAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_SWEDISH,"STBTT_MAC_LANG_SWEDISH");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_HEBREW,"STBTT_MAC_LANG_HEBREW");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_CHINESE_SIMPLIFIED,"STBTT_MAC_LANG_CHINESE_SIMPLIFIED");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_ITALIAN,"STBTT_MAC_LANG_ITALIAN");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_CHINESE_TRAD,"STBTT_MAC_LANG_CHINESE_TRAD");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_MAX_OVERSAMPLE,"STBTT_MAX_OVERSAMPLE");
	HX_MARK_MEMBER_NAME(StbTruetype_obj::STBTT_RASTERIZER_VERSION,"STBTT_RASTERIZER_VERSION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_vmove,"STBTT_vmove");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_vline,"STBTT_vline");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_vcurve,"STBTT_vcurve");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MACSTYLE_DONTCARE,"STBTT_MACSTYLE_DONTCARE");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MACSTYLE_BOLD,"STBTT_MACSTYLE_BOLD");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MACSTYLE_ITALIC,"STBTT_MACSTYLE_ITALIC");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MACSTYLE_UNDERSCORE,"STBTT_MACSTYLE_UNDERSCORE");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MACSTYLE_NONE,"STBTT_MACSTYLE_NONE");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_PLATFORM_ID_UNICODE,"STBTT_PLATFORM_ID_UNICODE");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_PLATFORM_ID_MAC,"STBTT_PLATFORM_ID_MAC");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_PLATFORM_ID_ISO,"STBTT_PLATFORM_ID_ISO");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_PLATFORM_ID_MICROSOFT,"STBTT_PLATFORM_ID_MICROSOFT");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_1_0,"STBTT_UNICODE_EID_UNICODE_1_0");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_1_1,"STBTT_UNICODE_EID_UNICODE_1_1");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_UNICODE_EID_ISO_10646,"STBTT_UNICODE_EID_ISO_10646");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_2_0_BMP,"STBTT_UNICODE_EID_UNICODE_2_0_BMP");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_UNICODE_EID_UNICODE_2_0_FULL,"STBTT_UNICODE_EID_UNICODE_2_0_FULL");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_EID_SYMBOL,"STBTT_MS_EID_SYMBOL");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_EID_UNICODE_BMP,"STBTT_MS_EID_UNICODE_BMP");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_EID_SHIFTJIS,"STBTT_MS_EID_SHIFTJIS");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_EID_UNICODE_FULL,"STBTT_MS_EID_UNICODE_FULL");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_ROMAN,"STBTT_MAC_EID_ROMAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_ARABIC,"STBTT_MAC_EID_ARABIC");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_JAPANESE,"STBTT_MAC_EID_JAPANESE");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_HEBREW,"STBTT_MAC_EID_HEBREW");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_CHINESE_TRAD,"STBTT_MAC_EID_CHINESE_TRAD");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_GREEK,"STBTT_MAC_EID_GREEK");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_KOREAN,"STBTT_MAC_EID_KOREAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_EID_RUSSIAN,"STBTT_MAC_EID_RUSSIAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_ENGLISH,"STBTT_MS_LANG_ENGLISH");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_ITALIAN,"STBTT_MS_LANG_ITALIAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_CHINESE,"STBTT_MS_LANG_CHINESE");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_JAPANESE,"STBTT_MS_LANG_JAPANESE");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_DUTCH,"STBTT_MS_LANG_DUTCH");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_KOREAN,"STBTT_MS_LANG_KOREAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_FRENCH,"STBTT_MS_LANG_FRENCH");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_RUSSIAN,"STBTT_MS_LANG_RUSSIAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_GERMAN,"STBTT_MS_LANG_GERMAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_SPANISH,"STBTT_MS_LANG_SPANISH");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_HEBREW,"STBTT_MS_LANG_HEBREW");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MS_LANG_SWEDISH,"STBTT_MS_LANG_SWEDISH");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_ENGLISH,"STBTT_MAC_LANG_ENGLISH");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_JAPANESE,"STBTT_MAC_LANG_JAPANESE");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_ARABIC,"STBTT_MAC_LANG_ARABIC");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_KOREAN,"STBTT_MAC_LANG_KOREAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_DUTCH,"STBTT_MAC_LANG_DUTCH");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_RUSSIAN,"STBTT_MAC_LANG_RUSSIAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_FRENCH,"STBTT_MAC_LANG_FRENCH");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_SPANISH,"STBTT_MAC_LANG_SPANISH");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_GERMAN,"STBTT_MAC_LANG_GERMAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_SWEDISH,"STBTT_MAC_LANG_SWEDISH");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_HEBREW,"STBTT_MAC_LANG_HEBREW");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_CHINESE_SIMPLIFIED,"STBTT_MAC_LANG_CHINESE_SIMPLIFIED");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_ITALIAN,"STBTT_MAC_LANG_ITALIAN");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAC_LANG_CHINESE_TRAD,"STBTT_MAC_LANG_CHINESE_TRAD");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_MAX_OVERSAMPLE,"STBTT_MAX_OVERSAMPLE");
	HX_VISIT_MEMBER_NAME(StbTruetype_obj::STBTT_RASTERIZER_VERSION,"STBTT_RASTERIZER_VERSION");
};

#endif

hx::Class StbTruetype_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STBTT_assert","\x44","\xe2","\x7c","\xe3"),
	HX_HCSTRING("STBTT_POINT_SIZE","\xee","\x9c","\x31","\x9b"),
	HX_HCSTRING("STBTT_vmove","\xc9","\x34","\xf2","\xe1"),
	HX_HCSTRING("STBTT_vline","\xac","\x69","\x44","\xe1"),
	HX_HCSTRING("STBTT_vcurve","\xf7","\x7b","\xee","\x13"),
	HX_HCSTRING("STBTT_MACSTYLE_DONTCARE","\x01","\xcf","\x41","\xcc"),
	HX_HCSTRING("STBTT_MACSTYLE_BOLD","\x24","\x22","\x1c","\x92"),
	HX_HCSTRING("STBTT_MACSTYLE_ITALIC","\x4f","\x59","\x45","\x11"),
	HX_HCSTRING("STBTT_MACSTYLE_UNDERSCORE","\x19","\xf9","\x88","\x54"),
	HX_HCSTRING("STBTT_MACSTYLE_NONE","\x57","\xb3","\x0a","\x9a"),
	HX_HCSTRING("STBTT_PLATFORM_ID_UNICODE","\x67","\xd0","\x88","\xe4"),
	HX_HCSTRING("STBTT_PLATFORM_ID_MAC","\xd9","\x94","\x7e","\xed"),
	HX_HCSTRING("STBTT_PLATFORM_ID_ISO","\x8f","\x9b","\x7b","\xed"),
	HX_HCSTRING("STBTT_PLATFORM_ID_MICROSOFT","\xb8","\x1d","\xef","\x0e"),
	HX_HCSTRING("STBTT_UNICODE_EID_UNICODE_1_0","\x81","\x8f","\x4b","\x15"),
	HX_HCSTRING("STBTT_UNICODE_EID_UNICODE_1_1","\x82","\x8f","\x4b","\x15"),
	HX_HCSTRING("STBTT_UNICODE_EID_ISO_10646","\x40","\xf7","\xd0","\x91"),
	HX_HCSTRING("STBTT_UNICODE_EID_UNICODE_2_0_BMP","\xe8","\xf7","\x02","\x13"),
	HX_HCSTRING("STBTT_UNICODE_EID_UNICODE_2_0_FULL","\x6c","\xdc","\x40","\x92"),
	HX_HCSTRING("STBTT_MS_EID_SYMBOL","\x52","\x05","\x3b","\x46"),
	HX_HCSTRING("STBTT_MS_EID_UNICODE_BMP","\x69","\xb0","\xb5","\x48"),
	HX_HCSTRING("STBTT_MS_EID_SHIFTJIS","\x0c","\x48","\x91","\x83"),
	HX_HCSTRING("STBTT_MS_EID_UNICODE_FULL","\xcb","\x94","\xef","\x58"),
	HX_HCSTRING("STBTT_MAC_EID_ROMAN","\xb0","\xd0","\x49","\x4b"),
	HX_HCSTRING("STBTT_MAC_EID_ARABIC","\x39","\x93","\x81","\x7b"),
	HX_HCSTRING("STBTT_MAC_EID_JAPANESE","\xfe","\x66","\x94","\x3c"),
	HX_HCSTRING("STBTT_MAC_EID_HEBREW","\x8c","\xe6","\x80","\xcc"),
	HX_HCSTRING("STBTT_MAC_EID_CHINESE_TRAD","\xa0","\x9c","\x2f","\x3e"),
	HX_HCSTRING("STBTT_MAC_EID_GREEK","\x73","\x04","\xd7","\xf7"),
	HX_HCSTRING("STBTT_MAC_EID_KOREAN","\xd1","\x51","\x1e","\xcc"),
	HX_HCSTRING("STBTT_MAC_EID_RUSSIAN","\xc6","\x46","\x51","\xf4"),
	HX_HCSTRING("STBTT_MS_LANG_ENGLISH","\xfa","\xac","\xa2","\xc4"),
	HX_HCSTRING("STBTT_MS_LANG_ITALIAN","\x8a","\x27","\xb5","\x5c"),
	HX_HCSTRING("STBTT_MS_LANG_CHINESE","\x77","\x22","\x70","\x33"),
	HX_HCSTRING("STBTT_MS_LANG_JAPANESE","\xc7","\x39","\x2b","\x92"),
	HX_HCSTRING("STBTT_MS_LANG_DUTCH","\x72","\xd0","\xe3","\x00"),
	HX_HCSTRING("STBTT_MS_LANG_KOREAN","\x5a","\xb0","\x39","\x1d"),
	HX_HCSTRING("STBTT_MS_LANG_FRENCH","\xf0","\xaf","\x13","\xcf"),
	HX_HCSTRING("STBTT_MS_LANG_RUSSIAN","\x1d","\xa0","\x28","\x9b"),
	HX_HCSTRING("STBTT_MS_LANG_GERMAN","\xdc","\x83","\xd0","\xc1"),
	HX_HCSTRING("STBTT_MS_LANG_SPANISH","\x7e","\xd6","\x70","\x64"),
	HX_HCSTRING("STBTT_MS_LANG_HEBREW","\x15","\x45","\x9c","\x1d"),
	HX_HCSTRING("STBTT_MS_LANG_SWEDISH","\xe5","\x8c","\xee","\x77"),
	HX_HCSTRING("STBTT_MAC_LANG_ENGLISH","\x8d","\x78","\xfe","\xbb"),
	HX_HCSTRING("STBTT_MAC_LANG_JAPANESE","\xd4","\x8e","\x21","\x0b"),
	HX_HCSTRING("STBTT_MAC_LANG_ARABIC","\x8f","\xf9","\xe7","\xd6"),
	HX_HCSTRING("STBTT_MAC_LANG_KOREAN","\x27","\xb8","\x84","\x27"),
	HX_HCSTRING("STBTT_MAC_LANG_DUTCH","\x45","\x81","\x53","\x78"),
	HX_HCSTRING("STBTT_MAC_LANG_RUSSIAN","\xb0","\x6b","\x84","\x92"),
	HX_HCSTRING("STBTT_MAC_LANG_FRENCH","\xbd","\xb7","\x5e","\xd9"),
	HX_HCSTRING("STBTT_MAC_LANG_SPANISH","\x11","\xa2","\xcc","\x5b"),
	HX_HCSTRING("STBTT_MAC_LANG_GERMAN","\xa9","\x8b","\x1b","\xcc"),
	HX_HCSTRING("STBTT_MAC_LANG_SWEDISH","\x78","\x58","\x4a","\x6f"),
	HX_HCSTRING("STBTT_MAC_LANG_HEBREW","\xe2","\x4c","\xe7","\x27"),
	HX_HCSTRING("STBTT_MAC_LANG_CHINESE_SIMPLIFIED","\xed","\x7a","\xbc","\xaa"),
	HX_HCSTRING("STBTT_MAC_LANG_ITALIAN","\x1d","\xf3","\x10","\x54"),
	HX_HCSTRING("STBTT_MAC_LANG_CHINESE_TRAD","\x76","\x67","\x9c","\xaf"),
	HX_HCSTRING("STBTT_MAX_OVERSAMPLE","\x17","\xd3","\x91","\xa6"),
	HX_HCSTRING("STBTT_RASTERIZER_VERSION","\x92","\x1f","\xd8","\x5e"),
	HX_HCSTRING("ttBYTE","\x88","\x0c","\xc5","\x57"),
	HX_HCSTRING("ttCHAR","\x56","\x4c","\x61","\x58"),
	HX_HCSTRING("ttUSHORT","\x67","\xed","\x00","\xb9"),
	HX_HCSTRING("ttSHORT","\xdc","\x66","\x35","\x33"),
	HX_HCSTRING("ttULONG","\xd1","\x66","\xa7","\x5c"),
	HX_HCSTRING("ttLONG","\xfc","\x92","\x59","\x5e"),
	HX_HCSTRING("ttFixed","\xd4","\x13","\xef","\xcc"),
	HX_HCSTRING("stbtt_tag4","\x78","\x98","\x4e","\x15"),
	HX_HCSTRING("stbtt_tag","\x3c","\x1c","\x8a","\x03"),
	HX_HCSTRING("stbtt__isfont","\x3a","\x63","\xfa","\x4a"),
	HX_HCSTRING("stbtt__find_table","\x49","\x81","\x8d","\x23"),
	HX_HCSTRING("stbtt_GetFontOffsetForIndex","\xa3","\x34","\xdd","\x4b"),
	HX_HCSTRING("stbtt_InitFont","\xfd","\x73","\xa3","\x2a"),
	HX_HCSTRING("stbtt_FindGlyphIndex","\xdd","\xec","\xa8","\x16"),
	HX_HCSTRING("stbtt_GetCodepointShape","\x96","\xc0","\x5d","\x8e"),
	HX_HCSTRING("stbtt_setvertex","\xe8","\x33","\xc6","\x2e"),
	HX_HCSTRING("stbtt__GetGlyfOffset","\x1a","\x16","\xcf","\xa2"),
	HX_HCSTRING("stbtt_GetGlyphBox","\x37","\x1a","\xfa","\x10"),
	HX_HCSTRING("stbtt_GetCodepointBox","\x40","\xe4","\xcd","\x0e"),
	HX_HCSTRING("stbtt_IsGlyphEmpty","\xc9","\x03","\x2d","\x3d"),
	HX_HCSTRING("stbtt__close_shape","\xf9","\x7b","\x95","\xd8"),
	HX_HCSTRING("copyVertices","\xce","\x74","\xee","\x65"),
	HX_HCSTRING("stbtt_GetGlyphShape","\x4d","\xa2","\x7c","\x9c"),
	HX_HCSTRING("stbtt_GetGlyphHMetrics","\x0f","\x2b","\x7b","\xb8"),
	HX_HCSTRING("stbtt_GetGlyphKernAdvance","\x78","\x83","\xcc","\xd4"),
	HX_HCSTRING("stbtt_GetCodepointKernAdvance","\x81","\xfe","\xf6","\x44"),
	HX_HCSTRING("stbtt_GetCodepointHMetrics","\x66","\x60","\xe1","\x6d"),
	HX_HCSTRING("stbtt_GetFontVMetrics","\xd4","\xcf","\xe5","\x37"),
	HX_HCSTRING("stbtt_GetFontBoundingBox","\x00","\x04","\x72","\xbc"),
	HX_HCSTRING("stbtt_ScaleForPixelHeight","\x70","\x94","\xc5","\xe8"),
	HX_HCSTRING("stbtt_ScaleForMappingEmToPixels","\xe1","\xc5","\x40","\x2b"),
	HX_HCSTRING("stbtt_GetGlyphBitmapBoxSubpixel","\xae","\xbb","\x41","\xb2"),
	HX_HCSTRING("stbtt_GetGlyphBitmapBox","\x88","\x8a","\x20","\xe1"),
	HX_HCSTRING("stbtt_GetCodepointBitmapBoxSubpixel","\x77","\xa3","\x3b","\xe4"),
	HX_HCSTRING("stbtt_GetCodepointBitmapBox","\x51","\x01","\x29","\xe5"),
	HX_HCSTRING("stbtt__new_active","\x06","\x90","\x71","\x1c"),
	HX_HCSTRING("stbtt__handle_clipped_edge","\xd3","\x7c","\xf0","\xde"),
	HX_HCSTRING("stbtt__fill_active_edges_new","\x19","\x60","\x2c","\xd2"),
	HX_HCSTRING("stbtt__rasterize_sorted_edges","\xdd","\x61","\x9c","\x16"),
	HX_HCSTRING("STBTT__COMPARE","\x04","\x3d","\xab","\xda"),
	HX_HCSTRING("stbtt__sort_edges_ins_sort","\x78","\xf0","\x11","\x53"),
	HX_HCSTRING("stbtt__sort_edges_quicksort","\xc2","\x9b","\x91","\xe5"),
	HX_HCSTRING("stbtt__sort_edges","\xb6","\xf7","\x1b","\xb6"),
	HX_HCSTRING("stbtt__rasterize","\x16","\xcf","\x6e","\x35"),
	HX_HCSTRING("stbtt__add_point","\x91","\x56","\x2a","\x5d"),
	HX_HCSTRING("stbtt__tesselate_curve","\xe9","\x32","\x80","\x36"),
	HX_HCSTRING("stbtt_FlattenCurves","\x0a","\x18","\x14","\xfb"),
	HX_HCSTRING("stbtt_Rasterize","\x39","\x6c","\x89","\x22"),
	HX_HCSTRING("stbtt_GetGlyphBitmapSubpixel","\x69","\x7b","\xd8","\x67"),
	HX_HCSTRING("stbtt_GetGlyphBitmap","\x43","\x97","\x73","\x24"),
	HX_HCSTRING("stbtt_MakeGlyphBitmapSubpixel","\x55","\xb8","\x15","\xa0"),
	HX_HCSTRING("stbtt_MakeGlyphBitmap","\x2f","\x08","\x34","\x88"),
	HX_HCSTRING("stbtt_GetCodepointBitmapSubpixel","\x00","\xcc","\x1f","\x41"),
	HX_HCSTRING("stbtt_MakeCodepointBitmapSubpixel","\xec","\xee","\x3b","\xc9"),
	HX_HCSTRING("stbtt_GetCodepointBitmap","\xda","\xf8","\x8c","\xd7"),
	HX_HCSTRING("stbtt_MakeCodepointBitmap","\xc6","\x4f","\xd6","\xde"),
	HX_HCSTRING("stbtt_BakeFontBitmap","\x15","\x7f","\x85","\xc2"),
	HX_HCSTRING("stbtt_GetBakedQuad","\x1a","\xc6","\x35","\x46"),
	::String(null()) };

void StbTruetype_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.StbTruetype","\x14","\x96","\xdb","\x79");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StbTruetype_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StbTruetype_obj >;
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

void StbTruetype_obj::__boot()
{
	STBTT_vmove= (int)1;
	STBTT_vline= (int)2;
	STBTT_vcurve= (int)3;
	STBTT_MACSTYLE_DONTCARE= (int)0;
	STBTT_MACSTYLE_BOLD= (int)1;
	STBTT_MACSTYLE_ITALIC= (int)2;
	STBTT_MACSTYLE_UNDERSCORE= (int)4;
	STBTT_MACSTYLE_NONE= (int)8;
	STBTT_PLATFORM_ID_UNICODE= (int)0;
	STBTT_PLATFORM_ID_MAC= (int)1;
	STBTT_PLATFORM_ID_ISO= (int)2;
	STBTT_PLATFORM_ID_MICROSOFT= (int)3;
	STBTT_UNICODE_EID_UNICODE_1_0= (int)0;
	STBTT_UNICODE_EID_UNICODE_1_1= (int)1;
	STBTT_UNICODE_EID_ISO_10646= (int)2;
	STBTT_UNICODE_EID_UNICODE_2_0_BMP= (int)3;
	STBTT_UNICODE_EID_UNICODE_2_0_FULL= (int)4;
	STBTT_MS_EID_SYMBOL= (int)0;
	STBTT_MS_EID_UNICODE_BMP= (int)1;
	STBTT_MS_EID_SHIFTJIS= (int)2;
	STBTT_MS_EID_UNICODE_FULL= (int)10;
	STBTT_MAC_EID_ROMAN= (int)0;
	STBTT_MAC_EID_ARABIC= (int)4;
	STBTT_MAC_EID_JAPANESE= (int)1;
	STBTT_MAC_EID_HEBREW= (int)5;
	STBTT_MAC_EID_CHINESE_TRAD= (int)2;
	STBTT_MAC_EID_GREEK= (int)6;
	STBTT_MAC_EID_KOREAN= (int)3;
	STBTT_MAC_EID_RUSSIAN= (int)7;
	STBTT_MS_LANG_ENGLISH= (int)1033;
	STBTT_MS_LANG_ITALIAN= (int)1040;
	STBTT_MS_LANG_CHINESE= (int)2052;
	STBTT_MS_LANG_JAPANESE= (int)1041;
	STBTT_MS_LANG_DUTCH= (int)1043;
	STBTT_MS_LANG_KOREAN= (int)1042;
	STBTT_MS_LANG_FRENCH= (int)1036;
	STBTT_MS_LANG_RUSSIAN= (int)1049;
	STBTT_MS_LANG_GERMAN= (int)1031;
	STBTT_MS_LANG_SPANISH= (int)1033;
	STBTT_MS_LANG_HEBREW= (int)1037;
	STBTT_MS_LANG_SWEDISH= (int)1053;
	STBTT_MAC_LANG_ENGLISH= (int)0;
	STBTT_MAC_LANG_JAPANESE= (int)11;
	STBTT_MAC_LANG_ARABIC= (int)12;
	STBTT_MAC_LANG_KOREAN= (int)23;
	STBTT_MAC_LANG_DUTCH= (int)4;
	STBTT_MAC_LANG_RUSSIAN= (int)32;
	STBTT_MAC_LANG_FRENCH= (int)1;
	STBTT_MAC_LANG_SPANISH= (int)6;
	STBTT_MAC_LANG_GERMAN= (int)2;
	STBTT_MAC_LANG_SWEDISH= (int)5;
	STBTT_MAC_LANG_HEBREW= (int)10;
	STBTT_MAC_LANG_CHINESE_SIMPLIFIED= (int)33;
	STBTT_MAC_LANG_ITALIAN= (int)3;
	STBTT_MAC_LANG_CHINESE_TRAD= (int)19;
	STBTT_MAX_OVERSAMPLE= (int)8;
	STBTT_RASTERIZER_VERSION= (int)2;
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
