#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Setting
#define INCLUDED_kha_audio2_ogg_vorbis_data_Setting

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Setting)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  Setting_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Setting_obj OBJ_;
		Setting_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.vorbis.data.Setting")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Setting_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Setting_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Setting","\x70","\x09","\xf9","\xf4"); }

		static void __boot();
		static int MAX_CHANNELS;
		static int PUSHDATA_CRC_COUNT;
		static int FAST_HUFFMAN_LENGTH;
		static int FAST_HUFFMAN_TABLE_SIZE;
		static int FAST_HUFFMAN_TABLE_MASK;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Setting */ 
