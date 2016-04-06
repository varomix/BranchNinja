#ifndef INCLUDED_kha_TargetDisplay
#define INCLUDED_kha_TargetDisplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,TargetDisplay)
namespace kha{


class TargetDisplay_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TargetDisplay_obj OBJ_;

	public:
		TargetDisplay_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.TargetDisplay","\x07","\x29","\x5f","\x50"); }
		::String __ToString() const { return HX_HCSTRING("TargetDisplay.","\x3d","\x4c","\x9c","\xe1") + tag; }

		static ::kha::TargetDisplay ById(int id);
		static Dynamic ById_dyn();
		static ::kha::TargetDisplay Primary;
		static inline ::kha::TargetDisplay Primary_dyn() { return Primary; }
};

} // end namespace kha

#endif /* INCLUDED_kha_TargetDisplay */ 
