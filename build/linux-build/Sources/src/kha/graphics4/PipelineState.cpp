#include <hxcpp.h>

#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_graphics4_ConstantLocation
#include <kha/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_graphics4_FragmentShader
#include <kha/graphics4/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineState
#include <kha/graphics4/PipelineState.h>
#endif
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#include <kha/graphics4/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexElement
#include <kha/graphics4/VertexElement.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexShader
#include <kha/graphics4/VertexShader.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_ConstantLocation
#include <kha/kore/graphics4/ConstantLocation.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_TextureUnit
#include <kha/kore/graphics4/TextureUnit.h>
#endif
namespace kha{
namespace graphics4{

Void PipelineState_obj::__construct()
{
HX_STACK_FRAME("kha.graphics4.PipelineState","new",0x339c2ff2,"kha.graphics4.PipelineState.new","kha/graphics4/PipelineState.hx",16,0x454a2300)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	this->init();
}
;
	return null();
}

//PipelineState_obj::~PipelineState_obj() { }

Dynamic PipelineState_obj::__CreateEmpty() { return  new PipelineState_obj; }
hx::ObjectPtr< PipelineState_obj > PipelineState_obj::__new()
{  hx::ObjectPtr< PipelineState_obj > _result_ = new PipelineState_obj();
	_result_->__construct();
	return _result_;}

Dynamic PipelineState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PipelineState_obj > _result_ = new PipelineState_obj();
	_result_->__construct();
	return _result_;}

