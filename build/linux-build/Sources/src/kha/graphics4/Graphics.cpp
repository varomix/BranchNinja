#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_CubeMap
#include <kha/graphics4/CubeMap.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_MipMapFilter
#include <kha/graphics4/MipMapFilter.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineState
#include <kha/graphics4/PipelineState.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <kha/graphics4/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureAddressing
#include <kha/graphics4/TextureAddressing.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFilter
#include <kha/graphics4/TextureFilter.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#include <kha/graphics4/VertexBuffer.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif
#ifndef INCLUDED_kha_math_FastVector2
#include <kha/math/FastVector2.h>
#endif
#ifndef INCLUDED_kha_math_FastVector3
#include <kha/math/FastVector3.h>
#endif
#ifndef INCLUDED_kha_math_FastVector4
#include <kha/math/FastVector4.h>
#endif
namespace kha{
namespace graphics4{


static ::String sMemberFields[] = {
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("vsynced","\x70","\x5c","\x6c","\x1a"),
	HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("scissor","\x1c","\x28","\xe7","\x04"),
	HX_HCSTRING("disableScissor","\x14","\x73","\x66","\x02"),
	HX_HCSTRING("setVertexBuffer","\x46","\x82","\x5f","\x8f"),
	HX_HCSTRING("setVertexBuffers","\x6d","\x7b","\x32","\xe4"),
	HX_HCSTRING("setIndexBuffer","\x30","\xa1","\x64","\x9d"),
	HX_HCSTRING("setTexture","\x59","\xed","\xbf","\xf1"),
	HX_HCSTRING("setVideoTexture","\x62","\x04","\x93","\xd7"),
	HX_HCSTRING("setTextureParameters","\x63","\x39","\x4d","\x35"),
	HX_HCSTRING("createCubeMap","\x0b","\x25","\x13","\x75"),
	HX_HCSTRING("renderTargetsInvertedY","\xd8","\x54","\x7d","\x0d"),
	HX_HCSTRING("instancedRenderingAvailable","\xec","\xb3","\x0a","\xbc"),
	HX_HCSTRING("setPipeline","\xe4","\x84","\xe4","\x7b"),
	HX_HCSTRING("setBool","\xec","\xc4","\x9f","\x06"),
	HX_HCSTRING("setInt","\x6d","\x9a","\x67","\x6f"),
	HX_HCSTRING("setFloat","\x9a","\x2e","\xcb","\x10"),
	HX_HCSTRING("setFloat2","\x58","\x98","\xfd","\xa0"),
	HX_HCSTRING("setFloat3","\x59","\x98","\xfd","\xa0"),
	HX_HCSTRING("setFloat4","\x5a","\x98","\xfd","\xa0"),
	HX_HCSTRING("setFloats","\x99","\x98","\xfd","\xa0"),
	HX_HCSTRING("setVector2","\x8d","\x1e","\x7c","\x2d"),
	HX_HCSTRING("setVector3","\x8e","\x1e","\x7c","\x2d"),
	HX_HCSTRING("setVector4","\x8f","\x1e","\x7c","\x2d"),
	HX_HCSTRING("setMatrix","\x83","\xab","\x6f","\x1b"),
	HX_HCSTRING("drawIndexedVertices","\x66","\xb1","\x0b","\xa1"),
	HX_HCSTRING("drawIndexedVerticesInstanced","\xe9","\x54","\x0f","\x6d"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.Graphics","\xfa","\xae","\xde","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics4
