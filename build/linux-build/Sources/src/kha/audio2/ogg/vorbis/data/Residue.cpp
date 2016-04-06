#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Codebook
#include <kha/audio2/ogg/vorbis/data/Codebook.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Header
#include <kha/audio2/ogg/vorbis/data/Header.h>
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

Void Residue_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Residue","new",0x389109ed,"kha.audio2.ogg.vorbis.data.Residue.new","kha/audio2/ogg/vorbis/data/Residue.hx",21,0xcd2d4964)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Residue_obj::~Residue_obj() { }

Dynamic Residue_obj::__CreateEmpty() { return  new Residue_obj; }
hx::ObjectPtr< Residue_obj > Residue_obj::__new()
{  hx::ObjectPtr< Residue_obj > _result_ = new Residue_obj();
	_result_->__construct();
	return _result_;}

Dynamic Residue_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Residue_obj > _result_ = new Residue_obj();
	_result_->__construct();
	return _result_;}

Void Residue_obj::decode( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,::kha::audio2::ogg::vorbis::data::Header header,Array< ::Dynamic > residueBuffers,int ch,int n,Array< bool > doNotDecode,Array< ::Dynamic > channelBuffers){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Residue","decode",0x3b2cd9c1,"kha.audio2.ogg.vorbis.data.Residue.decode","kha/audio2/ogg/vorbis/data/Residue.hx",84,0xcd2d4964)
		HX_STACK_THIS(this)
		HX_STACK_ARG(decodeState,"decodeState")
		HX_STACK_ARG(header,"header")
		HX_STACK_ARG(residueBuffers,"residueBuffers")
		HX_STACK_ARG(ch,"ch")
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(doNotDecode,"doNotDecode")
		HX_STACK_ARG(channelBuffers,"channelBuffers")
		HX_STACK_LINE(86)
		Array< ::Dynamic > codebooks = header->codebooks;		HX_STACK_VAR(codebooks,"codebooks");
		HX_STACK_LINE(87)
		int tmp = this->classbook;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		::kha::audio2::ogg::vorbis::data::Codebook tmp1 = codebooks->__unsafe_get(tmp).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		int tmp2 = tmp1->dimensions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		int classwords = tmp2;		HX_STACK_VAR(classwords,"classwords");
		HX_STACK_LINE(88)
		int tmp3 = this->end;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		int tmp5 = this->begin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		int tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		int nRead = tmp7;		HX_STACK_VAR(nRead,"nRead");
		HX_STACK_LINE(89)
		int tmp8 = this->partSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		int partSize = tmp8;		HX_STACK_VAR(partSize,"partSize");
		HX_STACK_LINE(90)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _int = nRead;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(90)
			bool tmp10 = (_int < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(90)
			if ((tmp10)){
				HX_STACK_LINE(90)
				tmp9 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(90)
				tmp9 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(90)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _int = partSize;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(90)
			bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(90)
			if ((tmp11)){
				HX_STACK_LINE(90)
				tmp10 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(90)
				tmp10 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(90)
		Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(90)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(90)
		int partRead = tmp12;		HX_STACK_VAR(partRead,"partRead");
		HX_STACK_LINE(91)
		Array< int > tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(91)
			Array< int > tmp14 = Array_obj< int >::__new();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(91)
			this1 = tmp14;
			HX_STACK_LINE(91)
			int tmp15 = (header->channel * partRead);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(91)
			int tmp16 = (tmp15 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(91)
			this1->__SetSizeExact(tmp16);
			HX_STACK_LINE(91)
			tmp13 = this1;
		}
		HX_STACK_LINE(91)
		Array< int > classifications = tmp13;		HX_STACK_VAR(classifications,"classifications");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			while((true)){
				HX_STACK_LINE(94)
				bool tmp14 = (_g < ch);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(94)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(94)
				if ((tmp15)){
					HX_STACK_LINE(94)
					break;
				}
				HX_STACK_LINE(94)
				int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(94)
				int i = tmp16;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(95)
				int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(95)
				bool tmp18 = doNotDecode->__unsafe_get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(95)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(95)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(95)
				if ((tmp20)){
					HX_STACK_LINE(96)
					int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(96)
					Array< Float > tmp22 = residueBuffers->__unsafe_get(tmp21).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(96)
					Array< Float > buffer = tmp22;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(97)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(97)
						int tmp23 = buffer->length;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(97)
						int _g1 = tmp23;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(97)
						while((true)){
							HX_STACK_LINE(97)
							bool tmp24 = (_g2 < _g1);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(97)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(97)
							if ((tmp25)){
								HX_STACK_LINE(97)
								break;
							}
							HX_STACK_LINE(97)
							int tmp26 = (_g2)++;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(97)
							int j = tmp26;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(98)
							int tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(98)
							Float tmp28 = buffer->__unsafe_set(tmp27,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(98)
							tmp28;
						}
					}
				}
			}
		}
		HX_STACK_LINE(103)
		int tmp14 = this->type;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(103)
		bool tmp15 = (tmp14 == (int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(103)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(103)
		if ((tmp15)){
			HX_STACK_LINE(103)
			tmp16 = (ch != (int)1);
		}
		else{
			HX_STACK_LINE(103)
			tmp16 = false;
		}
		HX_STACK_LINE(103)
		if ((tmp16)){
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(104)
				while((true)){
					HX_STACK_LINE(104)
					bool tmp17 = (_g < ch);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(104)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(104)
					if ((tmp18)){
						HX_STACK_LINE(104)
						break;
					}
					HX_STACK_LINE(104)
					int tmp19 = (_g)++;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(104)
					int j = tmp19;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(105)
					int tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(105)
					bool tmp21 = doNotDecode->__unsafe_get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(105)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(105)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(105)
					if ((tmp23)){
						HX_STACK_LINE(106)
						break;
					}
					else{
						HX_STACK_LINE(107)
						int tmp24 = j;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(107)
						int tmp25 = (ch - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(107)
						bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(107)
						if ((tmp26)){
							HX_STACK_LINE(108)
							return null();
						}
					}
				}
			}
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(113)
				while((true)){
					HX_STACK_LINE(113)
					bool tmp17 = (_g < (int)8);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(113)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(113)
					if ((tmp18)){
						HX_STACK_LINE(113)
						break;
					}
					HX_STACK_LINE(113)
					int tmp19 = (_g)++;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(113)
					int pass = tmp19;		HX_STACK_VAR(pass,"pass");
					HX_STACK_LINE(114)
					int pcount = (int)0;		HX_STACK_VAR(pcount,"pcount");
					HX_STACK_LINE(114)
					int classSet = (int)0;		HX_STACK_VAR(classSet,"classSet");
					HX_STACK_LINE(115)
					bool tmp20 = (ch == (int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(115)
					if ((tmp20)){
						HX_STACK_LINE(117)
						while((true)){
							HX_STACK_LINE(117)
							bool tmp21 = (pcount < partRead);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(117)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(117)
							if ((tmp22)){
								HX_STACK_LINE(117)
								break;
							}
							HX_STACK_LINE(118)
							int tmp23 = this->begin;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(118)
							int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(118)
							int tmp25 = (pcount * partSize);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(118)
							int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(118)
							int tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(118)
							int z = tmp27;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(119)
							int tmp28 = (int(z) & int((int)1));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(119)
							int cInter = tmp28;		HX_STACK_VAR(cInter,"cInter");
							HX_STACK_LINE(120)
							int tmp29 = hx::UShr(z,(int)1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(120)
							int pInter = tmp29;		HX_STACK_VAR(pInter,"pInter");
							HX_STACK_LINE(121)
							bool tmp30 = (pass == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(121)
							if ((tmp30)){
								HX_STACK_LINE(122)
								int tmp31 = this->classbook;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(122)
								::kha::audio2::ogg::vorbis::data::Codebook tmp32 = codebooks->__unsafe_get(tmp31).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(122)
								::kha::audio2::ogg::vorbis::data::Codebook c = tmp32;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(123)
								int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(123)
								{
									HX_STACK_LINE(123)
									int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(123)
									{
										HX_STACK_LINE(123)
										bool tmp35 = (decodeState->validBits < (int)10);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(123)
										if ((tmp35)){
											HX_STACK_LINE(123)
											decodeState->prepHuffman();
										}
										HX_STACK_LINE(123)
										int tmp36 = (int(decodeState->acc) & int((int)1023));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(123)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(123)
										int tmp38 = c->fastHuffman->__unsafe_get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(123)
										int i = tmp38;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(123)
										bool tmp39 = (i >= (int)0);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(123)
										if ((tmp39)){
											HX_STACK_LINE(123)
											int tmp40 = i;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(123)
											int tmp41 = c->codewordLengths->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(123)
											int l = tmp41;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(123)
											int tmp42 = hx::UShr(decodeState->acc,l);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(123)
											decodeState->acc = tmp42;
											HX_STACK_LINE(123)
											hx::SubEq(decodeState->validBits,l);
											HX_STACK_LINE(123)
											bool tmp43 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(123)
											if ((tmp43)){
												HX_STACK_LINE(123)
												decodeState->validBits = (int)0;
												HX_STACK_LINE(123)
												tmp34 = (int)-1;
											}
											else{
												HX_STACK_LINE(123)
												tmp34 = i;
											}
										}
										else{
											HX_STACK_LINE(123)
											::kha::audio2::ogg::vorbis::data::Codebook tmp40 = c;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(123)
											tmp34 = decodeState->decodeScalarRaw(tmp40);
										}
									}
									HX_STACK_LINE(123)
									int val = tmp34;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(123)
									bool tmp35 = c->sparse;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(123)
									if ((tmp35)){
										HX_STACK_LINE(123)
										int tmp36 = val;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(123)
										int tmp37 = c->sortedValues->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(123)
										val = tmp37;
									}
									HX_STACK_LINE(123)
									tmp33 = val;
								}
								HX_STACK_LINE(123)
								int q = tmp33;		HX_STACK_VAR(q,"q");
								HX_STACK_LINE(124)
								bool tmp34 = (q == (int)-1);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(124)
								if ((tmp34)){
									HX_STACK_LINE(125)
									return null();
								}
								HX_STACK_LINE(127)
								int i = classwords;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(128)
								while((true)){
									HX_STACK_LINE(128)
									int tmp35 = --(i);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(128)
									bool tmp36 = (tmp35 >= (int)0);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(128)
									bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(128)
									if ((tmp37)){
										HX_STACK_LINE(128)
										break;
									}
									HX_STACK_LINE(129)
									int tmp38 = (i + pcount);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(129)
									int tmp39 = q;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(129)
									int tmp40 = this->classifications;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(129)
									int tmp41 = hx::Mod(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(129)
									int tmp42 = classifications->__unsafe_set(tmp38,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(129)
									tmp42;
									HX_STACK_LINE(130)
									int tmp43 = q;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(130)
									int tmp44 = this->classifications;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(130)
									Float tmp45 = (Float(tmp43) / Float(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(130)
									int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(130)
									q = tmp46;
								}
							}
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(134)
								while((true)){
									HX_STACK_LINE(134)
									bool tmp31 = (_g1 < classwords);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(134)
									bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(134)
									if ((tmp32)){
										HX_STACK_LINE(134)
										break;
									}
									HX_STACK_LINE(134)
									int tmp33 = (_g1)++;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(134)
									int i = tmp33;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(135)
									bool tmp34 = (pcount >= partRead);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(135)
									if ((tmp34)){
										HX_STACK_LINE(136)
										break;
									}
									HX_STACK_LINE(138)
									int tmp35 = this->begin;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(138)
									int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(138)
									int tmp37 = (pcount * partSize);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(138)
									int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(138)
									int tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(138)
									int z1 = tmp39;		HX_STACK_VAR(z1,"z1");
									HX_STACK_LINE(139)
									int tmp40 = pcount;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(139)
									int tmp41 = classifications->__unsafe_get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(139)
									int c = tmp41;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(140)
									int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(140)
									{
										HX_STACK_LINE(140)
										Array< ::Dynamic > tmp43 = this->residueBooks;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(140)
										int tmp44 = c;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(140)
										Array< int > tmp45 = tmp43->__unsafe_get(tmp44).StaticCast< Array< int > >();		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(140)
										Array< int > this1 = tmp45;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(140)
										int tmp46 = pass;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(140)
										int tmp47 = this1->__unsafe_get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(140)
										tmp42 = tmp47;
									}
									HX_STACK_LINE(140)
									int b = tmp42;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(141)
									bool tmp43 = (b >= (int)0);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(141)
									if ((tmp43)){
										HX_STACK_LINE(142)
										int tmp44 = b;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(142)
										::kha::audio2::ogg::vorbis::data::Codebook tmp45 = codebooks->__unsafe_get(tmp44).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(142)
										::kha::audio2::ogg::vorbis::data::Codebook book = tmp45;		HX_STACK_VAR(book,"book");
										HX_STACK_LINE(144)
										::kha::audio2::ogg::vorbis::VorbisDecodeState tmp46 = decodeState;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(144)
										Array< ::Dynamic > tmp47 = residueBuffers;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(144)
										int tmp48 = ch;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(144)
										int tmp49 = cInter;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(144)
										int tmp50 = pInter;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(144)
										int tmp51 = n;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(144)
										int tmp52 = partSize;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(144)
										Dynamic tmp53 = book->decodeDeinterleaveRepeat(tmp46,tmp47,tmp48,tmp49,tmp50,tmp51,tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(144)
										Dynamic result = tmp53;		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(145)
										bool tmp54 = (result == null());		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(145)
										if ((tmp54)){
											HX_STACK_LINE(146)
											return null();
										}
										else{
											HX_STACK_LINE(148)
											cInter = result->__Field(HX_HCSTRING("cInter","\xb9","\xe7","\xa2","\xe6"), hx::paccDynamic );
											HX_STACK_LINE(149)
											pInter = result->__Field(HX_HCSTRING("pInter","\x8c","\x98","\x46","\x19"), hx::paccDynamic );
										}
										HX_STACK_LINE(261)
										Dynamic();
									}
									else{
										HX_STACK_LINE(153)
										int tmp44 = (z1 + partSize);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(153)
										z1 = tmp44;
										HX_STACK_LINE(154)
										int tmp45 = (int(z1) & int((int)1));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(154)
										cInter = tmp45;
										HX_STACK_LINE(155)
										int tmp46 = hx::UShr(z1,(int)1);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(155)
										pInter = tmp46;
									}
									HX_STACK_LINE(157)
									++(pcount);
								}
							}
							HX_STACK_LINE(261)
							Dynamic();
						}
					}
					else{
						HX_STACK_LINE(161)
						bool tmp21 = (ch == (int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(161)
						if ((tmp21)){
							HX_STACK_LINE(162)
							while((true)){
								HX_STACK_LINE(162)
								bool tmp22 = (pcount < partRead);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(162)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(162)
								if ((tmp23)){
									HX_STACK_LINE(162)
									break;
								}
								HX_STACK_LINE(163)
								int tmp24 = this->begin;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(163)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(163)
								int tmp26 = (pcount * partSize);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(163)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(163)
								int tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(163)
								int z = tmp28;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(164)
								int cInter = (int)0;		HX_STACK_VAR(cInter,"cInter");
								HX_STACK_LINE(165)
								int pInter = z;		HX_STACK_VAR(pInter,"pInter");
								HX_STACK_LINE(166)
								bool tmp29 = (pass == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(166)
								if ((tmp29)){
									HX_STACK_LINE(167)
									int tmp30 = this->classbook;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(167)
									::kha::audio2::ogg::vorbis::data::Codebook tmp31 = codebooks->__unsafe_get(tmp30).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(167)
									::kha::audio2::ogg::vorbis::data::Codebook c = tmp31;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(168)
									int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(168)
									{
										HX_STACK_LINE(168)
										int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(168)
										{
											HX_STACK_LINE(168)
											bool tmp34 = (decodeState->validBits < (int)10);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(168)
											if ((tmp34)){
												HX_STACK_LINE(168)
												decodeState->prepHuffman();
											}
											HX_STACK_LINE(168)
											int tmp35 = (int(decodeState->acc) & int((int)1023));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(168)
											int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(168)
											int tmp37 = c->fastHuffman->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(168)
											int i = tmp37;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(168)
											bool tmp38 = (i >= (int)0);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(168)
											if ((tmp38)){
												HX_STACK_LINE(168)
												int tmp39 = i;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(168)
												int tmp40 = c->codewordLengths->__unsafe_get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(168)
												int l = tmp40;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(168)
												int tmp41 = hx::UShr(decodeState->acc,l);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(168)
												decodeState->acc = tmp41;
												HX_STACK_LINE(168)
												hx::SubEq(decodeState->validBits,l);
												HX_STACK_LINE(168)
												bool tmp42 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(168)
												if ((tmp42)){
													HX_STACK_LINE(168)
													decodeState->validBits = (int)0;
													HX_STACK_LINE(168)
													tmp33 = (int)-1;
												}
												else{
													HX_STACK_LINE(168)
													tmp33 = i;
												}
											}
											else{
												HX_STACK_LINE(168)
												::kha::audio2::ogg::vorbis::data::Codebook tmp39 = c;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(168)
												tmp33 = decodeState->decodeScalarRaw(tmp39);
											}
										}
										HX_STACK_LINE(168)
										int val = tmp33;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(168)
										bool tmp34 = c->sparse;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(168)
										if ((tmp34)){
											HX_STACK_LINE(168)
											int tmp35 = val;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(168)
											int tmp36 = c->sortedValues->__unsafe_get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(168)
											val = tmp36;
										}
										HX_STACK_LINE(168)
										tmp32 = val;
									}
									HX_STACK_LINE(168)
									int q = tmp32;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(169)
									bool tmp33 = (q == (int)-1);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(169)
									if ((tmp33)){
										HX_STACK_LINE(169)
										return null();
									}
									HX_STACK_LINE(171)
									int i = classwords;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(172)
									while((true)){
										HX_STACK_LINE(172)
										int tmp34 = --(i);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(172)
										bool tmp35 = (tmp34 >= (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(172)
										bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(172)
										if ((tmp36)){
											HX_STACK_LINE(172)
											break;
										}
										HX_STACK_LINE(173)
										int tmp37 = (i + pcount);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(173)
										int tmp38 = q;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(173)
										int tmp39 = this->classifications;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(173)
										int tmp40 = hx::Mod(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(173)
										int tmp41 = classifications->__unsafe_set(tmp37,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(173)
										tmp41;
										HX_STACK_LINE(174)
										int tmp42 = q;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(174)
										int tmp43 = this->classifications;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(174)
										Float tmp44 = (Float(tmp42) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(174)
										int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(174)
										q = tmp45;
									}
								}
								HX_STACK_LINE(178)
								{
									HX_STACK_LINE(178)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(178)
									while((true)){
										HX_STACK_LINE(178)
										bool tmp30 = (_g1 < classwords);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(178)
										bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(178)
										if ((tmp31)){
											HX_STACK_LINE(178)
											break;
										}
										HX_STACK_LINE(178)
										int tmp32 = (_g1)++;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(178)
										int i = tmp32;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(179)
										bool tmp33 = (pcount >= partRead);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(179)
										if ((tmp33)){
											HX_STACK_LINE(180)
											break;
										}
										HX_STACK_LINE(182)
										int tmp34 = this->begin;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(182)
										int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(182)
										int tmp36 = (pcount * partSize);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(182)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(182)
										int tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(182)
										int z1 = tmp38;		HX_STACK_VAR(z1,"z1");
										HX_STACK_LINE(183)
										int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(183)
										{
											HX_STACK_LINE(183)
											Array< int > tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(183)
											{
												HX_STACK_LINE(183)
												int tmp41 = pcount;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(183)
												int tmp42 = classifications->__unsafe_get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(183)
												int index = tmp42;		HX_STACK_VAR(index,"index");
												HX_STACK_LINE(183)
												Array< ::Dynamic > tmp43 = this->residueBooks;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(183)
												int tmp44 = index;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(183)
												Array< int > tmp45 = tmp43->__unsafe_get(tmp44).StaticCast< Array< int > >();		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(183)
												tmp40 = tmp45;
											}
											HX_STACK_LINE(183)
											Array< int > this1 = tmp40;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(183)
											int tmp41 = pass;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(183)
											int tmp42 = this1->__unsafe_get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(183)
											tmp39 = tmp42;
										}
										HX_STACK_LINE(183)
										int b = tmp39;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(184)
										bool tmp40 = (b >= (int)0);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(184)
										if ((tmp40)){
											HX_STACK_LINE(185)
											int tmp41 = b;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(185)
											::kha::audio2::ogg::vorbis::data::Codebook tmp42 = codebooks->__unsafe_get(tmp41).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(185)
											::kha::audio2::ogg::vorbis::data::Codebook book = tmp42;		HX_STACK_VAR(book,"book");
											HX_STACK_LINE(187)
											::kha::audio2::ogg::vorbis::VorbisDecodeState tmp43 = decodeState;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(187)
											Array< ::Dynamic > tmp44 = residueBuffers;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(187)
											int tmp45 = ch;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(187)
											int tmp46 = cInter;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(187)
											int tmp47 = pInter;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(187)
											int tmp48 = n;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(187)
											int tmp49 = partSize;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(187)
											Dynamic tmp50 = book->decodeDeinterleaveRepeat(tmp43,tmp44,tmp45,tmp46,tmp47,tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(187)
											Dynamic result = tmp50;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(188)
											bool tmp51 = (result == null());		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(188)
											if ((tmp51)){
												HX_STACK_LINE(189)
												return null();
											}
											else{
												HX_STACK_LINE(191)
												cInter = result->__Field(HX_HCSTRING("cInter","\xb9","\xe7","\xa2","\xe6"), hx::paccDynamic );
												HX_STACK_LINE(192)
												pInter = result->__Field(HX_HCSTRING("pInter","\x8c","\x98","\x46","\x19"), hx::paccDynamic );
											}
											HX_STACK_LINE(261)
											Dynamic();
										}
										else{
											HX_STACK_LINE(196)
											int tmp41 = (z1 + partSize);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(196)
											z1 = tmp41;
											HX_STACK_LINE(197)
											cInter = (int)0;
											HX_STACK_LINE(198)
											pInter = z1;
										}
										HX_STACK_LINE(200)
										++(pcount);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(204)
							while((true)){
								HX_STACK_LINE(204)
								bool tmp22 = (pcount < partRead);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(204)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(204)
								if ((tmp23)){
									HX_STACK_LINE(204)
									break;
								}
								HX_STACK_LINE(205)
								int tmp24 = this->begin;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(205)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(205)
								int tmp26 = (pcount * partSize);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(205)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(205)
								int tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(205)
								int z = tmp28;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(206)
								Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(206)
								{
									HX_STACK_LINE(206)
									int _int = z;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(206)
									bool tmp30 = (_int < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(206)
									if ((tmp30)){
										HX_STACK_LINE(206)
										tmp29 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(206)
										tmp29 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(206)
								Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(206)
								{
									HX_STACK_LINE(206)
									int _int = ch;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(206)
									bool tmp31 = (_int < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(206)
									if ((tmp31)){
										HX_STACK_LINE(206)
										tmp30 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(206)
										tmp30 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(206)
								Float tmp31 = hx::Mod(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(206)
								int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(206)
								int cInter = tmp32;		HX_STACK_VAR(cInter,"cInter");
								HX_STACK_LINE(207)
								Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(207)
								{
									HX_STACK_LINE(207)
									int _int = z;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(207)
									bool tmp34 = (_int < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(207)
									if ((tmp34)){
										HX_STACK_LINE(207)
										tmp33 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(207)
										tmp33 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(207)
								Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(207)
								{
									HX_STACK_LINE(207)
									int _int = ch;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(207)
									bool tmp35 = (_int < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(207)
									if ((tmp35)){
										HX_STACK_LINE(207)
										tmp34 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(207)
										tmp34 = (_int + ((Float)0.0));
									}
								}
								HX_STACK_LINE(207)
								Float tmp35 = (Float(tmp33) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(207)
								int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(207)
								int pInter = tmp36;		HX_STACK_VAR(pInter,"pInter");
								HX_STACK_LINE(209)
								bool tmp37 = (pass == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(209)
								if ((tmp37)){
									HX_STACK_LINE(210)
									int tmp38 = this->classbook;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(210)
									::kha::audio2::ogg::vorbis::data::Codebook tmp39 = codebooks->__unsafe_get(tmp38).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(210)
									::kha::audio2::ogg::vorbis::data::Codebook c = tmp39;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(211)
									int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(211)
									{
										HX_STACK_LINE(211)
										int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(211)
										{
											HX_STACK_LINE(211)
											bool tmp42 = (decodeState->validBits < (int)10);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(211)
											if ((tmp42)){
												HX_STACK_LINE(211)
												decodeState->prepHuffman();
											}
											HX_STACK_LINE(211)
											int tmp43 = (int(decodeState->acc) & int((int)1023));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(211)
											int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(211)
											int tmp45 = c->fastHuffman->__unsafe_get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(211)
											int i = tmp45;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(211)
											bool tmp46 = (i >= (int)0);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(211)
											if ((tmp46)){
												HX_STACK_LINE(211)
												int tmp47 = i;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(211)
												int tmp48 = c->codewordLengths->__unsafe_get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(211)
												int l = tmp48;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(211)
												int tmp49 = hx::UShr(decodeState->acc,l);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(211)
												decodeState->acc = tmp49;
												HX_STACK_LINE(211)
												hx::SubEq(decodeState->validBits,l);
												HX_STACK_LINE(211)
												bool tmp50 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(211)
												if ((tmp50)){
													HX_STACK_LINE(211)
													decodeState->validBits = (int)0;
													HX_STACK_LINE(211)
													tmp41 = (int)-1;
												}
												else{
													HX_STACK_LINE(211)
													tmp41 = i;
												}
											}
											else{
												HX_STACK_LINE(211)
												::kha::audio2::ogg::vorbis::data::Codebook tmp47 = c;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(211)
												tmp41 = decodeState->decodeScalarRaw(tmp47);
											}
										}
										HX_STACK_LINE(211)
										int val = tmp41;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(211)
										bool tmp42 = c->sparse;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(211)
										if ((tmp42)){
											HX_STACK_LINE(211)
											int tmp43 = val;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(211)
											int tmp44 = c->sortedValues->__unsafe_get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(211)
											val = tmp44;
										}
										HX_STACK_LINE(211)
										tmp40 = val;
									}
									HX_STACK_LINE(211)
									int q = tmp40;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(212)
									bool tmp41 = (q == (int)-1);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(212)
									if ((tmp41)){
										HX_STACK_LINE(213)
										return null();
									}
									HX_STACK_LINE(216)
									int i = classwords;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(217)
									while((true)){
										HX_STACK_LINE(217)
										int tmp42 = --(i);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(217)
										bool tmp43 = (tmp42 >= (int)0);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(217)
										bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(217)
										if ((tmp44)){
											HX_STACK_LINE(217)
											break;
										}
										HX_STACK_LINE(218)
										int tmp45 = (i + pcount);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(218)
										int tmp46 = q;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(218)
										int tmp47 = this->classifications;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(218)
										int tmp48 = hx::Mod(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(218)
										int tmp49 = classifications->__unsafe_set(tmp45,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(218)
										tmp49;
										HX_STACK_LINE(219)
										int tmp50 = q;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(219)
										int tmp51 = this->classifications;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(219)
										Float tmp52 = (Float(tmp50) / Float(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(219)
										int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(219)
										q = tmp53;
									}
								}
								HX_STACK_LINE(223)
								{
									HX_STACK_LINE(223)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(223)
									while((true)){
										HX_STACK_LINE(223)
										bool tmp38 = (_g1 < classwords);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(223)
										bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(223)
										if ((tmp39)){
											HX_STACK_LINE(223)
											break;
										}
										HX_STACK_LINE(223)
										int tmp40 = (_g1)++;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(223)
										int i = tmp40;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(224)
										bool tmp41 = (pcount >= partRead);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(224)
										if ((tmp41)){
											HX_STACK_LINE(225)
											break;
										}
										HX_STACK_LINE(227)
										int tmp42 = this->begin;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(227)
										int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(227)
										int tmp44 = (pcount * partSize);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(227)
										int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(227)
										int tmp46 = (tmp43 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(227)
										int z1 = tmp46;		HX_STACK_VAR(z1,"z1");
										HX_STACK_LINE(228)
										int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(228)
										{
											HX_STACK_LINE(228)
											Array< int > tmp48;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(228)
											{
												HX_STACK_LINE(228)
												int tmp49 = pcount;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(228)
												int tmp50 = classifications->__unsafe_get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(228)
												int index = tmp50;		HX_STACK_VAR(index,"index");
												HX_STACK_LINE(228)
												Array< ::Dynamic > tmp51 = this->residueBooks;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(228)
												int tmp52 = index;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(228)
												Array< int > tmp53 = tmp51->__unsafe_get(tmp52).StaticCast< Array< int > >();		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(228)
												tmp48 = tmp53;
											}
											HX_STACK_LINE(228)
											Array< int > this1 = tmp48;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(228)
											int tmp49 = pass;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(228)
											int tmp50 = this1->__unsafe_get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(228)
											tmp47 = tmp50;
										}
										HX_STACK_LINE(228)
										int b = tmp47;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(229)
										bool tmp48 = (b >= (int)0);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(229)
										if ((tmp48)){
											HX_STACK_LINE(230)
											int tmp49 = b;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(230)
											::kha::audio2::ogg::vorbis::data::Codebook tmp50 = codebooks->__unsafe_get(tmp49).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(230)
											::kha::audio2::ogg::vorbis::data::Codebook book = tmp50;		HX_STACK_VAR(book,"book");
											HX_STACK_LINE(232)
											::kha::audio2::ogg::vorbis::VorbisDecodeState tmp51 = decodeState;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(232)
											Array< ::Dynamic > tmp52 = residueBuffers;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(232)
											int tmp53 = ch;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(232)
											int tmp54 = cInter;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(232)
											int tmp55 = pInter;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(232)
											int tmp56 = n;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(232)
											int tmp57 = partSize;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(232)
											Dynamic tmp58 = book->decodeDeinterleaveRepeat(tmp51,tmp52,tmp53,tmp54,tmp55,tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(232)
											Dynamic result = tmp58;		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(233)
											bool tmp59 = (result == null());		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(233)
											if ((tmp59)){
												HX_STACK_LINE(234)
												return null();
											}
											else{
												HX_STACK_LINE(236)
												cInter = result->__Field(HX_HCSTRING("cInter","\xb9","\xe7","\xa2","\xe6"), hx::paccDynamic );
												HX_STACK_LINE(237)
												pInter = result->__Field(HX_HCSTRING("pInter","\x8c","\x98","\x46","\x19"), hx::paccDynamic );
											}
											HX_STACK_LINE(261)
											Dynamic();
										}
										else{
											HX_STACK_LINE(241)
											int tmp49 = (z1 + partSize);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(241)
											z1 = tmp49;
											HX_STACK_LINE(242)
											Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(242)
											{
												HX_STACK_LINE(242)
												int _int = z1;		HX_STACK_VAR(_int,"int");
												HX_STACK_LINE(242)
												bool tmp51 = (_int < (int)0);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(242)
												if ((tmp51)){
													HX_STACK_LINE(242)
													tmp50 = (((Float)4294967296.0) + _int);
												}
												else{
													HX_STACK_LINE(242)
													tmp50 = (_int + ((Float)0.0));
												}
											}
											HX_STACK_LINE(242)
											Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(242)
											{
												HX_STACK_LINE(242)
												int _int = ch;		HX_STACK_VAR(_int,"int");
												HX_STACK_LINE(242)
												bool tmp52 = (_int < (int)0);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(242)
												if ((tmp52)){
													HX_STACK_LINE(242)
													tmp51 = (((Float)4294967296.0) + _int);
												}
												else{
													HX_STACK_LINE(242)
													tmp51 = (_int + ((Float)0.0));
												}
											}
											HX_STACK_LINE(242)
											Float tmp52 = hx::Mod(tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(242)
											int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(242)
											cInter = tmp53;
											HX_STACK_LINE(243)
											Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(243)
											{
												HX_STACK_LINE(243)
												int _int = z1;		HX_STACK_VAR(_int,"int");
												HX_STACK_LINE(243)
												bool tmp55 = (_int < (int)0);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(243)
												if ((tmp55)){
													HX_STACK_LINE(243)
													tmp54 = (((Float)4294967296.0) + _int);
												}
												else{
													HX_STACK_LINE(243)
													tmp54 = (_int + ((Float)0.0));
												}
											}
											HX_STACK_LINE(243)
											Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(243)
											{
												HX_STACK_LINE(243)
												int _int = ch;		HX_STACK_VAR(_int,"int");
												HX_STACK_LINE(243)
												bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(243)
												if ((tmp56)){
													HX_STACK_LINE(243)
													tmp55 = (((Float)4294967296.0) + _int);
												}
												else{
													HX_STACK_LINE(243)
													tmp55 = (_int + ((Float)0.0));
												}
											}
											HX_STACK_LINE(243)
											Float tmp56 = (Float(tmp54) / Float(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(243)
											int tmp57 = ::Std_obj::_int(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(243)
											pInter = tmp57;
										}
										HX_STACK_LINE(245)
										++(pcount);
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(250)
			return null();
		}
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(254)
			while((true)){
				HX_STACK_LINE(254)
				bool tmp17 = (_g < (int)8);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(254)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(254)
				if ((tmp18)){
					HX_STACK_LINE(254)
					break;
				}
				HX_STACK_LINE(254)
				int tmp19 = (_g)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(254)
				int pass = tmp19;		HX_STACK_VAR(pass,"pass");
				HX_STACK_LINE(255)
				int pcount = (int)0;		HX_STACK_VAR(pcount,"pcount");
				HX_STACK_LINE(256)
				int classSet = (int)0;		HX_STACK_VAR(classSet,"classSet");
				HX_STACK_LINE(257)
				while((true)){
					HX_STACK_LINE(257)
					bool tmp20 = (pcount < partRead);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(257)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(257)
					if ((tmp21)){
						HX_STACK_LINE(257)
						break;
					}
					HX_STACK_LINE(258)
					bool tmp22 = (pass == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(258)
					if ((tmp22)){
						HX_STACK_LINE(259)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(259)
						while((true)){
							HX_STACK_LINE(259)
							bool tmp23 = (_g1 < ch);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(259)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(259)
							if ((tmp24)){
								HX_STACK_LINE(259)
								break;
							}
							HX_STACK_LINE(259)
							int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(259)
							int j = tmp25;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(260)
							int tmp26 = j;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(260)
							bool tmp27 = doNotDecode->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(260)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(260)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(260)
							if ((tmp29)){
								HX_STACK_LINE(261)
								int tmp30 = this->classbook;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(261)
								::kha::audio2::ogg::vorbis::data::Codebook tmp31 = codebooks->__unsafe_get(tmp30).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(261)
								::kha::audio2::ogg::vorbis::data::Codebook c = tmp31;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(262)
								int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(262)
								{
									HX_STACK_LINE(262)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(262)
									{
										HX_STACK_LINE(262)
										bool tmp34 = (decodeState->validBits < (int)10);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(262)
										if ((tmp34)){
											HX_STACK_LINE(262)
											decodeState->prepHuffman();
										}
										HX_STACK_LINE(262)
										int tmp35 = (int(decodeState->acc) & int((int)1023));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(262)
										int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(262)
										int tmp37 = c->fastHuffman->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(262)
										int i = tmp37;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(262)
										bool tmp38 = (i >= (int)0);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(262)
										if ((tmp38)){
											HX_STACK_LINE(262)
											int tmp39 = i;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(262)
											int tmp40 = c->codewordLengths->__unsafe_get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(262)
											int l = tmp40;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(262)
											int tmp41 = hx::UShr(decodeState->acc,l);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(262)
											decodeState->acc = tmp41;
											HX_STACK_LINE(262)
											hx::SubEq(decodeState->validBits,l);
											HX_STACK_LINE(262)
											bool tmp42 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(262)
											if ((tmp42)){
												HX_STACK_LINE(262)
												decodeState->validBits = (int)0;
												HX_STACK_LINE(262)
												tmp33 = (int)-1;
											}
											else{
												HX_STACK_LINE(262)
												tmp33 = i;
											}
										}
										else{
											HX_STACK_LINE(262)
											::kha::audio2::ogg::vorbis::data::Codebook tmp39 = c;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(262)
											tmp33 = decodeState->decodeScalarRaw(tmp39);
										}
									}
									HX_STACK_LINE(262)
									int val = tmp33;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(262)
									bool tmp34 = c->sparse;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(262)
									if ((tmp34)){
										HX_STACK_LINE(262)
										int tmp35 = val;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(262)
										int tmp36 = c->sortedValues->__unsafe_get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(262)
										val = tmp36;
									}
									HX_STACK_LINE(262)
									tmp32 = val;
								}
								HX_STACK_LINE(262)
								int temp = tmp32;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(263)
								bool tmp33 = (temp == (int)-1);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(263)
								if ((tmp33)){
									HX_STACK_LINE(264)
									return null();
								}
								HX_STACK_LINE(266)
								int i = classwords;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(267)
								while((true)){
									HX_STACK_LINE(267)
									int tmp34 = --(i);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(267)
									bool tmp35 = (tmp34 >= (int)0);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(267)
									bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(267)
									if ((tmp36)){
										HX_STACK_LINE(267)
										break;
									}
									HX_STACK_LINE(268)
									int tmp37 = (j * partRead);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(268)
									int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(268)
									int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(268)
									int tmp40 = pcount;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(268)
									int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(268)
									int tmp42 = temp;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(268)
									int tmp43 = this->classifications;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(268)
									int tmp44 = hx::Mod(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(268)
									int tmp45 = classifications->__unsafe_set(tmp41,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(268)
									tmp45;
									HX_STACK_LINE(269)
									int tmp46 = temp;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(269)
									int tmp47 = this->classifications;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(269)
									Float tmp48 = (Float(tmp46) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(269)
									int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(269)
									temp = tmp49;
								}
							}
						}
					}
					HX_STACK_LINE(274)
					{
						HX_STACK_LINE(274)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(274)
						while((true)){
							HX_STACK_LINE(274)
							bool tmp23 = (_g1 < classwords);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(274)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(274)
							if ((tmp24)){
								HX_STACK_LINE(274)
								break;
							}
							HX_STACK_LINE(274)
							int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(274)
							int i = tmp25;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(275)
							bool tmp26 = (pcount >= partRead);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(275)
							if ((tmp26)){
								HX_STACK_LINE(276)
								break;
							}
							HX_STACK_LINE(278)
							{
								HX_STACK_LINE(278)
								int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(278)
								while((true)){
									HX_STACK_LINE(278)
									bool tmp27 = (_g2 < ch);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(278)
									bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(278)
									if ((tmp28)){
										HX_STACK_LINE(278)
										break;
									}
									HX_STACK_LINE(278)
									int tmp29 = (_g2)++;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(278)
									int j = tmp29;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(279)
									int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(279)
									bool tmp31 = doNotDecode->__unsafe_get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(279)
									bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(279)
									bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(279)
									if ((tmp33)){
										HX_STACK_LINE(280)
										int tmp34 = (j * partRead);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(280)
										int tmp35 = pcount;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(280)
										int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(280)
										int tmp37 = classifications->__unsafe_get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(280)
										int c = tmp37;		HX_STACK_VAR(c,"c");
										HX_STACK_LINE(281)
										int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(281)
										{
											HX_STACK_LINE(281)
											Array< ::Dynamic > tmp39 = this->residueBooks;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(281)
											int tmp40 = c;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(281)
											Array< int > tmp41 = tmp39->__unsafe_get(tmp40).StaticCast< Array< int > >();		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(281)
											Array< int > this1 = tmp41;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(281)
											int tmp42 = pass;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(281)
											int tmp43 = this1->__unsafe_get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(281)
											tmp38 = tmp43;
										}
										HX_STACK_LINE(281)
										int b = tmp38;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(282)
										bool tmp39 = (b >= (int)0);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(282)
										if ((tmp39)){
											HX_STACK_LINE(283)
											int tmp40 = j;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(283)
											Array< Float > tmp41 = residueBuffers->__unsafe_get(tmp40).StaticCast< Array< Float > >();		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(283)
											Array< Float > target = tmp41;		HX_STACK_VAR(target,"target");
											HX_STACK_LINE(284)
											int tmp42 = this->begin;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(284)
											int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(284)
											int tmp44 = (pcount * partSize);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(284)
											int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(284)
											int tmp46 = (tmp43 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(284)
											int offset = tmp46;		HX_STACK_VAR(offset,"offset");
											HX_STACK_LINE(285)
											int n1 = partSize;		HX_STACK_VAR(n1,"n1");
											HX_STACK_LINE(286)
											int tmp47 = b;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(286)
											::kha::audio2::ogg::vorbis::data::Codebook tmp48 = codebooks->__unsafe_get(tmp47).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(286)
											::kha::audio2::ogg::vorbis::data::Codebook book = tmp48;		HX_STACK_VAR(book,"book");
											HX_STACK_LINE(287)
											::kha::audio2::ogg::vorbis::VorbisDecodeState tmp49 = decodeState;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(287)
											Array< Float > tmp50 = target;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(287)
											int tmp51 = offset;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(287)
											int tmp52 = n1;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(287)
											int tmp53 = this->type;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(287)
											bool tmp54 = book->residueDecode(tmp49,tmp50,tmp51,tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(287)
											bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(287)
											if ((tmp55)){
												HX_STACK_LINE(288)
												return null();
											}
										}
									}
								}
							}
							HX_STACK_LINE(293)
							++(pcount);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Residue_obj,decode,(void))

::kha::audio2::ogg::vorbis::data::Residue Residue_obj::read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< ::Dynamic > codebooks){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Residue","read",0x48fc6d29,"kha.audio2.ogg.vorbis.data.Residue.read","kha/audio2/ogg/vorbis/data/Residue.hx",25,0xcd2d4964)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_ARG(codebooks,"codebooks")
	HX_STACK_LINE(26)
	::kha::audio2::ogg::vorbis::data::Residue r = ::kha::audio2::ogg::vorbis::data::Residue_obj::__new();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(27)
	bool tmp = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	if ((tmp)){
		HX_STACK_LINE(27)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(27)
		bool tmp2 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		if ((tmp2)){
			HX_STACK_LINE(27)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			if ((tmp3)){
				HX_STACK_LINE(27)
				int tmp4 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(27)
				int tmp5 = (int)-8;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(27)
				int tmp6 = decodeState->readBits(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(27)
				int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(27)
				tmp1 = (tmp4 + tmp7);
			}
			else{
				HX_STACK_LINE(27)
				bool tmp4 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(27)
				if ((tmp4)){
					HX_STACK_LINE(27)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(27)
				while((true)){
					HX_STACK_LINE(27)
					bool tmp5 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(27)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(27)
					if ((tmp5)){
						HX_STACK_LINE(27)
						bool tmp7 = decodeState->lastSeg;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(27)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(27)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(27)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(27)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(27)
						if ((tmp11)){
							HX_STACK_LINE(27)
							int tmp12 = decodeState->next();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(27)
							int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(27)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(27)
							tmp6 = (tmp14 == (int)0);
						}
						else{
							HX_STACK_LINE(27)
							tmp6 = true;
						}
					}
					else{
						HX_STACK_LINE(27)
						tmp6 = false;
					}
					HX_STACK_LINE(27)
					if ((tmp6)){
						HX_STACK_LINE(27)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(27)
						break;
					}
					else{
						HX_STACK_LINE(27)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(27)
						int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(27)
						{
							HX_STACK_LINE(27)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(27)
							{
								HX_STACK_LINE(27)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(27)
								tmp8 = decodeState->input->readByte();
							}
							HX_STACK_LINE(27)
							int tmp9 = decodeState->validBits;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(27)
							int tmp10 = (int(tmp8) << int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(27)
							int b = tmp10;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(27)
							tmp7 = (decodeState->acc + b);
						}
						HX_STACK_LINE(27)
						decodeState->acc = tmp7;
						HX_STACK_LINE(27)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(27)
					bool tmp7 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(27)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(27)
					if ((tmp8)){
						HX_STACK_LINE(27)
						break;
					}
				}
				HX_STACK_LINE(27)
				bool tmp5 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(27)
				if ((tmp5)){
					HX_STACK_LINE(27)
					tmp1 = (int)0;
				}
				else{
					HX_STACK_LINE(27)
					int tmp6 = decodeState->acc;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(27)
					int tmp7 = (int)65536;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(27)
					int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(27)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(27)
					int tmp10 = (int(tmp6) & int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(27)
					int z = tmp10;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(27)
					int tmp11 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(27)
					decodeState->acc = tmp11;
					HX_STACK_LINE(27)
					hx::SubEq(decodeState->validBits,(int)16);
					HX_STACK_LINE(27)
					tmp1 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(27)
			int tmp3 = decodeState->acc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			int tmp4 = (int)65536;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(27)
			int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(27)
			int tmp7 = (int(tmp3) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(27)
			int z = tmp7;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(27)
			int tmp8 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(27)
			decodeState->acc = tmp8;
			HX_STACK_LINE(27)
			hx::SubEq(decodeState->validBits,(int)16);
			HX_STACK_LINE(27)
			tmp1 = z;
		}
	}
	HX_STACK_LINE(27)
	r->type = tmp1;
	HX_STACK_LINE(28)
	bool tmp2 = (r->type > (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	if ((tmp2)){
		HX_STACK_LINE(29)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Residue.hx","\x73","\x8f","\x87","\x2d"),29,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Residue","\x7b","\x8f","\x98","\xce"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp4 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(32)
	Array< int > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(32)
		Array< int > tmp4 = Array_obj< int >::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(32)
		this1 = tmp4;
		HX_STACK_LINE(32)
		this1->__SetSizeExact((int)64);
		HX_STACK_LINE(32)
		tmp3 = this1;
	}
	HX_STACK_LINE(32)
	Array< int > residueCascade = tmp3;		HX_STACK_VAR(residueCascade,"residueCascade");
	HX_STACK_LINE(33)
	bool tmp4 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	if ((tmp4)){
		HX_STACK_LINE(33)
		tmp5 = (int)0;
	}
	else{
		HX_STACK_LINE(33)
		bool tmp6 = (decodeState->validBits < (int)24);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		if ((tmp6)){
			HX_STACK_LINE(33)
			bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(33)
			if ((tmp7)){
				HX_STACK_LINE(33)
				int tmp8 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(33)
				int tmp9 = (int)0;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(33)
				int tmp10 = decodeState->readBits(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(33)
				int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(33)
				tmp5 = (tmp8 + tmp11);
			}
			else{
				HX_STACK_LINE(33)
				bool tmp8 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(33)
				if ((tmp8)){
					HX_STACK_LINE(33)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(33)
				while((true)){
					HX_STACK_LINE(33)
					bool tmp9 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(33)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(33)
					if ((tmp9)){
						HX_STACK_LINE(33)
						bool tmp11 = decodeState->lastSeg;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(33)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(33)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(33)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(33)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(33)
						if ((tmp15)){
							HX_STACK_LINE(33)
							int tmp16 = decodeState->next();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(33)
							int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(33)
							int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(33)
							tmp10 = (tmp18 == (int)0);
						}
						else{
							HX_STACK_LINE(33)
							tmp10 = true;
						}
					}
					else{
						HX_STACK_LINE(33)
						tmp10 = false;
					}
					HX_STACK_LINE(33)
					if ((tmp10)){
						HX_STACK_LINE(33)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(33)
						break;
					}
					else{
						HX_STACK_LINE(33)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(33)
						int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(33)
						{
							HX_STACK_LINE(33)
							int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(33)
							{
								HX_STACK_LINE(33)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(33)
								tmp12 = decodeState->input->readByte();
							}
							HX_STACK_LINE(33)
							int tmp13 = decodeState->validBits;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(33)
							int tmp14 = (int(tmp12) << int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(33)
							int b = tmp14;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(33)
							tmp11 = (decodeState->acc + b);
						}
						HX_STACK_LINE(33)
						decodeState->acc = tmp11;
						HX_STACK_LINE(33)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(33)
					bool tmp11 = (decodeState->validBits < (int)24);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(33)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(33)
					if ((tmp12)){
						HX_STACK_LINE(33)
						break;
					}
				}
				HX_STACK_LINE(33)
				bool tmp9 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(33)
				if ((tmp9)){
					HX_STACK_LINE(33)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(33)
					int tmp10 = decodeState->acc;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(33)
					int tmp11 = (int)16777216;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(33)
					int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(33)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(33)
					int tmp14 = (int(tmp10) & int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(33)
					int z = tmp14;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(33)
					int tmp15 = hx::UShr(decodeState->acc,(int)24);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(33)
					decodeState->acc = tmp15;
					HX_STACK_LINE(33)
					hx::SubEq(decodeState->validBits,(int)24);
					HX_STACK_LINE(33)
					tmp5 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(33)
			int tmp7 = decodeState->acc;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(33)
			int tmp8 = (int)16777216;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(33)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(33)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(33)
			int tmp11 = (int(tmp7) & int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(33)
			int z = tmp11;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(33)
			int tmp12 = hx::UShr(decodeState->acc,(int)24);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(33)
			decodeState->acc = tmp12;
			HX_STACK_LINE(33)
			hx::SubEq(decodeState->validBits,(int)24);
			HX_STACK_LINE(33)
			tmp5 = z;
		}
	}
	HX_STACK_LINE(33)
	r->begin = tmp5;
	HX_STACK_LINE(34)
	bool tmp6 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	if ((tmp6)){
		HX_STACK_LINE(34)
		tmp7 = (int)0;
	}
	else{
		HX_STACK_LINE(34)
		bool tmp8 = (decodeState->validBits < (int)24);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		if ((tmp8)){
			HX_STACK_LINE(34)
			bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(34)
			if ((tmp9)){
				HX_STACK_LINE(34)
				int tmp10 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(34)
				int tmp11 = (int)0;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(34)
				int tmp12 = decodeState->readBits(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(34)
				int tmp13 = (int(tmp12) << int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(34)
				tmp7 = (tmp10 + tmp13);
			}
			else{
				HX_STACK_LINE(34)
				bool tmp10 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(34)
				if ((tmp10)){
					HX_STACK_LINE(34)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(34)
				while((true)){
					HX_STACK_LINE(34)
					bool tmp11 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(34)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(34)
					if ((tmp11)){
						HX_STACK_LINE(34)
						bool tmp13 = decodeState->lastSeg;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(34)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(34)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(34)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(34)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(34)
						if ((tmp17)){
							HX_STACK_LINE(34)
							int tmp18 = decodeState->next();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(34)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(34)
							int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(34)
							tmp12 = (tmp20 == (int)0);
						}
						else{
							HX_STACK_LINE(34)
							tmp12 = true;
						}
					}
					else{
						HX_STACK_LINE(34)
						tmp12 = false;
					}
					HX_STACK_LINE(34)
					if ((tmp12)){
						HX_STACK_LINE(34)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(34)
						break;
					}
					else{
						HX_STACK_LINE(34)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(34)
						int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(34)
						{
							HX_STACK_LINE(34)
							int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(34)
							{
								HX_STACK_LINE(34)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(34)
								tmp14 = decodeState->input->readByte();
							}
							HX_STACK_LINE(34)
							int tmp15 = decodeState->validBits;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(34)
							int tmp16 = (int(tmp14) << int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(34)
							int b = tmp16;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(34)
							tmp13 = (decodeState->acc + b);
						}
						HX_STACK_LINE(34)
						decodeState->acc = tmp13;
						HX_STACK_LINE(34)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(34)
					bool tmp13 = (decodeState->validBits < (int)24);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(34)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(34)
					if ((tmp14)){
						HX_STACK_LINE(34)
						break;
					}
				}
				HX_STACK_LINE(34)
				bool tmp11 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(34)
				if ((tmp11)){
					HX_STACK_LINE(34)
					tmp7 = (int)0;
				}
				else{
					HX_STACK_LINE(34)
					int tmp12 = decodeState->acc;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(34)
					int tmp13 = (int)16777216;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(34)
					int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(34)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(34)
					int tmp16 = (int(tmp12) & int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(34)
					int z = tmp16;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(34)
					int tmp17 = hx::UShr(decodeState->acc,(int)24);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(34)
					decodeState->acc = tmp17;
					HX_STACK_LINE(34)
					hx::SubEq(decodeState->validBits,(int)24);
					HX_STACK_LINE(34)
					tmp7 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(34)
			int tmp9 = decodeState->acc;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(34)
			int tmp10 = (int)16777216;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(34)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(34)
			int tmp13 = (int(tmp9) & int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(34)
			int z = tmp13;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(34)
			int tmp14 = hx::UShr(decodeState->acc,(int)24);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(34)
			decodeState->acc = tmp14;
			HX_STACK_LINE(34)
			hx::SubEq(decodeState->validBits,(int)24);
			HX_STACK_LINE(34)
			tmp7 = z;
		}
	}
	HX_STACK_LINE(34)
	r->end = tmp7;
	HX_STACK_LINE(35)
	bool tmp8 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(35)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(35)
	if ((tmp8)){
		HX_STACK_LINE(35)
		tmp9 = (int)0;
	}
	else{
		HX_STACK_LINE(35)
		bool tmp10 = (decodeState->validBits < (int)24);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		if ((tmp10)){
			HX_STACK_LINE(35)
			bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			if ((tmp11)){
				HX_STACK_LINE(35)
				int tmp12 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(35)
				int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(35)
				int tmp14 = decodeState->readBits(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				tmp9 = (tmp12 + tmp15);
			}
			else{
				HX_STACK_LINE(35)
				bool tmp12 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(35)
				if ((tmp12)){
					HX_STACK_LINE(35)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(35)
				while((true)){
					HX_STACK_LINE(35)
					bool tmp13 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(35)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(35)
					if ((tmp13)){
						HX_STACK_LINE(35)
						bool tmp15 = decodeState->lastSeg;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(35)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(35)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(35)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(35)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(35)
						if ((tmp19)){
							HX_STACK_LINE(35)
							int tmp20 = decodeState->next();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(35)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(35)
							int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(35)
							tmp14 = (tmp22 == (int)0);
						}
						else{
							HX_STACK_LINE(35)
							tmp14 = true;
						}
					}
					else{
						HX_STACK_LINE(35)
						tmp14 = false;
					}
					HX_STACK_LINE(35)
					if ((tmp14)){
						HX_STACK_LINE(35)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(35)
						break;
					}
					else{
						HX_STACK_LINE(35)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(35)
						int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(35)
						{
							HX_STACK_LINE(35)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(35)
							{
								HX_STACK_LINE(35)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(35)
								tmp16 = decodeState->input->readByte();
							}
							HX_STACK_LINE(35)
							int tmp17 = decodeState->validBits;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(35)
							int tmp18 = (int(tmp16) << int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(35)
							int b = tmp18;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(35)
							tmp15 = (decodeState->acc + b);
						}
						HX_STACK_LINE(35)
						decodeState->acc = tmp15;
						HX_STACK_LINE(35)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(35)
					bool tmp15 = (decodeState->validBits < (int)24);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(35)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(35)
					if ((tmp16)){
						HX_STACK_LINE(35)
						break;
					}
				}
				HX_STACK_LINE(35)
				bool tmp13 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(35)
				if ((tmp13)){
					HX_STACK_LINE(35)
					tmp9 = (int)0;
				}
				else{
					HX_STACK_LINE(35)
					int tmp14 = decodeState->acc;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(35)
					int tmp15 = (int)16777216;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(35)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(35)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(35)
					int tmp18 = (int(tmp14) & int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(35)
					int z = tmp18;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(35)
					int tmp19 = hx::UShr(decodeState->acc,(int)24);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(35)
					decodeState->acc = tmp19;
					HX_STACK_LINE(35)
					hx::SubEq(decodeState->validBits,(int)24);
					HX_STACK_LINE(35)
					tmp9 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(35)
			int tmp11 = decodeState->acc;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			int tmp12 = (int)16777216;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(35)
			int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(35)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(35)
			int tmp15 = (int(tmp11) & int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(35)
			int z = tmp15;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(35)
			int tmp16 = hx::UShr(decodeState->acc,(int)24);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(35)
			decodeState->acc = tmp16;
			HX_STACK_LINE(35)
			hx::SubEq(decodeState->validBits,(int)24);
			HX_STACK_LINE(35)
			tmp9 = z;
		}
	}
	HX_STACK_LINE(35)
	int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	r->partSize = tmp10;
	HX_STACK_LINE(36)
	bool tmp11 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(36)
	int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(36)
	if ((tmp11)){
		HX_STACK_LINE(36)
		tmp12 = (int)0;
	}
	else{
		HX_STACK_LINE(36)
		bool tmp13 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		if ((tmp13)){
			HX_STACK_LINE(36)
			bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(36)
			if ((tmp14)){
				HX_STACK_LINE(36)
				int tmp15 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(36)
				int tmp16 = (int)-18;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(36)
				int tmp17 = decodeState->readBits(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(36)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(36)
				tmp12 = (tmp15 + tmp18);
			}
			else{
				HX_STACK_LINE(36)
				bool tmp15 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(36)
				if ((tmp15)){
					HX_STACK_LINE(36)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(36)
				while((true)){
					HX_STACK_LINE(36)
					bool tmp16 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(36)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(36)
					if ((tmp16)){
						HX_STACK_LINE(36)
						bool tmp18 = decodeState->lastSeg;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(36)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(36)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(36)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(36)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(36)
						if ((tmp22)){
							HX_STACK_LINE(36)
							int tmp23 = decodeState->next();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(36)
							int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(36)
							int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(36)
							tmp17 = (tmp25 == (int)0);
						}
						else{
							HX_STACK_LINE(36)
							tmp17 = true;
						}
					}
					else{
						HX_STACK_LINE(36)
						tmp17 = false;
					}
					HX_STACK_LINE(36)
					if ((tmp17)){
						HX_STACK_LINE(36)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(36)
						break;
					}
					else{
						HX_STACK_LINE(36)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(36)
						int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(36)
						{
							HX_STACK_LINE(36)
							int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(36)
							{
								HX_STACK_LINE(36)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(36)
								tmp19 = decodeState->input->readByte();
							}
							HX_STACK_LINE(36)
							int tmp20 = decodeState->validBits;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(36)
							int tmp21 = (int(tmp19) << int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(36)
							int b = tmp21;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(36)
							tmp18 = (decodeState->acc + b);
						}
						HX_STACK_LINE(36)
						decodeState->acc = tmp18;
						HX_STACK_LINE(36)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(36)
					bool tmp18 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(36)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(36)
					if ((tmp19)){
						HX_STACK_LINE(36)
						break;
					}
				}
				HX_STACK_LINE(36)
				bool tmp16 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(36)
				if ((tmp16)){
					HX_STACK_LINE(36)
					tmp12 = (int)0;
				}
				else{
					HX_STACK_LINE(36)
					int tmp17 = decodeState->acc;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(36)
					int tmp18 = (int)64;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(36)
					int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(36)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(36)
					int tmp21 = (int(tmp17) & int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(36)
					int z = tmp21;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(36)
					int tmp22 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(36)
					decodeState->acc = tmp22;
					HX_STACK_LINE(36)
					hx::SubEq(decodeState->validBits,(int)6);
					HX_STACK_LINE(36)
					tmp12 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(36)
			int tmp14 = decodeState->acc;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(36)
			int tmp15 = (int)64;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(36)
			int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(36)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(36)
			int tmp18 = (int(tmp14) & int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(36)
			int z = tmp18;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(36)
			int tmp19 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(36)
			decodeState->acc = tmp19;
			HX_STACK_LINE(36)
			hx::SubEq(decodeState->validBits,(int)6);
			HX_STACK_LINE(36)
			tmp12 = z;
		}
	}
	HX_STACK_LINE(36)
	int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(36)
	int tmp14 = r->classifications = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(36)
	int classifications = tmp14;		HX_STACK_VAR(classifications,"classifications");
	HX_STACK_LINE(37)
	bool tmp15 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(37)
	int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(37)
	if ((tmp15)){
		HX_STACK_LINE(37)
		tmp16 = (int)0;
	}
	else{
		HX_STACK_LINE(37)
		bool tmp17 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(37)
		if ((tmp17)){
			HX_STACK_LINE(37)
			bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(37)
			if ((tmp18)){
				HX_STACK_LINE(37)
				int tmp19 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(37)
				int tmp20 = (int)-16;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(37)
				int tmp21 = decodeState->readBits(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(37)
				int tmp22 = (int(tmp21) << int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(37)
				tmp16 = (tmp19 + tmp22);
			}
			else{
				HX_STACK_LINE(37)
				bool tmp19 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(37)
				if ((tmp19)){
					HX_STACK_LINE(37)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(37)
				while((true)){
					HX_STACK_LINE(37)
					bool tmp20 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(37)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(37)
					if ((tmp20)){
						HX_STACK_LINE(37)
						bool tmp22 = decodeState->lastSeg;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(37)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(37)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(37)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(37)
						bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(37)
						if ((tmp26)){
							HX_STACK_LINE(37)
							int tmp27 = decodeState->next();		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(37)
							int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(37)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(37)
							tmp21 = (tmp29 == (int)0);
						}
						else{
							HX_STACK_LINE(37)
							tmp21 = true;
						}
					}
					else{
						HX_STACK_LINE(37)
						tmp21 = false;
					}
					HX_STACK_LINE(37)
					if ((tmp21)){
						HX_STACK_LINE(37)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(37)
						break;
					}
					else{
						HX_STACK_LINE(37)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(37)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(37)
						{
							HX_STACK_LINE(37)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(37)
							{
								HX_STACK_LINE(37)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(37)
								tmp23 = decodeState->input->readByte();
							}
							HX_STACK_LINE(37)
							int tmp24 = decodeState->validBits;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(37)
							int tmp25 = (int(tmp23) << int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(37)
							int b = tmp25;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(37)
							tmp22 = (decodeState->acc + b);
						}
						HX_STACK_LINE(37)
						decodeState->acc = tmp22;
						HX_STACK_LINE(37)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(37)
					bool tmp22 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(37)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(37)
					if ((tmp23)){
						HX_STACK_LINE(37)
						break;
					}
				}
				HX_STACK_LINE(37)
				bool tmp20 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(37)
				if ((tmp20)){
					HX_STACK_LINE(37)
					tmp16 = (int)0;
				}
				else{
					HX_STACK_LINE(37)
					int tmp21 = decodeState->acc;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(37)
					int tmp22 = (int)256;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(37)
					int tmp23 = (tmp22 - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(37)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(37)
					int tmp25 = (int(tmp21) & int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(37)
					int z = tmp25;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(37)
					int tmp26 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(37)
					decodeState->acc = tmp26;
					HX_STACK_LINE(37)
					hx::SubEq(decodeState->validBits,(int)8);
					HX_STACK_LINE(37)
					tmp16 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(37)
			int tmp18 = decodeState->acc;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(37)
			int tmp19 = (int)256;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(37)
			int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(37)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(37)
			int tmp22 = (int(tmp18) & int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(37)
			int z = tmp22;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(37)
			int tmp23 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(37)
			decodeState->acc = tmp23;
			HX_STACK_LINE(37)
			hx::SubEq(decodeState->validBits,(int)8);
			HX_STACK_LINE(37)
			tmp16 = z;
		}
	}
	HX_STACK_LINE(37)
	r->classbook = tmp16;
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		int _g = r->classifications;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		while((true)){
			HX_STACK_LINE(39)
			bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(39)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(39)
			if ((tmp18)){
				HX_STACK_LINE(39)
				break;
			}
			HX_STACK_LINE(39)
			int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(39)
			int j = tmp19;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(40)
			int highBits = (int)0;		HX_STACK_VAR(highBits,"highBits");
			HX_STACK_LINE(41)
			bool tmp20 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(41)
			int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(41)
			if ((tmp20)){
				HX_STACK_LINE(41)
				tmp21 = (int)0;
			}
			else{
				HX_STACK_LINE(41)
				bool tmp22 = (decodeState->validBits < (int)3);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(41)
				if ((tmp22)){
					HX_STACK_LINE(41)
					bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(41)
					if ((tmp23)){
						HX_STACK_LINE(41)
						int tmp24 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(41)
						int tmp25 = (int)-21;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(41)
						int tmp26 = decodeState->readBits(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(41)
						int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(41)
						tmp21 = (tmp24 + tmp27);
					}
					else{
						HX_STACK_LINE(41)
						bool tmp24 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(41)
						if ((tmp24)){
							HX_STACK_LINE(41)
							decodeState->acc = (int)0;
						}
						HX_STACK_LINE(41)
						while((true)){
							HX_STACK_LINE(41)
							bool tmp25 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(41)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(41)
							if ((tmp25)){
								HX_STACK_LINE(41)
								bool tmp27 = decodeState->lastSeg;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(41)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(41)
								bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(41)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(41)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(41)
								if ((tmp31)){
									HX_STACK_LINE(41)
									int tmp32 = decodeState->next();		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(41)
									int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(41)
									int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(41)
									tmp26 = (tmp34 == (int)0);
								}
								else{
									HX_STACK_LINE(41)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(41)
								tmp26 = false;
							}
							HX_STACK_LINE(41)
							if ((tmp26)){
								HX_STACK_LINE(41)
								decodeState->validBits = (int)-1;
								HX_STACK_LINE(41)
								break;
							}
							else{
								HX_STACK_LINE(41)
								(decodeState->bytesInSeg)--;
								HX_STACK_LINE(41)
								int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(41)
								{
									HX_STACK_LINE(41)
									int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(41)
									{
										HX_STACK_LINE(41)
										hx::AddEq(decodeState->inputPosition,(int)1);
										HX_STACK_LINE(41)
										tmp28 = decodeState->input->readByte();
									}
									HX_STACK_LINE(41)
									int tmp29 = decodeState->validBits;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(41)
									int tmp30 = (int(tmp28) << int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(41)
									int b = tmp30;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(41)
									tmp27 = (decodeState->acc + b);
								}
								HX_STACK_LINE(41)
								decodeState->acc = tmp27;
								HX_STACK_LINE(41)
								hx::AddEq(decodeState->validBits,(int)8);
							}
							HX_STACK_LINE(41)
							bool tmp27 = (decodeState->validBits < (int)3);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(41)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(41)
							if ((tmp28)){
								HX_STACK_LINE(41)
								break;
							}
						}
						HX_STACK_LINE(41)
						bool tmp25 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(41)
						if ((tmp25)){
							HX_STACK_LINE(41)
							tmp21 = (int)0;
						}
						else{
							HX_STACK_LINE(41)
							int tmp26 = decodeState->acc;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(41)
							int tmp27 = (int)8;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(41)
							int tmp28 = (tmp27 - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(41)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(41)
							int tmp30 = (int(tmp26) & int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(41)
							int z = tmp30;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(41)
							int tmp31 = hx::UShr(decodeState->acc,(int)3);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(41)
							decodeState->acc = tmp31;
							HX_STACK_LINE(41)
							hx::SubEq(decodeState->validBits,(int)3);
							HX_STACK_LINE(41)
							tmp21 = z;
						}
					}
				}
				else{
					HX_STACK_LINE(41)
					int tmp23 = decodeState->acc;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(41)
					int tmp24 = (int)8;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(41)
					int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(41)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(41)
					int tmp27 = (int(tmp23) & int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(41)
					int z = tmp27;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(41)
					int tmp28 = hx::UShr(decodeState->acc,(int)3);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(41)
					decodeState->acc = tmp28;
					HX_STACK_LINE(41)
					hx::SubEq(decodeState->validBits,(int)3);
					HX_STACK_LINE(41)
					tmp21 = z;
				}
			}
			HX_STACK_LINE(41)
			int lowBits = tmp21;		HX_STACK_VAR(lowBits,"lowBits");
			HX_STACK_LINE(42)
			bool tmp22 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(42)
			int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(42)
			if ((tmp22)){
				HX_STACK_LINE(42)
				tmp23 = (int)0;
			}
			else{
				HX_STACK_LINE(42)
				bool tmp24 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(42)
				if ((tmp24)){
					HX_STACK_LINE(42)
					bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(42)
					if ((tmp25)){
						HX_STACK_LINE(42)
						int tmp26 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(42)
						int tmp27 = (int)-23;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(42)
						int tmp28 = decodeState->readBits(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(42)
						int tmp29 = (int(tmp28) << int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(42)
						tmp23 = (tmp26 + tmp29);
					}
					else{
						HX_STACK_LINE(42)
						bool tmp26 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(42)
						if ((tmp26)){
							HX_STACK_LINE(42)
							decodeState->acc = (int)0;
						}
						HX_STACK_LINE(42)
						while((true)){
							HX_STACK_LINE(42)
							bool tmp27 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(42)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(42)
							if ((tmp27)){
								HX_STACK_LINE(42)
								bool tmp29 = decodeState->lastSeg;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(42)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(42)
								bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(42)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(42)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(42)
								if ((tmp33)){
									HX_STACK_LINE(42)
									int tmp34 = decodeState->next();		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(42)
									int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(42)
									int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(42)
									tmp28 = (tmp36 == (int)0);
								}
								else{
									HX_STACK_LINE(42)
									tmp28 = true;
								}
							}
							else{
								HX_STACK_LINE(42)
								tmp28 = false;
							}
							HX_STACK_LINE(42)
							if ((tmp28)){
								HX_STACK_LINE(42)
								decodeState->validBits = (int)-1;
								HX_STACK_LINE(42)
								break;
							}
							else{
								HX_STACK_LINE(42)
								(decodeState->bytesInSeg)--;
								HX_STACK_LINE(42)
								int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(42)
								{
									HX_STACK_LINE(42)
									int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(42)
									{
										HX_STACK_LINE(42)
										hx::AddEq(decodeState->inputPosition,(int)1);
										HX_STACK_LINE(42)
										tmp30 = decodeState->input->readByte();
									}
									HX_STACK_LINE(42)
									int tmp31 = decodeState->validBits;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(42)
									int tmp32 = (int(tmp30) << int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(42)
									int b = tmp32;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(42)
									tmp29 = (decodeState->acc + b);
								}
								HX_STACK_LINE(42)
								decodeState->acc = tmp29;
								HX_STACK_LINE(42)
								hx::AddEq(decodeState->validBits,(int)8);
							}
							HX_STACK_LINE(42)
							bool tmp29 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(42)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(42)
							if ((tmp30)){
								HX_STACK_LINE(42)
								break;
							}
						}
						HX_STACK_LINE(42)
						bool tmp27 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(42)
						if ((tmp27)){
							HX_STACK_LINE(42)
							tmp23 = (int)0;
						}
						else{
							HX_STACK_LINE(42)
							int tmp28 = decodeState->acc;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(42)
							int tmp29 = (int)2;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(42)
							int tmp30 = (tmp29 - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(42)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(42)
							int tmp32 = (int(tmp28) & int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(42)
							int z = tmp32;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(42)
							int tmp33 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(42)
							decodeState->acc = tmp33;
							HX_STACK_LINE(42)
							hx::SubEq(decodeState->validBits,(int)1);
							HX_STACK_LINE(42)
							tmp23 = z;
						}
					}
				}
				else{
					HX_STACK_LINE(42)
					int tmp25 = decodeState->acc;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(42)
					int tmp26 = (int)2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(42)
					int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(42)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(42)
					int tmp29 = (int(tmp25) & int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(42)
					int z = tmp29;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(42)
					int tmp30 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(42)
					decodeState->acc = tmp30;
					HX_STACK_LINE(42)
					hx::SubEq(decodeState->validBits,(int)1);
					HX_STACK_LINE(42)
					tmp23 = z;
				}
			}
			HX_STACK_LINE(42)
			bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(42)
			if ((tmp24)){
				HX_STACK_LINE(43)
				bool tmp25 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(43)
				int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(43)
				if ((tmp25)){
					HX_STACK_LINE(43)
					tmp26 = (int)0;
				}
				else{
					HX_STACK_LINE(43)
					bool tmp27 = (decodeState->validBits < (int)5);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(43)
					if ((tmp27)){
						HX_STACK_LINE(43)
						bool tmp28 = false;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(43)
						if ((tmp28)){
							HX_STACK_LINE(43)
							int tmp29 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(43)
							int tmp30 = (int)-19;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(43)
							int tmp31 = decodeState->readBits(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(43)
							int tmp32 = (int(tmp31) << int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(43)
							tmp26 = (tmp29 + tmp32);
						}
						else{
							HX_STACK_LINE(43)
							bool tmp29 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(43)
							if ((tmp29)){
								HX_STACK_LINE(43)
								decodeState->acc = (int)0;
							}
							HX_STACK_LINE(43)
							while((true)){
								HX_STACK_LINE(43)
								bool tmp30 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(43)
								bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(43)
								if ((tmp30)){
									HX_STACK_LINE(43)
									bool tmp32 = decodeState->lastSeg;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(43)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(43)
									bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(43)
									bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(43)
									bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(43)
									if ((tmp36)){
										HX_STACK_LINE(43)
										int tmp37 = decodeState->next();		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(43)
										int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(43)
										int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(43)
										tmp31 = (tmp39 == (int)0);
									}
									else{
										HX_STACK_LINE(43)
										tmp31 = true;
									}
								}
								else{
									HX_STACK_LINE(43)
									tmp31 = false;
								}
								HX_STACK_LINE(43)
								if ((tmp31)){
									HX_STACK_LINE(43)
									decodeState->validBits = (int)-1;
									HX_STACK_LINE(43)
									break;
								}
								else{
									HX_STACK_LINE(43)
									(decodeState->bytesInSeg)--;
									HX_STACK_LINE(43)
									int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(43)
									{
										HX_STACK_LINE(43)
										int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(43)
										{
											HX_STACK_LINE(43)
											hx::AddEq(decodeState->inputPosition,(int)1);
											HX_STACK_LINE(43)
											tmp33 = decodeState->input->readByte();
										}
										HX_STACK_LINE(43)
										int tmp34 = decodeState->validBits;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(43)
										int tmp35 = (int(tmp33) << int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(43)
										int b = tmp35;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(43)
										tmp32 = (decodeState->acc + b);
									}
									HX_STACK_LINE(43)
									decodeState->acc = tmp32;
									HX_STACK_LINE(43)
									hx::AddEq(decodeState->validBits,(int)8);
								}
								HX_STACK_LINE(43)
								bool tmp32 = (decodeState->validBits < (int)5);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(43)
								bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(43)
								if ((tmp33)){
									HX_STACK_LINE(43)
									break;
								}
							}
							HX_STACK_LINE(43)
							bool tmp30 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(43)
							if ((tmp30)){
								HX_STACK_LINE(43)
								tmp26 = (int)0;
							}
							else{
								HX_STACK_LINE(43)
								int tmp31 = decodeState->acc;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(43)
								int tmp32 = (int)32;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(43)
								int tmp33 = (tmp32 - (int)1);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(43)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(43)
								int tmp35 = (int(tmp31) & int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(43)
								int z = tmp35;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(43)
								int tmp36 = hx::UShr(decodeState->acc,(int)5);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(43)
								decodeState->acc = tmp36;
								HX_STACK_LINE(43)
								hx::SubEq(decodeState->validBits,(int)5);
								HX_STACK_LINE(43)
								tmp26 = z;
							}
						}
					}
					else{
						HX_STACK_LINE(43)
						int tmp28 = decodeState->acc;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(43)
						int tmp29 = (int)32;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(43)
						int tmp30 = (tmp29 - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(43)
						int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(43)
						int tmp32 = (int(tmp28) & int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(43)
						int z = tmp32;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(43)
						int tmp33 = hx::UShr(decodeState->acc,(int)5);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(43)
						decodeState->acc = tmp33;
						HX_STACK_LINE(43)
						hx::SubEq(decodeState->validBits,(int)5);
						HX_STACK_LINE(43)
						tmp26 = z;
					}
				}
				HX_STACK_LINE(43)
				highBits = tmp26;
			}
			HX_STACK_LINE(45)
			int tmp25 = j;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(45)
			int tmp26 = (highBits * (int)8);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(45)
			int tmp27 = lowBits;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(45)
			int tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(45)
			int tmp29 = residueCascade->__unsafe_set(tmp25,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(45)
			tmp29;
		}
	}
	HX_STACK_LINE(48)
	Array< ::Dynamic > tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(48)
		Array< ::Dynamic > tmp18 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(48)
		this1 = tmp18;
		HX_STACK_LINE(48)
		int tmp19 = r->classifications;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(48)
		this1->__SetSizeExact(tmp19);
		HX_STACK_LINE(48)
		tmp17 = this1;
	}
	HX_STACK_LINE(48)
	r->residueBooks = tmp17;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		int _g = r->classifications;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		while((true)){
			HX_STACK_LINE(49)
			bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(49)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(49)
			if ((tmp19)){
				HX_STACK_LINE(49)
				break;
			}
			HX_STACK_LINE(49)
			int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(49)
			int j = tmp20;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				Array< int > tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					Array< int > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(50)
					Array< int > tmp22 = Array_obj< int >::__new();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(50)
					this1 = tmp22;
					HX_STACK_LINE(50)
					this1->__SetSizeExact((int)8);
					HX_STACK_LINE(50)
					tmp21 = this1;
				}
				HX_STACK_LINE(50)
				Array< int > val = tmp21;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(50)
				int tmp22 = j;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(50)
				Array< int > tmp23 = val;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(50)
				Array< int > tmp24 = r->residueBooks->__unsafe_set(tmp22,tmp23).StaticCast< Array< int > >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(50)
				tmp24;
			}
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(51)
				while((true)){
					HX_STACK_LINE(51)
					bool tmp21 = (_g2 < (int)8);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(51)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(51)
					if ((tmp22)){
						HX_STACK_LINE(51)
						break;
					}
					HX_STACK_LINE(51)
					int tmp23 = (_g2)++;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(51)
					int k = tmp23;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(52)
					int tmp24 = j;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(52)
					int tmp25 = residueCascade->__unsafe_get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(52)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(52)
					int tmp27 = (int((int)1) << int(k));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(52)
					int tmp28 = (int(tmp26) & int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(52)
					bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(52)
					if ((tmp29)){
						HX_STACK_LINE(53)
						{
							HX_STACK_LINE(53)
							int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(53)
							Array< int > tmp31 = r->residueBooks->__unsafe_get(tmp30).StaticCast< Array< int > >();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(53)
							Array< int > this1 = tmp31;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(53)
							bool tmp32 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(53)
							int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(53)
							if ((tmp32)){
								HX_STACK_LINE(53)
								tmp33 = (int)0;
							}
							else{
								HX_STACK_LINE(53)
								bool tmp34 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(53)
								if ((tmp34)){
									HX_STACK_LINE(53)
									bool tmp35 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(53)
									if ((tmp35)){
										HX_STACK_LINE(53)
										decodeState->acc = (int)0;
									}
									HX_STACK_LINE(53)
									while((true)){
										HX_STACK_LINE(53)
										bool tmp36 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(53)
										bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(53)
										if ((tmp36)){
											HX_STACK_LINE(53)
											bool tmp38 = decodeState->lastSeg;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(53)
											bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(53)
											bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(53)
											bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(53)
											bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(53)
											if ((tmp42)){
												HX_STACK_LINE(53)
												int tmp43 = decodeState->next();		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(53)
												int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(53)
												int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(53)
												tmp37 = (tmp45 == (int)0);
											}
											else{
												HX_STACK_LINE(53)
												tmp37 = true;
											}
										}
										else{
											HX_STACK_LINE(53)
											tmp37 = false;
										}
										HX_STACK_LINE(53)
										if ((tmp37)){
											HX_STACK_LINE(53)
											decodeState->validBits = (int)-1;
											HX_STACK_LINE(53)
											break;
										}
										else{
											HX_STACK_LINE(53)
											(decodeState->bytesInSeg)--;
											HX_STACK_LINE(53)
											int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(53)
											{
												HX_STACK_LINE(53)
												int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(53)
												{
													HX_STACK_LINE(53)
													hx::AddEq(decodeState->inputPosition,(int)1);
													HX_STACK_LINE(53)
													tmp39 = decodeState->input->readByte();
												}
												HX_STACK_LINE(53)
												int tmp40 = decodeState->validBits;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(53)
												int tmp41 = (int(tmp39) << int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(53)
												int b = tmp41;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(53)
												tmp38 = (decodeState->acc + b);
											}
											HX_STACK_LINE(53)
											decodeState->acc = tmp38;
											HX_STACK_LINE(53)
											hx::AddEq(decodeState->validBits,(int)8);
										}
										HX_STACK_LINE(53)
										bool tmp38 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(53)
										bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(53)
										if ((tmp39)){
											HX_STACK_LINE(53)
											break;
										}
									}
									HX_STACK_LINE(53)
									bool tmp36 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(53)
									if ((tmp36)){
										HX_STACK_LINE(53)
										tmp33 = (int)0;
									}
									else{
										HX_STACK_LINE(53)
										int tmp37 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(53)
										int z = tmp37;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(53)
										int tmp38 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(53)
										decodeState->acc = tmp38;
										HX_STACK_LINE(53)
										hx::SubEq(decodeState->validBits,(int)8);
										HX_STACK_LINE(53)
										tmp33 = z;
									}
								}
								else{
									HX_STACK_LINE(53)
									int tmp35 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(53)
									int z = tmp35;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(53)
									int tmp36 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(53)
									decodeState->acc = tmp36;
									HX_STACK_LINE(53)
									hx::SubEq(decodeState->validBits,(int)8);
									HX_STACK_LINE(53)
									tmp33 = z;
								}
							}
							HX_STACK_LINE(53)
							int val = tmp33;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(53)
							int tmp34 = k;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(53)
							int tmp35 = val;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(53)
							int tmp36 = this1->__unsafe_set(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(53)
							tmp36;
						}
						HX_STACK_LINE(54)
						int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(54)
						{
							HX_STACK_LINE(54)
							int tmp31 = j;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(54)
							Array< int > tmp32 = r->residueBooks->__unsafe_get(tmp31).StaticCast< Array< int > >();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(54)
							Array< int > this1 = tmp32;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(54)
							int tmp33 = k;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(54)
							int tmp34 = this1->__unsafe_get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(54)
							tmp30 = tmp34;
						}
						HX_STACK_LINE(54)
						int tmp31 = codebooks->length;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(54)
						bool tmp32 = (tmp30 >= tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(54)
						if ((tmp32)){
							HX_STACK_LINE(55)
							Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("Residue.hx","\x73","\x8f","\x87","\x2d"),55,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Residue","\x7b","\x8f","\x98","\xce"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(55)
							::kha::audio2::ogg::vorbis::data::ReaderError tmp34 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(55)
							HX_STACK_DO_THROW(tmp34);
						}
					}
					else{
						HX_STACK_LINE(58)
						int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(58)
						Array< int > tmp31 = r->residueBooks->__unsafe_get(tmp30).StaticCast< Array< int > >();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(58)
						Array< int > this1 = tmp31;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(58)
						int tmp32 = k;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(58)
						int tmp33 = this1->__unsafe_set(tmp32,(int)-1);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(58)
						tmp33;
					}
				}
			}
		}
	}
	HX_STACK_LINE(65)
	int tmp18 = r->classbook;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(65)
	::kha::audio2::ogg::vorbis::data::Codebook tmp19 = codebooks->__unsafe_get(tmp18).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(65)
	int tmp20 = tmp19->entries;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(65)
	int el = tmp20;		HX_STACK_VAR(el,"el");
	HX_STACK_LINE(66)
	int tmp21 = r->classbook;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(66)
	::kha::audio2::ogg::vorbis::data::Codebook tmp22 = codebooks->__unsafe_get(tmp21).StaticCast< ::kha::audio2::ogg::vorbis::data::Codebook >();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(66)
	int tmp23 = tmp22->dimensions;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(66)
	int classwords = tmp23;		HX_STACK_VAR(classwords,"classwords");
	HX_STACK_LINE(67)
	Array< ::Dynamic > tmp24;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(67)
		Array< ::Dynamic > tmp25 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(67)
		this1 = tmp25;
		HX_STACK_LINE(67)
		int tmp26 = el;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(67)
		this1->__SetSizeExact(tmp26);
		HX_STACK_LINE(67)
		tmp24 = this1;
	}
	HX_STACK_LINE(67)
	r->classdata = tmp24;
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		while((true)){
			HX_STACK_LINE(69)
			bool tmp25 = (_g < el);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(69)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(69)
			if ((tmp26)){
				HX_STACK_LINE(69)
				break;
			}
			HX_STACK_LINE(69)
			int tmp27 = (_g)++;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(69)
			int j = tmp27;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(70)
			int temp = j;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(71)
			int k = classwords;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(72)
			Array< int > tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				Array< int > tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					Array< int > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(72)
					Array< int > tmp30 = Array_obj< int >::__new();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(72)
					this1 = tmp30;
					HX_STACK_LINE(72)
					int tmp31 = classwords;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(72)
					this1->__SetSizeExact(tmp31);
					HX_STACK_LINE(72)
					tmp29 = this1;
				}
				HX_STACK_LINE(72)
				Array< int > val = tmp29;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(72)
				int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(72)
				Array< int > tmp31 = val;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(72)
				Array< int > tmp32 = r->classdata->__unsafe_set(tmp30,tmp31).StaticCast< Array< int > >();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(72)
				tmp28 = tmp32;
			}
			HX_STACK_LINE(72)
			Array< int > cd = tmp28;		HX_STACK_VAR(cd,"cd");
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				int tmp29 = --(k);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(73)
				bool tmp30 = (tmp29 >= (int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(73)
				bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(73)
				if ((tmp31)){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(74)
				int tmp32 = k;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(74)
				int tmp33 = hx::Mod(temp,classifications);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(74)
				int tmp34 = cd->__unsafe_set(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(74)
				tmp34;
				HX_STACK_LINE(75)
				Float tmp35 = (Float(temp) / Float(classifications));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(75)
				int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(75)
				temp = tmp36;
			}
		}
	}
	HX_STACK_LINE(79)
	::kha::audio2::ogg::vorbis::data::Residue tmp25 = r;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(79)
	return tmp25;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Residue_obj,read,return )


Residue_obj::Residue_obj()
{
}

void Residue_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Residue);
	HX_MARK_MEMBER_NAME(begin,"begin");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(partSize,"partSize");
	HX_MARK_MEMBER_NAME(classifications,"classifications");
	HX_MARK_MEMBER_NAME(classbook,"classbook");
	HX_MARK_MEMBER_NAME(classdata,"classdata");
	HX_MARK_MEMBER_NAME(residueBooks,"residueBooks");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void Residue_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(begin,"begin");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(partSize,"partSize");
	HX_VISIT_MEMBER_NAME(classifications,"classifications");
	HX_VISIT_MEMBER_NAME(classbook,"classbook");
	HX_VISIT_MEMBER_NAME(classdata,"classdata");
	HX_VISIT_MEMBER_NAME(residueBooks,"residueBooks");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic Residue_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return decode_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"partSize") ) { return partSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"classbook") ) { return classbook; }
		if (HX_FIELD_EQ(inName,"classdata") ) { return classdata; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"residueBooks") ) { return residueBooks; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classifications") ) { return classifications; }
	}
	return super::__Field(inName,inCallProp);
}

bool Residue_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true;  }
	}
	return false;
}

Dynamic Residue_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { begin=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"partSize") ) { partSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"classbook") ) { classbook=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classdata") ) { classdata=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"residueBooks") ) { residueBooks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classifications") ) { classifications=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Residue_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Residue_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("partSize","\x54","\x26","\x0b","\x5e"));
	outFields->push(HX_HCSTRING("classifications","\x8d","\xf6","\x53","\xe7"));
	outFields->push(HX_HCSTRING("classbook","\x61","\x78","\x80","\xe9"));
	outFields->push(HX_HCSTRING("classdata","\x62","\x4a","\xc8","\xea"));
	outFields->push(HX_HCSTRING("residueBooks","\xdf","\xe7","\xab","\x0a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Residue_obj,begin),HX_HCSTRING("begin","\x29","\xea","\x55","\xb0")},
	{hx::fsInt,(int)offsetof(Residue_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsInt,(int)offsetof(Residue_obj,partSize),HX_HCSTRING("partSize","\x54","\x26","\x0b","\x5e")},
	{hx::fsInt,(int)offsetof(Residue_obj,classifications),HX_HCSTRING("classifications","\x8d","\xf6","\x53","\xe7")},
	{hx::fsInt,(int)offsetof(Residue_obj,classbook),HX_HCSTRING("classbook","\x61","\x78","\x80","\xe9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Residue_obj,classdata),HX_HCSTRING("classdata","\x62","\x4a","\xc8","\xea")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Residue_obj,residueBooks),HX_HCSTRING("residueBooks","\xdf","\xe7","\xab","\x0a")},
	{hx::fsInt,(int)offsetof(Residue_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("partSize","\x54","\x26","\x0b","\x5e"),
	HX_HCSTRING("classifications","\x8d","\xf6","\x53","\xe7"),
	HX_HCSTRING("classbook","\x61","\x78","\x80","\xe9"),
	HX_HCSTRING("classdata","\x62","\x4a","\xc8","\xea"),
	HX_HCSTRING("residueBooks","\xdf","\xe7","\xab","\x0a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("decode","\x2e","\x5d","\xed","\x64"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Residue_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Residue_obj::__mClass,"__mClass");
};

#endif

hx::Class Residue_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	::String(null()) };

void Residue_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Residue","\x7b","\x8f","\x98","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Residue_obj::__GetStatic;
	__mClass->mSetStaticField = &Residue_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Residue_obj >;
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
} // end namespace data
