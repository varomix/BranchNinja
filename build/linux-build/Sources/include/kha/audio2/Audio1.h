#ifndef INCLUDED_kha_audio2_Audio1
#define INCLUDED_kha_audio2_Audio1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Mutex)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS2(kha,audio1,AudioChannel)
HX_DECLARE_CLASS2(kha,audio2,Audio1)
HX_DECLARE_CLASS2(kha,audio2,AudioChannel)
HX_DECLARE_CLASS2(kha,audio2,Buffer)
HX_DECLARE_CLASS2(kha,audio2,StreamChannel)
namespace kha{
namespace audio2{


class HXCPP_CLASS_ATTRIBUTES  Audio1_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Audio1_obj OBJ_;
		Audio1_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.Audio1")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Audio1_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Audio1_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Audio1","\xbb","\xb6","\x7d","\x9d"); }

		static void __boot();
		static int channelCount;
		static Array< ::Dynamic > soundChannels;
		static Array< ::Dynamic > streamChannels;
		static Array< ::Dynamic > internalSoundChannels;
		static Array< ::Dynamic > internalStreamChannels;
		static Array< ::cpp::Float32 > sampleCache1;
		static Array< ::cpp::Float32 > sampleCache2;
		static ::cpp::vm::Mutex mutex;
		static Void _init( );
		static Dynamic _init_dyn();

		static Float max( Float a,Float b);
		static Dynamic max_dyn();

		static Float min( Float a,Float b);
		static Dynamic min_dyn();

		static Void _mix( int samples,::kha::audio2::Buffer buffer);
		static Dynamic _mix_dyn();

		static ::kha::audio1::AudioChannel play( ::kha::Sound sound,hx::Null< bool >  loop);
		static Dynamic play_dyn();

		static ::kha::audio1::AudioChannel stream( ::kha::Sound sound,hx::Null< bool >  loop);
		static Dynamic stream_dyn();

};

} // end namespace kha
} // end namespace audio2

#endif /* INCLUDED_kha_audio2_Audio1 */ 
