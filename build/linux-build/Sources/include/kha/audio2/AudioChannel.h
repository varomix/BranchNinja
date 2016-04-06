#ifndef INCLUDED_kha_audio2_AudioChannel
#define INCLUDED_kha_audio2_AudioChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_audio1_AudioChannel
#include <kha/audio1/AudioChannel.h>
#endif
HX_DECLARE_CLASS2(kha,audio1,AudioChannel)
HX_DECLARE_CLASS2(kha,audio2,AudioChannel)
namespace kha{
namespace audio2{


class HXCPP_CLASS_ATTRIBUTES  AudioChannel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioChannel_obj OBJ_;
		AudioChannel_obj();
		Void __construct(bool looping);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.AudioChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioChannel_obj > __new(bool looping);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioChannel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::audio1::AudioChannel_obj *();
		::String __ToString() const { return HX_HCSTRING("AudioChannel","\xad","\x62","\x5f","\xa0"); }

		Array< Float > data;
		Float myVolume;
		int myPosition;
		bool paused;
		bool looping;
		virtual Void nextSamples( Array< ::cpp::Float32 > samples,int length,int sampleRate);
		Dynamic nextSamples_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		Float length;
		virtual Float get_length( );
		Dynamic get_length_dyn();

		Float position;
		virtual Float get_position( );
		Dynamic get_position_dyn();

		virtual Float get_volume( );
		Dynamic get_volume_dyn();

		virtual Float set_volume( Float value);
		Dynamic set_volume_dyn();

		bool finished;
		virtual bool get_finished( );
		Dynamic get_finished_dyn();

};

} // end namespace kha
} // end namespace audio2

#endif /* INCLUDED_kha_audio2_AudioChannel */ 
