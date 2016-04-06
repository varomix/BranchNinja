#ifndef INCLUDED_kha_audio2_StreamChannel
#define INCLUDED_kha_audio2_StreamChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_audio1_AudioChannel
#include <kha/audio1/AudioChannel.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,audio1,AudioChannel)
HX_DECLARE_CLASS2(kha,audio2,StreamChannel)
namespace kha{
namespace audio2{


class HXCPP_CLASS_ATTRIBUTES  StreamChannel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StreamChannel_obj OBJ_;
		StreamChannel_obj();
		Void __construct(::haxe::io::Bytes data,bool loop);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.StreamChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StreamChannel_obj > __new(::haxe::io::Bytes data,bool loop);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StreamChannel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::audio1::AudioChannel_obj *();
		::String __ToString() const { return HX_HCSTRING("StreamChannel","\x03","\xf4","\xa9","\x8a"); }

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

#endif /* INCLUDED_kha_audio2_StreamChannel */ 
