#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisTools
#include <kha/audio2/ogg/vorbis/VorbisTools.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_IntPoint
#include <kha/audio2/ogg/vorbis/data/IntPoint.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{

Void VorbisTools_obj::__construct()
{
	return null();
}

//VorbisTools_obj::~VorbisTools_obj() { }

Dynamic VorbisTools_obj::__CreateEmpty() { return  new VorbisTools_obj; }
hx::ObjectPtr< VorbisTools_obj > VorbisTools_obj::__new()
{  hx::ObjectPtr< VorbisTools_obj > _result_ = new VorbisTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic VorbisTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VorbisTools_obj > _result_ = new VorbisTools_obj();
	_result_->__construct();
	return _result_;}

int VorbisTools_obj::EOP;

Array< ::Dynamic > VorbisTools_obj::integerDivideTable;

Float VorbisTools_obj::M__PI;

int VorbisTools_obj::DIVTAB_NUMER;

int VorbisTools_obj::DIVTAB_DENOM;

Array< Float > VorbisTools_obj::INVERSE_DB_TABLE;

Void VorbisTools_obj::_assert( bool b,Dynamic p){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","assert",0xf595fd60,"kha.audio2.ogg.vorbis.VorbisTools.assert","kha/audio2/ogg/vorbis/VorbisTools.hx",90,0x5e1b30aa)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(p,"p")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,_assert,(void))

Dynamic VorbisTools_obj::neighbors( Array< int > x,int n){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","neighbors",0x64c7c4e7,"kha.audio2.ogg.vorbis.VorbisTools.neighbors","kha/audio2/ogg/vorbis/VorbisTools.hx",99,0x5e1b30aa)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(100)
	int low = (int)-1;		HX_STACK_VAR(low,"low");
	HX_STACK_LINE(101)
	int high = (int)65536;		HX_STACK_VAR(high,"high");
	HX_STACK_LINE(102)
	int plow = (int)0;		HX_STACK_VAR(plow,"plow");
	HX_STACK_LINE(103)
	int phigh = (int)0;		HX_STACK_VAR(phigh,"phigh");
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		while((true)){
			HX_STACK_LINE(105)
			bool tmp = (_g < n);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(105)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(105)
			if ((tmp1)){
				HX_STACK_LINE(105)
				break;
			}
			HX_STACK_LINE(105)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(106)
			int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			int tmp4 = x->__unsafe_get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			int tmp6 = low;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(106)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			if ((tmp7)){
				HX_STACK_LINE(106)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(106)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(106)
				int tmp11 = x->__unsafe_get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(106)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(106)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(106)
				int tmp14 = n;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(106)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(106)
				int tmp16 = x->__unsafe_get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(106)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(106)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(106)
				tmp8 = (tmp13 < tmp18);
			}
			else{
				HX_STACK_LINE(106)
				tmp8 = false;
			}
			HX_STACK_LINE(106)
			if ((tmp8)){
				HX_STACK_LINE(106)
				plow = i;
				HX_STACK_LINE(106)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(106)
				int tmp10 = x->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(106)
				low = tmp10;
			}
			HX_STACK_LINE(107)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(107)
			int tmp10 = x->__unsafe_get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(107)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(107)
			int tmp12 = high;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(107)
			bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(107)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(107)
			if ((tmp13)){
				HX_STACK_LINE(107)
				int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(107)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(107)
				int tmp17 = x->__unsafe_get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(107)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(107)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(107)
				int tmp20 = n;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(107)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(107)
				int tmp22 = x->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(107)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(107)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(107)
				tmp14 = (tmp19 > tmp24);
			}
			else{
				HX_STACK_LINE(107)
				tmp14 = false;
			}
			HX_STACK_LINE(107)
			if ((tmp14)){
				HX_STACK_LINE(107)
				phigh = i;
				HX_STACK_LINE(107)
				int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(107)
				int tmp16 = x->__unsafe_get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(107)
				high = tmp16;
			}
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( int &phigh,int &plow){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/audio2/ogg/vorbis/VorbisTools.hx",109,0x5e1b30aa)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("low","\x94","\x54","\x52","\x00") , plow,false);
				__result->Add(HX_HCSTRING("high","\x62","\x37","\x0e","\x45") , phigh,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(109)
	Dynamic tmp = _Function_1_1::Block(phigh,plow);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,neighbors,return )

Float VorbisTools_obj::floatUnpack( int x){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","floatUnpack",0xfb174f94,"kha.audio2.ogg.vorbis.VorbisTools.floatUnpack","kha/audio2/ogg/vorbis/VorbisTools.hx",116,0x5e1b30aa)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(118)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		int tmp1 = (int(x) & int((int)2097151));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		int _int = tmp1;		HX_STACK_VAR(_int,"int");
		HX_STACK_LINE(118)
		bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		if ((tmp2)){
			HX_STACK_LINE(118)
			tmp = (((Float)4294967296.0) + _int);
		}
		else{
			HX_STACK_LINE(118)
			tmp = (_int + ((Float)0.0));
		}
	}
	HX_STACK_LINE(118)
	Float mantissa = tmp;		HX_STACK_VAR(mantissa,"mantissa");
	HX_STACK_LINE(119)
	int tmp1 = (int(x) & int((int)-2147483648));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	int sign = tmp1;		HX_STACK_VAR(sign,"sign");
	HX_STACK_LINE(120)
	int tmp2 = (int(x) & int((int)2145386496));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	int tmp4 = hx::UShr(tmp3,(int)21);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	int exp = tmp4;		HX_STACK_VAR(exp,"exp");
	HX_STACK_LINE(121)
	bool tmp5 = (sign != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(121)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(121)
	if ((tmp5)){
		HX_STACK_LINE(121)
		Float tmp7 = mantissa;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(121)
		tmp6 = -(tmp7);
	}
	else{
		HX_STACK_LINE(121)
		tmp6 = mantissa;
	}
	HX_STACK_LINE(121)
	Float res = tmp6;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(122)
	Float tmp7 = res;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(122)
	int tmp8 = (exp - (int)788);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(122)
	Float tmp9 = ::Math_obj::pow((int)2,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(122)
	Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(122)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisTools_obj,floatUnpack,return )

int VorbisTools_obj::bitReverse( int n){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","bitReverse",0x688a176f,"kha.audio2.ogg.vorbis.VorbisTools.bitReverse","kha/audio2/ogg/vorbis/VorbisTools.hx",126,0x5e1b30aa)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(127)
	int tmp = (int(n) & int((int)-1431655766));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	int tmp2 = hx::UShr(tmp1,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	int tmp4 = (int(n) & int((int)1431655765));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	int tmp6 = (int(tmp5) << int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(127)
	int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(127)
	int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(127)
	n = tmp8;
	HX_STACK_LINE(128)
	int tmp9 = (int(n) & int((int)-858993460));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(128)
	int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(128)
	int tmp11 = hx::UShr(tmp10,(int)2);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(128)
	int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(128)
	int tmp13 = (int(n) & int((int)858993459));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(128)
	int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(128)
	int tmp15 = (int(tmp14) << int((int)2));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(128)
	int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(128)
	int tmp17 = (int(tmp12) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(128)
	n = tmp17;
	HX_STACK_LINE(129)
	int tmp18 = (int(n) & int((int)-252645136));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(129)
	int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(129)
	int tmp20 = hx::UShr(tmp19,(int)4);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(129)
	int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(129)
	int tmp22 = (int(n) & int((int)252645135));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(129)
	int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(129)
	int tmp24 = (int(tmp23) << int((int)4));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(129)
	int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(129)
	int tmp26 = (int(tmp21) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(129)
	n = tmp26;
	HX_STACK_LINE(130)
	int tmp27 = (int(n) & int((int)-16711936));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(130)
	int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(130)
	int tmp29 = hx::UShr(tmp28,(int)8);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(130)
	int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(130)
	int tmp31 = (int(n) & int((int)16711935));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(130)
	int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(130)
	int tmp33 = (int(tmp32) << int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(130)
	int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(130)
	int tmp35 = (int(tmp30) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(130)
	n = tmp35;
	HX_STACK_LINE(131)
	int tmp36 = hx::UShr(n,(int)16);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(131)
	int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(131)
	int tmp38 = (int(n) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(131)
	int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(131)
	int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(131)
	int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(131)
	return tmp41;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisTools_obj,bitReverse,return )

int VorbisTools_obj::pointCompare( ::kha::audio2::ogg::vorbis::data::IntPoint a,::kha::audio2::ogg::vorbis::data::IntPoint b){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","pointCompare",0xcb755c4f,"kha.audio2.ogg.vorbis.VorbisTools.pointCompare","kha/audio2/ogg/vorbis/VorbisTools.hx",134,0x5e1b30aa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(135)
	bool tmp = (a->x < b->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	if ((tmp)){
		HX_STACK_LINE(135)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(135)
		bool tmp2 = (a->x > b->x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		if ((tmp2)){
			HX_STACK_LINE(135)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(135)
			tmp1 = (int)0;
		}
	}
	HX_STACK_LINE(135)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,pointCompare,return )

int VorbisTools_obj::uintAsc( int a,int b){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","uintAsc",0x56877fdd,"kha.audio2.ogg.vorbis.VorbisTools.uintAsc","kha/audio2/ogg/vorbis/VorbisTools.hx",138,0x5e1b30aa)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(139)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		bool tmp1 = (b < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		bool aNeg = tmp1;		HX_STACK_VAR(aNeg,"aNeg");
		HX_STACK_LINE(139)
		bool tmp2 = (a < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		bool bNeg = tmp2;		HX_STACK_VAR(bNeg,"bNeg");
		HX_STACK_LINE(139)
		bool tmp3 = (aNeg != bNeg);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		if ((tmp3)){
			HX_STACK_LINE(139)
			tmp = aNeg;
		}
		else{
			HX_STACK_LINE(139)
			tmp = (b > a);
		}
	}
	HX_STACK_LINE(139)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	if ((tmp)){
		HX_STACK_LINE(140)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(141)
		bool tmp2 = (a == b);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		if ((tmp2)){
			HX_STACK_LINE(142)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(144)
			tmp1 = (int)1;
		}
	}
	HX_STACK_LINE(139)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,uintAsc,return )

int VorbisTools_obj::lookup1Values( int entries,int dim){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","lookup1Values",0xe93ce45f,"kha.audio2.ogg.vorbis.VorbisTools.lookup1Values","kha/audio2/ogg/vorbis/VorbisTools.hx",149,0x5e1b30aa)
	HX_STACK_ARG(entries,"entries")
	HX_STACK_ARG(dim,"dim")
	HX_STACK_LINE(150)
	int tmp = entries;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	Float tmp1 = ::Math_obj::log(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	int tmp2 = dim;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(150)
	Float tmp4 = ::Math_obj::exp(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(150)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(150)
	int r = tmp5;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(151)
	int tmp6 = (r + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(151)
	int tmp7 = dim;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(151)
	Float tmp8 = ::Math_obj::pow(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(151)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(151)
	int tmp10 = entries;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(151)
	bool tmp11 = (tmp9 <= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(151)
	if ((tmp11)){
		HX_STACK_LINE(152)
		(r)++;
	}
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		int tmp12 = (r + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(155)
		int tmp13 = dim;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(155)
		Float tmp14 = ::Math_obj::pow(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(155)
		int tmp15 = entries;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(155)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(155)
		bool b = tmp16;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(155)
		Dynamic();
	}
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		int tmp12 = r;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(156)
		int tmp13 = dim;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(156)
		Float tmp14 = ::Math_obj::pow(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(156)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(156)
		int tmp16 = entries;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(156)
		bool tmp17 = (tmp15 <= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(156)
		bool b = tmp17;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(156)
		Dynamic();
	}
	HX_STACK_LINE(157)
	int tmp12 = r;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(157)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,lookup1Values,return )

Void VorbisTools_obj::computeWindow( int n,Array< Float > window){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","computeWindow",0x8f2b736d,"kha.audio2.ogg.vorbis.VorbisTools.computeWindow","kha/audio2/ogg/vorbis/VorbisTools.hx",161,0x5e1b30aa)
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(162)
		int tmp = (int(n) >> int((int)1));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		int n2 = tmp;		HX_STACK_VAR(n2,"n2");
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(163)
			while((true)){
				HX_STACK_LINE(163)
				bool tmp1 = (_g < n2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(163)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				if ((tmp2)){
					HX_STACK_LINE(163)
					break;
				}
				HX_STACK_LINE(163)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(164)
				{
					HX_STACK_LINE(164)
					Float tmp4 = (i + ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(164)
					int tmp5 = n2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(164)
					Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(164)
					Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(164)
					Float tmp8 = (tmp7 * ((Float)3.14159265358979323846264));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(164)
					Float tmp9 = ::Math_obj::sin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(164)
					Float tmp10 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::square(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(164)
					Float tmp11 = (((Float)1.57079632679489656) * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(164)
					Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(164)
					Float val = tmp12;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(164)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(164)
					Float tmp14 = val;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(164)
					Float tmp15 = window->__unsafe_set(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(164)
					tmp15;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,computeWindow,(void))

Float VorbisTools_obj::square( Float f){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","square",0x0284b737,"kha.audio2.ogg.vorbis.VorbisTools.square","kha/audio2/ogg/vorbis/VorbisTools.hx",168,0x5e1b30aa)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(169)
	Float tmp = (f * f);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisTools_obj,square,return )

Void VorbisTools_obj::computeBitReverse( int n,Array< int > rev){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","computeBitReverse",0x2cbfedd2,"kha.audio2.ogg.vorbis.VorbisTools.computeBitReverse","kha/audio2/ogg/vorbis/VorbisTools.hx",173,0x5e1b30aa)
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(rev,"rev")
		HX_STACK_LINE(174)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			Array< int > tmp1 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(174)
			Array< int > log2_4 = tmp1;		HX_STACK_VAR(log2_4,"log2_4");
			HX_STACK_LINE(174)
			int tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			int tmp3 = (int)16384;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(174)
			if ((tmp4)){
				HX_STACK_LINE(174)
				int tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(174)
				int tmp6 = (int)16;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(174)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(174)
				if ((tmp7)){
					HX_STACK_LINE(174)
					int tmp8 = log2_4->__get(n);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(174)
					tmp = tmp8;
				}
				else{
					HX_STACK_LINE(174)
					int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(174)
					int tmp9 = (int)512;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(174)
					bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(174)
					if ((tmp10)){
						HX_STACK_LINE(174)
						Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(174)
						int tmp12 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(174)
						int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(174)
						tmp = ((int)5 + tmp13);
					}
					else{
						HX_STACK_LINE(174)
						Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(174)
						int tmp12 = (int(n) >> int((int)10));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(174)
						int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(174)
						tmp = ((int)10 + tmp13);
					}
				}
			}
			else{
				HX_STACK_LINE(174)
				int tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(174)
				int tmp6 = (int)16777216;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(174)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(174)
				if ((tmp7)){
					HX_STACK_LINE(174)
					int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(174)
					int tmp9 = (int)524288;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(174)
					bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(174)
					if ((tmp10)){
						HX_STACK_LINE(174)
						Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(174)
						int tmp12 = (int(n) >> int((int)15));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(174)
						int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(174)
						tmp = ((int)15 + tmp13);
					}
					else{
						HX_STACK_LINE(174)
						Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(174)
						int tmp12 = (int(n) >> int((int)20));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(174)
						int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(174)
						tmp = ((int)20 + tmp13);
					}
				}
				else{
					HX_STACK_LINE(174)
					int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(174)
					int tmp9 = (int)536870912;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(174)
					bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(174)
					if ((tmp10)){
						HX_STACK_LINE(174)
						Array< int > tmp11 = log2_4;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(174)
						int tmp12 = (int(n) >> int((int)25));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(174)
						int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(174)
						tmp = ((int)25 + tmp13);
					}
					else{
						HX_STACK_LINE(174)
						int tmp11 = n;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(174)
						int tmp12 = (int)-2147483648;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(174)
						bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(174)
						if ((tmp13)){
							HX_STACK_LINE(174)
							Array< int > tmp14 = log2_4;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(174)
							int tmp15 = (int(n) >> int((int)30));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(174)
							int tmp16 = tmp14->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(174)
							tmp = ((int)30 + tmp16);
						}
						else{
							HX_STACK_LINE(174)
							tmp = (int)0;
						}
					}
				}
			}
		}
		HX_STACK_LINE(174)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		int ld = tmp1;		HX_STACK_VAR(ld,"ld");
		HX_STACK_LINE(175)
		int tmp2 = (int(n) >> int((int)3));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		int n8 = tmp2;		HX_STACK_VAR(n8,"n8");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(177)
			while((true)){
				HX_STACK_LINE(177)
				bool tmp3 = (_g < n8);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(177)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(177)
				if ((tmp4)){
					HX_STACK_LINE(177)
					break;
				}
				HX_STACK_LINE(177)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(177)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(178)
				{
					HX_STACK_LINE(178)
					int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(178)
						{
							HX_STACK_LINE(178)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								int n1 = i;		HX_STACK_VAR(n1,"n1");
								HX_STACK_LINE(178)
								int tmp9 = (int(n1) & int((int)-1431655766));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(178)
								int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(178)
								int tmp11 = hx::UShr(tmp10,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(178)
								int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(178)
								int tmp13 = (int(n1) & int((int)1431655765));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(178)
								int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(178)
								int tmp15 = (int(tmp14) << int((int)1));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(178)
								int tmp17 = (int(tmp12) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(178)
								n1 = tmp17;
								HX_STACK_LINE(178)
								int tmp18 = (int(n1) & int((int)-858993460));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(178)
								int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(178)
								int tmp20 = hx::UShr(tmp19,(int)2);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(178)
								int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(178)
								int tmp22 = (int(n1) & int((int)858993459));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(178)
								int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(178)
								int tmp24 = (int(tmp23) << int((int)2));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(178)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(178)
								int tmp26 = (int(tmp21) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(178)
								n1 = tmp26;
								HX_STACK_LINE(178)
								int tmp27 = (int(n1) & int((int)-252645136));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(178)
								int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(178)
								int tmp29 = hx::UShr(tmp28,(int)4);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(178)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(178)
								int tmp31 = (int(n1) & int((int)252645135));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(178)
								int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(178)
								int tmp33 = (int(tmp32) << int((int)4));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(178)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(178)
								int tmp35 = (int(tmp30) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(178)
								n1 = tmp35;
								HX_STACK_LINE(178)
								int tmp36 = (int(n1) & int((int)-16711936));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(178)
								int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(178)
								int tmp38 = hx::UShr(tmp37,(int)8);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(178)
								int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(178)
								int tmp40 = (int(n1) & int((int)16711935));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(178)
								int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(178)
								int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(178)
								int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(178)
								int tmp44 = (int(tmp39) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(178)
								n1 = tmp44;
								HX_STACK_LINE(178)
								int tmp45 = hx::UShr(n1,(int)16);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(178)
								int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(178)
								int tmp47 = (int(n1) << int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(178)
								int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(178)
								int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(178)
								tmp8 = tmp49;
							}
							HX_STACK_LINE(178)
							int a = tmp8;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(178)
							int tmp9 = a;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(178)
							int tmp10 = ((int)32 - ld);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(178)
							int tmp11 = (tmp10 + (int)3);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(178)
							tmp7 = hx::UShr(tmp9,tmp11);
						}
						HX_STACK_LINE(178)
						int a = tmp7;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(178)
						tmp6 = (int(a) << int((int)2));
					}
					HX_STACK_LINE(178)
					int val = tmp6;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(178)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(178)
					int tmp8 = val;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(178)
					int tmp9 = rev->__unsafe_set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(178)
					tmp9;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VorbisTools_obj,computeBitReverse,(void))

Void VorbisTools_obj::computeTwiddleFactors( int n,Array< Float > af,Array< Float > bf,Array< Float > cf){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","computeTwiddleFactors",0x675f8882,"kha.audio2.ogg.vorbis.VorbisTools.computeTwiddleFactors","kha/audio2/ogg/vorbis/VorbisTools.hx",183,0x5e1b30aa)
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(af,"af")
		HX_STACK_ARG(bf,"bf")
		HX_STACK_ARG(cf,"cf")
		HX_STACK_LINE(184)
		int tmp = (int(n) >> int((int)2));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		int n4 = tmp;		HX_STACK_VAR(n4,"n4");
		HX_STACK_LINE(185)
		int tmp1 = (int(n) >> int((int)3));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		int n8 = tmp1;		HX_STACK_VAR(n8,"n8");
		HX_STACK_LINE(187)
		int k2 = (int)0;		HX_STACK_VAR(k2,"k2");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(188)
			while((true)){
				HX_STACK_LINE(188)
				bool tmp2 = (_g < n4);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(188)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(188)
				if ((tmp3)){
					HX_STACK_LINE(188)
					break;
				}
				HX_STACK_LINE(188)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(188)
				int k = tmp4;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(189)
				{
					HX_STACK_LINE(189)
					int tmp5 = ((int)4 * k);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(189)
					Float tmp6 = (tmp5 * ((Float)3.14159265358979323846264));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(189)
					int tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(189)
					Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(189)
					Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(189)
					Float val = tmp9;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(189)
					int tmp10 = k2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(189)
					Float tmp11 = val;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(189)
					Float tmp12 = af->__unsafe_set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(189)
					tmp12;
				}
				HX_STACK_LINE(190)
				{
					HX_STACK_LINE(190)
					int tmp5 = ((int)4 * k);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(190)
					Float tmp6 = (tmp5 * ((Float)3.14159265358979323846264));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(190)
					int tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(190)
					Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(190)
					Float tmp9 = ::Math_obj::sin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(190)
					Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(190)
					Float val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(190)
					int tmp11 = (k2 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(190)
					Float tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					Float tmp13 = af->__unsafe_set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(190)
					tmp13;
				}
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					int tmp5 = (k2 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(191)
					Float tmp6 = (tmp5 * ((Float)3.14159265358979323846264));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(191)
					int tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(191)
					Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(191)
					Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(191)
					Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					Float tmp11 = (tmp10 * ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(191)
					Float val = tmp11;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(191)
					int tmp12 = k2;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(191)
					Float tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(191)
					Float tmp14 = bf->__unsafe_set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					tmp14;
				}
				HX_STACK_LINE(192)
				{
					HX_STACK_LINE(192)
					int tmp5 = (k2 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(192)
					Float tmp6 = (tmp5 * ((Float)3.14159265358979323846264));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(192)
					int tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(192)
					Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(192)
					Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(192)
					Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(192)
					Float tmp11 = (tmp10 * ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(192)
					Float val = tmp11;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(192)
					int tmp12 = (k2 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(192)
					Float tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(192)
					Float tmp14 = bf->__unsafe_set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(192)
					tmp14;
				}
				HX_STACK_LINE(193)
				hx::AddEq(k2,(int)2);
			}
		}
		HX_STACK_LINE(196)
		int k21 = (int)0;		HX_STACK_VAR(k21,"k21");
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(197)
			while((true)){
				HX_STACK_LINE(197)
				bool tmp2 = (_g < n8);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(197)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(197)
				if ((tmp3)){
					HX_STACK_LINE(197)
					break;
				}
				HX_STACK_LINE(197)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(197)
				int k = tmp4;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(198)
				{
					HX_STACK_LINE(198)
					int tmp5 = (k21 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(198)
					int tmp6 = ((int)2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(198)
					Float tmp7 = (tmp6 * ((Float)3.14159265358979323846264));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(198)
					int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(198)
					Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(198)
					Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(198)
					Float val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(198)
					int tmp11 = k21;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(198)
					Float tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(198)
					Float tmp13 = cf->__unsafe_set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(198)
					tmp13;
				}
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					int tmp5 = (k21 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(199)
					int tmp6 = ((int)2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					Float tmp7 = (tmp6 * ((Float)3.14159265358979323846264));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(199)
					int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(199)
					Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(199)
					Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(199)
					Float val = tmp11;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(199)
					int tmp12 = (k21 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(199)
					Float tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(199)
					Float tmp14 = cf->__unsafe_set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(199)
					tmp14;
				}
				HX_STACK_LINE(200)
				hx::AddEq(k21,(int)2);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(VorbisTools_obj,computeTwiddleFactors,(void))

Void VorbisTools_obj::drawLine( Array< Float > output,int x0,int y0,int x1,int y1,int n){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","drawLine",0x98bdd332,"kha.audio2.ogg.vorbis.VorbisTools.drawLine","kha/audio2/ogg/vorbis/VorbisTools.hx",206,0x5e1b30aa)
		HX_STACK_ARG(output,"output")
		HX_STACK_ARG(x0,"x0")
		HX_STACK_ARG(y0,"y0")
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(207)
		Array< ::Dynamic > tmp = ::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		if ((tmp1)){
			HX_STACK_LINE(208)
			Array< ::Dynamic > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(208)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(208)
				Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(208)
				this1 = tmp3;
				HX_STACK_LINE(208)
				this1->__SetSizeExact((int)32);
				HX_STACK_LINE(208)
				tmp2 = this1;
			}
			HX_STACK_LINE(208)
			::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable = tmp2;
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(209)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(209)
				while((true)){
					HX_STACK_LINE(209)
					bool tmp3 = (_g < (int)32);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(209)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(209)
					if ((tmp4)){
						HX_STACK_LINE(209)
						break;
					}
					HX_STACK_LINE(209)
					int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(209)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(210)
					{
						HX_STACK_LINE(210)
						Array< int > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(210)
						{
							HX_STACK_LINE(210)
							Array< int > this1;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(210)
							Array< int > tmp7 = Array_obj< int >::__new();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(210)
							this1 = tmp7;
							HX_STACK_LINE(210)
							this1->__SetSizeExact((int)64);
							HX_STACK_LINE(210)
							tmp6 = this1;
						}
						HX_STACK_LINE(210)
						Array< int > val = tmp6;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(210)
						Array< ::Dynamic > tmp7 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(210)
						int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(210)
						Array< int > tmp9 = val;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(210)
						Array< int > tmp10 = tmp7->__unsafe_set(tmp8,tmp9).StaticCast< Array< int > >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(210)
						tmp10;
					}
					HX_STACK_LINE(211)
					{
						HX_STACK_LINE(211)
						int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(211)
						while((true)){
							HX_STACK_LINE(211)
							bool tmp6 = (_g1 < (int)64);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(211)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(211)
							if ((tmp7)){
								HX_STACK_LINE(211)
								break;
							}
							HX_STACK_LINE(211)
							int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(211)
							int j = tmp8;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(212)
							{
								HX_STACK_LINE(212)
								Array< ::Dynamic > tmp9 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(212)
								int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(212)
								Array< int > tmp11 = tmp9->__unsafe_get(tmp10).StaticCast< Array< int > >();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(212)
								Array< int > this1 = tmp11;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(212)
								Float tmp12 = (Float(i) / Float(j));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(212)
								int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(212)
								int val = tmp13;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(212)
								int tmp14 = j;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(212)
								int tmp15 = val;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(212)
								int tmp16 = this1->__unsafe_set(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(212)
								tmp16;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(217)
		int tmp2 = (y1 - y0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		int dy = tmp2;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(218)
		int tmp3 = (x1 - x0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		int adx = tmp3;		HX_STACK_VAR(adx,"adx");
		HX_STACK_LINE(219)
		bool tmp4 = (dy < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(219)
		if ((tmp4)){
			HX_STACK_LINE(219)
			int tmp6 = dy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(219)
			tmp5 = -(tmp6);
		}
		else{
			HX_STACK_LINE(219)
			tmp5 = dy;
		}
		HX_STACK_LINE(219)
		int ady = tmp5;		HX_STACK_VAR(ady,"ady");
		HX_STACK_LINE(220)
		int base;		HX_STACK_VAR(base,"base");
		HX_STACK_LINE(221)
		int x = x0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(222)
		int y = y0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(223)
		int err = (int)0;		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(224)
		bool tmp6 = (adx < (int)64);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(224)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(224)
		if ((tmp6)){
			HX_STACK_LINE(224)
			tmp7 = (ady < (int)32);
		}
		else{
			HX_STACK_LINE(224)
			tmp7 = false;
		}
		HX_STACK_LINE(224)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(224)
		if ((tmp7)){
			HX_STACK_LINE(225)
			bool tmp9 = (dy < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(225)
			if ((tmp9)){
				HX_STACK_LINE(226)
				int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(226)
				{
					HX_STACK_LINE(226)
					Array< ::Dynamic > tmp11 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(226)
					int tmp12 = ady;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(226)
					Array< int > tmp13 = tmp11->__unsafe_get(tmp12).StaticCast< Array< int > >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(226)
					Array< int > this1 = tmp13;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(226)
					int tmp14 = adx;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(226)
					int tmp15 = this1->__unsafe_get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(226)
					tmp10 = tmp15;
				}
				HX_STACK_LINE(226)
				int tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				base = tmp11;
				HX_STACK_LINE(227)
				tmp8 = (base - (int)1);
			}
			else{
				HX_STACK_LINE(229)
				int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					Array< ::Dynamic > tmp11 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::integerDivideTable;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(229)
					int tmp12 = ady;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(229)
					Array< int > tmp13 = tmp11->__unsafe_get(tmp12).StaticCast< Array< int > >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(229)
					Array< int > this1 = tmp13;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(229)
					int tmp14 = adx;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(229)
					int tmp15 = this1->__unsafe_get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(229)
					tmp10 = tmp15;
				}
				HX_STACK_LINE(229)
				base = tmp10;
				HX_STACK_LINE(230)
				tmp8 = (base + (int)1);
			}
		}
		else{
			HX_STACK_LINE(233)
			Float tmp9 = (Float(dy) / Float(adx));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(233)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(233)
			base = tmp10;
			HX_STACK_LINE(234)
			bool tmp11 = (dy < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(234)
			if ((tmp11)){
				HX_STACK_LINE(235)
				tmp8 = (base - (int)1);
			}
			else{
				HX_STACK_LINE(237)
				tmp8 = (base + (int)1);
			}
		}
		HX_STACK_LINE(224)
		int sy = tmp8;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(240)
		bool tmp9 = (base < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(240)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(240)
		if ((tmp9)){
			HX_STACK_LINE(240)
			int tmp11 = base;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(240)
			tmp10 = -(tmp11);
		}
		else{
			HX_STACK_LINE(240)
			tmp10 = base;
		}
		HX_STACK_LINE(240)
		int tmp11 = adx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(240)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(240)
		hx::SubEq(ady,tmp12);
		HX_STACK_LINE(241)
		bool tmp13 = (x1 > n);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(241)
		if ((tmp13)){
			HX_STACK_LINE(242)
			x1 = n;
		}
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			int _g = x;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				int tmp14 = _g;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(245)
				Float tmp15 = output->__unsafe_get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(245)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(245)
				Array< Float > tmp17 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::INVERSE_DB_TABLE;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(245)
				int tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(245)
				Float tmp19 = tmp17->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(245)
				Float tmp20 = (tmp16 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(245)
				Float val = tmp20;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(245)
				int tmp21 = _g;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(245)
				Float tmp22 = val;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(245)
				Float tmp23 = output->__unsafe_set(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(245)
				tmp23;
			}
		}
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			int tmp14 = (x + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(247)
			int _g = tmp14;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(247)
			while((true)){
				HX_STACK_LINE(247)
				bool tmp15 = (_g < x1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(247)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(247)
				if ((tmp16)){
					HX_STACK_LINE(247)
					break;
				}
				HX_STACK_LINE(247)
				int tmp17 = (_g)++;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(247)
				int i = tmp17;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(248)
				hx::AddEq(err,ady);
				HX_STACK_LINE(249)
				bool tmp18 = (err >= adx);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(249)
				if ((tmp18)){
					HX_STACK_LINE(250)
					hx::SubEq(err,adx);
					HX_STACK_LINE(251)
					hx::AddEq(y,sy);
				}
				else{
					HX_STACK_LINE(253)
					hx::AddEq(y,base);
				}
				HX_STACK_LINE(255)
				{
					HX_STACK_LINE(255)
					int _g1 = i;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(255)
					{
						HX_STACK_LINE(255)
						int tmp19 = _g1;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(255)
						Float tmp20 = output->__unsafe_get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(255)
						Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(255)
						Array< Float > tmp22 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::INVERSE_DB_TABLE;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(255)
						int tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(255)
						Float tmp24 = tmp22->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(255)
						Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(255)
						Float val = tmp25;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(255)
						int tmp26 = _g1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(255)
						Float tmp27 = val;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(255)
						Float tmp28 = output->__unsafe_set(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(255)
						tmp28;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(VorbisTools_obj,drawLine,(void))

int VorbisTools_obj::predictPoint( int x,int x0,int x1,int y0,int y1){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","predictPoint",0x19836891,"kha.audio2.ogg.vorbis.VorbisTools.predictPoint","kha/audio2/ogg/vorbis/VorbisTools.hx",265,0x5e1b30aa)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_LINE(266)
	int tmp = (y1 - y0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int dy = tmp;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(267)
	int tmp1 = (x1 - x0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	int adx = tmp1;		HX_STACK_VAR(adx,"adx");
	HX_STACK_LINE(269)
	int tmp2 = dy;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	int tmp4 = (x - x0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(269)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(269)
	Float err = tmp5;		HX_STACK_VAR(err,"err");
	HX_STACK_LINE(270)
	Float tmp6 = (Float(err) / Float(adx));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(270)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(270)
	int off = tmp7;		HX_STACK_VAR(off,"off");
	HX_STACK_LINE(271)
	bool tmp8 = (dy < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(271)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(271)
	if ((tmp8)){
		HX_STACK_LINE(271)
		tmp9 = (y0 - off);
	}
	else{
		HX_STACK_LINE(271)
		tmp9 = (y0 + off);
	}
	HX_STACK_LINE(271)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(VorbisTools_obj,predictPoint,return )

Array< Float > VorbisTools_obj::emptyFloatVector( int len){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","emptyFloatVector",0xbc7bc10c,"kha.audio2.ogg.vorbis.VorbisTools.emptyFloatVector","kha/audio2/ogg/vorbis/VorbisTools.hx",274,0x5e1b30aa)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(275)
	Array< Float > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		Array< Float > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(275)
		Array< Float > tmp1 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		this1 = tmp1;
		HX_STACK_LINE(275)
		int tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		this1->__SetSizeExact(tmp2);
		HX_STACK_LINE(275)
		tmp = this1;
	}
	HX_STACK_LINE(275)
	Array< Float > vec = tmp;		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(281)
	Array< Float > tmp1 = vec;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisTools_obj,emptyFloatVector,return )

Array< Float > VorbisTools_obj::copyVector( Array< Float > source){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.VorbisTools","copyVector",0xc0fd21f2,"kha.audio2.ogg.vorbis.VorbisTools.copyVector","kha/audio2/ogg/vorbis/VorbisTools.hx",284,0x5e1b30aa)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(285)
	Array< Float > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	{
		HX_STACK_LINE(285)
		Array< Float > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(285)
		Array< Float > tmp1 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		this1 = tmp1;
		HX_STACK_LINE(285)
		int tmp2 = source->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		this1->__SetSizeExact(tmp2);
		HX_STACK_LINE(285)
		tmp = this1;
	}
	HX_STACK_LINE(285)
	Array< Float > dest = tmp;		HX_STACK_VAR(dest,"dest");
	HX_STACK_LINE(286)
	{
		HX_STACK_LINE(286)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(286)
		int tmp1 = source->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(286)
		while((true)){
			HX_STACK_LINE(286)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			if ((tmp3)){
				HX_STACK_LINE(286)
				break;
			}
			HX_STACK_LINE(286)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(287)
			{
				HX_STACK_LINE(287)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(287)
				Float tmp6 = source->__unsafe_get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(287)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(287)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				Float tmp8 = val;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(287)
				Float tmp9 = dest->__unsafe_set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				tmp9;
			}
		}
	}
	HX_STACK_LINE(289)
	Array< Float > tmp1 = dest;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisTools_obj,copyVector,return )


VorbisTools_obj::VorbisTools_obj()
{
}

bool VorbisTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assert") ) { outValue = _assert_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"square") ) { outValue = square_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uintAsc") ) { outValue = uintAsc_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawLine") ) { outValue = drawLine_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"neighbors") ) { outValue = neighbors_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitReverse") ) { outValue = bitReverse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyVector") ) { outValue = copyVector_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floatUnpack") ) { outValue = floatUnpack_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pointCompare") ) { outValue = pointCompare_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"predictPoint") ) { outValue = predictPoint_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lookup1Values") ) { outValue = lookup1Values_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"computeWindow") ) { outValue = computeWindow_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"INVERSE_DB_TABLE") ) { outValue = INVERSE_DB_TABLE; return true;  }
		if (HX_FIELD_EQ(inName,"emptyFloatVector") ) { outValue = emptyFloatVector_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"computeBitReverse") ) { outValue = computeBitReverse_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"integerDivideTable") ) { outValue = integerDivideTable; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"computeTwiddleFactors") ) { outValue = computeTwiddleFactors_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &VorbisTools_obj::EOP,HX_HCSTRING("EOP","\xa6","\xa0","\x34","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &VorbisTools_obj::integerDivideTable,HX_HCSTRING("integerDivideTable","\xb7","\x98","\xdc","\x01")},
	{hx::fsFloat,(void *) &VorbisTools_obj::M__PI,HX_HCSTRING("M__PI","\xe6","\x4b","\xee","\x94")},
	{hx::fsInt,(void *) &VorbisTools_obj::DIVTAB_NUMER,HX_HCSTRING("DIVTAB_NUMER","\xf8","\x57","\x6a","\x62")},
	{hx::fsInt,(void *) &VorbisTools_obj::DIVTAB_DENOM,HX_HCSTRING("DIVTAB_DENOM","\xf0","\xeb","\xd5","\x95")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &VorbisTools_obj::INVERSE_DB_TABLE,HX_HCSTRING("INVERSE_DB_TABLE","\xfc","\x8a","\x40","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VorbisTools_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::EOP,"EOP");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::integerDivideTable,"integerDivideTable");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::M__PI,"M__PI");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::DIVTAB_NUMER,"DIVTAB_NUMER");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::DIVTAB_DENOM,"DIVTAB_DENOM");
	HX_MARK_MEMBER_NAME(VorbisTools_obj::INVERSE_DB_TABLE,"INVERSE_DB_TABLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::EOP,"EOP");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::integerDivideTable,"integerDivideTable");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::M__PI,"M__PI");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::DIVTAB_NUMER,"DIVTAB_NUMER");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::DIVTAB_DENOM,"DIVTAB_DENOM");
	HX_VISIT_MEMBER_NAME(VorbisTools_obj::INVERSE_DB_TABLE,"INVERSE_DB_TABLE");
};

#endif

hx::Class VorbisTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("EOP","\xa6","\xa0","\x34","\x00"),
	HX_HCSTRING("integerDivideTable","\xb7","\x98","\xdc","\x01"),
	HX_HCSTRING("M__PI","\xe6","\x4b","\xee","\x94"),
	HX_HCSTRING("DIVTAB_NUMER","\xf8","\x57","\x6a","\x62"),
	HX_HCSTRING("DIVTAB_DENOM","\xf0","\xeb","\xd5","\x95"),
	HX_HCSTRING("INVERSE_DB_TABLE","\xfc","\x8a","\x40","\xc6"),
	HX_HCSTRING("assert","\xc6","\x46","\x03","\x4c"),
	HX_HCSTRING("neighbors","\x41","\xdf","\x79","\x94"),
	HX_HCSTRING("floatUnpack","\x6e","\x34","\x48","\x0f"),
	HX_HCSTRING("bitReverse","\xd5","\x0b","\xaf","\xf4"),
	HX_HCSTRING("pointCompare","\x35","\xb6","\x0c","\x62"),
	HX_HCSTRING("uintAsc","\xb7","\x6f","\xba","\x9f"),
	HX_HCSTRING("lookup1Values","\xb9","\x33","\x14","\x17"),
	HX_HCSTRING("computeWindow","\xc7","\xc2","\x02","\xbd"),
	HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"),
	HX_HCSTRING("computeBitReverse","\x2c","\xf2","\xfa","\x0b"),
	HX_HCSTRING("computeTwiddleFactors","\xdc","\xc1","\x7c","\x6c"),
	HX_HCSTRING("drawLine","\x18","\xc2","\x1c","\x5c"),
	HX_HCSTRING("predictPoint","\x77","\xc2","\x1a","\xb0"),
	HX_HCSTRING("emptyFloatVector","\xf2","\x05","\x5d","\x02"),
	HX_HCSTRING("copyVector","\x58","\x16","\x22","\x4d"),
	::String(null()) };

void VorbisTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.VorbisTools","\x94","\xda","\xc1","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VorbisTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< VorbisTools_obj >;
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

void VorbisTools_obj::__boot()
{
	EOP= (int)-1;
	M__PI= ((Float)3.14159265358979323846264);
	DIVTAB_NUMER= (int)32;
	DIVTAB_DENOM= (int)64;
	INVERSE_DB_TABLE= Array_obj< Float >::__new().Add(((Float)1.0649863e-07)).Add(((Float)1.1341951e-07)).Add(((Float)1.2079015e-07)).Add(((Float)1.2863978e-07)).Add(((Float)1.3699951e-07)).Add(((Float)1.4590251e-07)).Add(((Float)1.5538408e-07)).Add(((Float)1.6548181e-07)).Add(((Float)1.7623575e-07)).Add(((Float)1.8768855e-07)).Add(((Float)1.9988561e-07)).Add(((Float)2.1287530e-07)).Add(((Float)2.2670913e-07)).Add(((Float)2.4144197e-07)).Add(((Float)2.5713223e-07)).Add(((Float)2.7384213e-07)).Add(((Float)2.9163793e-07)).Add(((Float)3.1059021e-07)).Add(((Float)3.3077411e-07)).Add(((Float)3.5226968e-07)).Add(((Float)3.7516214e-07)).Add(((Float)3.9954229e-07)).Add(((Float)4.2550680e-07)).Add(((Float)4.5315863e-07)).Add(((Float)4.8260743e-07)).Add(((Float)5.1396998e-07)).Add(((Float)5.4737065e-07)).Add(((Float)5.8294187e-07)).Add(((Float)6.2082472e-07)).Add(((Float)6.6116941e-07)).Add(((Float)7.0413592e-07)).Add(((Float)7.4989464e-07)).Add(((Float)7.9862701e-07)).Add(((Float)8.5052630e-07)).Add(((Float)9.0579828e-07)).Add(((Float)9.6466216e-07)).Add(((Float)1.0273513e-06)).Add(((Float)1.0941144e-06)).Add(((Float)1.1652161e-06)).Add(((Float)1.2409384e-06)).Add(((Float)1.3215816e-06)).Add(((Float)1.4074654e-06)).Add(((Float)1.4989305e-06)).Add(((Float)1.5963394e-06)).Add(((Float)1.7000785e-06)).Add(((Float)1.8105592e-06)).Add(((Float)1.9282195e-06)).Add(((Float)2.0535261e-06)).Add(((Float)2.1869758e-06)).Add(((Float)2.3290978e-06)).Add(((Float)2.4804557e-06)).Add(((Float)2.6416497e-06)).Add(((Float)2.8133190e-06)).Add(((Float)2.9961443e-06)).Add(((Float)3.1908506e-06)).Add(((Float)3.3982101e-06)).Add(((Float)3.6190449e-06)).Add(((Float)3.8542308e-06)).Add(((Float)4.1047004e-06)).Add(((Float)4.3714470e-06)).Add(((Float)4.6555282e-06)).Add(((Float)4.9580707e-06)).Add(((Float)5.2802740e-06)).Add(((Float)5.6234160e-06)).Add(((Float)5.9888572e-06)).Add(((Float)6.3780469e-06)).Add(((Float)6.7925283e-06)).Add(((Float)7.2339451e-06)).Add(((Float)7.7040476e-06)).Add(((Float)8.2047000e-06)).Add(((Float)8.7378876e-06)).Add(((Float)9.3057248e-06)).Add(((Float)9.9104632e-06)).Add(((Float)1.0554501e-05)).Add(((Float)1.1240392e-05)).Add(((Float)1.1970856e-05)).Add(((Float)1.2748789e-05)).Add(((Float)1.3577278e-05)).Add(((Float)1.4459606e-05)).Add(((Float)1.5399272e-05)).Add(((Float)1.6400004e-05)).Add(((Float)1.7465768e-05)).Add(((Float)1.8600792e-05)).Add(((Float)1.9809576e-05)).Add(((Float)2.1096914e-05)).Add(((Float)2.2467911e-05)).Add(((Float)2.3928002e-05)).Add(((Float)2.5482978e-05)).Add(((Float)2.7139006e-05)).Add(((Float)2.8902651e-05)).Add(((Float)3.0780908e-05)).Add(((Float)3.2781225e-05)).Add(((Float)3.4911534e-05)).Add(((Float)3.7180282e-05)).Add(((Float)3.9596466e-05)).Add(((Float)4.2169667e-05)).Add(((Float)4.4910090e-05)).Add(((Float)4.7828601e-05)).Add(((Float)5.0936773e-05)).Add(((Float)5.4246931e-05)).Add(((Float)5.7772202e-05)).Add(((Float)6.1526565e-05)).Add(((Float)6.5524908e-05)).Add(((Float)6.9783085e-05)).Add(((Float)7.4317983e-05)).Add(((Float)7.9147585e-05)).Add(((Float)8.4291040e-05)).Add(((Float)8.9768747e-05)).Add(((Float)9.5602426e-05)).Add(((Float)0.00010181521)).Add(((Float)0.00010843174)).Add(((Float)0.00011547824)).Add(((Float)0.00012298267)).Add(((Float)0.00013097477)).Add(((Float)0.00013948625)).Add(((Float)0.00014855085)).Add(((Float)0.00015820453)).Add(((Float)0.00016848555)).Add(((Float)0.00017943469)).Add(((Float)0.00019109536)).Add(((Float)0.00020351382)).Add(((Float)0.00021673929)).Add(((Float)0.00023082423)).Add(((Float)0.00024582449)).Add(((Float)0.00026179955)).Add(((Float)0.00027881276)).Add(((Float)0.00029693158)).Add(((Float)0.00031622787)).Add(((Float)0.00033677814)).Add(((Float)0.00035866388)).Add(((Float)0.00038197188)).Add(((Float)0.00040679456)).Add(((Float)0.00043323036)).Add(((Float)0.00046138411)).Add(((Float)0.00049136745)).Add(((Float)0.00052329927)).Add(((Float)0.00055730621)).Add(((Float)0.00059352311)).Add(((Float)0.00063209358)).Add(((Float)0.00067317058)).Add(((Float)0.00071691700)).Add(((Float)0.00076350630)).Add(((Float)0.00081312324)).Add(((Float)0.00086596457)).Add(((Float)0.00092223983)).Add(((Float)0.00098217216)).Add(((Float)0.0010459992)).Add(((Float)0.0011139742)).Add(((Float)0.0011863665)).Add(((Float)0.0012634633)).Add(((Float)0.0013455702)).Add(((Float)0.0014330129)).Add(((Float)0.0015261382)).Add(((Float)0.0016253153)).Add(((Float)0.0017309374)).Add(((Float)0.0018434235)).Add(((Float)0.0019632195)).Add(((Float)0.0020908006)).Add(((Float)0.0022266726)).Add(((Float)0.0023713743)).Add(((Float)0.0025254795)).Add(((Float)0.0026895994)).Add(((Float)0.0028643847)).Add(((Float)0.0030505286)).Add(((Float)0.0032487691)).Add(((Float)0.0034598925)).Add(((Float)0.0036847358)).Add(((Float)0.0039241906)).Add(((Float)0.0041792066)).Add(((Float)0.0044507950)).Add(((Float)0.0047400328)).Add(((Float)0.0050480668)).Add(((Float)0.0053761186)).Add(((Float)0.0057254891)).Add(((Float)0.0060975636)).Add(((Float)0.0064938176)).Add(((Float)0.0069158225)).Add(((Float)0.0073652516)).Add(((Float)0.0078438871)).Add(((Float)0.0083536271)).Add(((Float)0.0088964928)).Add(((Float)0.009474637)).Add(((Float)0.010090352)).Add(((Float)0.010746080)).Add(((Float)0.011444421)).Add(((Float)0.012188144)).Add(((Float)0.012980198)).Add(((Float)0.013823725)).Add(((Float)0.014722068)).Add(((Float)0.015678791)).Add(((Float)0.016697687)).Add(((Float)0.017782797)).Add(((Float)0.018938423)).Add(((Float)0.020169149)).Add(((Float)0.021479854)).Add(((Float)0.022875735)).Add(((Float)0.024362330)).Add(((Float)0.025945531)).Add(((Float)0.027631618)).Add(((Float)0.029427276)).Add(((Float)0.031339626)).Add(((Float)0.033376252)).Add(((Float)0.035545228)).Add(((Float)0.037855157)).Add(((Float)0.040315199)).Add(((Float)0.042935108)).Add(((Float)0.045725273)).Add(((Float)0.048696758)).Add(((Float)0.051861348)).Add(((Float)0.055231591)).Add(((Float)0.058820850)).Add(((Float)0.062643361)).Add(((Float)0.066714279)).Add(((Float)0.071049749)).Add(((Float)0.075666962)).Add(((Float)0.080584227)).Add(((Float)0.085821044)).Add(((Float)0.091398179)).Add(((Float)0.097337747)).Add(((Float)0.10366330)).Add(((Float)0.11039993)).Add(((Float)0.11757434)).Add(((Float)0.12521498)).Add(((Float)0.13335215)).Add(((Float)0.14201813)).Add(((Float)0.15124727)).Add(((Float)0.16107617)).Add(((Float)0.17154380)).Add(((Float)0.18269168)).Add(((Float)0.19456402)).Add(((Float)0.20720788)).Add(((Float)0.22067342)).Add(((Float)0.23501402)).Add(((Float)0.25028656)).Add(((Float)0.26655159)).Add(((Float)0.28387361)).Add(((Float)0.30232132)).Add(((Float)0.32196786)).Add(((Float)0.34289114)).Add(((Float)0.36517414)).Add(((Float)0.38890521)).Add(((Float)0.41417847)).Add(((Float)0.44109412)).Add(((Float)0.46975890)).Add(((Float)0.50028648)).Add(((Float)0.53279791)).Add(((Float)0.56742212)).Add(((Float)0.60429640)).Add(((Float)0.64356699)).Add(((Float)0.68538959)).Add(((Float)0.72993007)).Add(((Float)0.77736504)).Add(((Float)0.82788260)).Add(((Float)0.88168307)).Add(((Float)0.9389798)).Add(((Float)1.0));
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
