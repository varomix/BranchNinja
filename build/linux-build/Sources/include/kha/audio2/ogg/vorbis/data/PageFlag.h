#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_PageFlag
#define INCLUDED_kha_audio2_ogg_vorbis_data_PageFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,PageFlag)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  PageFlag_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PageFlag_obj OBJ_;
		PageFlag_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.vorbis.data.PageFlag")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PageFlag_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PageFlag_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PageFlag","\xbb","\xa1","\x37","\x26"); }

		static void __boot();
		static int CONTINUED_PACKET;
		static int FIRST_PAGE;
		static int LAST_PAGE;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_PageFlag */ 
