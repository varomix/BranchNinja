#ifndef INCLUDED_Star
#define INCLUDED_Star

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha2d_Sprite
#include <kha2d/Sprite.h>
#endif
HX_DECLARE_CLASS0(Star)
HX_DECLARE_CLASS1(kha2d,Sprite)


class HXCPP_CLASS_ATTRIBUTES  Star_obj : public ::kha2d::Sprite_obj{
	public:
		typedef ::kha2d::Sprite_obj super;
		typedef Star_obj OBJ_;
		Star_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Star")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Star_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Star_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Star","\xf2","\x0f","\x35","\x37"); }

		virtual Void update( );

};


#endif /* INCLUDED_Star */ 
