#ifndef INCLUDED_kha_math_Vector2i
#define INCLUDED_kha_math_Vector2i

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,Vector2i)
namespace kha{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Vector2i_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector2i_obj OBJ_;
		Vector2i_obj();
		Void __construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.math.Vector2i")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector2i_obj > __new(hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector2i_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector2i","\x9a","\x8f","\x6f","\x48"); }

		int x;
		int y;
};

} // end namespace kha
} // end namespace math

#endif /* INCLUDED_kha_math_Vector2i */ 
