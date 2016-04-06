#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor1
#include <kha/audio2/ogg/vorbis/data/Floor1.h>
#endif
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

Void Floor1_obj::__construct()
{
HX_STACK_FRAME("kha.audio2.ogg.vorbis.data.Floor1","new",0x5ac3ff27,"kha.audio2.ogg.vorbis.data.Floor1.new","kha/audio2/ogg/vorbis/data/Floor.hx",149,0x2f4d0043)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Floor1_obj::~Floor1_obj() { }

Dynamic Floor1_obj::__CreateEmpty() { return  new Floor1_obj; }
hx::ObjectPtr< Floor1_obj > Floor1_obj::__new()
{  hx::ObjectPtr< Floor1_obj > _result_ = new Floor1_obj();
	_result_->__construct();
	return _result_;}

Dynamic Floor1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Floor1_obj > _result_ = new Floor1_obj();
	_result_->__construct();
	return _result_;}


Floor1_obj::Floor1_obj()
{
}

void Floor1_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Floor1);
	HX_MARK_MEMBER_NAME(partitions,"partitions");
	HX_MARK_MEMBER_NAME(partitionClassList,"partitionClassList");
	HX_MARK_MEMBER_NAME(classDimensions,"classDimensions");
	HX_MARK_MEMBER_NAME(classSubclasses,"classSubclasses");
	HX_MARK_MEMBER_NAME(classMasterbooks,"classMasterbooks");
	HX_MARK_MEMBER_NAME(subclassBooks,"subclassBooks");
	HX_MARK_MEMBER_NAME(xlist,"xlist");
	HX_MARK_MEMBER_NAME(sortedOrder,"sortedOrder");
	HX_MARK_MEMBER_NAME(neighbors,"neighbors");
	HX_MARK_MEMBER_NAME(floor1Multiplier,"floor1Multiplier");
	HX_MARK_MEMBER_NAME(rangebits,"rangebits");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void Floor1_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(partitions,"partitions");
	HX_VISIT_MEMBER_NAME(partitionClassList,"partitionClassList");
	HX_VISIT_MEMBER_NAME(classDimensions,"classDimensions");
	HX_VISIT_MEMBER_NAME(classSubclasses,"classSubclasses");
	HX_VISIT_MEMBER_NAME(classMasterbooks,"classMasterbooks");
	HX_VISIT_MEMBER_NAME(subclassBooks,"subclassBooks");
	HX_VISIT_MEMBER_NAME(xlist,"xlist");
	HX_VISIT_MEMBER_NAME(sortedOrder,"sortedOrder");
	HX_VISIT_MEMBER_NAME(neighbors,"neighbors");
	HX_VISIT_MEMBER_NAME(floor1Multiplier,"floor1Multiplier");
	HX_VISIT_MEMBER_NAME(rangebits,"rangebits");
	HX_VISIT_MEMBER_NAME(values,"values");
}

