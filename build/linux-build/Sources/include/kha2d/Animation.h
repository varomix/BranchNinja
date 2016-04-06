#ifndef INCLUDED_kha2d_Animation
#define INCLUDED_kha2d_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha2d,Animation)
namespace kha2d{


class HXCPP_CLASS_ATTRIBUTES  Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(Array< int > indices,int speeddiv);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha2d.Animation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Animation_obj > __new(Array< int > indices,int speeddiv);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Animation_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Animation","\xe4","\xce","\x07","\xed"); }

		static ::kha2d::Animation create( int index);
		static Dynamic create_dyn();

		static ::kha2d::Animation createRange( int minindex,int maxindex,int speeddiv);
		static Dynamic createRange_dyn();

		Array< int > indices;
		int speeddiv;
		int count;
		int index;
		virtual Void take( ::kha2d::Animation animation);
		Dynamic take_dyn();

		virtual int get( );
		Dynamic get_dyn();

		virtual int getIndex( );
		Dynamic getIndex_dyn();

		virtual Void setIndex( int index);
		Dynamic setIndex_dyn();

		virtual bool next( );
		Dynamic next_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

};

} // end namespace kha2d

#endif /* INCLUDED_kha2d_Animation */ 
