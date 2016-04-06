#ifndef INCLUDED_kha_graphics4_VertexBuffer
#define INCLUDED_kha_graphics4_VertexBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,arrays,Float32Array)
HX_DECLARE_CLASS2(kha,graphics4,Usage)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)

#include <Kore/pch.h>
#include <Kore/Graphics/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES  VertexBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexBuffer_obj OBJ_;
		VertexBuffer_obj();
		Void __construct(int vertexCount,::kha::graphics4::VertexStructure structure,::kha::graphics4::Usage usage,hx::Null< int >  __o_instanceDataStepRate,hx::Null< bool >  __o_canRead);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.VertexBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VertexBuffer_obj > __new(int vertexCount,::kha::graphics4::VertexStructure structure,::kha::graphics4::Usage usage,hx::Null< int >  __o_instanceDataStepRate,hx::Null< bool >  __o_canRead);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexBuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VertexBuffer","\xa4","\xfb","\xbb","\x38"); }

		::kha::arrays::Float32Array data;
		virtual Void init( int vertexCount,::kha::graphics4::VertexStructure structure,int instanceDataStepRate);
		Dynamic init_dyn();

		virtual ::kha::arrays::Float32Array lock( Dynamic start,Dynamic count);
		Dynamic lock_dyn();

		virtual Void unlock( );
		Dynamic unlock_dyn();

		virtual int stride( );
		Dynamic stride_dyn();

		virtual int count( );
		Dynamic count_dyn();

Kore::VertexBuffer* buffer;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_VertexBuffer */ 
