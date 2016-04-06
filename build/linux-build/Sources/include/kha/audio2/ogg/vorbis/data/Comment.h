#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Comment
#define INCLUDED_kha_audio2_ogg_vorbis_data_Comment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Comment)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  Comment_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Comment_obj OBJ_;
		Comment_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Comment")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Comment_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Comment_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Comment","\x3f","\xa2","\xc1","\x4e"); }

		::haxe::ds::StringMap data;
		virtual ::String get_title( );
		Dynamic get_title_dyn();

		virtual Dynamic get_loopStart( );
		Dynamic get_loopStart_dyn();

		virtual Dynamic get_loopLength( );
		Dynamic get_loopLength_dyn();

		virtual ::String get_version( );
		Dynamic get_version_dyn();

		virtual ::String get_album( );
		Dynamic get_album_dyn();

		virtual ::String get_organization( );
		Dynamic get_organization_dyn();

		virtual ::String get_tracknumber( );
		Dynamic get_tracknumber_dyn();

		virtual ::String get_performer( );
		Dynamic get_performer_dyn();

		virtual ::String get_copyright( );
		Dynamic get_copyright_dyn();

		virtual ::String get_license( );
		Dynamic get_license_dyn();

		virtual ::String get_artist( );
		Dynamic get_artist_dyn();

		virtual ::String get_description( );
		Dynamic get_description_dyn();

		virtual ::String get_genre( );
		Dynamic get_genre_dyn();

		virtual ::String get_date( );
		Dynamic get_date_dyn();

		virtual ::String get_location( );
		Dynamic get_location_dyn();

		virtual ::String get_contact( );
		Dynamic get_contact_dyn();

		virtual ::String get_isrc( );
		Dynamic get_isrc_dyn();

		virtual Array< ::String > get_artists( );
		Dynamic get_artists_dyn();

		virtual Void add( ::String key,::String value);
		Dynamic add_dyn();

		virtual ::String getString( ::String key);
		Dynamic getString_dyn();

		virtual Array< ::String > getArray( ::String key);
		Dynamic getArray_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Comment */ 
