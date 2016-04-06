#include <hxcpp.h>

#include "float32array.h"
#ifndef INCLUDED_kha_Shaders
#include <kha/Shaders.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32Array
#include <kha/arrays/Float32Array.h>
#endif
#ifndef INCLUDED_kha_graphics4_BlendingOperation
#include <kha/graphics4/BlendingOperation.h>
#endif
#ifndef INCLUDED_kha_graphics4_ColoredShaderPainter
#include <kha/graphics4/ColoredShaderPainter.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#include <kha/graphics4/IndexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineState
#include <kha/graphics4/PipelineState.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <kha/graphics4/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics4_Usage
#include <kha/graphics4/Usage.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#include <kha/graphics4/VertexBuffer.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif
namespace kha{
namespace graphics4{

Void ColoredShaderPainter_obj::__construct(::kha::graphics4::Graphics g4)
{
HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","new",0x02e5b025,"kha.graphics4.ColoredShaderPainter.new","kha/graphics4/Graphics2.hx",258,0x0c1de808)
HX_STACK_THIS(this)
HX_STACK_ARG(g4,"g4")
{
	HX_STACK_LINE(281)
	this->destinationBlend = ::kha::graphics4::BlendingOperation_obj::Undefined;
	HX_STACK_LINE(280)
	this->sourceBlend = ::kha::graphics4::BlendingOperation_obj::Undefined;
	HX_STACK_LINE(277)
	this->myPipeline = null();
	HX_STACK_LINE(284)
	this->g = g4;
	HX_STACK_LINE(285)
	this->bufferIndex = (int)0;
	HX_STACK_LINE(286)
	this->triangleBufferIndex = (int)0;
	HX_STACK_LINE(287)
	::kha::graphics4::ColoredShaderPainter_obj::initShaders();
	HX_STACK_LINE(288)
	this->initBuffers();
	HX_STACK_LINE(289)
	::kha::graphics4::PipelineState tmp = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	::kha::graphics4::ConstantLocation tmp1 = tmp->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	this->projectionLocation = tmp1;
}
;
	return null();
}

//ColoredShaderPainter_obj::~ColoredShaderPainter_obj() { }

Dynamic ColoredShaderPainter_obj::__CreateEmpty() { return  new ColoredShaderPainter_obj; }
hx::ObjectPtr< ColoredShaderPainter_obj > ColoredShaderPainter_obj::__new(::kha::graphics4::Graphics g4)
{  hx::ObjectPtr< ColoredShaderPainter_obj > _result_ = new ColoredShaderPainter_obj();
	_result_->__construct(g4);
	return _result_;}

Dynamic ColoredShaderPainter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColoredShaderPainter_obj > _result_ = new ColoredShaderPainter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::kha::graphics4::PipelineState ColoredShaderPainter_obj::get_pipeline( ){
	HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","get_pipeline",0x7ba5eec6,"kha.graphics4.ColoredShaderPainter.get_pipeline","kha/graphics4/Graphics2.hx",292,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	::kha::graphics4::PipelineState tmp = this->myPipeline;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ColoredShaderPainter_obj,get_pipeline,return )

::kha::graphics4::PipelineState ColoredShaderPainter_obj::set_pipeline( ::kha::graphics4::PipelineState pipe){
	HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","set_pipeline",0x909f123a,"kha.graphics4.ColoredShaderPainter.set_pipeline","kha/graphics4/Graphics2.hx",296,0x0c1de808)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pipe,"pipe")
	HX_STACK_LINE(297)
	bool tmp = (pipe == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	if ((tmp)){
		HX_STACK_LINE(298)
		::kha::graphics4::PipelineState tmp1 = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		::kha::graphics4::ConstantLocation tmp2 = tmp1->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		this->projectionLocation = tmp2;
	}
	else{
		HX_STACK_LINE(301)
		::kha::graphics4::ConstantLocation tmp1 = pipe->getConstantLocation(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		this->projectionLocation = tmp1;
	}
	HX_STACK_LINE(303)
	::kha::graphics4::PipelineState tmp1 = this->myPipeline = pipe;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,set_pipeline,return )

Void ColoredShaderPainter_obj::setProjection( ::kha::math::FastMatrix4 projectionMatrix){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","setProjection",0x926aeed6,"kha.graphics4.ColoredShaderPainter.setProjection","kha/graphics4/Graphics2.hx",307,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(projectionMatrix,"projectionMatrix")
		HX_STACK_LINE(307)
		this->projectionMatrix = projectionMatrix;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,setProjection,(void))

Void ColoredShaderPainter_obj::initBuffers( ){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","initBuffers",0x83c9bf08,"kha.graphics4.ColoredShaderPainter.initBuffers","kha/graphics4/Graphics2.hx",328,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(329)
		int tmp = ::kha::graphics4::ColoredShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		::kha::graphics4::VertexStructure tmp2 = ::kha::graphics4::ColoredShaderPainter_obj::structure;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		::kha::graphics4::VertexBuffer tmp3 = ::kha::graphics4::VertexBuffer_obj::__new(tmp1,tmp2,::kha::graphics4::Usage_obj::DynamicUsage,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		this->rectVertexBuffer = tmp3;
		HX_STACK_LINE(330)
		::kha::graphics4::VertexBuffer tmp4 = this->rectVertexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(330)
		::kha::arrays::Float32Array tmp5 = tmp4->lock(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(330)
		this->rectVertices = tmp5;
		HX_STACK_LINE(332)
		int tmp6 = ::kha::graphics4::ColoredShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(332)
		int tmp7 = (tmp6 * (int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(332)
		int tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(332)
		::kha::graphics4::IndexBuffer tmp9 = ::kha::graphics4::IndexBuffer_obj::__new(tmp8,::kha::graphics4::Usage_obj::StaticUsage,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(332)
		this->indexBuffer = tmp9;
		HX_STACK_LINE(333)
		::kha::graphics4::IndexBuffer tmp10 = this->indexBuffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(333)
		Array< int > tmp11 = tmp10->lock();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(333)
		Array< int > indices = tmp11;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(334)
			int tmp12 = ::kha::graphics4::ColoredShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(334)
			int _g = tmp12;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(334)
			while((true)){
				HX_STACK_LINE(334)
				bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(334)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(334)
				if ((tmp14)){
					HX_STACK_LINE(334)
					break;
				}
				HX_STACK_LINE(334)
				int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(334)
				int i = tmp15;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(335)
				Array< int > tmp16 = indices;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(335)
				int tmp17 = (i * (int)3);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(335)
				int tmp18 = (tmp17 * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(335)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(335)
				int tmp20 = (i * (int)4);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(335)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(335)
				tmp16[tmp19] = tmp21;
				HX_STACK_LINE(336)
				Array< int > tmp22 = indices;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(336)
				int tmp23 = (i * (int)3);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(336)
				int tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(336)
				int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(336)
				int tmp26 = (i * (int)4);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(336)
				int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(336)
				tmp22[tmp25] = tmp27;
				HX_STACK_LINE(337)
				Array< int > tmp28 = indices;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(337)
				int tmp29 = (i * (int)3);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(337)
				int tmp30 = (tmp29 * (int)2);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(337)
				int tmp31 = (tmp30 + (int)2);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(337)
				int tmp32 = (i * (int)4);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(337)
				int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(337)
				tmp28[tmp31] = tmp33;
				HX_STACK_LINE(338)
				Array< int > tmp34 = indices;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(338)
				int tmp35 = (i * (int)3);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(338)
				int tmp36 = (tmp35 * (int)2);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(338)
				int tmp37 = (tmp36 + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(338)
				int tmp38 = (i * (int)4);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(338)
				int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(338)
				tmp34[tmp37] = tmp39;
				HX_STACK_LINE(339)
				Array< int > tmp40 = indices;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(339)
				int tmp41 = (i * (int)3);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(339)
				int tmp42 = (tmp41 * (int)2);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(339)
				int tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(339)
				int tmp44 = (i * (int)4);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(339)
				int tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(339)
				tmp40[tmp43] = tmp45;
				HX_STACK_LINE(340)
				Array< int > tmp46 = indices;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(340)
				int tmp47 = (i * (int)3);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(340)
				int tmp48 = (tmp47 * (int)2);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(340)
				int tmp49 = (tmp48 + (int)5);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(340)
				int tmp50 = (i * (int)4);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(340)
				int tmp51 = (tmp50 + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(340)
				tmp46[tmp49] = tmp51;
			}
		}
		HX_STACK_LINE(342)
		::kha::graphics4::IndexBuffer tmp12 = this->indexBuffer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(342)
		tmp12->unlock();
		HX_STACK_LINE(344)
		int tmp13 = ::kha::graphics4::ColoredShaderPainter_obj::triangleBufferSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(344)
		int tmp14 = (tmp13 * (int)3);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(344)
		::kha::graphics4::VertexStructure tmp15 = ::kha::graphics4::ColoredShaderPainter_obj::structure;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(344)
		::kha::graphics4::VertexBuffer tmp16 = ::kha::graphics4::VertexBuffer_obj::__new(tmp14,tmp15,::kha::graphics4::Usage_obj::DynamicUsage,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(344)
		this->triangleVertexBuffer = tmp16;
		HX_STACK_LINE(345)
		::kha::graphics4::VertexBuffer tmp17 = this->triangleVertexBuffer;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(345)
		::kha::arrays::Float32Array tmp18 = tmp17->lock(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(345)
		this->triangleVertices = tmp18;
		HX_STACK_LINE(347)
		int tmp19 = ::kha::graphics4::ColoredShaderPainter_obj::triangleBufferSize;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(347)
		int tmp20 = (tmp19 * (int)3);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(347)
		::kha::graphics4::IndexBuffer tmp21 = ::kha::graphics4::IndexBuffer_obj::__new(tmp20,::kha::graphics4::Usage_obj::StaticUsage,null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(347)
		this->triangleIndexBuffer = tmp21;
		HX_STACK_LINE(348)
		::kha::graphics4::IndexBuffer tmp22 = this->triangleIndexBuffer;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(348)
		Array< int > tmp23 = tmp22->lock();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(348)
		Array< int > triIndices = tmp23;		HX_STACK_VAR(triIndices,"triIndices");
		HX_STACK_LINE(349)
		{
			HX_STACK_LINE(349)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(349)
			int tmp24 = ::kha::graphics4::ColoredShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(349)
			int _g = tmp24;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(349)
			while((true)){
				HX_STACK_LINE(349)
				bool tmp25 = (_g1 < _g);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(349)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(349)
				if ((tmp26)){
					HX_STACK_LINE(349)
					break;
				}
				HX_STACK_LINE(349)
				int tmp27 = (_g1)++;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(349)
				int i = tmp27;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(350)
				Array< int > tmp28 = triIndices;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(350)
				int tmp29 = (i * (int)3);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(350)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(350)
				int tmp31 = (i * (int)3);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(350)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(350)
				tmp28[tmp30] = tmp32;
				HX_STACK_LINE(351)
				Array< int > tmp33 = triIndices;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(351)
				int tmp34 = (i * (int)3);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(351)
				int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(351)
				int tmp36 = (i * (int)3);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(351)
				int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(351)
				tmp33[tmp35] = tmp37;
				HX_STACK_LINE(352)
				Array< int > tmp38 = triIndices;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(352)
				int tmp39 = (i * (int)3);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(352)
				int tmp40 = (tmp39 + (int)2);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(352)
				int tmp41 = (i * (int)3);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(352)
				int tmp42 = (tmp41 + (int)2);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(352)
				tmp38[tmp40] = tmp42;
			}
		}
		HX_STACK_LINE(354)
		::kha::graphics4::IndexBuffer tmp24 = this->triangleIndexBuffer;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(354)
		tmp24->unlock();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColoredShaderPainter_obj,initBuffers,(void))

Void ColoredShaderPainter_obj::setRectVertices( Float bottomleftx,Float bottomlefty,Float topleftx,Float toplefty,Float toprightx,Float toprighty,Float bottomrightx,Float bottomrighty){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","setRectVertices",0xe6315344,"kha.graphics4.ColoredShaderPainter.setRectVertices","kha/graphics4/Graphics2.hx",361,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bottomleftx,"bottomleftx")
		HX_STACK_ARG(bottomlefty,"bottomlefty")
		HX_STACK_ARG(topleftx,"topleftx")
		HX_STACK_ARG(toplefty,"toplefty")
		HX_STACK_ARG(toprightx,"toprightx")
		HX_STACK_ARG(toprighty,"toprighty")
		HX_STACK_ARG(bottomrightx,"bottomrightx")
		HX_STACK_ARG(bottomrighty,"bottomrighty")
		HX_STACK_LINE(362)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		int tmp1 = (tmp * (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(362)
		int tmp2 = (tmp1 * (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(362)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(363)
		::kha::arrays::Float32Array tmp3 = this->rectVertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		int tmp4 = baseIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(363)
		Float tmp5 = bottomleftx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(363)
		tmp3->data.set(tmp4,tmp5);
		HX_STACK_LINE(364)
		::kha::arrays::Float32Array tmp6 = this->rectVertices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(364)
		int tmp7 = (baseIndex + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(364)
		Float tmp8 = bottomlefty;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(364)
		tmp6->data.set(tmp7,tmp8);
		HX_STACK_LINE(365)
		::kha::arrays::Float32Array tmp9 = this->rectVertices;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(365)
		int tmp10 = (baseIndex + (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(365)
		tmp9->data.set(tmp10,((Float)-5.0));
		HX_STACK_LINE(367)
		::kha::arrays::Float32Array tmp11 = this->rectVertices;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(367)
		int tmp12 = (baseIndex + (int)7);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(367)
		Float tmp13 = topleftx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(367)
		tmp11->data.set(tmp12,tmp13);
		HX_STACK_LINE(368)
		::kha::arrays::Float32Array tmp14 = this->rectVertices;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(368)
		int tmp15 = (baseIndex + (int)8);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(368)
		Float tmp16 = toplefty;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(368)
		tmp14->data.set(tmp15,tmp16);
		HX_STACK_LINE(369)
		::kha::arrays::Float32Array tmp17 = this->rectVertices;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(369)
		int tmp18 = (baseIndex + (int)9);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(369)
		tmp17->data.set(tmp18,((Float)-5.0));
		HX_STACK_LINE(371)
		::kha::arrays::Float32Array tmp19 = this->rectVertices;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(371)
		int tmp20 = (baseIndex + (int)14);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(371)
		Float tmp21 = toprightx;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(371)
		tmp19->data.set(tmp20,tmp21);
		HX_STACK_LINE(372)
		::kha::arrays::Float32Array tmp22 = this->rectVertices;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(372)
		int tmp23 = (baseIndex + (int)15);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(372)
		Float tmp24 = toprighty;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(372)
		tmp22->data.set(tmp23,tmp24);
		HX_STACK_LINE(373)
		::kha::arrays::Float32Array tmp25 = this->rectVertices;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(373)
		int tmp26 = (baseIndex + (int)16);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(373)
		tmp25->data.set(tmp26,((Float)-5.0));
		HX_STACK_LINE(375)
		::kha::arrays::Float32Array tmp27 = this->rectVertices;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(375)
		int tmp28 = (baseIndex + (int)21);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(375)
		Float tmp29 = bottomrightx;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(375)
		tmp27->data.set(tmp28,tmp29);
		HX_STACK_LINE(376)
		::kha::arrays::Float32Array tmp30 = this->rectVertices;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(376)
		int tmp31 = (baseIndex + (int)22);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(376)
		Float tmp32 = bottomrighty;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(376)
		tmp30->data.set(tmp31,tmp32);
		HX_STACK_LINE(377)
		::kha::arrays::Float32Array tmp33 = this->rectVertices;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(377)
		int tmp34 = (baseIndex + (int)23);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(377)
		tmp33->data.set(tmp34,((Float)-5.0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(ColoredShaderPainter_obj,setRectVertices,(void))

Void ColoredShaderPainter_obj::setRectColors( ::cpp::Float32 opacity,int color){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","setRectColors",0x999e603b,"kha.graphics4.ColoredShaderPainter.setRectColors","kha/graphics4/Graphics2.hx",380,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(opacity,"opacity")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(381)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		int tmp1 = (tmp * (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(381)
		int tmp2 = (tmp1 * (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(382)
		::cpp::Float32 tmp3 = opacity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(382)
		int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(382)
		int tmp5 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(382)
		::cpp::Float32 tmp6 = (tmp5 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(382)
		::cpp::Float32 tmp7 = (tmp3 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(382)
		::cpp::Float32 a = tmp7;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(383)
		{
			HX_STACK_LINE(383)
			int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(383)
			int tmp9 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(383)
			::cpp::Float32 tmp10 = (tmp9 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(383)
			::cpp::Float32 value = tmp10;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(383)
			::kha::arrays::Float32Array tmp11 = this->rectVertices;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(383)
			int tmp12 = (baseIndex + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(383)
			::cpp::Float32 tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(383)
			tmp11->data.set(tmp12,tmp13);
		}
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(384)
			int tmp9 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(384)
			::cpp::Float32 tmp10 = (tmp9 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(384)
			::cpp::Float32 value = tmp10;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(384)
			::kha::arrays::Float32Array tmp11 = this->rectVertices;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(384)
			int tmp12 = (baseIndex + (int)4);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(384)
			::cpp::Float32 tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(384)
			tmp11->data.set(tmp12,tmp13);
		}
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(385)
			int tmp9 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(385)
			::cpp::Float32 tmp10 = (tmp9 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(385)
			::cpp::Float32 value = tmp10;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(385)
			::kha::arrays::Float32Array tmp11 = this->rectVertices;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(385)
			int tmp12 = (baseIndex + (int)5);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(385)
			::cpp::Float32 tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(385)
			tmp11->data.set(tmp12,tmp13);
		}
		HX_STACK_LINE(386)
		::kha::arrays::Float32Array tmp8 = this->rectVertices;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(386)
		int tmp9 = (baseIndex + (int)6);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(386)
		::cpp::Float32 tmp10 = a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(386)
		tmp8->data.set(tmp9,tmp10);
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			int tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(388)
			int tmp12 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(388)
			::cpp::Float32 tmp13 = (tmp12 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(388)
			::cpp::Float32 value = tmp13;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(388)
			::kha::arrays::Float32Array tmp14 = this->rectVertices;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(388)
			int tmp15 = (baseIndex + (int)10);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(388)
			::cpp::Float32 tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(388)
			tmp14->data.set(tmp15,tmp16);
		}
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			int tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(389)
			int tmp12 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(389)
			::cpp::Float32 tmp13 = (tmp12 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(389)
			::cpp::Float32 value = tmp13;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(389)
			::kha::arrays::Float32Array tmp14 = this->rectVertices;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(389)
			int tmp15 = (baseIndex + (int)11);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(389)
			::cpp::Float32 tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(389)
			tmp14->data.set(tmp15,tmp16);
		}
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			int tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(390)
			int tmp12 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(390)
			::cpp::Float32 tmp13 = (tmp12 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(390)
			::cpp::Float32 value = tmp13;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(390)
			::kha::arrays::Float32Array tmp14 = this->rectVertices;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(390)
			int tmp15 = (baseIndex + (int)12);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(390)
			::cpp::Float32 tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(390)
			tmp14->data.set(tmp15,tmp16);
		}
		HX_STACK_LINE(391)
		::kha::arrays::Float32Array tmp11 = this->rectVertices;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(391)
		int tmp12 = (baseIndex + (int)13);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(391)
		::cpp::Float32 tmp13 = a;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(391)
		tmp11->data.set(tmp12,tmp13);
		HX_STACK_LINE(393)
		{
			HX_STACK_LINE(393)
			int tmp14 = color;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			int tmp15 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(393)
			::cpp::Float32 tmp16 = (tmp15 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(393)
			::cpp::Float32 value = tmp16;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(393)
			::kha::arrays::Float32Array tmp17 = this->rectVertices;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(393)
			int tmp18 = (baseIndex + (int)17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(393)
			::cpp::Float32 tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(393)
			tmp17->data.set(tmp18,tmp19);
		}
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(394)
			int tmp14 = color;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(394)
			int tmp15 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(394)
			::cpp::Float32 tmp16 = (tmp15 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(394)
			::cpp::Float32 value = tmp16;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(394)
			::kha::arrays::Float32Array tmp17 = this->rectVertices;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(394)
			int tmp18 = (baseIndex + (int)18);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(394)
			::cpp::Float32 tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(394)
			tmp17->data.set(tmp18,tmp19);
		}
		HX_STACK_LINE(395)
		{
			HX_STACK_LINE(395)
			int tmp14 = color;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(395)
			int tmp15 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(395)
			::cpp::Float32 tmp16 = (tmp15 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(395)
			::cpp::Float32 value = tmp16;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(395)
			::kha::arrays::Float32Array tmp17 = this->rectVertices;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(395)
			int tmp18 = (baseIndex + (int)19);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(395)
			::cpp::Float32 tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(395)
			tmp17->data.set(tmp18,tmp19);
		}
		HX_STACK_LINE(396)
		::kha::arrays::Float32Array tmp14 = this->rectVertices;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(396)
		int tmp15 = (baseIndex + (int)20);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(396)
		::cpp::Float32 tmp16 = a;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(396)
		tmp14->data.set(tmp15,tmp16);
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			int tmp17 = color;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(398)
			int tmp18 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(398)
			::cpp::Float32 tmp19 = (tmp18 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(398)
			::cpp::Float32 value = tmp19;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(398)
			::kha::arrays::Float32Array tmp20 = this->rectVertices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(398)
			int tmp21 = (baseIndex + (int)24);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(398)
			::cpp::Float32 tmp22 = value;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(398)
			tmp20->data.set(tmp21,tmp22);
		}
		HX_STACK_LINE(399)
		{
			HX_STACK_LINE(399)
			int tmp17 = color;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(399)
			int tmp18 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(399)
			::cpp::Float32 tmp19 = (tmp18 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(399)
			::cpp::Float32 value = tmp19;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(399)
			::kha::arrays::Float32Array tmp20 = this->rectVertices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(399)
			int tmp21 = (baseIndex + (int)25);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(399)
			::cpp::Float32 tmp22 = value;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(399)
			tmp20->data.set(tmp21,tmp22);
		}
		HX_STACK_LINE(400)
		{
			HX_STACK_LINE(400)
			int tmp17 = color;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(400)
			int tmp18 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(400)
			::cpp::Float32 tmp19 = (tmp18 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(400)
			::cpp::Float32 value = tmp19;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(400)
			::kha::arrays::Float32Array tmp20 = this->rectVertices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(400)
			int tmp21 = (baseIndex + (int)26);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(400)
			::cpp::Float32 tmp22 = value;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(400)
			tmp20->data.set(tmp21,tmp22);
		}
		HX_STACK_LINE(401)
		::kha::arrays::Float32Array tmp17 = this->rectVertices;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(401)
		int tmp18 = (baseIndex + (int)27);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(401)
		::cpp::Float32 tmp19 = a;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(401)
		tmp17->data.set(tmp18,tmp19);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ColoredShaderPainter_obj,setRectColors,(void))

Void ColoredShaderPainter_obj::setTriVertices( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","setTriVertices",0x2457a01d,"kha.graphics4.ColoredShaderPainter.setTriVertices","kha/graphics4/Graphics2.hx",404,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x3,"x3")
		HX_STACK_ARG(y3,"y3")
		HX_STACK_LINE(405)
		int tmp = this->triangleBufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		int tmp1 = (tmp * (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		int tmp2 = (tmp1 * (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(405)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(406)
		::kha::arrays::Float32Array tmp3 = this->triangleVertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(406)
		int tmp4 = baseIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(406)
		Float tmp5 = x1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(406)
		tmp3->data.set(tmp4,tmp5);
		HX_STACK_LINE(407)
		::kha::arrays::Float32Array tmp6 = this->triangleVertices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(407)
		int tmp7 = (baseIndex + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(407)
		Float tmp8 = y1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(407)
		tmp6->data.set(tmp7,tmp8);
		HX_STACK_LINE(408)
		::kha::arrays::Float32Array tmp9 = this->triangleVertices;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(408)
		int tmp10 = (baseIndex + (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(408)
		tmp9->data.set(tmp10,((Float)-5.0));
		HX_STACK_LINE(410)
		::kha::arrays::Float32Array tmp11 = this->triangleVertices;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(410)
		int tmp12 = (baseIndex + (int)7);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(410)
		Float tmp13 = x2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(410)
		tmp11->data.set(tmp12,tmp13);
		HX_STACK_LINE(411)
		::kha::arrays::Float32Array tmp14 = this->triangleVertices;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(411)
		int tmp15 = (baseIndex + (int)8);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(411)
		Float tmp16 = y2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(411)
		tmp14->data.set(tmp15,tmp16);
		HX_STACK_LINE(412)
		::kha::arrays::Float32Array tmp17 = this->triangleVertices;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(412)
		int tmp18 = (baseIndex + (int)9);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(412)
		tmp17->data.set(tmp18,((Float)-5.0));
		HX_STACK_LINE(414)
		::kha::arrays::Float32Array tmp19 = this->triangleVertices;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(414)
		int tmp20 = (baseIndex + (int)14);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(414)
		Float tmp21 = x3;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(414)
		tmp19->data.set(tmp20,tmp21);
		HX_STACK_LINE(415)
		::kha::arrays::Float32Array tmp22 = this->triangleVertices;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(415)
		int tmp23 = (baseIndex + (int)15);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(415)
		Float tmp24 = y3;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(415)
		tmp22->data.set(tmp23,tmp24);
		HX_STACK_LINE(416)
		::kha::arrays::Float32Array tmp25 = this->triangleVertices;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(416)
		int tmp26 = (baseIndex + (int)16);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(416)
		tmp25->data.set(tmp26,((Float)-5.0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ColoredShaderPainter_obj,setTriVertices,(void))

Void ColoredShaderPainter_obj::setTriColors( ::cpp::Float32 opacity,int color){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","setTriColors",0xb69b94d4,"kha.graphics4.ColoredShaderPainter.setTriColors","kha/graphics4/Graphics2.hx",419,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(opacity,"opacity")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(420)
		int tmp = this->triangleBufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(420)
		int tmp1 = (tmp * (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(420)
		int tmp2 = (tmp1 * (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(420)
		int baseIndex = tmp2;		HX_STACK_VAR(baseIndex,"baseIndex");
		HX_STACK_LINE(421)
		::cpp::Float32 tmp3 = opacity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(421)
		int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(421)
		int tmp5 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(421)
		::cpp::Float32 tmp6 = (tmp5 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(421)
		::cpp::Float32 tmp7 = (tmp3 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(421)
		::cpp::Float32 a = tmp7;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(422)
			int tmp9 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(422)
			::cpp::Float32 tmp10 = (tmp9 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(422)
			::cpp::Float32 value = tmp10;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(422)
			::kha::arrays::Float32Array tmp11 = this->triangleVertices;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(422)
			int tmp12 = (baseIndex + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(422)
			::cpp::Float32 tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(422)
			tmp11->data.set(tmp12,tmp13);
		}
		HX_STACK_LINE(423)
		{
			HX_STACK_LINE(423)
			int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(423)
			int tmp9 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(423)
			::cpp::Float32 tmp10 = (tmp9 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(423)
			::cpp::Float32 value = tmp10;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(423)
			::kha::arrays::Float32Array tmp11 = this->triangleVertices;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(423)
			int tmp12 = (baseIndex + (int)4);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(423)
			::cpp::Float32 tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(423)
			tmp11->data.set(tmp12,tmp13);
		}
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(424)
			int tmp9 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(424)
			::cpp::Float32 tmp10 = (tmp9 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(424)
			::cpp::Float32 value = tmp10;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(424)
			::kha::arrays::Float32Array tmp11 = this->triangleVertices;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(424)
			int tmp12 = (baseIndex + (int)5);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(424)
			::cpp::Float32 tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(424)
			tmp11->data.set(tmp12,tmp13);
		}
		HX_STACK_LINE(425)
		::kha::arrays::Float32Array tmp8 = this->triangleVertices;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(425)
		int tmp9 = (baseIndex + (int)6);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(425)
		::cpp::Float32 tmp10 = a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(425)
		tmp8->data.set(tmp9,tmp10);
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(427)
			int tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(427)
			int tmp12 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(427)
			::cpp::Float32 tmp13 = (tmp12 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(427)
			::cpp::Float32 value = tmp13;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(427)
			::kha::arrays::Float32Array tmp14 = this->triangleVertices;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(427)
			int tmp15 = (baseIndex + (int)10);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(427)
			::cpp::Float32 tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(427)
			tmp14->data.set(tmp15,tmp16);
		}
		HX_STACK_LINE(428)
		{
			HX_STACK_LINE(428)
			int tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(428)
			int tmp12 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(428)
			::cpp::Float32 tmp13 = (tmp12 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(428)
			::cpp::Float32 value = tmp13;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(428)
			::kha::arrays::Float32Array tmp14 = this->triangleVertices;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(428)
			int tmp15 = (baseIndex + (int)11);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(428)
			::cpp::Float32 tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(428)
			tmp14->data.set(tmp15,tmp16);
		}
		HX_STACK_LINE(429)
		{
			HX_STACK_LINE(429)
			int tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(429)
			int tmp12 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(429)
			::cpp::Float32 tmp13 = (tmp12 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(429)
			::cpp::Float32 value = tmp13;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(429)
			::kha::arrays::Float32Array tmp14 = this->triangleVertices;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(429)
			int tmp15 = (baseIndex + (int)12);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(429)
			::cpp::Float32 tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(429)
			tmp14->data.set(tmp15,tmp16);
		}
		HX_STACK_LINE(430)
		::kha::arrays::Float32Array tmp11 = this->triangleVertices;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(430)
		int tmp12 = (baseIndex + (int)13);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(430)
		::cpp::Float32 tmp13 = a;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(430)
		tmp11->data.set(tmp12,tmp13);
		HX_STACK_LINE(432)
		{
			HX_STACK_LINE(432)
			int tmp14 = color;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(432)
			int tmp15 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(432)
			::cpp::Float32 tmp16 = (tmp15 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(432)
			::cpp::Float32 value = tmp16;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(432)
			::kha::arrays::Float32Array tmp17 = this->triangleVertices;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(432)
			int tmp18 = (baseIndex + (int)17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(432)
			::cpp::Float32 tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(432)
			tmp17->data.set(tmp18,tmp19);
		}
		HX_STACK_LINE(433)
		{
			HX_STACK_LINE(433)
			int tmp14 = color;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(433)
			int tmp15 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(433)
			::cpp::Float32 tmp16 = (tmp15 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(433)
			::cpp::Float32 value = tmp16;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(433)
			::kha::arrays::Float32Array tmp17 = this->triangleVertices;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(433)
			int tmp18 = (baseIndex + (int)18);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(433)
			::cpp::Float32 tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(433)
			tmp17->data.set(tmp18,tmp19);
		}
		HX_STACK_LINE(434)
		{
			HX_STACK_LINE(434)
			int tmp14 = color;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(434)
			int tmp15 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(434)
			::cpp::Float32 tmp16 = (tmp15 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(434)
			::cpp::Float32 value = tmp16;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(434)
			::kha::arrays::Float32Array tmp17 = this->triangleVertices;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(434)
			int tmp18 = (baseIndex + (int)19);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(434)
			::cpp::Float32 tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(434)
			tmp17->data.set(tmp18,tmp19);
		}
		HX_STACK_LINE(435)
		::kha::arrays::Float32Array tmp14 = this->triangleVertices;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(435)
		int tmp15 = (baseIndex + (int)20);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(435)
		::cpp::Float32 tmp16 = a;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(435)
		tmp14->data.set(tmp15,tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ColoredShaderPainter_obj,setTriColors,(void))

Void ColoredShaderPainter_obj::drawBuffer( bool trisDone){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","drawBuffer",0xe9220aff,"kha.graphics4.ColoredShaderPainter.drawBuffer","kha/graphics4/Graphics2.hx",438,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(trisDone,"trisDone")
		HX_STACK_LINE(439)
		bool tmp = trisDone;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(439)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(439)
		if ((tmp1)){
			HX_STACK_LINE(439)
			int tmp2 = this->triangleBufferIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(439)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(439)
			if ((tmp3)){
				HX_STACK_LINE(439)
				this->drawTriBuffer(true);
			}
		}
		HX_STACK_LINE(441)
		::kha::graphics4::VertexBuffer tmp2 = this->rectVertexBuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(441)
		tmp2->unlock();
		HX_STACK_LINE(442)
		::kha::graphics4::Graphics tmp3 = this->g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		::kha::graphics4::VertexBuffer tmp4 = this->rectVertexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(442)
		tmp3->setVertexBuffer(tmp4);
		HX_STACK_LINE(443)
		::kha::graphics4::Graphics tmp5 = this->g;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		::kha::graphics4::IndexBuffer tmp6 = this->indexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(443)
		tmp5->setIndexBuffer(tmp6);
		HX_STACK_LINE(444)
		::kha::graphics4::Graphics tmp7 = this->g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(444)
		::kha::graphics4::PipelineState tmp8 = this->get_pipeline();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(444)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(444)
		::kha::graphics4::PipelineState tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(444)
		if ((tmp9)){
			HX_STACK_LINE(444)
			tmp10 = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;
		}
		else{
			HX_STACK_LINE(444)
			tmp10 = this->get_pipeline();
		}
		HX_STACK_LINE(444)
		tmp7->setPipeline(tmp10);
		HX_STACK_LINE(445)
		::kha::graphics4::Graphics tmp11 = this->g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(445)
		::kha::graphics4::ConstantLocation tmp12 = this->projectionLocation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(445)
		::kha::math::FastMatrix4 tmp13 = this->projectionMatrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(445)
		tmp11->setMatrix(tmp12,tmp13);
		HX_STACK_LINE(453)
		::kha::graphics4::Graphics tmp14 = this->g;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(453)
		int tmp15 = this->bufferIndex;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(453)
		int tmp16 = (tmp15 * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(453)
		int tmp17 = (tmp16 * (int)3);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(453)
		tmp14->drawIndexedVertices((int)0,tmp17);
		HX_STACK_LINE(455)
		this->bufferIndex = (int)0;
		HX_STACK_LINE(456)
		::kha::graphics4::VertexBuffer tmp18 = this->rectVertexBuffer;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(456)
		::kha::arrays::Float32Array tmp19 = tmp18->lock(null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(456)
		this->rectVertices = tmp19;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,drawBuffer,(void))

Void ColoredShaderPainter_obj::drawTriBuffer( bool rectsDone){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","drawTriBuffer",0xacdf87ec,"kha.graphics4.ColoredShaderPainter.drawTriBuffer","kha/graphics4/Graphics2.hx",459,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectsDone,"rectsDone")
		HX_STACK_LINE(460)
		bool tmp = rectsDone;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(460)
		if ((tmp1)){
			HX_STACK_LINE(460)
			int tmp2 = this->bufferIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(460)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(460)
			if ((tmp3)){
				HX_STACK_LINE(460)
				this->drawBuffer(true);
			}
		}
		HX_STACK_LINE(462)
		::kha::graphics4::VertexBuffer tmp2 = this->triangleVertexBuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(462)
		tmp2->unlock();
		HX_STACK_LINE(463)
		::kha::graphics4::Graphics tmp3 = this->g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(463)
		::kha::graphics4::VertexBuffer tmp4 = this->triangleVertexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		tmp3->setVertexBuffer(tmp4);
		HX_STACK_LINE(464)
		::kha::graphics4::Graphics tmp5 = this->g;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(464)
		::kha::graphics4::IndexBuffer tmp6 = this->triangleIndexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(464)
		tmp5->setIndexBuffer(tmp6);
		HX_STACK_LINE(465)
		::kha::graphics4::Graphics tmp7 = this->g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(465)
		::kha::graphics4::PipelineState tmp8 = this->get_pipeline();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(465)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(465)
		::kha::graphics4::PipelineState tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(465)
		if ((tmp9)){
			HX_STACK_LINE(465)
			tmp10 = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;
		}
		else{
			HX_STACK_LINE(465)
			tmp10 = this->get_pipeline();
		}
		HX_STACK_LINE(465)
		tmp7->setPipeline(tmp10);
		HX_STACK_LINE(466)
		::kha::graphics4::Graphics tmp11 = this->g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(466)
		::kha::graphics4::ConstantLocation tmp12 = this->projectionLocation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(466)
		::kha::math::FastMatrix4 tmp13 = this->projectionMatrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(466)
		tmp11->setMatrix(tmp12,tmp13);
		HX_STACK_LINE(474)
		::kha::graphics4::Graphics tmp14 = this->g;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(474)
		int tmp15 = this->triangleBufferIndex;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(474)
		int tmp16 = (tmp15 * (int)3);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(474)
		tmp14->drawIndexedVertices((int)0,tmp16);
		HX_STACK_LINE(476)
		this->triangleBufferIndex = (int)0;
		HX_STACK_LINE(477)
		::kha::graphics4::VertexBuffer tmp17 = this->triangleVertexBuffer;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(477)
		::kha::arrays::Float32Array tmp18 = tmp17->lock(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(477)
		this->triangleVertices = tmp18;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,drawTriBuffer,(void))

Void ColoredShaderPainter_obj::fillRect( ::cpp::Float32 opacity,int color,Float bottomleftx,Float bottomlefty,Float topleftx,Float toplefty,Float toprightx,Float toprighty,Float bottomrightx,Float bottomrighty){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","fillRect",0xd64d1b62,"kha.graphics4.ColoredShaderPainter.fillRect","kha/graphics4/Graphics2.hx",484,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(opacity,"opacity")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(bottomleftx,"bottomleftx")
		HX_STACK_ARG(bottomlefty,"bottomlefty")
		HX_STACK_ARG(topleftx,"topleftx")
		HX_STACK_ARG(toplefty,"toplefty")
		HX_STACK_ARG(toprightx,"toprightx")
		HX_STACK_ARG(toprighty,"toprighty")
		HX_STACK_ARG(bottomrightx,"bottomrightx")
		HX_STACK_ARG(bottomrighty,"bottomrighty")
		HX_STACK_LINE(485)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(485)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(485)
		int tmp2 = ::kha::graphics4::ColoredShaderPainter_obj::bufferSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(485)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(485)
		if ((tmp3)){
			HX_STACK_LINE(485)
			this->drawBuffer(false);
		}
		HX_STACK_LINE(487)
		::cpp::Float32 tmp4 = opacity;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(487)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(487)
		this->setRectColors(tmp4,tmp5);
		HX_STACK_LINE(488)
		Float tmp6 = bottomleftx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(488)
		Float tmp7 = bottomlefty;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(488)
		Float tmp8 = topleftx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(488)
		Float tmp9 = toplefty;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(488)
		Float tmp10 = toprightx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(488)
		Float tmp11 = toprighty;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(488)
		Float tmp12 = bottomrightx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(488)
		Float tmp13 = bottomrighty;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(488)
		this->setRectVertices(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
		HX_STACK_LINE(489)
		++(this->bufferIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(ColoredShaderPainter_obj,fillRect,(void))

Void ColoredShaderPainter_obj::fillTriangle( ::cpp::Float32 opacity,int color,Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","fillTriangle",0x0d428406,"kha.graphics4.ColoredShaderPainter.fillTriangle","kha/graphics4/Graphics2.hx",492,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(opacity,"opacity")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x3,"x3")
		HX_STACK_ARG(y3,"y3")
		HX_STACK_LINE(493)
		int tmp = this->triangleBufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(493)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		int tmp2 = ::kha::graphics4::ColoredShaderPainter_obj::triangleBufferSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(493)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(493)
		if ((tmp3)){
			HX_STACK_LINE(493)
			this->drawTriBuffer(false);
		}
		HX_STACK_LINE(495)
		::cpp::Float32 tmp4 = opacity;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(495)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(495)
		this->setTriColors(tmp4,tmp5);
		HX_STACK_LINE(496)
		Float tmp6 = x1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(496)
		Float tmp7 = y1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(496)
		Float tmp8 = x2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(496)
		Float tmp9 = y2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(496)
		Float tmp10 = x3;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(496)
		Float tmp11 = y3;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(496)
		this->setTriVertices(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
		HX_STACK_LINE(497)
		++(this->triangleBufferIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(ColoredShaderPainter_obj,fillTriangle,(void))

Void ColoredShaderPainter_obj::endTris( bool rectsDone){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","endTris",0x1785fca8,"kha.graphics4.ColoredShaderPainter.endTris","kha/graphics4/Graphics2.hx",500,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectsDone,"rectsDone")
		HX_STACK_LINE(501)
		int tmp = this->triangleBufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(501)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		if ((tmp1)){
			HX_STACK_LINE(501)
			bool tmp2 = rectsDone;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(501)
			this->drawTriBuffer(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,endTris,(void))

Void ColoredShaderPainter_obj::endRects( bool trisDone){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","endRects",0x4e4d9b0f,"kha.graphics4.ColoredShaderPainter.endRects","kha/graphics4/Graphics2.hx",504,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_ARG(trisDone,"trisDone")
		HX_STACK_LINE(505)
		int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(505)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(505)
		if ((tmp1)){
			HX_STACK_LINE(505)
			bool tmp2 = trisDone;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(505)
			this->drawBuffer(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColoredShaderPainter_obj,endRects,(void))

Void ColoredShaderPainter_obj::end( ){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","end",0x02dee3a0,"kha.graphics4.ColoredShaderPainter.end","kha/graphics4/Graphics2.hx",508,0x0c1de808)
		HX_STACK_THIS(this)
		HX_STACK_LINE(509)
		{
			HX_STACK_LINE(509)
			int tmp = this->triangleBufferIndex;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(509)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(509)
			if ((tmp1)){
				HX_STACK_LINE(509)
				this->drawTriBuffer(false);
			}
		}
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			int tmp = this->bufferIndex;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(510)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(510)
			if ((tmp1)){
				HX_STACK_LINE(510)
				this->drawBuffer(false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColoredShaderPainter_obj,end,(void))

::kha::graphics4::PipelineState ColoredShaderPainter_obj::shaderPipeline;

::kha::graphics4::VertexStructure ColoredShaderPainter_obj::structure;

int ColoredShaderPainter_obj::bufferSize;

int ColoredShaderPainter_obj::triangleBufferSize;

Void ColoredShaderPainter_obj::initShaders( ){
{
		HX_STACK_FRAME("kha.graphics4.ColoredShaderPainter","initShaders",0x31bf9d43,"kha.graphics4.ColoredShaderPainter.initShaders","kha/graphics4/Graphics2.hx",310,0x0c1de808)
		HX_STACK_LINE(311)
		::kha::graphics4::PipelineState tmp = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		if ((tmp1)){
			HX_STACK_LINE(311)
			return null();
		}
		HX_STACK_LINE(313)
		::kha::graphics4::PipelineState tmp2 = ::kha::graphics4::PipelineState_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline = tmp2;
		HX_STACK_LINE(314)
		::kha::graphics4::FragmentShader tmp3 = ::kha::Shaders_obj::painter_colored_frag;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		::kha::graphics4::PipelineState tmp4 = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(314)
		tmp4->fragmentShader = tmp3;
		HX_STACK_LINE(315)
		::kha::graphics4::VertexShader tmp5 = ::kha::Shaders_obj::painter_colored_vert;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(315)
		::kha::graphics4::PipelineState tmp6 = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(315)
		tmp6->vertexShader = tmp5;
		HX_STACK_LINE(317)
		::kha::graphics4::VertexStructure tmp7 = ::kha::graphics4::VertexStructure_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		::kha::graphics4::ColoredShaderPainter_obj::structure = tmp7;
		HX_STACK_LINE(318)
		::kha::graphics4::VertexStructure tmp8 = ::kha::graphics4::ColoredShaderPainter_obj::structure;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(318)
		tmp8->add(HX_HCSTRING("vertexPosition","\x2d","\x3c","\x14","\x50"),::kha::graphics4::VertexData_obj::Float3);
		HX_STACK_LINE(319)
		::kha::graphics4::VertexStructure tmp9 = ::kha::graphics4::ColoredShaderPainter_obj::structure;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(319)
		tmp9->add(HX_HCSTRING("vertexColor","\x5f","\x3b","\x98","\x5e"),::kha::graphics4::VertexData_obj::Float4);
		HX_STACK_LINE(320)
		::kha::graphics4::VertexStructure tmp10 = ::kha::graphics4::ColoredShaderPainter_obj::structure;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(320)
		Array< ::Dynamic > tmp11 = Array_obj< ::Dynamic >::__new().Add(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(320)
		::kha::graphics4::PipelineState tmp12 = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(320)
		tmp12->inputLayout = tmp11;
		HX_STACK_LINE(322)
		::kha::graphics4::PipelineState tmp13 = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(322)
		tmp13->blendSource = ::kha::graphics4::BlendingOperation_obj::SourceAlpha;
		HX_STACK_LINE(323)
		::kha::graphics4::PipelineState tmp14 = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(323)
		tmp14->blendDestination = ::kha::graphics4::BlendingOperation_obj::InverseSourceAlpha;
		HX_STACK_LINE(325)
		::kha::graphics4::PipelineState tmp15 = ::kha::graphics4::ColoredShaderPainter_obj::shaderPipeline;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(325)
		tmp15->compile();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ColoredShaderPainter_obj,initShaders,(void))


ColoredShaderPainter_obj::ColoredShaderPainter_obj()
{
}

void ColoredShaderPainter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColoredShaderPainter);
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(projectionLocation,"projectionLocation");
	HX_MARK_MEMBER_NAME(bufferIndex,"bufferIndex");
	HX_MARK_MEMBER_NAME(rectVertexBuffer,"rectVertexBuffer");
	HX_MARK_MEMBER_NAME(rectVertices,"rectVertices");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(triangleBufferIndex,"triangleBufferIndex");
	HX_MARK_MEMBER_NAME(triangleVertexBuffer,"triangleVertexBuffer");
	HX_MARK_MEMBER_NAME(triangleVertices,"triangleVertices");
	HX_MARK_MEMBER_NAME(triangleIndexBuffer,"triangleIndexBuffer");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(myPipeline,"myPipeline");
	HX_MARK_MEMBER_NAME(sourceBlend,"sourceBlend");
	HX_MARK_MEMBER_NAME(destinationBlend,"destinationBlend");
	HX_MARK_END_CLASS();
}

void ColoredShaderPainter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(projectionLocation,"projectionLocation");
	HX_VISIT_MEMBER_NAME(bufferIndex,"bufferIndex");
	HX_VISIT_MEMBER_NAME(rectVertexBuffer,"rectVertexBuffer");
	HX_VISIT_MEMBER_NAME(rectVertices,"rectVertices");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(triangleBufferIndex,"triangleBufferIndex");
	HX_VISIT_MEMBER_NAME(triangleVertexBuffer,"triangleVertexBuffer");
	HX_VISIT_MEMBER_NAME(triangleVertices,"triangleVertices");
	HX_VISIT_MEMBER_NAME(triangleIndexBuffer,"triangleIndexBuffer");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(myPipeline,"myPipeline");
	HX_VISIT_MEMBER_NAME(sourceBlend,"sourceBlend");
	HX_VISIT_MEMBER_NAME(destinationBlend,"destinationBlend");
}

Dynamic ColoredShaderPainter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endTris") ) { return endTris_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pipeline") ) { if (inCallProp == hx::paccAlways) return get_pipeline(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"endRects") ) { return endRects_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"myPipeline") ) { return myPipeline; }
		if (HX_FIELD_EQ(inName,"drawBuffer") ) { return drawBuffer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferIndex") ) { return bufferIndex; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"sourceBlend") ) { return sourceBlend; }
		if (HX_FIELD_EQ(inName,"initBuffers") ) { return initBuffers_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rectVertices") ) { return rectVertices; }
		if (HX_FIELD_EQ(inName,"get_pipeline") ) { return get_pipeline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pipeline") ) { return set_pipeline_dyn(); }
		if (HX_FIELD_EQ(inName,"setTriColors") ) { return setTriColors_dyn(); }
		if (HX_FIELD_EQ(inName,"fillTriangle") ) { return fillTriangle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setProjection") ) { return setProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"setRectColors") ) { return setRectColors_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriBuffer") ) { return drawTriBuffer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setTriVertices") ) { return setTriVertices_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setRectVertices") ) { return setRectVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return projectionMatrix; }
		if (HX_FIELD_EQ(inName,"rectVertexBuffer") ) { return rectVertexBuffer; }
		if (HX_FIELD_EQ(inName,"triangleVertices") ) { return triangleVertices; }
		if (HX_FIELD_EQ(inName,"destinationBlend") ) { return destinationBlend; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectionLocation") ) { return projectionLocation; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"triangleBufferIndex") ) { return triangleBufferIndex; }
		if (HX_FIELD_EQ(inName,"triangleIndexBuffer") ) { return triangleIndexBuffer; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"triangleVertexBuffer") ) { return triangleVertexBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

bool ColoredShaderPainter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"structure") ) { outValue = structure; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bufferSize") ) { outValue = bufferSize; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initShaders") ) { outValue = initShaders_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shaderPipeline") ) { outValue = shaderPipeline; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"triangleBufferSize") ) { outValue = triangleBufferSize; return true;  }
	}
	return false;
}

Dynamic ColoredShaderPainter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::kha::graphics4::Graphics >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pipeline") ) { if (inCallProp == hx::paccAlways) return set_pipeline(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"myPipeline") ) { myPipeline=inValue.Cast< ::kha::graphics4::PipelineState >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferIndex") ) { bufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::kha::graphics4::IndexBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sourceBlend") ) { sourceBlend=inValue.Cast< ::kha::graphics4::BlendingOperation >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rectVertices") ) { rectVertices=inValue.Cast< ::kha::arrays::Float32Array >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast< ::kha::math::FastMatrix4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rectVertexBuffer") ) { rectVertexBuffer=inValue.Cast< ::kha::graphics4::VertexBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"triangleVertices") ) { triangleVertices=inValue.Cast< ::kha::arrays::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destinationBlend") ) { destinationBlend=inValue.Cast< ::kha::graphics4::BlendingOperation >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectionLocation") ) { projectionLocation=inValue.Cast< ::kha::graphics4::ConstantLocation >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"triangleBufferIndex") ) { triangleBufferIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"triangleIndexBuffer") ) { triangleIndexBuffer=inValue.Cast< ::kha::graphics4::IndexBuffer >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"triangleVertexBuffer") ) { triangleVertexBuffer=inValue.Cast< ::kha::graphics4::VertexBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColoredShaderPainter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"structure") ) { structure=ioValue.Cast< ::kha::graphics4::VertexStructure >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bufferSize") ) { bufferSize=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shaderPipeline") ) { shaderPipeline=ioValue.Cast< ::kha::graphics4::PipelineState >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"triangleBufferSize") ) { triangleBufferSize=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ColoredShaderPainter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));
	outFields->push(HX_HCSTRING("projectionLocation","\xe4","\x59","\x25","\x9b"));
	outFields->push(HX_HCSTRING("bufferIndex","\xf2","\x2d","\x60","\x5b"));
	outFields->push(HX_HCSTRING("rectVertexBuffer","\xc8","\x6e","\xb4","\x97"));
	outFields->push(HX_HCSTRING("rectVertices","\x3d","\x8d","\xf6","\x54"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("triangleBufferIndex","\x0a","\x6c","\xd7","\x9e"));
	outFields->push(HX_HCSTRING("triangleVertexBuffer","\x6c","\xc6","\x88","\x35"));
	outFields->push(HX_HCSTRING("triangleVertices","\xe1","\x42","\x15","\x97"));
	outFields->push(HX_HCSTRING("triangleIndexBuffer","\xca","\xa3","\x1d","\x39"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("myPipeline","\xae","\x22","\x05","\xb9"));
	outFields->push(HX_HCSTRING("pipeline","\x22","\xbb","\x83","\x4b"));
	outFields->push(HX_HCSTRING("sourceBlend","\x76","\xad","\xfa","\xe3"));
	outFields->push(HX_HCSTRING("destinationBlend","\xe3","\xca","\xbf","\x2e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::math::FastMatrix4*/ ,(int)offsetof(ColoredShaderPainter_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsObject /*::kha::graphics4::ConstantLocation*/ ,(int)offsetof(ColoredShaderPainter_obj,projectionLocation),HX_HCSTRING("projectionLocation","\xe4","\x59","\x25","\x9b")},
	{hx::fsInt,(int)offsetof(ColoredShaderPainter_obj,bufferIndex),HX_HCSTRING("bufferIndex","\xf2","\x2d","\x60","\x5b")},
	{hx::fsObject /*::kha::graphics4::VertexBuffer*/ ,(int)offsetof(ColoredShaderPainter_obj,rectVertexBuffer),HX_HCSTRING("rectVertexBuffer","\xc8","\x6e","\xb4","\x97")},
	{hx::fsObject /*::kha::arrays::Float32Array*/ ,(int)offsetof(ColoredShaderPainter_obj,rectVertices),HX_HCSTRING("rectVertices","\x3d","\x8d","\xf6","\x54")},
	{hx::fsObject /*::kha::graphics4::IndexBuffer*/ ,(int)offsetof(ColoredShaderPainter_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsInt,(int)offsetof(ColoredShaderPainter_obj,triangleBufferIndex),HX_HCSTRING("triangleBufferIndex","\x0a","\x6c","\xd7","\x9e")},
	{hx::fsObject /*::kha::graphics4::VertexBuffer*/ ,(int)offsetof(ColoredShaderPainter_obj,triangleVertexBuffer),HX_HCSTRING("triangleVertexBuffer","\x6c","\xc6","\x88","\x35")},
	{hx::fsObject /*::kha::arrays::Float32Array*/ ,(int)offsetof(ColoredShaderPainter_obj,triangleVertices),HX_HCSTRING("triangleVertices","\xe1","\x42","\x15","\x97")},
	{hx::fsObject /*::kha::graphics4::IndexBuffer*/ ,(int)offsetof(ColoredShaderPainter_obj,triangleIndexBuffer),HX_HCSTRING("triangleIndexBuffer","\xca","\xa3","\x1d","\x39")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(ColoredShaderPainter_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::PipelineState*/ ,(int)offsetof(ColoredShaderPainter_obj,myPipeline),HX_HCSTRING("myPipeline","\xae","\x22","\x05","\xb9")},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(ColoredShaderPainter_obj,sourceBlend),HX_HCSTRING("sourceBlend","\x76","\xad","\xfa","\xe3")},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(ColoredShaderPainter_obj,destinationBlend),HX_HCSTRING("destinationBlend","\xe3","\xca","\xbf","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::graphics4::PipelineState*/ ,(void *) &ColoredShaderPainter_obj::shaderPipeline,HX_HCSTRING("shaderPipeline","\x67","\x63","\x91","\xfc")},
	{hx::fsObject /*::kha::graphics4::VertexStructure*/ ,(void *) &ColoredShaderPainter_obj::structure,HX_HCSTRING("structure","\x33","\x54","\x4f","\x47")},
	{hx::fsInt,(void *) &ColoredShaderPainter_obj::bufferSize,HX_HCSTRING("bufferSize","\xe1","\x09","\x64","\x9d")},
	{hx::fsInt,(void *) &ColoredShaderPainter_obj::triangleBufferSize,HX_HCSTRING("triangleBufferSize","\xc9","\x16","\x78","\xab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),
	HX_HCSTRING("projectionLocation","\xe4","\x59","\x25","\x9b"),
	HX_HCSTRING("bufferIndex","\xf2","\x2d","\x60","\x5b"),
	HX_HCSTRING("rectVertexBuffer","\xc8","\x6e","\xb4","\x97"),
	HX_HCSTRING("rectVertices","\x3d","\x8d","\xf6","\x54"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("triangleBufferIndex","\x0a","\x6c","\xd7","\x9e"),
	HX_HCSTRING("triangleVertexBuffer","\x6c","\xc6","\x88","\x35"),
	HX_HCSTRING("triangleVertices","\xe1","\x42","\x15","\x97"),
	HX_HCSTRING("triangleIndexBuffer","\xca","\xa3","\x1d","\x39"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("myPipeline","\xae","\x22","\x05","\xb9"),
	HX_HCSTRING("sourceBlend","\x76","\xad","\xfa","\xe3"),
	HX_HCSTRING("destinationBlend","\xe3","\xca","\xbf","\x2e"),
	HX_HCSTRING("get_pipeline","\x2b","\x6f","\x9d","\x00"),
	HX_HCSTRING("set_pipeline","\x9f","\x92","\x96","\x15"),
	HX_HCSTRING("setProjection","\xd1","\xc6","\x03","\x66"),
	HX_HCSTRING("initBuffers","\x43","\x12","\xfb","\x69"),
	HX_HCSTRING("setRectVertices","\xff","\x5f","\xac","\x73"),
	HX_HCSTRING("setRectColors","\x36","\x38","\x37","\x6d"),
	HX_HCSTRING("setTriVertices","\xc2","\xc3","\x7b","\x76"),
	HX_HCSTRING("setTriColors","\x39","\x15","\x93","\x3b"),
	HX_HCSTRING("drawBuffer","\x24","\x38","\x58","\x12"),
	HX_HCSTRING("drawTriBuffer","\xe7","\x5f","\x78","\x80"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("fillTriangle","\x6b","\x04","\x3a","\x92"),
	HX_HCSTRING("endTris","\x63","\x56","\x28","\x2f"),
	HX_HCSTRING("endRects","\xf4","\xc4","\xb9","\xe4"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColoredShaderPainter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColoredShaderPainter_obj::shaderPipeline,"shaderPipeline");
	HX_MARK_MEMBER_NAME(ColoredShaderPainter_obj::structure,"structure");
	HX_MARK_MEMBER_NAME(ColoredShaderPainter_obj::bufferSize,"bufferSize");
	HX_MARK_MEMBER_NAME(ColoredShaderPainter_obj::triangleBufferSize,"triangleBufferSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColoredShaderPainter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColoredShaderPainter_obj::shaderPipeline,"shaderPipeline");
	HX_VISIT_MEMBER_NAME(ColoredShaderPainter_obj::structure,"structure");
	HX_VISIT_MEMBER_NAME(ColoredShaderPainter_obj::bufferSize,"bufferSize");
	HX_VISIT_MEMBER_NAME(ColoredShaderPainter_obj::triangleBufferSize,"triangleBufferSize");
};

#endif

hx::Class ColoredShaderPainter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("shaderPipeline","\x67","\x63","\x91","\xfc"),
	HX_HCSTRING("structure","\x33","\x54","\x4f","\x47"),
	HX_HCSTRING("bufferSize","\xe1","\x09","\x64","\x9d"),
	HX_HCSTRING("triangleBufferSize","\xc9","\x16","\x78","\xab"),
	HX_HCSTRING("initShaders","\x7e","\xf0","\xf0","\x17"),
	::String(null()) };

void ColoredShaderPainter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.ColoredShaderPainter","\xb3","\xb9","\x9f","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColoredShaderPainter_obj::__GetStatic;
	__mClass->mSetStaticField = &ColoredShaderPainter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColoredShaderPainter_obj >;
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

void ColoredShaderPainter_obj::__boot()
{
	shaderPipeline= null();
	structure= null();
	bufferSize= (int)100;
	triangleBufferSize= (int)100;
}

} // end namespace kha
} // end namespace graphics4
