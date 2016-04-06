#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_AlignedQuad
#include <kha/AlignedQuad.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_KravurImage
#include <kha/KravurImage.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha__SuperString_SuperString_Impl_
#include <kha/_SuperString/SuperString_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_bakedchar
#include <kha/graphics2/truetype/Stbtt_bakedchar.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
namespace kha{

Void KravurImage_obj::__construct(int size,int ascent,int descent,int lineGap,int width,int height,Array< ::Dynamic > chars,::kha::Blob pixels)
{
HX_STACK_FRAME("kha.KravurImage","new",0x4fe7ca6a,"kha.KravurImage.new","kha/Kravur.hx",36,0xdd7a3f9a)
HX_STACK_THIS(this)
HX_STACK_ARG(size,"size")
HX_STACK_ARG(ascent,"ascent")
HX_STACK_ARG(descent,"descent")
HX_STACK_ARG(lineGap,"lineGap")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(chars,"chars")
HX_STACK_ARG(pixels,"pixels")
{
	HX_STACK_LINE(37)
	this->mySize = size;
	HX_STACK_LINE(38)
	this->width = width;
	HX_STACK_LINE(39)
	this->height = height;
	HX_STACK_LINE(40)
	this->chars = chars;
	HX_STACK_LINE(41)
	this->baseline = ascent;
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(42)
			int tmp1 = chars->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			if ((tmp3)){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			::kha::graphics2::truetype::Stbtt_bakedchar tmp5 = chars->__unsafe_get(tmp4).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			::kha::graphics2::truetype::Stbtt_bakedchar _char = tmp5;		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(42)
			++(_g);
			HX_STACK_LINE(43)
			Float tmp6 = this->baseline;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(43)
			hx::AddEq(_char->yoff,tmp6);
		}
	}
	HX_STACK_LINE(45)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	::kha::Image tmp2 = ::kha::Image_obj::create(tmp,tmp1,::kha::graphics4::TextureFormat_obj::L8,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	this->texture = tmp2;
	HX_STACK_LINE(46)
	::kha::Image tmp3 = this->texture;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	::haxe::io::Bytes tmp4 = tmp3->lock(null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	::haxe::io::Bytes bytes = tmp4;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(47)
	int pos = (int)0;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		while((true)){
			HX_STACK_LINE(48)
			bool tmp5 = (_g < height);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			if ((tmp6)){
				HX_STACK_LINE(48)
				break;
			}
			HX_STACK_LINE(48)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			int y = tmp7;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(48)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				bool tmp8 = (_g1 < width);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(48)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(48)
				if ((tmp9)){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(48)
				int x = tmp10;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					int tmp11 = pos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(49)
					int tmp12 = pixels->readU8(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(49)
					int v = tmp12;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(49)
					int tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(49)
					bytes->b[pos] = tmp13;
				}
				HX_STACK_LINE(50)
				++(pos);
			}
		}
	}
	HX_STACK_LINE(52)
	::kha::Image tmp5 = this->texture;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	tmp5->unlock();
}
;
	return null();
}

//KravurImage_obj::~KravurImage_obj() { }

Dynamic KravurImage_obj::__CreateEmpty() { return  new KravurImage_obj; }
hx::ObjectPtr< KravurImage_obj > KravurImage_obj::__new(int size,int ascent,int descent,int lineGap,int width,int height,Array< ::Dynamic > chars,::kha::Blob pixels)
{  hx::ObjectPtr< KravurImage_obj > _result_ = new KravurImage_obj();
	_result_->__construct(size,ascent,descent,lineGap,width,height,chars,pixels);
	return _result_;}

Dynamic KravurImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KravurImage_obj > _result_ = new KravurImage_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

::kha::Image KravurImage_obj::getTexture( ){
	HX_STACK_FRAME("kha.KravurImage","getTexture",0x867a0a1b,"kha.KravurImage.getTexture","kha/Kravur.hx",55,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::kha::Image tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(KravurImage_obj,getTexture,return )

::kha::AlignedQuad KravurImage_obj::getBakedQuad( int char_index,Float xpos,Float ypos){
	HX_STACK_FRAME("kha.KravurImage","getBakedQuad",0xeb5cfcd2,"kha.KravurImage.getBakedQuad","kha/Kravur.hx",59,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(char_index,"char_index")
	HX_STACK_ARG(xpos,"xpos")
	HX_STACK_ARG(ypos,"ypos")
	HX_STACK_LINE(60)
	int tmp = char_index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Array< ::Dynamic > tmp1 = this->chars;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	bool tmp3 = (tmp >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	if ((tmp3)){
		HX_STACK_LINE(60)
		return null();
	}
	HX_STACK_LINE(61)
	int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	Float ipw = tmp5;		HX_STACK_VAR(ipw,"ipw");
	HX_STACK_LINE(62)
	int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	Float tmp7 = (Float(((Float)1.0)) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	Float iph = tmp7;		HX_STACK_VAR(iph,"iph");
	HX_STACK_LINE(63)
	Array< ::Dynamic > tmp8 = this->chars;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(63)
	int tmp9 = char_index;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(63)
	::kha::graphics2::truetype::Stbtt_bakedchar tmp10 = tmp8->__unsafe_get(tmp9).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(63)
	::kha::graphics2::truetype::Stbtt_bakedchar b = tmp10;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(64)
	bool tmp11 = (b == null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(64)
	if ((tmp11)){
		HX_STACK_LINE(64)
		return null();
	}
	HX_STACK_LINE(65)
	Float tmp12 = (xpos + b->xoff);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(65)
	int tmp13 = ::Math_obj::round(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(65)
	int round_x = tmp13;		HX_STACK_VAR(round_x,"round_x");
	HX_STACK_LINE(66)
	Float tmp14 = (ypos + b->yoff);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(66)
	int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(66)
	int round_y = tmp15;		HX_STACK_VAR(round_y,"round_y");
	HX_STACK_LINE(68)
	::kha::AlignedQuad q = ::kha::AlignedQuad_obj::__new();		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(69)
	q->x0 = round_x;
	HX_STACK_LINE(70)
	q->y0 = round_y;
	HX_STACK_LINE(71)
	int tmp16 = (round_x + b->x1);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(71)
	int tmp17 = b->x0;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(71)
	int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(71)
	q->x1 = tmp18;
	HX_STACK_LINE(72)
	int tmp19 = (round_y + b->y1);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(72)
	int tmp20 = b->y0;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(72)
	int tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(72)
	q->y1 = tmp21;
	HX_STACK_LINE(74)
	Float tmp22 = (b->x0 * ipw);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(74)
	q->s0 = tmp22;
	HX_STACK_LINE(75)
	Float tmp23 = (b->y0 * iph);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(75)
	q->t0 = tmp23;
	HX_STACK_LINE(76)
	Float tmp24 = (b->x1 * ipw);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(76)
	q->s1 = tmp24;
	HX_STACK_LINE(77)
	Float tmp25 = (b->y1 * iph);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(77)
	q->t1 = tmp25;
	HX_STACK_LINE(79)
	q->xadvance = b->xadvance;
	HX_STACK_LINE(81)
	::kha::AlignedQuad tmp26 = q;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(81)
	return tmp26;
}


HX_DEFINE_DYNAMIC_FUNC3(KravurImage_obj,getBakedQuad,return )

Float KravurImage_obj::getCharWidth( int charIndex){
	HX_STACK_FRAME("kha.KravurImage","getCharWidth",0x75175090,"kha.KravurImage.getCharWidth","kha/Kravur.hx",84,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(85)
	bool tmp = (charIndex < (int)32);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	if ((tmp)){
		HX_STACK_LINE(85)
		return (int)0;
	}
	HX_STACK_LINE(86)
	int tmp1 = (charIndex - (int)32);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	Array< ::Dynamic > tmp2 = this->chars;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	bool tmp4 = (tmp1 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	if ((tmp4)){
		HX_STACK_LINE(86)
		return (int)0;
	}
	HX_STACK_LINE(87)
	Array< ::Dynamic > tmp5 = this->chars;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(87)
	int tmp6 = (charIndex - (int)32);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(87)
	::kha::graphics2::truetype::Stbtt_bakedchar tmp7 = tmp5->__unsafe_get(tmp6).StaticCast< ::kha::graphics2::truetype::Stbtt_bakedchar >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(87)
	Float tmp8 = tmp7->xadvance;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(87)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(KravurImage_obj,getCharWidth,return )

Float KravurImage_obj::getHeight( ){
	HX_STACK_FRAME("kha.KravurImage","getHeight",0xd444aea7,"kha.KravurImage.getHeight","kha/Kravur.hx",90,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	Float tmp = this->mySize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(KravurImage_obj,getHeight,return )

Float KravurImage_obj::stringWidth( ::String string){
	HX_STACK_FRAME("kha.KravurImage","stringWidth",0x6df17b7f,"kha.KravurImage.stringWidth","kha/Kravur.hx",94,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(string,"string")
	HX_STACK_LINE(95)
	::String str = string;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(96)
	Float width = (int)0;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		int tmp1 = ::kha::_SuperString::SuperString_Impl__obj::get_length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		while((true)){
			HX_STACK_LINE(97)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			if ((tmp3)){
				HX_STACK_LINE(97)
				break;
			}
			HX_STACK_LINE(97)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			int c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(98)
			::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			int tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			int tmp7 = ::kha::_SuperString::SuperString_Impl__obj::charCodeAt(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			Float tmp8 = this->getCharWidth(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			hx::AddEq(width,tmp8);
		}
	}
	HX_STACK_LINE(100)
	Float tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(KravurImage_obj,stringWidth,return )

Float KravurImage_obj::getBaselinePosition( ){
	HX_STACK_FRAME("kha.KravurImage","getBaselinePosition",0x9ad05d0e,"kha.KravurImage.getBaselinePosition","kha/Kravur.hx",103,0xdd7a3f9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	Float tmp = this->baseline;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(KravurImage_obj,getBaselinePosition,return )


KravurImage_obj::KravurImage_obj()
{
}

void KravurImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KravurImage);
	HX_MARK_MEMBER_NAME(mySize,"mySize");
	HX_MARK_MEMBER_NAME(chars,"chars");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(baseline,"baseline");
	HX_MARK_END_CLASS();
}

void KravurImage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mySize,"mySize");
	HX_VISIT_MEMBER_NAME(chars,"chars");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(baseline,"baseline");
}

Dynamic KravurImage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"chars") ) { return chars; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mySize") ) { return mySize; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"baseline") ) { return baseline; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringWidth") ) { return stringWidth_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBakedQuad") ) { return getBakedQuad_dyn(); }
		if (HX_FIELD_EQ(inName,"getCharWidth") ) { return getCharWidth_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBaselinePosition") ) { return getBaselinePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KravurImage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"chars") ) { chars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mySize") ) { mySize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::kha::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"baseline") ) { baseline=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool KravurImage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void KravurImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mySize","\x4d","\x52","\x8f","\x77"));
	outFields->push(HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("baseline","\x85","\xdc","\x27","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(KravurImage_obj,mySize),HX_HCSTRING("mySize","\x4d","\x52","\x8f","\x77")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(KravurImage_obj,chars),HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(KravurImage_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsInt,(int)offsetof(KravurImage_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(KravurImage_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(KravurImage_obj,baseline),HX_HCSTRING("baseline","\x85","\xdc","\x27","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mySize","\x4d","\x52","\x8f","\x77"),
	HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("baseline","\x85","\xdc","\x27","\x11"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	HX_HCSTRING("getBakedQuad","\x1c","\x88","\x57","\x09"),
	HX_HCSTRING("getCharWidth","\xda","\xdb","\x11","\x93"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("stringWidth","\x75","\x67","\x65","\xd5"),
	HX_HCSTRING("getBaselinePosition","\x04","\x2f","\xa2","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KravurImage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KravurImage_obj::__mClass,"__mClass");
};

#endif

hx::Class KravurImage_obj::__mClass;

void KravurImage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.KravurImage","\x78","\x0d","\x8c","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &KravurImage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KravurImage_obj >;
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
