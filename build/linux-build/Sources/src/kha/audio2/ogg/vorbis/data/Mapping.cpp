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
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor
#include <kha/audio2/ogg/vorbis/data/Floor.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor1
#include <kha/audio2/ogg/vorbis/data/Floor1.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mapping
#include <kha/audio2/ogg/vorbis/data/Mapping.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel
#include <kha/audio2/ogg/vorbis/data/MappingChannel.h>
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

Void Mapping_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Mapping","new",0xf4d4ea30,"kha.audio2.ogg.vorbis.data.Mapping.new","kha/audio2/ogg/vorbis/data/Mapping.hx",14,0x30bf6281)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Mapping_obj::~Mapping_obj() { }

Dynamic Mapping_obj::__CreateEmpty() { return  new Mapping_obj; }
hx::ObjectPtr< Mapping_obj > Mapping_obj::__new()
{  hx::ObjectPtr< Mapping_obj > _result_ = new Mapping_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mapping_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mapping_obj > _result_ = new Mapping_obj();
	_result_->__construct();
	return _result_;}

Void Mapping_obj::doFloor( Array< ::Dynamic > floors,int i,int n,Array< Float > target,Array< int > finalY,Array< bool > step2Flag){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Mapping","doFloor",0xc69df411,"kha.audio2.ogg.vorbis.data.Mapping.doFloor","kha/audio2/ogg/vorbis/data/Mapping.hx",89,0x30bf6281)
		HX_STACK_THIS(this)
		HX_STACK_ARG(floors,"floors")
		HX_STACK_ARG(i,"i")
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(finalY,"finalY")
		HX_STACK_ARG(step2Flag,"step2Flag")
		HX_STACK_LINE(90)
		int tmp = (int(n) >> int((int)1));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		int n2 = tmp;		HX_STACK_VAR(n2,"n2");
		HX_STACK_LINE(91)
		Array< ::Dynamic > tmp1 = this->chan;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		::kha::audio2::ogg::vorbis::data::MappingChannel tmp3 = tmp1->__unsafe_get(tmp2).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		int tmp4 = tmp3->mux;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		int s = tmp4;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(91)
		Dynamic floor;		HX_STACK_VAR(floor,"floor");
		HX_STACK_LINE(92)
		::kha::audio2::ogg::vorbis::data::Floor tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			Array< int > tmp6 = this->submapFloor;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(92)
			int tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(92)
			int tmp8 = tmp6->__unsafe_get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(92)
			int index = tmp8;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(92)
			int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(92)
			::kha::audio2::ogg::vorbis::data::Floor tmp10 = floors->__unsafe_get(tmp9).StaticCast< ::kha::audio2::ogg::vorbis::data::Floor >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(92)
			tmp5 = tmp10;
		}
		HX_STACK_LINE(92)
		::kha::audio2::ogg::vorbis::data::Floor floor1 = tmp5;		HX_STACK_VAR(floor1,"floor1");
		HX_STACK_LINE(93)
		bool tmp6 = (floor1->type == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		if ((tmp6)){
			HX_STACK_LINE(94)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Mapping.hx","\x90","\xa8","\x19","\x91"),94,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mapping","\x3e","\x52","\xb0","\xaf"),HX_HCSTRING("doFloor","\x41","\xb2","\xc3","\x35"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			::kha::audio2::ogg::vorbis::data::ReaderError tmp8 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_STREAM,null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			HX_STACK_DO_THROW(tmp8);
		}
		else{
			HX_STACK_LINE(96)
			::kha::audio2::ogg::vorbis::data::Floor1 g = floor1->floor1;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(97)
			int lx = (int)0;		HX_STACK_VAR(lx,"lx");
			HX_STACK_LINE(97)
			int tmp7 = finalY->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			int tmp8 = g->floor1Multiplier;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(97)
			int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(97)
			int ly = tmp9;		HX_STACK_VAR(ly,"ly");
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(98)
				int _g = g->values;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(98)
				while((true)){
					HX_STACK_LINE(98)
					bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(98)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(98)
					if ((tmp11)){
						HX_STACK_LINE(98)
						break;
					}
					HX_STACK_LINE(98)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(98)
					int q = tmp12;		HX_STACK_VAR(q,"q");
					HX_STACK_LINE(99)
					int tmp13 = q;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(99)
					int tmp14 = g->sortedOrder->__unsafe_get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(99)
					int j = tmp14;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(100)
					int tmp15 = finalY->__get(j);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(100)
					bool tmp16 = (tmp15 >= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(100)
					if ((tmp16)){
						HX_STACK_LINE(102)
						int tmp17 = finalY->__get(j);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(102)
						int tmp18 = g->floor1Multiplier;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(102)
						int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(102)
						int hy = tmp19;		HX_STACK_VAR(hy,"hy");
						HX_STACK_LINE(103)
						int tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(103)
						int tmp21 = g->xlist->__unsafe_get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(103)
						int hx = tmp21;		HX_STACK_VAR(hx,"hx");
						HX_STACK_LINE(104)
						Array< Float > tmp22 = target;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(104)
						int tmp23 = lx;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(104)
						int tmp24 = ly;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(104)
						int tmp25 = hx;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(104)
						int tmp26 = hy;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(104)
						int tmp27 = n2;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(104)
						::kha::audio2::ogg::vorbis::VorbisTools_obj::drawLine(tmp22,tmp23,tmp24,tmp25,tmp26,tmp27);
						HX_STACK_LINE(105)
						lx = hx;
						HX_STACK_LINE(106)
						ly = hy;
					}
				}
			}
			HX_STACK_LINE(109)
			bool tmp10 = (lx < n2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(109)
			if ((tmp10)){
				HX_STACK_LINE(111)
				int _g = lx;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(111)
				while((true)){
					HX_STACK_LINE(111)
					bool tmp11 = (_g < n2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(111)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(111)
					if ((tmp12)){
						HX_STACK_LINE(111)
						break;
					}
					HX_STACK_LINE(111)
					int tmp13 = (_g)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(111)
					int j = tmp13;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(112)
						int _g1 = j;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(112)
						{
							HX_STACK_LINE(112)
							int tmp14 = _g1;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(112)
							Float tmp15 = target->__unsafe_get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(112)
							Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(112)
							Array< Float > tmp17 = ::kha::audio2::ogg::vorbis::VorbisTools_obj::INVERSE_DB_TABLE;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(112)
							int tmp18 = ly;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(112)
							Float tmp19 = tmp17->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(112)
							Float tmp20 = (tmp16 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(112)
							Float val = tmp20;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(112)
							int tmp21 = _g1;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(112)
							Float tmp22 = val;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(112)
							Float tmp23 = target->__unsafe_set(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(112)
							tmp23;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Mapping_obj,doFloor,(void))

::kha::audio2::ogg::vorbis::data::Mapping Mapping_obj::read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,int channels){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Mapping","read",0x481cc786,"kha.audio2.ogg.vorbis.data.Mapping.read","kha/audio2/ogg/vorbis/data/Mapping.hx",18,0x30bf6281)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_ARG(channels,"channels")
	HX_STACK_LINE(19)
	::kha::audio2::ogg::vorbis::data::Mapping m = ::kha::audio2::ogg::vorbis::data::Mapping_obj::__new();		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(20)
	bool tmp = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(20)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(20)
		bool tmp2 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		if ((tmp2)){
			HX_STACK_LINE(20)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(20)
			if ((tmp3)){
				HX_STACK_LINE(20)
				int tmp4 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(20)
				int tmp5 = (int)-8;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(20)
				int tmp6 = decodeState->readBits(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(20)
				int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(20)
				tmp1 = (tmp4 + tmp7);
			}
			else{
				HX_STACK_LINE(20)
				bool tmp4 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(20)
				if ((tmp4)){
					HX_STACK_LINE(20)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(20)
				while((true)){
					HX_STACK_LINE(20)
					bool tmp5 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(20)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(20)
					if ((tmp5)){
						HX_STACK_LINE(20)
						bool tmp7 = decodeState->lastSeg;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(20)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(20)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(20)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(20)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(20)
						if ((tmp11)){
							HX_STACK_LINE(20)
							int tmp12 = decodeState->next();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(20)
							int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(20)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(20)
							tmp6 = (tmp14 == (int)0);
						}
						else{
							HX_STACK_LINE(20)
							tmp6 = true;
						}
					}
					else{
						HX_STACK_LINE(20)
						tmp6 = false;
					}
					HX_STACK_LINE(20)
					if ((tmp6)){
						HX_STACK_LINE(20)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(20)
						break;
					}
					else{
						HX_STACK_LINE(20)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(20)
						int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(20)
						{
							HX_STACK_LINE(20)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(20)
							{
								HX_STACK_LINE(20)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(20)
								tmp8 = decodeState->input->readByte();
							}
							HX_STACK_LINE(20)
							int tmp9 = decodeState->validBits;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(20)
							int tmp10 = (int(tmp8) << int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(20)
							int b = tmp10;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(20)
							tmp7 = (decodeState->acc + b);
						}
						HX_STACK_LINE(20)
						decodeState->acc = tmp7;
						HX_STACK_LINE(20)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(20)
					bool tmp7 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(20)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(20)
					if ((tmp8)){
						HX_STACK_LINE(20)
						break;
					}
				}
				HX_STACK_LINE(20)
				bool tmp5 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(20)
				if ((tmp5)){
					HX_STACK_LINE(20)
					tmp1 = (int)0;
				}
				else{
					HX_STACK_LINE(20)
					int tmp6 = decodeState->acc;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(20)
					int tmp7 = (int)65536;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(20)
					int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(20)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(20)
					int tmp10 = (int(tmp6) & int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(20)
					int z = tmp10;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(20)
					int tmp11 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(20)
					decodeState->acc = tmp11;
					HX_STACK_LINE(20)
					hx::SubEq(decodeState->validBits,(int)16);
					HX_STACK_LINE(20)
					tmp1 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(20)
			int tmp3 = decodeState->acc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(20)
			int tmp4 = (int)65536;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(20)
			int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(20)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(20)
			int tmp7 = (int(tmp3) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(20)
			int z = tmp7;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(20)
			int tmp8 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(20)
			decodeState->acc = tmp8;
			HX_STACK_LINE(20)
			hx::SubEq(decodeState->validBits,(int)16);
			HX_STACK_LINE(20)
			tmp1 = z;
		}
	}
	HX_STACK_LINE(20)
	int mappingType = tmp1;		HX_STACK_VAR(mappingType,"mappingType");
	HX_STACK_LINE(21)
	bool tmp2 = (mappingType != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	if ((tmp2)){
		HX_STACK_LINE(22)
		::String tmp3 = (HX_HCSTRING("mapping type ","\x94","\x35","\x6c","\xd8") + mappingType);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Mapping.hx","\x90","\xa8","\x19","\x91"),22,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mapping","\x3e","\x52","\xb0","\xaf"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp5 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(25)
	Array< ::Dynamic > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(25)
		Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		this1 = tmp4;
		HX_STACK_LINE(25)
		int tmp5 = channels;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		this1->__SetSizeExact(tmp5);
		HX_STACK_LINE(25)
		tmp3 = this1;
	}
	HX_STACK_LINE(25)
	m->chan = tmp3;
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			bool tmp4 = (_g < channels);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(26)
			if ((tmp5)){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			int j = tmp6;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(27)
			{
				HX_STACK_LINE(27)
				::kha::audio2::ogg::vorbis::data::MappingChannel val = ::kha::audio2::ogg::vorbis::data::MappingChannel_obj::__new();		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(27)
				int tmp7 = j;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(27)
				::kha::audio2::ogg::vorbis::data::MappingChannel tmp8 = val;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(27)
				::kha::audio2::ogg::vorbis::data::MappingChannel tmp9 = m->chan->__unsafe_set(tmp7,tmp8).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(27)
				tmp9;
			}
		}
	}
	HX_STACK_LINE(30)
	bool tmp4 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	if ((tmp4)){
		HX_STACK_LINE(30)
		tmp5 = (int)0;
	}
	else{
		HX_STACK_LINE(30)
		bool tmp6 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		if ((tmp6)){
			HX_STACK_LINE(30)
			bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			if ((tmp7)){
				HX_STACK_LINE(30)
				int tmp8 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				int tmp9 = (int)-23;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(30)
				int tmp10 = decodeState->readBits(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(30)
				int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(30)
				tmp5 = (tmp8 + tmp11);
			}
			else{
				HX_STACK_LINE(30)
				bool tmp8 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				if ((tmp8)){
					HX_STACK_LINE(30)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(30)
				while((true)){
					HX_STACK_LINE(30)
					bool tmp9 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(30)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(30)
					if ((tmp9)){
						HX_STACK_LINE(30)
						bool tmp11 = decodeState->lastSeg;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(30)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(30)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(30)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(30)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(30)
						if ((tmp15)){
							HX_STACK_LINE(30)
							int tmp16 = decodeState->next();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(30)
							int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(30)
							int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(30)
							tmp10 = (tmp18 == (int)0);
						}
						else{
							HX_STACK_LINE(30)
							tmp10 = true;
						}
					}
					else{
						HX_STACK_LINE(30)
						tmp10 = false;
					}
					HX_STACK_LINE(30)
					if ((tmp10)){
						HX_STACK_LINE(30)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(30)
						break;
					}
					else{
						HX_STACK_LINE(30)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(30)
						int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(30)
						{
							HX_STACK_LINE(30)
							int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(30)
							{
								HX_STACK_LINE(30)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(30)
								tmp12 = decodeState->input->readByte();
							}
							HX_STACK_LINE(30)
							int tmp13 = decodeState->validBits;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(30)
							int tmp14 = (int(tmp12) << int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(30)
							int b = tmp14;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(30)
							tmp11 = (decodeState->acc + b);
						}
						HX_STACK_LINE(30)
						decodeState->acc = tmp11;
						HX_STACK_LINE(30)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(30)
					bool tmp11 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(30)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(30)
					if ((tmp12)){
						HX_STACK_LINE(30)
						break;
					}
				}
				HX_STACK_LINE(30)
				bool tmp9 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(30)
				if ((tmp9)){
					HX_STACK_LINE(30)
					tmp5 = (int)0;
				}
				else{
					HX_STACK_LINE(30)
					int tmp10 = decodeState->acc;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(30)
					int tmp11 = (int)2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(30)
					int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(30)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(30)
					int tmp14 = (int(tmp10) & int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(30)
					int z = tmp14;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(30)
					int tmp15 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(30)
					decodeState->acc = tmp15;
					HX_STACK_LINE(30)
					hx::SubEq(decodeState->validBits,(int)1);
					HX_STACK_LINE(30)
					tmp5 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(30)
			int tmp7 = decodeState->acc;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			int tmp8 = (int)2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(30)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(30)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(30)
			int tmp11 = (int(tmp7) & int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(30)
			int z = tmp11;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(30)
			int tmp12 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(30)
			decodeState->acc = tmp12;
			HX_STACK_LINE(30)
			hx::SubEq(decodeState->validBits,(int)1);
			HX_STACK_LINE(30)
			tmp5 = z;
		}
	}
	HX_STACK_LINE(30)
	bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	if ((tmp6)){
		HX_STACK_LINE(31)
		bool tmp7 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		if ((tmp7)){
			HX_STACK_LINE(31)
			tmp8 = (int)0;
		}
		else{
			HX_STACK_LINE(31)
			bool tmp9 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			if ((tmp9)){
				HX_STACK_LINE(31)
				bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(31)
				if ((tmp10)){
					HX_STACK_LINE(31)
					int tmp11 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(31)
					int tmp12 = (int)-20;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(31)
					int tmp13 = decodeState->readBits(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(31)
					int tmp14 = (int(tmp13) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(31)
					tmp8 = (tmp11 + tmp14);
				}
				else{
					HX_STACK_LINE(31)
					bool tmp11 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(31)
					if ((tmp11)){
						HX_STACK_LINE(31)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(31)
					while((true)){
						HX_STACK_LINE(31)
						bool tmp12 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(31)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(31)
						if ((tmp12)){
							HX_STACK_LINE(31)
							bool tmp14 = decodeState->lastSeg;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(31)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(31)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(31)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(31)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(31)
							if ((tmp18)){
								HX_STACK_LINE(31)
								int tmp19 = decodeState->next();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(31)
								int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(31)
								int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(31)
								tmp13 = (tmp21 == (int)0);
							}
							else{
								HX_STACK_LINE(31)
								tmp13 = true;
							}
						}
						else{
							HX_STACK_LINE(31)
							tmp13 = false;
						}
						HX_STACK_LINE(31)
						if ((tmp13)){
							HX_STACK_LINE(31)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(31)
							break;
						}
						else{
							HX_STACK_LINE(31)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(31)
							int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(31)
							{
								HX_STACK_LINE(31)
								int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(31)
								{
									HX_STACK_LINE(31)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(31)
									tmp15 = decodeState->input->readByte();
								}
								HX_STACK_LINE(31)
								int tmp16 = decodeState->validBits;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(31)
								int tmp17 = (int(tmp15) << int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(31)
								int b = tmp17;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(31)
								tmp14 = (decodeState->acc + b);
							}
							HX_STACK_LINE(31)
							decodeState->acc = tmp14;
							HX_STACK_LINE(31)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(31)
						bool tmp14 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(31)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(31)
						if ((tmp15)){
							HX_STACK_LINE(31)
							break;
						}
					}
					HX_STACK_LINE(31)
					bool tmp12 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(31)
					if ((tmp12)){
						HX_STACK_LINE(31)
						tmp8 = (int)0;
					}
					else{
						HX_STACK_LINE(31)
						int tmp13 = decodeState->acc;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(31)
						int tmp14 = (int)16;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(31)
						int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(31)
						int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(31)
						int tmp17 = (int(tmp13) & int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(31)
						int z = tmp17;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(31)
						int tmp18 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(31)
						decodeState->acc = tmp18;
						HX_STACK_LINE(31)
						hx::SubEq(decodeState->validBits,(int)4);
						HX_STACK_LINE(31)
						tmp8 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(31)
				int tmp10 = decodeState->acc;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(31)
				int tmp11 = (int)16;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(31)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(31)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(31)
				int tmp14 = (int(tmp10) & int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(31)
				int z = tmp14;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(31)
				int tmp15 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(31)
				decodeState->acc = tmp15;
				HX_STACK_LINE(31)
				hx::SubEq(decodeState->validBits,(int)4);
				HX_STACK_LINE(31)
				tmp8 = z;
			}
		}
		HX_STACK_LINE(31)
		int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		m->submaps = tmp9;
	}
	else{
		HX_STACK_LINE(33)
		m->submaps = (int)1;
	}
	HX_STACK_LINE(40)
	bool tmp7 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	if ((tmp7)){
		HX_STACK_LINE(40)
		tmp8 = (int)0;
	}
	else{
		HX_STACK_LINE(40)
		bool tmp9 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		if ((tmp9)){
			HX_STACK_LINE(40)
			bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(40)
			if ((tmp10)){
				HX_STACK_LINE(40)
				int tmp11 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(40)
				int tmp12 = (int)-23;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(40)
				int tmp13 = decodeState->readBits(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(40)
				int tmp14 = (int(tmp13) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(40)
				tmp8 = (tmp11 + tmp14);
			}
			else{
				HX_STACK_LINE(40)
				bool tmp11 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(40)
				if ((tmp11)){
					HX_STACK_LINE(40)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(40)
				while((true)){
					HX_STACK_LINE(40)
					bool tmp12 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(40)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(40)
					if ((tmp12)){
						HX_STACK_LINE(40)
						bool tmp14 = decodeState->lastSeg;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(40)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(40)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(40)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(40)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(40)
						if ((tmp18)){
							HX_STACK_LINE(40)
							int tmp19 = decodeState->next();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(40)
							int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(40)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(40)
							tmp13 = (tmp21 == (int)0);
						}
						else{
							HX_STACK_LINE(40)
							tmp13 = true;
						}
					}
					else{
						HX_STACK_LINE(40)
						tmp13 = false;
					}
					HX_STACK_LINE(40)
					if ((tmp13)){
						HX_STACK_LINE(40)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(40)
						break;
					}
					else{
						HX_STACK_LINE(40)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(40)
						int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(40)
						{
							HX_STACK_LINE(40)
							int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(40)
							{
								HX_STACK_LINE(40)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(40)
								tmp15 = decodeState->input->readByte();
							}
							HX_STACK_LINE(40)
							int tmp16 = decodeState->validBits;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(40)
							int tmp17 = (int(tmp15) << int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(40)
							int b = tmp17;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(40)
							tmp14 = (decodeState->acc + b);
						}
						HX_STACK_LINE(40)
						decodeState->acc = tmp14;
						HX_STACK_LINE(40)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(40)
					bool tmp14 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(40)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(40)
					if ((tmp15)){
						HX_STACK_LINE(40)
						break;
					}
				}
				HX_STACK_LINE(40)
				bool tmp12 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(40)
				if ((tmp12)){
					HX_STACK_LINE(40)
					tmp8 = (int)0;
				}
				else{
					HX_STACK_LINE(40)
					int tmp13 = decodeState->acc;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(40)
					int tmp14 = (int)2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(40)
					int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(40)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(40)
					int tmp17 = (int(tmp13) & int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(40)
					int z = tmp17;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(40)
					int tmp18 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(40)
					decodeState->acc = tmp18;
					HX_STACK_LINE(40)
					hx::SubEq(decodeState->validBits,(int)1);
					HX_STACK_LINE(40)
					tmp8 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(40)
			int tmp10 = decodeState->acc;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(40)
			int tmp11 = (int)2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(40)
			int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(40)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(40)
			int tmp14 = (int(tmp10) & int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(40)
			int z = tmp14;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(40)
			int tmp15 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(40)
			decodeState->acc = tmp15;
			HX_STACK_LINE(40)
			hx::SubEq(decodeState->validBits,(int)1);
			HX_STACK_LINE(40)
			tmp8 = z;
		}
	}
	HX_STACK_LINE(40)
	bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(40)
	if ((tmp9)){
		HX_STACK_LINE(41)
		bool tmp10 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		if ((tmp10)){
			HX_STACK_LINE(41)
			tmp11 = (int)0;
		}
		else{
			HX_STACK_LINE(41)
			bool tmp12 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(41)
			if ((tmp12)){
				HX_STACK_LINE(41)
				bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(41)
				if ((tmp13)){
					HX_STACK_LINE(41)
					int tmp14 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(41)
					int tmp15 = (int)-16;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(41)
					int tmp16 = decodeState->readBits(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(41)
					int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(41)
					tmp11 = (tmp14 + tmp17);
				}
				else{
					HX_STACK_LINE(41)
					bool tmp14 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(41)
					if ((tmp14)){
						HX_STACK_LINE(41)
						decodeState->acc = (int)0;
					}
					HX_STACK_LINE(41)
					while((true)){
						HX_STACK_LINE(41)
						bool tmp15 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(41)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(41)
						if ((tmp15)){
							HX_STACK_LINE(41)
							bool tmp17 = decodeState->lastSeg;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(41)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(41)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(41)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(41)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(41)
							if ((tmp21)){
								HX_STACK_LINE(41)
								int tmp22 = decodeState->next();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(41)
								int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(41)
								int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(41)
								tmp16 = (tmp24 == (int)0);
							}
							else{
								HX_STACK_LINE(41)
								tmp16 = true;
							}
						}
						else{
							HX_STACK_LINE(41)
							tmp16 = false;
						}
						HX_STACK_LINE(41)
						if ((tmp16)){
							HX_STACK_LINE(41)
							decodeState->validBits = (int)-1;
							HX_STACK_LINE(41)
							break;
						}
						else{
							HX_STACK_LINE(41)
							(decodeState->bytesInSeg)--;
							HX_STACK_LINE(41)
							int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(41)
							{
								HX_STACK_LINE(41)
								int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(41)
								{
									HX_STACK_LINE(41)
									hx::AddEq(decodeState->inputPosition,(int)1);
									HX_STACK_LINE(41)
									tmp18 = decodeState->input->readByte();
								}
								HX_STACK_LINE(41)
								int tmp19 = decodeState->validBits;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(41)
								int tmp20 = (int(tmp18) << int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(41)
								int b = tmp20;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(41)
								tmp17 = (decodeState->acc + b);
							}
							HX_STACK_LINE(41)
							decodeState->acc = tmp17;
							HX_STACK_LINE(41)
							hx::AddEq(decodeState->validBits,(int)8);
						}
						HX_STACK_LINE(41)
						bool tmp17 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(41)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(41)
						if ((tmp18)){
							HX_STACK_LINE(41)
							break;
						}
					}
					HX_STACK_LINE(41)
					bool tmp15 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(41)
					if ((tmp15)){
						HX_STACK_LINE(41)
						tmp11 = (int)0;
					}
					else{
						HX_STACK_LINE(41)
						int tmp16 = decodeState->acc;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(41)
						int tmp17 = (int)256;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(41)
						int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(41)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(41)
						int tmp20 = (int(tmp16) & int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(41)
						int z = tmp20;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(41)
						int tmp21 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(41)
						decodeState->acc = tmp21;
						HX_STACK_LINE(41)
						hx::SubEq(decodeState->validBits,(int)8);
						HX_STACK_LINE(41)
						tmp11 = z;
					}
				}
			}
			else{
				HX_STACK_LINE(41)
				int tmp13 = decodeState->acc;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(41)
				int tmp14 = (int)256;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(41)
				int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(41)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(41)
				int tmp17 = (int(tmp13) & int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(41)
				int z = tmp17;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(41)
				int tmp18 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(41)
				decodeState->acc = tmp18;
				HX_STACK_LINE(41)
				hx::SubEq(decodeState->validBits,(int)8);
				HX_STACK_LINE(41)
				tmp11 = z;
			}
		}
		HX_STACK_LINE(41)
		int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		m->couplingSteps = tmp12;
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			int _g = m->couplingSteps;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			while((true)){
				HX_STACK_LINE(42)
				bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(42)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(42)
				if ((tmp14)){
					HX_STACK_LINE(42)
					break;
				}
				HX_STACK_LINE(42)
				int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(42)
				int k = tmp15;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(43)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(43)
					{
						HX_STACK_LINE(43)
						int tmp18 = (channels - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(43)
						int n = tmp18;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(43)
						Array< int > tmp19 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(43)
						Array< int > log2_4 = tmp19;		HX_STACK_VAR(log2_4,"log2_4");
						HX_STACK_LINE(43)
						bool tmp20 = (n < (int)16384);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(43)
						if ((tmp20)){
							HX_STACK_LINE(43)
							bool tmp21 = (n < (int)16);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(43)
							if ((tmp21)){
								HX_STACK_LINE(43)
								tmp17 = log2_4->__get(n);
							}
							else{
								HX_STACK_LINE(43)
								bool tmp22 = (n < (int)512);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(43)
								if ((tmp22)){
									HX_STACK_LINE(43)
									Array< int > tmp23 = log2_4;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(43)
									int tmp24 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(43)
									int tmp25 = tmp23->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(43)
									tmp17 = ((int)5 + tmp25);
								}
								else{
									HX_STACK_LINE(43)
									Array< int > tmp23 = log2_4;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(43)
									int tmp24 = (int(n) >> int((int)10));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(43)
									int tmp25 = tmp23->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(43)
									tmp17 = ((int)10 + tmp25);
								}
							}
						}
						else{
							HX_STACK_LINE(43)
							bool tmp21 = (n < (int)16777216);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(43)
							if ((tmp21)){
								HX_STACK_LINE(43)
								bool tmp22 = (n < (int)524288);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(43)
								if ((tmp22)){
									HX_STACK_LINE(43)
									Array< int > tmp23 = log2_4;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(43)
									int tmp24 = (int(n) >> int((int)15));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(43)
									int tmp25 = tmp23->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(43)
									tmp17 = ((int)15 + tmp25);
								}
								else{
									HX_STACK_LINE(43)
									Array< int > tmp23 = log2_4;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(43)
									int tmp24 = (int(n) >> int((int)20));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(43)
									int tmp25 = tmp23->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(43)
									tmp17 = ((int)20 + tmp25);
								}
							}
							else{
								HX_STACK_LINE(43)
								bool tmp22 = (n < (int)536870912);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(43)
								if ((tmp22)){
									HX_STACK_LINE(43)
									Array< int > tmp23 = log2_4;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(43)
									int tmp24 = (int(n) >> int((int)25));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(43)
									int tmp25 = tmp23->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(43)
									tmp17 = ((int)25 + tmp25);
								}
								else{
									HX_STACK_LINE(43)
									bool tmp23 = (n < (int)-2147483648);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(43)
									if ((tmp23)){
										HX_STACK_LINE(43)
										Array< int > tmp24 = log2_4;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(43)
										int tmp25 = (int(n) >> int((int)30));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(43)
										int tmp26 = tmp24->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(43)
										tmp17 = ((int)30 + tmp26);
									}
									else{
										HX_STACK_LINE(43)
										tmp17 = (int)0;
									}
								}
							}
						}
					}
					HX_STACK_LINE(43)
					int n = tmp17;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(43)
					bool tmp18 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(43)
					if ((tmp18)){
						HX_STACK_LINE(43)
						tmp16 = (int)0;
					}
					else{
						HX_STACK_LINE(43)
						bool tmp19 = (decodeState->validBits < n);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(43)
						if ((tmp19)){
							HX_STACK_LINE(43)
							bool tmp20 = (n > (int)24);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(43)
							if ((tmp20)){
								HX_STACK_LINE(43)
								int tmp21 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(43)
								int tmp22 = (n - (int)24);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(43)
								int tmp23 = decodeState->readBits(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(43)
								int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(43)
								tmp16 = (tmp21 + tmp24);
							}
							else{
								HX_STACK_LINE(43)
								bool tmp21 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(43)
								if ((tmp21)){
									HX_STACK_LINE(43)
									decodeState->acc = (int)0;
								}
								HX_STACK_LINE(43)
								while((true)){
									HX_STACK_LINE(43)
									bool tmp22 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(43)
									bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(43)
									if ((tmp22)){
										HX_STACK_LINE(43)
										bool tmp24 = decodeState->lastSeg;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(43)
										bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(43)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(43)
										bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(43)
										bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(43)
										if ((tmp28)){
											HX_STACK_LINE(43)
											int tmp29 = decodeState->next();		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(43)
											int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(43)
											int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(43)
											tmp23 = (tmp31 == (int)0);
										}
										else{
											HX_STACK_LINE(43)
											tmp23 = true;
										}
									}
									else{
										HX_STACK_LINE(43)
										tmp23 = false;
									}
									HX_STACK_LINE(43)
									if ((tmp23)){
										HX_STACK_LINE(43)
										decodeState->validBits = (int)-1;
										HX_STACK_LINE(43)
										break;
									}
									else{
										HX_STACK_LINE(43)
										(decodeState->bytesInSeg)--;
										HX_STACK_LINE(43)
										int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(43)
										{
											HX_STACK_LINE(43)
											int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(43)
											{
												HX_STACK_LINE(43)
												hx::AddEq(decodeState->inputPosition,(int)1);
												HX_STACK_LINE(43)
												tmp25 = decodeState->input->readByte();
											}
											HX_STACK_LINE(43)
											int tmp26 = decodeState->validBits;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(43)
											int tmp27 = (int(tmp25) << int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(43)
											int b = tmp27;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(43)
											tmp24 = (decodeState->acc + b);
										}
										HX_STACK_LINE(43)
										decodeState->acc = tmp24;
										HX_STACK_LINE(43)
										hx::AddEq(decodeState->validBits,(int)8);
									}
									HX_STACK_LINE(43)
									bool tmp24 = (decodeState->validBits < n);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(43)
									bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(43)
									if ((tmp25)){
										HX_STACK_LINE(43)
										break;
									}
								}
								HX_STACK_LINE(43)
								bool tmp22 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(43)
								if ((tmp22)){
									HX_STACK_LINE(43)
									tmp16 = (int)0;
								}
								else{
									HX_STACK_LINE(43)
									int tmp23 = decodeState->acc;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(43)
									int tmp24 = (int((int)1) << int(n));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(43)
									int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(43)
									int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(43)
									int tmp27 = (int(tmp23) & int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(43)
									int z = tmp27;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(43)
									int tmp28 = hx::UShr(decodeState->acc,n);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(43)
									decodeState->acc = tmp28;
									HX_STACK_LINE(43)
									hx::SubEq(decodeState->validBits,n);
									HX_STACK_LINE(43)
									tmp16 = z;
								}
							}
						}
						else{
							HX_STACK_LINE(43)
							int tmp20 = decodeState->acc;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(43)
							int tmp21 = (int((int)1) << int(n));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(43)
							int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(43)
							int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(43)
							int tmp24 = (int(tmp20) & int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(43)
							int z = tmp24;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(43)
							int tmp25 = hx::UShr(decodeState->acc,n);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(43)
							decodeState->acc = tmp25;
							HX_STACK_LINE(43)
							hx::SubEq(decodeState->validBits,n);
							HX_STACK_LINE(43)
							tmp16 = z;
						}
					}
				}
				HX_STACK_LINE(43)
				int tmp17 = k;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(43)
				::kha::audio2::ogg::vorbis::data::MappingChannel tmp18 = m->chan->__unsafe_get(tmp17).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(43)
				tmp18->magnitude = tmp16;
				HX_STACK_LINE(44)
				int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(44)
					{
						HX_STACK_LINE(44)
						int tmp21 = (channels - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(44)
						int n = tmp21;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(44)
						Array< int > tmp22 = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)4);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(44)
						Array< int > log2_4 = tmp22;		HX_STACK_VAR(log2_4,"log2_4");
						HX_STACK_LINE(44)
						bool tmp23 = (n < (int)16384);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(44)
						if ((tmp23)){
							HX_STACK_LINE(44)
							bool tmp24 = (n < (int)16);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(44)
							if ((tmp24)){
								HX_STACK_LINE(44)
								tmp20 = log2_4->__get(n);
							}
							else{
								HX_STACK_LINE(44)
								bool tmp25 = (n < (int)512);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(44)
								if ((tmp25)){
									HX_STACK_LINE(44)
									Array< int > tmp26 = log2_4;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(44)
									int tmp27 = (int(n) >> int((int)5));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(44)
									int tmp28 = tmp26->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(44)
									tmp20 = ((int)5 + tmp28);
								}
								else{
									HX_STACK_LINE(44)
									Array< int > tmp26 = log2_4;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(44)
									int tmp27 = (int(n) >> int((int)10));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(44)
									int tmp28 = tmp26->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(44)
									tmp20 = ((int)10 + tmp28);
								}
							}
						}
						else{
							HX_STACK_LINE(44)
							bool tmp24 = (n < (int)16777216);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(44)
							if ((tmp24)){
								HX_STACK_LINE(44)
								bool tmp25 = (n < (int)524288);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(44)
								if ((tmp25)){
									HX_STACK_LINE(44)
									Array< int > tmp26 = log2_4;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(44)
									int tmp27 = (int(n) >> int((int)15));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(44)
									int tmp28 = tmp26->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(44)
									tmp20 = ((int)15 + tmp28);
								}
								else{
									HX_STACK_LINE(44)
									Array< int > tmp26 = log2_4;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(44)
									int tmp27 = (int(n) >> int((int)20));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(44)
									int tmp28 = tmp26->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(44)
									tmp20 = ((int)20 + tmp28);
								}
							}
							else{
								HX_STACK_LINE(44)
								bool tmp25 = (n < (int)536870912);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(44)
								if ((tmp25)){
									HX_STACK_LINE(44)
									Array< int > tmp26 = log2_4;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(44)
									int tmp27 = (int(n) >> int((int)25));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(44)
									int tmp28 = tmp26->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(44)
									tmp20 = ((int)25 + tmp28);
								}
								else{
									HX_STACK_LINE(44)
									bool tmp26 = (n < (int)-2147483648);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(44)
									if ((tmp26)){
										HX_STACK_LINE(44)
										Array< int > tmp27 = log2_4;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(44)
										int tmp28 = (int(n) >> int((int)30));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(44)
										int tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(44)
										tmp20 = ((int)30 + tmp29);
									}
									else{
										HX_STACK_LINE(44)
										tmp20 = (int)0;
									}
								}
							}
						}
					}
					HX_STACK_LINE(44)
					int n = tmp20;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(44)
					bool tmp21 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(44)
					if ((tmp21)){
						HX_STACK_LINE(44)
						tmp19 = (int)0;
					}
					else{
						HX_STACK_LINE(44)
						bool tmp22 = (decodeState->validBits < n);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(44)
						if ((tmp22)){
							HX_STACK_LINE(44)
							bool tmp23 = (n > (int)24);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(44)
							if ((tmp23)){
								HX_STACK_LINE(44)
								int tmp24 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(44)
								int tmp25 = (n - (int)24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(44)
								int tmp26 = decodeState->readBits(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(44)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(44)
								tmp19 = (tmp24 + tmp27);
							}
							else{
								HX_STACK_LINE(44)
								bool tmp24 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(44)
								if ((tmp24)){
									HX_STACK_LINE(44)
									decodeState->acc = (int)0;
								}
								HX_STACK_LINE(44)
								while((true)){
									HX_STACK_LINE(44)
									bool tmp25 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(44)
									bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(44)
									if ((tmp25)){
										HX_STACK_LINE(44)
										bool tmp27 = decodeState->lastSeg;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(44)
										bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(44)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(44)
										bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(44)
										bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(44)
										if ((tmp31)){
											HX_STACK_LINE(44)
											int tmp32 = decodeState->next();		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(44)
											int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(44)
											int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(44)
											tmp26 = (tmp34 == (int)0);
										}
										else{
											HX_STACK_LINE(44)
											tmp26 = true;
										}
									}
									else{
										HX_STACK_LINE(44)
										tmp26 = false;
									}
									HX_STACK_LINE(44)
									if ((tmp26)){
										HX_STACK_LINE(44)
										decodeState->validBits = (int)-1;
										HX_STACK_LINE(44)
										break;
									}
									else{
										HX_STACK_LINE(44)
										(decodeState->bytesInSeg)--;
										HX_STACK_LINE(44)
										int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(44)
										{
											HX_STACK_LINE(44)
											int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(44)
											{
												HX_STACK_LINE(44)
												hx::AddEq(decodeState->inputPosition,(int)1);
												HX_STACK_LINE(44)
												tmp28 = decodeState->input->readByte();
											}
											HX_STACK_LINE(44)
											int tmp29 = decodeState->validBits;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(44)
											int tmp30 = (int(tmp28) << int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(44)
											int b = tmp30;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(44)
											tmp27 = (decodeState->acc + b);
										}
										HX_STACK_LINE(44)
										decodeState->acc = tmp27;
										HX_STACK_LINE(44)
										hx::AddEq(decodeState->validBits,(int)8);
									}
									HX_STACK_LINE(44)
									bool tmp27 = (decodeState->validBits < n);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(44)
									bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(44)
									if ((tmp28)){
										HX_STACK_LINE(44)
										break;
									}
								}
								HX_STACK_LINE(44)
								bool tmp25 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(44)
								if ((tmp25)){
									HX_STACK_LINE(44)
									tmp19 = (int)0;
								}
								else{
									HX_STACK_LINE(44)
									int tmp26 = decodeState->acc;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(44)
									int tmp27 = (int((int)1) << int(n));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(44)
									int tmp28 = (tmp27 - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(44)
									int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(44)
									int tmp30 = (int(tmp26) & int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(44)
									int z = tmp30;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(44)
									int tmp31 = hx::UShr(decodeState->acc,n);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(44)
									decodeState->acc = tmp31;
									HX_STACK_LINE(44)
									hx::SubEq(decodeState->validBits,n);
									HX_STACK_LINE(44)
									tmp19 = z;
								}
							}
						}
						else{
							HX_STACK_LINE(44)
							int tmp23 = decodeState->acc;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(44)
							int tmp24 = (int((int)1) << int(n));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(44)
							int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(44)
							int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(44)
							int tmp27 = (int(tmp23) & int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(44)
							int z = tmp27;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(44)
							int tmp28 = hx::UShr(decodeState->acc,n);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(44)
							decodeState->acc = tmp28;
							HX_STACK_LINE(44)
							hx::SubEq(decodeState->validBits,n);
							HX_STACK_LINE(44)
							tmp19 = z;
						}
					}
				}
				HX_STACK_LINE(44)
				int tmp20 = k;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(44)
				::kha::audio2::ogg::vorbis::data::MappingChannel tmp21 = m->chan->__unsafe_get(tmp20).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(44)
				tmp21->angle = tmp19;
				HX_STACK_LINE(45)
				int tmp22 = k;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(45)
				::kha::audio2::ogg::vorbis::data::MappingChannel tmp23 = m->chan->__unsafe_get(tmp22).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(45)
				int tmp24 = tmp23->magnitude;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(45)
				int tmp25 = channels;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(45)
				bool tmp26 = (tmp24 >= tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(45)
				if ((tmp26)){
					HX_STACK_LINE(46)
					Dynamic tmp27 = hx::SourceInfo(HX_HCSTRING("Mapping.hx","\x90","\xa8","\x19","\x91"),46,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mapping","\x3e","\x52","\xb0","\xaf"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(46)
					::kha::audio2::ogg::vorbis::data::ReaderError tmp28 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(46)
					HX_STACK_DO_THROW(tmp28);
				}
				HX_STACK_LINE(48)
				int tmp27 = k;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(48)
				::kha::audio2::ogg::vorbis::data::MappingChannel tmp28 = m->chan->__unsafe_get(tmp27).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(48)
				int tmp29 = tmp28->angle;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(48)
				int tmp30 = channels;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(48)
				bool tmp31 = (tmp29 >= tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(48)
				if ((tmp31)){
					HX_STACK_LINE(49)
					Dynamic tmp32 = hx::SourceInfo(HX_HCSTRING("Mapping.hx","\x90","\xa8","\x19","\x91"),49,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mapping","\x3e","\x52","\xb0","\xaf"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(49)
					::kha::audio2::ogg::vorbis::data::ReaderError tmp33 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(49)
					HX_STACK_DO_THROW(tmp33);
				}
				HX_STACK_LINE(51)
				int tmp32 = k;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(51)
				::kha::audio2::ogg::vorbis::data::MappingChannel tmp33 = m->chan->__unsafe_get(tmp32).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(51)
				int tmp34 = tmp33->magnitude;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(51)
				int tmp35 = k;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(51)
				::kha::audio2::ogg::vorbis::data::MappingChannel tmp36 = m->chan->__unsafe_get(tmp35).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(51)
				int tmp37 = tmp36->angle;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(51)
				bool tmp38 = (tmp34 == tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(51)
				if ((tmp38)){
					HX_STACK_LINE(52)
					Dynamic tmp39 = hx::SourceInfo(HX_HCSTRING("Mapping.hx","\x90","\xa8","\x19","\x91"),52,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mapping","\x3e","\x52","\xb0","\xaf"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(52)
					::kha::audio2::ogg::vorbis::data::ReaderError tmp40 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(52)
					HX_STACK_DO_THROW(tmp40);
				}
			}
		}
	}
	else{
		HX_STACK_LINE(56)
		m->couplingSteps = (int)0;
	}
	HX_STACK_LINE(60)
	bool tmp10 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(60)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(60)
	if ((tmp10)){
		HX_STACK_LINE(60)
		tmp11 = (int)0;
	}
	else{
		HX_STACK_LINE(60)
		bool tmp12 = (decodeState->validBits < (int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(60)
		if ((tmp12)){
			HX_STACK_LINE(60)
			bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			if ((tmp13)){
				HX_STACK_LINE(60)
				int tmp14 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(60)
				int tmp15 = (int)-22;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(60)
				int tmp16 = decodeState->readBits(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(60)
				int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(60)
				tmp11 = (tmp14 + tmp17);
			}
			else{
				HX_STACK_LINE(60)
				bool tmp14 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(60)
				if ((tmp14)){
					HX_STACK_LINE(60)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(60)
				while((true)){
					HX_STACK_LINE(60)
					bool tmp15 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(60)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(60)
					if ((tmp15)){
						HX_STACK_LINE(60)
						bool tmp17 = decodeState->lastSeg;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(60)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(60)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(60)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(60)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(60)
						if ((tmp21)){
							HX_STACK_LINE(60)
							int tmp22 = decodeState->next();		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(60)
							int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(60)
							int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(60)
							tmp16 = (tmp24 == (int)0);
						}
						else{
							HX_STACK_LINE(60)
							tmp16 = true;
						}
					}
					else{
						HX_STACK_LINE(60)
						tmp16 = false;
					}
					HX_STACK_LINE(60)
					if ((tmp16)){
						HX_STACK_LINE(60)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(60)
						break;
					}
					else{
						HX_STACK_LINE(60)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(60)
						int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(60)
						{
							HX_STACK_LINE(60)
							int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(60)
								tmp18 = decodeState->input->readByte();
							}
							HX_STACK_LINE(60)
							int tmp19 = decodeState->validBits;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(60)
							int tmp20 = (int(tmp18) << int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(60)
							int b = tmp20;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(60)
							tmp17 = (decodeState->acc + b);
						}
						HX_STACK_LINE(60)
						decodeState->acc = tmp17;
						HX_STACK_LINE(60)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(60)
					bool tmp17 = (decodeState->validBits < (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(60)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(60)
					if ((tmp18)){
						HX_STACK_LINE(60)
						break;
					}
				}
				HX_STACK_LINE(60)
				bool tmp15 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(60)
				if ((tmp15)){
					HX_STACK_LINE(60)
					tmp11 = (int)0;
				}
				else{
					HX_STACK_LINE(60)
					int tmp16 = decodeState->acc;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(60)
					int tmp17 = (int)4;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(60)
					int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(60)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(60)
					int tmp20 = (int(tmp16) & int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(60)
					int z = tmp20;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(60)
					int tmp21 = hx::UShr(decodeState->acc,(int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(60)
					decodeState->acc = tmp21;
					HX_STACK_LINE(60)
					hx::SubEq(decodeState->validBits,(int)2);
					HX_STACK_LINE(60)
					tmp11 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(60)
			int tmp13 = decodeState->acc;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			int tmp14 = (int)4;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(60)
			int tmp17 = (int(tmp13) & int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(60)
			int z = tmp17;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(60)
			int tmp18 = hx::UShr(decodeState->acc,(int)2);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(60)
			decodeState->acc = tmp18;
			HX_STACK_LINE(60)
			hx::SubEq(decodeState->validBits,(int)2);
			HX_STACK_LINE(60)
			tmp11 = z;
		}
	}
	HX_STACK_LINE(60)
	bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(60)
	if ((tmp12)){
		HX_STACK_LINE(61)
		Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Mapping.hx","\x90","\xa8","\x19","\x91"),61,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mapping","\x3e","\x52","\xb0","\xaf"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(61)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp14 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(61)
		HX_STACK_DO_THROW(tmp14);
	}
	HX_STACK_LINE(63)
	bool tmp13 = (m->submaps > (int)1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(63)
	if ((tmp13)){
		HX_STACK_LINE(64)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		while((true)){
			HX_STACK_LINE(64)
			bool tmp14 = (_g < channels);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(64)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(64)
			if ((tmp15)){
				HX_STACK_LINE(64)
				break;
			}
			HX_STACK_LINE(64)
			int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(64)
			int j = tmp16;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(65)
			bool tmp17 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(65)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(65)
			if ((tmp17)){
				HX_STACK_LINE(65)
				tmp18 = (int)0;
			}
			else{
				HX_STACK_LINE(65)
				bool tmp19 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(65)
				if ((tmp19)){
					HX_STACK_LINE(65)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(65)
					if ((tmp20)){
						HX_STACK_LINE(65)
						int tmp21 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(65)
						int tmp22 = (int)-20;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(65)
						int tmp23 = decodeState->readBits(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(65)
						int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(65)
						tmp18 = (tmp21 + tmp24);
					}
					else{
						HX_STACK_LINE(65)
						bool tmp21 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(65)
						if ((tmp21)){
							HX_STACK_LINE(65)
							decodeState->acc = (int)0;
						}
						HX_STACK_LINE(65)
						while((true)){
							HX_STACK_LINE(65)
							bool tmp22 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(65)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(65)
							if ((tmp22)){
								HX_STACK_LINE(65)
								bool tmp24 = decodeState->lastSeg;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(65)
								bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(65)
								bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(65)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(65)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(65)
								if ((tmp28)){
									HX_STACK_LINE(65)
									int tmp29 = decodeState->next();		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(65)
									int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(65)
									int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(65)
									tmp23 = (tmp31 == (int)0);
								}
								else{
									HX_STACK_LINE(65)
									tmp23 = true;
								}
							}
							else{
								HX_STACK_LINE(65)
								tmp23 = false;
							}
							HX_STACK_LINE(65)
							if ((tmp23)){
								HX_STACK_LINE(65)
								decodeState->validBits = (int)-1;
								HX_STACK_LINE(65)
								break;
							}
							else{
								HX_STACK_LINE(65)
								(decodeState->bytesInSeg)--;
								HX_STACK_LINE(65)
								int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(65)
								{
									HX_STACK_LINE(65)
									int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(65)
									{
										HX_STACK_LINE(65)
										hx::AddEq(decodeState->inputPosition,(int)1);
										HX_STACK_LINE(65)
										tmp25 = decodeState->input->readByte();
									}
									HX_STACK_LINE(65)
									int tmp26 = decodeState->validBits;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(65)
									int tmp27 = (int(tmp25) << int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(65)
									int b = tmp27;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(65)
									tmp24 = (decodeState->acc + b);
								}
								HX_STACK_LINE(65)
								decodeState->acc = tmp24;
								HX_STACK_LINE(65)
								hx::AddEq(decodeState->validBits,(int)8);
							}
							HX_STACK_LINE(65)
							bool tmp24 = (decodeState->validBits < (int)4);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(65)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(65)
							if ((tmp25)){
								HX_STACK_LINE(65)
								break;
							}
						}
						HX_STACK_LINE(65)
						bool tmp22 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(65)
						if ((tmp22)){
							HX_STACK_LINE(65)
							tmp18 = (int)0;
						}
						else{
							HX_STACK_LINE(65)
							int tmp23 = decodeState->acc;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(65)
							int tmp24 = (int)16;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(65)
							int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(65)
							int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(65)
							int tmp27 = (int(tmp23) & int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(65)
							int z = tmp27;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(65)
							int tmp28 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(65)
							decodeState->acc = tmp28;
							HX_STACK_LINE(65)
							hx::SubEq(decodeState->validBits,(int)4);
							HX_STACK_LINE(65)
							tmp18 = z;
						}
					}
				}
				else{
					HX_STACK_LINE(65)
					int tmp20 = decodeState->acc;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(65)
					int tmp21 = (int)16;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(65)
					int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(65)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(65)
					int tmp24 = (int(tmp20) & int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(65)
					int z = tmp24;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(65)
					int tmp25 = hx::UShr(decodeState->acc,(int)4);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(65)
					decodeState->acc = tmp25;
					HX_STACK_LINE(65)
					hx::SubEq(decodeState->validBits,(int)4);
					HX_STACK_LINE(65)
					tmp18 = z;
				}
			}
			HX_STACK_LINE(65)
			int tmp19 = j;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(65)
			::kha::audio2::ogg::vorbis::data::MappingChannel tmp20 = m->chan->__unsafe_get(tmp19).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(65)
			tmp20->mux = tmp18;
			HX_STACK_LINE(66)
			int tmp21 = j;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(66)
			::kha::audio2::ogg::vorbis::data::MappingChannel tmp22 = m->chan->__unsafe_get(tmp21).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(66)
			int tmp23 = tmp22->mux;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(66)
			int tmp24 = m->submaps;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(66)
			bool tmp25 = (tmp23 >= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(66)
			if ((tmp25)){
				HX_STACK_LINE(67)
				Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("Mapping.hx","\x90","\xa8","\x19","\x91"),67,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mapping","\x3e","\x52","\xb0","\xaf"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(67)
				::kha::audio2::ogg::vorbis::data::ReaderError tmp27 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(67)
				HX_STACK_DO_THROW(tmp27);
			}
		}
	}
	else{
		HX_STACK_LINE(71)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			bool tmp14 = (_g < channels);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(71)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(71)
			if ((tmp15)){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(71)
			int j = tmp16;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(72)
			int tmp17 = j;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(72)
			::kha::audio2::ogg::vorbis::data::MappingChannel tmp18 = m->chan->__unsafe_get(tmp17).StaticCast< ::kha::audio2::ogg::vorbis::data::MappingChannel >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(72)
			tmp18->mux = (int)0;
		}
	}
	HX_STACK_LINE(76)
	Array< int > tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(76)
		Array< int > tmp15 = Array_obj< int >::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(76)
		this1 = tmp15;
		HX_STACK_LINE(76)
		int tmp16 = m->submaps;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(76)
		this1->__SetSizeExact(tmp16);
		HX_STACK_LINE(76)
		tmp14 = this1;
	}
	HX_STACK_LINE(76)
	m->submapFloor = tmp14;
	HX_STACK_LINE(77)
	Array< int > tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(77)
		Array< int > tmp16 = Array_obj< int >::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(77)
		this1 = tmp16;
		HX_STACK_LINE(77)
		int tmp17 = m->submaps;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(77)
		this1->__SetSizeExact(tmp17);
		HX_STACK_LINE(77)
		tmp15 = this1;
	}
	HX_STACK_LINE(77)
	m->submapResidue = tmp15;
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		int _g = m->submaps;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		while((true)){
			HX_STACK_LINE(79)
			bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(79)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(79)
			if ((tmp17)){
				HX_STACK_LINE(79)
				break;
			}
			HX_STACK_LINE(79)
			int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(79)
			int j = tmp18;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(80)
			bool tmp19 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(80)
			if ((tmp19)){
				HX_STACK_LINE(80)
				(int)0;
			}
			else{
				HX_STACK_LINE(80)
				bool tmp20 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(80)
				if ((tmp20)){
					HX_STACK_LINE(80)
					bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(80)
					if ((tmp21)){
						HX_STACK_LINE(80)
						int tmp22 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(80)
						int tmp23 = (int)-16;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(80)
						int tmp24 = decodeState->readBits(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(80)
						int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(80)
						(tmp22 + tmp25);
					}
					else{
						HX_STACK_LINE(80)
						bool tmp22 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(80)
						if ((tmp22)){
							HX_STACK_LINE(80)
							decodeState->acc = (int)0;
						}
						HX_STACK_LINE(80)
						while((true)){
							HX_STACK_LINE(80)
							bool tmp23 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(80)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(80)
							if ((tmp23)){
								HX_STACK_LINE(80)
								bool tmp25 = decodeState->lastSeg;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(80)
								bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(80)
								bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(80)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(80)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(80)
								if ((tmp29)){
									HX_STACK_LINE(80)
									int tmp30 = decodeState->next();		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(80)
									int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(80)
									int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(80)
									tmp24 = (tmp32 == (int)0);
								}
								else{
									HX_STACK_LINE(80)
									tmp24 = true;
								}
							}
							else{
								HX_STACK_LINE(80)
								tmp24 = false;
							}
							HX_STACK_LINE(80)
							if ((tmp24)){
								HX_STACK_LINE(80)
								decodeState->validBits = (int)-1;
								HX_STACK_LINE(80)
								break;
							}
							else{
								HX_STACK_LINE(80)
								(decodeState->bytesInSeg)--;
								HX_STACK_LINE(80)
								int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(80)
								{
									HX_STACK_LINE(80)
									int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(80)
									{
										HX_STACK_LINE(80)
										hx::AddEq(decodeState->inputPosition,(int)1);
										HX_STACK_LINE(80)
										tmp26 = decodeState->input->readByte();
									}
									HX_STACK_LINE(80)
									int tmp27 = decodeState->validBits;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(80)
									int tmp28 = (int(tmp26) << int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(80)
									int b = tmp28;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(80)
									tmp25 = (decodeState->acc + b);
								}
								HX_STACK_LINE(80)
								decodeState->acc = tmp25;
								HX_STACK_LINE(80)
								hx::AddEq(decodeState->validBits,(int)8);
							}
							HX_STACK_LINE(80)
							bool tmp25 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(80)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(80)
							if ((tmp26)){
								HX_STACK_LINE(80)
								break;
							}
						}
						HX_STACK_LINE(80)
						bool tmp23 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(80)
						if ((tmp23)){
							HX_STACK_LINE(80)
							(int)0;
						}
						else{
							HX_STACK_LINE(80)
							int tmp24 = decodeState->acc;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(80)
							int tmp25 = (int)256;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(80)
							int tmp26 = (tmp25 - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(80)
							int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(80)
							int tmp28 = (int(tmp24) & int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(80)
							int z = tmp28;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(80)
							int tmp29 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(80)
							decodeState->acc = tmp29;
							HX_STACK_LINE(80)
							hx::SubEq(decodeState->validBits,(int)8);
							HX_STACK_LINE(80)
							z;
						}
					}
				}
				else{
					HX_STACK_LINE(80)
					int tmp21 = decodeState->acc;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(80)
					int tmp22 = (int)256;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(80)
					int tmp23 = (tmp22 - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(80)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(80)
					int tmp25 = (int(tmp21) & int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(80)
					int z = tmp25;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(80)
					int tmp26 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(80)
					decodeState->acc = tmp26;
					HX_STACK_LINE(80)
					hx::SubEq(decodeState->validBits,(int)8);
					HX_STACK_LINE(80)
					z;
				}
			}
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				bool tmp20 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(81)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(81)
				if ((tmp20)){
					HX_STACK_LINE(81)
					tmp21 = (int)0;
				}
				else{
					HX_STACK_LINE(81)
					bool tmp22 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(81)
					if ((tmp22)){
						HX_STACK_LINE(81)
						bool tmp23 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(81)
						if ((tmp23)){
							HX_STACK_LINE(81)
							decodeState->acc = (int)0;
						}
						HX_STACK_LINE(81)
						while((true)){
							HX_STACK_LINE(81)
							bool tmp24 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(81)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(81)
							if ((tmp24)){
								HX_STACK_LINE(81)
								bool tmp26 = decodeState->lastSeg;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(81)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(81)
								bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(81)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(81)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(81)
								if ((tmp30)){
									HX_STACK_LINE(81)
									int tmp31 = decodeState->next();		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(81)
									int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(81)
									int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(81)
									tmp25 = (tmp33 == (int)0);
								}
								else{
									HX_STACK_LINE(81)
									tmp25 = true;
								}
							}
							else{
								HX_STACK_LINE(81)
								tmp25 = false;
							}
							HX_STACK_LINE(81)
							if ((tmp25)){
								HX_STACK_LINE(81)
								decodeState->validBits = (int)-1;
								HX_STACK_LINE(81)
								break;
							}
							else{
								HX_STACK_LINE(81)
								(decodeState->bytesInSeg)--;
								HX_STACK_LINE(81)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(81)
								{
									HX_STACK_LINE(81)
									int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(81)
									{
										HX_STACK_LINE(81)
										hx::AddEq(decodeState->inputPosition,(int)1);
										HX_STACK_LINE(81)
										tmp27 = decodeState->input->readByte();
									}
									HX_STACK_LINE(81)
									int tmp28 = decodeState->validBits;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(81)
									int tmp29 = (int(tmp27) << int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(81)
									int b = tmp29;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(81)
									tmp26 = (decodeState->acc + b);
								}
								HX_STACK_LINE(81)
								decodeState->acc = tmp26;
								HX_STACK_LINE(81)
								hx::AddEq(decodeState->validBits,(int)8);
							}
							HX_STACK_LINE(81)
							bool tmp26 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(81)
							bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(81)
							if ((tmp27)){
								HX_STACK_LINE(81)
								break;
							}
						}
						HX_STACK_LINE(81)
						bool tmp24 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(81)
						if ((tmp24)){
							HX_STACK_LINE(81)
							tmp21 = (int)0;
						}
						else{
							HX_STACK_LINE(81)
							int tmp25 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(81)
							int z = tmp25;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(81)
							int tmp26 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(81)
							decodeState->acc = tmp26;
							HX_STACK_LINE(81)
							hx::SubEq(decodeState->validBits,(int)8);
							HX_STACK_LINE(81)
							tmp21 = z;
						}
					}
					else{
						HX_STACK_LINE(81)
						int tmp23 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(81)
						int z = tmp23;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(81)
						int tmp24 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(81)
						decodeState->acc = tmp24;
						HX_STACK_LINE(81)
						hx::SubEq(decodeState->validBits,(int)8);
						HX_STACK_LINE(81)
						tmp21 = z;
					}
				}
				HX_STACK_LINE(81)
				int val = tmp21;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(81)
				int tmp22 = j;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(81)
				int tmp23 = val;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(81)
				int tmp24 = m->submapFloor->__unsafe_set(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(81)
				tmp24;
			}
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				bool tmp20 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(82)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(82)
				if ((tmp20)){
					HX_STACK_LINE(82)
					tmp21 = (int)0;
				}
				else{
					HX_STACK_LINE(82)
					bool tmp22 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(82)
					if ((tmp22)){
						HX_STACK_LINE(82)
						bool tmp23 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(82)
						if ((tmp23)){
							HX_STACK_LINE(82)
							decodeState->acc = (int)0;
						}
						HX_STACK_LINE(82)
						while((true)){
							HX_STACK_LINE(82)
							bool tmp24 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(82)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(82)
							if ((tmp24)){
								HX_STACK_LINE(82)
								bool tmp26 = decodeState->lastSeg;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(82)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(82)
								bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(82)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(82)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(82)
								if ((tmp30)){
									HX_STACK_LINE(82)
									int tmp31 = decodeState->next();		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(82)
									int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(82)
									int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(82)
									tmp25 = (tmp33 == (int)0);
								}
								else{
									HX_STACK_LINE(82)
									tmp25 = true;
								}
							}
							else{
								HX_STACK_LINE(82)
								tmp25 = false;
							}
							HX_STACK_LINE(82)
							if ((tmp25)){
								HX_STACK_LINE(82)
								decodeState->validBits = (int)-1;
								HX_STACK_LINE(82)
								break;
							}
							else{
								HX_STACK_LINE(82)
								(decodeState->bytesInSeg)--;
								HX_STACK_LINE(82)
								int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(82)
								{
									HX_STACK_LINE(82)
									int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(82)
									{
										HX_STACK_LINE(82)
										hx::AddEq(decodeState->inputPosition,(int)1);
										HX_STACK_LINE(82)
										tmp27 = decodeState->input->readByte();
									}
									HX_STACK_LINE(82)
									int tmp28 = decodeState->validBits;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(82)
									int tmp29 = (int(tmp27) << int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(82)
									int b = tmp29;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(82)
									tmp26 = (decodeState->acc + b);
								}
								HX_STACK_LINE(82)
								decodeState->acc = tmp26;
								HX_STACK_LINE(82)
								hx::AddEq(decodeState->validBits,(int)8);
							}
							HX_STACK_LINE(82)
							bool tmp26 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(82)
							bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(82)
							if ((tmp27)){
								HX_STACK_LINE(82)
								break;
							}
						}
						HX_STACK_LINE(82)
						bool tmp24 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(82)
						if ((tmp24)){
							HX_STACK_LINE(82)
							tmp21 = (int)0;
						}
						else{
							HX_STACK_LINE(82)
							int tmp25 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(82)
							int z = tmp25;		HX_STACK_VAR(z,"z");
							HX_STACK_LINE(82)
							int tmp26 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(82)
							decodeState->acc = tmp26;
							HX_STACK_LINE(82)
							hx::SubEq(decodeState->validBits,(int)8);
							HX_STACK_LINE(82)
							tmp21 = z;
						}
					}
					else{
						HX_STACK_LINE(82)
						int tmp23 = (int(decodeState->acc) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(82)
						int z = tmp23;		HX_STACK_VAR(z,"z");
						HX_STACK_LINE(82)
						int tmp24 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(82)
						decodeState->acc = tmp24;
						HX_STACK_LINE(82)
						hx::SubEq(decodeState->validBits,(int)8);
						HX_STACK_LINE(82)
						tmp21 = z;
					}
				}
				HX_STACK_LINE(82)
				int val = tmp21;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(82)
				int tmp22 = j;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(82)
				int tmp23 = val;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(82)
				int tmp24 = m->submapResidue->__unsafe_set(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(82)
				tmp24;
			}
		}
	}
	HX_STACK_LINE(85)
	::kha::audio2::ogg::vorbis::data::Mapping tmp16 = m;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(85)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mapping_obj,read,return )


Mapping_obj::Mapping_obj()
{
}

void Mapping_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mapping);
	HX_MARK_MEMBER_NAME(couplingSteps,"couplingSteps");
	HX_MARK_MEMBER_NAME(chan,"chan");
	HX_MARK_MEMBER_NAME(submaps,"submaps");
	HX_MARK_MEMBER_NAME(submapFloor,"submapFloor");
	HX_MARK_MEMBER_NAME(submapResidue,"submapResidue");
	HX_MARK_END_CLASS();
}

void Mapping_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(couplingSteps,"couplingSteps");
	HX_VISIT_MEMBER_NAME(chan,"chan");
	HX_VISIT_MEMBER_NAME(submaps,"submaps");
	HX_VISIT_MEMBER_NAME(submapFloor,"submapFloor");
	HX_VISIT_MEMBER_NAME(submapResidue,"submapResidue");
}

Dynamic Mapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"chan") ) { return chan; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"submaps") ) { return submaps; }
		if (HX_FIELD_EQ(inName,"doFloor") ) { return doFloor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submapFloor") ) { return submapFloor; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"couplingSteps") ) { return couplingSteps; }
		if (HX_FIELD_EQ(inName,"submapResidue") ) { return submapResidue; }
	}
	return super::__Field(inName,inCallProp);
}

bool Mapping_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true;  }
	}
	return false;
}

Dynamic Mapping_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"chan") ) { chan=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"submaps") ) { submaps=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"submapFloor") ) { submapFloor=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"couplingSteps") ) { couplingSteps=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"submapResidue") ) { submapResidue=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Mapping_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Mapping_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("couplingSteps","\xea","\xbe","\x6c","\x19"));
	outFields->push(HX_HCSTRING("chan","\xd2","\x5e","\xbf","\x41"));
	outFields->push(HX_HCSTRING("submaps","\xd7","\xa7","\x80","\x2b"));
	outFields->push(HX_HCSTRING("submapFloor","\x10","\x6b","\x36","\x00"));
	outFields->push(HX_HCSTRING("submapResidue","\x8f","\x2a","\x0e","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Mapping_obj,couplingSteps),HX_HCSTRING("couplingSteps","\xea","\xbe","\x6c","\x19")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Mapping_obj,chan),HX_HCSTRING("chan","\xd2","\x5e","\xbf","\x41")},
	{hx::fsInt,(int)offsetof(Mapping_obj,submaps),HX_HCSTRING("submaps","\xd7","\xa7","\x80","\x2b")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Mapping_obj,submapFloor),HX_HCSTRING("submapFloor","\x10","\x6b","\x36","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Mapping_obj,submapResidue),HX_HCSTRING("submapResidue","\x8f","\x2a","\x0e","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("couplingSteps","\xea","\xbe","\x6c","\x19"),
	HX_HCSTRING("chan","\xd2","\x5e","\xbf","\x41"),
	HX_HCSTRING("submaps","\xd7","\xa7","\x80","\x2b"),
	HX_HCSTRING("submapFloor","\x10","\x6b","\x36","\x00"),
	HX_HCSTRING("submapResidue","\x8f","\x2a","\x0e","\xbb"),
	HX_HCSTRING("doFloor","\x41","\xb2","\xc3","\x35"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mapping_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mapping_obj::__mClass,"__mClass");
};

#endif

hx::Class Mapping_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	::String(null()) };

void Mapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mapping","\x3e","\x52","\xb0","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mapping_obj::__GetStatic;
	__mClass->mSetStaticField = &Mapping_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mapping_obj >;
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
