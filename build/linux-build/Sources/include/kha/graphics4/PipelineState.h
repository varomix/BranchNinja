#ifndef INCLUDED_kha_graphics4_PipelineState
#define INCLUDED_kha_graphics4_PipelineState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <kha/graphics4/PipelineStateBase.h>
#endif
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,PipelineState)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,VertexShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
HX_DECLARE_CLASS3(kha,kore,graphics4,ConstantLocation)
HX_DECLARE_CLASS3(kha,kore,graphics4,TextureUnit)

#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  PipelineState_obj : public ::kha::graphics4::PipelineStateBase_obj{
	public:
		typedef ::kha::graphics4::PipelineStateBase_obj super;
		typedef PipelineState_obj OBJ_;
		PipelineState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.PipelineState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PipelineState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PipelineState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PipelineState","\x6f","\xdf","\x61","\xcd"); }

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void setVertexShader( ::kha::graphics4::VertexShader shader);
		Dynamic setVertexShader_dyn();

		virtual Void setVertexShaderImpl( ::kha::graphics4::VertexShader shader);
		Dynamic setVertexShaderImpl_dyn();

		virtual Void linkWithStructures2( ::kha::graphics4::VertexStructure structure0,::kha::graphics4::VertexStructure structure1,::kha::graphics4::VertexStructure structure2,::kha::graphics4::VertexStructure structure3,int size);
		Dynamic linkWithStructures2_dyn();

		virtual Void compile( );
		Dynamic compile_dyn();

		virtual ::kha::graphics4::ConstantLocation getConstantLocation( ::String name);
		Dynamic getConstantLocation_dyn();

		virtual Void initConstantLocation( ::kha::kore::graphics4::ConstantLocation location,::String name);
		Dynamic initConstantLocation_dyn();

		virtual ::kha::graphics4::TextureUnit getTextureUnit( ::String name);
		Dynamic getTextureUnit_dyn();

		virtual Void initTextureUnit( ::kha::kore::graphics4::TextureUnit unit,::String name);
		Dynamic initTextureUnit_dyn();

		virtual Void set( );
		Dynamic set_dyn();

		virtual Void unused( );
		Dynamic unused_dyn();

Kore::Program* program;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_PipelineState */ 
