#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha2d_Sprite
#include <kha2d/Sprite.h>
#endif
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(kha2d,Animation)
HX_DECLARE_CLASS1(kha2d,Sprite)


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::kha2d::Sprite_obj{
	public:
		typedef ::kha2d::Sprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		::kha2d::Animation walk;
		::kha2d::Animation jump;
		::kha2d::Animation shoot;
		virtual Void update( );

};


#endif /* INCLUDED_Player */ 
