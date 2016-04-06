#ifndef INCLUDED_kha2d_Tile
#define INCLUDED_kha2d_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha2d,Rectangle)
HX_DECLARE_CLASS1(kha2d,Tile)
namespace kha2d{


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct(int imageIndex,bool collides);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha2d.Tile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tile_obj > __new(int imageIndex,bool collides);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Tile","\x4e","\xf7","\xd5","\x37"); }

		int imageIndex;
		bool visible;
		bool collides;
		virtual bool collision( ::kha2d::Rectangle rect);
		Dynamic collision_dyn();

};

} // end namespace kha2d

#endif /* INCLUDED_kha2d_Tile */ 
