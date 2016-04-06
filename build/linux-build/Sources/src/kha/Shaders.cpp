#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_Shaders
#include <kha/Shaders.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <kha/graphics4/VertexShader.h>
#endif
namespace kha{

Void Shaders_obj::__construct()
{
	return null();
}

//Shaders_obj::~Shaders_obj() { }

Dynamic Shaders_obj::__CreateEmpty() { return  new Shaders_obj; }
hx::ObjectPtr< Shaders_obj > Shaders_obj::__new()
{  hx::ObjectPtr< Shaders_obj > _result_ = new Shaders_obj();
	_result_->__construct();
	return _result_;}

Dynamic Shaders_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shaders_obj > _result_ = new Shaders_obj();
	_result_->__construct();
	return _result_;}

::String Shaders_obj::painter_colored_fragData;

::kha::graphics4::FragmentShader Shaders_obj::painter_colored_frag;

::String Shaders_obj::painter_colored_vertData;

::kha::graphics4::VertexShader Shaders_obj::painter_colored_vert;

::String Shaders_obj::painter_image_fragData;

::kha::graphics4::FragmentShader Shaders_obj::painter_image_frag;

::String Shaders_obj::painter_image_vertData;

::kha::graphics4::VertexShader Shaders_obj::painter_image_vert;

::String Shaders_obj::painter_text_fragData;

::kha::graphics4::FragmentShader Shaders_obj::painter_text_frag;

::String Shaders_obj::painter_text_vertData;

::kha::graphics4::VertexShader Shaders_obj::painter_text_vert;

::String Shaders_obj::painter_video_fragData;

::kha::graphics4::FragmentShader Shaders_obj::painter_video_frag;

::String Shaders_obj::painter_video_vertData;

::kha::graphics4::VertexShader Shaders_obj::painter_video_vert;