Dynamic Floor1_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"xlist") ) { return xlist; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return values; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"neighbors") ) { return neighbors; }
		if (HX_FIELD_EQ(inName,"rangebits") ) { return rangebits; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"partitions") ) { return partitions; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortedOrder") ) { return sortedOrder; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subclassBooks") ) { return subclassBooks; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classDimensions") ) { return classDimensions; }
		if (HX_FIELD_EQ(inName,"classSubclasses") ) { return classSubclasses; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"classMasterbooks") ) { return classMasterbooks; }
		if (HX_FIELD_EQ(inName,"floor1Multiplier") ) { return floor1Multiplier; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"partitionClassList") ) { return partitionClassList; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Floor1_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"xlist") ) { xlist=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"neighbors") ) { neighbors=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangebits") ) { rangebits=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"partitions") ) { partitions=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortedOrder") ) { sortedOrder=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subclassBooks") ) { subclassBooks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"classDimensions") ) { classDimensions=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classSubclasses") ) { classSubclasses=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"classMasterbooks") ) { classMasterbooks=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floor1Multiplier") ) { floor1Multiplier=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"partitionClassList") ) { partitionClassList=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Floor1_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Floor1_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("partitions","\x49","\x0b","\xee","\x69"));
	outFields->push(HX_HCSTRING("partitionClassList","\x6c","\xed","\x99","\x48"));
	outFields->push(HX_HCSTRING("classDimensions","\xa5","\xb0","\x96","\x6c"));
	outFields->push(HX_HCSTRING("classSubclasses","\x7e","\xc7","\xa0","\xa8"));
	outFields->push(HX_HCSTRING("classMasterbooks","\xf0","\x2e","\xf5","\x83"));
	outFields->push(HX_HCSTRING("subclassBooks","\x52","\xd6","\x30","\xb1"));
	outFields->push(HX_HCSTRING("xlist","\xd6","\xb8","\xc8","\x5f"));
	outFields->push(HX_HCSTRING("sortedOrder","\x11","\xf0","\x86","\x4a"));
	outFields->push(HX_HCSTRING("neighbors","\x41","\xdf","\x79","\x94"));
	outFields->push(HX_HCSTRING("floor1Multiplier","\xc6","\x9c","\x90","\xc8"));
	outFields->push(HX_HCSTRING("rangebits","\x43","\xc3","\x28","\x11"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Floor1_obj,partitions),HX_HCSTRING("partitions","\x49","\x0b","\xee","\x69")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Floor1_obj,partitionClassList),HX_HCSTRING("partitionClassList","\x6c","\xed","\x99","\x48")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Floor1_obj,classDimensions),HX_HCSTRING("classDimensions","\xa5","\xb0","\x96","\x6c")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Floor1_obj,classSubclasses),HX_HCSTRING("classSubclasses","\x7e","\xc7","\xa0","\xa8")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Floor1_obj,classMasterbooks),HX_HCSTRING("classMasterbooks","\xf0","\x2e","\xf5","\x83")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Floor1_obj,subclassBooks),HX_HCSTRING("subclassBooks","\x52","\xd6","\x30","\xb1")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Floor1_obj,xlist),HX_HCSTRING("xlist","\xd6","\xb8","\xc8","\x5f")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Floor1_obj,sortedOrder),HX_HCSTRING("sortedOrder","\x11","\xf0","\x86","\x4a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Floor1_obj,neighbors),HX_HCSTRING("neighbors","\x41","\xdf","\x79","\x94")},
	{hx::fsInt,(int)offsetof(Floor1_obj,floor1Multiplier),HX_HCSTRING("floor1Multiplier","\xc6","\x9c","\x90","\xc8")},
	{hx::fsInt,(int)offsetof(Floor1_obj,rangebits),HX_HCSTRING("rangebits","\x43","\xc3","\x28","\x11")},
	{hx::fsInt,(int)offsetof(Floor1_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("partitions","\x49","\x0b","\xee","\x69"),
	HX_HCSTRING("partitionClassList","\x6c","\xed","\x99","\x48"),
	HX_HCSTRING("classDimensions","\xa5","\xb0","\x96","\x6c"),
	HX_HCSTRING("classSubclasses","\x7e","\xc7","\xa0","\xa8"),
	HX_HCSTRING("classMasterbooks","\xf0","\x2e","\xf5","\x83"),
	HX_HCSTRING("subclassBooks","\x52","\xd6","\x30","\xb1"),
	HX_HCSTRING("xlist","\xd6","\xb8","\xc8","\x5f"),
	HX_HCSTRING("sortedOrder","\x11","\xf0","\x86","\x4a"),
	HX_HCSTRING("neighbors","\x41","\xdf","\x79","\x94"),
	HX_HCSTRING("floor1Multiplier","\xc6","\x9c","\x90","\xc8"),
	HX_HCSTRING("rangebits","\x43","\xc3","\x28","\x11"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Floor1_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Floor1_obj::__mClass,"__mClass");
};

#endif

hx::Class Floor1_obj::__mClass;

void Floor1_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Floor1","\xb5","\xdf","\xa5","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Floor1_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Floor1_obj >;
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
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
