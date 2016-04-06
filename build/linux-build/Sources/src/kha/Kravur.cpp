#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_Kravur
#include <kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_KravurImage
#include <kha/KravurImage.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_StbTruetype
#include <kha/graphics2/truetype/StbTruetype.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_bakedchar
#include <kha/graphics2/truetype/Stbtt_bakedchar.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo
#include <kha/graphics2/truetype/Stbtt_fontinfo.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_font_v_metrics
#include <kha/graphics2/truetype/Stbtt_temp_font_v_metrics.h>
#endif
namespace kha{

Void Kravur_obj::__construct(::kha::Blob blob)
{
HX_STACK_FRAME("kha.Kravur","new",0x6ca37955,"kha.Kravur.new","kha/Kravur.hx",108,0xdd7a3f9a)
HX_STACK_THIS(this)
HX_STACK_ARG(blob,"blob")
{
	struct _Function_1_1{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/Kravur.hx",110,0xdd7a3f9a)
			{
				HX_STACK_LINE(110)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(110)
				return tmp;
			}
			return null();
		}
	};
	HX_STACK_LINE(110)
	this->images = _Function_1_1::Block();
	HX_STACK_LINE(113)
	this->blob = blob;
}
;
	return null();
}

//Kravur_obj::~Kravur_obj() { }

Dynamic Kravur_obj::__CreateEmpty() { return  new Kravur_obj; }
hx::ObjectPtr< Kravur_obj > Kravur_obj::__new(::kha::Blob blob)
{  hx::ObjectPtr< Kravur_obj > _result_ = new Kravur_obj();
	_result_->__construct(blob);
	return _result_;}

Dynamic Kravur_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Kravur_obj > _result_ = new Kravur_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Kravur_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::Resource_obj)) return operator ::kha::Resource_obj *();
	if (inType==typeid( ::kha::Font_obj)) return operator ::kha::Font_obj *();
	return super::__ToInterface(inType);
}

Kravur_obj::operator ::kha::Resource_obj *()
	{ return new ::kha::Resource_delegate_< Kravur_obj >(this); }
Kravur_obj::operator ::kha::Font_obj *()
	{ return new ::kha::Font_delegate_< Kravur_obj >(this); }
