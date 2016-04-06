#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_VertexData
#include <kha/graphics4/VertexData.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexElement
#include <kha/graphics4/VertexElement.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <kha/graphics4/VertexStructure.h>
#endif
namespace kha{
namespace graphics4{

Void VertexStructure_obj::__construct()
{
HX_STACK_FRAME("kha.graphics4.VertexStructure","new",0x4962dad2,"kha.graphics4.VertexStructure.new","kha/graphics4/VertexStructure.hx",6,0xec7e48a0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	this->elements = tmp;
}
;
	return null();
}

//VertexStructure_obj::~VertexStructure_obj() { }

Dynamic VertexStructure_obj::__CreateEmpty() { return  new VertexStructure_obj; }
hx::ObjectPtr< VertexStructure_obj > VertexStructure_obj::__new()
{  hx::ObjectPtr< VertexStructure_obj > _result_ = new VertexStructure_obj();
	_result_->__construct();
	return _result_;}

Dynamic VertexStructure_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexStructure_obj > _result_ = new VertexStructure_obj();
	_result_->__construct();
	return _result_;}

Void VertexStructure_obj::add( ::String name,::kha::graphics4::VertexData data){
{
		HX_STACK_FRAME("kha.graphics4.VertexStructure","add",0x4958fc93,"kha.graphics4.VertexStructure.add","kha/graphics4/VertexStructure.hx",10,0xec7e48a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(11)
		Array< ::Dynamic > tmp = this->elements;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(11)
		::kha::graphics4::VertexElement tmp1 = ::kha::graphics4::VertexElement_obj::__new(name,data);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11)
		tmp->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VertexStructure_obj,add,(void))

int VertexStructure_obj::size( ){
	HX_STACK_FRAME("kha.graphics4.VertexStructure","size",0xf06dba0f,"kha.graphics4.VertexStructure.size","kha/graphics4/VertexStructure.hx",14,0xec7e48a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15)
	Array< ::Dynamic > tmp = this->elements;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexStructure_obj,size,return )

int VertexStructure_obj::byteSize( ){
	HX_STACK_FRAME("kha.graphics4.VertexStructure","byteSize",0xf3dbe837,"kha.graphics4.VertexStructure.byteSize","kha/graphics4/VertexStructure.hx",18,0xec7e48a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	int byteSize = (int)0;		HX_STACK_VAR(byteSize,"byteSize");
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(21)
		Array< ::Dynamic > tmp = this->elements;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		int _g = tmp->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		while((true)){
			HX_STACK_LINE(21)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(21)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			if ((tmp2)){
				HX_STACK_LINE(21)
				break;
			}
			HX_STACK_LINE(21)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(22)
			Array< ::Dynamic > tmp4 = this->elements;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(22)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(22)
			::kha::graphics4::VertexElement tmp6 = tmp4->__get(tmp5).StaticCast< ::kha::graphics4::VertexElement >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(22)
			::kha::graphics4::VertexData tmp7 = tmp6->data;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(22)
			int tmp8 = this->dataByteSize(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(22)
			hx::AddEq(byteSize,tmp8);
		}
	}
	HX_STACK_LINE(25)
	int tmp = byteSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexStructure_obj,byteSize,return )

int VertexStructure_obj::dataByteSize( ::kha::graphics4::VertexData data){
	HX_STACK_FRAME("kha.graphics4.VertexStructure","dataByteSize",0xdfdf7381,"kha.graphics4.VertexStructure.dataByteSize","kha/graphics4/VertexStructure.hx",28,0xec7e48a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(29)
	switch( (int)(data->__Index())){
		case (int)0: {
			HX_STACK_LINE(31)
			return (int)1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(33)
			return (int)2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(35)
			return (int)3;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(37)
			return (int)4;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(39)
			return (int)16;
		}
		;break;
	}
	HX_STACK_LINE(41)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(VertexStructure_obj,dataByteSize,return )

::kha::graphics4::VertexElement VertexStructure_obj::get( int index){
	HX_STACK_FRAME("kha.graphics4.VertexStructure","get",0x495d8b08,"kha.graphics4.VertexStructure.get","kha/graphics4/VertexStructure.hx",44,0xec7e48a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(45)
	Array< ::Dynamic > tmp = this->elements;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	::kha::graphics4::VertexElement tmp2 = tmp->__get(tmp1).StaticCast< ::kha::graphics4::VertexElement >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(VertexStructure_obj,get,return )


VertexStructure_obj::VertexStructure_obj()
{
}

void VertexStructure_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexStructure);
	HX_MARK_MEMBER_NAME(elements,"elements");
	HX_MARK_END_CLASS();
}

void VertexStructure_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elements,"elements");
}

Dynamic VertexStructure_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { return elements; }
		if (HX_FIELD_EQ(inName,"byteSize") ) { return byteSize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataByteSize") ) { return dataByteSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexStructure_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { elements=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VertexStructure_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void VertexStructure_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("elements","\x37","\x36","\xc4","\x83"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VertexStructure_obj,elements),HX_HCSTRING("elements","\x37","\x36","\xc4","\x83")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("elements","\x37","\x36","\xc4","\x83"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("byteSize","\xe9","\x0f","\x00","\x4d"),
	HX_HCSTRING("dataByteSize","\x33","\x5c","\xf6","\xb8"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexStructure_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexStructure_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexStructure_obj::__mClass;

void VertexStructure_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics4.VertexStructure","\xe0","\xc9","\x4c","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &VertexStructure_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexStructure_obj >;
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
