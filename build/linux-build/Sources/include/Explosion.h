#ifndef INCLUDED_Explosion
#define INCLUDED_Explosion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha2d_Sprite
#include <kha2d/Sprite.h>
#endif
HX_DECLARE_CLASS0(Explosion)
HX_DECLARE_CLASS1(kha2d,Animation)
HX_DECLARE_CLASS1(kha2d,Sprite)


class HXCPP_CLASS_ATTRIBUTES  Explosion_obj : public ::kha2d::Sprite_obj{
	public:
		typedef ::kha2d::Sprite_obj super;
		typedef Explosion_obj OBJ_;
		Explosion_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Explosion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Explosion_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Explosion_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Explosion","\x75","\xb3","\x73","\x40"); }

		::kha2d::Animation explode;
		virtual Void update( );

};


#endif /* INCLUDED_Explosion */ 
