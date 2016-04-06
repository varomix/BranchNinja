#ifndef INCLUDED_kha_Kravur
#define INCLUDED_kha_Kravur

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,Kravur)
HX_DECLARE_CLASS1(kha,KravurImage)
HX_DECLARE_CLASS1(kha,Resource)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Kravur_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Kravur_obj OBJ_;
		Kravur_obj();
		Void __construct(::kha::Blob blob);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Kravur")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Kravur_obj > __new(::kha::Blob blob);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Kravur_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::kha::Resource_obj *();
		operator ::kha::Font_obj *();
		::String __ToString() const { return HX_HCSTRING("Kravur","\xd9","\xd3","\xe9","\xe0"); }

		::kha::Blob blob;
		::haxe::ds::IntMap images;
		virtual ::kha::KravurImage _get( int fontSize);
		Dynamic _get_dyn();

		virtual Float height( int fontSize);
		Dynamic height_dyn();

		virtual Float width( int fontSize,::String str);
		Dynamic width_dyn();

		virtual Float baseline( int fontSize);
		Dynamic baseline_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Kravur */ 
