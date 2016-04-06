#ifndef INCLUDED_kha_Blob
#define INCLUDED_kha_Blob

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Blob)

#include <Kore/pch.h>

namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Blob_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Blob_obj OBJ_;
		Blob_obj();
		Void __construct(::haxe::io::Bytes bytes);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.Blob")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Blob_obj > __new(::haxe::io::Bytes bytes);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Blob_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Blob","\x7d","\x69","\xf2","\x2b"); }

		static ::kha::Blob fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		static ::kha::Blob alloc( int size);
		static Dynamic alloc_dyn();

		::haxe::io::Bytes bytes;
		virtual ::kha::Blob sub( int start,int length);
		Dynamic sub_dyn();

		int length;
		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual Void writeU8( int position,int value);
		Dynamic writeU8_dyn();

		virtual int readS8( int position);
		Dynamic readS8_dyn();

		virtual int readU8( int position);
		Dynamic readU8_dyn();

		virtual int readS16LE( int position);
		Dynamic readS16LE_dyn();

		virtual int readS16BE( int position);
		Dynamic readS16BE_dyn();

		virtual int readU16LE( int position);
		Dynamic readU16LE_dyn();

		virtual int readU16BE( int position);
		Dynamic readU16BE_dyn();

		virtual int readS32LE( int position);
		Dynamic readS32LE_dyn();

		virtual int readS32BE( int position);
		Dynamic readS32BE_dyn();

		virtual Float readF32LE( int position);
		Dynamic readF32LE_dyn();

		virtual Float readF32BE( int position);
		Dynamic readF32BE_dyn();

		virtual Float readF64LE( int position);
		Dynamic readF64LE_dyn();

		virtual Float readF64BE( int position);
		Dynamic readF64BE_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Blob */ 
