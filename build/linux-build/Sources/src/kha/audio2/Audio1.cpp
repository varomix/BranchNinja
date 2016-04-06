#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_audio1_AudioChannel
#include <kha/audio1/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio
#include <kha/audio2/Audio.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio1
#include <kha/audio2/Audio1.h>
#endif
#ifndef INCLUDED_kha_audio2_AudioChannel
#include <kha/audio2/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Buffer
#include <kha/audio2/Buffer.h>
#endif
#ifndef INCLUDED_kha_audio2_StreamChannel
#include <kha/audio2/StreamChannel.h>
#endif
namespace kha{
namespace audio2{

Void Audio1_obj::__construct()
{
	return null();
}

//Audio1_obj::~Audio1_obj() { }

Dynamic Audio1_obj::__CreateEmpty() { return  new Audio1_obj; }
hx::ObjectPtr< Audio1_obj > Audio1_obj::__new()
{  hx::ObjectPtr< Audio1_obj > _result_ = new Audio1_obj();
	_result_->__construct();
	return _result_;}

Dynamic Audio1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Audio1_obj > _result_ = new Audio1_obj();
	_result_->__construct();
	return _result_;}

int Audio1_obj::channelCount;

Array< ::Dynamic > Audio1_obj::soundChannels;

Array< ::Dynamic > Audio1_obj::streamChannels;

Array< ::Dynamic > Audio1_obj::internalSoundChannels;

Array< ::Dynamic > Audio1_obj::internalStreamChannels;

Array< ::cpp::Float32 > Audio1_obj::sampleCache1;

Array< ::cpp::Float32 > Audio1_obj::sampleCache2;

::cpp::vm::Mutex Audio1_obj::mutex;

Void Audio1_obj::_init( ){
{
		HX_STACK_FRAME("kha.audio2.Audio1","_init",0x394948c4,"kha.audio2.Audio1._init","kha/audio2/Audio1.hx",22,0x063d6bfb)
		HX_STACK_LINE(24)
		::cpp::vm::Mutex tmp = ::cpp::vm::Mutex_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::kha::audio2::Audio1_obj::mutex = tmp;
		HX_STACK_LINE(26)
		Array< ::Dynamic > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(26)
			Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			this1 = tmp2;
			HX_STACK_LINE(26)
			this1->__SetSizeExact((int)16);
			HX_STACK_LINE(26)
			tmp1 = this1;
		}
		HX_STACK_LINE(26)
		::kha::audio2::Audio1_obj::soundChannels = tmp1;
		HX_STACK_LINE(27)
		Array< ::Dynamic > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(27)
			Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			this1 = tmp3;
			HX_STACK_LINE(27)
			this1->__SetSizeExact((int)16);
			HX_STACK_LINE(27)
			tmp2 = this1;
		}
		HX_STACK_LINE(27)
		::kha::audio2::Audio1_obj::streamChannels = tmp2;
		HX_STACK_LINE(28)
		Array< ::Dynamic > tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(28)
			Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			this1 = tmp4;
			HX_STACK_LINE(28)
			this1->__SetSizeExact((int)16);
			HX_STACK_LINE(28)
			tmp3 = this1;
		}
		HX_STACK_LINE(28)
		::kha::audio2::Audio1_obj::internalSoundChannels = tmp3;
		HX_STACK_LINE(29)
		Array< ::Dynamic > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(29)
			Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			this1 = tmp5;
			HX_STACK_LINE(29)
			this1->__SetSizeExact((int)16);
			HX_STACK_LINE(29)
			tmp4 = this1;
		}
		HX_STACK_LINE(29)
		::kha::audio2::Audio1_obj::internalStreamChannels = tmp4;
		HX_STACK_LINE(30)
		Array< ::cpp::Float32 > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			Array< ::cpp::Float32 > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(30)
			Array< ::cpp::Float32 > tmp6 = Array_obj< ::cpp::Float32 >::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(30)
			this1 = tmp6;
			HX_STACK_LINE(30)
			this1->__SetSizeExact((int)512);
			HX_STACK_LINE(30)
			tmp5 = this1;
		}
		HX_STACK_LINE(30)
		::kha::audio2::Audio1_obj::sampleCache1 = tmp5;
		HX_STACK_LINE(31)
		Array< ::cpp::Float32 > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			Array< ::cpp::Float32 > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(31)
			Array< ::cpp::Float32 > tmp7 = Array_obj< ::cpp::Float32 >::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(31)
			this1 = tmp7;
			HX_STACK_LINE(31)
			this1->__SetSizeExact((int)512);
			HX_STACK_LINE(31)
			tmp6 = this1;
		}
		HX_STACK_LINE(31)
		::kha::audio2::Audio1_obj::sampleCache2 = tmp6;
		HX_STACK_LINE(32)
		Dynamic tmp7 = ::kha::audio2::Audio1_obj::_mix_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(32)
		::kha::audio2::Audio_obj::audioCallback = tmp7;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Audio1_obj,_init,(void))