Void Shaders_obj::init( ){
{
		HX_STACK_FRAME("kha.Shaders","init",0xd438187a,"kha.Shaders.init","kha/internal/ShadersBuilder.hx",47,0xb403e06a)
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(47)
					{
						HX_STACK_LINE(66)
						{
							HX_STACK_LINE(47)
							{
								HX_STACK_LINE(68)
								{
									HX_STACK_LINE(69)
									Dynamic tmp = ::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),HX_HCSTRING("painter_colored_fragData","\x8d","\xd9","\x25","\x8d"));		HX_STACK_VAR(tmp,"tmp");
									HX_STACK_LINE(69)
									::String data = tmp;		HX_STACK_VAR(data,"data");
									HX_STACK_LINE(70)
									::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
									HX_STACK_LINE(70)
									Dynamic tmp2 = ::haxe::Unserializer_obj::run(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
									HX_STACK_LINE(70)
									::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
									HX_STACK_LINE(71)
									::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
									HX_STACK_LINE(71)
									::kha::Blob tmp4 = ::kha::Blob_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
									HX_STACK_LINE(71)
									::kha::graphics4::FragmentShader tmp5 = ::kha::graphics4::FragmentShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(71)
									::kha::Shaders_obj::painter_colored_frag = tmp5;
								}
								HX_STACK_LINE(49)
								{
									HX_STACK_LINE(50)
									Dynamic tmp = ::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),HX_HCSTRING("painter_colored_vertData","\x8c","\xa0","\xfc","\x4b"));		HX_STACK_VAR(tmp,"tmp");
									HX_STACK_LINE(50)
									::String data = tmp;		HX_STACK_VAR(data,"data");
									HX_STACK_LINE(51)
									::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
									HX_STACK_LINE(51)
									Dynamic tmp2 = ::haxe::Unserializer_obj::run(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
									HX_STACK_LINE(51)
									::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
									HX_STACK_LINE(52)
									::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
									HX_STACK_LINE(52)
									::kha::Blob tmp4 = ::kha::Blob_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
									HX_STACK_LINE(52)
									::kha::graphics4::VertexShader tmp5 = ::kha::graphics4::VertexShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(52)
									::kha::Shaders_obj::painter_colored_vert = tmp5;
								}
							}
							HX_STACK_LINE(68)
							{
								HX_STACK_LINE(69)
								Dynamic tmp = ::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),HX_HCSTRING("painter_image_fragData","\x94","\x7a","\x37","\xe2"));		HX_STACK_VAR(tmp,"tmp");
								HX_STACK_LINE(69)
								::String data = tmp;		HX_STACK_VAR(data,"data");
								HX_STACK_LINE(70)
								::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(70)
								Dynamic tmp2 = ::haxe::Unserializer_obj::run(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(70)
								::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
								HX_STACK_LINE(71)
								::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(71)
								::kha::Blob tmp4 = ::kha::Blob_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(71)
								::kha::graphics4::FragmentShader tmp5 = ::kha::graphics4::FragmentShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(71)
								::kha::Shaders_obj::painter_image_frag = tmp5;
							}
						}
						HX_STACK_LINE(49)
						{
							HX_STACK_LINE(50)
							Dynamic tmp = ::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),HX_HCSTRING("painter_image_vertData","\x93","\x41","\x0e","\xa1"));		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(50)
							::String data = tmp;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(51)
							::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(51)
							Dynamic tmp2 = ::haxe::Unserializer_obj::run(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(51)
							::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
							HX_STACK_LINE(52)
							::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(52)
							::kha::Blob tmp4 = ::kha::Blob_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(52)
							::kha::graphics4::VertexShader tmp5 = ::kha::graphics4::VertexShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(52)
							::kha::Shaders_obj::painter_image_vert = tmp5;
						}
					}
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(69)
						Dynamic tmp = ::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),HX_HCSTRING("painter_text_fragData","\x9a","\xea","\x65","\xf3"));		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(69)
						::String data = tmp;		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(70)
						::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(70)
						Dynamic tmp2 = ::haxe::Unserializer_obj::run(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(70)
						::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
						HX_STACK_LINE(71)
						::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(71)
						::kha::Blob tmp4 = ::kha::Blob_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(71)
						::kha::graphics4::FragmentShader tmp5 = ::kha::graphics4::FragmentShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(71)
						::kha::Shaders_obj::painter_text_frag = tmp5;
					}
				}
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(50)
					Dynamic tmp = ::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),HX_HCSTRING("painter_text_vertData","\x99","\xb1","\x3c","\xb2"));		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(50)
					::String data = tmp;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(51)
					::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(51)
					Dynamic tmp2 = ::haxe::Unserializer_obj::run(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(51)
					::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
					HX_STACK_LINE(52)
					::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(52)
					::kha::Blob tmp4 = ::kha::Blob_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(52)
					::kha::graphics4::VertexShader tmp5 = ::kha::graphics4::VertexShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(52)
					::kha::Shaders_obj::painter_text_vert = tmp5;
				}
			}
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(69)
				Dynamic tmp = ::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),HX_HCSTRING("painter_video_fragData","\x74","\xe1","\x6c","\xf4"));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(69)
				::String data = tmp;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(70)
				::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(70)
				Dynamic tmp2 = ::haxe::Unserializer_obj::run(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(70)
				::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(71)
				::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				::kha::Blob tmp4 = ::kha::Blob_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				::kha::graphics4::FragmentShader tmp5 = ::kha::graphics4::FragmentShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(71)
				::kha::Shaders_obj::painter_video_frag = tmp5;
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(50)
			Dynamic tmp = ::Reflect_obj::field(hx::ClassOf< ::kha::Shaders >(),HX_HCSTRING("painter_video_vertData","\x73","\xa8","\x43","\xb3"));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(50)
			::String data = tmp;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(51)
			::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			Dynamic tmp2 = ::haxe::Unserializer_obj::run(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(52)
			::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			::kha::Blob tmp4 = ::kha::Blob_obj::fromBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			::kha::graphics4::VertexShader tmp5 = ::kha::graphics4::VertexShader_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			::kha::Shaders_obj::painter_video_vert = tmp5;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shaders_obj,init,(void))


Shaders_obj::Shaders_obj()
{
}

bool Shaders_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"painter_text_frag") ) { outValue = painter_text_frag; return true;  }
		if (HX_FIELD_EQ(inName,"painter_text_vert") ) { outValue = painter_text_vert; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"painter_image_frag") ) { outValue = painter_image_frag; return true;  }
		if (HX_FIELD_EQ(inName,"painter_image_vert") ) { outValue = painter_image_vert; return true;  }
		if (HX_FIELD_EQ(inName,"painter_video_frag") ) { outValue = painter_video_frag; return true;  }
		if (HX_FIELD_EQ(inName,"painter_video_vert") ) { outValue = painter_video_vert; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"painter_colored_frag") ) { outValue = painter_colored_frag; return true;  }
		if (HX_FIELD_EQ(inName,"painter_colored_vert") ) { outValue = painter_colored_vert; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"painter_text_fragData") ) { outValue = painter_text_fragData; return true;  }
		if (HX_FIELD_EQ(inName,"painter_text_vertData") ) { outValue = painter_text_vertData; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"painter_image_fragData") ) { outValue = painter_image_fragData; return true;  }
		if (HX_FIELD_EQ(inName,"painter_image_vertData") ) { outValue = painter_image_vertData; return true;  }
		if (HX_FIELD_EQ(inName,"painter_video_fragData") ) { outValue = painter_video_fragData; return true;  }
		if (HX_FIELD_EQ(inName,"painter_video_vertData") ) { outValue = painter_video_vertData; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"painter_colored_fragData") ) { outValue = painter_colored_fragData; return true;  }
		if (HX_FIELD_EQ(inName,"painter_colored_vertData") ) { outValue = painter_colored_vertData; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Shaders_obj::painter_colored_fragData,HX_HCSTRING("painter_colored_fragData","\x8d","\xd9","\x25","\x8d")},
	{hx::fsObject /*::kha::graphics4::FragmentShader*/ ,(void *) &Shaders_obj::painter_colored_frag,HX_HCSTRING("painter_colored_frag","\xc3","\xb9","\xf5","\xd8")},
	{hx::fsString,(void *) &Shaders_obj::painter_colored_vertData,HX_HCSTRING("painter_colored_vertData","\x8c","\xa0","\xfc","\x4b")},
	{hx::fsObject /*::kha::graphics4::VertexShader*/ ,(void *) &Shaders_obj::painter_colored_vert,HX_HCSTRING("painter_colored_vert","\x42","\x55","\x7f","\xe3")},
	{hx::fsString,(void *) &Shaders_obj::painter_image_fragData,HX_HCSTRING("painter_image_fragData","\x94","\x7a","\x37","\xe2")},
	{hx::fsObject /*::kha::graphics4::FragmentShader*/ ,(void *) &Shaders_obj::painter_image_frag,HX_HCSTRING("painter_image_frag","\x4a","\x8b","\xb2","\xa5")},
	{hx::fsString,(void *) &Shaders_obj::painter_image_vertData,HX_HCSTRING("painter_image_vertData","\x93","\x41","\x0e","\xa1")},
	{hx::fsObject /*::kha::graphics4::VertexShader*/ ,(void *) &Shaders_obj::painter_image_vert,HX_HCSTRING("painter_image_vert","\xc9","\x26","\x3c","\xb0")},
	{hx::fsString,(void *) &Shaders_obj::painter_text_fragData,HX_HCSTRING("painter_text_fragData","\x9a","\xea","\x65","\xf3")},
	{hx::fsObject /*::kha::graphics4::FragmentShader*/ ,(void *) &Shaders_obj::painter_text_frag,HX_HCSTRING("painter_text_frag","\x50","\x00","\x9b","\xcc")},
	{hx::fsString,(void *) &Shaders_obj::painter_text_vertData,HX_HCSTRING("painter_text_vertData","\x99","\xb1","\x3c","\xb2")},
	{hx::fsObject /*::kha::graphics4::VertexShader*/ ,(void *) &Shaders_obj::painter_text_vert,HX_HCSTRING("painter_text_vert","\xcf","\x9b","\x24","\xd7")},
	{hx::fsString,(void *) &Shaders_obj::painter_video_fragData,HX_HCSTRING("painter_video_fragData","\x74","\xe1","\x6c","\xf4")},
	{hx::fsObject /*::kha::graphics4::FragmentShader*/ ,(void *) &Shaders_obj::painter_video_frag,HX_HCSTRING("painter_video_frag","\x2a","\x02","\xb3","\x75")},
	{hx::fsString,(void *) &Shaders_obj::painter_video_vertData,HX_HCSTRING("painter_video_vertData","\x73","\xa8","\x43","\xb3")},
	{hx::fsObject /*::kha::graphics4::VertexShader*/ ,(void *) &Shaders_obj::painter_video_vert,HX_HCSTRING("painter_video_vert","\xa9","\x9d","\x3c","\x80")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shaders_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_colored_fragData,"painter_colored_fragData");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_colored_frag,"painter_colored_frag");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_colored_vertData,"painter_colored_vertData");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_colored_vert,"painter_colored_vert");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_image_fragData,"painter_image_fragData");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_image_frag,"painter_image_frag");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_image_vertData,"painter_image_vertData");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_image_vert,"painter_image_vert");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_text_fragData,"painter_text_fragData");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_text_frag,"painter_text_frag");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_text_vertData,"painter_text_vertData");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_text_vert,"painter_text_vert");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_video_fragData,"painter_video_fragData");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_video_frag,"painter_video_frag");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_video_vertData,"painter_video_vertData");
	HX_MARK_MEMBER_NAME(Shaders_obj::painter_video_vert,"painter_video_vert");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shaders_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_colored_fragData,"painter_colored_fragData");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_colored_frag,"painter_colored_frag");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_colored_vertData,"painter_colored_vertData");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_colored_vert,"painter_colored_vert");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_image_fragData,"painter_image_fragData");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_image_frag,"painter_image_frag");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_image_vertData,"painter_image_vertData");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_image_vert,"painter_image_vert");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_text_fragData,"painter_text_fragData");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_text_frag,"painter_text_frag");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_text_vertData,"painter_text_vertData");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_text_vert,"painter_text_vert");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_video_fragData,"painter_video_fragData");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_video_frag,"painter_video_frag");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_video_vertData,"painter_video_vertData");
	HX_VISIT_MEMBER_NAME(Shaders_obj::painter_video_vert,"painter_video_vert");
};

