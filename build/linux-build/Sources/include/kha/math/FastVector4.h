#ifndef INCLUDED_kha_math_FastVector4
#define INCLUDED_kha_math_FastVector4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,FastVector4)
HX_DECLARE_CLASS2(kha,math,Vector4)
namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  FastVector4_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FastVector4_obj OBJ_;
		FastVector4_obj();
		Void __construct(hx::Null< ::cpp::Float32 >  __o_x,hx::Null< ::cpp::Float32 >  __o_y,hx::Null< ::cpp::Float32 >  __o_z,hx::Null< ::cpp::Float32 >  __o_w);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.math.FastVector4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FastVector4_obj > __new(hx::Null< ::cpp::Float32 >  __o_x,hx::Null< ::cpp::Float32 >  __o_y,hx::Null< ::cpp::Float32 >  __o_z,hx::Null< ::cpp::Float32 >  __o_w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FastVector4_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FastVector4","\xb5","\xc2","\x44","\x6e"); }

		static ::kha::math::FastVector4 fromVector4( ::kha::math::Vector4 v);
		static Dynamic fromVector4_dyn();

		::cpp::Float32 x;
		::cpp::Float32 y;
		::cpp::Float32 z;
		::cpp::Float32 w;
		virtual ::cpp::Float32 get_length( );
		Dynamic get_length_dyn();

		virtual ::cpp::Float32 set_length( ::cpp::Float32 length);
		Dynamic set_length_dyn();

};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_FastVector4 */ 
