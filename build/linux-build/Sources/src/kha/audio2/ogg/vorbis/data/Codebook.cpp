#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisTools
#include <kha/audio2/ogg/vorbis/VorbisTools.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Codebook
#include <kha/audio2/ogg/vorbis/data/Codebook.h>
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
namespace data{

Void Codebook_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","new",0x6d842e98,"kha.audio2.ogg.vorbis.data.Codebook.new","kha/audio2/ogg/vorbis/data/Codebook.hx",34,0xa03d0d77)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Codebook_obj::~Codebook_obj() { }

Dynamic Codebook_obj::__CreateEmpty() { return  new Codebook_obj; }
hx::ObjectPtr< Codebook_obj > Codebook_obj::__new()
{  hx::ObjectPtr< Codebook_obj > _result_ = new Codebook_obj();
	_result_->__construct();
	return _result_;}

Dynamic Codebook_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Codebook_obj > _result_ = new Codebook_obj();
	_result_->__construct();
	return _result_;}

Void Codebook_obj::addEntry( int huffCode,int symbol,int count,int len,Array< int > values){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","addEntry",0x9e9ab559,"kha.audio2.ogg.vorbis.data.Codebook.addEntry","kha/audio2/ogg/vorbis/data/Codebook.hx",188,0xa03d0d77)
		HX_STACK_THIS(this)
		HX_STACK_ARG(huffCode,"huffCode")
		HX_STACK_ARG(symbol,"symbol")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(len,"len")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(189)
		bool tmp = this->sparse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		if ((tmp1)){
			HX_STACK_LINE(190)
			Array< int > tmp2 = this->codewords;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(190)
			int tmp3 = symbol;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			int tmp4 = huffCode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			int tmp5 = tmp2->__unsafe_set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			tmp5;
		}
		else{
			HX_STACK_LINE(192)
			Array< int > tmp2 = this->codewords;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			int tmp3 = count;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			int tmp4 = huffCode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(192)
			int tmp5 = tmp2->__unsafe_set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(192)
			tmp5;
			HX_STACK_LINE(193)
			Array< int > tmp6 = this->codewordLengths;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			int tmp7 = count;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(193)
			int tmp8 = len;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(193)
			int tmp9 = tmp6->__unsafe_set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(193)
			tmp9;
			HX_STACK_LINE(194)
			int tmp10 = count;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(194)
			int tmp11 = symbol;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(194)
			int tmp12 = values->__unsafe_set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(194)
			tmp12;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Codebook_obj,addEntry,(void))

bool Codebook_obj::includeInSort( int len){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","includeInSort",0x5c2fda63,"kha.audio2.ogg.vorbis.data.Codebook.includeInSort","kha/audio2/ogg/vorbis/data/Codebook.hx",199,0xa03d0d77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(200)
	bool tmp = this->sparse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	if ((tmp)){
		HX_STACK_LINE(202)
		tmp1 = true;
	}
	else{
		HX_STACK_LINE(203)
		bool tmp2 = (len == (int)255);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		if ((tmp2)){
			HX_STACK_LINE(204)
			tmp1 = false;
		}
		else{
			HX_STACK_LINE(205)
			bool tmp3 = (len > (int)10);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(205)
			if ((tmp3)){
				HX_STACK_LINE(206)
				tmp1 = true;
			}
			else{
				HX_STACK_LINE(208)
				tmp1 = false;
			}
		}
	}
	HX_STACK_LINE(200)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Codebook_obj,includeInSort,return )

bool Codebook_obj::computeCodewords( Array< int > len,int n,Array< int > values){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","computeCodewords",0x179c0b6d,"kha.audio2.ogg.vorbis.data.Codebook.computeCodewords","kha/audio2/ogg/vorbis/data/Codebook.hx",214,0xa03d0d77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(values,"values")
	HX_STACK_LINE(215)
	Array< int > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(215)
		Array< int > tmp1 = Array_obj< int >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		this1 = tmp1;
		HX_STACK_LINE(215)
		this1->__SetSizeExact((int)32);
		HX_STACK_LINE(215)
		tmp = this1;
	}
	HX_STACK_LINE(215)
	Array< int > available = tmp;		HX_STACK_VAR(available,"available");
	HX_STACK_LINE(216)
	{
		HX_STACK_LINE(216)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		while((true)){
			HX_STACK_LINE(216)
			bool tmp1 = (_g < (int)32);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(216)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			if ((tmp2)){
				HX_STACK_LINE(216)
				break;
			}
			HX_STACK_LINE(216)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(216)
			int x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(216)
			int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(216)
			int tmp5 = available->__unsafe_set(tmp4,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(216)
			tmp5;
		}
	}
	HX_STACK_LINE(219)
	int k = (int)0;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(220)
	while((true)){
		HX_STACK_LINE(220)
		bool tmp1 = (k < n);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		if ((tmp2)){
			HX_STACK_LINE(220)
			break;
		}
		HX_STACK_LINE(221)
		int tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		int tmp4 = len->__unsafe_get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		bool tmp6 = (tmp5 < (int)255);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		if ((tmp6)){
			HX_STACK_LINE(222)
			break;
		}
		HX_STACK_LINE(224)
		(k)++;
	}
	HX_STACK_LINE(227)
	bool tmp1 = (k == n);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	if ((tmp1)){
		HX_STACK_LINE(229)
		return true;
	}
	HX_STACK_LINE(232)
	int m = (int)0;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(235)
		int tmp2 = (m)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		int count = tmp2;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(235)
		int tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		int tmp4 = len->__unsafe_get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		int len1 = tmp4;		HX_STACK_VAR(len1,"len1");
		HX_STACK_LINE(235)
		bool tmp5 = this->sparse;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		if ((tmp6)){
			HX_STACK_LINE(235)
			Array< int > tmp7 = this->codewords;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(235)
			int tmp8 = k;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(235)
			int tmp9 = tmp7->__unsafe_set(tmp8,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(235)
			tmp9;
		}
		else{
			HX_STACK_LINE(235)
			Array< int > tmp7 = this->codewords;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(235)
			int tmp8 = count;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(235)
			int tmp9 = tmp7->__unsafe_set(tmp8,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(235)
			tmp9;
			HX_STACK_LINE(235)
			Array< int > tmp10 = this->codewordLengths;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(235)
			int tmp11 = count;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(235)
			int tmp12 = len1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(235)
			int tmp13 = tmp10->__unsafe_set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(235)
			tmp13;
			HX_STACK_LINE(235)
			int tmp14 = count;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(235)
			int tmp15 = k;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(235)
			int tmp16 = values->__unsafe_set(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(235)
			tmp16;
		}
	}
	HX_STACK_LINE(238)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(240)
	while((true)){
		HX_STACK_LINE(240)
		int tmp2 = ++(i);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		int tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		int tmp4 = len->__unsafe_get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		bool tmp6 = (tmp2 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(240)
		if ((tmp7)){
			HX_STACK_LINE(240)
			break;
		}
		HX_STACK_LINE(241)
		int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(241)
		int tmp9 = ((int)32 - i);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(241)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(241)
		int tmp11 = (int((int)1) << int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(241)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(241)
		int tmp13 = available->__unsafe_set(tmp8,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(241)
		tmp13;
	}
	HX_STACK_LINE(248)
	i = k;
	HX_STACK_LINE(249)
	while((true)){
		HX_STACK_LINE(249)
		int tmp2 = ++(i);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		int tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		if ((tmp5)){
			HX_STACK_LINE(249)
			break;
		}
		HX_STACK_LINE(250)
		int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(250)
		int tmp7 = len->__unsafe_get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(250)
		int z = tmp7;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(251)
		bool tmp8 = (z == (int)255);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(251)
		if ((tmp8)){
			HX_STACK_LINE(251)
			continue;
		}
		HX_STACK_LINE(259)
		while((true)){
			HX_STACK_LINE(259)
			bool tmp9 = (z > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(259)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(259)
			if ((tmp9)){
				HX_STACK_LINE(259)
				int tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(259)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(259)
				int tmp13 = available->__unsafe_get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(259)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(259)
				int a = tmp14;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(259)
				tmp10 = (a == (int)0);
			}
			else{
				HX_STACK_LINE(259)
				tmp10 = false;
			}
			HX_STACK_LINE(259)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(259)
			if ((tmp11)){
				HX_STACK_LINE(259)
				break;
			}
			HX_STACK_LINE(259)
			--(z);
		}
		HX_STACK_LINE(260)
		bool tmp9 = (z == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(260)
		if ((tmp9)){
			HX_STACK_LINE(261)
			return false;
		}
		HX_STACK_LINE(264)
		int tmp10 = z;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(264)
		int tmp11 = available->__unsafe_get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(264)
		int res = tmp11;		HX_STACK_VAR(res,"res");
		HX_STACK_LINE(265)
		int tmp12 = z;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(265)
		int tmp13 = available->__unsafe_set(tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(265)
		tmp13;
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				int n1 = res;		HX_STACK_VAR(n1,"n1");
				HX_STACK_LINE(266)
				int tmp15 = (int(n1) & int((int)-1431655766));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(266)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(266)
				int tmp17 = hx::UShr(tmp16,(int)1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(266)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(266)
				int tmp19 = (int(n1) & int((int)1431655765));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(266)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(266)
				int tmp21 = (int(tmp20) << int((int)1));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(266)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(266)
				int tmp23 = (int(tmp18) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(266)
				n1 = tmp23;
				HX_STACK_LINE(266)
				int tmp24 = (int(n1) & int((int)-858993460));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(266)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(266)
				int tmp26 = hx::UShr(tmp25,(int)2);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(266)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(266)
				int tmp28 = (int(n1) & int((int)858993459));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(266)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(266)
				int tmp30 = (int(tmp29) << int((int)2));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(266)
				int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(266)
				int tmp32 = (int(tmp27) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(266)
				n1 = tmp32;
				HX_STACK_LINE(266)
				int tmp33 = (int(n1) & int((int)-252645136));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(266)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(266)
				int tmp35 = hx::UShr(tmp34,(int)4);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(266)
				int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(266)
				int tmp37 = (int(n1) & int((int)252645135));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(266)
				int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(266)
				int tmp39 = (int(tmp38) << int((int)4));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(266)
				int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(266)
				int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(266)
				n1 = tmp41;
				HX_STACK_LINE(266)
				int tmp42 = (int(n1) & int((int)-16711936));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(266)
				int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(266)
				int tmp44 = hx::UShr(tmp43,(int)8);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(266)
				int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(266)
				int tmp46 = (int(n1) & int((int)16711935));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(266)
				int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(266)
				int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(266)
				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(266)
				int tmp50 = (int(tmp45) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(266)
				n1 = tmp50;
				HX_STACK_LINE(266)
				int tmp51 = hx::UShr(n1,(int)16);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(266)
				int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(266)
				int tmp53 = (int(n1) << int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(266)
				int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(266)
				int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(266)
				tmp14 = tmp55;
			}
			HX_STACK_LINE(266)
			int huffCode = tmp14;		HX_STACK_VAR(huffCode,"huffCode");
			HX_STACK_LINE(266)
			int tmp15 = (m)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(266)
			int count = tmp15;		HX_STACK_VAR(count,"count");
			HX_STACK_LINE(266)
			int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(266)
			int tmp17 = len->__unsafe_get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(266)
			int len1 = tmp17;		HX_STACK_VAR(len1,"len1");
			HX_STACK_LINE(266)
			bool tmp18 = this->sparse;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(266)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(266)
			if ((tmp19)){
				HX_STACK_LINE(266)
				Array< int > tmp20 = this->codewords;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(266)
				int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(266)
				int tmp22 = huffCode;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(266)
				int tmp23 = tmp20->__unsafe_set(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(266)
				tmp23;
			}
			else{
				HX_STACK_LINE(266)
				Array< int > tmp20 = this->codewords;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(266)
				int tmp21 = count;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(266)
				int tmp22 = huffCode;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(266)
				int tmp23 = tmp20->__unsafe_set(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(266)
				tmp23;
				HX_STACK_LINE(266)
				Array< int > tmp24 = this->codewordLengths;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(266)
				int tmp25 = count;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(266)
				int tmp26 = len1;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(266)
				int tmp27 = tmp24->__unsafe_set(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(266)
				tmp27;
				HX_STACK_LINE(266)
				int tmp28 = count;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(266)
				int tmp29 = i;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(266)
				int tmp30 = values->__unsafe_set(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(266)
				tmp30;
			}
		}
		HX_STACK_LINE(269)
		int tmp14 = z;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(269)
		int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(269)
		int tmp16 = len->__unsafe_get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(269)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(269)
		bool tmp18 = (tmp14 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(269)
		if ((tmp18)){
			HX_STACK_LINE(270)
			int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(270)
			int tmp20 = len->__unsafe_get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(270)
			int y = tmp20;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(271)
			while((true)){
				HX_STACK_LINE(271)
				bool tmp21 = (y > z);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(271)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(271)
				if ((tmp22)){
					HX_STACK_LINE(271)
					break;
				}
				HX_STACK_LINE(272)
				{
					HX_STACK_LINE(272)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(272)
					{
						HX_STACK_LINE(272)
						int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(272)
						int tmp25 = available->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(272)
						int a = tmp25;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(272)
						tmp23 = (a == (int)0);
					}
					HX_STACK_LINE(272)
					bool b = tmp23;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(272)
					Dynamic();
				}
				HX_STACK_LINE(273)
				int tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(273)
				int tmp24 = res;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(273)
				int tmp25 = ((int)32 - y);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(273)
				int tmp26 = (int((int)1) << int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(273)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(273)
				int tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(273)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(273)
				int tmp30 = available->__unsafe_set(tmp23,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(273)
				tmp30;
				HX_STACK_LINE(274)
				(y)--;
			}
		}
	}
	HX_STACK_LINE(279)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(Codebook_obj,computeCodewords,return )

Void Codebook_obj::computeSortedHuffman( Array< int > lengths,Array< int > values){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","computeSortedHuffman",0x642a2241,"kha.audio2.ogg.vorbis.data.Codebook.computeSortedHuffman","kha/audio2/ogg/vorbis/data/Codebook.hx",284,0xa03d0d77)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lengths,"lengths")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(289)
		bool tmp = this->sparse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		if ((tmp1)){
			HX_STACK_LINE(290)
			int k = (int)0;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(291)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(291)
				int tmp2 = this->entries;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(291)
				int _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(291)
				while((true)){
					HX_STACK_LINE(291)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(291)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(291)
					if ((tmp4)){
						HX_STACK_LINE(291)
						break;
					}
					HX_STACK_LINE(291)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(291)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(292)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(292)
					{
						HX_STACK_LINE(292)
						int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(292)
						int tmp8 = lengths->__unsafe_get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(292)
						int len = tmp8;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(292)
						bool tmp9 = this->sparse;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(292)
						if ((tmp9)){
							HX_STACK_LINE(292)
							tmp6 = true;
						}
						else{
							HX_STACK_LINE(292)
							bool tmp10 = (len == (int)255);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(292)
							if ((tmp10)){
								HX_STACK_LINE(292)
								tmp6 = false;
							}
							else{
								HX_STACK_LINE(292)
								bool tmp11 = (len > (int)10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(292)
								if ((tmp11)){
									HX_STACK_LINE(292)
									tmp6 = true;
								}
								else{
									HX_STACK_LINE(292)
									tmp6 = false;
								}
							}
						}
					}
					HX_STACK_LINE(292)
					if ((tmp6)){
						HX_STACK_LINE(293)
						Array< int > tmp7 = this->sortedCodewords;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(293)
						int tmp8 = (k)++;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(293)
						int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(293)
						{
							HX_STACK_LINE(293)
							Array< int > tmp10 = this->codewords;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(293)
							int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(293)
							int tmp12 = tmp10->__unsafe_get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(293)
							int n = tmp12;		HX_STACK_VAR(n,"n");
							HX_STACK_LINE(293)
							int tmp13 = (int(n) & int((int)-1431655766));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(293)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(293)
							int tmp15 = hx::UShr(tmp14,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(293)
							int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(293)
							int tmp17 = (int(n) & int((int)1431655765));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(293)
							int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(293)
							int tmp19 = (int(tmp18) << int((int)1));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(293)
							int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(293)
							int tmp21 = (int(tmp16) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(293)
							n = tmp21;
							HX_STACK_LINE(293)
							int tmp22 = (int(n) & int((int)-858993460));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(293)
							int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(293)
							int tmp24 = hx::UShr(tmp23,(int)2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(293)
							int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(293)
							int tmp26 = (int(n) & int((int)858993459));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(293)
							int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(293)
							int tmp28 = (int(tmp27) << int((int)2));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(293)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(293)
							int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(293)
							n = tmp30;
							HX_STACK_LINE(293)
							int tmp31 = (int(n) & int((int)-252645136));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(293)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(293)
							int tmp33 = hx::UShr(tmp32,(int)4);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(293)
							int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(293)
							int tmp35 = (int(n) & int((int)252645135));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(293)
							int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(293)
							int tmp37 = (int(tmp36) << int((int)4));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(293)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(293)
							int tmp39 = (int(tmp34) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(293)
							n = tmp39;
							HX_STACK_LINE(293)
							int tmp40 = (int(n) & int((int)-16711936));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(293)
							int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(293)
							int tmp42 = hx::UShr(tmp41,(int)8);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(293)
							int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(293)
							int tmp44 = (int(n) & int((int)16711935));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(293)
							int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(293)
							int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(293)
							int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(293)
							int tmp48 = (int(tmp43) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(293)
							n = tmp48;
							HX_STACK_LINE(293)
							int tmp49 = hx::UShr(n,(int)16);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(293)
							int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(293)
							int tmp51 = (int(n) << int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(293)
							int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(293)
							int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(293)
							tmp9 = tmp53;
						}
						HX_STACK_LINE(293)
						tmp7[tmp8] = tmp9;
					}
				}
			}
			HX_STACK_LINE(296)
			Dynamic();
		}
		else{
			HX_STACK_LINE(298)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(298)
			int tmp2 = this->sortedEntries;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(298)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(298)
			while((true)){
				HX_STACK_LINE(298)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(298)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(298)
				if ((tmp4)){
					HX_STACK_LINE(298)
					break;
				}
				HX_STACK_LINE(298)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(298)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(299)
				Array< int > tmp6 = this->sortedCodewords;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(299)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(299)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					Array< int > tmp9 = this->codewords;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(299)
					int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(299)
					int tmp11 = tmp9->__unsafe_get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(299)
					int n = tmp11;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(299)
					int tmp12 = (int(n) & int((int)-1431655766));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(299)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(299)
					int tmp14 = hx::UShr(tmp13,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(299)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(299)
					int tmp16 = (int(n) & int((int)1431655765));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(299)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(299)
					int tmp18 = (int(tmp17) << int((int)1));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(299)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(299)
					int tmp20 = (int(tmp15) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(299)
					n = tmp20;
					HX_STACK_LINE(299)
					int tmp21 = (int(n) & int((int)-858993460));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(299)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(299)
					int tmp23 = hx::UShr(tmp22,(int)2);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(299)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(299)
					int tmp25 = (int(n) & int((int)858993459));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(299)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(299)
					int tmp27 = (int(tmp26) << int((int)2));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(299)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(299)
					int tmp29 = (int(tmp24) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(299)
					n = tmp29;
					HX_STACK_LINE(299)
					int tmp30 = (int(n) & int((int)-252645136));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(299)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(299)
					int tmp32 = hx::UShr(tmp31,(int)4);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(299)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(299)
					int tmp34 = (int(n) & int((int)252645135));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(299)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(299)
					int tmp36 = (int(tmp35) << int((int)4));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(299)
					int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(299)
					int tmp38 = (int(tmp33) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(299)
					n = tmp38;
					HX_STACK_LINE(299)
					int tmp39 = (int(n) & int((int)-16711936));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(299)
					int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(299)
					int tmp41 = hx::UShr(tmp40,(int)8);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(299)
					int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(299)
					int tmp43 = (int(n) & int((int)16711935));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(299)
					int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(299)
					int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(299)
					int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(299)
					int tmp47 = (int(tmp42) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(299)
					n = tmp47;
					HX_STACK_LINE(299)
					int tmp48 = hx::UShr(n,(int)16);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(299)
					int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(299)
					int tmp50 = (int(n) << int((int)16));		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(299)
					int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(299)
					int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(299)
					tmp8 = tmp52;
				}
				HX_STACK_LINE(299)
				tmp6[tmp7] = tmp8;
			}
		}
		HX_STACK_LINE(303)
		Array< int > tmp2 = this->sortedCodewords;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		int tmp3 = this->sortedEntries;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		tmp2[tmp3] = (int)-1;
		HX_STACK_LINE(304)
		Array< int > tmp4 = this->sortedCodewords;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(304)
		Dynamic tmp5 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::uintAsc_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(304)
		tmp4->sort(tmp5);
		HX_STACK_LINE(306)
		bool tmp6 = this->sparse;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(306)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(306)
		if ((tmp6)){
			HX_STACK_LINE(306)
			tmp7 = this->sortedEntries;
		}
		else{
			HX_STACK_LINE(306)
			tmp7 = this->entries;
		}
		HX_STACK_LINE(306)
		int len = tmp7;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(312)
			while((true)){
				HX_STACK_LINE(312)
				bool tmp8 = (_g < len);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(312)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(312)
				if ((tmp9)){
					HX_STACK_LINE(312)
					break;
				}
				HX_STACK_LINE(312)
				int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(312)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(313)
				bool tmp11 = this->sparse;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(313)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(313)
				if ((tmp11)){
					HX_STACK_LINE(313)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(313)
					int tmp14 = values->__unsafe_get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(313)
					int index = tmp14;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(313)
					int tmp15 = index;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(313)
					int tmp16 = lengths->__unsafe_get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(313)
					tmp12 = tmp16;
				}
				else{
					HX_STACK_LINE(313)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(313)
					int tmp14 = lengths->__unsafe_get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(313)
					tmp12 = tmp14;
				}
				HX_STACK_LINE(313)
				int huffLen = tmp12;		HX_STACK_VAR(huffLen,"huffLen");
				HX_STACK_LINE(314)
				bool tmp13 = this->sparse;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(314)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(314)
				if ((tmp13)){
					HX_STACK_LINE(314)
					tmp14 = true;
				}
				else{
					HX_STACK_LINE(314)
					bool tmp15 = (huffLen == (int)255);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(314)
					if ((tmp15)){
						HX_STACK_LINE(314)
						tmp14 = false;
					}
					else{
						HX_STACK_LINE(314)
						bool tmp16 = (huffLen > (int)10);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(314)
						if ((tmp16)){
							HX_STACK_LINE(314)
							tmp14 = true;
						}
						else{
							HX_STACK_LINE(314)
							tmp14 = false;
						}
					}
				}
				HX_STACK_LINE(314)
				if ((tmp14)){
					HX_STACK_LINE(315)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						Array< int > tmp16 = this->codewords;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(315)
						int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(315)
						int tmp18 = tmp16->__unsafe_get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(315)
						int n = tmp18;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(315)
						int tmp19 = (int(n) & int((int)-1431655766));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(315)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(315)
						int tmp21 = hx::UShr(tmp20,(int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(315)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(315)
						int tmp23 = (int(n) & int((int)1431655765));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(315)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(315)
						int tmp25 = (int(tmp24) << int((int)1));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(315)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(315)
						int tmp27 = (int(tmp22) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(315)
						n = tmp27;
						HX_STACK_LINE(315)
						int tmp28 = (int(n) & int((int)-858993460));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(315)
						int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(315)
						int tmp30 = hx::UShr(tmp29,(int)2);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(315)
						int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(315)
						int tmp32 = (int(n) & int((int)858993459));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(315)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(315)
						int tmp34 = (int(tmp33) << int((int)2));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(315)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(315)
						int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(315)
						n = tmp36;
						HX_STACK_LINE(315)
						int tmp37 = (int(n) & int((int)-252645136));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(315)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(315)
						int tmp39 = hx::UShr(tmp38,(int)4);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(315)
						int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(315)
						int tmp41 = (int(n) & int((int)252645135));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(315)
						int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(315)
						int tmp43 = (int(tmp42) << int((int)4));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(315)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(315)
						int tmp45 = (int(tmp40) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(315)
						n = tmp45;
						HX_STACK_LINE(315)
						int tmp46 = (int(n) & int((int)-16711936));		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(315)
						int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(315)
						int tmp48 = hx::UShr(tmp47,(int)8);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(315)
						int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(315)
						int tmp50 = (int(n) & int((int)16711935));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(315)
						int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(315)
						int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(315)
						int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(315)
						int tmp54 = (int(tmp49) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(315)
						n = tmp54;
						HX_STACK_LINE(315)
						int tmp55 = hx::UShr(n,(int)16);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(315)
						int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(315)
						int tmp57 = (int(n) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(315)
						int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(315)
						int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(315)
						tmp15 = tmp59;
					}
					HX_STACK_LINE(315)
					int code = tmp15;		HX_STACK_VAR(code,"code");
					HX_STACK_LINE(316)
					int x = (int)0;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(317)
					int tmp16 = this->sortedEntries;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(317)
					int n = tmp16;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(318)
					while((true)){
						HX_STACK_LINE(318)
						bool tmp17 = (n > (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(318)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(318)
						if ((tmp18)){
							HX_STACK_LINE(318)
							break;
						}
						HX_STACK_LINE(320)
						int tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(320)
						int tmp20 = (int(n) >> int((int)1));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(320)
						int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(320)
						int m = tmp21;		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(321)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(321)
						{
							HX_STACK_LINE(321)
							Array< int > tmp23 = this->sortedCodewords;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(321)
							int tmp24 = m;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(321)
							int tmp25 = tmp23->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(321)
							int a = tmp25;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(321)
							{
								HX_STACK_LINE(321)
								bool tmp26 = (code < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(321)
								bool aNeg = tmp26;		HX_STACK_VAR(aNeg,"aNeg");
								HX_STACK_LINE(321)
								bool tmp27 = (a < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(321)
								bool bNeg = tmp27;		HX_STACK_VAR(bNeg,"bNeg");
								HX_STACK_LINE(321)
								bool tmp28 = (aNeg != bNeg);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(321)
								if ((tmp28)){
									HX_STACK_LINE(321)
									tmp22 = aNeg;
								}
								else{
									HX_STACK_LINE(321)
									tmp22 = (code >= a);
								}
							}
						}
						HX_STACK_LINE(321)
						if ((tmp22)){
							HX_STACK_LINE(322)
							x = m;
							HX_STACK_LINE(323)
							int tmp23 = (int(n) >> int((int)1));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(323)
							hx::SubEq(n,tmp23);
						}
						else{
							HX_STACK_LINE(325)
							hx::ShrEq(n,(int)1);
						}
					}
					HX_STACK_LINE(330)
					bool tmp17 = this->sparse;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(330)
					if ((tmp17)){
						HX_STACK_LINE(331)
						{
							HX_STACK_LINE(331)
							int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(331)
							int tmp19 = values->__unsafe_get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(331)
							int val = tmp19;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(331)
							Array< int > tmp20 = this->sortedValues;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(331)
							int tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(331)
							int tmp22 = val;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(331)
							int tmp23 = tmp20->__unsafe_set(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(331)
							tmp23;
						}
						HX_STACK_LINE(332)
						Array< int > tmp18 = this->codewordLengths;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(332)
						int tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(332)
						int tmp20 = huffLen;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(332)
						int tmp21 = tmp18->__unsafe_set(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(332)
						tmp21;
					}
					else{
						HX_STACK_LINE(334)
						Array< int > tmp18 = this->sortedValues;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(334)
						int tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(334)
						int tmp20 = i;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(334)
						int tmp21 = tmp18->__unsafe_set(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(334)
						tmp21;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Codebook_obj,computeSortedHuffman,(void))

Void Codebook_obj::computeAcceleratedHuffman( ){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","computeAcceleratedHuffman",0x486d1295,"kha.audio2.ogg.vorbis.data.Codebook.computeAcceleratedHuffman","kha/audio2/ogg/vorbis/data/Codebook.hx",341,0xa03d0d77)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		Array< int > tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(342)
			Array< int > tmp1 = Array_obj< int >::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(342)
			this1 = tmp1;
			HX_STACK_LINE(342)
			this1->__SetSizeExact((int)1024);
			HX_STACK_LINE(342)
			tmp = this1;
		}
		HX_STACK_LINE(342)
		this->fastHuffman = tmp;
		HX_STACK_LINE(343)
		Array< int > tmp1 = this->fastHuffman;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		int tmp2 = tmp1->__unsafe_set((int)0,(int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		tmp2;
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(344)
			int _g = (int)1024;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(344)
			while((true)){
				HX_STACK_LINE(344)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(344)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(344)
				if ((tmp4)){
					HX_STACK_LINE(344)
					break;
				}
				HX_STACK_LINE(344)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(344)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(345)
				Array< int > tmp6 = this->fastHuffman;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(345)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(345)
				int tmp8 = tmp6->__unsafe_set(tmp7,(int)-1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(345)
				tmp8;
			}
		}
		HX_STACK_LINE(348)
		bool tmp3 = this->sparse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(348)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(348)
		if ((tmp3)){
			HX_STACK_LINE(348)
			tmp4 = this->sortedEntries;
		}
		else{
			HX_STACK_LINE(348)
			tmp4 = this->entries;
		}
		HX_STACK_LINE(348)
		int len = tmp4;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(353)
			while((true)){
				HX_STACK_LINE(353)
				bool tmp5 = (_g < len);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(353)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(353)
				if ((tmp6)){
					HX_STACK_LINE(353)
					break;
				}
				HX_STACK_LINE(353)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(353)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(354)
				Array< int > tmp8 = this->codewordLengths;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(354)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(354)
				int tmp10 = tmp8->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(354)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(354)
				bool tmp12 = (tmp11 <= (int)10);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(354)
				if ((tmp12)){
					HX_STACK_LINE(355)
					bool tmp13 = this->sparse;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(355)
					int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(355)
					if ((tmp13)){
						HX_STACK_LINE(355)
						Array< int > tmp15 = this->sortedCodewords;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(355)
						int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(355)
						int tmp17 = tmp15->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(355)
						int n = tmp17;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(355)
						int tmp18 = (int(n) & int((int)-1431655766));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(355)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(355)
						int tmp20 = hx::UShr(tmp19,(int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(355)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(355)
						int tmp22 = (int(n) & int((int)1431655765));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(355)
						int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(355)
						int tmp24 = (int(tmp23) << int((int)1));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(355)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(355)
						int tmp26 = (int(tmp21) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(355)
						n = tmp26;
						HX_STACK_LINE(355)
						int tmp27 = (int(n) & int((int)-858993460));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(355)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(355)
						int tmp29 = hx::UShr(tmp28,(int)2);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(355)
						int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(355)
						int tmp31 = (int(n) & int((int)858993459));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(355)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(355)
						int tmp33 = (int(tmp32) << int((int)2));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(355)
						int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(355)
						int tmp35 = (int(tmp30) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(355)
						n = tmp35;
						HX_STACK_LINE(355)
						int tmp36 = (int(n) & int((int)-252645136));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(355)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(355)
						int tmp38 = hx::UShr(tmp37,(int)4);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(355)
						int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(355)
						int tmp40 = (int(n) & int((int)252645135));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(355)
						int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(355)
						int tmp42 = (int(tmp41) << int((int)4));		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(355)
						int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(355)
						int tmp44 = (int(tmp39) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(355)
						n = tmp44;
						HX_STACK_LINE(355)
						int tmp45 = (int(n) & int((int)-16711936));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(355)
						int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(355)
						int tmp47 = hx::UShr(tmp46,(int)8);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(355)
						int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(355)
						int tmp49 = (int(n) & int((int)16711935));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(355)
						int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(355)
						int tmp51 = (int(tmp50) << int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(355)
						int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(355)
						int tmp53 = (int(tmp48) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(355)
						n = tmp53;
						HX_STACK_LINE(355)
						int tmp54 = hx::UShr(n,(int)16);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(355)
						int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(355)
						int tmp56 = (int(n) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(355)
						int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(355)
						int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(355)
						tmp14 = tmp58;
					}
					else{
						HX_STACK_LINE(355)
						Array< int > tmp15 = this->codewords;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(355)
						int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(355)
						int tmp17 = tmp15->__unsafe_get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(355)
						tmp14 = tmp17;
					}
					HX_STACK_LINE(355)
					int z = tmp14;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(357)
					while((true)){
						HX_STACK_LINE(357)
						bool tmp15 = (z < (int)1024);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(357)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(357)
						if ((tmp16)){
							HX_STACK_LINE(357)
							break;
						}
						HX_STACK_LINE(358)
						Array< int > tmp17 = this->fastHuffman;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(358)
						int tmp18 = z;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(358)
						int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(358)
						int tmp20 = tmp17->__unsafe_set(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(358)
						tmp20;
						HX_STACK_LINE(359)
						Array< int > tmp21 = this->codewordLengths;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(359)
						int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(359)
						int tmp23 = tmp21->__unsafe_get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(359)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(359)
						int tmp25 = (int((int)1) << int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(359)
						hx::AddEq(z,tmp25);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Codebook_obj,computeAcceleratedHuffman,(void))

bool Codebook_obj::codebookDecode( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< Float > output,int offset,int len){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","codebookDecode",0xd5fd826c,"kha.audio2.ogg.vorbis.data.Codebook.codebookDecode","kha/audio2/ogg/vorbis/data/Codebook.hx",367,0xa03d0d77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(368)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	{
		HX_STACK_LINE(368)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(368)
			bool tmp2 = (decodeState->validBits < (int)10);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(368)
			if ((tmp2)){
				HX_STACK_LINE(368)
				decodeState->prepHuffman();
			}
			HX_STACK_LINE(368)
			Array< int > tmp3 = this->fastHuffman;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(368)
			int tmp4 = (int(decodeState->acc) & int((int)1023));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(368)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(368)
			int tmp6 = tmp3->__unsafe_get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(368)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(368)
			bool tmp7 = (i >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(368)
			if ((tmp7)){
				HX_STACK_LINE(368)
				Array< int > tmp8 = this->codewordLengths;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(368)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(368)
				int tmp10 = tmp8->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(368)
				int l = tmp10;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(368)
				int tmp11 = hx::UShr(decodeState->acc,l);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(368)
				decodeState->acc = tmp11;
				HX_STACK_LINE(368)
				hx::SubEq(decodeState->validBits,l);
				HX_STACK_LINE(368)
				bool tmp12 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(368)
				if ((tmp12)){
					HX_STACK_LINE(368)
					decodeState->validBits = (int)0;
					HX_STACK_LINE(368)
					tmp1 = (int)-1;
				}
				else{
					HX_STACK_LINE(368)
					tmp1 = i;
				}
			}
			else{
				HX_STACK_LINE(368)
				tmp1 = decodeState->decodeScalarRaw(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(368)
		int val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(368)
		bool tmp2 = this->sparse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(368)
		if ((tmp2)){
			HX_STACK_LINE(368)
			Array< int > tmp3 = this->sortedValues;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(368)
			int tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(368)
			int tmp5 = tmp3->__unsafe_get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(368)
			val = tmp5;
		}
		HX_STACK_LINE(368)
		tmp = val;
	}
	HX_STACK_LINE(368)
	int z = tmp;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(369)
	int tmp1 = this->lookupValues;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(369)
	int lookupValues = tmp1;		HX_STACK_VAR(lookupValues,"lookupValues");
	HX_STACK_LINE(370)
	bool tmp2 = this->sequenceP;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	bool sequenceP = tmp2;		HX_STACK_VAR(sequenceP,"sequenceP");
	HX_STACK_LINE(371)
	Array< Float > tmp3 = this->multiplicands;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(371)
	Array< Float > multiplicands = tmp3;		HX_STACK_VAR(multiplicands,"multiplicands");
	HX_STACK_LINE(372)
	Float tmp4 = this->minimumValue;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(372)
	Float minimumValue = tmp4;		HX_STACK_VAR(minimumValue,"minimumValue");
	HX_STACK_LINE(374)
	bool tmp5 = (z < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(374)
	if ((tmp5)){
		HX_STACK_LINE(375)
		return false;
	}
	HX_STACK_LINE(377)
	int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(377)
	int tmp7 = this->dimensions;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(377)
	bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(377)
	if ((tmp8)){
		HX_STACK_LINE(378)
		int tmp9 = this->dimensions;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(378)
		len = tmp9;
	}
	HX_STACK_LINE(382)
	int tmp9 = this->lookupType;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(382)
	bool tmp10 = (tmp9 == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(382)
	if ((tmp10)){
		HX_STACK_LINE(383)
		int div = (int)1;		HX_STACK_VAR(div,"div");
		HX_STACK_LINE(384)
		Float last = ((Float)0.0);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(385)
			while((true)){
				HX_STACK_LINE(385)
				bool tmp11 = (_g < len);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(385)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(385)
				if ((tmp12)){
					HX_STACK_LINE(385)
					break;
				}
				HX_STACK_LINE(385)
				int tmp13 = (_g)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(385)
				int i = tmp13;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(386)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(386)
				{
					HX_STACK_LINE(386)
					Float tmp15 = (Float(z) / Float(div));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(386)
					int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(386)
					int a = tmp16;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(386)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(386)
					{
						HX_STACK_LINE(386)
						int _int = a;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(386)
						bool tmp18 = (_int < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(386)
						if ((tmp18)){
							HX_STACK_LINE(386)
							tmp17 = (((Float)4294967296.0) + _int);
						}
						else{
							HX_STACK_LINE(386)
							tmp17 = (_int + ((Float)0.0));
						}
					}
					HX_STACK_LINE(386)
					Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(386)
					{
						HX_STACK_LINE(386)
						int _int = lookupValues;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(386)
						bool tmp19 = (_int < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(386)
						if ((tmp19)){
							HX_STACK_LINE(386)
							tmp18 = (((Float)4294967296.0) + _int);
						}
						else{
							HX_STACK_LINE(386)
							tmp18 = (_int + ((Float)0.0));
						}
					}
					HX_STACK_LINE(386)
					Float tmp19 = hx::Mod(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(386)
					tmp14 = ::Std_obj::_int(tmp19);
				}
				HX_STACK_LINE(386)
				int off = tmp14;		HX_STACK_VAR(off,"off");
				HX_STACK_LINE(387)
				int tmp15 = off;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(387)
				Float tmp16 = multiplicands->__unsafe_get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(387)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(387)
				Float tmp18 = last;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(387)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(387)
				Float val = tmp19;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					int tmp20 = (offset + i);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(388)
					int _g1 = tmp20;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(388)
					{
						HX_STACK_LINE(388)
						int tmp21 = _g1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(388)
						Float tmp22 = output->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(388)
						Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(388)
						Float tmp24 = val;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(388)
						Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(388)
						Float val1 = tmp25;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(388)
						int tmp26 = _g1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(388)
						Float tmp27 = val1;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(388)
						Float tmp28 = output->__unsafe_set(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(388)
						tmp28;
					}
				}
				HX_STACK_LINE(389)
				bool tmp20 = sequenceP;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(389)
				if ((tmp20)){
					HX_STACK_LINE(390)
					Float tmp21 = (val + minimumValue);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(390)
					last = tmp21;
				}
				HX_STACK_LINE(392)
				int tmp21 = (div * lookupValues);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(392)
				div = tmp21;
			}
		}
		HX_STACK_LINE(394)
		return true;
	}
	HX_STACK_LINE(397)
	int tmp11 = this->dimensions;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(397)
	hx::MultEq(z,tmp11);
	HX_STACK_LINE(398)
	bool tmp12 = sequenceP;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(398)
	if ((tmp12)){
		HX_STACK_LINE(399)
		Float last = ((Float)0.0);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(400)
		{
			HX_STACK_LINE(400)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(400)
			while((true)){
				HX_STACK_LINE(400)
				bool tmp13 = (_g < len);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(400)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(400)
				if ((tmp14)){
					HX_STACK_LINE(400)
					break;
				}
				HX_STACK_LINE(400)
				int tmp15 = (_g)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(400)
				int i = tmp15;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(401)
				int tmp16 = (z + i);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(401)
				Float tmp17 = multiplicands->__unsafe_get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(401)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(401)
				Float tmp19 = last;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(401)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(401)
				Float val = tmp20;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(402)
				{
					HX_STACK_LINE(402)
					int tmp21 = (offset + i);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(402)
					int _g1 = tmp21;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(402)
					{
						HX_STACK_LINE(402)
						int tmp22 = _g1;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(402)
						Float tmp23 = output->__unsafe_get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(402)
						Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(402)
						Float tmp25 = val;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(402)
						Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(402)
						Float val1 = tmp26;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(402)
						int tmp27 = _g1;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(402)
						Float tmp28 = val1;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(402)
						Float tmp29 = output->__unsafe_set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(402)
						tmp29;
					}
				}
				HX_STACK_LINE(403)
				Float tmp21 = (val + minimumValue);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(403)
				last = tmp21;
			}
		}
	}
	else{
		HX_STACK_LINE(406)
		Float last = ((Float)0.0);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(407)
			while((true)){
				HX_STACK_LINE(407)
				bool tmp13 = (_g < len);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(407)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(407)
				if ((tmp14)){
					HX_STACK_LINE(407)
					break;
				}
				HX_STACK_LINE(407)
				int tmp15 = (_g)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(407)
				int i = tmp15;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(408)
				{
					HX_STACK_LINE(408)
					int tmp16 = (offset + i);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(408)
					int _g1 = tmp16;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(408)
					{
						HX_STACK_LINE(408)
						int tmp17 = _g1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(408)
						Float tmp18 = output->__unsafe_get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(408)
						Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(408)
						int tmp20 = (z + i);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(408)
						Float tmp21 = multiplicands->__unsafe_get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(408)
						Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(408)
						Float tmp23 = last;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(408)
						Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(408)
						Float tmp25 = (tmp19 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(408)
						Float val = tmp25;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(408)
						int tmp26 = _g1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(408)
						Float tmp27 = val;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(408)
						Float tmp28 = output->__unsafe_set(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(408)
						tmp28;
					}
				}
			}
		}
	}
	HX_STACK_LINE(411)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC4(Codebook_obj,codebookDecode,return )

bool Codebook_obj::codebookDecodeStep( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< Float > output,int offset,int len,int step){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","codebookDecodeStep",0x96623bd8,"kha.audio2.ogg.vorbis.data.Codebook.codebookDecodeStep","kha/audio2/ogg/vorbis/data/Codebook.hx",415,0xa03d0d77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(step,"step")
	HX_STACK_LINE(416)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			bool tmp2 = (decodeState->validBits < (int)10);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(416)
			if ((tmp2)){
				HX_STACK_LINE(416)
				decodeState->prepHuffman();
			}
			HX_STACK_LINE(416)
			Array< int > tmp3 = this->fastHuffman;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(416)
			int tmp4 = (int(decodeState->acc) & int((int)1023));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			int tmp6 = tmp3->__unsafe_get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(416)
			bool tmp7 = (i >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			if ((tmp7)){
				HX_STACK_LINE(416)
				Array< int > tmp8 = this->codewordLengths;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(416)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(416)
				int tmp10 = tmp8->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(416)
				int l = tmp10;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(416)
				int tmp11 = hx::UShr(decodeState->acc,l);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(416)
				decodeState->acc = tmp11;
				HX_STACK_LINE(416)
				hx::SubEq(decodeState->validBits,l);
				HX_STACK_LINE(416)
				bool tmp12 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(416)
				if ((tmp12)){
					HX_STACK_LINE(416)
					decodeState->validBits = (int)0;
					HX_STACK_LINE(416)
					tmp1 = (int)-1;
				}
				else{
					HX_STACK_LINE(416)
					tmp1 = i;
				}
			}
			else{
				HX_STACK_LINE(416)
				tmp1 = decodeState->decodeScalarRaw(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(416)
		int val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(416)
		bool tmp2 = this->sparse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		if ((tmp2)){
			HX_STACK_LINE(416)
			Array< int > tmp3 = this->sortedValues;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(416)
			int tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			int tmp5 = tmp3->__unsafe_get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			val = tmp5;
		}
		HX_STACK_LINE(416)
		tmp = val;
	}
	HX_STACK_LINE(416)
	int z = tmp;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(417)
	Float last = ((Float)0.0);		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(418)
	bool tmp1 = (z < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	if ((tmp1)){
		HX_STACK_LINE(419)
		return false;
	}
	HX_STACK_LINE(421)
	int tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(421)
	int tmp3 = this->dimensions;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(421)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(421)
	if ((tmp4)){
		HX_STACK_LINE(422)
		int tmp5 = this->dimensions;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(422)
		len = tmp5;
	}
	HX_STACK_LINE(425)
	int tmp5 = this->lookupValues;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(425)
	int lookupValues = tmp5;		HX_STACK_VAR(lookupValues,"lookupValues");
	HX_STACK_LINE(426)
	bool tmp6 = this->sequenceP;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(426)
	bool sequenceP = tmp6;		HX_STACK_VAR(sequenceP,"sequenceP");
	HX_STACK_LINE(427)
	Array< Float > tmp7 = this->multiplicands;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(427)
	Array< Float > multiplicands = tmp7;		HX_STACK_VAR(multiplicands,"multiplicands");
	HX_STACK_LINE(431)
	int tmp8 = this->lookupType;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(431)
	bool tmp9 = (tmp8 == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(431)
	if ((tmp9)){
		HX_STACK_LINE(432)
		int div = (int)1;		HX_STACK_VAR(div,"div");
		HX_STACK_LINE(433)
		{
			HX_STACK_LINE(433)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(433)
			while((true)){
				HX_STACK_LINE(433)
				bool tmp10 = (_g < len);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(433)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(433)
				if ((tmp11)){
					HX_STACK_LINE(433)
					break;
				}
				HX_STACK_LINE(433)
				int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(433)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(434)
				int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					Float tmp14 = (Float(z) / Float(div));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(434)
					int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(434)
					int a = tmp15;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(434)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(434)
					{
						HX_STACK_LINE(434)
						int _int = a;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(434)
						bool tmp17 = (_int < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(434)
						if ((tmp17)){
							HX_STACK_LINE(434)
							tmp16 = (((Float)4294967296.0) + _int);
						}
						else{
							HX_STACK_LINE(434)
							tmp16 = (_int + ((Float)0.0));
						}
					}
					HX_STACK_LINE(434)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(434)
					{
						HX_STACK_LINE(434)
						int _int = lookupValues;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(434)
						bool tmp18 = (_int < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(434)
						if ((tmp18)){
							HX_STACK_LINE(434)
							tmp17 = (((Float)4294967296.0) + _int);
						}
						else{
							HX_STACK_LINE(434)
							tmp17 = (_int + ((Float)0.0));
						}
					}
					HX_STACK_LINE(434)
					Float tmp18 = hx::Mod(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(434)
					tmp13 = ::Std_obj::_int(tmp18);
				}
				HX_STACK_LINE(434)
				int off = tmp13;		HX_STACK_VAR(off,"off");
				HX_STACK_LINE(435)
				int tmp14 = off;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(435)
				Float tmp15 = multiplicands->__unsafe_get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(435)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(435)
				Float tmp17 = last;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(435)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(435)
				Float val = tmp18;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(436)
				{
					HX_STACK_LINE(436)
					int tmp19 = offset;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(436)
					int tmp20 = (i * step);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(436)
					int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(436)
					int _g1 = tmp21;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(436)
					{
						HX_STACK_LINE(436)
						int tmp22 = _g1;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(436)
						Float tmp23 = output->__unsafe_get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(436)
						Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(436)
						Float tmp25 = val;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(436)
						Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(436)
						Float val1 = tmp26;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(436)
						int tmp27 = _g1;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(436)
						Float tmp28 = val1;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(436)
						Float tmp29 = output->__unsafe_set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(436)
						tmp29;
					}
				}
				HX_STACK_LINE(437)
				bool tmp19 = sequenceP;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(437)
				if ((tmp19)){
					HX_STACK_LINE(438)
					last = val;
				}
				HX_STACK_LINE(440)
				int tmp20 = (div * lookupValues);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(440)
				div = tmp20;
			}
		}
		HX_STACK_LINE(442)
		return true;
	}
	HX_STACK_LINE(445)
	int tmp10 = this->dimensions;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(445)
	hx::MultEq(z,tmp10);
	HX_STACK_LINE(446)
	{
		HX_STACK_LINE(446)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(446)
		while((true)){
			HX_STACK_LINE(446)
			bool tmp11 = (_g < len);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(446)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(446)
			if ((tmp12)){
				HX_STACK_LINE(446)
				break;
			}
			HX_STACK_LINE(446)
			int tmp13 = (_g)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(446)
			int i = tmp13;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(447)
			int tmp14 = (z + i);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(447)
			Float tmp15 = multiplicands->__unsafe_get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(447)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(447)
			Float tmp17 = last;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(447)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(447)
			Float val = tmp18;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(448)
			{
				HX_STACK_LINE(448)
				int tmp19 = offset;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(448)
				int tmp20 = (i * step);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(448)
				int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(448)
				int _g1 = tmp21;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(448)
				{
					HX_STACK_LINE(448)
					int tmp22 = _g1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(448)
					Float tmp23 = output->__unsafe_get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(448)
					Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(448)
					Float tmp25 = val;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(448)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(448)
					Float val1 = tmp26;		HX_STACK_VAR(val1,"val1");
					HX_STACK_LINE(448)
					int tmp27 = _g1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(448)
					Float tmp28 = val1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(448)
					Float tmp29 = output->__unsafe_set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(448)
					tmp29;
				}
			}
			HX_STACK_LINE(449)
			bool tmp19 = sequenceP;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(449)
			if ((tmp19)){
				HX_STACK_LINE(450)
				last = val;
			}
		}
	}
	HX_STACK_LINE(454)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC5(Codebook_obj,codebookDecodeStep,return )

int Codebook_obj::decodeStart( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","decodeStart",0x32b2568c,"kha.audio2.ogg.vorbis.data.Codebook.decodeStart","kha/audio2/ogg/vorbis/data/Codebook.hx",458,0xa03d0d77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_LINE(459)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(459)
	{
		HX_STACK_LINE(459)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(459)
			bool tmp2 = (decodeState->validBits < (int)10);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(459)
			if ((tmp2)){
				HX_STACK_LINE(459)
				decodeState->prepHuffman();
			}
			HX_STACK_LINE(459)
			Array< int > tmp3 = this->fastHuffman;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(459)
			int tmp4 = (int(decodeState->acc) & int((int)1023));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(459)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(459)
			int tmp6 = tmp3->__unsafe_get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(459)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(459)
			bool tmp7 = (i >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(459)
			if ((tmp7)){
				HX_STACK_LINE(459)
				Array< int > tmp8 = this->codewordLengths;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(459)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(459)
				int tmp10 = tmp8->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(459)
				int l = tmp10;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(459)
				int tmp11 = hx::UShr(decodeState->acc,l);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(459)
				decodeState->acc = tmp11;
				HX_STACK_LINE(459)
				hx::SubEq(decodeState->validBits,l);
				HX_STACK_LINE(459)
				bool tmp12 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(459)
				if ((tmp12)){
					HX_STACK_LINE(459)
					decodeState->validBits = (int)0;
					HX_STACK_LINE(459)
					tmp1 = (int)-1;
				}
				else{
					HX_STACK_LINE(459)
					tmp1 = i;
				}
			}
			else{
				HX_STACK_LINE(459)
				tmp1 = decodeState->decodeScalarRaw(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(459)
		int val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(459)
		bool tmp2 = this->sparse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(459)
		if ((tmp2)){
			HX_STACK_LINE(459)
			Array< int > tmp3 = this->sortedValues;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(459)
			int tmp4 = val;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(459)
			int tmp5 = tmp3->__unsafe_get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(459)
			val = tmp5;
		}
		HX_STACK_LINE(459)
		tmp = val;
	}
	HX_STACK_LINE(459)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Codebook_obj,decodeStart,return )

Dynamic Codebook_obj::decodeDeinterleaveRepeat( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< ::Dynamic > residueBuffers,int ch,int cInter,int pInter,int len,int totalDecode){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","decodeDeinterleaveRepeat",0x5171272d,"kha.audio2.ogg.vorbis.data.Codebook.decodeDeinterleaveRepeat","kha/audio2/ogg/vorbis/data/Codebook.hx",483,0xa03d0d77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_ARG(residueBuffers,"residueBuffers")
	HX_STACK_ARG(ch,"ch")
	HX_STACK_ARG(cInter,"cInter")
	HX_STACK_ARG(pInter,"pInter")
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(totalDecode,"totalDecode")
	HX_STACK_LINE(484)
	int tmp = this->dimensions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(484)
	int effective = tmp;		HX_STACK_VAR(effective,"effective");
	HX_STACK_LINE(487)
	int tmp1 = this->lookupType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(487)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(487)
	if ((tmp2)){
		HX_STACK_LINE(488)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Codebook.hx","\x88","\x14","\xe0","\x8e"),488,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Codebook","\xa6","\x42","\x7b","\xee"),HX_HCSTRING("decodeDeinterleaveRepeat","\x65","\x00","\x32","\x3c"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(488)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp4 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_STREAM,null(),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(488)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(491)
	Array< Float > tmp3 = this->multiplicands;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(491)
	Array< Float > multiplicands = tmp3;		HX_STACK_VAR(multiplicands,"multiplicands");
	HX_STACK_LINE(492)
	bool tmp4 = this->sequenceP;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(492)
	bool sequenceP = tmp4;		HX_STACK_VAR(sequenceP,"sequenceP");
	HX_STACK_LINE(493)
	int tmp5 = this->lookupValues;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(493)
	int lookupValues = tmp5;		HX_STACK_VAR(lookupValues,"lookupValues");
	HX_STACK_LINE(495)
	while((true)){
		HX_STACK_LINE(495)
		bool tmp6 = (totalDecode > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(495)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(495)
		if ((tmp7)){
			HX_STACK_LINE(495)
			break;
		}
		HX_STACK_LINE(496)
		Float last = ((Float)0.0);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(497)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(497)
			{
				HX_STACK_LINE(497)
				bool tmp10 = (decodeState->validBits < (int)10);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(497)
				if ((tmp10)){
					HX_STACK_LINE(497)
					decodeState->prepHuffman();
				}
				HX_STACK_LINE(497)
				Array< int > tmp11 = this->fastHuffman;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(497)
				int tmp12 = (int(decodeState->acc) & int((int)1023));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(497)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(497)
				int tmp14 = tmp11->__unsafe_get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(497)
				int i = tmp14;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(497)
				bool tmp15 = (i >= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(497)
				if ((tmp15)){
					HX_STACK_LINE(497)
					Array< int > tmp16 = this->codewordLengths;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(497)
					int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(497)
					int tmp18 = tmp16->__unsafe_get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(497)
					int l = tmp18;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(497)
					int tmp19 = hx::UShr(decodeState->acc,l);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(497)
					decodeState->acc = tmp19;
					HX_STACK_LINE(497)
					hx::SubEq(decodeState->validBits,l);
					HX_STACK_LINE(497)
					bool tmp20 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(497)
					if ((tmp20)){
						HX_STACK_LINE(497)
						decodeState->validBits = (int)0;
						HX_STACK_LINE(497)
						tmp9 = (int)-1;
					}
					else{
						HX_STACK_LINE(497)
						tmp9 = i;
					}
				}
				else{
					HX_STACK_LINE(497)
					tmp9 = decodeState->decodeScalarRaw(hx::ObjectPtr<OBJ_>(this));
				}
			}
			HX_STACK_LINE(497)
			int val = tmp9;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(497)
			bool tmp10 = this->sparse;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(497)
			if ((tmp10)){
				HX_STACK_LINE(497)
				Array< int > tmp11 = this->sortedValues;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(497)
				int tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(497)
				int tmp13 = tmp11->__unsafe_get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(497)
				val = tmp13;
			}
			HX_STACK_LINE(497)
			tmp8 = val;
		}
		HX_STACK_LINE(497)
		int z = tmp8;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(499)
		bool tmp9 = (z < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(499)
		if ((tmp9)){
			HX_STACK_LINE(500)
			bool tmp10 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(500)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(500)
			if ((tmp10)){
				HX_STACK_LINE(500)
				tmp11 = decodeState->lastSeg;
			}
			else{
				HX_STACK_LINE(500)
				tmp11 = false;
			}
			HX_STACK_LINE(500)
			if ((tmp11)){
				HX_STACK_LINE(501)
				return null();
			}
			HX_STACK_LINE(503)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Codebook.hx","\x88","\x14","\xe0","\x8e"),503,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Codebook","\xa6","\x42","\x7b","\xee"),HX_HCSTRING("decodeDeinterleaveRepeat","\x65","\x00","\x32","\x3c"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(503)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp13 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_STREAM,null(),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(503)
			HX_STACK_DO_THROW(tmp13);
		}
		HX_STACK_LINE(510)
		int tmp10 = cInter;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(510)
		int tmp11 = (pInter * ch);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(510)
		int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(510)
		int tmp13 = effective;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(510)
		int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(510)
		int tmp15 = (len * ch);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(510)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(510)
		if ((tmp16)){
			HX_STACK_LINE(511)
			int tmp17 = (len * ch);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(511)
			int tmp18 = (pInter * ch);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(511)
			int tmp19 = cInter;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(511)
			int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(511)
			int tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(511)
			effective = tmp21;
		}
		HX_STACK_LINE(514)
		int tmp17 = this->lookupType;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(514)
		bool tmp18 = (tmp17 == (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(514)
		if ((tmp18)){
			HX_STACK_LINE(515)
			int div = (int)1;		HX_STACK_VAR(div,"div");
			HX_STACK_LINE(516)
			bool tmp19 = sequenceP;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(516)
			if ((tmp19)){
				HX_STACK_LINE(517)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(517)
				while((true)){
					HX_STACK_LINE(517)
					bool tmp20 = (_g < effective);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(517)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(517)
					if ((tmp21)){
						HX_STACK_LINE(517)
						break;
					}
					HX_STACK_LINE(517)
					int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(517)
					int i = tmp22;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(518)
					int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						Float tmp24 = (Float(z) / Float(div));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(518)
						int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(518)
						int a = tmp25;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(518)
						Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int _int = a;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(518)
							bool tmp27 = (_int < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(518)
							if ((tmp27)){
								HX_STACK_LINE(518)
								tmp26 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(518)
								tmp26 = (_int + ((Float)0.0));
							}
						}
						HX_STACK_LINE(518)
						Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int _int = lookupValues;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(518)
							bool tmp28 = (_int < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(518)
							if ((tmp28)){
								HX_STACK_LINE(518)
								tmp27 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(518)
								tmp27 = (_int + ((Float)0.0));
							}
						}
						HX_STACK_LINE(518)
						Float tmp28 = hx::Mod(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(518)
						tmp23 = ::Std_obj::_int(tmp28);
					}
					HX_STACK_LINE(518)
					int off = tmp23;		HX_STACK_VAR(off,"off");
					HX_STACK_LINE(519)
					int tmp24 = off;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(519)
					Float tmp25 = multiplicands->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(519)
					Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(519)
					Float tmp27 = last;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(519)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(519)
					Float val = tmp28;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(520)
					{
						HX_STACK_LINE(520)
						int _g1 = pInter;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(520)
						{
							HX_STACK_LINE(520)
							int tmp29 = cInter;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(520)
							Array< Float > tmp30 = residueBuffers->__unsafe_get(tmp29).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(520)
							Array< Float > this1 = tmp30;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(520)
							Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(520)
							{
								HX_STACK_LINE(520)
								int tmp32 = cInter;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(520)
								Array< Float > tmp33 = residueBuffers->__unsafe_get(tmp32).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(520)
								Array< Float > this2 = tmp33;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(520)
								int tmp34 = _g1;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(520)
								Float tmp35 = this2->__unsafe_get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(520)
								tmp31 = tmp35;
							}
							HX_STACK_LINE(520)
							Float tmp32 = val;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(520)
							Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(520)
							Float val1 = tmp33;		HX_STACK_VAR(val1,"val1");
							HX_STACK_LINE(520)
							int tmp34 = _g1;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(520)
							Float tmp35 = val1;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(520)
							Float tmp36 = this1->__unsafe_set(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(520)
							tmp36;
						}
					}
					HX_STACK_LINE(521)
					int tmp29 = ++(cInter);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(521)
					int tmp30 = ch;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(521)
					bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(521)
					if ((tmp31)){
						HX_STACK_LINE(522)
						cInter = (int)0;
						HX_STACK_LINE(523)
						++(pInter);
					}
					HX_STACK_LINE(525)
					last = val;
					HX_STACK_LINE(526)
					int tmp32 = (div * lookupValues);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(526)
					div = tmp32;
				}
			}
			else{
				HX_STACK_LINE(529)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(529)
				while((true)){
					HX_STACK_LINE(529)
					bool tmp20 = (_g < effective);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(529)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(529)
					if ((tmp21)){
						HX_STACK_LINE(529)
						break;
					}
					HX_STACK_LINE(529)
					int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(529)
					int i = tmp22;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(530)
					int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(530)
					{
						HX_STACK_LINE(530)
						Float tmp24 = (Float(z) / Float(div));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(530)
						int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(530)
						int a = tmp25;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(530)
						Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(530)
						{
							HX_STACK_LINE(530)
							int _int = a;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(530)
							bool tmp27 = (_int < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(530)
							if ((tmp27)){
								HX_STACK_LINE(530)
								tmp26 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(530)
								tmp26 = (_int + ((Float)0.0));
							}
						}
						HX_STACK_LINE(530)
						Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(530)
						{
							HX_STACK_LINE(530)
							int _int = lookupValues;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(530)
							bool tmp28 = (_int < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(530)
							if ((tmp28)){
								HX_STACK_LINE(530)
								tmp27 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(530)
								tmp27 = (_int + ((Float)0.0));
							}
						}
						HX_STACK_LINE(530)
						Float tmp28 = hx::Mod(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(530)
						tmp23 = ::Std_obj::_int(tmp28);
					}
					HX_STACK_LINE(530)
					int off = tmp23;		HX_STACK_VAR(off,"off");
					HX_STACK_LINE(531)
					int tmp24 = off;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(531)
					Float tmp25 = multiplicands->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(531)
					Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(531)
					Float tmp27 = last;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(531)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(531)
					Float val = tmp28;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(532)
					{
						HX_STACK_LINE(532)
						int _g1 = pInter;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(532)
						{
							HX_STACK_LINE(532)
							int tmp29 = cInter;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(532)
							Array< Float > tmp30 = residueBuffers->__unsafe_get(tmp29).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(532)
							Array< Float > this1 = tmp30;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(532)
							Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(532)
							{
								HX_STACK_LINE(532)
								int tmp32 = cInter;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(532)
								Array< Float > tmp33 = residueBuffers->__unsafe_get(tmp32).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(532)
								Array< Float > this2 = tmp33;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(532)
								int tmp34 = _g1;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(532)
								Float tmp35 = this2->__unsafe_get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(532)
								tmp31 = tmp35;
							}
							HX_STACK_LINE(532)
							Float tmp32 = val;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(532)
							Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(532)
							Float val1 = tmp33;		HX_STACK_VAR(val1,"val1");
							HX_STACK_LINE(532)
							int tmp34 = _g1;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(532)
							Float tmp35 = val1;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(532)
							Float tmp36 = this1->__unsafe_set(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(532)
							tmp36;
						}
					}
					HX_STACK_LINE(533)
					int tmp29 = ++(cInter);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(533)
					int tmp30 = ch;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(533)
					bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(533)
					if ((tmp31)){
						HX_STACK_LINE(534)
						cInter = (int)0;
						HX_STACK_LINE(535)
						++(pInter);
					}
					HX_STACK_LINE(537)
					int tmp32 = (div * lookupValues);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(537)
					div = tmp32;
				}
			}
		}
		else{
			HX_STACK_LINE(541)
			int tmp19 = this->dimensions;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(541)
			hx::MultEq(z,tmp19);
			HX_STACK_LINE(542)
			bool tmp20 = sequenceP;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(542)
			if ((tmp20)){
				HX_STACK_LINE(543)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(543)
				while((true)){
					HX_STACK_LINE(543)
					bool tmp21 = (_g < effective);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(543)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(543)
					if ((tmp22)){
						HX_STACK_LINE(543)
						break;
					}
					HX_STACK_LINE(543)
					int tmp23 = (_g)++;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(543)
					int i = tmp23;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(544)
					int tmp24 = (z + i);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(544)
					Float tmp25 = multiplicands->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(544)
					Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(544)
					Float tmp27 = last;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(544)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(544)
					Float val = tmp28;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(545)
					{
						HX_STACK_LINE(545)
						int _g1 = pInter;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(545)
						{
							HX_STACK_LINE(545)
							int tmp29 = cInter;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(545)
							Array< Float > tmp30 = residueBuffers->__unsafe_get(tmp29).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(545)
							Array< Float > this1 = tmp30;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(545)
							Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(545)
							{
								HX_STACK_LINE(545)
								int tmp32 = cInter;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(545)
								Array< Float > tmp33 = residueBuffers->__unsafe_get(tmp32).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(545)
								Array< Float > this2 = tmp33;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(545)
								int tmp34 = _g1;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(545)
								Float tmp35 = this2->__unsafe_get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(545)
								tmp31 = tmp35;
							}
							HX_STACK_LINE(545)
							Float tmp32 = val;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(545)
							Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(545)
							Float val1 = tmp33;		HX_STACK_VAR(val1,"val1");
							HX_STACK_LINE(545)
							int tmp34 = _g1;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(545)
							Float tmp35 = val1;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(545)
							Float tmp36 = this1->__unsafe_set(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(545)
							tmp36;
						}
					}
					HX_STACK_LINE(546)
					int tmp29 = ++(cInter);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(546)
					int tmp30 = ch;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(546)
					bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(546)
					if ((tmp31)){
						HX_STACK_LINE(547)
						cInter = (int)0;
						HX_STACK_LINE(548)
						++(pInter);
					}
					HX_STACK_LINE(550)
					last = val;
				}
			}
			else{
				HX_STACK_LINE(553)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(553)
				while((true)){
					HX_STACK_LINE(553)
					bool tmp21 = (_g < effective);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(553)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(553)
					if ((tmp22)){
						HX_STACK_LINE(553)
						break;
					}
					HX_STACK_LINE(553)
					int tmp23 = (_g)++;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(553)
					int i = tmp23;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(554)
					int tmp24 = (z + i);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(554)
					Float tmp25 = multiplicands->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(554)
					Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(554)
					Float tmp27 = last;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(554)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(554)
					Float val = tmp28;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(555)
					{
						HX_STACK_LINE(555)
						int _g1 = pInter;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(555)
						{
							HX_STACK_LINE(555)
							int tmp29 = cInter;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(555)
							Array< Float > tmp30 = residueBuffers->__unsafe_get(tmp29).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(555)
							Array< Float > this1 = tmp30;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(555)
							Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(555)
							{
								HX_STACK_LINE(555)
								int tmp32 = cInter;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(555)
								Array< Float > tmp33 = residueBuffers->__unsafe_get(tmp32).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(555)
								Array< Float > this2 = tmp33;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(555)
								int tmp34 = _g1;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(555)
								Float tmp35 = this2->__unsafe_get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(555)
								tmp31 = tmp35;
							}
							HX_STACK_LINE(555)
							Float tmp32 = val;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(555)
							Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(555)
							Float val1 = tmp33;		HX_STACK_VAR(val1,"val1");
							HX_STACK_LINE(555)
							int tmp34 = _g1;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(555)
							Float tmp35 = val1;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(555)
							Float tmp36 = this1->__unsafe_set(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(555)
							tmp36;
						}
					}
					HX_STACK_LINE(556)
					int tmp29 = ++(cInter);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(556)
					int tmp30 = ch;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(556)
					bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(556)
					if ((tmp31)){
						HX_STACK_LINE(557)
						cInter = (int)0;
						HX_STACK_LINE(558)
						++(pInter);
					}
				}
			}
		}
		HX_STACK_LINE(564)
		hx::SubEq(totalDecode,effective);
	}
	struct _Function_1_1{
		inline static Dynamic Block( int &pInter,int &cInter){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/audio2/ogg/vorbis/data/Codebook.hx",567,0xa03d0d77)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("cInter","\xb9","\xe7","\xa2","\xe6") , cInter,false);
				__result->Add(HX_HCSTRING("pInter","\x8c","\x98","\x46","\x19") , pInter,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(567)
	Dynamic tmp6 = _Function_1_1::Block(pInter,cInter);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(567)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC7(Codebook_obj,decodeDeinterleaveRepeat,return )

bool Codebook_obj::residueDecode( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< Float > target,int offset,int n,int rtype){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","residueDecode",0xf3c1a811,"kha.audio2.ogg.vorbis.data.Codebook.residueDecode","kha/audio2/ogg/vorbis/data/Codebook.hx",574,0xa03d0d77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(rtype,"rtype")
	HX_STACK_LINE(575)
	bool tmp = (rtype == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(575)
	if ((tmp)){
		HX_STACK_LINE(576)
		int tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		int tmp2 = this->dimensions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(576)
		Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(576)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(576)
		int step = tmp4;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(577)
			while((true)){
				HX_STACK_LINE(577)
				bool tmp5 = (_g < step);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(577)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(577)
				if ((tmp6)){
					HX_STACK_LINE(577)
					break;
				}
				HX_STACK_LINE(577)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(577)
				int k = tmp7;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(578)
				::kha::audio2::ogg::vorbis::VorbisDecodeState tmp8 = decodeState;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(578)
				Array< Float > tmp9 = target;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(578)
				int tmp10 = (offset + k);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(578)
				int tmp11 = (n - offset);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(578)
				int tmp12 = k;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(578)
				int tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(578)
				int tmp14 = step;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(578)
				bool tmp15 = this->codebookDecodeStep(tmp8,tmp9,tmp10,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(578)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(578)
				if ((tmp16)){
					HX_STACK_LINE(579)
					return false;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(583)
		int k = (int)0;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(584)
		while((true)){
			HX_STACK_LINE(584)
			bool tmp1 = (k < n);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(584)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(584)
			if ((tmp2)){
				HX_STACK_LINE(584)
				break;
			}
			HX_STACK_LINE(585)
			::kha::audio2::ogg::vorbis::VorbisDecodeState tmp3 = decodeState;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(585)
			Array< Float > tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(585)
			int tmp5 = offset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(585)
			int tmp6 = (n - k);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(585)
			bool tmp7 = this->codebookDecode(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(585)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(585)
			if ((tmp8)){
				HX_STACK_LINE(586)
				return false;
			}
			HX_STACK_LINE(588)
			int tmp9 = this->dimensions;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(588)
			hx::AddEq(k,tmp9);
			HX_STACK_LINE(589)
			int tmp10 = this->dimensions;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(589)
			hx::AddEq(offset,tmp10);
		}
	}
	HX_STACK_LINE(592)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC5(Codebook_obj,residueDecode,return )

int Codebook_obj::NO_CODE;

::kha::audio2::ogg::vorbis::data::Codebook Codebook_obj::read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Codebook","read",0x68c95e1e,"kha.audio2.ogg.vorbis.data.Codebook.read","kha/audio2/ogg/vorbis/data/Codebook.hx",37,0xa03d0d77)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_LINE(38)
	::kha::audio2::ogg::vorbis::data::Codebook c = ::kha::audio2::ogg::vorbis::data::Codebook_obj::__new();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(39)
	bool tmp = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	if ((tmp)){
		HX_STACK_LINE(39)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(39)
		bool tmp2 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		if ((tmp2)){
			HX_STACK_LINE(39)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			if ((tmp3)){
				HX_STACK_LINE(39)
				int tmp4 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(39)
				int tmp5 = (int)-16;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(39)
				int tmp6 = decodeState->readBits(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(39)
				int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(39)
				tmp1 = (tmp4 + tmp7);
			}
			else{
				HX_STACK_LINE(39)
				bool tmp4 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(39)
				if ((tmp4)){
					HX_STACK_LINE(39)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(39)
				while((true)){
					HX_STACK_LINE(39)
					bool tmp5 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(39)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(39)
					if ((tmp5)){
						HX_STACK_LINE(39)
						bool tmp7 = decodeState->lastSeg;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(39)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(39)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(39)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(39)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(39)
						if ((tmp11)){
							HX_STACK_LINE(39)
							int tmp12 = decodeState->next();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(39)
							int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(39)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(39)
							tmp6 = (tmp14 == (int)0);
						}
						else{
							HX_STACK_LINE(39)
							tmp6 = true;
						}
					}
					else{
						HX_STACK_LINE(39)
						tmp6 = false;
					}
					HX_STACK_LINE(39)
					if ((tmp6)){
						HX_STACK_LINE(39)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(39)
						break;
					}
					else{
						HX_STACK_LINE(39)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(39)
						int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(39)
						{
							HX_STACK_LINE(39)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(39)
							{
								HX_STACK_LINE(39)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(39)
								tmp8 = decodeState->input->readByte();
							}
							HX_STACK_LINE(39)
							int tmp9 = decodeState->validBits;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(39)
							int tmp10 = (int(tmp8) << int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(39)
							int b = tmp10;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(39)
							tmp7 = (decodeState->acc + b);
						}
						HX_STACK_LINE(39)
						decodeState->acc = tmp7;
						HX_STACK_LINE(39)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(39)
					bool tmp7 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(39)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(39)
					if ((tmp8)){
						HX_STACK_LINE(39)
						break;
					}
				}
				HX_STACK_LINE(39)
				bool tmp5 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(39)
				if ((tmp5)){
					HX_STACK_LINE(39)
					tmp1 = (int)0;
				}
				else{
					HX_STACK_LINE(39)
					int tmp6 = decodeState->acc;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(39)
					int tmp7 = (int)256;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(39)
					int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(39)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(39)
					int tmp10 = (int(tmp6) & int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(39)
					int z = tmp10;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(39)
					int tmp11 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(39)
					decodeState->acc = tmp11;
					HX_STACK_LINE(39)
					hx::SubEq(decodeState->validBits,(int)8);
					HX_STACK_LINE(39)
					tmp1 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(39)
			int tmp3 = decodeState->acc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			int tmp4 = (int)256;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			int tmp7 = (int(tmp3) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			int z = tmp7;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(39)
			int tmp8 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(39)
			decodeState->acc = tmp8;
			HX_STACK_LINE(39)
			hx::SubEq(decodeState->validBits,(int)8);
			HX_STACK_LINE(39)
			tmp1 = z;
		}
	}
	HX_STACK_LINE(39)
	bool tmp2 = (tmp1 != (int)66);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(39)
	if ((tmp4)){
		HX_STACK_LINE(39)
		bool tmp6 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		bool tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(39)
		if ((tmp11)){
			HX_STACK_LINE(39)
			tmp9 = (int)0;
		}
		else{
			HX_STACK_LINE(39)
			bool tmp12 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(39)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(39)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(39)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(39)
			if ((tmp16)){
				HX_STACK_LINE(39)
				bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(39)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(39)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(39)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(39)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(39)
				if ((tmp21)){
					HX_STACK_LINE(39)
					int tmp22 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(39)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(39)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(39)
					int tmp25 = (int)-16;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(39)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(39)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(39)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(39)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(39)
					int tmp30 = decodeState->readBits(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(39)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(39)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(39)
					int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(39)
					int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(39)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(39)
					int tmp36 = (tmp24 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(39)
					int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(39)
					tmp9 = tmp37;
				}
				else{
					HX_STACK_LINE(39)
					bool tmp22 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(39)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(39)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(39)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(39)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(39)
					if ((tmp26)){
						HX_STACK_LINE(39)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(39)
					while((true)){
						HX_STACK_LINE(39)
						bool tmp27 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(39)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(39)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(39)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(39)
						bool tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(39)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(39)
						if ((tmp32)){
							HX_STACK_LINE(39)
							bool tmp33 = decodeState->lastSeg;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(39)
							bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(39)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(39)
							bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(39)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(39)
							bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(39)
							bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(39)
							bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(39)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(39)
							bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(39)
							bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(39)
							if ((tmp43)){
								HX_STACK_LINE(39)
								int tmp44 = decodeState->next();		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(39)
								int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(39)
								int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(39)
								int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(39)
								int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(39)
								bool tmp49 = (tmp48 == (int)0);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(39)
								bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(39)
								tmp30 = tmp50;
							}
							else{
								HX_STACK_LINE(39)
								tmp30 = true;
							}
						}
						else{
							HX_STACK_LINE(39)
							tmp30 = false;
						}
						HX_STACK_LINE(39)
						bool tmp33 = tmp30;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(39)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(39)
						if ((tmp34)){
							HX_STACK_LINE(39)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(39)
							break;
						}
						else{
							HX_STACK_LINE(39)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(39)
							int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(39)
							{
								HX_STACK_LINE(39)
								int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(39)
								{
									HX_STACK_LINE(39)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(39)
									int tmp37 = decodeState->input->readByte();		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(39)
									int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(39)
									tmp36 = tmp38;
								}
								HX_STACK_LINE(39)
								int tmp37 = decodeState->validBits;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(39)
								int tmp38 = (int(tmp36) << int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(39)
								int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(39)
								int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(39)
								int b = tmp40;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(39)
								int tmp41 = (decodeState->acc + b);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(39)
								int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(39)
								tmp35 = tmp42;
							}
							HX_STACK_LINE(39)
							decodeState->acc = tmp35;
							HX_STACK_LINE(39)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(39)
						bool tmp35 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(39)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(39)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(39)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(39)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(39)
						bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(39)
						bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(39)
						bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(39)
						bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(39)
						bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(39)
						if ((tmp44)){
							HX_STACK_LINE(39)
							break;
						}
					}
					HX_STACK_LINE(39)
					bool tmp27 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(39)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(39)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(39)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(39)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(39)
					if ((tmp31)){
						HX_STACK_LINE(39)
						tmp9 = (int)0;
					}
					else{
						HX_STACK_LINE(39)
						int tmp32 = decodeState->acc;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(39)
						int tmp33 = (int)256;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(39)
						int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(39)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(39)
						int tmp36 = (tmp35 - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(39)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(39)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(39)
						int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(39)
						int tmp40 = (int(tmp32) & int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(39)
						int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(39)
						int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(39)
						int z = tmp42;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(39)
						int tmp43 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(39)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(39)
						int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(39)
						decodeState->acc = tmp45;
						HX_STACK_LINE(39)
						hx::SubEq(decodeState->validBits,(int)8);
						HX_STACK_LINE(39)
						tmp9 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(39)
				int tmp17 = decodeState->acc;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(39)
				int tmp18 = (int)256;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(39)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(39)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(39)
				int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(39)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(39)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(39)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(39)
				int tmp25 = (int(tmp17) & int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(39)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(39)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(39)
				int z = tmp27;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(39)
				int tmp28 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(39)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(39)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(39)
				decodeState->acc = tmp30;
				HX_STACK_LINE(39)
				hx::SubEq(decodeState->validBits,(int)8);
				HX_STACK_LINE(39)
				tmp9 = z;
			}
		}
		HX_STACK_LINE(39)
		tmp5 = (tmp9 != (int)67);
	}
	else{
		HX_STACK_LINE(39)
		tmp5 = true;
	}
	HX_STACK_LINE(39)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(39)
	if ((tmp6)){
		HX_STACK_LINE(39)
		bool tmp8 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(39)
		if ((tmp11)){
			HX_STACK_LINE(39)
			tmp10 = (int)0;
		}
		else{
			HX_STACK_LINE(39)
			bool tmp12 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(39)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(39)
			if ((tmp14)){
				HX_STACK_LINE(39)
				bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(39)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(39)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(39)
				if ((tmp17)){
					HX_STACK_LINE(39)
					int tmp18 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(39)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(39)
					int tmp20 = (int)-16;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(39)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(39)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(39)
					int tmp23 = decodeState->readBits(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(39)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(39)
					int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(39)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(39)
					int tmp27 = (tmp19 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(39)
					tmp10 = tmp27;
				}
				else{
					HX_STACK_LINE(39)
					bool tmp18 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(39)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(39)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(39)
					if ((tmp20)){
						HX_STACK_LINE(39)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(39)
					while((true)){
						HX_STACK_LINE(39)
						bool tmp21 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(39)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(39)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(39)
						bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(39)
						if ((tmp24)){
							HX_STACK_LINE(39)
							bool tmp25 = decodeState->lastSeg;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(39)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(39)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(39)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(39)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(39)
							bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(39)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(39)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(39)
							if ((tmp32)){
								HX_STACK_LINE(39)
								int tmp33 = decodeState->next();		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(39)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(39)
								int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(39)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(39)
								bool tmp37 = (tmp36 == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(39)
								tmp23 = tmp37;
							}
							else{
								HX_STACK_LINE(39)
								tmp23 = true;
							}
						}
						else{
							HX_STACK_LINE(39)
							tmp23 = false;
						}
						HX_STACK_LINE(39)
						bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(39)
						if ((tmp25)){
							HX_STACK_LINE(39)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(39)
							break;
						}
						else{
							HX_STACK_LINE(39)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(39)
							int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(39)
							{
								HX_STACK_LINE(39)
								int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(39)
								{
									HX_STACK_LINE(39)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(39)
									int tmp28 = decodeState->input->readByte();		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(39)
									tmp27 = tmp28;
								}
								HX_STACK_LINE(39)
								int tmp28 = decodeState->validBits;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(39)
								int tmp29 = (int(tmp27) << int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(39)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(39)
								int b = tmp30;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(39)
								int tmp31 = (decodeState->acc + b);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(39)
								tmp26 = tmp31;
							}
							HX_STACK_LINE(39)
							decodeState->acc = tmp26;
							HX_STACK_LINE(39)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(39)
						bool tmp26 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(39)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(39)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(39)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(39)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(39)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(39)
						if ((tmp31)){
							HX_STACK_LINE(39)
							break;
						}
					}
					HX_STACK_LINE(39)
					bool tmp21 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(39)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(39)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(39)
					if ((tmp23)){
						HX_STACK_LINE(39)
						tmp10 = (int)0;
					}
					else{
						HX_STACK_LINE(39)
						int tmp24 = decodeState->acc;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(39)
						int tmp25 = (int)256;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(39)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(39)
						int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(39)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(39)
						int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(39)
						int tmp30 = (int(tmp24) & int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(39)
						int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(39)
						int z = tmp31;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(39)
						int tmp32 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(39)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(39)
						decodeState->acc = tmp33;
						HX_STACK_LINE(39)
						hx::SubEq(decodeState->validBits,(int)8);
						HX_STACK_LINE(39)
						tmp10 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(39)
				int tmp15 = decodeState->acc;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(39)
				int tmp16 = (int)256;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(39)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(39)
				int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(39)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(39)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(39)
				int tmp21 = (int(tmp15) & int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(39)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(39)
				int z = tmp22;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(39)
				int tmp23 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(39)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(39)
				decodeState->acc = tmp24;
				HX_STACK_LINE(39)
				hx::SubEq(decodeState->validBits,(int)8);
				HX_STACK_LINE(39)
				tmp10 = z;
			}
		}
		HX_STACK_LINE(39)
		tmp7 = (tmp10 != (int)86);
	}
	else{
		HX_STACK_LINE(39)
		tmp7 = true;
	}
	HX_STACK_LINE(39)
	if ((tmp7)){
		HX_STACK_LINE(40)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Codebook.hx","\x88","\x14","\xe0","\x8e"),40,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Codebook","\xa6","\x42","\x7b","\xee"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp9 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		HX_STACK_DO_THROW(tmp9);
	}
	HX_STACK_LINE(43)
	bool tmp8 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(43)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(43)
	if ((tmp8)){
		HX_STACK_LINE(43)
		tmp9 = (int)0;
	}
	else{
		HX_STACK_LINE(43)
		bool tmp10 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(43)
		if ((tmp10)){
			HX_STACK_LINE(43)
			bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			if ((tmp11)){
				HX_STACK_LINE(43)
				int tmp12 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(43)
				int tmp13 = (int)-16;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(43)
				int tmp14 = decodeState->readBits(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(43)
				int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(43)
				tmp9 = (tmp12 + tmp15);
			}
			else{
				HX_STACK_LINE(43)
				bool tmp12 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(43)
				if ((tmp12)){
					HX_STACK_LINE(43)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(43)
				while((true)){
					HX_STACK_LINE(43)
					bool tmp13 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(43)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(43)
					if ((tmp13)){
						HX_STACK_LINE(43)
						bool tmp15 = decodeState->lastSeg;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(43)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(43)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(43)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(43)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(43)
						if ((tmp19)){
							HX_STACK_LINE(43)
							int tmp20 = decodeState->next();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(43)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(43)
							int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(43)
							tmp14 = (tmp22 == (int)0);
						}
						else{
							HX_STACK_LINE(43)
							tmp14 = true;
						}
					}
					else{
						HX_STACK_LINE(43)
						tmp14 = false;
					}
					HX_STACK_LINE(43)
					if ((tmp14)){
						HX_STACK_LINE(43)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(43)
						break;
					}
					else{
						HX_STACK_LINE(43)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(43)
						int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(43)
						{
							HX_STACK_LINE(43)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(43)
							{
								HX_STACK_LINE(43)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(43)
								tmp16 = decodeState->input->readByte();
							}
							HX_STACK_LINE(43)
							int tmp17 = decodeState->validBits;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(43)
							int tmp18 = (int(tmp16) << int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(43)
							int b = tmp18;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(43)
							tmp15 = (decodeState->acc + b);
						}
						HX_STACK_LINE(43)
						decodeState->acc = tmp15;
						HX_STACK_LINE(43)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(43)
					bool tmp15 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(43)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(43)
					if ((tmp16)){
						HX_STACK_LINE(43)
						break;
					}
				}
				HX_STACK_LINE(43)
				bool tmp13 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(43)
				if ((tmp13)){
					HX_STACK_LINE(43)
					tmp9 = (int)0;
				}
				else{
					HX_STACK_LINE(43)
					int tmp14 = decodeState->acc;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(43)
					int tmp15 = (int)256;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(43)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(43)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(43)
					int tmp18 = (int(tmp14) & int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(43)
					int z = tmp18;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(43)
					int tmp19 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(43)
					decodeState->acc = tmp19;
					HX_STACK_LINE(43)
					hx::SubEq(decodeState->validBits,(int)8);
					HX_STACK_LINE(43)
					tmp9 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(43)
			int tmp11 = decodeState->acc;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			int tmp12 = (int)256;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(43)
			int tmp15 = (int(tmp11) & int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(43)
			int z = tmp15;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(43)
			int tmp16 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(43)
			decodeState->acc = tmp16;
			HX_STACK_LINE(43)
			hx::SubEq(decodeState->validBits,(int)8);
			HX_STACK_LINE(43)
			tmp9 = z;
		}
	}
	HX_STACK_LINE(43)
	int x = tmp9;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(44)
	bool tmp10 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(44)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(44)
	if ((tmp10)){
		HX_STACK_LINE(44)
		tmp11 = (int)0;
	}
	else{
		HX_STACK_LINE(44)
		bool tmp12 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(44)
		if ((tmp12)){
			HX_STACK_LINE(44)
			bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(44)
			if ((tmp13)){
				HX_STACK_LINE(44)
				int tmp14 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(44)
				int tmp15 = (int)-16;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(44)
				int tmp16 = decodeState->readBits(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(44)
				int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(44)
				tmp11 = (tmp14 + tmp17);
			}
			else{
				HX_STACK_LINE(44)
				bool tmp14 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(44)
				if ((tmp14)){
					HX_STACK_LINE(44)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(44)
				while((true)){
					HX_STACK_LINE(44)
					bool tmp15 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(44)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(44)
					if ((tmp15)){
						HX_STACK_LINE(44)
						bool tmp17 = decodeState->lastSeg;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(44)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(44)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(44)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(44)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(44)
						if ((tmp21)){
							HX_STACK_LINE(44)
							int tmp22 = decodeState->next();		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(44)
							int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(44)
							int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(44)
							tmp16 = (tmp24 == (int)0);
						}
						else{
							HX_STACK_LINE(44)
							tmp16 = true;
						}
					}
					else{
						HX_STACK_LINE(44)
						tmp16 = false;
					}
					HX_STACK_LINE(44)
					if ((tmp16)){
						HX_STACK_LINE(44)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(44)
						break;
					}
					else{
						HX_STACK_LINE(44)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(44)
						int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(44)
						{
							HX_STACK_LINE(44)
							int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(44)
							{
								HX_STACK_LINE(44)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(44)
								tmp18 = decodeState->input->readByte();
							}
							HX_STACK_LINE(44)
							int tmp19 = decodeState->validBits;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(44)
							int tmp20 = (int(tmp18) << int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(44)
							int b = tmp20;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(44)
							tmp17 = (decodeState->acc + b);
						}
						HX_STACK_LINE(44)
						decodeState->acc = tmp17;
						HX_STACK_LINE(44)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(44)
					bool tmp17 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(44)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(44)
					if ((tmp18)){
						HX_STACK_LINE(44)
						break;
					}
				}
				HX_STACK_LINE(44)
				bool tmp15 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(44)
				if ((tmp15)){
					HX_STACK_LINE(44)
					tmp11 = (int)0;
				}
				else{
					HX_STACK_LINE(44)
					int tmp16 = decodeState->acc;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(44)
					int tmp17 = (int)256;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(44)
					int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(44)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(44)
					int tmp20 = (int(tmp16) & int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(44)
					int z = tmp20;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(44)
					int tmp21 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(44)
					decodeState->acc = tmp21;
					HX_STACK_LINE(44)
					hx::SubEq(decodeState->validBits,(int)8);
					HX_STACK_LINE(44)
					tmp11 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(44)
			int tmp13 = decodeState->acc;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(44)
			int tmp14 = (int)256;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(44)
			int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(44)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(44)
			int tmp17 = (int(tmp13) & int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(44)
			int z = tmp17;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(44)
			int tmp18 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(44)
			decodeState->acc = tmp18;
			HX_STACK_LINE(44)
			hx::SubEq(decodeState->validBits,(int)8);
			HX_STACK_LINE(44)
			tmp11 = z;
		}
	}
	HX_STACK_LINE(44)
	int tmp12 = (int(tmp11) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(44)
	int tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(44)
	int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(44)
	c->dimensions = tmp14;
	HX_STACK_LINE(46)
	bool tmp15 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(46)
	int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(46)
	if ((tmp15)){
		HX_STACK_LINE(46)
		tmp16 = (int)0;
	}
	else{
		HX_STACK_LINE(46)
		bool tmp17 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(46)
		if ((tmp17)){
			HX_STACK_LINE(46)
			bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(46)
			if ((tmp18)){
				HX_STACK_LINE(46)
				int tmp19 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(46)
				int tmp20 = (int)-16;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(46)
				int tmp21 = decodeState->readBits(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(46)
				int tmp22 = (int(tmp21) << int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(46)
				tmp16 = (tmp19 + tmp22);
			}
			else{
				HX_STACK_LINE(46)
				bool tmp19 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(46)
				if ((tmp19)){
					HX_STACK_LINE(46)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(46)
				while((true)){
					HX_STACK_LINE(46)
					bool tmp20 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(46)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(46)
					if ((tmp20)){
						HX_STACK_LINE(46)
						bool tmp22 = decodeState->lastSeg;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(46)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(46)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(46)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(46)
						bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(46)
						if ((tmp26)){
							HX_STACK_LINE(46)
							int tmp27 = decodeState->next();		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(46)
							int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(46)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(46)
							tmp21 = (tmp29 == (int)0);
						}
						else{
							HX_STACK_LINE(46)
							tmp21 = true;
						}
					}
					else{
						HX_STACK_LINE(46)
						tmp21 = false;
					}
					HX_STACK_LINE(46)
					if ((tmp21)){
						HX_STACK_LINE(46)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(46)
						break;
					}
					else{
						HX_STACK_LINE(46)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(46)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(46)
						{
							HX_STACK_LINE(46)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(46)
							{
								HX_STACK_LINE(46)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(46)
								tmp23 = decodeState->input->readByte();
							}
							HX_STACK_LINE(46)
							int tmp24 = decodeState->validBits;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(46)
							int tmp25 = (int(tmp23) << int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(46)
							int b = tmp25;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(46)
							tmp22 = (decodeState->acc + b);
						}
						HX_STACK_LINE(46)
						decodeState->acc = tmp22;
						HX_STACK_LINE(46)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(46)
					bool tmp22 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(46)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(46)
					if ((tmp23)){
						HX_STACK_LINE(46)
						break;
					}
				}
				HX_STACK_LINE(46)
				bool tmp20 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(46)
				if ((tmp20)){
					HX_STACK_LINE(46)
					tmp16 = (int)0;
				}
				else{
					HX_STACK_LINE(46)
					int tmp21 = decodeState->acc;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(46)
					int tmp22 = (int)256;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(46)
					int tmp23 = (tmp22 - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(46)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(46)
					int tmp25 = (int(tmp21) & int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(46)
					int z = tmp25;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(46)
					int tmp26 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(46)
					decodeState->acc = tmp26;
					HX_STACK_LINE(46)
					hx::SubEq(decodeState->validBits,(int)8);
					HX_STACK_LINE(46)
					tmp16 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(46)
			int tmp18 = decodeState->acc;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(46)
			int tmp19 = (int)256;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(46)
			int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(46)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(46)
			int tmp22 = (int(tmp18) & int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(46)
			int z = tmp22;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(46)
			int tmp23 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(46)
			decodeState->acc = tmp23;
			HX_STACK_LINE(46)
			hx::SubEq(decodeState->validBits,(int)8);
			HX_STACK_LINE(46)
			tmp16 = z;
		}
	}
	HX_STACK_LINE(46)
	int x1 = tmp16;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(47)
	bool tmp17 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(47)
	int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(47)
	if ((tmp17)){
		HX_STACK_LINE(47)
		tmp18 = (int)0;
	}
	else{
		HX_STACK_LINE(47)
		bool tmp19 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(47)
		if ((tmp19)){
			HX_STACK_LINE(47)
			bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(47)
			if ((tmp20)){
				HX_STACK_LINE(47)
				int tmp21 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(47)
				int tmp22 = (int)-16;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(47)
				int tmp23 = decodeState->readBits(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(47)
				int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(47)
				tmp18 = (tmp21 + tmp24);
			}
			else{
				HX_STACK_LINE(47)
				bool tmp21 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(47)
				if ((tmp21)){
					HX_STACK_LINE(47)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(47)
				while((true)){
					HX_STACK_LINE(47)
					bool tmp22 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(47)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(47)
					if ((tmp22)){
						HX_STACK_LINE(47)
						bool tmp24 = decodeState->lastSeg;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(47)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(47)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(47)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(47)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(47)
						if ((tmp28)){
							HX_STACK_LINE(47)
							int tmp29 = decodeState->next();		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(47)
							int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(47)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(47)
							tmp23 = (tmp31 == (int)0);
						}
						else{
							HX_STACK_LINE(47)
							tmp23 = true;
						}
					}
					else{
						HX_STACK_LINE(47)
						tmp23 = false;
					}
					HX_STACK_LINE(47)
					if ((tmp23)){
						HX_STACK_LINE(47)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(47)
						break;
					}
					else{
						HX_STACK_LINE(47)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(47)
						int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(47)
						{
							HX_STACK_LINE(47)
							int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(47)
							{
								HX_STACK_LINE(47)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(47)
								tmp25 = decodeState->input->readByte();
							}
							HX_STACK_LINE(47)
							int tmp26 = decodeState->validBits;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(47)
							int tmp27 = (int(tmp25) << int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(47)
							int b = tmp27;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(47)
							tmp24 = (decodeState->acc + b);
						}
						HX_STACK_LINE(47)
						decodeState->acc = tmp24;
						HX_STACK_LINE(47)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(47)
					bool tmp24 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(47)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(47)
					if ((tmp25)){
						HX_STACK_LINE(47)
						break;
					}
				}
				HX_STACK_LINE(47)
				bool tmp22 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(47)
				if ((tmp22)){
					HX_STACK_LINE(47)
					tmp18 = (int)0;
				}
				else{
					HX_STACK_LINE(47)
					int tmp23 = decodeState->acc;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(47)
					int tmp24 = (int)256;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(47)
					int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(47)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(47)
					int tmp27 = (int(tmp23) & int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(47)
					int z = tmp27;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(47)
					int tmp28 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(47)
					decodeState->acc = tmp28;
					HX_STACK_LINE(47)
					hx::SubEq(decodeState->validBits,(int)8);
					HX_STACK_LINE(47)
					tmp18 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(47)
			int tmp20 = decodeState->acc;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(47)
			int tmp21 = (int)256;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(47)
			int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(47)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(47)
			int tmp24 = (int(tmp20) & int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(47)
			int z = tmp24;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(47)
			int tmp25 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(47)
			decodeState->acc = tmp25;
			HX_STACK_LINE(47)
			hx::SubEq(decodeState->validBits,(int)8);
			HX_STACK_LINE(47)
			tmp18 = z;
		}
	}
	HX_STACK_LINE(47)
	int y = tmp18;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(48)
	bool tmp19 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(48)
	int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(48)
	if ((tmp19)){
		HX_STACK_LINE(48)
		tmp20 = (int)0;
	}
	else{
		HX_STACK_LINE(48)
		bool tmp21 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(48)
		if ((tmp21)){
			HX_STACK_LINE(48)
			bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(48)
			if ((tmp22)){
				HX_STACK_LINE(48)
				int tmp23 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(48)
				int tmp24 = (int)-16;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(48)
				int tmp25 = decodeState->readBits(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(48)
				int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(48)
				tmp20 = (tmp23 + tmp26);
			}
			else{
				HX_STACK_LINE(48)
				bool tmp23 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(48)
				if ((tmp23)){
					HX_STACK_LINE(48)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(48)
				while((true)){
					HX_STACK_LINE(48)
					bool tmp24 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(48)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(48)
					if ((tmp24)){
						HX_STACK_LINE(48)
						bool tmp26 = decodeState->lastSeg;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(48)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(48)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(48)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(48)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(48)
						if ((tmp30)){
							HX_STACK_LINE(48)
							int tmp31 = decodeState->next();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(48)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(48)
							int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(48)
							tmp25 = (tmp33 == (int)0);
						}
						else{
							HX_STACK_LINE(48)
							tmp25 = true;
						}
					}
					else{
						HX_STACK_LINE(48)
						tmp25 = false;
					}
					HX_STACK_LINE(48)
					if ((tmp25)){
						HX_STACK_LINE(48)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(48)
						break;
					}
					else{
						HX_STACK_LINE(48)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(48)
						int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(48)
							{
								HX_STACK_LINE(48)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(48)
								tmp27 = decodeState->input->readByte();
							}
							HX_STACK_LINE(48)
							int tmp28 = decodeState->validBits;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(48)
							int tmp29 = (int(tmp27) << int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(48)
							int b = tmp29;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(48)
							tmp26 = (decodeState->acc + b);
						}
						HX_STACK_LINE(48)
						decodeState->acc = tmp26;
						HX_STACK_LINE(48)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(48)
					bool tmp26 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(48)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(48)
					if ((tmp27)){
						HX_STACK_LINE(48)
						break;
					}
				}
				HX_STACK_LINE(48)
				bool tmp24 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(48)
				if ((tmp24)){
					HX_STACK_LINE(48)
					tmp20 = (int)0;
				}
				else{
					HX_STACK_LINE(48)
					int tmp25 = decodeState->acc;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(48)
					int tmp26 = (int)256;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(48)
					int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(48)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(48)
					int tmp29 = (int(tmp25) & int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(48)
					int z = tmp29;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(48)
					int tmp30 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(48)
					decodeState->acc = tmp30;
					HX_STACK_LINE(48)
					hx::SubEq(decodeState->validBits,(int)8);
					HX_STACK_LINE(48)
					tmp20 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(48)
			int tmp22 = decodeState->acc;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(48)
			int tmp23 = (int)256;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(48)
			int tmp24 = (tmp23 - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(48)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(48)
			int tmp26 = (int(tmp22) & int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(48)
			int z = tmp26;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(48)
			int tmp27 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(48)
			decodeState->acc = tmp27;
			HX_STACK_LINE(48)
			hx::SubEq(decodeState->validBits,(int)8);
			HX_STACK_LINE(48)
			tmp20 = z;
		}
	}
	HX_STACK_LINE(48)
	int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(48)
	int tmp22 = (int(y) << int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(48)
	int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(48)
	int tmp24 = x1;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(48)
	int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(48)
	c->entries = tmp25;
	HX_STACK_LINE(49)
	bool tmp26 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(49)
	int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(49)
	if ((tmp26)){
		HX_STACK_LINE(49)
		tmp27 = (int)0;
	}
	else{
		HX_STACK_LINE(49)
		bool tmp28 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(49)
		if ((tmp28)){
			HX_STACK_LINE(49)
			bool tmp29 = false;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(49)
			if ((tmp29)){
				HX_STACK_LINE(49)
				int tmp30 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(49)
				int tmp31 = (int)-23;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(49)
				int tmp32 = decodeState->readBits(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(49)
				int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(49)
				tmp27 = (tmp30 + tmp33);
			}
			else{
				HX_STACK_LINE(49)
				bool tmp30 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(49)
				if ((tmp30)){
					HX_STACK_LINE(49)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(49)
				while((true)){
					HX_STACK_LINE(49)
					bool tmp31 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(49)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(49)
					if ((tmp31)){
						HX_STACK_LINE(49)
						bool tmp33 = decodeState->lastSeg;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(49)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(49)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(49)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(49)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(49)
						if ((tmp37)){
							HX_STACK_LINE(49)
							int tmp38 = decodeState->next();		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(49)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(49)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(49)
							tmp32 = (tmp40 == (int)0);
						}
						else{
							HX_STACK_LINE(49)
							tmp32 = true;
						}
					}
					else{
						HX_STACK_LINE(49)
						tmp32 = false;
					}
					HX_STACK_LINE(49)
					if ((tmp32)){
						HX_STACK_LINE(49)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(49)
						break;
					}
					else{
						HX_STACK_LINE(49)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(49)
						int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(49)
						{
							HX_STACK_LINE(49)
							int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(49)
							{
								HX_STACK_LINE(49)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(49)
								tmp34 = decodeState->input->readByte();
							}
							HX_STACK_LINE(49)
							int tmp35 = decodeState->validBits;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(49)
							int tmp36 = (int(tmp34) << int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(49)
							int b = tmp36;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(49)
							tmp33 = (decodeState->acc + b);
						}
						HX_STACK_LINE(49)
						decodeState->acc = tmp33;
						HX_STACK_LINE(49)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(49)
					bool tmp33 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(49)
					bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(49)
					if ((tmp34)){
						HX_STACK_LINE(49)
						break;
					}
				}
				HX_STACK_LINE(49)
				bool tmp31 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(49)
				if ((tmp31)){
					HX_STACK_LINE(49)
					tmp27 = (int)0;
				}
				else{
					HX_STACK_LINE(49)
					int tmp32 = decodeState->acc;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(49)
					int tmp33 = (int)2;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(49)
					int tmp34 = (tmp33 - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(49)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(49)
					int tmp36 = (int(tmp32) & int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(49)
					int z = tmp36;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(49)
					int tmp37 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(49)
					decodeState->acc = tmp37;
					HX_STACK_LINE(49)
					hx::SubEq(decodeState->validBits,(int)1);
					HX_STACK_LINE(49)
					tmp27 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(49)
			int tmp29 = decodeState->acc;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(49)
			int tmp30 = (int)2;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(49)
			int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(49)
			int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(49)
			int tmp33 = (int(tmp29) & int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(49)
			int z = tmp33;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(49)
			int tmp34 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(49)
			decodeState->acc = tmp34;
			HX_STACK_LINE(49)
			hx::SubEq(decodeState->validBits,(int)1);
			HX_STACK_LINE(49)
			tmp27 = z;
		}
	}
	HX_STACK_LINE(49)
	int ordered = tmp27;		HX_STACK_VAR(ordered,"ordered");
	HX_STACK_LINE(50)
	bool tmp28 = (ordered != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(50)
	bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(50)
	if ((tmp28)){
		HX_STACK_LINE(50)
		tmp29 = false;
	}
	else{
		HX_STACK_LINE(50)
		bool tmp30 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(50)
		int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(50)
		if ((tmp30)){
			HX_STACK_LINE(50)
			tmp31 = (int)0;
		}
		else{
			HX_STACK_LINE(50)
			bool tmp32 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(50)
			if ((tmp32)){
				HX_STACK_LINE(50)
				bool tmp33 = false;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(50)
				if ((tmp33)){
					HX_STACK_LINE(50)
					int tmp34 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(50)
					int tmp35 = (int)-23;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(50)
					int tmp36 = decodeState->readBits(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(50)
					int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(50)
					tmp31 = (tmp34 + tmp37);
				}
				else{
					HX_STACK_LINE(50)
					bool tmp34 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(50)
					if ((tmp34)){
						HX_STACK_LINE(50)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(50)
					while((true)){
						HX_STACK_LINE(50)
						bool tmp35 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(50)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(50)
						if ((tmp35)){
							HX_STACK_LINE(50)
							bool tmp37 = decodeState->lastSeg;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(50)
							bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(50)
							bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(50)
							bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(50)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(50)
							if ((tmp41)){
								HX_STACK_LINE(50)
								int tmp42 = decodeState->next();		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(50)
								int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(50)
								int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(50)
								tmp36 = (tmp44 == (int)0);
							}
							else{
								HX_STACK_LINE(50)
								tmp36 = true;
							}
						}
						else{
							HX_STACK_LINE(50)
							tmp36 = false;
						}
						HX_STACK_LINE(50)
						if ((tmp36)){
							HX_STACK_LINE(50)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(50)
							break;
						}
						else{
							HX_STACK_LINE(50)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(50)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(50)
							{
								HX_STACK_LINE(50)
								int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(50)
								{
									HX_STACK_LINE(50)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(50)
									tmp38 = decodeState->input->readByte();
								}
								HX_STACK_LINE(50)
								int tmp39 = decodeState->validBits;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(50)
								int tmp40 = (int(tmp38) << int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(50)
								int b = tmp40;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(50)
								tmp37 = (decodeState->acc + b);
							}
							HX_STACK_LINE(50)
							decodeState->acc = tmp37;
							HX_STACK_LINE(50)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(50)
						bool tmp37 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(50)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(50)
						if ((tmp38)){
							HX_STACK_LINE(50)
							break;
						}
					}
					HX_STACK_LINE(50)
					bool tmp35 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(50)
					if ((tmp35)){
						HX_STACK_LINE(50)
						tmp31 = (int)0;
					}
					else{
						HX_STACK_LINE(50)
						int tmp36 = decodeState->acc;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(50)
						int tmp37 = (int)2;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(50)
						int tmp38 = (tmp37 - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(50)
						int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(50)
						int tmp40 = (int(tmp36) & int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(50)
						int z = tmp40;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(50)
						int tmp41 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(50)
						decodeState->acc = tmp41;
						HX_STACK_LINE(50)
						hx::SubEq(decodeState->validBits,(int)1);
						HX_STACK_LINE(50)
						tmp31 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(50)
				int tmp33 = decodeState->acc;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(50)
				int tmp34 = (int)2;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(50)
				int tmp35 = (tmp34 - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(50)
				int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(50)
				int tmp37 = (int(tmp33) & int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(50)
				int z = tmp37;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(50)
				int tmp38 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(50)
				decodeState->acc = tmp38;
				HX_STACK_LINE(50)
				hx::SubEq(decodeState->validBits,(int)1);
				HX_STACK_LINE(50)
				tmp31 = z;
			}
		}
		HX_STACK_LINE(50)
		tmp29 = (tmp31 != (int)0);
	}
	HX_STACK_LINE(50)
	c->sparse = tmp29;
	HX_STACK_LINE(52)
	Array< int > tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(52)
		Array< int > tmp31 = Array_obj< int >::__new();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(52)
		this1 = tmp31;
		HX_STACK_LINE(52)
		int tmp32 = c->entries;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(52)
		this1->__SetSizeExact(tmp32);
		HX_STACK_LINE(52)
		tmp30 = this1;
	}
	HX_STACK_LINE(52)
	Array< int > lengths = tmp30;		HX_STACK_VAR(lengths,"lengths");
	HX_STACK_LINE(53)
	bool tmp31 = c->sparse;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(53)
	bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(53)
	if ((tmp32)){
		HX_STACK_LINE(54)
		c->codewordLengths = lengths;
	}
	HX_STACK_LINE(57)
	int total = (int)0;		HX_STACK_VAR(total,"total");
	HX_STACK_LINE(59)
	bool tmp33 = (ordered != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(59)
	if ((tmp33)){
		HX_STACK_LINE(60)
		int currentEntry = (int)0;		HX_STACK_VAR(currentEntry,"currentEntry");
		HX_STACK_LINE(61)
		bool tmp34 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(61)
		int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(61)
		if ((tmp34)){
			HX_STACK_LINE(61)
			tmp35 = (int)0;
		}
		else{
			HX_STACK_LINE(61)
			bool tmp36 = (decodeState->validBits < (int)5);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(61)
			if ((tmp36)){
				HX_STACK_LINE(61)
				bool tmp37 = false;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(61)
				if ((tmp37)){
					HX_STACK_LINE(61)
					int tmp38 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(61)
					int tmp39 = (int)-19;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(61)
					int tmp40 = decodeState->readBits(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(61)
					int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(61)
					tmp35 = (tmp38 + tmp41);
				}
				else{
					HX_STACK_LINE(61)
					bool tmp38 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(61)
					if ((tmp38)){
						HX_STACK_LINE(61)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(61)
					while((true)){
						HX_STACK_LINE(61)
						bool tmp39 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(61)
						bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(61)
						if ((tmp39)){
							HX_STACK_LINE(61)
							bool tmp41 = decodeState->lastSeg;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(61)
							bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(61)
							bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(61)
							bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(61)
							bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(61)
							if ((tmp45)){
								HX_STACK_LINE(61)
								int tmp46 = decodeState->next();		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(61)
								int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(61)
								int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(61)
								tmp40 = (tmp48 == (int)0);
							}
							else{
								HX_STACK_LINE(61)
								tmp40 = true;
							}
						}
						else{
							HX_STACK_LINE(61)
							tmp40 = false;
						}
						HX_STACK_LINE(61)
						if ((tmp40)){
							HX_STACK_LINE(61)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(61)
							break;
						}
						else{
							HX_STACK_LINE(61)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(61)
							int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(61)
							{
								HX_STACK_LINE(61)
								int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(61)
								{
									HX_STACK_LINE(61)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(61)
									tmp42 = decodeState->input->readByte();
								}
								HX_STACK_LINE(61)
								int tmp43 = decodeState->validBits;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(61)
								int tmp44 = (int(tmp42) << int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(61)
								int b = tmp44;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(61)
								tmp41 = (decodeState->acc + b);
							}
							HX_STACK_LINE(61)
							decodeState->acc = tmp41;
							HX_STACK_LINE(61)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(61)
						bool tmp41 = (decodeState->validBits < (int)5);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(61)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(61)
						if ((tmp42)){
							HX_STACK_LINE(61)
							break;
						}
					}
					HX_STACK_LINE(61)
					bool tmp39 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(61)
					if ((tmp39)){
						HX_STACK_LINE(61)
						tmp35 = (int)0;
					}
					else{
						HX_STACK_LINE(61)
						int tmp40 = decodeState->acc;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(61)
						int tmp41 = (int)32;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(61)
						int tmp42 = (tmp41 - (int)1);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(61)
						int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(61)
						int tmp44 = (int(tmp40) & int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(61)
						int z = tmp44;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(61)
						int tmp45 = hx::UShr(decodeState->acc,(int)5);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(61)
						decodeState->acc = tmp45;
						HX_STACK_LINE(61)
						hx::SubEq(decodeState->validBits,(int)5);
						HX_STACK_LINE(61)
						tmp35 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(61)
				int tmp37 = decodeState->acc;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(61)
				int tmp38 = (int)32;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(61)
				int tmp39 = (tmp38 - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(61)
				int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(61)
				int tmp41 = (int(tmp37) & int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(61)
				int z = tmp41;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(61)
				int tmp42 = hx::UShr(decodeState->acc,(int)5);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(61)
				decodeState->acc = tmp42;
				HX_STACK_LINE(61)
				hx::SubEq(decodeState->validBits,(int)5);
				HX_STACK_LINE(61)
				tmp35 = z;
			}
		}
		HX_STACK_LINE(61)
		int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(61)
		int currentLength = tmp36;		HX_STACK_VAR(currentLength,"currentLength");
		HX_STACK_LINE(63)
		while((true)){
			HX_STACK_LINE(63)
			bool tmp37 = (currentEntry < c->entries);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(63)
			bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(63)
			if ((tmp38)){
				HX_STACK_LINE(63)
				break;
			}
			HX_STACK_LINE(64)
			int tmp39 = (c->entries - currentEntry);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(64)
			int limit = tmp39;		HX_STACK_VAR(limit,"limit");
			HX_STACK_LINE(65)
			int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					Array< int > tmp42 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(65)
					Array< int > log2_4 = tmp42;		HX_STACK_VAR(log2_4,"log2_4");
					HX_STACK_LINE(65)
					bool tmp43 = (limit < (int)16384);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(65)
					if ((tmp43)){
						HX_STACK_LINE(65)
						bool tmp44 = (limit < (int)16);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(65)
						if ((tmp44)){
							HX_STACK_LINE(65)
							tmp41 = log2_4->__get(limit);
						}
						else{
							HX_STACK_LINE(65)
							bool tmp45 = (limit < (int)512);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(65)
							if ((tmp45)){
								HX_STACK_LINE(65)
								Array< int > tmp46 = log2_4;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(65)
								int tmp47 = (int(limit) >> int((int)5));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(65)
								int tmp48 = tmp46->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(65)
								tmp41 = ((int)5 + tmp48);
							}
							else{
								HX_STACK_LINE(65)
								Array< int > tmp46 = log2_4;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(65)
								int tmp47 = (int(limit) >> int((int)10));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(65)
								int tmp48 = tmp46->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(65)
								tmp41 = ((int)10 + tmp48);
							}
						}
					}
					else{
						HX_STACK_LINE(65)
						bool tmp44 = (limit < (int)16777216);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(65)
						if ((tmp44)){
							HX_STACK_LINE(65)
							bool tmp45 = (limit < (int)524288);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(65)
							if ((tmp45)){
								HX_STACK_LINE(65)
								Array< int > tmp46 = log2_4;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(65)
								int tmp47 = (int(limit) >> int((int)15));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(65)
								int tmp48 = tmp46->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(65)
								tmp41 = ((int)15 + tmp48);
							}
							else{
								HX_STACK_LINE(65)
								Array< int > tmp46 = log2_4;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(65)
								int tmp47 = (int(limit) >> int((int)20));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(65)
								int tmp48 = tmp46->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(65)
								tmp41 = ((int)20 + tmp48);
							}
						}
						else{
							HX_STACK_LINE(65)
							bool tmp45 = (limit < (int)536870912);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(65)
							if ((tmp45)){
								HX_STACK_LINE(65)
								Array< int > tmp46 = log2_4;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(65)
								int tmp47 = (int(limit) >> int((int)25));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(65)
								int tmp48 = tmp46->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(65)
								tmp41 = ((int)25 + tmp48);
							}
							else{
								HX_STACK_LINE(65)
								bool tmp46 = (limit < (int)-2147483648);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(65)
								if ((tmp46)){
									HX_STACK_LINE(65)
									Array< int > tmp47 = log2_4;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(65)
									int tmp48 = (int(limit) >> int((int)30));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(65)
									int tmp49 = tmp47->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(65)
									tmp41 = ((int)30 + tmp49);
								}
								else{
									HX_STACK_LINE(65)
									tmp41 = (int)0;
								}
							}
						}
					}
				}
				HX_STACK_LINE(65)
				int n = tmp41;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(65)
				bool tmp42 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(65)
				if ((tmp42)){
					HX_STACK_LINE(65)
					tmp40 = (int)0;
				}
				else{
					HX_STACK_LINE(65)
					bool tmp43 = (decodeState->validBits < n);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(65)
					if ((tmp43)){
						HX_STACK_LINE(65)
						bool tmp44 = (n > (int)24);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(65)
						if ((tmp44)){
							HX_STACK_LINE(65)
							int tmp45 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(65)
							int tmp46 = (n - (int)24);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(65)
							int tmp47 = decodeState->readBits(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(65)
							int tmp48 = (int(tmp47) << int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(65)
							tmp40 = (tmp45 + tmp48);
						}
						else{
							HX_STACK_LINE(65)
							bool tmp45 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(65)
							if ((tmp45)){
								HX_STACK_LINE(65)
								decodeState->acc = (int)0;
							}
							HX_STACK_LINE(65)
							while((true)){
								HX_STACK_LINE(65)
								bool tmp46 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(65)
								bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(65)
								if ((tmp46)){
									HX_STACK_LINE(65)
									bool tmp48 = decodeState->lastSeg;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(65)
									bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(65)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(65)
									bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(65)
									bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(65)
									if ((tmp52)){
										HX_STACK_LINE(65)
										int tmp53 = decodeState->next();		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(65)
										int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(65)
										int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(65)
										tmp47 = (tmp55 == (int)0);
									}
									else{
										HX_STACK_LINE(65)
										tmp47 = true;
									}
								}
								else{
									HX_STACK_LINE(65)
									tmp47 = false;
								}
								HX_STACK_LINE(65)
								if ((tmp47)){
									HX_STACK_LINE(65)
									decodeState->validBits = (int)-1;
									HX_STACK_LINE(65)
									break;
								}
								else{
									HX_STACK_LINE(65)
									(decodeState->bytesInSeg)--;
									HX_STACK_LINE(65)
									int tmp48;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(65)
									{
										HX_STACK_LINE(65)
										int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(65)
										{
											HX_STACK_LINE(65)
											hx::AddEq(decodeState->inputPosition,(int)1);
											HX_STACK_LINE(65)
											tmp49 = decodeState->input->readByte();
										}
										HX_STACK_LINE(65)
										int tmp50 = decodeState->validBits;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(65)
										int tmp51 = (int(tmp49) << int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(65)
										int b = tmp51;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(65)
										tmp48 = (decodeState->acc + b);
									}
									HX_STACK_LINE(65)
									decodeState->acc = tmp48;
									HX_STACK_LINE(65)
									hx::AddEq(decodeState->validBits,(int)8);
								}
								HX_STACK_LINE(65)
								bool tmp48 = (decodeState->validBits < n);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(65)
								bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(65)
								if ((tmp49)){
									HX_STACK_LINE(65)
									break;
								}
							}
							HX_STACK_LINE(65)
							bool tmp46 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(65)
							if ((tmp46)){
								HX_STACK_LINE(65)
								tmp40 = (int)0;
							}
							else{
								HX_STACK_LINE(65)
								int tmp47 = decodeState->acc;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(65)
								int tmp48 = (int((int)1) << int(n));		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(65)
								int tmp49 = (tmp48 - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(65)
								int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(65)
								int tmp51 = (int(tmp47) & int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(65)
								int z = tmp51;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(65)
								int tmp52 = hx::UShr(decodeState->acc,n);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(65)
								decodeState->acc = tmp52;
								HX_STACK_LINE(65)
								hx::SubEq(decodeState->validBits,n);
								HX_STACK_LINE(65)
								tmp40 = z;
							}
						}
					}
					else{
						HX_STACK_LINE(65)
						int tmp44 = decodeState->acc;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(65)
						int tmp45 = (int((int)1) << int(n));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(65)
						int tmp46 = (tmp45 - (int)1);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(65)
						int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(65)
						int tmp48 = (int(tmp44) & int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(65)
						int z = tmp48;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(65)
						int tmp49 = hx::UShr(decodeState->acc,n);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(65)
						decodeState->acc = tmp49;
						HX_STACK_LINE(65)
						hx::SubEq(decodeState->validBits,n);
						HX_STACK_LINE(65)
						tmp40 = z;
					}
				}
			}
			HX_STACK_LINE(65)
			int n = tmp40;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(66)
			int tmp41 = (currentEntry + n);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(66)
			int tmp42 = c->entries;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(66)
			bool tmp43 = (tmp41 > tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(66)
			if ((tmp43)){
				HX_STACK_LINE(67)
				Dynamic tmp44 = hx::SourceInfo(HX_HCSTRING("Codebook.hx","\x88","\x14","\xe0","\x8e"),67,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Codebook","\xa6","\x42","\x7b","\xee"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(67)
				::kha::audio2::ogg::vorbis::data::ReaderError tmp45 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,HX_HCSTRING("codebook entrys","\xcb","\x3a","\x30","\x82"),tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(67)
				HX_STACK_DO_THROW(tmp45);
			}
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(69)
				while((true)){
					HX_STACK_LINE(69)
					bool tmp44 = (_g < n);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(69)
					bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(69)
					if ((tmp45)){
						HX_STACK_LINE(69)
						break;
					}
					HX_STACK_LINE(69)
					int tmp46 = (_g)++;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(69)
					int i = tmp46;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(70)
					int tmp47 = (currentEntry + i);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(70)
					int tmp48 = currentLength;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(70)
					int tmp49 = lengths->__unsafe_set(tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(70)
					tmp49;
				}
			}
			HX_STACK_LINE(72)
			hx::AddEq(currentEntry,n);
			HX_STACK_LINE(73)
			(currentLength)++;
		}
	}
	else{
		HX_STACK_LINE(76)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		int _g = c->entries;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			bool tmp34 = (_g1 < _g);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(76)
			bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(76)
			if ((tmp35)){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(76)
			int tmp36 = (_g1)++;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(76)
			int j = tmp36;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(77)
			bool tmp37 = c->sparse;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(77)
			int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(77)
			if ((tmp37)){
				HX_STACK_LINE(77)
				bool tmp39 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(77)
				if ((tmp39)){
					HX_STACK_LINE(77)
					tmp38 = (int)0;
				}
				else{
					HX_STACK_LINE(77)
					bool tmp40 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(77)
					if ((tmp40)){
						HX_STACK_LINE(77)
						bool tmp41 = false;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(77)
						if ((tmp41)){
							HX_STACK_LINE(77)
							int tmp42 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(77)
							int tmp43 = (int)-23;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(77)
							int tmp44 = decodeState->readBits(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(77)
							int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(77)
							tmp38 = (tmp42 + tmp45);
						}
						else{
							HX_STACK_LINE(77)
							bool tmp42 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(77)
							if ((tmp42)){
								HX_STACK_LINE(77)
								decodeState->acc = (int)0;
							}
							HX_STACK_LINE(77)
							while((true)){
								HX_STACK_LINE(77)
								bool tmp43 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(77)
								bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(77)
								if ((tmp43)){
									HX_STACK_LINE(77)
									bool tmp45 = decodeState->lastSeg;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(77)
									bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(77)
									bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(77)
									bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(77)
									bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(77)
									if ((tmp49)){
										HX_STACK_LINE(77)
										int tmp50 = decodeState->next();		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(77)
										int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(77)
										int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(77)
										tmp44 = (tmp52 == (int)0);
									}
									else{
										HX_STACK_LINE(77)
										tmp44 = true;
									}
								}
								else{
									HX_STACK_LINE(77)
									tmp44 = false;
								}
								HX_STACK_LINE(77)
								if ((tmp44)){
									HX_STACK_LINE(77)
									decodeState->validBits = (int)-1;
									HX_STACK_LINE(77)
									break;
								}
								else{
									HX_STACK_LINE(77)
									(decodeState->bytesInSeg)--;
									HX_STACK_LINE(77)
									int tmp45;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(77)
									{
										HX_STACK_LINE(77)
										int tmp46;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(77)
										{
											HX_STACK_LINE(77)
											hx::AddEq(decodeState->inputPosition,(int)1);
											HX_STACK_LINE(77)
											tmp46 = decodeState->input->readByte();
										}
										HX_STACK_LINE(77)
										int tmp47 = decodeState->validBits;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(77)
										int tmp48 = (int(tmp46) << int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(77)
										int b = tmp48;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(77)
										tmp45 = (decodeState->acc + b);
									}
									HX_STACK_LINE(77)
									decodeState->acc = tmp45;
									HX_STACK_LINE(77)
									hx::AddEq(decodeState->validBits,(int)8);
								}
								HX_STACK_LINE(77)
								bool tmp45 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(77)
								bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(77)
								if ((tmp46)){
									HX_STACK_LINE(77)
									break;
								}
							}
							HX_STACK_LINE(77)
							bool tmp43 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(77)
							if ((tmp43)){
								HX_STACK_LINE(77)
								tmp38 = (int)0;
							}
							else{
								HX_STACK_LINE(77)
								int tmp44 = decodeState->acc;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(77)
								int tmp45 = (int)2;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(77)
								int tmp46 = (tmp45 - (int)1);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(77)
								int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(77)
								int tmp48 = (int(tmp44) & int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(77)
								int z = tmp48;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(77)
								int tmp49 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(77)
								decodeState->acc = tmp49;
								HX_STACK_LINE(77)
								hx::SubEq(decodeState->validBits,(int)1);
								HX_STACK_LINE(77)
								tmp38 = z;
							}
						}
					}
					else{
						HX_STACK_LINE(77)
						int tmp41 = decodeState->acc;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(77)
						int tmp42 = (int)2;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(77)
						int tmp43 = (tmp42 - (int)1);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(77)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(77)
						int tmp45 = (int(tmp41) & int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(77)
						int z = tmp45;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(77)
						int tmp46 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(77)
						decodeState->acc = tmp46;
						HX_STACK_LINE(77)
						hx::SubEq(decodeState->validBits,(int)1);
						HX_STACK_LINE(77)
						tmp38 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(77)
				tmp38 = (int)1;
			}
			HX_STACK_LINE(77)
			int present = tmp38;		HX_STACK_VAR(present,"present");
			HX_STACK_LINE(78)
			bool tmp39 = (present != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(78)
			if ((tmp39)){
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					bool tmp40 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(79)
					int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(79)
					if ((tmp40)){
						HX_STACK_LINE(79)
						tmp41 = (int)0;
					}
					else{
						HX_STACK_LINE(79)
						bool tmp42 = (decodeState->validBits < (int)5);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(79)
						if ((tmp42)){
							HX_STACK_LINE(79)
							bool tmp43 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(79)
							if ((tmp43)){
								HX_STACK_LINE(79)
								decodeState->acc = (int)0;
							}
							HX_STACK_LINE(79)
							while((true)){
								HX_STACK_LINE(79)
								bool tmp44 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(79)
								bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(79)
								if ((tmp44)){
									HX_STACK_LINE(79)
									bool tmp46 = decodeState->lastSeg;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(79)
									bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(79)
									bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(79)
									bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(79)
									bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(79)
									if ((tmp50)){
										HX_STACK_LINE(79)
										int tmp51 = decodeState->next();		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(79)
										int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(79)
										int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(79)
										tmp45 = (tmp53 == (int)0);
									}
									else{
										HX_STACK_LINE(79)
										tmp45 = true;
									}
								}
								else{
									HX_STACK_LINE(79)
									tmp45 = false;
								}
								HX_STACK_LINE(79)
								if ((tmp45)){
									HX_STACK_LINE(79)
									decodeState->validBits = (int)-1;
									HX_STACK_LINE(79)
									break;
								}
								else{
									HX_STACK_LINE(79)
									(decodeState->bytesInSeg)--;
									HX_STACK_LINE(79)
									int tmp46;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(79)
									{
										HX_STACK_LINE(79)
										int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(79)
										{
											HX_STACK_LINE(79)
											hx::AddEq(decodeState->inputPosition,(int)1);
											HX_STACK_LINE(79)
											tmp47 = decodeState->input->readByte();
										}
										HX_STACK_LINE(79)
										int tmp48 = decodeState->validBits;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(79)
										int tmp49 = (int(tmp47) << int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(79)
										int b = tmp49;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(79)
										tmp46 = (decodeState->acc + b);
									}
									HX_STACK_LINE(79)
									decodeState->acc = tmp46;
									HX_STACK_LINE(79)
									hx::AddEq(decodeState->validBits,(int)8);
								}
								HX_STACK_LINE(79)
								bool tmp46 = (decodeState->validBits < (int)5);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(79)
								bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(79)
								if ((tmp47)){
									HX_STACK_LINE(79)
									break;
								}
							}
							HX_STACK_LINE(79)
							bool tmp44 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(79)
							if ((tmp44)){
								HX_STACK_LINE(79)
								tmp41 = (int)0;
							}
							else{
								HX_STACK_LINE(79)
								int tmp45 = (int(decodeState->acc) & int((int)31));		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(79)
								int z = tmp45;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(79)
								int tmp46 = hx::UShr(decodeState->acc,(int)5);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(79)
								decodeState->acc = tmp46;
								HX_STACK_LINE(79)
								hx::SubEq(decodeState->validBits,(int)5);
								HX_STACK_LINE(79)
								tmp41 = z;
							}
						}
						else{
							HX_STACK_LINE(79)
							int tmp43 = (int(decodeState->acc) & int((int)31));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(79)
							int z = tmp43;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(79)
							int tmp44 = hx::UShr(decodeState->acc,(int)5);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(79)
							decodeState->acc = tmp44;
							HX_STACK_LINE(79)
							hx::SubEq(decodeState->validBits,(int)5);
							HX_STACK_LINE(79)
							tmp41 = z;
						}
					}
					HX_STACK_LINE(79)
					int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(79)
					int val = tmp42;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(79)
					int tmp43 = j;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(79)
					int tmp44 = val;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(79)
					int tmp45 = lengths->__unsafe_set(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(79)
					tmp45;
				}
				HX_STACK_LINE(80)
				(total)++;
			}
			else{
				HX_STACK_LINE(82)
				int tmp40 = j;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(82)
				int tmp41 = lengths->__unsafe_set(tmp40,(int)255);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(82)
				tmp41;
			}
		}
	}
	HX_STACK_LINE(87)
	bool tmp34 = c->sparse;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(87)
	bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(87)
	if ((tmp34)){
		HX_STACK_LINE(87)
		int tmp36 = total;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(87)
		int tmp37 = (int(c->entries) >> int((int)2));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(87)
		int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(87)
		tmp35 = (tmp36 >= tmp38);
	}
	else{
		HX_STACK_LINE(87)
		tmp35 = false;
	}
	HX_STACK_LINE(87)
	if ((tmp35)){
		HX_STACK_LINE(88)
		c->codewordLengths = lengths;
		HX_STACK_LINE(89)
		c->sparse = false;
	}
	HX_STACK_LINE(92)
	bool tmp36 = c->sparse;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(92)
	int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(92)
	if ((tmp36)){
		HX_STACK_LINE(93)
		tmp37 = total;
	}
	else{
		HX_STACK_LINE(95)
		int sortedCount = (int)0;		HX_STACK_VAR(sortedCount,"sortedCount");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(96)
			int _g = c->entries;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			while((true)){
				HX_STACK_LINE(96)
				bool tmp38 = (_g1 < _g);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(96)
				bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(96)
				if ((tmp39)){
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(96)
				int tmp40 = (_g1)++;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(96)
				int j = tmp40;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(97)
				int tmp41 = j;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(97)
				int tmp42 = lengths->__unsafe_get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(97)
				int l = tmp42;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(98)
				bool tmp43 = (l > (int)10);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(98)
				bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(98)
				if ((tmp43)){
					HX_STACK_LINE(98)
					tmp44 = (l != (int)255);
				}
				else{
					HX_STACK_LINE(98)
					tmp44 = false;
				}
				HX_STACK_LINE(98)
				if ((tmp44)){
					HX_STACK_LINE(99)
					++(sortedCount);
				}
			}
		}
		HX_STACK_LINE(102)
		tmp37 = sortedCount;
	}
	HX_STACK_LINE(92)
	c->sortedEntries = tmp37;
	HX_STACK_LINE(105)
	Array< int > values = null();		HX_STACK_VAR(values,"values");
	HX_STACK_LINE(107)
	bool tmp38 = c->sparse;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(107)
	bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(107)
	if ((tmp39)){
		HX_STACK_LINE(108)
		Array< int > tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(108)
			Array< int > tmp41 = Array_obj< int >::__new();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(108)
			this1 = tmp41;
			HX_STACK_LINE(108)
			int tmp42 = c->entries;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(108)
			this1->__SetSizeExact(tmp42);
			HX_STACK_LINE(108)
			tmp40 = this1;
		}
		HX_STACK_LINE(108)
		c->codewords = tmp40;
	}
	else{
		HX_STACK_LINE(110)
		bool tmp40 = (c->sortedEntries != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(110)
		if ((tmp40)){
			HX_STACK_LINE(111)
			Array< int > tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(111)
				Array< int > tmp42 = Array_obj< int >::__new();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(111)
				this1 = tmp42;
				HX_STACK_LINE(111)
				int tmp43 = c->sortedEntries;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(111)
				this1->__SetSizeExact(tmp43);
				HX_STACK_LINE(111)
				tmp41 = this1;
			}
			HX_STACK_LINE(111)
			c->codewordLengths = tmp41;
			HX_STACK_LINE(112)
			Array< int > tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(112)
				Array< int > tmp43 = Array_obj< int >::__new();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(112)
				this1 = tmp43;
				HX_STACK_LINE(112)
				int tmp44 = c->entries;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(112)
				this1->__SetSizeExact(tmp44);
				HX_STACK_LINE(112)
				tmp42 = this1;
			}
			HX_STACK_LINE(112)
			c->codewords = tmp42;
			HX_STACK_LINE(113)
			Array< int > tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(113)
				Array< int > tmp44 = Array_obj< int >::__new();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(113)
				this1 = tmp44;
				HX_STACK_LINE(113)
				int tmp45 = c->entries;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(113)
				this1->__SetSizeExact(tmp45);
				HX_STACK_LINE(113)
				tmp43 = this1;
			}
			HX_STACK_LINE(113)
			values = tmp43;
		}
		HX_STACK_LINE(116)
		int tmp41 = c->entries;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(116)
		int tmp42 = (int)64;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(116)
		int tmp43 = c->sortedEntries;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(116)
		int tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(116)
		int tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(116)
		int size = tmp45;		HX_STACK_VAR(size,"size");
	}
	HX_STACK_LINE(119)
	Array< int > tmp40 = lengths;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(119)
	int tmp41 = c->entries;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(119)
	Array< int > tmp42 = values;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(119)
	bool tmp43 = c->computeCodewords(tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(119)
	bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(119)
	if ((tmp44)){
		HX_STACK_LINE(120)
		Dynamic tmp45 = hx::SourceInfo(HX_HCSTRING("Codebook.hx","\x88","\x14","\xe0","\x8e"),120,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Codebook","\xa6","\x42","\x7b","\xee"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(120)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp46 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,HX_HCSTRING("compute codewords","\x33","\x59","\xf7","\xf8"),tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(120)
		HX_STACK_DO_THROW(tmp46);
	}
	HX_STACK_LINE(123)
	bool tmp45 = (c->sortedEntries != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(123)
	if ((tmp45)){
		HX_STACK_LINE(125)
		Array< int > tmp46 = Array_obj< int >::__new();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(125)
		c->sortedCodewords = tmp46;
		HX_STACK_LINE(129)
		Array< int > tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(129)
			Array< int > tmp48 = Array_obj< int >::__new();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(129)
			this1 = tmp48;
			HX_STACK_LINE(129)
			int tmp49 = c->sortedEntries;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(129)
			this1->__SetSizeExact(tmp49);
			HX_STACK_LINE(129)
			tmp47 = this1;
		}
		HX_STACK_LINE(129)
		c->sortedValues = tmp47;
		HX_STACK_LINE(130)
		Array< int > tmp48 = lengths;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(130)
		Array< int > tmp49 = values;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(130)
		c->computeSortedHuffman(tmp48,tmp49);
	}
	HX_STACK_LINE(133)
	bool tmp46 = c->sparse;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(133)
	if ((tmp46)){
		HX_STACK_LINE(134)
		values = null();
		HX_STACK_LINE(135)
		c->codewords = null();
		HX_STACK_LINE(136)
		lengths = null();
	}
	HX_STACK_LINE(139)
	c->computeAcceleratedHuffman();
	HX_STACK_LINE(141)
	bool tmp47 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(141)
	int tmp48;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(141)
	if ((tmp47)){
		HX_STACK_LINE(141)
		tmp48 = (int)0;
	}
	else{
		HX_STACK_LINE(141)
		bool tmp49 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(141)
		if ((tmp49)){
			HX_STACK_LINE(141)
			bool tmp50 = false;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(141)
			if ((tmp50)){
				HX_STACK_LINE(141)
				int tmp51 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(141)
				int tmp52 = (int)-20;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(141)
				int tmp53 = decodeState->readBits(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(141)
				int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(141)
				tmp48 = (tmp51 + tmp54);
			}
			else{
				HX_STACK_LINE(141)
				bool tmp51 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(141)
				if ((tmp51)){
					HX_STACK_LINE(141)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(141)
				while((true)){
					HX_STACK_LINE(141)
					bool tmp52 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(141)
					bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(141)
					if ((tmp52)){
						HX_STACK_LINE(141)
						bool tmp54 = decodeState->lastSeg;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(141)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(141)
						bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(141)
						bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(141)
						bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(141)
						if ((tmp58)){
							HX_STACK_LINE(141)
							int tmp59 = decodeState->next();		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(141)
							int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(141)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(141)
							tmp53 = (tmp61 == (int)0);
						}
						else{
							HX_STACK_LINE(141)
							tmp53 = true;
						}
					}
					else{
						HX_STACK_LINE(141)
						tmp53 = false;
					}
					HX_STACK_LINE(141)
					if ((tmp53)){
						HX_STACK_LINE(141)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(141)
						break;
					}
					else{
						HX_STACK_LINE(141)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(141)
						int tmp54;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(141)
						{
							HX_STACK_LINE(141)
							int tmp55;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(141)
							{
								HX_STACK_LINE(141)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(141)
								tmp55 = decodeState->input->readByte();
							}
							HX_STACK_LINE(141)
							int tmp56 = decodeState->validBits;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(141)
							int tmp57 = (int(tmp55) << int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(141)
							int b = tmp57;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(141)
							tmp54 = (decodeState->acc + b);
						}
						HX_STACK_LINE(141)
						decodeState->acc = tmp54;
						HX_STACK_LINE(141)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(141)
					bool tmp54 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(141)
					bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(141)
					if ((tmp55)){
						HX_STACK_LINE(141)
						break;
					}
				}
				HX_STACK_LINE(141)
				bool tmp52 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(141)
				if ((tmp52)){
					HX_STACK_LINE(141)
					tmp48 = (int)0;
				}
				else{
					HX_STACK_LINE(141)
					int tmp53 = decodeState->acc;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(141)
					int tmp54 = (int)16;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(141)
					int tmp55 = (tmp54 - (int)1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(141)
					int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(141)
					int tmp57 = (int(tmp53) & int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(141)
					int z = tmp57;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(141)
					int tmp58 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(141)
					decodeState->acc = tmp58;
					HX_STACK_LINE(141)
					hx::SubEq(decodeState->validBits,(int)4);
					HX_STACK_LINE(141)
					tmp48 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(141)
			int tmp50 = decodeState->acc;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(141)
			int tmp51 = (int)16;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(141)
			int tmp52 = (tmp51 - (int)1);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(141)
			int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(141)
			int tmp54 = (int(tmp50) & int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(141)
			int z = tmp54;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(141)
			int tmp55 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(141)
			decodeState->acc = tmp55;
			HX_STACK_LINE(141)
			hx::SubEq(decodeState->validBits,(int)4);
			HX_STACK_LINE(141)
			tmp48 = z;
		}
	}
	HX_STACK_LINE(141)
	c->lookupType = tmp48;
	HX_STACK_LINE(142)
	bool tmp49 = (c->lookupType > (int)2);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(142)
	if ((tmp49)){
		HX_STACK_LINE(143)
		Dynamic tmp50 = hx::SourceInfo(HX_HCSTRING("Codebook.hx","\x88","\x14","\xe0","\x8e"),143,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Codebook","\xa6","\x42","\x7b","\xee"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(143)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp51 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,HX_HCSTRING("codebook lookup type","\xd6","\x92","\xea","\xe4"),tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(143)
		HX_STACK_DO_THROW(tmp51);
	}
	HX_STACK_LINE(146)
	bool tmp50 = (c->lookupType > (int)0);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(146)
	if ((tmp50)){
		HX_STACK_LINE(147)
		Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			bool tmp52 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(147)
			int tmp53;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(147)
			if ((tmp52)){
				HX_STACK_LINE(147)
				tmp53 = (int)0;
			}
			else{
				HX_STACK_LINE(147)
				bool tmp54 = (decodeState->validBits < (int)32);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(147)
				if ((tmp54)){
					HX_STACK_LINE(147)
					int tmp55 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(147)
					int tmp56 = decodeState->readBits((int)8);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(147)
					int tmp57 = (int(tmp56) << int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(147)
					tmp53 = (tmp55 + tmp57);
				}
				else{
					HX_STACK_LINE(147)
					int tmp55 = (int(decodeState->acc) & int((int)-1));		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(147)
					int z = tmp55;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(147)
					int tmp56 = hx::UShr(decodeState->acc,(int)32);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(147)
					decodeState->acc = tmp56;
					HX_STACK_LINE(147)
					hx::SubEq(decodeState->validBits,(int)32);
					HX_STACK_LINE(147)
					tmp53 = z;
				}
			}
			HX_STACK_LINE(147)
			int x2 = tmp53;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(147)
			Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				int tmp55 = (int(x2) & int((int)2097151));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(147)
				int _int = tmp55;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(147)
				bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(147)
				if ((tmp56)){
					HX_STACK_LINE(147)
					tmp54 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(147)
					tmp54 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(147)
			Float mantissa = tmp54;		HX_STACK_VAR(mantissa,"mantissa");
			HX_STACK_LINE(147)
			int tmp55 = (int(x2) & int((int)-2147483648));		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(147)
			int sign = tmp55;		HX_STACK_VAR(sign,"sign");
			HX_STACK_LINE(147)
			int tmp56 = (int(x2) & int((int)2145386496));		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(147)
			int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(147)
			int tmp58 = hx::UShr(tmp57,(int)21);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(147)
			int exp = tmp58;		HX_STACK_VAR(exp,"exp");
			HX_STACK_LINE(147)
			bool tmp59 = (sign != (int)0);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(147)
			Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(147)
			if ((tmp59)){
				HX_STACK_LINE(147)
				Float tmp61 = mantissa;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(147)
				tmp60 = -(tmp61);
			}
			else{
				HX_STACK_LINE(147)
				tmp60 = mantissa;
			}
			HX_STACK_LINE(147)
			Float res = tmp60;		HX_STACK_VAR(res,"res");
			HX_STACK_LINE(147)
			Float tmp61 = res;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(147)
			int tmp62 = (exp - (int)788);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(147)
			Float tmp63 = ::Math_obj::pow((int)2,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(147)
			tmp51 = (tmp61 * tmp63);
		}
		HX_STACK_LINE(147)
		c->minimumValue = tmp51;
		HX_STACK_LINE(148)
		Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			bool tmp53 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(148)
			int tmp54;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(148)
			if ((tmp53)){
				HX_STACK_LINE(148)
				tmp54 = (int)0;
			}
			else{
				HX_STACK_LINE(148)
				bool tmp55 = (decodeState->validBits < (int)32);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(148)
				if ((tmp55)){
					HX_STACK_LINE(148)
					int tmp56 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(148)
					int tmp57 = decodeState->readBits((int)8);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(148)
					int tmp58 = (int(tmp57) << int((int)24));		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(148)
					tmp54 = (tmp56 + tmp58);
				}
				else{
					HX_STACK_LINE(148)
					int tmp56 = (int(decodeState->acc) & int((int)-1));		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(148)
					int z = tmp56;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(148)
					int tmp57 = hx::UShr(decodeState->acc,(int)32);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(148)
					decodeState->acc = tmp57;
					HX_STACK_LINE(148)
					hx::SubEq(decodeState->validBits,(int)32);
					HX_STACK_LINE(148)
					tmp54 = z;
				}
			}
			HX_STACK_LINE(148)
			int x2 = tmp54;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(148)
			Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int tmp56 = (int(x2) & int((int)2097151));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(148)
				int _int = tmp56;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(148)
				bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(148)
				if ((tmp57)){
					HX_STACK_LINE(148)
					tmp55 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(148)
					tmp55 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(148)
			Float mantissa = tmp55;		HX_STACK_VAR(mantissa,"mantissa");
			HX_STACK_LINE(148)
			int tmp56 = (int(x2) & int((int)-2147483648));		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(148)
			int sign = tmp56;		HX_STACK_VAR(sign,"sign");
			HX_STACK_LINE(148)
			int tmp57 = (int(x2) & int((int)2145386496));		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(148)
			int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(148)
			int tmp59 = hx::UShr(tmp58,(int)21);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(148)
			int exp = tmp59;		HX_STACK_VAR(exp,"exp");
			HX_STACK_LINE(148)
			bool tmp60 = (sign != (int)0);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(148)
			Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(148)
			if ((tmp60)){
				HX_STACK_LINE(148)
				Float tmp62 = mantissa;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(148)
				tmp61 = -(tmp62);
			}
			else{
				HX_STACK_LINE(148)
				tmp61 = mantissa;
			}
			HX_STACK_LINE(148)
			Float res = tmp61;		HX_STACK_VAR(res,"res");
			HX_STACK_LINE(148)
			Float tmp62 = res;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(148)
			int tmp63 = (exp - (int)788);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(148)
			Float tmp64 = ::Math_obj::pow((int)2,tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(148)
			tmp52 = (tmp62 * tmp64);
		}
		HX_STACK_LINE(148)
		c->deltaValue = tmp52;
		HX_STACK_LINE(149)
		bool tmp53 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(149)
		int tmp54;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(149)
		if ((tmp53)){
			HX_STACK_LINE(149)
			tmp54 = (int)0;
		}
		else{
			HX_STACK_LINE(149)
			bool tmp55 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(149)
			if ((tmp55)){
				HX_STACK_LINE(149)
				bool tmp56 = false;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(149)
				if ((tmp56)){
					HX_STACK_LINE(149)
					int tmp57 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(149)
					int tmp58 = (int)-20;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(149)
					int tmp59 = decodeState->readBits(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(149)
					int tmp60 = (int(tmp59) << int((int)24));		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(149)
					tmp54 = (tmp57 + tmp60);
				}
				else{
					HX_STACK_LINE(149)
					bool tmp57 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(149)
					if ((tmp57)){
						HX_STACK_LINE(149)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(149)
					while((true)){
						HX_STACK_LINE(149)
						bool tmp58 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(149)
						bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(149)
						if ((tmp58)){
							HX_STACK_LINE(149)
							bool tmp60 = decodeState->lastSeg;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(149)
							bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(149)
							bool tmp62 = !(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(149)
							bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(149)
							bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(149)
							if ((tmp64)){
								HX_STACK_LINE(149)
								int tmp65 = decodeState->next();		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(149)
								int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(149)
								int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(149)
								tmp59 = (tmp67 == (int)0);
							}
							else{
								HX_STACK_LINE(149)
								tmp59 = true;
							}
						}
						else{
							HX_STACK_LINE(149)
							tmp59 = false;
						}
						HX_STACK_LINE(149)
						if ((tmp59)){
							HX_STACK_LINE(149)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(149)
							break;
						}
						else{
							HX_STACK_LINE(149)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(149)
							int tmp60;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(149)
							{
								HX_STACK_LINE(149)
								int tmp61;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(149)
								{
									HX_STACK_LINE(149)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(149)
									tmp61 = decodeState->input->readByte();
								}
								HX_STACK_LINE(149)
								int tmp62 = decodeState->validBits;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(149)
								int tmp63 = (int(tmp61) << int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(149)
								int b = tmp63;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(149)
								tmp60 = (decodeState->acc + b);
							}
							HX_STACK_LINE(149)
							decodeState->acc = tmp60;
							HX_STACK_LINE(149)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(149)
						bool tmp60 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(149)
						bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(149)
						if ((tmp61)){
							HX_STACK_LINE(149)
							break;
						}
					}
					HX_STACK_LINE(149)
					bool tmp58 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(149)
					if ((tmp58)){
						HX_STACK_LINE(149)
						tmp54 = (int)0;
					}
					else{
						HX_STACK_LINE(149)
						int tmp59 = decodeState->acc;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(149)
						int tmp60 = (int)16;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(149)
						int tmp61 = (tmp60 - (int)1);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(149)
						int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(149)
						int tmp63 = (int(tmp59) & int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(149)
						int z = tmp63;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(149)
						int tmp64 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(149)
						decodeState->acc = tmp64;
						HX_STACK_LINE(149)
						hx::SubEq(decodeState->validBits,(int)4);
						HX_STACK_LINE(149)
						tmp54 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(149)
				int tmp56 = decodeState->acc;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(149)
				int tmp57 = (int)16;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(149)
				int tmp58 = (tmp57 - (int)1);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(149)
				int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(149)
				int tmp60 = (int(tmp56) & int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(149)
				int z = tmp60;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(149)
				int tmp61 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(149)
				decodeState->acc = tmp61;
				HX_STACK_LINE(149)
				hx::SubEq(decodeState->validBits,(int)4);
				HX_STACK_LINE(149)
				tmp54 = z;
			}
		}
		HX_STACK_LINE(149)
		int tmp55 = (tmp54 + (int)1);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(149)
		c->valueBits = tmp55;
		HX_STACK_LINE(150)
		bool tmp56 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(150)
		int tmp57;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(150)
		if ((tmp56)){
			HX_STACK_LINE(150)
			tmp57 = (int)0;
		}
		else{
			HX_STACK_LINE(150)
			bool tmp58 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(150)
			if ((tmp58)){
				HX_STACK_LINE(150)
				bool tmp59 = false;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(150)
				if ((tmp59)){
					HX_STACK_LINE(150)
					int tmp60 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(150)
					int tmp61 = (int)-23;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(150)
					int tmp62 = decodeState->readBits(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(150)
					int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(150)
					tmp57 = (tmp60 + tmp63);
				}
				else{
					HX_STACK_LINE(150)
					bool tmp60 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(150)
					if ((tmp60)){
						HX_STACK_LINE(150)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(150)
					while((true)){
						HX_STACK_LINE(150)
						bool tmp61 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(150)
						bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(150)
						if ((tmp61)){
							HX_STACK_LINE(150)
							bool tmp63 = decodeState->lastSeg;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(150)
							bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(150)
							bool tmp65 = !(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(150)
							bool tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(150)
							bool tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(150)
							if ((tmp67)){
								HX_STACK_LINE(150)
								int tmp68 = decodeState->next();		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(150)
								int tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(150)
								int tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(150)
								tmp62 = (tmp70 == (int)0);
							}
							else{
								HX_STACK_LINE(150)
								tmp62 = true;
							}
						}
						else{
							HX_STACK_LINE(150)
							tmp62 = false;
						}
						HX_STACK_LINE(150)
						if ((tmp62)){
							HX_STACK_LINE(150)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(150)
							break;
						}
						else{
							HX_STACK_LINE(150)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(150)
							int tmp63;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(150)
							{
								HX_STACK_LINE(150)
								int tmp64;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(150)
								{
									HX_STACK_LINE(150)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(150)
									tmp64 = decodeState->input->readByte();
								}
								HX_STACK_LINE(150)
								int tmp65 = decodeState->validBits;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(150)
								int tmp66 = (int(tmp64) << int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(150)
								int b = tmp66;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(150)
								tmp63 = (decodeState->acc + b);
							}
							HX_STACK_LINE(150)
							decodeState->acc = tmp63;
							HX_STACK_LINE(150)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(150)
						bool tmp63 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(150)
						bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(150)
						if ((tmp64)){
							HX_STACK_LINE(150)
							break;
						}
					}
					HX_STACK_LINE(150)
					bool tmp61 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(150)
					if ((tmp61)){
						HX_STACK_LINE(150)
						tmp57 = (int)0;
					}
					else{
						HX_STACK_LINE(150)
						int tmp62 = decodeState->acc;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(150)
						int tmp63 = (int)2;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(150)
						int tmp64 = (tmp63 - (int)1);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(150)
						int tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(150)
						int tmp66 = (int(tmp62) & int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(150)
						int z = tmp66;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(150)
						int tmp67 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(150)
						decodeState->acc = tmp67;
						HX_STACK_LINE(150)
						hx::SubEq(decodeState->validBits,(int)1);
						HX_STACK_LINE(150)
						tmp57 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(150)
				int tmp59 = decodeState->acc;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(150)
				int tmp60 = (int)2;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(150)
				int tmp61 = (tmp60 - (int)1);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(150)
				int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(150)
				int tmp63 = (int(tmp59) & int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(150)
				int z = tmp63;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(150)
				int tmp64 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(150)
				decodeState->acc = tmp64;
				HX_STACK_LINE(150)
				hx::SubEq(decodeState->validBits,(int)1);
				HX_STACK_LINE(150)
				tmp57 = z;
			}
		}
		HX_STACK_LINE(150)
		bool tmp58 = (tmp57 != (int)0);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(150)
		c->sequenceP = tmp58;
		HX_STACK_LINE(152)
		bool tmp59 = (c->lookupType == (int)1);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(152)
		if ((tmp59)){
			HX_STACK_LINE(153)
			int tmp60 = c->entries;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(153)
			int tmp61 = c->dimensions;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(153)
			int tmp62 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::lookup1Values(tmp60,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(153)
			c->lookupValues = tmp62;
		}
		else{
			HX_STACK_LINE(155)
			int tmp60 = (c->entries * c->dimensions);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(155)
			c->lookupValues = tmp60;
		}
		HX_STACK_LINE(157)
		Array< int > tmp60;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(157)
			Array< int > tmp61 = Array_obj< int >::__new();		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(157)
			this1 = tmp61;
			HX_STACK_LINE(157)
			int tmp62 = c->lookupValues;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(157)
			this1->__SetSizeExact(tmp62);
			HX_STACK_LINE(157)
			tmp60 = this1;
		}
		HX_STACK_LINE(157)
		Array< int > mults = tmp60;		HX_STACK_VAR(mults,"mults");
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(158)
			int _g = c->lookupValues;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			while((true)){
				HX_STACK_LINE(158)
				bool tmp61 = (_g1 < _g);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(158)
				bool tmp62 = !(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(158)
				if ((tmp62)){
					HX_STACK_LINE(158)
					break;
				}
				HX_STACK_LINE(158)
				int tmp63 = (_g1)++;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(158)
				int j = tmp63;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(159)
				int tmp64;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(159)
				{
					HX_STACK_LINE(159)
					int n = c->valueBits;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(159)
					bool tmp65 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(159)
					if ((tmp65)){
						HX_STACK_LINE(159)
						tmp64 = (int)0;
					}
					else{
						HX_STACK_LINE(159)
						bool tmp66 = (decodeState->validBits < n);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(159)
						if ((tmp66)){
							HX_STACK_LINE(159)
							bool tmp67 = (n > (int)24);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(159)
							if ((tmp67)){
								HX_STACK_LINE(159)
								int tmp68 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(159)
								int tmp69 = (n - (int)24);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(159)
								int tmp70 = decodeState->readBits(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(159)
								int tmp71 = (int(tmp70) << int((int)24));		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(159)
								tmp64 = (tmp68 + tmp71);
							}
							else{
								HX_STACK_LINE(159)
								bool tmp68 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(159)
								if ((tmp68)){
									HX_STACK_LINE(159)
									decodeState->acc = (int)0;
								}
								HX_STACK_LINE(159)
								while((true)){
									HX_STACK_LINE(159)
									bool tmp69 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(159)
									bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(159)
									if ((tmp69)){
										HX_STACK_LINE(159)
										bool tmp71 = decodeState->lastSeg;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(159)
										bool tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(159)
										bool tmp73 = !(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(159)
										bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(159)
										bool tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(159)
										if ((tmp75)){
											HX_STACK_LINE(159)
											int tmp76 = decodeState->next();		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(159)
											int tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(159)
											int tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(159)
											tmp70 = (tmp78 == (int)0);
										}
										else{
											HX_STACK_LINE(159)
											tmp70 = true;
										}
									}
									else{
										HX_STACK_LINE(159)
										tmp70 = false;
									}
									HX_STACK_LINE(159)
									if ((tmp70)){
										HX_STACK_LINE(159)
										decodeState->validBits = (int)-1;
										HX_STACK_LINE(159)
										break;
									}
									else{
										HX_STACK_LINE(159)
										(decodeState->bytesInSeg)--;
										HX_STACK_LINE(159)
										int tmp71;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(159)
										{
											HX_STACK_LINE(159)
											int tmp72;		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(159)
											{
												HX_STACK_LINE(159)
												hx::AddEq(decodeState->inputPosition,(int)1);
												HX_STACK_LINE(159)
												tmp72 = decodeState->input->readByte();
											}
											HX_STACK_LINE(159)
											int tmp73 = decodeState->validBits;		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(159)
											int tmp74 = (int(tmp72) << int(tmp73));		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(159)
											int b = tmp74;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(159)
											tmp71 = (decodeState->acc + b);
										}
										HX_STACK_LINE(159)
										decodeState->acc = tmp71;
										HX_STACK_LINE(159)
										hx::AddEq(decodeState->validBits,(int)8);
									}
									HX_STACK_LINE(159)
									bool tmp71 = (decodeState->validBits < n);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(159)
									bool tmp72 = !(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(159)
									if ((tmp72)){
										HX_STACK_LINE(159)
										break;
									}
								}
								HX_STACK_LINE(159)
								bool tmp69 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(159)
								if ((tmp69)){
									HX_STACK_LINE(159)
									tmp64 = (int)0;
								}
								else{
									HX_STACK_LINE(159)
									int tmp70 = decodeState->acc;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(159)
									int tmp71 = (int((int)1) << int(n));		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(159)
									int tmp72 = (tmp71 - (int)1);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(159)
									int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(159)
									int tmp74 = (int(tmp70) & int(tmp73));		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(159)
									int z = tmp74;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(159)
									int tmp75 = hx::UShr(decodeState->acc,n);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(159)
									decodeState->acc = tmp75;
									HX_STACK_LINE(159)
									hx::SubEq(decodeState->validBits,n);
									HX_STACK_LINE(159)
									tmp64 = z;
								}
							}
						}
						else{
							HX_STACK_LINE(159)
							int tmp67 = decodeState->acc;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(159)
							int tmp68 = (int((int)1) << int(n));		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(159)
							int tmp69 = (tmp68 - (int)1);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(159)
							int tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(159)
							int tmp71 = (int(tmp67) & int(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(159)
							int z = tmp71;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(159)
							int tmp72 = hx::UShr(decodeState->acc,n);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(159)
							decodeState->acc = tmp72;
							HX_STACK_LINE(159)
							hx::SubEq(decodeState->validBits,n);
							HX_STACK_LINE(159)
							tmp64 = z;
						}
					}
				}
				HX_STACK_LINE(159)
				int q = tmp64;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(160)
				bool tmp65 = (q == (int)-1);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(160)
				if ((tmp65)){
					HX_STACK_LINE(161)
					Dynamic tmp66 = hx::SourceInfo(HX_HCSTRING("Codebook.hx","\x88","\x14","\xe0","\x8e"),161,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Codebook","\xa6","\x42","\x7b","\xee"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(161)
					::kha::audio2::ogg::vorbis::data::ReaderError tmp67 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,HX_HCSTRING("fail lookup","\x7c","\xd8","\x86","\x6f"),tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(161)
					HX_STACK_DO_THROW(tmp67);
				}
				HX_STACK_LINE(163)
				int tmp66 = j;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(163)
				int tmp67 = q;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(163)
				int tmp68 = mults->__unsafe_set(tmp66,tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(163)
				tmp68;
			}
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(167)
			Array< Float > tmp61;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(167)
			{
				HX_STACK_LINE(167)
				Array< Float > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(167)
				Array< Float > tmp62 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(167)
				this1 = tmp62;
				HX_STACK_LINE(167)
				int tmp63 = c->lookupValues;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(167)
				this1->__SetSizeExact(tmp63);
				HX_STACK_LINE(167)
				tmp61 = this1;
			}
			HX_STACK_LINE(167)
			c->multiplicands = tmp61;
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(170)
				int _g = c->lookupValues;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(170)
				while((true)){
					HX_STACK_LINE(170)
					bool tmp62 = (_g1 < _g);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(170)
					bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(170)
					if ((tmp63)){
						HX_STACK_LINE(170)
						break;
					}
					HX_STACK_LINE(170)
					int tmp64 = (_g1)++;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(170)
					int j = tmp64;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(171)
					{
						HX_STACK_LINE(171)
						int tmp65 = j;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(171)
						int tmp66 = mults->__unsafe_get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(171)
						int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(171)
						Float tmp68 = c->deltaValue;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(171)
						Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(171)
						Float tmp70 = c->minimumValue;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(171)
						Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(171)
						Float val = tmp71;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(171)
						int tmp72 = j;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(171)
						Float tmp73 = val;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(171)
						Float tmp74 = c->multiplicands->__unsafe_set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(171)
						tmp74;
					}
				}
			}
		}
		HX_STACK_LINE(176)
		bool tmp61 = (c->lookupType == (int)2);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(176)
		bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(176)
		if ((tmp61)){
			HX_STACK_LINE(176)
			tmp62 = c->sequenceP;
		}
		else{
			HX_STACK_LINE(176)
			tmp62 = false;
		}
		HX_STACK_LINE(176)
		if ((tmp62)){
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(177)
				int _g = c->lookupValues;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(177)
				while((true)){
					HX_STACK_LINE(177)
					bool tmp63 = (_g1 < _g);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(177)
					bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(177)
					if ((tmp64)){
						HX_STACK_LINE(177)
						break;
					}
					HX_STACK_LINE(177)
					int tmp65 = (_g1)++;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(177)
					int j = tmp65;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						int tmp66 = (j - (int)1);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(178)
						Float tmp67 = c->multiplicands->__unsafe_get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(178)
						Float val = tmp67;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(178)
						int tmp68 = j;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(178)
						Float tmp69 = val;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(178)
						Float tmp70 = c->multiplicands->__unsafe_set(tmp68,tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(178)
						tmp70;
					}
				}
			}
			HX_STACK_LINE(180)
			c->sequenceP = false;
		}
	}
	HX_STACK_LINE(184)
	::kha::audio2::ogg::vorbis::data::Codebook tmp51 = c;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(184)
	return tmp51;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Codebook_obj,read,return )

int Codebook_obj::delay;


Codebook_obj::Codebook_obj()
{
}

void Codebook_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Codebook);
	HX_MARK_MEMBER_NAME(dimensions,"dimensions");
	HX_MARK_MEMBER_NAME(entries,"entries");
	HX_MARK_MEMBER_NAME(codewordLengths,"codewordLengths");
	HX_MARK_MEMBER_NAME(minimumValue,"minimumValue");
	HX_MARK_MEMBER_NAME(deltaValue,"deltaValue");
	HX_MARK_MEMBER_NAME(valueBits,"valueBits");
	HX_MARK_MEMBER_NAME(lookupType,"lookupType");
	HX_MARK_MEMBER_NAME(sequenceP,"sequenceP");
	HX_MARK_MEMBER_NAME(sparse,"sparse");
	HX_MARK_MEMBER_NAME(lookupValues,"lookupValues");
	HX_MARK_MEMBER_NAME(multiplicands,"multiplicands");
	HX_MARK_MEMBER_NAME(codewords,"codewords");
	HX_MARK_MEMBER_NAME(fastHuffman,"fastHuffman");
	HX_MARK_MEMBER_NAME(sortedCodewords,"sortedCodewords");
	HX_MARK_MEMBER_NAME(sortedValues,"sortedValues");
	HX_MARK_MEMBER_NAME(sortedEntries,"sortedEntries");
	HX_MARK_END_CLASS();
}

void Codebook_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dimensions,"dimensions");
	HX_VISIT_MEMBER_NAME(entries,"entries");
	HX_VISIT_MEMBER_NAME(codewordLengths,"codewordLengths");
	HX_VISIT_MEMBER_NAME(minimumValue,"minimumValue");
	HX_VISIT_MEMBER_NAME(deltaValue,"deltaValue");
	HX_VISIT_MEMBER_NAME(valueBits,"valueBits");
	HX_VISIT_MEMBER_NAME(lookupType,"lookupType");
	HX_VISIT_MEMBER_NAME(sequenceP,"sequenceP");
	HX_VISIT_MEMBER_NAME(sparse,"sparse");
	HX_VISIT_MEMBER_NAME(lookupValues,"lookupValues");
	HX_VISIT_MEMBER_NAME(multiplicands,"multiplicands");
	HX_VISIT_MEMBER_NAME(codewords,"codewords");
	HX_VISIT_MEMBER_NAME(fastHuffman,"fastHuffman");
	HX_VISIT_MEMBER_NAME(sortedCodewords,"sortedCodewords");
	HX_VISIT_MEMBER_NAME(sortedValues,"sortedValues");
	HX_VISIT_MEMBER_NAME(sortedEntries,"sortedEntries");
}

Dynamic Codebook_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sparse") ) { return sparse; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { return entries; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addEntry") ) { return addEntry_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueBits") ) { return valueBits; }
		if (HX_FIELD_EQ(inName,"sequenceP") ) { return sequenceP; }
		if (HX_FIELD_EQ(inName,"codewords") ) { return codewords; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dimensions") ) { return dimensions; }
		if (HX_FIELD_EQ(inName,"deltaValue") ) { return deltaValue; }
		if (HX_FIELD_EQ(inName,"lookupType") ) { return lookupType; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fastHuffman") ) { return fastHuffman; }
		if (HX_FIELD_EQ(inName,"decodeStart") ) { return decodeStart_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimumValue") ) { return minimumValue; }
		if (HX_FIELD_EQ(inName,"lookupValues") ) { return lookupValues; }
		if (HX_FIELD_EQ(inName,"sortedValues") ) { return sortedValues; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplicands") ) { return multiplicands; }
		if (HX_FIELD_EQ(inName,"sortedEntries") ) { return sortedEntries; }
		if (HX_FIELD_EQ(inName,"includeInSort") ) { return includeInSort_dyn(); }
		if (HX_FIELD_EQ(inName,"residueDecode") ) { return residueDecode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"codebookDecode") ) { return codebookDecode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"codewordLengths") ) { return codewordLengths; }
		if (HX_FIELD_EQ(inName,"sortedCodewords") ) { return sortedCodewords; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"computeCodewords") ) { return computeCodewords_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"codebookDecodeStep") ) { return codebookDecodeStep_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"computeSortedHuffman") ) { return computeSortedHuffman_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"decodeDeinterleaveRepeat") ) { return decodeDeinterleaveRepeat_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"computeAcceleratedHuffman") ) { return computeAcceleratedHuffman_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Codebook_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay; return true;  }
	}
	return false;
}

Dynamic Codebook_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sparse") ) { sparse=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { entries=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueBits") ) { valueBits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sequenceP") ) { sequenceP=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"codewords") ) { codewords=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dimensions") ) { dimensions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"deltaValue") ) { deltaValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lookupType") ) { lookupType=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fastHuffman") ) { fastHuffman=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minimumValue") ) { minimumValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lookupValues") ) { lookupValues=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sortedValues") ) { sortedValues=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplicands") ) { multiplicands=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sortedEntries") ) { sortedEntries=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"codewordLengths") ) { codewordLengths=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sortedCodewords") ) { sortedCodewords=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Codebook_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Codebook_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dimensions","\x4d","\xbe","\x9f","\xdc"));
	outFields->push(HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79"));
	outFields->push(HX_HCSTRING("codewordLengths","\x16","\x3c","\xfc","\x19"));
	outFields->push(HX_HCSTRING("minimumValue","\xc3","\x5e","\x55","\xb4"));
	outFields->push(HX_HCSTRING("deltaValue","\x59","\x24","\xdb","\xdc"));
	outFields->push(HX_HCSTRING("valueBits","\x17","\xb3","\x9b","\x8d"));
	outFields->push(HX_HCSTRING("lookupType","\x54","\x86","\xf3","\x40"));
	outFields->push(HX_HCSTRING("sequenceP","\xef","\x5a","\x8d","\xe6"));
	outFields->push(HX_HCSTRING("sparse","\xe0","\x0e","\x60","\xb8"));
	outFields->push(HX_HCSTRING("lookupValues","\xfc","\x31","\x21","\x02"));
	outFields->push(HX_HCSTRING("multiplicands","\x0b","\x05","\xc0","\x91"));
	outFields->push(HX_HCSTRING("codewords","\x1c","\x7b","\x0d","\xcf"));
	outFields->push(HX_HCSTRING("fastHuffman","\xf1","\x9f","\x8c","\x5a"));
	outFields->push(HX_HCSTRING("sortedCodewords","\x1f","\xf8","\x5c","\x96"));
	outFields->push(HX_HCSTRING("sortedValues","\xff","\x96","\x90","\xf3"));
	outFields->push(HX_HCSTRING("sortedEntries","\x93","\x53","\xe6","\x33"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Codebook_obj,dimensions),HX_HCSTRING("dimensions","\x4d","\xbe","\x9f","\xdc")},
	{hx::fsInt,(int)offsetof(Codebook_obj,entries),HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Codebook_obj,codewordLengths),HX_HCSTRING("codewordLengths","\x16","\x3c","\xfc","\x19")},
	{hx::fsFloat,(int)offsetof(Codebook_obj,minimumValue),HX_HCSTRING("minimumValue","\xc3","\x5e","\x55","\xb4")},
	{hx::fsFloat,(int)offsetof(Codebook_obj,deltaValue),HX_HCSTRING("deltaValue","\x59","\x24","\xdb","\xdc")},
	{hx::fsInt,(int)offsetof(Codebook_obj,valueBits),HX_HCSTRING("valueBits","\x17","\xb3","\x9b","\x8d")},
	{hx::fsInt,(int)offsetof(Codebook_obj,lookupType),HX_HCSTRING("lookupType","\x54","\x86","\xf3","\x40")},
	{hx::fsBool,(int)offsetof(Codebook_obj,sequenceP),HX_HCSTRING("sequenceP","\xef","\x5a","\x8d","\xe6")},
	{hx::fsBool,(int)offsetof(Codebook_obj,sparse),HX_HCSTRING("sparse","\xe0","\x0e","\x60","\xb8")},
	{hx::fsInt,(int)offsetof(Codebook_obj,lookupValues),HX_HCSTRING("lookupValues","\xfc","\x31","\x21","\x02")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Codebook_obj,multiplicands),HX_HCSTRING("multiplicands","\x0b","\x05","\xc0","\x91")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Codebook_obj,codewords),HX_HCSTRING("codewords","\x1c","\x7b","\x0d","\xcf")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Codebook_obj,fastHuffman),HX_HCSTRING("fastHuffman","\xf1","\x9f","\x8c","\x5a")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Codebook_obj,sortedCodewords),HX_HCSTRING("sortedCodewords","\x1f","\xf8","\x5c","\x96")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Codebook_obj,sortedValues),HX_HCSTRING("sortedValues","\xff","\x96","\x90","\xf3")},
	{hx::fsInt,(int)offsetof(Codebook_obj,sortedEntries),HX_HCSTRING("sortedEntries","\x93","\x53","\xe6","\x33")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Codebook_obj::NO_CODE,HX_HCSTRING("NO_CODE","\x2b","\x45","\x52","\x21")},
	{hx::fsInt,(void *) &Codebook_obj::delay,HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dimensions","\x4d","\xbe","\x9f","\xdc"),
	HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79"),
	HX_HCSTRING("codewordLengths","\x16","\x3c","\xfc","\x19"),
	HX_HCSTRING("minimumValue","\xc3","\x5e","\x55","\xb4"),
	HX_HCSTRING("deltaValue","\x59","\x24","\xdb","\xdc"),
	HX_HCSTRING("valueBits","\x17","\xb3","\x9b","\x8d"),
	HX_HCSTRING("lookupType","\x54","\x86","\xf3","\x40"),
	HX_HCSTRING("sequenceP","\xef","\x5a","\x8d","\xe6"),
	HX_HCSTRING("sparse","\xe0","\x0e","\x60","\xb8"),
	HX_HCSTRING("lookupValues","\xfc","\x31","\x21","\x02"),
	HX_HCSTRING("multiplicands","\x0b","\x05","\xc0","\x91"),
	HX_HCSTRING("codewords","\x1c","\x7b","\x0d","\xcf"),
	HX_HCSTRING("fastHuffman","\xf1","\x9f","\x8c","\x5a"),
	HX_HCSTRING("sortedCodewords","\x1f","\xf8","\x5c","\x96"),
	HX_HCSTRING("sortedValues","\xff","\x96","\x90","\xf3"),
	HX_HCSTRING("sortedEntries","\x93","\x53","\xe6","\x33"),
	HX_HCSTRING("addEntry","\x91","\x9e","\xe3","\xe9"),
	HX_HCSTRING("includeInSort","\x2b","\x86","\xf6","\xb6"),
	HX_HCSTRING("computeCodewords","\xa5","\xec","\x44","\xc8"),
	HX_HCSTRING("computeSortedHuffman","\x79","\xff","\xc7","\xef"),
	HX_HCSTRING("computeAcceleratedHuffman","\x5d","\x4a","\x6a","\xc6"),
	HX_HCSTRING("codebookDecode","\xa4","\x25","\x0d","\xe9"),
	HX_HCSTRING("codebookDecodeStep","\x10","\xdb","\xef","\x6b"),
	HX_HCSTRING("decodeStart","\x54","\x00","\x25","\x4c"),
	HX_HCSTRING("decodeDeinterleaveRepeat","\x65","\x00","\x32","\x3c"),
	HX_HCSTRING("residueDecode","\xd9","\x53","\x88","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Codebook_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Codebook_obj::NO_CODE,"NO_CODE");
	HX_MARK_MEMBER_NAME(Codebook_obj::delay,"delay");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Codebook_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Codebook_obj::NO_CODE,"NO_CODE");
	HX_VISIT_MEMBER_NAME(Codebook_obj::delay,"delay");
};

#endif

hx::Class Codebook_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NO_CODE","\x2b","\x45","\x52","\x21"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	::String(null()) };

void Codebook_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Codebook","\xa6","\x42","\x7b","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Codebook_obj::__GetStatic;
	__mClass->mSetStaticField = &Codebook_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Codebook_obj >;
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

void Codebook_obj::__boot()
{
	NO_CODE= (int)255;
	delay= (int)0;
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
