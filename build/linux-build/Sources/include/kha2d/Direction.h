#ifndef INCLUDED_kha2d_Direction
#define INCLUDED_kha2d_Direction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha2d,Direction)
namespace kha2d{


class Direction_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Direction_obj OBJ_;

	public:
		Direction_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("kha2d.Direction","\xc7","\x4c","\x3f","\x37"); }
		::String __ToString() const { return HX_HCSTRING("Direction.","\x2f","\x99","\xc6","\x1e") + tag; }

		static ::kha2d::Direction DOWN;
		static inline ::kha2d::Direction DOWN_dyn() { return DOWN; }
		static ::kha2d::Direction LEFT;
		static inline ::kha2d::Direction LEFT_dyn() { return LEFT; }
		static ::kha2d::Direction RIGHT;
		static inline ::kha2d::Direction RIGHT_dyn() { return RIGHT; }
		static ::kha2d::Direction UP;
		static inline ::kha2d::Direction UP_dyn() { return UP; }
};

} // end namespace kha2d

#endif /* INCLUDED_kha2d_Direction */ 
