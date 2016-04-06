#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mode
#include <kha/audio2/ogg/vorbis/data/Mode.h>
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

Void Mode_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Mode","new",0x0813d4a5,"kha.audio2.ogg.vorbis.data.Mode.new","kha/audio2/ogg/vorbis/data/Mode.hx",12,0x8e3dac8a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Mode_obj::~Mode_obj() { }

Dynamic Mode_obj::__CreateEmpty() { return  new Mode_obj; }
hx::ObjectPtr< Mode_obj > Mode_obj::__new()
{  hx::ObjectPtr< Mode_obj > _result_ = new Mode_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mode_obj > _result_ = new Mode_obj();
	_result_->__construct();
	return _result_;}

::kha::audio2::ogg::vorbis::data::Mode Mode_obj::read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Mode","read",0x0beb0371,"kha.audio2.ogg.vorbis.data.Mode.read","kha/audio2/ogg/vorbis/data/Mode.hx",15,0x8e3dac8a)
	HX_STACK_ARG(decodeState,"decodeState")
	HX_STACK_LINE(16)
	::kha::audio2::ogg::vorbis::data::Mode m = ::kha::audio2::ogg::vorbis::data::Mode_obj::__new();		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(17)
	bool tmp = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	if ((tmp)){
		HX_STACK_LINE(17)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(17)
		bool tmp2 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		if ((tmp2)){
			HX_STACK_LINE(17)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			if ((tmp3)){
				HX_STACK_LINE(17)
				int tmp4 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(17)
				int tmp5 = (int)-23;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(17)
				int tmp6 = decodeState->readBits(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(17)
				int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(17)
				tmp1 = (tmp4 + tmp7);
			}
			else{
				HX_STACK_LINE(17)
				bool tmp4 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(17)
				if ((tmp4)){
					HX_STACK_LINE(17)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(17)
				while((true)){
					HX_STACK_LINE(17)
					bool tmp5 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(17)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(17)
					if ((tmp5)){
						HX_STACK_LINE(17)
						bool tmp7 = decodeState->lastSeg;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(17)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(17)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(17)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(17)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(17)
						if ((tmp11)){
							HX_STACK_LINE(17)
							int tmp12 = decodeState->next();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(17)
							int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(17)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(17)
							tmp6 = (tmp14 == (int)0);
						}
						else{
							HX_STACK_LINE(17)
							tmp6 = true;
						}
					}
					else{
						HX_STACK_LINE(17)
						tmp6 = false;
					}
					HX_STACK_LINE(17)
					if ((tmp6)){
						HX_STACK_LINE(17)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(17)
						break;
					}
					else{
						HX_STACK_LINE(17)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(17)
						int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(17)
						{
							HX_STACK_LINE(17)
							int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(17)
							{
								HX_STACK_LINE(17)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(17)
								tmp8 = decodeState->input->readByte();
							}
							HX_STACK_LINE(17)
							int tmp9 = decodeState->validBits;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(17)
							int tmp10 = (int(tmp8) << int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(17)
							int b = tmp10;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(17)
							tmp7 = (decodeState->acc + b);
						}
						HX_STACK_LINE(17)
						decodeState->acc = tmp7;
						HX_STACK_LINE(17)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(17)
					bool tmp7 = (decodeState->validBits < (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(17)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(17)
					if ((tmp8)){
						HX_STACK_LINE(17)
						break;
					}
				}
				HX_STACK_LINE(17)
				bool tmp5 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(17)
				if ((tmp5)){
					HX_STACK_LINE(17)
					tmp1 = (int)0;
				}
				else{
					HX_STACK_LINE(17)
					int tmp6 = decodeState->acc;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(17)
					int tmp7 = (int)2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(17)
					int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(17)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(17)
					int tmp10 = (int(tmp6) & int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(17)
					int z = tmp10;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(17)
					int tmp11 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(17)
					decodeState->acc = tmp11;
					HX_STACK_LINE(17)
					hx::SubEq(decodeState->validBits,(int)1);
					HX_STACK_LINE(17)
					tmp1 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(17)
			int tmp3 = decodeState->acc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			int tmp4 = (int)2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(17)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(17)
			int tmp7 = (int(tmp3) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(17)
			int z = tmp7;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(17)
			int tmp8 = hx::UShr(decodeState->acc,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(17)
			decodeState->acc = tmp8;
			HX_STACK_LINE(17)
			hx::SubEq(decodeState->validBits,(int)1);
			HX_STACK_LINE(17)
			tmp1 = z;
		}
	}
	HX_STACK_LINE(17)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	m->blockflag = tmp2;
	HX_STACK_LINE(18)
	bool tmp3 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(18)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	if ((tmp3)){
		HX_STACK_LINE(18)
		tmp4 = (int)0;
	}
	else{
		HX_STACK_LINE(18)
		bool tmp5 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(18)
		if ((tmp5)){
			HX_STACK_LINE(18)
			bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(18)
			if ((tmp6)){
				HX_STACK_LINE(18)
				int tmp7 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(18)
				int tmp8 = (int)-8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(18)
				int tmp9 = decodeState->readBits(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(18)
				int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(18)
				tmp4 = (tmp7 + tmp10);
			}
			else{
				HX_STACK_LINE(18)
				bool tmp7 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(18)
				if ((tmp7)){
					HX_STACK_LINE(18)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(18)
				while((true)){
					HX_STACK_LINE(18)
					bool tmp8 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(18)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(18)
					if ((tmp8)){
						HX_STACK_LINE(18)
						bool tmp10 = decodeState->lastSeg;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(18)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(18)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(18)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(18)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(18)
						if ((tmp14)){
							HX_STACK_LINE(18)
							int tmp15 = decodeState->next();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(18)
							int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(18)
							int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(18)
							tmp9 = (tmp17 == (int)0);
						}
						else{
							HX_STACK_LINE(18)
							tmp9 = true;
						}
					}
					else{
						HX_STACK_LINE(18)
						tmp9 = false;
					}
					HX_STACK_LINE(18)
					if ((tmp9)){
						HX_STACK_LINE(18)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(18)
						break;
					}
					else{
						HX_STACK_LINE(18)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(18)
						int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(18)
						{
							HX_STACK_LINE(18)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(18)
							{
								HX_STACK_LINE(18)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(18)
								tmp11 = decodeState->input->readByte();
							}
							HX_STACK_LINE(18)
							int tmp12 = decodeState->validBits;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(18)
							int tmp13 = (int(tmp11) << int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(18)
							int b = tmp13;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(18)
							tmp10 = (decodeState->acc + b);
						}
						HX_STACK_LINE(18)
						decodeState->acc = tmp10;
						HX_STACK_LINE(18)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(18)
					bool tmp10 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(18)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(18)
					if ((tmp11)){
						HX_STACK_LINE(18)
						break;
					}
				}
				HX_STACK_LINE(18)
				bool tmp8 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(18)
				if ((tmp8)){
					HX_STACK_LINE(18)
					tmp4 = (int)0;
				}
				else{
					HX_STACK_LINE(18)
					int tmp9 = decodeState->acc;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(18)
					int tmp10 = (int)65536;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(18)
					int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(18)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(18)
					int tmp13 = (int(tmp9) & int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(18)
					int z = tmp13;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(18)
					int tmp14 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(18)
					decodeState->acc = tmp14;
					HX_STACK_LINE(18)
					hx::SubEq(decodeState->validBits,(int)16);
					HX_STACK_LINE(18)
					tmp4 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(18)
			int tmp6 = decodeState->acc;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(18)
			int tmp7 = (int)65536;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(18)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(18)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(18)
			int tmp10 = (int(tmp6) & int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(18)
			int z = tmp10;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(18)
			int tmp11 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(18)
			decodeState->acc = tmp11;
			HX_STACK_LINE(18)
			hx::SubEq(decodeState->validBits,(int)16);
			HX_STACK_LINE(18)
			tmp4 = z;
		}
	}
	HX_STACK_LINE(18)
	m->windowtype = tmp4;
	HX_STACK_LINE(19)
	bool tmp5 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(19)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(19)
	if ((tmp5)){
		HX_STACK_LINE(19)
		tmp6 = (int)0;
	}
	else{
		HX_STACK_LINE(19)
		bool tmp7 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(19)
		if ((tmp7)){
			HX_STACK_LINE(19)
			bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(19)
			if ((tmp8)){
				HX_STACK_LINE(19)
				int tmp9 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(19)
				int tmp10 = (int)-8;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(19)
				int tmp11 = decodeState->readBits(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(19)
				int tmp12 = (int(tmp11) << int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(19)
				tmp6 = (tmp9 + tmp12);
			}
			else{
				HX_STACK_LINE(19)
				bool tmp9 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(19)
				if ((tmp9)){
					HX_STACK_LINE(19)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(19)
				while((true)){
					HX_STACK_LINE(19)
					bool tmp10 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(19)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(19)
					if ((tmp10)){
						HX_STACK_LINE(19)
						bool tmp12 = decodeState->lastSeg;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(19)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(19)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(19)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(19)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(19)
						if ((tmp16)){
							HX_STACK_LINE(19)
							int tmp17 = decodeState->next();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(19)
							int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(19)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(19)
							tmp11 = (tmp19 == (int)0);
						}
						else{
							HX_STACK_LINE(19)
							tmp11 = true;
						}
					}
					else{
						HX_STACK_LINE(19)
						tmp11 = false;
					}
					HX_STACK_LINE(19)
					if ((tmp11)){
						HX_STACK_LINE(19)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(19)
						break;
					}
					else{
						HX_STACK_LINE(19)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(19)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(19)
						{
							HX_STACK_LINE(19)
							int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(19)
							{
								HX_STACK_LINE(19)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(19)
								tmp13 = decodeState->input->readByte();
							}
							HX_STACK_LINE(19)
							int tmp14 = decodeState->validBits;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(19)
							int tmp15 = (int(tmp13) << int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(19)
							int b = tmp15;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(19)
							tmp12 = (decodeState->acc + b);
						}
						HX_STACK_LINE(19)
						decodeState->acc = tmp12;
						HX_STACK_LINE(19)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(19)
					bool tmp12 = (decodeState->validBits < (int)16);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(19)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(19)
					if ((tmp13)){
						HX_STACK_LINE(19)
						break;
					}
				}
				HX_STACK_LINE(19)
				bool tmp10 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(19)
				if ((tmp10)){
					HX_STACK_LINE(19)
					tmp6 = (int)0;
				}
				else{
					HX_STACK_LINE(19)
					int tmp11 = decodeState->acc;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(19)
					int tmp12 = (int)65536;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(19)
					int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(19)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(19)
					int tmp15 = (int(tmp11) & int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(19)
					int z = tmp15;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(19)
					int tmp16 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(19)
					decodeState->acc = tmp16;
					HX_STACK_LINE(19)
					hx::SubEq(decodeState->validBits,(int)16);
					HX_STACK_LINE(19)
					tmp6 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(19)
			int tmp8 = decodeState->acc;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(19)
			int tmp9 = (int)65536;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(19)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(19)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(19)
			int tmp12 = (int(tmp8) & int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(19)
			int z = tmp12;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(19)
			int tmp13 = hx::UShr(decodeState->acc,(int)16);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(19)
			decodeState->acc = tmp13;
			HX_STACK_LINE(19)
			hx::SubEq(decodeState->validBits,(int)16);
			HX_STACK_LINE(19)
			tmp6 = z;
		}
	}
	HX_STACK_LINE(19)
	m->transformtype = tmp6;
	HX_STACK_LINE(20)
	bool tmp7 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(20)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(20)
	if ((tmp7)){
		HX_STACK_LINE(20)
		tmp8 = (int)0;
	}
	else{
		HX_STACK_LINE(20)
		bool tmp9 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(20)
		if ((tmp9)){
			HX_STACK_LINE(20)
			bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(20)
			if ((tmp10)){
				HX_STACK_LINE(20)
				int tmp11 = decodeState->readBits((int)24);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(20)
				int tmp12 = (int)-16;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(20)
				int tmp13 = decodeState->readBits(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(20)
				int tmp14 = (int(tmp13) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(20)
				tmp8 = (tmp11 + tmp14);
			}
			else{
				HX_STACK_LINE(20)
				bool tmp11 = (decodeState->validBits == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(20)
				if ((tmp11)){
					HX_STACK_LINE(20)
					decodeState->acc = (int)0;
				}
				HX_STACK_LINE(20)
				while((true)){
					HX_STACK_LINE(20)
					bool tmp12 = (decodeState->bytesInSeg == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(20)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(20)
					if ((tmp12)){
						HX_STACK_LINE(20)
						bool tmp14 = decodeState->lastSeg;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(20)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(20)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(20)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(20)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(20)
						if ((tmp18)){
							HX_STACK_LINE(20)
							int tmp19 = decodeState->next();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(20)
							int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(20)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(20)
							tmp13 = (tmp21 == (int)0);
						}
						else{
							HX_STACK_LINE(20)
							tmp13 = true;
						}
					}
					else{
						HX_STACK_LINE(20)
						tmp13 = false;
					}
					HX_STACK_LINE(20)
					if ((tmp13)){
						HX_STACK_LINE(20)
						decodeState->validBits = (int)-1;
						HX_STACK_LINE(20)
						break;
					}
					else{
						HX_STACK_LINE(20)
						(decodeState->bytesInSeg)--;
						HX_STACK_LINE(20)
						int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(20)
						{
							HX_STACK_LINE(20)
							int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(20)
							{
								HX_STACK_LINE(20)
								hx::AddEq(decodeState->inputPosition,(int)1);
								HX_STACK_LINE(20)
								tmp15 = decodeState->input->readByte();
							}
							HX_STACK_LINE(20)
							int tmp16 = decodeState->validBits;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(20)
							int tmp17 = (int(tmp15) << int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(20)
							int b = tmp17;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(20)
							tmp14 = (decodeState->acc + b);
						}
						HX_STACK_LINE(20)
						decodeState->acc = tmp14;
						HX_STACK_LINE(20)
						hx::AddEq(decodeState->validBits,(int)8);
					}
					HX_STACK_LINE(20)
					bool tmp14 = (decodeState->validBits < (int)8);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(20)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(20)
					if ((tmp15)){
						HX_STACK_LINE(20)
						break;
					}
				}
				HX_STACK_LINE(20)
				bool tmp12 = (decodeState->validBits < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(20)
				if ((tmp12)){
					HX_STACK_LINE(20)
					tmp8 = (int)0;
				}
				else{
					HX_STACK_LINE(20)
					int tmp13 = decodeState->acc;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(20)
					int tmp14 = (int)256;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(20)
					int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(20)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(20)
					int tmp17 = (int(tmp13) & int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(20)
					int z = tmp17;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(20)
					int tmp18 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(20)
					decodeState->acc = tmp18;
					HX_STACK_LINE(20)
					hx::SubEq(decodeState->validBits,(int)8);
					HX_STACK_LINE(20)
					tmp8 = z;
				}
			}
		}
		else{
			HX_STACK_LINE(20)
			int tmp10 = decodeState->acc;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(20)
			int tmp11 = (int)256;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(20)
			int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(20)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(20)
			int tmp14 = (int(tmp10) & int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(20)
			int z = tmp14;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(20)
			int tmp15 = hx::UShr(decodeState->acc,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(20)
			decodeState->acc = tmp15;
			HX_STACK_LINE(20)
			hx::SubEq(decodeState->validBits,(int)8);
			HX_STACK_LINE(20)
			tmp8 = z;
		}
	}
	HX_STACK_LINE(20)
	m->mapping = tmp8;
	HX_STACK_LINE(21)
	bool tmp9 = (m->windowtype != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(21)
	if ((tmp9)){
		HX_STACK_LINE(22)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Mode.hx","\x1b","\x97","\x89","\xba"),22,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mode","\x33","\x9e","\xc1","\xc7"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(22)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp11 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(22)
		HX_STACK_DO_THROW(tmp11);
	}
	HX_STACK_LINE(24)
	bool tmp10 = (m->transformtype != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(24)
	if ((tmp10)){
		HX_STACK_LINE(25)
		Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Mode.hx","\x1b","\x97","\x89","\xba"),25,HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mode","\x33","\x9e","\xc1","\xc7"),HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(25)
		::kha::audio2::ogg::vorbis::data::ReaderError tmp12 = ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__new(::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_SETUP,null(),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(25)
		HX_STACK_DO_THROW(tmp12);
	}
	HX_STACK_LINE(27)
	::kha::audio2::ogg::vorbis::data::Mode tmp11 = m;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(27)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mode_obj,read,return )


Mode_obj::Mode_obj()
{
}

Dynamic Mode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mapping") ) { return mapping; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blockflag") ) { return blockflag; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowtype") ) { return windowtype; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformtype") ) { return transformtype; }
	}
	return super::__Field(inName,inCallProp);
}

bool Mode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true;  }
	}
	return false;
}

Dynamic Mode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mapping") ) { mapping=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blockflag") ) { blockflag=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowtype") ) { windowtype=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transformtype") ) { transformtype=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Mode_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Mode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blockflag","\x79","\xab","\x73","\x5e"));
	outFields->push(HX_HCSTRING("mapping","\x0e","\x7b","\x7a","\x44"));
	outFields->push(HX_HCSTRING("windowtype","\xaa","\x3e","\x06","\xed"));
	outFields->push(HX_HCSTRING("transformtype","\x26","\x46","\x7d","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Mode_obj,blockflag),HX_HCSTRING("blockflag","\x79","\xab","\x73","\x5e")},
	{hx::fsInt,(int)offsetof(Mode_obj,mapping),HX_HCSTRING("mapping","\x0e","\x7b","\x7a","\x44")},
	{hx::fsInt,(int)offsetof(Mode_obj,windowtype),HX_HCSTRING("windowtype","\xaa","\x3e","\x06","\xed")},
	{hx::fsInt,(int)offsetof(Mode_obj,transformtype),HX_HCSTRING("transformtype","\x26","\x46","\x7d","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blockflag","\x79","\xab","\x73","\x5e"),
	HX_HCSTRING("mapping","\x0e","\x7b","\x7a","\x44"),
	HX_HCSTRING("windowtype","\xaa","\x3e","\x06","\xed"),
	HX_HCSTRING("transformtype","\x26","\x46","\x7d","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mode_obj::__mClass,"__mClass");
};

#endif

hx::Class Mode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	::String(null()) };

void Mode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Mode","\x33","\x9e","\xc1","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mode_obj::__GetStatic;
	__mClass->mSetStaticField = &Mode_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mode_obj >;
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
