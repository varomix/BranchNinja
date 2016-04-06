#ifndef INCLUDED_kha_Position
#define INCLUDED_kha_Position

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Position)
namespace kha{


class Position_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Position_obj OBJ_;

	public:
		Position_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha.Position","\x53","\x0a","\xa3","\x3d"); }
		::String __ToString() const { return HX_HCSTRING("Position.","\x45","\xd3","\x24","\x72") + tag; }

		static ::kha::Position Center;
		static inline ::kha::Position Center_dyn() { return Center; }
		static ::kha::Position Fixed(int v);
		static Dynamic Fixed_dyn();
};

} // end namespace kha

#endif /* INCLUDED_kha_Position */ 
