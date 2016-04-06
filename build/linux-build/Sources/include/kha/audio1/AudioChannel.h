#ifndef INCLUDED_kha_audio1_AudioChannel
#define INCLUDED_kha_audio1_AudioChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,audio1,AudioChannel)
namespace kha{
namespace audio1{


class HXCPP_CLASS_ATTRIBUTES  AudioChannel_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AudioChannel_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void play( )=0;
virtual Dynamic play_dyn()=0;
		virtual Void pause( )=0;
virtual Dynamic pause_dyn()=0;
		virtual Void stop( )=0;
virtual Dynamic stop_dyn()=0;
		virtual Float get_length( )=0;
virtual Dynamic get_length_dyn()=0;
		virtual Float get_position( )=0;
virtual Dynamic get_position_dyn()=0;
		virtual Float get_volume( )=0;
virtual Dynamic get_volume_dyn()=0;
		virtual Float set_volume( Float value)=0;
virtual Dynamic set_volume_dyn()=0;
		virtual bool get_finished( )=0;
virtual Dynamic get_finished_dyn()=0;
};



template<typename IMPL>
class AudioChannel_delegate_ : public AudioChannel_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AudioChannel_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void play( ) { return mDelegate->play();}
		Dynamic play_dyn() { return mDelegate->play_dyn();}
		Void pause( ) { return mDelegate->pause();}
		Dynamic pause_dyn() { return mDelegate->pause_dyn();}
		Void stop( ) { return mDelegate->stop();}
		Dynamic stop_dyn() { return mDelegate->stop_dyn();}
		Float get_length( ) { return mDelegate->get_length();}
		Dynamic get_length_dyn() { return mDelegate->get_length_dyn();}
		Float get_position( ) { return mDelegate->get_position();}
		Dynamic get_position_dyn() { return mDelegate->get_position_dyn();}
		Float get_volume( ) { return mDelegate->get_volume();}
		Dynamic get_volume_dyn() { return mDelegate->get_volume_dyn();}
		Float set_volume( Float value) { return mDelegate->set_volume(value);}
		Dynamic set_volume_dyn() { return mDelegate->set_volume_dyn();}
		bool get_finished( ) { return mDelegate->get_finished();}
		Dynamic get_finished_dyn() { return mDelegate->get_finished_dyn();}
};

} // end namespace kha
} // end namespace audio1

#endif /* INCLUDED_kha_audio1_AudioChannel */ 
