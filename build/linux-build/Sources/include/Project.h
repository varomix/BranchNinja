#ifndef INCLUDED_Project
#define INCLUDED_Project

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Bug)
HX_DECLARE_CLASS0(Explosion)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Project)
HX_DECLARE_CLASS0(Star)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Framebuffer)
HX_DECLARE_CLASS1(kha2d,Sprite)


class HXCPP_CLASS_ATTRIBUTES  Project_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Project_obj OBJ_;
		Project_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Project")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Project_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Project_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Project","\xb9","\x3a","\x3c","\xc3"); }

		::Player player;
		::Star shuriken;
		::Explosion explosion;
		::Bug bug;
		virtual Void create( );
		Dynamic create_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void render( ::kha::Framebuffer framebuffer);
		Dynamic render_dyn();

};


#endif /* INCLUDED_Project */ 
