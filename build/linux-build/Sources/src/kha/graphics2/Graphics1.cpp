#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics1_Graphics
#include <kha/graphics1/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics1
#include <kha/graphics2/Graphics1.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
namespace kha{
namespace graphics2{

Void Graphics1_obj::__construct(::kha::Canvas canvas)
{
HX_STACK_FRAME("kha.graphics2.Graphics1","new",0x61c994e7,"kha.graphics2.Graphics1.new","kha/graphics2/Graphics1.hx",16,0x861a0aab)
HX_STACK_THIS(this)
HX_STACK_ARG(canvas,"canvas")
{
	HX_STACK_LINE(16)
	this->canvas = canvas;
}
;
	return null();
}

//Graphics1_obj::~Graphics1_obj() { }

Dynamic Graphics1_obj::__CreateEmpty() { return  new Graphics1_obj; }
hx::ObjectPtr< Graphics1_obj > Graphics1_obj::__new(::kha::Canvas canvas)
{  hx::ObjectPtr< Graphics1_obj > _result_ = new Graphics1_obj();
	_result_->__construct(canvas);
	return _result_;}

Dynamic Graphics1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics1_obj > _result_ = new Graphics1_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Graphics1_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::kha::graphics1::Graphics_obj)) return operator ::kha::graphics1::Graphics_obj *();
	return super::__ToInterface(inType);
}

Graphics1_obj::operator ::kha::graphics1::Graphics_obj *()
	{ return new ::kha::graphics1::Graphics_delegate_< Graphics1_obj >(this); }
Void Graphics1_obj::begin( ){
{
		HX_STACK_FRAME("kha.graphics2.Graphics1","begin",0xae2b1e70,"kha.graphics2.Graphics1.begin","kha/graphics2/Graphics1.hx",19,0x861a0aab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		::kha::Image tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		if ((tmp1)){
			HX_STACK_LINE(21)
			::kha::Canvas tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			int tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			::kha::Canvas tmp4 = this->canvas;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(21)
			int tmp5 = tmp4->get_height();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			::kha::Image tmp6 = ::kha::Image_obj::create(tmp3,tmp5,::kha::graphics4::TextureFormat_obj::RGBA32,::kha::graphics4::Usage_obj::ReadableUsage);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			this->texture = tmp6;
		}
		HX_STACK_LINE(23)
		::kha::Image tmp2 = this->texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		::haxe::io::Bytes tmp3 = tmp2->lock(null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		this->pixels = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics1_obj,begin,(void))

Void Graphics1_obj::end( ){
{
		HX_STACK_FRAME("kha.graphics2.Graphics1","end",0x61c2c862,"kha.graphics2.Graphics1.end","kha/graphics2/Graphics1.hx",26,0x861a0aab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::kha::Image tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		tmp->unlock();
		HX_STACK_LINE(28)
		::kha::Canvas tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		::kha::graphics2::Graphics tmp2 = tmp1->get_g2();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		tmp2->begin(null(),null());
		HX_STACK_LINE(29)
		::kha::Canvas tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::kha::graphics2::Graphics tmp4 = tmp3->get_g2();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		::kha::Image tmp5 = this->texture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		tmp4->drawImage(tmp5,(int)0,(int)0);
		HX_STACK_LINE(30)
		::kha::Canvas tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		::kha::graphics2::Graphics tmp7 = tmp6->get_g2();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		tmp7->end();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics1_obj,end,(void))

Void Graphics1_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("kha.graphics2.Graphics1","setPixel",0xf429a19d,"kha.graphics2.Graphics1.setPixel","kha/graphics2/Graphics1.hx",34,0x861a0aab)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(34)
		::haxe::io::Bytes tmp = this->pixels;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::haxe::io::Bytes _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(34)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::kha::Image tmp2 = this->texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		int tmp3 = tmp2->get_realWidth();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		int tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		int tmp5 = (tmp4 * (int)4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		int tmp6 = (x * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		int pos = tmp7;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			_this->b[pos] = tmp8;
		}
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			Array< unsigned char > tmp8 = _this->b;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			int tmp9 = (pos + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(34)
			int tmp10 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			tmp8[tmp9] = tmp10;
		}
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			Array< unsigned char > tmp8 = _this->b;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			int tmp9 = (pos + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(34)
			int tmp10 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			tmp8[tmp9] = tmp10;
		}
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			Array< unsigned char > tmp8 = _this->b;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			int tmp9 = (pos + (int)3);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(34)
			int tmp10 = hx::UShr(color,(int)24);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			tmp8[tmp9] = tmp10;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics1_obj,setPixel,(void))


Graphics1_obj::Graphics1_obj()
{
}

void Graphics1_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics1);
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_END_CLASS();
}

void Graphics1_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
}

Dynamic Graphics1_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"pixels") ) { return pixels; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics1_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::kha::Canvas >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::kha::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics1_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Graphics1_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Canvas*/ ,(int)offsetof(Graphics1_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(Graphics1_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Graphics1_obj,pixels),HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics1_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics1_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphics1_obj::__mClass;

void Graphics1_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.Graphics1","\x75","\x95","\x3d","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Graphics1_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics1_obj >;
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
} // end namespace graphics2
