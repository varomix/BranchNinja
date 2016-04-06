#ifndef INCLUDED_kha_kore_Keyboard
#define INCLUDED_kha_kore_Keyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_input_Keyboard
#include <kha/input/Keyboard.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,input,Keyboard)
HX_DECLARE_CLASS2(kha,kore,Keyboard)
HX_DECLARE_CLASS2(kha,network,Controller)

#include <Kore/pch.h>
#include <Kore/System.h>

namespace kha{
namespace kore{


class HXCPP_CLASS_ATTRIBUTES  Keyboard_obj : public ::kha::input::Keyboard_obj{
	public:
		typedef ::kha::input::Keyboard_obj super;
		typedef Keyboard_obj OBJ_;
		Keyboard_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.kore.Keyboard")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Keyboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Keyboard_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Keyboard","\xc7","\x78","\xdb","\x41"); }

		virtual Void show( );

		virtual Void hide( );

		virtual Void _receive( int offset,::haxe::io::Bytes bytes);

};

} // end namespace kha
} // end namespace kore

#endif /* INCLUDED_kha_kore_Keyboard */ 
