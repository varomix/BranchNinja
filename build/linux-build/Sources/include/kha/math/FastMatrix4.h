#ifndef INCLUDED_kha_math_FastMatrix4
#define INCLUDED_kha_math_FastMatrix4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,FastMatrix4)
HX_DECLARE_CLASS2(kha,math,FastVector3)
HX_DECLARE_CLASS2(kha,math,Matrix4)
namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  FastMatrix4_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FastMatrix4_obj OBJ_;
		FastMatrix4_obj();
		Void __construct(::cpp::Float32 _00,::cpp::Float32 _10,::cpp::Float32 _20,::cpp::Float32 _30,::cpp::Float32 _01,::cpp::Float32 _11,::cpp::Float32 _21,::cpp::Float32 _31,::cpp::Float32 _02,::cpp::Float32 _12,::cpp::Float32 _22,::cpp::Float32 _32,::cpp::Float32 _03,::cpp::Float32 _13,::cpp::Float32 _23,::cpp::Float32 _33);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.math.FastMatrix4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FastMatrix4_obj > __new(::cpp::Float32 _00,::cpp::Float32 _10,::cpp::Float32 _20,::cpp::Float32 _30,::cpp::Float32 _01,::cpp::Float32 _11,::cpp::Float32 _21,::cpp::Float32 _31,::cpp::Float32 _02,::cpp::Float32 _12,::cpp::Float32 _22,::cpp::Float32 _32,::cpp::Float32 _03,::cpp::Float32 _13,::cpp::Float32 _23,::cpp::Float32 _33);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FastMatrix4_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FastMatrix4","\x77","\x0b","\x0f","\x27"); }

		static void __boot();
		static int width;
		static int height;
		static ::kha::math::FastMatrix4 fromMatrix4( ::kha::math::Matrix4 m);
		static Dynamic fromMatrix4_dyn();

		static ::kha::math::FastMatrix4 orthogonalProjection( ::cpp::Float32 left,::cpp::Float32 right,::cpp::Float32 bottom,::cpp::Float32 top,::cpp::Float32 zn,::cpp::Float32 zf);
		static Dynamic orthogonalProjection_dyn();

		static ::kha::math::FastMatrix4 perspectiveProjection( ::cpp::Float32 fovY,::cpp::Float32 aspect,::cpp::Float32 zn,::cpp::Float32 zf);
		static Dynamic perspectiveProjection_dyn();

		static ::kha::math::FastMatrix4 lookAt( ::kha::math::FastVector3 eye,::kha::math::FastVector3 at,::kha::math::FastVector3 up);
		static Dynamic lookAt_dyn();

		::cpp::Float32 _00;
		::cpp::Float32 _10;
		::cpp::Float32 _20;
		::cpp::Float32 _30;
		::cpp::Float32 _01;
		::cpp::Float32 _11;
		::cpp::Float32 _21;
		::cpp::Float32 _31;
		::cpp::Float32 _02;
		::cpp::Float32 _12;
		::cpp::Float32 _22;
		::cpp::Float32 _32;
		::cpp::Float32 _03;
		::cpp::Float32 _13;
		::cpp::Float32 _23;
		::cpp::Float32 _33;
};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_FastMatrix4 */ 