::kha::KravurImage Kravur_obj::_get( int fontSize){
	HX_STACK_FRAME("kha.Kravur","_get",0x987df302,"kha.Kravur._get","kha/Kravur.hx",116,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fontSize,"fontSize")
	HX_STACK_LINE(117)
	::haxe::ds::IntMap tmp = this->images;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	int tmp1 = fontSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(117)
	if ((tmp3)){
		HX_STACK_LINE(118)
		int width = (int)64;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(119)
		int height = (int)32;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(120)
		Array< ::Dynamic > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(120)
			Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			this1 = tmp5;
			HX_STACK_LINE(120)
			this1->__SetSizeExact((int)224);
			HX_STACK_LINE(120)
			tmp4 = this1;
		}
		HX_STACK_LINE(120)
		Array< ::Dynamic > baked = tmp4;		HX_STACK_VAR(baked,"baked");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(121)
			int tmp5 = baked->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(121)
			while((true)){
				HX_STACK_LINE(121)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(121)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(121)
				if ((tmp7)){
					HX_STACK_LINE(121)
					break;
				}
				HX_STACK_LINE(121)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(121)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					::kha::graphics2::truetype::Stbtt_bakedchar val = ::kha::graphics2::truetype::Stbtt_bakedchar_obj::__new();		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(122)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(122)
					::kha::graphics2::truetype::Stbtt_bakedchar tmp10 = val;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(122)
					::kha::graphics2::truetype::Stbtt_bakedchar tmp11 = baked->__unsafe_set(tmp9,tmp10).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(122)
					tmp11;
				}
			}
		}
		HX_STACK_LINE(125)
		::kha::Blob pixels = null();		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(127)
		int status = (int)-1;		HX_STACK_VAR(status,"status");
		HX_STACK_LINE(128)
		while((true)){
			HX_STACK_LINE(128)
			bool tmp5 = (status < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			if ((tmp6)){
				HX_STACK_LINE(128)
				break;
			}
			HX_STACK_LINE(129)
			bool tmp7 = (height < width);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(129)
			if ((tmp7)){
				HX_STACK_LINE(129)
				hx::MultEq(height,(int)2);
			}
			else{
				HX_STACK_LINE(130)
				hx::MultEq(width,(int)2);
			}
			HX_STACK_LINE(131)
			int tmp8 = (width * height);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			::kha::Blob tmp9 = ::kha::Blob_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			pixels = tmp9;
			HX_STACK_LINE(132)
			::kha::Blob tmp10 = this->blob;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(132)
			int tmp11 = fontSize;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(132)
			::kha::Blob tmp12 = pixels;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(132)
			int tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(132)
			int tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(132)
			int tmp15 = (int)224;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(132)
			Array< ::Dynamic > tmp16 = baked;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(132)
			int tmp17 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_BakeFontBitmap(tmp10,(int)0,tmp11,tmp12,tmp13,tmp14,(int)32,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(132)
			status = tmp17;
		}
		HX_STACK_LINE(137)
		::kha::graphics2::truetype::Stbtt_fontinfo info = ::kha::graphics2::truetype::Stbtt_fontinfo_obj::__new();		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(138)
		::kha::graphics2::truetype::Stbtt_fontinfo tmp5 = info;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		::kha::Blob tmp6 = this->blob;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		::kha::graphics2::truetype::StbTruetype_obj::stbtt_InitFont(tmp5,tmp6,(int)0);
		HX_STACK_LINE(140)
		::kha::graphics2::truetype::Stbtt_fontinfo tmp7 = info;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		::kha::graphics2::truetype::Stbtt_temp_font_v_metrics tmp8 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetFontVMetrics(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		::kha::graphics2::truetype::Stbtt_temp_font_v_metrics metrics = tmp8;		HX_STACK_VAR(metrics,"metrics");
		HX_STACK_LINE(141)
		::kha::graphics2::truetype::Stbtt_fontinfo tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		int tmp10 = fontSize;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(141)
		Float tmp11 = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_ScaleForPixelHeight(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(141)
		Float scale = tmp11;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(142)
		Float tmp12 = (metrics->ascent * scale);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(142)
		int tmp13 = ::Math_obj::round(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(142)
		int ascent = tmp13;		HX_STACK_VAR(ascent,"ascent");
		HX_STACK_LINE(143)
		Float tmp14 = (metrics->descent * scale);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(143)
		int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(143)
		int descent = tmp15;		HX_STACK_VAR(descent,"descent");
		HX_STACK_LINE(144)
		Float tmp16 = (metrics->lineGap * scale);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(144)
		int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(144)
		int lineGap = tmp17;		HX_STACK_VAR(lineGap,"lineGap");
		HX_STACK_LINE(146)
		int tmp18 = fontSize;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(146)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(146)
		int tmp20 = ascent;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(146)
		int tmp21 = descent;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(146)
		int tmp22 = lineGap;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(146)
		int tmp23 = width;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(146)
		int tmp24 = height;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(146)
		Array< ::Dynamic > tmp25 = baked;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(146)
		::kha::Blob tmp26 = pixels;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(146)
		::kha::KravurImage tmp27 = ::kha::KravurImage_obj::__new(tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(146)
		::kha::KravurImage image = tmp27;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(147)
		::kha::KravurImage tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::haxe::ds::IntMap tmp29 = this->images;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(147)
			int tmp30 = fontSize;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(147)
			::kha::KravurImage tmp31 = image;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(147)
			tmp29->set(tmp30,tmp31);
			HX_STACK_LINE(147)
			tmp28 = image;
		}
		HX_STACK_LINE(147)
		tmp28;
		HX_STACK_LINE(148)
		::kha::KravurImage tmp29 = image;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(148)
		return tmp29;
	}
	HX_STACK_LINE(150)
	::haxe::ds::IntMap tmp4 = this->images;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(150)
	int tmp5 = fontSize;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(150)
	::kha::KravurImage tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(150)
	::kha::KravurImage tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(150)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,_get,return )

Float Kravur_obj::height( int fontSize){
	HX_STACK_FRAME("kha.Kravur","height",0x9f26a612,"kha.Kravur.height","kha/Kravur.hx",153,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fontSize,"fontSize")
	HX_STACK_LINE(154)
	int tmp = fontSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	::kha::KravurImage tmp1 = this->_get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	Float tmp2 = tmp1->getHeight();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,height,return )

Float Kravur_obj::width( int fontSize,::String str){
	HX_STACK_FRAME("kha.Kravur","width",0xa8a6463b,"kha.Kravur.width","kha/Kravur.hx",157,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fontSize,"fontSize")
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(158)
	int tmp = fontSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	::kha::KravurImage tmp1 = this->_get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	::String tmp2 = str;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	Float tmp3 = tmp1->stringWidth(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Kravur_obj,width,return )

Float Kravur_obj::baseline( int fontSize){
	HX_STACK_FRAME("kha.Kravur","baseline",0x90869b70,"kha.Kravur.baseline","kha/Kravur.hx",161,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fontSize,"fontSize")
	HX_STACK_LINE(162)
	int tmp = fontSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	::kha::KravurImage tmp1 = this->_get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	Float tmp2 = tmp1->getBaselinePosition();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,baseline,return )

Void Kravur_obj::unload( ){
{
		HX_STACK_FRAME("kha.Kravur","unload",0x02673f2a,"kha.Kravur.unload","kha/Kravur.hx",165,0xdd7a3f9a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		this->blob = null();
		HX_STACK_LINE(167)
		this->images = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Kravur_obj,unload,(void))


Kravur_obj::Kravur_obj()
{
}

void Kravur_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Kravur);
	HX_MARK_MEMBER_NAME(blob,"blob");
	HX_MARK_MEMBER_NAME(images,"images");
	HX_MARK_END_CLASS();
}

void Kravur_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blob,"blob");
	HX_VISIT_MEMBER_NAME(images,"images");
}

Dynamic Kravur_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blob") ) { return blob; }
		if (HX_FIELD_EQ(inName,"_get") ) { return _get_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { return images; }
		if (HX_FIELD_EQ(inName,"height") ) { return height_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"baseline") ) { return baseline_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Kravur_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blob") ) { blob=inValue.Cast< ::kha::Blob >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { images=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Kravur_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Kravur_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blob","\x5d","\x3d","\x19","\x41"));
	outFields->push(HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Blob*/ ,(int)offsetof(Kravur_obj,blob),HX_HCSTRING("blob","\x5d","\x3d","\x19","\x41")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Kravur_obj,images),HX_HCSTRING("images","\xb8","\x50","\x92","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blob","\x5d","\x3d","\x19","\x41"),
	HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"),
	HX_HCSTRING("_get","\x97","\xc5","\x19","\x3f"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("baseline","\x85","\xdc","\x27","\x11"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Kravur_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Kravur_obj::__mClass,"__mClass");
};

#endif

hx::Class Kravur_obj::__mClass;

void Kravur_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Kravur","\xe3","\x2a","\x15","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Kravur_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Kravur_obj >;
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
