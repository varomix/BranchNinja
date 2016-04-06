#ifndef INCLUDED_kha_Mode
#define INCLUDED_kha_Mode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Mode)
namespace kha{


class Mode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Mode_obj OBJ_;

	public:
		Mode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.Mode","\x0d","\xa0","\x14","\x45"); }
		::String __ToString() const { return HX_HCSTRING("Mode.","\x4b","\x93","\x85","\x9f") + tag; }

		static ::kha::Mode BorderlessWindow;
		static inline ::kha::Mode BorderlessWindow_dyn() { return BorderlessWindow; }
		static ::kha::Mode Fullscreen;
		static inline ::kha::Mode Fullscreen_dyn() { return Fullscreen; }
		static ::kha::Mode Window;
		static inline ::kha::Mode Window_dyn() { return Window; }
};

} // end namespace kha

#endif /* INCLUDED_kha_Mode */ 
