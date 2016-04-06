#include <hxcpp.h>

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
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor
#include <kha/audio2/ogg/vorbis/data/Floor.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor0
#include <kha/audio2/ogg/vorbis/data/Floor0.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor1
#include <kha/audio2/ogg/vorbis/data/Floor1.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_IntPoint
#include <kha/audio2/ogg/vorbis/data/IntPoint.h>
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

Void Floor_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Floor","new",0x5f0b4bee,"kha.audio2.ogg.vorbis.data.Floor.new","kha/audio2/ogg/vorbis/data/Floor.hx",18,0x2f4d0043)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Floor_obj::~Floor_obj() { }

Dynamic Floor_obj::__CreateEmpty() { return  new Floor_obj; }
hx::ObjectPtr< Floor_obj > Floor_obj::__new()
{  hx::ObjectPtr< Floor_obj > _result_ = new Floor_obj();
	_result_->__construct();
	return _result_;}

Dynamic Floor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Floor_obj > _result_ = new Floor_obj();
	_result_->__construct();
	return _result_;}

::kha::audio2::ogg::vorbis::data::Floor Floor_obj::read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,Array< ::Dynamic > codebooks){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Floor","read",0xcd7bec08,"kha.audio2.ogg.vorbis.data.Floor.read","kha/audio2/ogg/vorbis/data/Floor.hx",23,0x2f4d0043)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_ARG(codebooks,"codebooks")
	HX_STACK_LINE(24)
	::kha::audio2::ogg::vorbis::data::Floor floor = ::kha::audio2::ogg::vorbis::data::Floor_obj::__new();		HX_STACK_VAR(floor,"floor");
	HX_STACK_LINE(26)
	bool tmp = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp)){
		HX_STACK_LINE(26)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(26)
		bool tmp2 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		if ((tmp2)){
			HX_STACK_LINE(26)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			if ((tmp3)){
				HX_STACK_LINE(26)
				int tmp4 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(26)
				int tmp5 = (int)-8;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				int tmp6 = decodeState->readBits(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(26)
				int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(26)
				tmp1 = (tmp4 + tmp7);
			}
			else{
				HX_STACK_LINE(26)
				bool tmp4 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(26)
				if ((tmp4)){
					HX_STACK_LINE(26)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(26)
				while((true)){
					HX_STACK_LINE(26)
					bool tmp5 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(26)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(26)
					if ((tmp5)){
						HX_STACK_LINE(26)
						bool tmp7 = decodeState->lastSeg;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(26)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(26)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(26)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(26)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(26)
						if ((tmp11)){
							HX_STACK_LINE(26)
							int tmp12 = decodeState->next();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(26)
							int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(26)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(26)
							tmp6 = (tmp14 == (int)0);
						}
						else{
							HX_STACK_LINE(26)
							tmp6 = true;
						}
					}
					else{
						HX_STACK_LINE(26)
						tmp6 = false;
					}
					HX_STACK_LINE(26)
					if ((tmp6)){
						HX_STACK_LINE(26)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(26)
						break;
					}
					else{
						HX_STACK_LINE(26)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(26)
						int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(26)
						{
							HX_STACK_LINE(26)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(26)
							{
								HX_STACK_LINE(26)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(26)
								tmp8 = decodeState->input->readByte();
							}
							HX_STACK_LINE(26)
							int tmp9 = decodeState->validBits;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(26)
							int tmp10 = (int(tmp8) << int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(26)
							int b = tmp10;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(26)
							tmp7 = (decodeState->acc + b);
						}
						HX_STACK_LINE(26)
						decodeState->acc = tmp7;
						HX_STACK_LINE(26)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(26)
					bool tmp7 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(26)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(26)
					if ((tmp8)){
						HX_STACK_LINE(26)
						break;
					}
				}
				HX_STACK_LINE(26)
				bool tmp5 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				if ((tmp5)){
					HX_STACK_LINE(26)
					tmp1 = (int)0;
				}
				else{
					HX_STACK_LINE(26)
					int tmp6 = decodeState->acc;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(26)
					int tmp7 = (int)65536;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(26)
					int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(26)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(26)
					int tmp10 = (int(tmp6) & int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(26)
					int z = tmp10;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(26)
					int tmp11 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(26)
					decodeState->acc = tmp11;
					HX_STACK_LINE(26)
					hx::SubEq(decodeState->validBits,(int)16);
					HX_STACK_LINE(26)
					tmp1 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(26)
			int tmp3 = decodeState->acc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			int tmp4 = (int)65536;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(26)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			int tmp7 = (int(tmp3) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(26)
			int z = tmp7;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(26)
			int tmp8 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(26)
			decodeState->acc = tmp8;
			HX_STACK_LINE(26)
			hx::SubEq(decodeState->validBits,(int)16);
			HX_STACK_LINE(26)
			tmp1 = z;
		}
	}
	HX_STACK_LINE(26)
	floor->type = tmp1;
	HX_STACK_LINE(27)
	bool tmp2 = (floor->type > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	if ((tmp2)){
		HX_STACK_LINE(28)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Floor.hx","\x92","\x54","\x6e","\xc5"),28,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Floor","\xfc","\x7c","\xe7","\xf7"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp4 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(30)
	bool tmp3 = (floor->type == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	if ((tmp3)){
		HX_STACK_LINE(31)
		::kha::audio2::ogg::vorbis::data::Floor0 tmp4 = ::kha::audio2::ogg::vorbis::data::Floor0_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		::kha::audio2::ogg::vorbis::data::Floor0 tmp5 = floor->floor0 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		::kha::audio2::ogg::vorbis::data::Floor0 g = tmp5;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(32)
		bool tmp6 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(32)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(32)
		if ((tmp6)){
			HX_STACK_LINE(32)
			tmp7 = (int)0;
		}
		else{
			HX_STACK_LINE(32)
			bool tmp8 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(32)
			if ((tmp8)){
				HX_STACK_LINE(32)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(32)
				if ((tmp9)){
					HX_STACK_LINE(32)
					int tmp10 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(32)
					int tmp11 = (int)-16;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(32)
					int tmp12 = decodeState->readBits(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(32)
					int tmp13 = (int(tmp12) << int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(32)
					tmp7 = (tmp10 + tmp13);
				}
				else{
					HX_STACK_LINE(32)
					bool tmp10 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(32)
					if ((tmp10)){
						HX_STACK_LINE(32)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(32)
					while((true)){
						HX_STACK_LINE(32)
						bool tmp11 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(32)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(32)
						if ((tmp11)){
							HX_STACK_LINE(32)
							bool tmp13 = decodeState->lastSeg;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(32)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(32)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(32)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(32)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(32)
							if ((tmp17)){
								HX_STACK_LINE(32)
								int tmp18 = decodeState->next();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(32)
								int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(32)
								int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(32)
								tmp12 = (tmp20 == (int)0);
							}
							else{
								HX_STACK_LINE(32)
								tmp12 = true;
							}
						}
						else{
							HX_STACK_LINE(32)
							tmp12 = false;
						}
						HX_STACK_LINE(32)
						if ((tmp12)){
							HX_STACK_LINE(32)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(32)
							break;
						}
						else{
							HX_STACK_LINE(32)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(32)
							int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(32)
							{
								HX_STACK_LINE(32)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(32)
								{
									HX_STACK_LINE(32)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(32)
									tmp14 = decodeState->input->readByte();
								}
								HX_STACK_LINE(32)
								int tmp15 = decodeState->validBits;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(32)
								int tmp16 = (int(tmp14) << int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(32)
								int b = tmp16;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(32)
								tmp13 = (decodeState->acc + b);
							}
							HX_STACK_LINE(32)
							decodeState->acc = tmp13;
							HX_STACK_LINE(32)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(32)
						bool tmp13 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(32)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(32)
						if ((tmp14)){
							HX_STACK_LINE(32)
							break;
						}
					}
					HX_STACK_LINE(32)
					bool tmp11 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(32)
					if ((tmp11)){
						HX_STACK_LINE(32)
						tmp7 = (int)0;
					}
					else{
						HX_STACK_LINE(32)
						int tmp12 = decodeState->acc;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(32)
						int tmp13 = (int)256;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(32)
						int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(32)
						int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(32)
						int tmp16 = (int(tmp12) & int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(32)
						int z = tmp16;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(32)
						int tmp17 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(32)
						decodeState->acc = tmp17;
						HX_STACK_LINE(32)
						hx::SubEq(decodeState->validBits,(int)8);
						HX_STACK_LINE(32)
						tmp7 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(32)
				int tmp9 = decodeState->acc;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(32)
				int tmp10 = (int)256;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(32)
				int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(32)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(32)
				int tmp13 = (int(tmp9) & int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(32)
				int z = tmp13;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(32)
				int tmp14 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(32)
				decodeState->acc = tmp14;
				HX_STACK_LINE(32)
				hx::SubEq(decodeState->validBits,(int)8);
				HX_STACK_LINE(32)
				tmp7 = z;
			}
		}
		HX_STACK_LINE(32)
		g->order = tmp7;
		HX_STACK_LINE(33)
		bool tmp8 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		if ((tmp8)){
			HX_STACK_LINE(33)
			tmp9 = (int)0;
		}
		else{
			HX_STACK_LINE(33)
			bool tmp10 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(33)
			if ((tmp10)){
				HX_STACK_LINE(33)
				bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(33)
				if ((tmp11)){
					HX_STACK_LINE(33)
					int tmp12 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(33)
					int tmp13 = (int)-8;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(33)
					int tmp14 = decodeState->readBits(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(33)
					int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(33)
					tmp9 = (tmp12 + tmp15);
				}
				else{
					HX_STACK_LINE(33)
					bool tmp12 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(33)
					if ((tmp12)){
						HX_STACK_LINE(33)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(33)
					while((true)){
						HX_STACK_LINE(33)
						bool tmp13 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(33)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(33)
						if ((tmp13)){
							HX_STACK_LINE(33)
							bool tmp15 = decodeState->lastSeg;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(33)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(33)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(33)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(33)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(33)
							if ((tmp19)){
								HX_STACK_LINE(33)
								int tmp20 = decodeState->next();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(33)
								int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(33)
								int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(33)
								tmp14 = (tmp22 == (int)0);
							}
							else{
								HX_STACK_LINE(33)
								tmp14 = true;
							}
						}
						else{
							HX_STACK_LINE(33)
							tmp14 = false;
						}
						HX_STACK_LINE(33)
						if ((tmp14)){
							HX_STACK_LINE(33)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(33)
							break;
						}
						else{
							HX_STACK_LINE(33)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(33)
							int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(33)
							{
								HX_STACK_LINE(33)
								int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(33)
								{
									HX_STACK_LINE(33)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(33)
									tmp16 = decodeState->input->readByte();
								}
								HX_STACK_LINE(33)
								int tmp17 = decodeState->validBits;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(33)
								int tmp18 = (int(tmp16) << int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(33)
								int b = tmp18;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(33)
								tmp15 = (decodeState->acc + b);
							}
							HX_STACK_LINE(33)
							decodeState->acc = tmp15;
							HX_STACK_LINE(33)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(33)
						bool tmp15 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(33)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(33)
						if ((tmp16)){
							HX_STACK_LINE(33)
							break;
						}
					}
					HX_STACK_LINE(33)
					bool tmp13 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(33)
					if ((tmp13)){
						HX_STACK_LINE(33)
						tmp9 = (int)0;
					}
					else{
						HX_STACK_LINE(33)
						int tmp14 = decodeState->acc;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(33)
						int tmp15 = (int)65536;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(33)
						int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(33)
						int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(33)
						int tmp18 = (int(tmp14) & int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(33)
						int z = tmp18;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(33)
						int tmp19 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(33)
						decodeState->acc = tmp19;
						HX_STACK_LINE(33)
						hx::SubEq(decodeState->validBits,(int)16);
						HX_STACK_LINE(33)
						tmp9 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(33)
				int tmp11 = decodeState->acc;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(33)
				int tmp12 = (int)65536;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(33)
				int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(33)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(33)
				int tmp15 = (int(tmp11) & int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(33)
				int z = tmp15;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(33)
				int tmp16 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(33)
				decodeState->acc = tmp16;
				HX_STACK_LINE(33)
				hx::SubEq(decodeState->validBits,(int)16);
				HX_STACK_LINE(33)
				tmp9 = z;
			}
		}
		HX_STACK_LINE(33)
		g->rate = tmp9;
		HX_STACK_LINE(34)
		bool tmp10 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		if ((tmp10)){
			HX_STACK_LINE(34)
			tmp11 = (int)0;
		}
		else{
			HX_STACK_LINE(34)
			bool tmp12 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(34)
			if ((tmp12)){
				HX_STACK_LINE(34)
				bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(34)
				if ((tmp13)){
					HX_STACK_LINE(34)
					int tmp14 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(34)
					int tmp15 = (int)-8;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(34)
					int tmp16 = decodeState->readBits(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(34)
					int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(34)
					tmp11 = (tmp14 + tmp17);
				}
				else{
					HX_STACK_LINE(34)
					bool tmp14 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(34)
					if ((tmp14)){
						HX_STACK_LINE(34)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(34)
					while((true)){
						HX_STACK_LINE(34)
						bool tmp15 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(34)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(34)
						if ((tmp15)){
							HX_STACK_LINE(34)
							bool tmp17 = decodeState->lastSeg;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(34)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(34)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(34)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(34)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(34)
							if ((tmp21)){
								HX_STACK_LINE(34)
								int tmp22 = decodeState->next();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(34)
								int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(34)
								int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(34)
								tmp16 = (tmp24 == (int)0);
							}
							else{
								HX_STACK_LINE(34)
								tmp16 = true;
							}
						}
						else{
							HX_STACK_LINE(34)
							tmp16 = false;
						}
						HX_STACK_LINE(34)
						if ((tmp16)){
							HX_STACK_LINE(34)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(34)
							break;
						}
						else{
							HX_STACK_LINE(34)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(34)
							int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(34)
							{
								HX_STACK_LINE(34)
								int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(34)
								{
									HX_STACK_LINE(34)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(34)
									tmp18 = decodeState->input->readByte();
								}
								HX_STACK_LINE(34)
								int tmp19 = decodeState->validBits;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(34)
								int tmp20 = (int(tmp18) << int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(34)
								int b = tmp20;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(34)
								tmp17 = (decodeState->acc + b);
							}
							HX_STACK_LINE(34)
							decodeState->acc = tmp17;
							HX_STACK_LINE(34)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(34)
						bool tmp17 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(34)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(34)
						if ((tmp18)){
							HX_STACK_LINE(34)
							break;
						}
					}
					HX_STACK_LINE(34)
					bool tmp15 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(34)
					if ((tmp15)){
						HX_STACK_LINE(34)
						tmp11 = (int)0;
					}
					else{
						HX_STACK_LINE(34)
						int tmp16 = decodeState->acc;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(34)
						int tmp17 = (int)65536;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(34)
						int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(34)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(34)
						int tmp20 = (int(tmp16) & int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(34)
						int z = tmp20;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(34)
						int tmp21 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(34)
						decodeState->acc = tmp21;
						HX_STACK_LINE(34)
						hx::SubEq(decodeState->validBits,(int)16);
						HX_STACK_LINE(34)
						tmp11 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(34)
				int tmp13 = decodeState->acc;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(34)
				int tmp14 = (int)65536;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(34)
				int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(34)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(34)
				int tmp17 = (int(tmp13) & int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(34)
				int z = tmp17;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(34)
				int tmp18 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(34)
				decodeState->acc = tmp18;
				HX_STACK_LINE(34)
				hx::SubEq(decodeState->validBits,(int)16);
				HX_STACK_LINE(34)
				tmp11 = z;
			}
		}
		HX_STACK_LINE(34)
		g->barkMapSize = tmp11;
		HX_STACK_LINE(35)
		bool tmp12 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(35)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(35)
		if ((tmp12)){
			HX_STACK_LINE(35)
			tmp13 = (int)0;
		}
		else{
			HX_STACK_LINE(35)
			bool tmp14 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(35)
			if ((tmp14)){
				HX_STACK_LINE(35)
				bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				if ((tmp15)){
					HX_STACK_LINE(35)
					int tmp16 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(35)
					int tmp17 = (int)-18;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(35)
					int tmp18 = decodeState->readBits(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(35)
					int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(35)
					tmp13 = (tmp16 + tmp19);
				}
				else{
					HX_STACK_LINE(35)
					bool tmp16 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(35)
					if ((tmp16)){
						HX_STACK_LINE(35)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(35)
					while((true)){
						HX_STACK_LINE(35)
						bool tmp17 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(35)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(35)
						if ((tmp17)){
							HX_STACK_LINE(35)
							bool tmp19 = decodeState->lastSeg;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(35)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(35)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(35)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(35)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(35)
							if ((tmp23)){
								HX_STACK_LINE(35)
								int tmp24 = decodeState->next();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(35)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(35)
								int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(35)
								tmp18 = (tmp26 == (int)0);
							}
							else{
								HX_STACK_LINE(35)
								tmp18 = true;
							}
						}
						else{
							HX_STACK_LINE(35)
							tmp18 = false;
						}
						HX_STACK_LINE(35)
						if ((tmp18)){
							HX_STACK_LINE(35)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(35)
							break;
						}
						else{
							HX_STACK_LINE(35)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(35)
							int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(35)
							{
								HX_STACK_LINE(35)
								int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(35)
								{
									HX_STACK_LINE(35)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(35)
									tmp20 = decodeState->input->readByte();
								}
								HX_STACK_LINE(35)
								int tmp21 = decodeState->validBits;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(35)
								int tmp22 = (int(tmp20) << int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(35)
								int b = tmp22;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(35)
								tmp19 = (decodeState->acc + b);
							}
							HX_STACK_LINE(35)
							decodeState->acc = tmp19;
							HX_STACK_LINE(35)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(35)
						bool tmp19 = (decodeState->validBits < (int)6);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(35)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(35)
						if ((tmp20)){
							HX_STACK_LINE(35)
							break;
						}
					}
					HX_STACK_LINE(35)
					bool tmp17 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(35)
					if ((tmp17)){
						HX_STACK_LINE(35)
						tmp13 = (int)0;
					}
					else{
						HX_STACK_LINE(35)
						int tmp18 = decodeState->acc;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(35)
						int tmp19 = (int)64;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(35)
						int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(35)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(35)
						int tmp22 = (int(tmp18) & int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(35)
						int z = tmp22;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(35)
						int tmp23 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(35)
						decodeState->acc = tmp23;
						HX_STACK_LINE(35)
						hx::SubEq(decodeState->validBits,(int)6);
						HX_STACK_LINE(35)
						tmp13 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(35)
				int tmp15 = decodeState->acc;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				int tmp16 = (int)64;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(35)
				int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(35)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(35)
				int tmp19 = (int(tmp15) & int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(35)
				int z = tmp19;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(35)
				int tmp20 = hx::UShr(decodeState->acc,(int)6);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(35)
				decodeState->acc = tmp20;
				HX_STACK_LINE(35)
				hx::SubEq(decodeState->validBits,(int)6);
				HX_STACK_LINE(35)
				tmp13 = z;
			}
		}
		HX_STACK_LINE(35)
		g->amplitudeBits = tmp13;
		HX_STACK_LINE(36)
		bool tmp14 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(36)
		int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		if ((tmp14)){
			HX_STACK_LINE(36)
			tmp15 = (int)0;
		}
		else{
			HX_STACK_LINE(36)
			bool tmp16 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(36)
			if ((tmp16)){
				HX_STACK_LINE(36)
				bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(36)
				if ((tmp17)){
					HX_STACK_LINE(36)
					int tmp18 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(36)
					int tmp19 = (int)-16;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(36)
					int tmp20 = decodeState->readBits(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(36)
					int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(36)
					tmp15 = (tmp18 + tmp21);
				}
				else{
					HX_STACK_LINE(36)
					bool tmp18 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(36)
					if ((tmp18)){
						HX_STACK_LINE(36)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(36)
					while((true)){
						HX_STACK_LINE(36)
						bool tmp19 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(36)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(36)
						if ((tmp19)){
							HX_STACK_LINE(36)
							bool tmp21 = decodeState->lastSeg;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(36)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(36)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(36)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(36)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(36)
							if ((tmp25)){
								HX_STACK_LINE(36)
								int tmp26 = decodeState->next();		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(36)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(36)
								int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(36)
								tmp20 = (tmp28 == (int)0);
							}
							else{
								HX_STACK_LINE(36)
								tmp20 = true;
							}
						}
						else{
							HX_STACK_LINE(36)
							tmp20 = false;
						}
						HX_STACK_LINE(36)
						if ((tmp20)){
							HX_STACK_LINE(36)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(36)
							break;
						}
						else{
							HX_STACK_LINE(36)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(36)
							int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(36)
							{
								HX_STACK_LINE(36)
								int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(36)
								{
									HX_STACK_LINE(36)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(36)
									tmp22 = decodeState->input->readByte();
								}
								HX_STACK_LINE(36)
								int tmp23 = decodeState->validBits;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(36)
								int tmp24 = (int(tmp22) << int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(36)
								int b = tmp24;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(36)
								tmp21 = (decodeState->acc + b);
							}
							HX_STACK_LINE(36)
							decodeState->acc = tmp21;
							HX_STACK_LINE(36)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(36)
						bool tmp21 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(36)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(36)
						if ((tmp22)){
							HX_STACK_LINE(36)
							break;
						}
					}
					HX_STACK_LINE(36)
					bool tmp19 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(36)
					if ((tmp19)){
						HX_STACK_LINE(36)
						tmp15 = (int)0;
					}
					else{
						HX_STACK_LINE(36)
						int tmp20 = decodeState->acc;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(36)
						int tmp21 = (int)256;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(36)
						int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(36)
						int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(36)
						int tmp24 = (int(tmp20) & int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(36)
						int z = tmp24;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(36)
						int tmp25 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(36)
						decodeState->acc = tmp25;
						HX_STACK_LINE(36)
						hx::SubEq(decodeState->validBits,(int)8);
						HX_STACK_LINE(36)
						tmp15 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(36)
				int tmp17 = decodeState->acc;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(36)
				int tmp18 = (int)256;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(36)
				int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(36)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(36)
				int tmp21 = (int(tmp17) & int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(36)
				int z = tmp21;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(36)
				int tmp22 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(36)
				decodeState->acc = tmp22;
				HX_STACK_LINE(36)
				hx::SubEq(decodeState->validBits,(int)8);
				HX_STACK_LINE(36)
				tmp15 = z;
			}
		}
		HX_STACK_LINE(36)
		g->amplitudeOffset = tmp15;
		HX_STACK_LINE(37)
		bool tmp16 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(37)
		int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(37)
		if ((tmp16)){
			HX_STACK_LINE(37)
			tmp17 = (int)0;
		}
		else{
			HX_STACK_LINE(37)
			bool tmp18 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(37)
			if ((tmp18)){
				HX_STACK_LINE(37)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(37)
				if ((tmp19)){
					HX_STACK_LINE(37)
					int tmp20 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(37)
					int tmp21 = (int)-20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(37)
					int tmp22 = decodeState->readBits(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(37)
					int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(37)
					tmp17 = (tmp20 + tmp23);
				}
				else{
					HX_STACK_LINE(37)
					bool tmp20 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(37)
					if ((tmp20)){
						HX_STACK_LINE(37)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(37)
					while((true)){
						HX_STACK_LINE(37)
						bool tmp21 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(37)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(37)
						if ((tmp21)){
							HX_STACK_LINE(37)
							bool tmp23 = decodeState->lastSeg;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(37)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(37)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(37)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(37)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(37)
							if ((tmp27)){
								HX_STACK_LINE(37)
								int tmp28 = decodeState->next();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(37)
								int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(37)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(37)
								tmp22 = (tmp30 == (int)0);
							}
							else{
								HX_STACK_LINE(37)
								tmp22 = true;
							}
						}
						else{
							HX_STACK_LINE(37)
							tmp22 = false;
						}
						HX_STACK_LINE(37)
						if ((tmp22)){
							HX_STACK_LINE(37)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(37)
							break;
						}
						else{
							HX_STACK_LINE(37)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(37)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(37)
							{
								HX_STACK_LINE(37)
								int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(37)
								{
									HX_STACK_LINE(37)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(37)
									tmp24 = decodeState->input->readByte();
								}
								HX_STACK_LINE(37)
								int tmp25 = decodeState->validBits;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(37)
								int tmp26 = (int(tmp24) << int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(37)
								int b = tmp26;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(37)
								tmp23 = (decodeState->acc + b);
							}
							HX_STACK_LINE(37)
							decodeState->acc = tmp23;
							HX_STACK_LINE(37)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(37)
						bool tmp23 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(37)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(37)
						if ((tmp24)){
							HX_STACK_LINE(37)
							break;
						}
					}
					HX_STACK_LINE(37)
					bool tmp21 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(37)
					if ((tmp21)){
						HX_STACK_LINE(37)
						tmp17 = (int)0;
					}
					else{
						HX_STACK_LINE(37)
						int tmp22 = decodeState->acc;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(37)
						int tmp23 = (int)16;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(37)
						int tmp24 = (tmp23 - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(37)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(37)
						int tmp26 = (int(tmp22) & int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(37)
						int z = tmp26;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(37)
						int tmp27 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(37)
						decodeState->acc = tmp27;
						HX_STACK_LINE(37)
						hx::SubEq(decodeState->validBits,(int)4);
						HX_STACK_LINE(37)
						tmp17 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(37)
				int tmp19 = decodeState->acc;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(37)
				int tmp20 = (int)16;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(37)
				int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(37)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(37)
				int tmp23 = (int(tmp19) & int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(37)
				int z = tmp23;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(37)
				int tmp24 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(37)
				decodeState->acc = tmp24;
				HX_STACK_LINE(37)
				hx::SubEq(decodeState->validBits,(int)4);
				HX_STACK_LINE(37)
				tmp17 = z;
			}
		}
		HX_STACK_LINE(37)
		int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(37)
		g->numberOfBooks = tmp18;
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(38)
			int _g = g->numberOfBooks;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(38)
			while((true)){
				HX_STACK_LINE(38)
				bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(38)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(38)
				if ((tmp20)){
					HX_STACK_LINE(38)
					break;
				}
				HX_STACK_LINE(38)
				int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(38)
				int j = tmp21;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					bool tmp22 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(39)
					int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(39)
					if ((tmp22)){
						HX_STACK_LINE(39)
						tmp23 = (int)0;
					}
					else{
						HX_STACK_LINE(39)
						bool tmp24 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(39)
						if ((tmp24)){
							HX_STACK_LINE(39)
							bool tmp25 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(39)
							if ((tmp25)){
								HX_STACK_LINE(39)
								decodeState->acc = (int)0;
							}
							HX_STACK_LINE(39)
							while((true)){
								HX_STACK_LINE(39)
								bool tmp26 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(39)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(39)
								if ((tmp26)){
									HX_STACK_LINE(39)
									bool tmp28 = decodeState->lastSeg;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(39)
									bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(39)
									bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
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
										tmp27 = (tmp35 == (int)0);
									}
									else{
										HX_STACK_LINE(39)
										tmp27 = true;
									}
								}
								else{
									HX_STACK_LINE(39)
									tmp27 = false;
								}
								HX_STACK_LINE(39)
								if ((tmp27)){
									HX_STACK_LINE(39)
									decodeState->validBits = (int)-1;
									HX_STACK_LINE(39)
									break;
								}
								else{
									HX_STACK_LINE(39)
									(decodeState->bytesInSeg)--;
									HX_STACK_LINE(39)
									int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(39)
									{
										HX_STACK_LINE(39)
										int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(39)
										{
											HX_STACK_LINE(39)
											hx::AddEq(decodeState->inputPosition,(int)1);
											HX_STACK_LINE(39)
											tmp29 = decodeState->input->readByte();
										}
										HX_STACK_LINE(39)
										int tmp30 = decodeState->validBits;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(39)
										int tmp31 = (int(tmp29) << int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(39)
										int b = tmp31;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(39)
										tmp28 = (decodeState->acc + b);
									}
									HX_STACK_LINE(39)
									decodeState->acc = tmp28;
									HX_STACK_LINE(39)
									hx::AddEq(decodeState->validBits,(int)8);
								}
								HX_STACK_LINE(39)
								bool tmp28 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(39)
								bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(39)
								if ((tmp29)){
									HX_STACK_LINE(39)
									break;
								}
							}
							HX_STACK_LINE(39)
							bool tmp26 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(39)
							if ((tmp26)){
								HX_STACK_LINE(39)
								tmp23 = (int)0;
							}
							else{
								HX_STACK_LINE(39)
								int tmp27 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(39)
								int z = tmp27;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(39)
								int tmp28 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(39)
								decodeState->acc = tmp28;
								HX_STACK_LINE(39)
								hx::SubEq(decodeState->validBits,(int)8);
								HX_STACK_LINE(39)
								tmp23 = z;
							}
						}
						else{
							HX_STACK_LINE(39)
							int tmp25 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(39)
							int z = tmp25;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(39)
							int tmp26 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(39)
							decodeState->acc = tmp26;
							HX_STACK_LINE(39)
							hx::SubEq(decodeState->validBits,(int)8);
							HX_STACK_LINE(39)
							tmp23 = z;
						}
					}
					HX_STACK_LINE(39)
					int val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(39)
					int tmp24 = j;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(39)
					int tmp25 = val;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(39)
					int tmp26 = g->bookList->__unsafe_set(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(39)
					tmp26;
				}
			}
		}
		HX_STACK_LINE(41)
		Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("Floor.hx","\x92","\x54","\x6e","\xc5"),41,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Floor","\xfc","\x7c","\xe7","\xf7"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(41)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp20 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::FEATURE_NOT_SUPPORTED,null(),tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(41)
		HX_STACK_DO_THROW(tmp20);
	}
	else{
		HX_STACK_LINE(43)
		Array< ::Dynamic > p = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(44)
		::kha::audio2::ogg::vorbis::data::Floor1 tmp4 = ::kha::audio2::ogg::vorbis::data::Floor1_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::kha::audio2::ogg::vorbis::data::Floor1 tmp5 = floor->floor1 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		::kha::audio2::ogg::vorbis::data::Floor1 g = tmp5;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(45)
		int maxClass = (int)-1;		HX_STACK_VAR(maxClass,"maxClass");
		HX_STACK_LINE(46)
		bool tmp6 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		if ((tmp6)){
			HX_STACK_LINE(46)
			tmp7 = (int)0;
		}
		else{
			HX_STACK_LINE(46)
			bool tmp8 = (decodeState->validBits < (int)5);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(46)
			if ((tmp8)){
				HX_STACK_LINE(46)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(46)
				if ((tmp9)){
					HX_STACK_LINE(46)
					int tmp10 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					int tmp11 = (int)-19;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					int tmp12 = decodeState->readBits(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					int tmp13 = (int(tmp12) << int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(46)
					tmp7 = (tmp10 + tmp13);
				}
				else{
					HX_STACK_LINE(46)
					bool tmp10 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					if ((tmp10)){
						HX_STACK_LINE(46)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(46)
					while((true)){
						HX_STACK_LINE(46)
						bool tmp11 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(46)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(46)
						if ((tmp11)){
							HX_STACK_LINE(46)
							bool tmp13 = decodeState->lastSeg;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(46)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(46)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(46)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(46)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(46)
							if ((tmp17)){
								HX_STACK_LINE(46)
								int tmp18 = decodeState->next();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(46)
								int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(46)
								int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(46)
								tmp12 = (tmp20 == (int)0);
							}
							else{
								HX_STACK_LINE(46)
								tmp12 = true;
							}
						}
						else{
							HX_STACK_LINE(46)
							tmp12 = false;
						}
						HX_STACK_LINE(46)
						if ((tmp12)){
							HX_STACK_LINE(46)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(46)
							break;
						}
						else{
							HX_STACK_LINE(46)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(46)
							int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(46)
							{
								HX_STACK_LINE(46)
								int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(46)
								{
									HX_STACK_LINE(46)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(46)
									tmp14 = decodeState->input->readByte();
								}
								HX_STACK_LINE(46)
								int tmp15 = decodeState->validBits;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(46)
								int tmp16 = (int(tmp14) << int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(46)
								int b = tmp16;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(46)
								tmp13 = (decodeState->acc + b);
							}
							HX_STACK_LINE(46)
							decodeState->acc = tmp13;
							HX_STACK_LINE(46)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(46)
						bool tmp13 = (decodeState->validBits < (int)5);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(46)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(46)
						if ((tmp14)){
							HX_STACK_LINE(46)
							break;
						}
					}
					HX_STACK_LINE(46)
					bool tmp11 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					if ((tmp11)){
						HX_STACK_LINE(46)
						tmp7 = (int)0;
					}
					else{
						HX_STACK_LINE(46)
						int tmp12 = decodeState->acc;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(46)
						int tmp13 = (int)32;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(46)
						int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(46)
						int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(46)
						int tmp16 = (int(tmp12) & int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(46)
						int z = tmp16;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(46)
						int tmp17 = hx::UShr(decodeState->acc,(int)5);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(46)
						decodeState->acc = tmp17;
						HX_STACK_LINE(46)
						hx::SubEq(decodeState->validBits,(int)5);
						HX_STACK_LINE(46)
						tmp7 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(46)
				int tmp9 = decodeState->acc;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(46)
				int tmp10 = (int)32;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(46)
				int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(46)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				int tmp13 = (int(tmp9) & int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(46)
				int z = tmp13;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(46)
				int tmp14 = hx::UShr(decodeState->acc,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(46)
				decodeState->acc = tmp14;
				HX_STACK_LINE(46)
				hx::SubEq(decodeState->validBits,(int)5);
				HX_STACK_LINE(46)
				tmp7 = z;
			}
		}
		HX_STACK_LINE(46)
		g->partitions = tmp7;
		HX_STACK_LINE(47)
		Array< int > tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(47)
			Array< int > tmp9 = Array_obj< int >::__new();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			this1 = tmp9;
			HX_STACK_LINE(47)
			int tmp10 = g->partitions;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			this1->__SetSizeExact(tmp10);
			HX_STACK_LINE(47)
			tmp8 = this1;
		}
		HX_STACK_LINE(47)
		g->partitionClassList = tmp8;
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			int _g = g->partitions;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(48)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(48)
				if ((tmp10)){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(48)
				int j = tmp11;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					bool tmp12 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(49)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(49)
					if ((tmp12)){
						HX_STACK_LINE(49)
						tmp13 = (int)0;
					}
					else{
						HX_STACK_LINE(49)
						bool tmp14 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(49)
						if ((tmp14)){
							HX_STACK_LINE(49)
							bool tmp15 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(49)
							if ((tmp15)){
								HX_STACK_LINE(49)
								decodeState->acc = (int)0;
							}
							HX_STACK_LINE(49)
							while((true)){
								HX_STACK_LINE(49)
								bool tmp16 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(49)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(49)
								if ((tmp16)){
									HX_STACK_LINE(49)
									bool tmp18 = decodeState->lastSeg;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(49)
									bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(49)
									bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(49)
									bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(49)
									bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(49)
									if ((tmp22)){
										HX_STACK_LINE(49)
										int tmp23 = decodeState->next();		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(49)
										int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(49)
										int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(49)
										tmp17 = (tmp25 == (int)0);
									}
									else{
										HX_STACK_LINE(49)
										tmp17 = true;
									}
								}
								else{
									HX_STACK_LINE(49)
									tmp17 = false;
								}
								HX_STACK_LINE(49)
								if ((tmp17)){
									HX_STACK_LINE(49)
									decodeState->validBits = (int)-1;
									HX_STACK_LINE(49)
									break;
								}
								else{
									HX_STACK_LINE(49)
									(decodeState->bytesInSeg)--;
									HX_STACK_LINE(49)
									int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(49)
									{
										HX_STACK_LINE(49)
										int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(49)
										{
											HX_STACK_LINE(49)
											hx::AddEq(decodeState->inputPosition,(int)1);
											HX_STACK_LINE(49)
											tmp19 = decodeState->input->readByte();
										}
										HX_STACK_LINE(49)
										int tmp20 = decodeState->validBits;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(49)
										int tmp21 = (int(tmp19) << int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(49)
										int b = tmp21;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(49)
										tmp18 = (decodeState->acc + b);
									}
									HX_STACK_LINE(49)
									decodeState->acc = tmp18;
									HX_STACK_LINE(49)
									hx::AddEq(decodeState->validBits,(int)8);
								}
								HX_STACK_LINE(49)
								bool tmp18 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(49)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(49)
								if ((tmp19)){
									HX_STACK_LINE(49)
									break;
								}
							}
							HX_STACK_LINE(49)
							bool tmp16 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(49)
							if ((tmp16)){
								HX_STACK_LINE(49)
								tmp13 = (int)0;
							}
							else{
								HX_STACK_LINE(49)
								int tmp17 = (int(decodeState->acc) & int((int)15));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(49)
								int z = tmp17;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(49)
								int tmp18 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(49)
								decodeState->acc = tmp18;
								HX_STACK_LINE(49)
								hx::SubEq(decodeState->validBits,(int)4);
								HX_STACK_LINE(49)
								tmp13 = z;
							}
						}
						else{
							HX_STACK_LINE(49)
							int tmp15 = (int(decodeState->acc) & int((int)15));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(49)
							int z = tmp15;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(49)
							int tmp16 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(49)
							decodeState->acc = tmp16;
							HX_STACK_LINE(49)
							hx::SubEq(decodeState->validBits,(int)4);
							HX_STACK_LINE(49)
							tmp13 = z;
						}
					}
					HX_STACK_LINE(49)
					int val = tmp13;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(49)
					int tmp14 = j;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(49)
					int tmp15 = val;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(49)
					int tmp16 = g->partitionClassList->__unsafe_set(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(49)
					tmp16;
				}
				HX_STACK_LINE(50)
				int tmp12 = j;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(50)
				int tmp13 = g->partitionClassList->__unsafe_get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(50)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(50)
				int tmp15 = maxClass;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(50)
				bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(50)
				if ((tmp16)){
					HX_STACK_LINE(51)
					int tmp17 = j;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(51)
					int tmp18 = g->partitionClassList->__unsafe_get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(51)
					maxClass = tmp18;
				}
			}
		}
		HX_STACK_LINE(54)
		Array< int > tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(54)
			Array< int > tmp10 = Array_obj< int >::__new();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(54)
			this1 = tmp10;
			HX_STACK_LINE(54)
			int tmp11 = (maxClass + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			this1->__SetSizeExact(tmp11);
			HX_STACK_LINE(54)
			tmp9 = this1;
		}
		HX_STACK_LINE(54)
		g->classDimensions = tmp9;
		HX_STACK_LINE(55)
		Array< int > tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(55)
			Array< int > tmp11 = Array_obj< int >::__new();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			this1 = tmp11;
			HX_STACK_LINE(55)
			int tmp12 = (maxClass + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			this1->__SetSizeExact(tmp12);
			HX_STACK_LINE(55)
			tmp10 = this1;
		}
		HX_STACK_LINE(55)
		g->classMasterbooks = tmp10;
		HX_STACK_LINE(56)
		Array< int > tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(56)
			Array< int > tmp12 = Array_obj< int >::__new();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(56)
			this1 = tmp12;
			HX_STACK_LINE(56)
			int tmp13 = (maxClass + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(56)
			this1->__SetSizeExact(tmp13);
			HX_STACK_LINE(56)
			tmp11 = this1;
		}
		HX_STACK_LINE(56)
		g->classSubclasses = tmp11;
		HX_STACK_LINE(57)
		Array< ::Dynamic > tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(57)
			Array< ::Dynamic > tmp13 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(57)
			this1 = tmp13;
			HX_STACK_LINE(57)
			int tmp14 = (maxClass + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(57)
			this1->__SetSizeExact(tmp14);
			HX_STACK_LINE(57)
			tmp12 = this1;
		}
		HX_STACK_LINE(57)
		g->subclassBooks = tmp12;
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(58)
			int tmp13 = (maxClass + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(58)
			int _g = tmp13;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			while((true)){
				HX_STACK_LINE(58)
				bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(58)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(58)
				if ((tmp15)){
					HX_STACK_LINE(58)
					break;
				}
				HX_STACK_LINE(58)
				int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(58)
				int j = tmp16;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(59)
				{
					HX_STACK_LINE(59)
					bool tmp17 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(59)
					int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(59)
					if ((tmp17)){
						HX_STACK_LINE(59)
						tmp18 = (int)0;
					}
					else{
						HX_STACK_LINE(59)
						bool tmp19 = (decodeState->validBits < (int)3);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(59)
						if ((tmp19)){
							HX_STACK_LINE(59)
							bool tmp20 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(59)
							if ((tmp20)){
								HX_STACK_LINE(59)
								decodeState->acc = (int)0;
							}
							HX_STACK_LINE(59)
							while((true)){
								HX_STACK_LINE(59)
								bool tmp21 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(59)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(59)
								if ((tmp21)){
									HX_STACK_LINE(59)
									bool tmp23 = decodeState->lastSeg;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(59)
									bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(59)
									bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(59)
									bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(59)
									bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(59)
									if ((tmp27)){
										HX_STACK_LINE(59)
										int tmp28 = decodeState->next();		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(59)
										int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(59)
										int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(59)
										tmp22 = (tmp30 == (int)0);
									}
									else{
										HX_STACK_LINE(59)
										tmp22 = true;
									}
								}
								else{
									HX_STACK_LINE(59)
									tmp22 = false;
								}
								HX_STACK_LINE(59)
								if ((tmp22)){
									HX_STACK_LINE(59)
									decodeState->validBits = (int)-1;
									HX_STACK_LINE(59)
									break;
								}
								else{
									HX_STACK_LINE(59)
									(decodeState->bytesInSeg)--;
									HX_STACK_LINE(59)
									int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(59)
									{
										HX_STACK_LINE(59)
										int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(59)
										{
											HX_STACK_LINE(59)
											hx::AddEq(decodeState->inputPosition,(int)1);
											HX_STACK_LINE(59)
											tmp24 = decodeState->input->readByte();
										}
										HX_STACK_LINE(59)
										int tmp25 = decodeState->validBits;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(59)
										int tmp26 = (int(tmp24) << int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(59)
										int b = tmp26;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(59)
										tmp23 = (decodeState->acc + b);
									}
									HX_STACK_LINE(59)
									decodeState->acc = tmp23;
									HX_STACK_LINE(59)
									hx::AddEq(decodeState->validBits,(int)8);
								}
								HX_STACK_LINE(59)
								bool tmp23 = (decodeState->validBits < (int)3);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(59)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(59)
								if ((tmp24)){
									HX_STACK_LINE(59)
									break;
								}
							}
							HX_STACK_LINE(59)
							bool tmp21 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(59)
							if ((tmp21)){
								HX_STACK_LINE(59)
								tmp18 = (int)0;
							}
							else{
								HX_STACK_LINE(59)
								int tmp22 = (int(decodeState->acc) & int((int)7));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(59)
								int z = tmp22;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(59)
								int tmp23 = hx::UShr(decodeState->acc,(int)3);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(59)
								decodeState->acc = tmp23;
								HX_STACK_LINE(59)
								hx::SubEq(decodeState->validBits,(int)3);
								HX_STACK_LINE(59)
								tmp18 = z;
							}
						}
						else{
							HX_STACK_LINE(59)
							int tmp20 = (int(decodeState->acc) & int((int)7));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(59)
							int z = tmp20;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(59)
							int tmp21 = hx::UShr(decodeState->acc,(int)3);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(59)
							decodeState->acc = tmp21;
							HX_STACK_LINE(59)
							hx::SubEq(decodeState->validBits,(int)3);
							HX_STACK_LINE(59)
							tmp18 = z;
						}
					}
					HX_STACK_LINE(59)
					int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(59)
					int val = tmp19;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(59)
					int tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(59)
					int tmp21 = val;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(59)
					int tmp22 = g->classDimensions->__unsafe_set(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(59)
					tmp22;
				}
				HX_STACK_LINE(60)
				{
					HX_STACK_LINE(60)
					bool tmp17 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(60)
					int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(60)
					if ((tmp17)){
						HX_STACK_LINE(60)
						tmp18 = (int)0;
					}
					else{
						HX_STACK_LINE(60)
						bool tmp19 = (decodeState->validBits < (int)2);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(60)
						if ((tmp19)){
							HX_STACK_LINE(60)
							bool tmp20 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(60)
							if ((tmp20)){
								HX_STACK_LINE(60)
								decodeState->acc = (int)0;
							}
							HX_STACK_LINE(60)
							while((true)){
								HX_STACK_LINE(60)
								bool tmp21 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(60)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(60)
								if ((tmp21)){
									HX_STACK_LINE(60)
									bool tmp23 = decodeState->lastSeg;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(60)
									bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(60)
									bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(60)
									bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(60)
									bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(60)
									if ((tmp27)){
										HX_STACK_LINE(60)
										int tmp28 = decodeState->next();		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(60)
										int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(60)
										int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(60)
										tmp22 = (tmp30 == (int)0);
									}
									else{
										HX_STACK_LINE(60)
										tmp22 = true;
									}
								}
								else{
									HX_STACK_LINE(60)
									tmp22 = false;
								}
								HX_STACK_LINE(60)
								if ((tmp22)){
									HX_STACK_LINE(60)
									decodeState->validBits = (int)-1;
									HX_STACK_LINE(60)
									break;
								}
								else{
									HX_STACK_LINE(60)
									(decodeState->bytesInSeg)--;
									HX_STACK_LINE(60)
									int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(60)
									{
										HX_STACK_LINE(60)
										int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(60)
										{
											HX_STACK_LINE(60)
											hx::AddEq(decodeState->inputPosition,(int)1);
											HX_STACK_LINE(60)
											tmp24 = decodeState->input->readByte();
										}
										HX_STACK_LINE(60)
										int tmp25 = decodeState->validBits;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(60)
										int tmp26 = (int(tmp24) << int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(60)
										int b = tmp26;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(60)
										tmp23 = (decodeState->acc + b);
									}
									HX_STACK_LINE(60)
									decodeState->acc = tmp23;
									HX_STACK_LINE(60)
									hx::AddEq(decodeState->validBits,(int)8);
								}
								HX_STACK_LINE(60)
								bool tmp23 = (decodeState->validBits < (int)2);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(60)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(60)
								if ((tmp24)){
									HX_STACK_LINE(60)
									break;
								}
							}
							HX_STACK_LINE(60)
							bool tmp21 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(60)
							if ((tmp21)){
								HX_STACK_LINE(60)
								tmp18 = (int)0;
							}
							else{
								HX_STACK_LINE(60)
								int tmp22 = (int(decodeState->acc) & int((int)3));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(60)
								int z = tmp22;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(60)
								int tmp23 = hx::UShr(decodeState->acc,(int)2);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(60)
								decodeState->acc = tmp23;
								HX_STACK_LINE(60)
								hx::SubEq(decodeState->validBits,(int)2);
								HX_STACK_LINE(60)
								tmp18 = z;
							}
						}
						else{
							HX_STACK_LINE(60)
							int tmp20 = (int(decodeState->acc) & int((int)3));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(60)
							int z = tmp20;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(60)
							int tmp21 = hx::UShr(decodeState->acc,(int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(60)
							decodeState->acc = tmp21;
							HX_STACK_LINE(60)
							hx::SubEq(decodeState->validBits,(int)2);
							HX_STACK_LINE(60)
							tmp18 = z;
						}
					}
					HX_STACK_LINE(60)
					int val = tmp18;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(60)
					int tmp19 = j;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(60)
					int tmp20 = val;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(60)
					int tmp21 = g->classSubclasses->__unsafe_set(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(60)
					tmp21;
				}
				HX_STACK_LINE(61)
				int tmp17 = j;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(61)
				int tmp18 = g->classSubclasses->__unsafe_get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(61)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(61)
				bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(61)
				if ((tmp20)){
					HX_STACK_LINE(62)
					{
						HX_STACK_LINE(62)
						bool tmp21 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(62)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(62)
						if ((tmp21)){
							HX_STACK_LINE(62)
							tmp22 = (int)0;
						}
						else{
							HX_STACK_LINE(62)
							bool tmp23 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(62)
							if ((tmp23)){
								HX_STACK_LINE(62)
								bool tmp24 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(62)
								if ((tmp24)){
									HX_STACK_LINE(62)
									decodeState->acc = (int)0;
								}
								HX_STACK_LINE(62)
								while((true)){
									HX_STACK_LINE(62)
									bool tmp25 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(62)
									bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(62)
									if ((tmp25)){
										HX_STACK_LINE(62)
										bool tmp27 = decodeState->lastSeg;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(62)
										bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(62)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(62)
										bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(62)
										bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(62)
										if ((tmp31)){
											HX_STACK_LINE(62)
											int tmp32 = decodeState->next();		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(62)
											int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(62)
											int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(62)
											tmp26 = (tmp34 == (int)0);
										}
										else{
											HX_STACK_LINE(62)
											tmp26 = true;
										}
									}
									else{
										HX_STACK_LINE(62)
										tmp26 = false;
									}
									HX_STACK_LINE(62)
									if ((tmp26)){
										HX_STACK_LINE(62)
										decodeState->validBits = (int)-1;
										HX_STACK_LINE(62)
										break;
									}
									else{
										HX_STACK_LINE(62)
										(decodeState->bytesInSeg)--;
										HX_STACK_LINE(62)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												hx::AddEq(decodeState->inputPosition,(int)1);
												HX_STACK_LINE(62)
												tmp28 = decodeState->input->readByte();
											}
											HX_STACK_LINE(62)
											int tmp29 = decodeState->validBits;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int tmp30 = (int(tmp28) << int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(62)
											int b = tmp30;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(62)
											tmp27 = (decodeState->acc + b);
										}
										HX_STACK_LINE(62)
										decodeState->acc = tmp27;
										HX_STACK_LINE(62)
										hx::AddEq(decodeState->validBits,(int)8);
									}
									HX_STACK_LINE(62)
									bool tmp27 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(62)
									bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(62)
									if ((tmp28)){
										HX_STACK_LINE(62)
										break;
									}
								}
								HX_STACK_LINE(62)
								bool tmp25 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(62)
								if ((tmp25)){
									HX_STACK_LINE(62)
									tmp22 = (int)0;
								}
								else{
									HX_STACK_LINE(62)
									int tmp26 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(62)
									int z = tmp26;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(62)
									int tmp27 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(62)
									decodeState->acc = tmp27;
									HX_STACK_LINE(62)
									hx::SubEq(decodeState->validBits,(int)8);
									HX_STACK_LINE(62)
									tmp22 = z;
								}
							}
							else{
								HX_STACK_LINE(62)
								int tmp24 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(62)
								int z = tmp24;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(62)
								int tmp25 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(62)
								decodeState->acc = tmp25;
								HX_STACK_LINE(62)
								hx::SubEq(decodeState->validBits,(int)8);
								HX_STACK_LINE(62)
								tmp22 = z;
							}
						}
						HX_STACK_LINE(62)
						int val = tmp22;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(62)
						int tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(62)
						int tmp24 = val;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(62)
						int tmp25 = g->classMasterbooks->__unsafe_set(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(62)
						tmp25;
					}
					HX_STACK_LINE(63)
					int tmp21 = j;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(63)
					int tmp22 = g->classMasterbooks->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(63)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(63)
					int tmp24 = codebooks->length;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(63)
					bool tmp25 = (tmp23 >= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(63)
					if ((tmp25)){
						HX_STACK_LINE(64)
						Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("Floor.hx","\x92","\x54","\x6e","\xc5"),64,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Floor","\xfc","\x7c","\xe7","\xf7"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(64)
						::kha::audio2::ogg::vorbis::data::ReaderError tmp27 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(64)
						HX_STACK_DO_THROW(tmp27);
					}
				}
				HX_STACK_LINE(68)
				int tmp21 = j;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(68)
				int tmp22 = g->classSubclasses->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(68)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(68)
				int tmp24 = (int((int)1) << int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(68)
				int kl = tmp24;		HX_STACK_VAR(kl,"kl");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					Array< int > tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						Array< int > this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(69)
						Array< int > tmp26 = Array_obj< int >::__new();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(69)
						this1 = tmp26;
						HX_STACK_LINE(69)
						int tmp27 = kl;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(69)
						this1->__SetSizeExact(tmp27);
						HX_STACK_LINE(69)
						tmp25 = this1;
					}
					HX_STACK_LINE(69)
					Array< int > val = tmp25;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(69)
					int tmp26 = j;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(69)
					Array< int > tmp27 = val;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(69)
					Array< int > tmp28 = g->subclassBooks->__unsafe_set(tmp26,tmp27).StaticCast< Array< int > >();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(69)
					tmp28;
				}
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(70)
					while((true)){
						HX_STACK_LINE(70)
						bool tmp25 = (_g2 < kl);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(70)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(70)
						if ((tmp26)){
							HX_STACK_LINE(70)
							break;
						}
						HX_STACK_LINE(70)
						int tmp27 = (_g2)++;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(70)
						int k = tmp27;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(71)
							int tmp28 = j;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(71)
							Array< int > tmp29 = g->subclassBooks->__unsafe_get(tmp28).StaticCast< Array< int > >();		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(71)
							Array< int > this1 = tmp29;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(71)
							bool tmp30 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(71)
							int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(71)
							if ((tmp30)){
								HX_STACK_LINE(71)
								tmp31 = (int)0;
							}
							else{
								HX_STACK_LINE(71)
								bool tmp32 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(71)
								if ((tmp32)){
									HX_STACK_LINE(71)
									bool tmp33 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(71)
									if ((tmp33)){
										HX_STACK_LINE(71)
										decodeState->acc = (int)0;
									}
									HX_STACK_LINE(71)
									while((true)){
										HX_STACK_LINE(71)
										bool tmp34 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(71)
										bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(71)
										if ((tmp34)){
											HX_STACK_LINE(71)
											bool tmp36 = decodeState->lastSeg;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(71)
											bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(71)
											bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(71)
											bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(71)
											bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(71)
											if ((tmp40)){
												HX_STACK_LINE(71)
												int tmp41 = decodeState->next();		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(71)
												int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(71)
												int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(71)
												tmp35 = (tmp43 == (int)0);
											}
											else{
												HX_STACK_LINE(71)
												tmp35 = true;
											}
										}
										else{
											HX_STACK_LINE(71)
											tmp35 = false;
										}
										HX_STACK_LINE(71)
										if ((tmp35)){
											HX_STACK_LINE(71)
											decodeState->validBits = (int)-1;
											HX_STACK_LINE(71)
											break;
										}
										else{
											HX_STACK_LINE(71)
											(decodeState->bytesInSeg)--;
											HX_STACK_LINE(71)
											int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(71)
											{
												HX_STACK_LINE(71)
												int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(71)
												{
													HX_STACK_LINE(71)
													hx::AddEq(decodeState->inputPosition,(int)1);
													HX_STACK_LINE(71)
													tmp37 = decodeState->input->readByte();
												}
												HX_STACK_LINE(71)
												int tmp38 = decodeState->validBits;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(71)
												int tmp39 = (int(tmp37) << int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(71)
												int b = tmp39;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(71)
												tmp36 = (decodeState->acc + b);
											}
											HX_STACK_LINE(71)
											decodeState->acc = tmp36;
											HX_STACK_LINE(71)
											hx::AddEq(decodeState->validBits,(int)8);
										}
										HX_STACK_LINE(71)
										bool tmp36 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(71)
										bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(71)
										if ((tmp37)){
											HX_STACK_LINE(71)
											break;
										}
									}
									HX_STACK_LINE(71)
									bool tmp34 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(71)
									if ((tmp34)){
										HX_STACK_LINE(71)
										tmp31 = (int)0;
									}
									else{
										HX_STACK_LINE(71)
										int tmp35 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(71)
										int z = tmp35;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(71)
										int tmp36 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(71)
										decodeState->acc = tmp36;
										HX_STACK_LINE(71)
										hx::SubEq(decodeState->validBits,(int)8);
										HX_STACK_LINE(71)
										tmp31 = z;
									}
								}
								else{
									HX_STACK_LINE(71)
									int tmp33 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(71)
									int z = tmp33;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(71)
									int tmp34 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(71)
									decodeState->acc = tmp34;
									HX_STACK_LINE(71)
									hx::SubEq(decodeState->validBits,(int)8);
									HX_STACK_LINE(71)
									tmp31 = z;
								}
							}
							HX_STACK_LINE(71)
							int tmp32 = (tmp31 - (int)1);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(71)
							int val = tmp32;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(71)
							int tmp33 = k;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(71)
							int tmp34 = val;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(71)
							int tmp35 = this1->__unsafe_set(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(71)
							tmp35;
						}
						HX_STACK_LINE(72)
						int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							int tmp29 = j;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(72)
							Array< int > tmp30 = g->subclassBooks->__unsafe_get(tmp29).StaticCast< Array< int > >();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(72)
							Array< int > this1 = tmp30;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(72)
							int tmp31 = k;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(72)
							int tmp32 = this1->__unsafe_get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(72)
							tmp28 = tmp32;
						}
						HX_STACK_LINE(72)
						int tmp29 = codebooks->length;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(72)
						bool tmp30 = (tmp28 >= tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(72)
						if ((tmp30)){
							HX_STACK_LINE(73)
							Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("Floor.hx","\x92","\x54","\x6e","\xc5"),73,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Floor","\xfc","\x7c","\xe7","\xf7"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(73)
							::kha::audio2::ogg::vorbis::data::ReaderError tmp32 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(tmp32);
						}
					}
				}
			}
		}
		HX_STACK_LINE(78)
		bool tmp13 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(78)
		int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(78)
		if ((tmp13)){
			HX_STACK_LINE(78)
			tmp14 = (int)0;
		}
		else{
			HX_STACK_LINE(78)
			bool tmp15 = (decodeState->validBits < (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(78)
			if ((tmp15)){
				HX_STACK_LINE(78)
				bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(78)
				if ((tmp16)){
					HX_STACK_LINE(78)
					int tmp17 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(78)
					int tmp18 = (int)-22;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(78)
					int tmp19 = decodeState->readBits(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(78)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(78)
					tmp14 = (tmp17 + tmp20);
				}
				else{
					HX_STACK_LINE(78)
					bool tmp17 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(78)
					if ((tmp17)){
						HX_STACK_LINE(78)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(78)
					while((true)){
						HX_STACK_LINE(78)
						bool tmp18 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(78)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(78)
						if ((tmp18)){
							HX_STACK_LINE(78)
							bool tmp20 = decodeState->lastSeg;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(78)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(78)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(78)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(78)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(78)
							if ((tmp24)){
								HX_STACK_LINE(78)
								int tmp25 = decodeState->next();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(78)
								int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(78)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(78)
								tmp19 = (tmp27 == (int)0);
							}
							else{
								HX_STACK_LINE(78)
								tmp19 = true;
							}
						}
						else{
							HX_STACK_LINE(78)
							tmp19 = false;
						}
						HX_STACK_LINE(78)
						if ((tmp19)){
							HX_STACK_LINE(78)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(78)
							break;
						}
						else{
							HX_STACK_LINE(78)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(78)
							int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(78)
							{
								HX_STACK_LINE(78)
								int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(78)
								{
									HX_STACK_LINE(78)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(78)
									tmp21 = decodeState->input->readByte();
								}
								HX_STACK_LINE(78)
								int tmp22 = decodeState->validBits;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(78)
								int tmp23 = (int(tmp21) << int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(78)
								int b = tmp23;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(78)
								tmp20 = (decodeState->acc + b);
							}
							HX_STACK_LINE(78)
							decodeState->acc = tmp20;
							HX_STACK_LINE(78)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(78)
						bool tmp20 = (decodeState->validBits < (int)2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(78)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(78)
						if ((tmp21)){
							HX_STACK_LINE(78)
							break;
						}
					}
					HX_STACK_LINE(78)
					bool tmp18 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(78)
					if ((tmp18)){
						HX_STACK_LINE(78)
						tmp14 = (int)0;
					}
					else{
						HX_STACK_LINE(78)
						int tmp19 = decodeState->acc;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(78)
						int tmp20 = (int)4;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(78)
						int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(78)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(78)
						int tmp23 = (int(tmp19) & int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(78)
						int z = tmp23;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(78)
						int tmp24 = hx::UShr(decodeState->acc,(int)2);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(78)
						decodeState->acc = tmp24;
						HX_STACK_LINE(78)
						hx::SubEq(decodeState->validBits,(int)2);
						HX_STACK_LINE(78)
						tmp14 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(78)
				int tmp16 = decodeState->acc;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(78)
				int tmp17 = (int)4;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(78)
				int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(78)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(78)
				int tmp20 = (int(tmp16) & int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(78)
				int z = tmp20;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(78)
				int tmp21 = hx::UShr(decodeState->acc,(int)2);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(78)
				decodeState->acc = tmp21;
				HX_STACK_LINE(78)
				hx::SubEq(decodeState->validBits,(int)2);
				HX_STACK_LINE(78)
				tmp14 = z;
			}
		}
		HX_STACK_LINE(78)
		int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(78)
		g->floor1Multiplier = tmp15;
		HX_STACK_LINE(79)
		bool tmp16 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(79)
		int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(79)
		if ((tmp16)){
			HX_STACK_LINE(79)
			tmp17 = (int)0;
		}
		else{
			HX_STACK_LINE(79)
			bool tmp18 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(79)
			if ((tmp18)){
				HX_STACK_LINE(79)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(79)
				if ((tmp19)){
					HX_STACK_LINE(79)
					int tmp20 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(79)
					int tmp21 = (int)-20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(79)
					int tmp22 = decodeState->readBits(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(79)
					int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(79)
					tmp17 = (tmp20 + tmp23);
				}
				else{
					HX_STACK_LINE(79)
					bool tmp20 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(79)
					if ((tmp20)){
						HX_STACK_LINE(79)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(79)
					while((true)){
						HX_STACK_LINE(79)
						bool tmp21 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(79)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(79)
						if ((tmp21)){
							HX_STACK_LINE(79)
							bool tmp23 = decodeState->lastSeg;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(79)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(79)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(79)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(79)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(79)
							if ((tmp27)){
								HX_STACK_LINE(79)
								int tmp28 = decodeState->next();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(79)
								int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(79)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(79)
								tmp22 = (tmp30 == (int)0);
							}
							else{
								HX_STACK_LINE(79)
								tmp22 = true;
							}
						}
						else{
							HX_STACK_LINE(79)
							tmp22 = false;
						}
						HX_STACK_LINE(79)
						if ((tmp22)){
							HX_STACK_LINE(79)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(79)
							break;
						}
						else{
							HX_STACK_LINE(79)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(79)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(79)
							{
								HX_STACK_LINE(79)
								int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(79)
								{
									HX_STACK_LINE(79)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(79)
									tmp24 = decodeState->input->readByte();
								}
								HX_STACK_LINE(79)
								int tmp25 = decodeState->validBits;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(79)
								int tmp26 = (int(tmp24) << int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(79)
								int b = tmp26;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(79)
								tmp23 = (decodeState->acc + b);
							}
							HX_STACK_LINE(79)
							decodeState->acc = tmp23;
							HX_STACK_LINE(79)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(79)
						bool tmp23 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(79)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(79)
						if ((tmp24)){
							HX_STACK_LINE(79)
							break;
						}
					}
					HX_STACK_LINE(79)
					bool tmp21 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(79)
					if ((tmp21)){
						HX_STACK_LINE(79)
						tmp17 = (int)0;
					}
					else{
						HX_STACK_LINE(79)
						int tmp22 = decodeState->acc;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(79)
						int tmp23 = (int)16;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(79)
						int tmp24 = (tmp23 - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(79)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(79)
						int tmp26 = (int(tmp22) & int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(79)
						int z = tmp26;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(79)
						int tmp27 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(79)
						decodeState->acc = tmp27;
						HX_STACK_LINE(79)
						hx::SubEq(decodeState->validBits,(int)4);
						HX_STACK_LINE(79)
						tmp17 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(79)
				int tmp19 = decodeState->acc;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(79)
				int tmp20 = (int)16;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(79)
				int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(79)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(79)
				int tmp23 = (int(tmp19) & int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(79)
				int z = tmp23;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(79)
				int tmp24 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(79)
				decodeState->acc = tmp24;
				HX_STACK_LINE(79)
				hx::SubEq(decodeState->validBits,(int)4);
				HX_STACK_LINE(79)
				tmp17 = z;
			}
		}
		HX_STACK_LINE(79)
		g->rangebits = tmp17;
		HX_STACK_LINE(80)
		Array< int > tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(80)
			Array< int > tmp19 = Array_obj< int >::__new();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(80)
			this1 = tmp19;
			HX_STACK_LINE(80)
			this1->__SetSizeExact((int)250);
			HX_STACK_LINE(80)
			tmp18 = this1;
		}
		HX_STACK_LINE(80)
		g->xlist = tmp18;
		HX_STACK_LINE(81)
		int tmp19 = g->xlist->__unsafe_set((int)0,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(81)
		tmp19;
		HX_STACK_LINE(82)
		int tmp20 = (int((int)1) << int(g->rangebits));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(82)
		int tmp21 = g->xlist->__unsafe_set((int)1,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(82)
		tmp21;
		HX_STACK_LINE(83)
		g->values = (int)2;
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(84)
			int _g = g->partitions;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(84)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(84)
				if ((tmp23)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(84)
				int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(84)
				int j = tmp24;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(85)
				int tmp25 = j;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(85)
				int tmp26 = g->partitionClassList->__unsafe_get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(85)
				int c = tmp26;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(86)
					int tmp27 = c;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(86)
					int tmp28 = g->classDimensions->__unsafe_get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(86)
					int _g2 = tmp28;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(86)
					while((true)){
						HX_STACK_LINE(86)
						bool tmp29 = (_g3 < _g2);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(86)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(86)
						if ((tmp30)){
							HX_STACK_LINE(86)
							break;
						}
						HX_STACK_LINE(86)
						int tmp31 = (_g3)++;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(86)
						int k = tmp31;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(87)
						{
							HX_STACK_LINE(87)
							int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								int n = g->rangebits;		HX_STACK_VAR(n,"n");
								HX_STACK_LINE(87)
								bool tmp33 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(87)
								if ((tmp33)){
									HX_STACK_LINE(87)
									tmp32 = (int)0;
								}
								else{
									HX_STACK_LINE(87)
									bool tmp34 = (decodeState->validBits < n);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(87)
									if ((tmp34)){
										HX_STACK_LINE(87)
										bool tmp35 = (n > (int)24);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(87)
										if ((tmp35)){
											HX_STACK_LINE(87)
											int tmp36 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(87)
											int tmp37 = (n - (int)24);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(87)
											int tmp38 = decodeState->readBits(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(87)
											int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(87)
											tmp32 = (tmp36 + tmp39);
										}
										else{
											HX_STACK_LINE(87)
											bool tmp36 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(87)
											if ((tmp36)){
												HX_STACK_LINE(87)
												decodeState->acc = (int)0;
											}
											HX_STACK_LINE(87)
											while((true)){
												HX_STACK_LINE(87)
												bool tmp37 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(87)
												bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(87)
												if ((tmp37)){
													HX_STACK_LINE(87)
													bool tmp39 = decodeState->lastSeg;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(87)
													bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(87)
													bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(87)
													bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(87)
													bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(87)
													if ((tmp43)){
														HX_STACK_LINE(87)
														int tmp44 = decodeState->next();		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(87)
														int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(87)
														int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(87)
														tmp38 = (tmp46 == (int)0);
													}
													else{
														HX_STACK_LINE(87)
														tmp38 = true;
													}
												}
												else{
													HX_STACK_LINE(87)
													tmp38 = false;
												}
												HX_STACK_LINE(87)
												if ((tmp38)){
													HX_STACK_LINE(87)
													decodeState->validBits = (int)-1;
													HX_STACK_LINE(87)
													break;
												}
												else{
													HX_STACK_LINE(87)
													(decodeState->bytesInSeg)--;
													HX_STACK_LINE(87)
													int tmp39;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(87)
													{
														HX_STACK_LINE(87)
														int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(87)
														{
															HX_STACK_LINE(87)
															hx::AddEq(decodeState->inputPosition,(int)1);
															HX_STACK_LINE(87)
															tmp40 = decodeState->input->readByte();
														}
														HX_STACK_LINE(87)
														int tmp41 = decodeState->validBits;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(87)
														int tmp42 = (int(tmp40) << int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(87)
														int b = tmp42;		HX_STACK_VAR(b,"b");
														HX_STACK_LINE(87)
														tmp39 = (decodeState->acc + b);
													}
													HX_STACK_LINE(87)
													decodeState->acc = tmp39;
													HX_STACK_LINE(87)
													hx::AddEq(decodeState->validBits,(int)8);
												}
												HX_STACK_LINE(87)
												bool tmp39 = (decodeState->validBits < n);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(87)
												bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(87)
												if ((tmp40)){
													HX_STACK_LINE(87)
													break;
												}
											}
											HX_STACK_LINE(87)
											bool tmp37 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(87)
											if ((tmp37)){
												HX_STACK_LINE(87)
												tmp32 = (int)0;
											}
											else{
												HX_STACK_LINE(87)
												int tmp38 = decodeState->acc;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(87)
												int tmp39 = (int((int)1) << int(n));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(87)
												int tmp40 = (tmp39 - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(87)
												int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(87)
												int tmp42 = (int(tmp38) & int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(87)
												int z = tmp42;		HX_STACK_VAR(z,"z");
												HX_STACK_LINE(87)
												int tmp43 = hx::UShr(decodeState->acc,n);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(87)
												decodeState->acc = tmp43;
												HX_STACK_LINE(87)
												hx::SubEq(decodeState->validBits,n);
												HX_STACK_LINE(87)
												tmp32 = z;
											}
										}
									}
									else{
										HX_STACK_LINE(87)
										int tmp35 = decodeState->acc;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(87)
										int tmp36 = (int((int)1) << int(n));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(87)
										int tmp37 = (tmp36 - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(87)
										int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(87)
										int tmp39 = (int(tmp35) & int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(87)
										int z = tmp39;		HX_STACK_VAR(z,"z");
										HX_STACK_LINE(87)
										int tmp40 = hx::UShr(decodeState->acc,n);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(87)
										decodeState->acc = tmp40;
										HX_STACK_LINE(87)
										hx::SubEq(decodeState->validBits,n);
										HX_STACK_LINE(87)
										tmp32 = z;
									}
								}
							}
							HX_STACK_LINE(87)
							int val = tmp32;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(87)
							int tmp33 = g->values;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(87)
							int tmp34 = val;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(87)
							int tmp35 = g->xlist->__unsafe_set(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(87)
							tmp35;
						}
						HX_STACK_LINE(88)
						(g->values)++;
					}
				}
			}
		}
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			int _g = g->values;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			while((true)){
				HX_STACK_LINE(93)
				bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(93)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(93)
				if ((tmp23)){
					HX_STACK_LINE(93)
					break;
				}
				HX_STACK_LINE(93)
				int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(93)
				int j = tmp24;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(94)
				::kha::audio2::ogg::vorbis::data::IntPoint tmp25 = ::kha::audio2::ogg::vorbis::data::IntPoint_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(94)
				p->push(tmp25);
				HX_STACK_LINE(95)
				int tmp26 = j;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(95)
				int tmp27 = g->xlist->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(95)
				::kha::audio2::ogg::vorbis::data::IntPoint tmp28 = p->__get(j).StaticCast< ::kha::audio2::ogg::vorbis::data::IntPoint >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(95)
				tmp28->x = tmp27;
				HX_STACK_LINE(96)
				::kha::audio2::ogg::vorbis::data::IntPoint tmp29 = p->__get(j).StaticCast< ::kha::audio2::ogg::vorbis::data::IntPoint >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(96)
				tmp29->y = j;
			}
		}
		HX_STACK_LINE(99)
		Dynamic tmp22 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::pointCompare_dyn();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(99)
		p->sort(tmp22);
		HX_STACK_LINE(101)
		Array< int > tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			Array< int > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(101)
			Array< int > tmp24 = Array_obj< int >::__new();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(101)
			this1 = tmp24;
			HX_STACK_LINE(101)
			int tmp25 = g->values;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(101)
			this1->__SetSizeExact(tmp25);
			HX_STACK_LINE(101)
			tmp23 = this1;
		}
		HX_STACK_LINE(101)
		g->sortedOrder = tmp23;
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(102)
			int _g = g->values;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				bool tmp24 = (_g1 < _g);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(102)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(102)
				if ((tmp25)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(102)
				int tmp26 = (_g1)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(102)
				int j = tmp26;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(103)
				int tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(103)
				::kha::audio2::ogg::vorbis::data::IntPoint tmp28 = p->__get(j).StaticCast< ::kha::audio2::ogg::vorbis::data::IntPoint >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(103)
				int tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(103)
				int tmp30 = g->sortedOrder->__unsafe_set(tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(103)
				tmp30;
			}
		}
		HX_STACK_LINE(106)
		Array< ::Dynamic > tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(106)
			Array< ::Dynamic > tmp25 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(106)
			this1 = tmp25;
			HX_STACK_LINE(106)
			int tmp26 = g->values;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(106)
			this1->__SetSizeExact(tmp26);
			HX_STACK_LINE(106)
			tmp24 = this1;
		}
		HX_STACK_LINE(106)
		g->neighbors = tmp24;
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int _g1 = (int)2;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(108)
			int _g = g->values;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			while((true)){
				HX_STACK_LINE(108)
				bool tmp25 = (_g1 < _g);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(108)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(108)
				if ((tmp26)){
					HX_STACK_LINE(108)
					break;
				}
				HX_STACK_LINE(108)
				int tmp27 = (_g1)++;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(108)
				int j = tmp27;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(109)
				Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(109)
				{
					HX_STACK_LINE(109)
					Array< int > x = g->xlist;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(109)
					int low = (int)-1;		HX_STACK_VAR(low,"low");
					HX_STACK_LINE(109)
					int high = (int)65536;		HX_STACK_VAR(high,"high");
					HX_STACK_LINE(109)
					int plow = (int)0;		HX_STACK_VAR(plow,"plow");
					HX_STACK_LINE(109)
					int phigh = (int)0;		HX_STACK_VAR(phigh,"phigh");
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(109)
						while((true)){
							HX_STACK_LINE(109)
							bool tmp29 = (_g2 < j);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(109)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(109)
							if ((tmp30)){
								HX_STACK_LINE(109)
								break;
							}
							HX_STACK_LINE(109)
							int tmp31 = (_g2)++;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(109)
							int i = tmp31;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(109)
							int tmp32 = i;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(109)
							int tmp33 = x->__unsafe_get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(109)
							int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(109)
							int tmp35 = low;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(109)
							bool tmp36 = (tmp34 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(109)
							bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(109)
							if ((tmp36)){
								HX_STACK_LINE(109)
								int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(109)
								int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(109)
								int tmp40 = x->__unsafe_get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(109)
								int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(109)
								int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(109)
								int tmp43 = j;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(109)
								int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(109)
								int tmp45 = x->__unsafe_get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(109)
								int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(109)
								int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(109)
								tmp37 = (tmp42 < tmp47);
							}
							else{
								HX_STACK_LINE(109)
								tmp37 = false;
							}
							HX_STACK_LINE(109)
							if ((tmp37)){
								HX_STACK_LINE(109)
								plow = i;
								HX_STACK_LINE(109)
								int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(109)
								int tmp39 = x->__unsafe_get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(109)
								low = tmp39;
							}
							HX_STACK_LINE(109)
							int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(109)
							int tmp39 = x->__unsafe_get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(109)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(109)
							int tmp41 = high;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(109)
							bool tmp42 = (tmp40 < tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(109)
							bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(109)
							if ((tmp42)){
								HX_STACK_LINE(109)
								int tmp44 = i;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(109)
								int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(109)
								int tmp46 = x->__unsafe_get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(109)
								int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(109)
								int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(109)
								int tmp49 = j;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(109)
								int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(109)
								int tmp51 = x->__unsafe_get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(109)
								int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(109)
								int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(109)
								tmp43 = (tmp48 > tmp53);
							}
							else{
								HX_STACK_LINE(109)
								tmp43 = false;
							}
							HX_STACK_LINE(109)
							if ((tmp43)){
								HX_STACK_LINE(109)
								phigh = i;
								HX_STACK_LINE(109)
								int tmp44 = i;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(109)
								int tmp45 = x->__unsafe_get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(109)
								high = tmp45;
							}
						}
					}
					struct _Function_5_1{
						inline static Dynamic Block( int &phigh,int &plow){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/audio2/ogg/vorbis/data/Floor.hx",109,0x2f4d0043)
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
					tmp28 = _Function_5_1::Block(phigh,plow);
				}
				HX_STACK_LINE(109)
				Dynamic ne = tmp28;		HX_STACK_VAR(ne,"ne");
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					Array< int > tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						Array< int > this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(110)
						Array< int > tmp30 = Array_obj< int >::__new();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(110)
						this1 = tmp30;
						HX_STACK_LINE(110)
						int tmp31 = g->values;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(110)
						this1->__SetSizeExact(tmp31);
						HX_STACK_LINE(110)
						tmp29 = this1;
					}
					HX_STACK_LINE(110)
					Array< int > val = tmp29;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(110)
					int tmp30 = j;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(110)
					Array< int > tmp31 = val;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(110)
					Array< int > tmp32 = g->neighbors->__unsafe_set(tmp30,tmp31).StaticCast< Array< int > >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(110)
					tmp32;
				}
				HX_STACK_LINE(111)
				{
					HX_STACK_LINE(111)
					int tmp29 = j;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(111)
					Array< int > tmp30 = g->neighbors->__unsafe_get(tmp29).StaticCast< Array< int > >();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(111)
					Array< int > this1 = tmp30;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(111)
					int tmp31 = ne->__Field(HX_HCSTRING("low","\x94","\x54","\x52","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(111)
					int tmp32 = this1->__unsafe_set((int)0,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(111)
					tmp32;
				}
				HX_STACK_LINE(112)
				{
					HX_STACK_LINE(112)
					int tmp29 = j;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(112)
					Array< int > tmp30 = g->neighbors->__unsafe_get(tmp29).StaticCast< Array< int > >();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(112)
					Array< int > this1 = tmp30;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(112)
					int tmp31 = ne->__Field(HX_HCSTRING("high","\x62","\x37","\x0e","\x45"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(112)
					int tmp32 = this1->__unsafe_set((int)1,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(112)
					tmp32;
				}
			}
		}
	}
	HX_STACK_LINE(116)
	::kha::audio2::ogg::vorbis::data::Floor tmp4 = floor;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(116)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Floor_obj,read,return )


Floor_obj::Floor_obj()
{
}

void Floor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Floor);
	HX_MARK_MEMBER_NAME(floor0,"floor0");
	HX_MARK_MEMBER_NAME(floor1,"floor1");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void Floor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(floor0,"floor0");
	HX_VISIT_MEMBER_NAME(floor1,"floor1");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic Floor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floor0") ) { return floor0; }
		if (HX_FIELD_EQ(inName,"floor1") ) { return floor1; }
	}
	return super::__Field(inName,inCallProp);
}

bool Floor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true;  }
	}
	return false;
}

Dynamic Floor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floor0") ) { floor0=inValue.Cast< ::kha::audio2::ogg::vorbis::data::Floor0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floor1") ) { floor1=inValue.Cast< ::kha::audio2::ogg::vorbis::data::Floor1 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Floor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Floor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("floor0","\xe4","\xc0","\x60","\x41"));
	outFields->push(HX_HCSTRING("floor1","\xe5","\xc0","\x60","\x41"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::audio2::ogg::vorbis::data::Floor0*/ ,(int)offsetof(Floor_obj,floor0),HX_HCSTRING("floor0","\xe4","\xc0","\x60","\x41")},
	{hx::fsObject /*::kha::audio2::ogg::vorbis::data::Floor1*/ ,(int)offsetof(Floor_obj,floor1),HX_HCSTRING("floor1","\xe5","\xc0","\x60","\x41")},
	{hx::fsInt,(int)offsetof(Floor_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("floor0","\xe4","\xc0","\x60","\x41"),
	HX_HCSTRING("floor1","\xe5","\xc0","\x60","\x41"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Floor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Floor_obj::__mClass,"__mClass");
};

#endif

hx::Class Floor_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	::String(null()) };

void Floor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Floor","\xfc","\x7c","\xe7","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Floor_obj::__GetStatic;
	__mClass->mSetStaticField = &Floor_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Floor_obj >;
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
