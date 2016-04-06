#ifndef INCLUDED_kha_kore_Sound
#define INCLUDED_kha_kore_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS2(kha,kore,Sound)

#include <Kore/pch.h>
#include <Kore/Audio/Sound.h>
#include <Kore/Audio/Mixer.h>

namespace kha{
namespace kore{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::kha::Sound_obj{
	public:
		typedef ::kha::Sound_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::String filename);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.kore.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sound_obj > __new(::String filename);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"); }

		::String filename;
		virtual Void uncompress2( );
		Dynamic uncompress2_dyn();

		virtual Void uncompress( Dynamic done);

		virtual Void unload2( );
		Dynamic unload2_dyn();

		virtual Void unload( );

		virtual Void _createData( int size);
		Dynamic _createData_dyn();

Kore::Sound* sound;
};

} // end namespace kha
} // end namespace kore

#endif /* INCLUDED_kha_kore_Sound */ 