Void PipelineState_obj::init( ){

		program = new Kore::Program();
	
{
		HX_STACK_FRAME("kha.graphics4.PipelineState","init",0xf1c67b3e,"kha.graphics4.PipelineState.init","kha/graphics4/PipelineState.hx",24,0x454a2300)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,init,(void))

Void PipelineState_obj::setVertexShader( ::kha::graphics4::VertexShader shader){
{
		HX_STACK_FRAME("kha.graphics4.PipelineState","setVertexShader",0x118df6fd,"kha.graphics4.PipelineState.setVertexShader","kha/graphics4/PipelineState.hx",28,0x454a2300)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(29)
		::kha::graphics4::VertexShader tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		this->setVertexShaderImpl(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PipelineState_obj,setVertexShader,(void))

Void PipelineState_obj::setVertexShaderImpl( ::kha::graphics4::VertexShader shader){

		program->setVertexShader(shader->shader);
	
{
		HX_STACK_FRAME("kha.graphics4.PipelineState","setVertexShaderImpl",0xcbb5647d,"kha.graphics4.PipelineState.setVertexShaderImpl","kha/graphics4/PipelineState.hx",35,0x454a2300)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PipelineState_obj,setVertexShaderImpl,(void))

Void PipelineState_obj::linkWithStructures2( ::kha::graphics4::VertexStructure structure0,::kha::graphics4::VertexStructure structure1,::kha::graphics4::VertexStructure structure2,::kha::graphics4::VertexStructure structure3,int size){

		program->setVertexShader(vertexShader->shader);
		program->setFragmentShader(fragmentShader->shader);
		Kore::VertexStructure s0, s1, s2, s3;
		Kore::VertexStructure* structures2[4] = { &s0, &s1, &s2, &s3 };
		::kha::graphics4::VertexStructure* structures[4] = { &structure0, &structure1, &structure2, &structure3 };
		for (int i1 = 0; i1 < size; ++i1) {
			for (int i2 = 0; i2 < (*structures[i1])->size(); ++i2) {
				Kore::VertexData data;
			switch ((*structures[i1])->get(i2)->data->index) {
				case 0:
					data = Kore::Float1VertexData;
					break;
				case 1:
					data = Kore::Float2VertexData;
					break;
				case 2:
					data = Kore::Float3VertexData;
					break;
				case 3:
					data = Kore::Float4VertexData;
					break;
				case 4:
					data = Kore::Float4x4VertexData;
					break;
				}
				structures2[i1]->add((*structures[i1])->get(i2)->name, data);
			}
		}
		program->link(structures2, size);
	
{
		HX_STACK_FRAME("kha.graphics4.PipelineState","linkWithStructures2",0x8868fba4,"kha.graphics4.PipelineState.linkWithStructures2","kha/graphics4/PipelineState.hx",70,0x454a2300)
		HX_STACK_THIS(this)
		HX_STACK_ARG(structure0,"structure0")
		HX_STACK_ARG(structure1,"structure1")
		HX_STACK_ARG(structure2,"structure2")
		HX_STACK_ARG(structure3,"structure3")
		HX_STACK_ARG(size,"size")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(PipelineState_obj,linkWithStructures2,(void))

Void PipelineState_obj::compile( ){
{
		HX_STACK_FRAME("kha.graphics4.PipelineState","compile",0x1c53b605,"kha.graphics4.PipelineState.compile","kha/graphics4/PipelineState.hx",74,0x454a2300)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		Array< ::Dynamic > tmp = this->inputLayout;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		::kha::graphics4::VertexStructure tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		if ((tmp2)){
			HX_STACK_LINE(76)
			Array< ::Dynamic > tmp4 = this->inputLayout;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			tmp3 = tmp4->__get((int)0).StaticCast< ::kha::graphics4::VertexStructure >();
		}
		else{
			HX_STACK_LINE(76)
			tmp3 = null();
		}
		HX_STACK_LINE(77)
		Array< ::Dynamic > tmp4 = this->inputLayout;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		bool tmp6 = (tmp5 > (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		::kha::graphics4::VertexStructure tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		if ((tmp6)){
			HX_STACK_LINE(77)
			Array< ::Dynamic > tmp8 = this->inputLayout;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			tmp7 = tmp8->__get((int)1).StaticCast< ::kha::graphics4::VertexStructure >();
		}
		else{
			HX_STACK_LINE(77)
			tmp7 = null();
		}
		HX_STACK_LINE(78)
		Array< ::Dynamic > tmp8 = this->inputLayout;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		int tmp9 = tmp8->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		bool tmp10 = (tmp9 > (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		::kha::graphics4::VertexStructure tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(78)
		if ((tmp10)){
			HX_STACK_LINE(78)
			Array< ::Dynamic > tmp12 = this->inputLayout;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(78)
			tmp11 = tmp12->__get((int)2).StaticCast< ::kha::graphics4::VertexStructure >();
		}
		else{
			HX_STACK_LINE(78)
			tmp11 = null();
		}
		HX_STACK_LINE(79)
		Array< ::Dynamic > tmp12 = this->inputLayout;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(79)
		int tmp13 = tmp12->length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(79)
		bool tmp14 = (tmp13 > (int)3);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(79)
		::kha::graphics4::VertexStructure tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(79)
		if ((tmp14)){
			HX_STACK_LINE(79)
			Array< ::Dynamic > tmp16 = this->inputLayout;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(79)
			tmp15 = tmp16->__get((int)3).StaticCast< ::kha::graphics4::VertexStructure >();
		}
		else{
			HX_STACK_LINE(79)
			tmp15 = null();
		}
		HX_STACK_LINE(80)
		Array< ::Dynamic > tmp16 = this->inputLayout;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(80)
		int tmp17 = tmp16->length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(75)
		this->linkWithStructures2(tmp3,tmp7,tmp11,tmp15,tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,compile,(void))

::kha::graphics4::ConstantLocation PipelineState_obj::getConstantLocation( ::String name){
	HX_STACK_FRAME("kha.graphics4.PipelineState","getConstantLocation",0x57767c01,"kha.graphics4.PipelineState.getConstantLocation","kha/graphics4/PipelineState.hx",83,0x454a2300)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(84)
	::kha::kore::graphics4::ConstantLocation location = ::kha::kore::graphics4::ConstantLocation_obj::__new();		HX_STACK_VAR(location,"location");
	HX_STACK_LINE(85)
	::kha::kore::graphics4::ConstantLocation tmp = location;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	this->initConstantLocation(tmp,tmp1);
	HX_STACK_LINE(86)
	::kha::kore::graphics4::ConstantLocation tmp2 = location;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(PipelineState_obj,getConstantLocation,return )

Void PipelineState_obj::initConstantLocation( ::kha::kore::graphics4::ConstantLocation location,::String name){

		location->location = program->getConstantLocation(name.c_str());
	
{
		HX_STACK_FRAME("kha.graphics4.PipelineState","initConstantLocation",0x84c02317,"kha.graphics4.PipelineState.initConstantLocation","kha/graphics4/PipelineState.hx",92,0x454a2300)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(name,"name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PipelineState_obj,initConstantLocation,(void))

::kha::graphics4::TextureUnit PipelineState_obj::getTextureUnit( ::String name){
	HX_STACK_FRAME("kha.graphics4.PipelineState","getTextureUnit",0x9659a1b7,"kha.graphics4.PipelineState.getTextureUnit","kha/graphics4/PipelineState.hx",96,0x454a2300)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(97)
	::kha::kore::graphics4::TextureUnit unit = ::kha::kore::graphics4::TextureUnit_obj::__new();		HX_STACK_VAR(unit,"unit");
	HX_STACK_LINE(98)
	::kha::kore::graphics4::TextureUnit tmp = unit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	this->initTextureUnit(tmp,tmp1);
	HX_STACK_LINE(99)
	::kha::kore::graphics4::TextureUnit tmp2 = unit;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(PipelineState_obj,getTextureUnit,return )

Void PipelineState_obj::initTextureUnit( ::kha::kore::graphics4::TextureUnit unit,::String name){

		unit->unit = program->getTextureUnit(name.c_str());
	
{
		HX_STACK_FRAME("kha.graphics4.PipelineState","initTextureUnit",0x465d5261,"kha.graphics4.PipelineState.initTextureUnit","kha/graphics4/PipelineState.hx",105,0x454a2300)
		HX_STACK_THIS(this)
		HX_STACK_ARG(unit,"unit")
		HX_STACK_ARG(name,"name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PipelineState_obj,initTextureUnit,(void))

Void PipelineState_obj::set( ){

		program->set();
	
{
		HX_STACK_FRAME("kha.graphics4.PipelineState","set",0x339ffb34,"kha.graphics4.PipelineState.set","kha/graphics4/PipelineState.hx",112,0x454a2300)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,set,(void))

Void PipelineState_obj::unused( ){
{
		HX_STACK_FRAME("kha.graphics4.PipelineState","unused",0xa100c0c4,"kha.graphics4.PipelineState.unused","kha/graphics4/PipelineState.hx",116,0x454a2300)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::kha::graphics4::VertexElement include1 = ::kha::graphics4::VertexElement_obj::__new(HX_HCSTRING("include","\x28","\xfe","\xf6","\x51"),::kha::graphics4::VertexData_obj::Float2);		HX_STACK_VAR(include1,"include1");
		HX_STACK_LINE(118)
		::kha::graphics4::VertexShader include2 = ::kha::graphics4::VertexShader_obj::__new(null());		HX_STACK_VAR(include2,"include2");
		HX_STACK_LINE(119)
		::kha::graphics4::FragmentShader include21 = ::kha::graphics4::FragmentShader_obj::__new(null());		HX_STACK_VAR(include21,"include21");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PipelineState_obj,unused,(void))


PipelineState_obj::PipelineState_obj()
{
}

Dynamic PipelineState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unused") ) { return unused_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getTextureUnit") ) { return getTextureUnit_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setVertexShader") ) { return setVertexShader_dyn(); }
		if (HX_FIELD_EQ(inName,"initTextureUnit") ) { return initTextureUnit_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setVertexShaderImpl") ) { return setVertexShaderImpl_dyn(); }
		if (HX_FIELD_EQ(inName,"linkWithStructures2") ) { return linkWithStructures2_dyn(); }
		if (HX_FIELD_EQ(inName,"getConstantLocation") ) { return getConstantLocation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initConstantLocation") ) { return initConstantLocation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("setVertexShader","\x6b","\x84","\xeb","\xdb"),
	HX_HCSTRING("setVertexShaderImpl","\xeb","\x40","\x71","\x5e"),
	HX_HCSTRING("linkWithStructures2","\x12","\xd8","\x24","\x1b"),
	HX_HCSTRING("compile","\x73","\x25","\x6f","\x83"),
	HX_HCSTRING("getConstantLocation","\x6f","\x58","\x32","\xea"),
	HX_HCSTRING("initConstantLocation","\xe9","\x26","\x65","\x56"),
	HX_HCSTRING("getTextureUnit","\x09","\x1c","\xc7","\x8b"),
	HX_HCSTRING("initTextureUnit","\xcf","\xdf","\xba","\x10"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unused","\x16","\x99","\x82","\x6b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PipelineState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PipelineState_obj::__mClass,"__mClass");
};

#endif

hx::Class PipelineState_obj::__mClass;

void PipelineState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.PipelineState","\x00","\x0f","\xad","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PipelineState_obj >;
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
} // end namespace graphics4