Float Audio1_obj::max( Float a,Float b){
	HX_STACK_FRAME("kha.audio2.Audio1","max",0xdc426d39,"kha.audio2.Audio1.max","kha/audio2/Audio1.hx",35,0x063d6bfb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(36)
	bool tmp = (a > b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	if ((tmp)){
		HX_STACK_LINE(36)
		tmp1 = a;
	}
	else{
		HX_STACK_LINE(36)
		tmp1 = b;
	}
	HX_STACK_LINE(36)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,max,return )

Float Audio1_obj::min( Float a,Float b){
	HX_STACK_FRAME("kha.audio2.Audio1","min",0xdc427427,"kha.audio2.Audio1.min","kha/audio2/Audio1.hx",39,0x063d6bfb)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(40)
	bool tmp = (a < b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	if ((tmp)){
		HX_STACK_LINE(40)
		tmp1 = a;
	}
	else{
		HX_STACK_LINE(40)
		tmp1 = b;
	}
	HX_STACK_LINE(40)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,min,return )

Void Audio1_obj::_mix( int samples,::kha::audio2::Buffer buffer){
{
		HX_STACK_FRAME("kha.audio2.Audio1","_mix",0xd4a53668,"kha.audio2.Audio1._mix","kha/audio2/Audio1.hx",43,0x063d6bfb)
		HX_STACK_ARG(samples,"samples")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(44)
		Array< ::cpp::Float32 > tmp = ::kha::audio2::Audio1_obj::sampleCache1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		int tmp2 = samples;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		if ((tmp3)){
			HX_STACK_LINE(45)
			Array< ::cpp::Float32 > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				Array< ::cpp::Float32 > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(45)
				Array< ::cpp::Float32 > tmp5 = Array_obj< ::cpp::Float32 >::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(45)
				this1 = tmp5;
				HX_STACK_LINE(45)
				int tmp6 = samples;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				this1->__SetSizeExact(tmp6);
				HX_STACK_LINE(45)
				tmp4 = this1;
			}
			HX_STACK_LINE(45)
			::kha::audio2::Audio1_obj::sampleCache1 = tmp4;
			HX_STACK_LINE(46)
			Array< ::cpp::Float32 > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				Array< ::cpp::Float32 > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(46)
				Array< ::cpp::Float32 > tmp6 = Array_obj< ::cpp::Float32 >::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(46)
				this1 = tmp6;
				HX_STACK_LINE(46)
				int tmp7 = samples;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				this1->__SetSizeExact(tmp7);
				HX_STACK_LINE(46)
				tmp5 = this1;
			}
			HX_STACK_LINE(46)
			::kha::audio2::Audio1_obj::sampleCache2 = tmp5;
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				bool tmp4 = (_g < samples);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(48)
				if ((tmp5)){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(49)
				Array< ::cpp::Float32 > tmp7 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(49)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				::cpp::Float32 tmp9 = tmp7->__unsafe_set(tmp8,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				tmp9;
			}
		}
		HX_STACK_LINE(53)
		::cpp::vm::Mutex tmp4 = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		tmp4->acquire();
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			while((true)){
				HX_STACK_LINE(55)
				bool tmp5 = (_g < (int)16);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				if ((tmp6)){
					HX_STACK_LINE(55)
					break;
				}
				HX_STACK_LINE(55)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					Array< ::Dynamic > tmp8 = ::kha::audio2::Audio1_obj::soundChannels;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(56)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(56)
					::kha::audio2::AudioChannel tmp10 = tmp8->__unsafe_get(tmp9).StaticCast< ::kha::audio2::AudioChannel >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					::kha::audio2::AudioChannel val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(56)
					Array< ::Dynamic > tmp11 = ::kha::audio2::Audio1_obj::internalSoundChannels;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(56)
					::kha::audio2::AudioChannel tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(56)
					::kha::audio2::AudioChannel tmp14 = tmp11->__unsafe_set(tmp12,tmp13).StaticCast< ::kha::audio2::AudioChannel >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(56)
					tmp14;
				}
			}
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			while((true)){
				HX_STACK_LINE(58)
				bool tmp5 = (_g < (int)16);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(58)
				if ((tmp6)){
					HX_STACK_LINE(58)
					break;
				}
				HX_STACK_LINE(58)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(58)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(59)
				{
					HX_STACK_LINE(59)
					Array< ::Dynamic > tmp8 = ::kha::audio2::Audio1_obj::streamChannels;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(59)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(59)
					::kha::audio2::StreamChannel tmp10 = tmp8->__unsafe_get(tmp9).StaticCast< ::kha::audio2::StreamChannel >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(59)
					::kha::audio2::StreamChannel val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(59)
					Array< ::Dynamic > tmp11 = ::kha::audio2::Audio1_obj::internalStreamChannels;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(59)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(59)
					::kha::audio2::StreamChannel tmp13 = val;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(59)
					::kha::audio2::StreamChannel tmp14 = tmp11->__unsafe_set(tmp12,tmp13).StaticCast< ::kha::audio2::StreamChannel >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(59)
					tmp14;
				}
			}
		}
		HX_STACK_LINE(62)
		::cpp::vm::Mutex tmp5 = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		tmp5->release();
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(65)
			Array< ::Dynamic > tmp6 = ::kha::audio2::Audio1_obj::internalSoundChannels;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			Array< ::Dynamic > _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(65)
			while((true)){
				HX_STACK_LINE(65)
				int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(65)
				int tmp8 = _g1->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(65)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(65)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(65)
				if ((tmp10)){
					HX_STACK_LINE(65)
					break;
				}
				HX_STACK_LINE(65)
				int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(65)
				::kha::audio2::AudioChannel tmp12 = _g1->__unsafe_get(tmp11).StaticCast< ::kha::audio2::AudioChannel >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(65)
				::kha::audio2::AudioChannel channel = tmp12;		HX_STACK_VAR(channel,"channel");
				HX_STACK_LINE(65)
				++(_g);
				HX_STACK_LINE(66)
				bool tmp13 = (channel == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(66)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(66)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(66)
				if ((tmp14)){
					HX_STACK_LINE(66)
					tmp15 = channel->get_finished();
				}
				else{
					HX_STACK_LINE(66)
					tmp15 = true;
				}
				HX_STACK_LINE(66)
				if ((tmp15)){
					HX_STACK_LINE(66)
					continue;
				}
				HX_STACK_LINE(67)
				Array< ::cpp::Float32 > tmp16 = ::kha::audio2::Audio1_obj::sampleCache1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(67)
				int tmp17 = samples;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(67)
				int tmp18 = buffer->samplesPerSecond;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(67)
				channel->nextSamples(tmp16,tmp17,tmp18);
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(68)
					while((true)){
						HX_STACK_LINE(68)
						bool tmp19 = (_g2 < samples);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(68)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(68)
						if ((tmp20)){
							HX_STACK_LINE(68)
							break;
						}
						HX_STACK_LINE(68)
						int tmp21 = (_g2)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(68)
						int i = tmp21;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							int _g3 = i;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(69)
							{
								HX_STACK_LINE(69)
								Array< ::cpp::Float32 > tmp22 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(69)
								int tmp23 = _g3;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(69)
								::cpp::Float32 tmp24 = tmp22->__unsafe_get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(69)
								::cpp::Float32 tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(69)
								Array< ::cpp::Float32 > tmp26 = ::kha::audio2::Audio1_obj::sampleCache1;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(69)
								int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(69)
								::cpp::Float32 tmp28 = tmp26->__unsafe_get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(69)
								::cpp::Float32 tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(69)
								Float tmp30 = channel->get_volume();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(69)
								Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(69)
								Float tmp32 = (tmp25 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(69)
								::cpp::Float32 val = tmp32;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(69)
								Array< ::cpp::Float32 > tmp33 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(69)
								int tmp34 = _g3;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(69)
								::cpp::Float32 tmp35 = val;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(69)
								::cpp::Float32 tmp36 = tmp33->__unsafe_set(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(69)
								tmp36;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(72)
			Array< ::Dynamic > tmp6 = ::kha::audio2::Audio1_obj::internalStreamChannels;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			Array< ::Dynamic > _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(72)
			while((true)){
				HX_STACK_LINE(72)
				int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				int tmp8 = _g1->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(72)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(72)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(72)
				if ((tmp10)){
					HX_STACK_LINE(72)
					break;
				}
				HX_STACK_LINE(72)
				int tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(72)
				::kha::audio2::StreamChannel tmp12 = _g1->__unsafe_get(tmp11).StaticCast< ::kha::audio2::StreamChannel >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(72)
				::kha::audio2::StreamChannel channel = tmp12;		HX_STACK_VAR(channel,"channel");
				HX_STACK_LINE(72)
				++(_g);
				HX_STACK_LINE(73)
				bool tmp13 = (channel == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				if ((tmp14)){
					HX_STACK_LINE(73)
					tmp15 = channel->get_finished();
				}
				else{
					HX_STACK_LINE(73)
					tmp15 = true;
				}
				HX_STACK_LINE(73)
				if ((tmp15)){
					HX_STACK_LINE(73)
					continue;
				}
				HX_STACK_LINE(74)
				Array< ::cpp::Float32 > tmp16 = ::kha::audio2::Audio1_obj::sampleCache1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(74)
				int tmp17 = samples;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(74)
				int tmp18 = buffer->samplesPerSecond;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(74)
				channel->nextSamples(tmp16,tmp17,tmp18);
				HX_STACK_LINE(75)
				{
					HX_STACK_LINE(75)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(75)
					while((true)){
						HX_STACK_LINE(75)
						bool tmp19 = (_g2 < samples);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(75)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(75)
						if ((tmp20)){
							HX_STACK_LINE(75)
							break;
						}
						HX_STACK_LINE(75)
						int tmp21 = (_g2)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(75)
						int i = tmp21;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(76)
						{
							HX_STACK_LINE(76)
							int _g3 = i;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(76)
							{
								HX_STACK_LINE(76)
								Array< ::cpp::Float32 > tmp22 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(76)
								int tmp23 = _g3;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(76)
								::cpp::Float32 tmp24 = tmp22->__unsafe_get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(76)
								::cpp::Float32 tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(76)
								Array< ::cpp::Float32 > tmp26 = ::kha::audio2::Audio1_obj::sampleCache1;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(76)
								int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(76)
								::cpp::Float32 tmp28 = tmp26->__unsafe_get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(76)
								::cpp::Float32 tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(76)
								Float tmp30 = channel->get_volume();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(76)
								Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(76)
								Float tmp32 = (tmp25 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(76)
								::cpp::Float32 val = tmp32;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(76)
								Array< ::cpp::Float32 > tmp33 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(76)
								int tmp34 = _g3;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(76)
								::cpp::Float32 tmp35 = val;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(76)
								::cpp::Float32 tmp36 = tmp33->__unsafe_set(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(76)
								tmp36;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			while((true)){
				HX_STACK_LINE(80)
				bool tmp6 = (_g < samples);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(80)
				if ((tmp7)){
					HX_STACK_LINE(80)
					break;
				}
				HX_STACK_LINE(80)
				int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(80)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(81)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(81)
						{
							HX_STACK_LINE(81)
							Array< ::cpp::Float32 > tmp11 = ::kha::audio2::Audio1_obj::sampleCache2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(81)
							int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(81)
							::cpp::Float32 tmp13 = tmp11->__unsafe_get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(81)
							Float a = tmp13;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(81)
							bool tmp14 = (a < ((Float)1.0));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(81)
							if ((tmp14)){
								HX_STACK_LINE(81)
								tmp10 = a;
							}
							else{
								HX_STACK_LINE(81)
								tmp10 = ((Float)1.0);
							}
						}
						HX_STACK_LINE(81)
						Float a = tmp10;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(81)
						bool tmp11 = (a > ((Float)-1.0));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(81)
						if ((tmp11)){
							HX_STACK_LINE(81)
							tmp9 = a;
						}
						else{
							HX_STACK_LINE(81)
							tmp9 = ((Float)-1.0);
						}
					}
					HX_STACK_LINE(81)
					Float val = tmp9;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(81)
					int tmp10 = buffer->writeLocation;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(81)
					Float tmp11 = val;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(81)
					Float tmp12 = buffer->data->__unsafe_set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(81)
					tmp12;
				}
				HX_STACK_LINE(82)
				hx::AddEq(buffer->writeLocation,(int)1);
				HX_STACK_LINE(83)
				bool tmp9 = (buffer->writeLocation >= buffer->size);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(83)
				if ((tmp9)){
					HX_STACK_LINE(84)
					buffer->writeLocation = (int)0;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,_mix,(void))

::kha::audio1::AudioChannel Audio1_obj::play( ::kha::Sound sound,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(false);
	HX_STACK_FRAME("kha.audio2.Audio1","play",0xdfe10dbf,"kha.audio2.Audio1.play","kha/audio2/Audio1.hx",89,0x063d6bfb)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(91)
		::cpp::vm::Mutex tmp = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		tmp->acquire();
		HX_STACK_LINE(93)
		::kha::audio2::AudioChannel channel = null();		HX_STACK_VAR(channel,"channel");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			while((true)){
				HX_STACK_LINE(94)
				bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(94)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				if ((tmp2)){
					HX_STACK_LINE(94)
					break;
				}
				HX_STACK_LINE(94)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(95)
				Array< ::Dynamic > tmp4 = ::kha::audio2::Audio1_obj::soundChannels;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(95)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(95)
				::kha::audio2::AudioChannel tmp6 = tmp4->__unsafe_get(tmp5).StaticCast< ::kha::audio2::AudioChannel >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(95)
				::kha::audio2::AudioChannel tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(95)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(95)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(95)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(95)
				if ((tmp9)){
					HX_STACK_LINE(95)
					Array< ::Dynamic > tmp11 = ::kha::audio2::Audio1_obj::soundChannels;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(95)
					Array< ::Dynamic > tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(95)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(95)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(95)
					::kha::audio2::AudioChannel tmp15 = tmp12->__unsafe_get(tmp14).StaticCast< ::kha::audio2::AudioChannel >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(95)
					::kha::audio2::AudioChannel tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(95)
					tmp10 = tmp16->get_finished();
				}
				else{
					HX_STACK_LINE(95)
					tmp10 = true;
				}
				HX_STACK_LINE(95)
				if ((tmp10)){
					HX_STACK_LINE(96)
					::kha::audio2::AudioChannel tmp11 = ::kha::audio2::AudioChannel_obj::__new(loop);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(96)
					channel = tmp11;
					HX_STACK_LINE(97)
					channel->data = sound->uncompressedData;
					HX_STACK_LINE(98)
					Array< ::Dynamic > tmp12 = ::kha::audio2::Audio1_obj::soundChannels;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(98)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(98)
					::kha::audio2::AudioChannel tmp14 = channel;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(98)
					::kha::audio2::AudioChannel tmp15 = tmp12->__unsafe_set(tmp13,tmp14).StaticCast< ::kha::audio2::AudioChannel >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(98)
					tmp15;
					HX_STACK_LINE(99)
					break;
				}
			}
		}
		HX_STACK_LINE(103)
		::cpp::vm::Mutex tmp1 = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		tmp1->release();
		HX_STACK_LINE(105)
		::kha::audio2::AudioChannel tmp2 = channel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,play,return )

::kha::audio1::AudioChannel Audio1_obj::stream( ::kha::Sound sound,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(false);
	HX_STACK_FRAME("kha.audio2.Audio1","stream",0x3e03bd0b,"kha.audio2.Audio1.stream","kha/audio2/Audio1.hx",108,0x063d6bfb)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(111)
			::kha::Sound tmp = sound;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(111)
			bool tmp1 = loop;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			::kha::audio1::AudioChannel tmp2 = ::kha::audio2::Audio_obj::stream(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			::kha::audio1::AudioChannel hardwareChannel = tmp2;		HX_STACK_VAR(hardwareChannel,"hardwareChannel");
			HX_STACK_LINE(112)
			bool tmp3 = (hardwareChannel != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			if ((tmp3)){
				HX_STACK_LINE(112)
				::kha::audio1::AudioChannel tmp4 = hardwareChannel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(112)
				return tmp4;
			}
		}
		HX_STACK_LINE(116)
		::cpp::vm::Mutex tmp = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		tmp->acquire();
		HX_STACK_LINE(118)
		::kha::audio2::StreamChannel channel = null();		HX_STACK_VAR(channel,"channel");
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(119)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				if ((tmp2)){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(119)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(120)
				Array< ::Dynamic > tmp4 = ::kha::audio2::Audio1_obj::streamChannels;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(120)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(120)
				::kha::audio2::StreamChannel tmp6 = tmp4->__unsafe_get(tmp5).StaticCast< ::kha::audio2::StreamChannel >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(120)
				::kha::audio2::StreamChannel tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(120)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(120)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(120)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(120)
				if ((tmp9)){
					HX_STACK_LINE(120)
					Array< ::Dynamic > tmp11 = ::kha::audio2::Audio1_obj::streamChannels;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(120)
					Array< ::Dynamic > tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(120)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(120)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(120)
					::kha::audio2::StreamChannel tmp15 = tmp12->__unsafe_get(tmp14).StaticCast< ::kha::audio2::StreamChannel >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(120)
					::kha::audio2::StreamChannel tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(120)
					tmp10 = tmp16->get_finished();
				}
				else{
					HX_STACK_LINE(120)
					tmp10 = true;
				}
				HX_STACK_LINE(120)
				if ((tmp10)){
					HX_STACK_LINE(121)
					::kha::audio2::StreamChannel tmp11 = ::kha::audio2::StreamChannel_obj::__new(sound->compressedData,loop);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(121)
					channel = tmp11;
					HX_STACK_LINE(122)
					Array< ::Dynamic > tmp12 = ::kha::audio2::Audio1_obj::streamChannels;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(122)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(122)
					::kha::audio2::StreamChannel tmp14 = channel;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(122)
					::kha::audio2::StreamChannel tmp15 = tmp12->__unsafe_set(tmp13,tmp14).StaticCast< ::kha::audio2::StreamChannel >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(122)
					tmp15;
					HX_STACK_LINE(123)
					break;
				}
			}
		}
		HX_STACK_LINE(127)
		::cpp::vm::Mutex tmp1 = ::kha::audio2::Audio1_obj::mutex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		tmp1->release();
		HX_STACK_LINE(129)
		::kha::audio2::StreamChannel tmp2 = channel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,stream,return )


Audio1_obj::Audio1_obj()
{
}

bool Audio1_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { outValue = max_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"min") ) { outValue = min_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_mix") ) { outValue = _mix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"play") ) { outValue = play_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { outValue = mutex; return true;  }
		if (HX_FIELD_EQ(inName,"_init") ) { outValue = _init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stream") ) { outValue = stream_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sampleCache1") ) { outValue = sampleCache1; return true;  }
		if (HX_FIELD_EQ(inName,"sampleCache2") ) { outValue = sampleCache2; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"soundChannels") ) { outValue = soundChannels; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"streamChannels") ) { outValue = streamChannels; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"internalSoundChannels") ) { outValue = internalSoundChannels; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"internalStreamChannels") ) { outValue = internalStreamChannels; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Audio1_obj::channelCount,HX_HCSTRING("channelCount","\x0c","\x11","\x16","\x4f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::soundChannels,HX_HCSTRING("soundChannels","\x3f","\xda","\x0c","\x08")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::streamChannels,HX_HCSTRING("streamChannels","\xf0","\xfa","\xb5","\x1f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::internalSoundChannels,HX_HCSTRING("internalSoundChannels","\xc2","\x40","\x9f","\xb5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::internalStreamChannels,HX_HCSTRING("internalStreamChannels","\x0d","\x47","\x3d","\x52")},
	{hx::fsObject /*Array< ::cpp::Float32 >*/ ,(void *) &Audio1_obj::sampleCache1,HX_HCSTRING("sampleCache1","\x79","\xaf","\x5e","\xf5")},
	{hx::fsObject /*Array< ::cpp::Float32 >*/ ,(void *) &Audio1_obj::sampleCache2,HX_HCSTRING("sampleCache2","\x7a","\xaf","\x5e","\xf5")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(void *) &Audio1_obj::mutex,HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio1_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Audio1_obj::channelCount,"channelCount");
	HX_MARK_MEMBER_NAME(Audio1_obj::soundChannels,"soundChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::streamChannels,"streamChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::internalSoundChannels,"internalSoundChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::internalStreamChannels,"internalStreamChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::sampleCache1,"sampleCache1");
	HX_MARK_MEMBER_NAME(Audio1_obj::sampleCache2,"sampleCache2");
	HX_MARK_MEMBER_NAME(Audio1_obj::mutex,"mutex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio1_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Audio1_obj::channelCount,"channelCount");
	HX_VISIT_MEMBER_NAME(Audio1_obj::soundChannels,"soundChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::streamChannels,"streamChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::internalSoundChannels,"internalSoundChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::internalStreamChannels,"internalStreamChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::sampleCache1,"sampleCache1");
	HX_VISIT_MEMBER_NAME(Audio1_obj::sampleCache2,"sampleCache2");
	HX_VISIT_MEMBER_NAME(Audio1_obj::mutex,"mutex");
};

#endif

hx::Class Audio1_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("channelCount","\x0c","\x11","\x16","\x4f"),
	HX_HCSTRING("soundChannels","\x3f","\xda","\x0c","\x08"),
	HX_HCSTRING("streamChannels","\xf0","\xfa","\xb5","\x1f"),
	HX_HCSTRING("internalSoundChannels","\xc2","\x40","\x9f","\xb5"),
	HX_HCSTRING("internalStreamChannels","\x0d","\x47","\x3d","\x52"),
	HX_HCSTRING("sampleCache1","\x79","\xaf","\x5e","\xf5"),
	HX_HCSTRING("sampleCache2","\x7a","\xaf","\x5e","\xf5"),
	HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("_mix","\x9d","\x56","\x1e","\x3f"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"),
	::String(null()) };

void Audio1_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.Audio1","\x83","\x94","\xaf","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Audio1_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Audio1_obj >;
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

void Audio1_obj::__boot()
{
	channelCount= (int)16;
}

} // end namespace kha
} // end namespace audio2
