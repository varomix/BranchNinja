#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Comment
#include <kha/audio2/ogg/vorbis/data/Comment.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

Void Comment_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","new",0x21ab6601,"kha.audio2.ogg.vorbis.data.Comment.new","kha/audio2/ogg/vorbis/data/Comment.hx",100,0x7ddd0bd0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(101)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		tmp = tmp1;
	}
	HX_STACK_LINE(101)
	this->data = tmp;
}
;
	return null();
}

//Comment_obj::~Comment_obj() { }

Dynamic Comment_obj::__CreateEmpty() { return  new Comment_obj; }
hx::ObjectPtr< Comment_obj > Comment_obj::__new()
{  hx::ObjectPtr< Comment_obj > _result_ = new Comment_obj();
	_result_->__construct();
	return _result_;}

Dynamic Comment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Comment_obj > _result_ = new Comment_obj();
	_result_->__construct();
	return _result_;}

::String Comment_obj::get_title( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_title",0xb5997650,"kha.audio2.ogg.vorbis.data.Comment.get_title","kha/audio2/ogg/vorbis/data/Comment.hx",11,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12)
	::String tmp = this->getString(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_title,return )

Dynamic Comment_obj::get_loopStart( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_loopStart",0xc780b016,"kha.audio2.ogg.vorbis.data.Comment.get_loopStart","kha/audio2/ogg/vorbis/data/Comment.hx",16,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	::String tmp = this->getString(HX_HCSTRING("loopstart","\x7e","\x23","\x8a","\x1e"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	Dynamic tmp1 = ::Std_obj::parseInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_loopStart,return )

Dynamic Comment_obj::get_loopLength( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_loopLength",0x622696b2,"kha.audio2.ogg.vorbis.data.Comment.get_loopLength","kha/audio2/ogg/vorbis/data/Comment.hx",21,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::String tmp = this->getString(HX_HCSTRING("looplength","\x4a","\x1e","\x62","\x33"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Dynamic tmp1 = ::Std_obj::parseInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_loopLength,return )

::String Comment_obj::get_version( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_version",0xff33e5d0,"kha.audio2.ogg.vorbis.data.Comment.get_version","kha/audio2/ogg/vorbis/data/Comment.hx",26,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::String tmp = this->getString(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_version,return )

::String Comment_obj::get_album( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_album",0xc6ea73e7,"kha.audio2.ogg.vorbis.data.Comment.get_album","kha/audio2/ogg/vorbis/data/Comment.hx",31,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::String tmp = this->getString(HX_HCSTRING("album","\x2f","\x13","\x8c","\x21"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_album,return )

::String Comment_obj::get_organization( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_organization",0xaa4acbbb,"kha.audio2.ogg.vorbis.data.Comment.get_organization","kha/audio2/ogg/vorbis/data/Comment.hx",36,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::String tmp = this->getString(HX_HCSTRING("organization","\x73","\x25","\xdb","\xc0"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_organization,return )

::String Comment_obj::get_tracknumber( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_tracknumber",0x04b3ca4c,"kha.audio2.ogg.vorbis.data.Comment.get_tracknumber","kha/audio2/ogg/vorbis/data/Comment.hx",41,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	::String tmp = this->getString(HX_HCSTRING("tracknumber","\x94","\x0f","\xe0","\x14"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_tracknumber,return )

::String Comment_obj::get_performer( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_performer",0x726b8806,"kha.audio2.ogg.vorbis.data.Comment.get_performer","kha/audio2/ogg/vorbis/data/Comment.hx",46,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::String tmp = this->getString(HX_HCSTRING("performer","\x4e","\x6b","\xa2","\x5c"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_performer,return )

::String Comment_obj::get_copyright( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_copyright",0xf1fadcbf,"kha.audio2.ogg.vorbis.data.Comment.get_copyright","kha/audio2/ogg/vorbis/data/Comment.hx",51,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	::String tmp = this->getString(HX_HCSTRING("copyright","\x07","\xc0","\x31","\xdc"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_copyright,return )

::String Comment_obj::get_license( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_license",0x4c8ad239,"kha.audio2.ogg.vorbis.data.Comment.get_license","kha/audio2/ogg/vorbis/data/Comment.hx",56,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	::String tmp = this->getString(HX_HCSTRING("license","\x81","\xd3","\x48","\xca"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_license,return )

::String Comment_obj::get_artist( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_artist",0xc67f330f,"kha.audio2.ogg.vorbis.data.Comment.get_artist","kha/audio2/ogg/vorbis/data/Comment.hx",61,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::String tmp = this->getString(HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_artist,return )

::String Comment_obj::get_description( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_description",0x4ef0c3b4,"kha.audio2.ogg.vorbis.data.Comment.get_description","kha/audio2/ogg/vorbis/data/Comment.hx",66,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	::String tmp = this->getString(HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_description,return )

::String Comment_obj::get_genre( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_genre",0x36ba88fb,"kha.audio2.ogg.vorbis.data.Comment.get_genre","kha/audio2/ogg/vorbis/data/Comment.hx",71,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	::String tmp = this->getString(HX_HCSTRING("genre","\x43","\x28","\x5c","\x91"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_genre,return )

::String Comment_obj::get_date( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_date",0xf19f7476,"kha.audio2.ogg.vorbis.data.Comment.get_date","kha/audio2/ogg/vorbis/data/Comment.hx",76,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	::String tmp = this->getString(HX_HCSTRING("date","\x2e","\x56","\x63","\x42"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_date,return )

::String Comment_obj::get_location( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_location",0x5cc3507d,"kha.audio2.ogg.vorbis.data.Comment.get_location","kha/audio2/ogg/vorbis/data/Comment.hx",81,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	::String tmp = this->getString(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_location,return )

::String Comment_obj::get_contact( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_contact",0x9bb67958,"kha.audio2.ogg.vorbis.data.Comment.get_contact","kha/audio2/ogg/vorbis/data/Comment.hx",86,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	::String tmp = this->getString(HX_HCSTRING("contact","\xa0","\x7a","\x74","\x19"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_contact,return )

::String Comment_obj::get_isrc( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_isrc",0xf4fb2c63,"kha.audio2.ogg.vorbis.data.Comment.get_isrc","kha/audio2/ogg/vorbis/data/Comment.hx",91,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	::String tmp = this->getString(HX_HCSTRING("isrc","\x1b","\x0e","\xbf","\x45"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_isrc,return )

Array< ::String > Comment_obj::get_artists( ){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","get_artists",0xe8cd7a84,"kha.audio2.ogg.vorbis.data.Comment.get_artists","kha/audio2/ogg/vorbis/data/Comment.hx",96,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	Array< ::String > tmp = this->getArray(HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Comment_obj,get_artists,return )

Void Comment_obj::add( ::String key,::String value){
{
		HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","add",0x21a187c2,"kha.audio2.ogg.vorbis.data.Comment.add","kha/audio2/ogg/vorbis/data/Comment.hx",104,0x7ddd0bd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(105)
		::String tmp = key.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		key = tmp;
		HX_STACK_LINE(106)
		::haxe::ds::StringMap tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::String tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		if ((tmp3)){
			HX_STACK_LINE(107)
			::haxe::ds::StringMap tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			Array< ::String > tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			::String tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			tmp6->push(tmp7);
		}
		else{
			HX_STACK_LINE(109)
			Array< ::String > tmp4 = Array_obj< ::String >::__new().Add(value);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			Array< ::String > v = tmp4;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(109)
			::haxe::ds::StringMap tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(109)
			::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			Array< ::String > tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(109)
			tmp5->set(tmp6,tmp7);
			HX_STACK_LINE(109)
			v;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Comment_obj,add,(void))

::String Comment_obj::getString( ::String key){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","getString",0xef3bb668,"kha.audio2.ogg.vorbis.data.Comment.getString","kha/audio2/ogg/vorbis/data/Comment.hx",113,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(114)
	::String tmp = key.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	key = tmp;
	HX_STACK_LINE(115)
	::haxe::ds::StringMap tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	::String tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	if ((tmp3)){
		HX_STACK_LINE(116)
		::haxe::ds::StringMap tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		Array< ::String > tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		Array< ::String > tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		tmp4 = tmp8->__get((int)0);
	}
	else{
		HX_STACK_LINE(118)
		tmp4 = null();
	}
	HX_STACK_LINE(115)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Comment_obj,getString,return )

Array< ::String > Comment_obj::getArray( ::String key){
	HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Comment","getArray",0xb4e7dfe2,"kha.audio2.ogg.vorbis.data.Comment.getArray","kha/audio2/ogg/vorbis/data/Comment.hx",122,0x7ddd0bd0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(123)
	::String tmp = key.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	key = tmp;
	HX_STACK_LINE(124)
	::haxe::ds::StringMap tmp1 = this->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	::String tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(124)
	Array< ::String > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(124)
	if ((tmp3)){
		HX_STACK_LINE(125)
		::haxe::ds::StringMap tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		Array< ::String > tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(125)
		tmp4 = tmp7;
	}
	else{
		HX_STACK_LINE(127)
		tmp4 = null();
	}
	HX_STACK_LINE(124)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Comment_obj,getArray,return )


Comment_obj::Comment_obj()
{
}

void Comment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Comment);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void Comment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic Comment_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"date") ) { if (inCallProp == hx::paccAlways) return get_date(); }
		if (HX_FIELD_EQ(inName,"isrc") ) { if (inCallProp == hx::paccAlways) return get_isrc(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return get_title(); }
		if (HX_FIELD_EQ(inName,"album") ) { if (inCallProp == hx::paccAlways) return get_album(); }
		if (HX_FIELD_EQ(inName,"genre") ) { if (inCallProp == hx::paccAlways) return get_genre(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { if (inCallProp == hx::paccAlways) return get_artist(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { if (inCallProp == hx::paccAlways) return get_version(); }
		if (HX_FIELD_EQ(inName,"license") ) { if (inCallProp == hx::paccAlways) return get_license(); }
		if (HX_FIELD_EQ(inName,"contact") ) { if (inCallProp == hx::paccAlways) return get_contact(); }
		if (HX_FIELD_EQ(inName,"artists") ) { if (inCallProp == hx::paccAlways) return get_artists(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_date") ) { return get_date_dyn(); }
		if (HX_FIELD_EQ(inName,"location") ) { if (inCallProp == hx::paccAlways) return get_location(); }
		if (HX_FIELD_EQ(inName,"get_isrc") ) { return get_isrc_dyn(); }
		if (HX_FIELD_EQ(inName,"getArray") ) { return getArray_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_title") ) { return get_title_dyn(); }
		if (HX_FIELD_EQ(inName,"loopStart") ) { if (inCallProp == hx::paccAlways) return get_loopStart(); }
		if (HX_FIELD_EQ(inName,"get_album") ) { return get_album_dyn(); }
		if (HX_FIELD_EQ(inName,"performer") ) { if (inCallProp == hx::paccAlways) return get_performer(); }
		if (HX_FIELD_EQ(inName,"copyright") ) { if (inCallProp == hx::paccAlways) return get_copyright(); }
		if (HX_FIELD_EQ(inName,"get_genre") ) { return get_genre_dyn(); }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loopLength") ) { if (inCallProp == hx::paccAlways) return get_loopLength(); }
		if (HX_FIELD_EQ(inName,"get_artist") ) { return get_artist_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_version") ) { return get_version_dyn(); }
		if (HX_FIELD_EQ(inName,"tracknumber") ) { if (inCallProp == hx::paccAlways) return get_tracknumber(); }
		if (HX_FIELD_EQ(inName,"get_license") ) { return get_license_dyn(); }
		if (HX_FIELD_EQ(inName,"description") ) { if (inCallProp == hx::paccAlways) return get_description(); }
		if (HX_FIELD_EQ(inName,"get_contact") ) { return get_contact_dyn(); }
		if (HX_FIELD_EQ(inName,"get_artists") ) { return get_artists_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"organization") ) { if (inCallProp == hx::paccAlways) return get_organization(); }
		if (HX_FIELD_EQ(inName,"get_location") ) { return get_location_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_loopStart") ) { return get_loopStart_dyn(); }
		if (HX_FIELD_EQ(inName,"get_performer") ) { return get_performer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_copyright") ) { return get_copyright_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_loopLength") ) { return get_loopLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_tracknumber") ) { return get_tracknumber_dyn(); }
		if (HX_FIELD_EQ(inName,"get_description") ) { return get_description_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_organization") ) { return get_organization_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Comment_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Comment_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Comment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("loopStart","\x5e","\x93","\xb7","\xb1"));
	outFields->push(HX_HCSTRING("loopLength","\x6a","\x92","\xf6","\x67"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("album","\x2f","\x13","\x8c","\x21"));
	outFields->push(HX_HCSTRING("organization","\x73","\x25","\xdb","\xc0"));
	outFields->push(HX_HCSTRING("tracknumber","\x94","\x0f","\xe0","\x14"));
	outFields->push(HX_HCSTRING("performer","\x4e","\x6b","\xa2","\x5c"));
	outFields->push(HX_HCSTRING("copyright","\x07","\xc0","\x31","\xdc"));
	outFields->push(HX_HCSTRING("license","\x81","\xd3","\x48","\xca"));
	outFields->push(HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"));
	outFields->push(HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"));
	outFields->push(HX_HCSTRING("genre","\x43","\x28","\x5c","\x91"));
	outFields->push(HX_HCSTRING("date","\x2e","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"));
	outFields->push(HX_HCSTRING("contact","\xa0","\x7a","\x74","\x19"));
	outFields->push(HX_HCSTRING("isrc","\x1b","\x0e","\xbf","\x45"));
	outFields->push(HX_HCSTRING("artists","\xcc","\x7b","\x8b","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Comment_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("get_title","\xef","\x71","\xe4","\x53"),
	HX_HCSTRING("get_loopStart","\x35","\x67","\x1b","\x73"),
	HX_HCSTRING("get_loopLength","\xb3","\x1a","\xec","\xdd"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	HX_HCSTRING("get_album","\x86","\x6f","\x35","\x65"),
	HX_HCSTRING("get_organization","\xfc","\x11","\x7a","\xc5"),
	HX_HCSTRING("get_tracknumber","\x2b","\xc7","\xc1","\xd5"),
	HX_HCSTRING("get_performer","\x25","\x3f","\x06","\x1e"),
	HX_HCSTRING("get_copyright","\xde","\x93","\x95","\x9d"),
	HX_HCSTRING("get_license","\x98","\x33","\x43","\x50"),
	HX_HCSTRING("get_artist","\x90","\x62","\xd0","\xa9"),
	HX_HCSTRING("get_description","\x93","\xc0","\xfe","\x1f"),
	HX_HCSTRING("get_genre","\x9a","\x84","\x05","\xd5"),
	HX_HCSTRING("get_date","\xb7","\x11","\x1e","\xc2"),
	HX_HCSTRING("get_location","\x3e","\x22","\x60","\x9a"),
	HX_HCSTRING("get_contact","\xb7","\xda","\x6e","\x9f"),
	HX_HCSTRING("get_isrc","\xa4","\xc9","\x79","\xc5"),
	HX_HCSTRING("get_artists","\xe3","\xdb","\x85","\xec"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("getArray","\x23","\x7d","\x66","\x85"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Comment_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Comment_obj::__mClass,"__mClass");
};

#endif

hx::Class Comment_obj::__mClass;

void Comment_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Comment","\x8f","\x51","\xa6","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Comment_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Comment_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