#endif

hx::Class Shaders_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("painter_colored_fragData","\x8d","\xd9","\x25","\x8d"),
	HX_HCSTRING("painter_colored_frag","\xc3","\xb9","\xf5","\xd8"),
	HX_HCSTRING("painter_colored_vertData","\x8c","\xa0","\xfc","\x4b"),
	HX_HCSTRING("painter_colored_vert","\x42","\x55","\x7f","\xe3"),
	HX_HCSTRING("painter_image_fragData","\x94","\x7a","\x37","\xe2"),
	HX_HCSTRING("painter_image_frag","\x4a","\x8b","\xb2","\xa5"),
	HX_HCSTRING("painter_image_vertData","\x93","\x41","\x0e","\xa1"),
	HX_HCSTRING("painter_image_vert","\xc9","\x26","\x3c","\xb0"),
	HX_HCSTRING("painter_text_fragData","\x9a","\xea","\x65","\xf3"),
	HX_HCSTRING("painter_text_frag","\x50","\x00","\x9b","\xcc"),
	HX_HCSTRING("painter_text_vertData","\x99","\xb1","\x3c","\xb2"),
	HX_HCSTRING("painter_text_vert","\xcf","\x9b","\x24","\xd7"),
	HX_HCSTRING("painter_video_fragData","\x74","\xe1","\x6c","\xf4"),
	HX_HCSTRING("painter_video_frag","\x2a","\x02","\xb3","\x75"),
	HX_HCSTRING("painter_video_vertData","\x73","\xa8","\x43","\xb3"),
	HX_HCSTRING("painter_video_vert","\xa9","\x9d","\x3c","\x80"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

void Shaders_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Shaders","\x44","\x7b","\x98","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Shaders_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Shaders_obj >;
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

void Shaders_obj::__boot()
{
	painter_colored_fragData= HX_HCSTRING("s171:I3ZlcnNpb24gMTEwCi8vIFVua25vd24gZXhlY3V0aW9uIG1vZGUgOAp2YXJ5aW5nIHZlYzQgZnJhZ21lbnRDb2xvcjsKCgp2b2lkIG1haW4oKQp7CglnbF9GcmFnQ29sb3IgPSBmcmFnbWVudENvbG9yOwoJcmV0dXJuOwp9Cgo","\x4d","\x85","\x25","\xba");
	painter_colored_frag= null();
	painter_colored_vertData= HX_HCSTRING("s391:I3ZlcnNpb24gMTEwCnVuaWZvcm0gbWF0NCBwcm9qZWN0aW9uTWF0cml4OwphdHRyaWJ1dGUgdmVjMyB2ZXJ0ZXhQb3NpdGlvbjsKdmFyeWluZyB2ZWM0IGZyYWdtZW50Q29sb3I7CmF0dHJpYnV0ZSB2ZWM0IHZlcnRleENvbG9yOwoKCnZvaWQgbWFpbigpCnsKCWdsX1Bvc2l0aW9uID0gKHByb2plY3Rpb25NYXRyaXggKiB2ZWM0KHZlcnRleFBvc2l0aW9uWzBdLCB2ZXJ0ZXhQb3NpdGlvblsxXSwgdmVydGV4UG9zaXRpb25bMl0sIDEuMCkpOwoJZnJhZ21lbnRDb2xvciA9IHZlcnRleENvbG9yOwoJcmV0dXJuOwp9Cgo","\xee","\xe1","\x0a","\x00");
	painter_colored_vert= null();
	painter_image_fragData= HX_HCSTRING("s623:I3ZlcnNpb24gMTEwCi8vIFVua25vd24gZXhlY3V0aW9uIG1vZGUgOAp1bmlmb3JtIHNhbXBsZXIyRCB0ZXg7CnZhcnlpbmcgdmVjMiB0ZXhDb29yZDsKdmFyeWluZyB2ZWM0IGNvbG9yOwoKCnZvaWQgbWFpbigpCnsKCXZlYzQgdGV4Y29sb3JfOTsKCXRleGNvbG9yXzkgPSAodGV4dHVyZTJEKHRleCwgdGV4Q29vcmQpICogY29sb3IpOwoJdGV4Y29sb3JfOSA9IHZlYzQoKHZlYzModGV4Y29sb3JfOVswXSwgdGV4Y29sb3JfOVsxXSwgdGV4Y29sb3JfOVsyXSkgKiBjb2xvclszXSlbMF0sICh2ZWMzKHRleGNvbG9yXzlbMF0sIHRleGNvbG9yXzlbMV0sIHRleGNvbG9yXzlbMl0pICogY29sb3JbM10pWzFdLCAodmVjMyh0ZXhjb2xvcl85WzBdLCB0ZXhjb2xvcl85WzFdLCB0ZXhjb2xvcl85WzJdKSAqIGNvbG9yWzNdKVsyXSwgdGV4Y29sb3JfOVszXSk7CglnbF9GcmFnQ29sb3IgPSB0ZXhjb2xvcl85OwoJcmV0dXJuOwp9Cgo","\xa0","\x90","\xa7","\x05");
	painter_image_frag= null();
	painter_image_vertData= HX_HCSTRING("s471:I3ZlcnNpb24gMTEwCnVuaWZvcm0gbWF0NCBwcm9qZWN0aW9uTWF0cml4OwphdHRyaWJ1dGUgdmVjMyB2ZXJ0ZXhQb3NpdGlvbjsKdmFyeWluZyB2ZWMyIHRleENvb3JkOwphdHRyaWJ1dGUgdmVjMiB0ZXhQb3NpdGlvbjsKdmFyeWluZyB2ZWM0IGNvbG9yOwphdHRyaWJ1dGUgdmVjNCB2ZXJ0ZXhDb2xvcjsKCgp2b2lkIG1haW4oKQp7CglnbF9Qb3NpdGlvbiA9IChwcm9qZWN0aW9uTWF0cml4ICogdmVjNCh2ZXJ0ZXhQb3NpdGlvblswXSwgdmVydGV4UG9zaXRpb25bMV0sIHZlcnRleFBvc2l0aW9uWzJdLCAxLjApKTsKCXRleENvb3JkID0gdGV4UG9zaXRpb247Cgljb2xvciA9IHZlcnRleENvbG9yOwoJcmV0dXJuOwp9Cgo","\x0a","\x70","\x27","\x52");
	painter_image_vert= null();
	painter_text_fragData= HX_HCSTRING("s539:I3ZlcnNpb24gMTEwCi8vIFVua25vd24gZXhlY3V0aW9uIG1vZGUgOAp2YXJ5aW5nIHZlYzQgZnJhZ21lbnRDb2xvcjsKdW5pZm9ybSBzYW1wbGVyMkQgdGV4Owp2YXJ5aW5nIHZlYzIgdGV4Q29vcmQ7CgoKdm9pZCBtYWluKCkKewoJZ2xfRnJhZ0NvbG9yID0gdmVjNCh2ZWMzKGZyYWdtZW50Q29sb3JbMF0sIGZyYWdtZW50Q29sb3JbMV0sIGZyYWdtZW50Q29sb3JbMl0pWzBdLCB2ZWMzKGZyYWdtZW50Q29sb3JbMF0sIGZyYWdtZW50Q29sb3JbMV0sIGZyYWdtZW50Q29sb3JbMl0pWzFdLCB2ZWMzKGZyYWdtZW50Q29sb3JbMF0sIGZyYWdtZW50Q29sb3JbMV0sIGZyYWdtZW50Q29sb3JbMl0pWzJdLCAodGV4dHVyZTJEKHRleCwgdGV4Q29vcmQpWzBdICogZnJhZ21lbnRDb2xvclszXSkpOwoJcmV0dXJuOwp9Cgo","\x92","\xe9","\x65","\x78");
	painter_text_frag= null();
	painter_text_vertData= HX_HCSTRING("s492:I3ZlcnNpb24gMTEwCnVuaWZvcm0gbWF0NCBwcm9qZWN0aW9uTWF0cml4OwphdHRyaWJ1dGUgdmVjMyB2ZXJ0ZXhQb3NpdGlvbjsKdmFyeWluZyB2ZWMyIHRleENvb3JkOwphdHRyaWJ1dGUgdmVjMiB0ZXhQb3NpdGlvbjsKdmFyeWluZyB2ZWM0IGZyYWdtZW50Q29sb3I7CmF0dHJpYnV0ZSB2ZWM0IHZlcnRleENvbG9yOwoKCnZvaWQgbWFpbigpCnsKCWdsX1Bvc2l0aW9uID0gKHByb2plY3Rpb25NYXRyaXggKiB2ZWM0KHZlcnRleFBvc2l0aW9uWzBdLCB2ZXJ0ZXhQb3NpdGlvblsxXSwgdmVydGV4UG9zaXRpb25bMl0sIDEuMCkpOwoJdGV4Q29vcmQgPSB0ZXhQb3NpdGlvbjsKCWZyYWdtZW50Q29sb3IgPSB2ZXJ0ZXhDb2xvcjsKCXJldHVybjsKfQoK","\x1c","\x5f","\x3e","\x78");
	painter_text_vert= null();
	painter_video_fragData= HX_HCSTRING("s623:I3ZlcnNpb24gMTEwCi8vIFVua25vd24gZXhlY3V0aW9uIG1vZGUgOAp1bmlmb3JtIHNhbXBsZXIyRCB0ZXg7CnZhcnlpbmcgdmVjMiB0ZXhDb29yZDsKdmFyeWluZyB2ZWM0IGNvbG9yOwoKCnZvaWQgbWFpbigpCnsKCXZlYzQgdGV4Y29sb3JfOTsKCXRleGNvbG9yXzkgPSAodGV4dHVyZTJEKHRleCwgdGV4Q29vcmQpICogY29sb3IpOwoJdGV4Y29sb3JfOSA9IHZlYzQoKHZlYzModGV4Y29sb3JfOVswXSwgdGV4Y29sb3JfOVsxXSwgdGV4Y29sb3JfOVsyXSkgKiBjb2xvclszXSlbMF0sICh2ZWMzKHRleGNvbG9yXzlbMF0sIHRleGNvbG9yXzlbMV0sIHRleGNvbG9yXzlbMl0pICogY29sb3JbM10pWzFdLCAodmVjMyh0ZXhjb2xvcl85WzBdLCB0ZXhjb2xvcl85WzFdLCB0ZXhjb2xvcl85WzJdKSAqIGNvbG9yWzNdKVsyXSwgdGV4Y29sb3JfOVszXSk7CglnbF9GcmFnQ29sb3IgPSB0ZXhjb2xvcl85OwoJcmV0dXJuOwp9Cgo","\xa0","\x90","\xa7","\x05");
	painter_video_frag= null();
	painter_video_vertData= HX_HCSTRING("s471:I3ZlcnNpb24gMTEwCnVuaWZvcm0gbWF0NCBwcm9qZWN0aW9uTWF0cml4OwphdHRyaWJ1dGUgdmVjMyB2ZXJ0ZXhQb3NpdGlvbjsKdmFyeWluZyB2ZWMyIHRleENvb3JkOwphdHRyaWJ1dGUgdmVjMiB0ZXhQb3NpdGlvbjsKdmFyeWluZyB2ZWM0IGNvbG9yOwphdHRyaWJ1dGUgdmVjNCB2ZXJ0ZXhDb2xvcjsKCgp2b2lkIG1haW4oKQp7CglnbF9Qb3NpdGlvbiA9IChwcm9qZWN0aW9uTWF0cml4ICogdmVjNCh2ZXJ0ZXhQb3NpdGlvblswXSwgdmVydGV4UG9zaXRpb25bMV0sIHZlcnRleFBvc2l0aW9uWzJdLCAxLjApKTsKCXRleENvb3JkID0gdGV4UG9zaXRpb247Cgljb2xvciA9IHZlcnRleENvbG9yOwoJcmV0dXJuOwp9Cgo","\x0a","\x70","\x27","\x52");
	painter_video_vert= null();
}

} // end namespace kha
