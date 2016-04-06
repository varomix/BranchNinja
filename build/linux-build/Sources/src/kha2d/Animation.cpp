#include <hxcpp.h>

#ifndef INCLUDED_kha2d_Animation
#include <kha2d/Animation.h>
#endif
namespace kha2d{

Void Animation_obj::__construct(Array< int > indices,int speeddiv)
{
HX_STACK_FRAME("kha2d.Animation","new",0xb669307e,"kha2d.Animation.new","Sources/kha2d/Animation.hx",21,0x2941b60a)
HX_STACK_THIS(this)
HX_STACK_ARG(indices,"indices")
HX_STACK_ARG(speeddiv,"speeddiv")
{
	HX_STACK_LINE(22)
	this->indices = indices;
	HX_STACK_LINE(23)
	this->index = (int)0;
	HX_STACK_LINE(24)
	this->speeddiv = speeddiv;
}
;
	return null();
}

//Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(Array< int > indices,int speeddiv)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(indices,speeddiv);
	return _result_;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Animation_obj::take( ::kha2d::Animation animation){
{
		HX_STACK_FRAME("kha2d.Animation","take",0xe9957269,"kha2d.Animation.take","Sources/kha2d/Animation.hx",27,0x2941b60a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animation,"animation")
		HX_STACK_LINE(28)
		Array< int > tmp = this->indices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		Array< int > tmp1 = animation->indices;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		if ((tmp2)){
			HX_STACK_LINE(28)
			return null();
		}
		HX_STACK_LINE(29)
		this->indices = animation->indices;
		HX_STACK_LINE(30)
		this->speeddiv = animation->speeddiv;
		HX_STACK_LINE(31)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,take,(void))

int Animation_obj::get( ){
	HX_STACK_FRAME("kha2d.Animation","get",0xb663e0b4,"kha2d.Animation.get","Sources/kha2d/Animation.hx",34,0x2941b60a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	Array< int > tmp = this->indices;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	int tmp1 = this->index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	int tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,get,return )

int Animation_obj::getIndex( ){
	HX_STACK_FRAME("kha2d.Animation","getIndex",0x7d0f1dbe,"kha2d.Animation.getIndex","Sources/kha2d/Animation.hx",38,0x2941b60a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getIndex,return )

Void Animation_obj::setIndex( int index){
{
		HX_STACK_FRAME("kha2d.Animation","setIndex",0x2b6c7732,"kha2d.Animation.setIndex","Sources/kha2d/Animation.hx",42,0x2941b60a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(43)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Array< int > tmp1 = this->indices;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		if ((tmp3)){
			HX_STACK_LINE(43)
			this->index = index;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,setIndex,(void))

bool Animation_obj::next( ){
	HX_STACK_FRAME("kha2d.Animation","next",0xe5a13f15,"kha2d.Animation.next","Sources/kha2d/Animation.hx",46,0x2941b60a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	++(this->count);
	HX_STACK_LINE(48)
	int tmp = this->count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1 = this->speeddiv;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	int tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	if ((tmp3)){
		HX_STACK_LINE(49)
		++(this->index);
		HX_STACK_LINE(50)
		int tmp4 = this->index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		Array< int > tmp5 = this->indices;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		bool tmp7 = (tmp4 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		if ((tmp7)){
			HX_STACK_LINE(51)
			this->index = (int)0;
			HX_STACK_LINE(52)
			return false;
		}
	}
	HX_STACK_LINE(55)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,next,return )

Void Animation_obj::reset( ){
{
		HX_STACK_FRAME("kha2d.Animation","reset",0x550c6d6d,"kha2d.Animation.reset","Sources/kha2d/Animation.hx",58,0x2941b60a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		this->count = (int)0;
		HX_STACK_LINE(60)
		this->index = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,reset,(void))

::kha2d::Animation Animation_obj::create( int index){
	HX_STACK_FRAME("kha2d.Animation","create",0x896a6d9e,"kha2d.Animation.create","Sources/kha2d/Animation.hx",10,0x2941b60a)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(11)
	Array< int > tmp = Array_obj< int >::__new().Add(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Array< int > indices = tmp;		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(12)
	::kha2d::Animation tmp1 = ::kha2d::Animation_obj::__new(indices,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,create,return )

::kha2d::Animation Animation_obj::createRange( int minindex,int maxindex,int speeddiv){
	HX_STACK_FRAME("kha2d.Animation","createRange",0xa05a8b3f,"kha2d.Animation.createRange","Sources/kha2d/Animation.hx",15,0x2941b60a)
	HX_STACK_ARG(minindex,"minindex")
	HX_STACK_ARG(maxindex,"maxindex")
	HX_STACK_ARG(speeddiv,"speeddiv")
	HX_STACK_LINE(16)
	Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(17)
		int tmp = (maxindex - minindex);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		while((true)){
			HX_STACK_LINE(17)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(17)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			if ((tmp3)){
				HX_STACK_LINE(17)
				break;
			}
			HX_STACK_LINE(17)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(17)
			int tmp5 = (minindex + i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(17)
			indices->push(tmp5);
		}
	}
	HX_STACK_LINE(18)
	::kha2d::Animation tmp = ::kha2d::Animation_obj::__new(indices,speeddiv);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,createRange,return )


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(speeddiv,"speeddiv");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(speeddiv,"speeddiv");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(index,"index");
}

Dynamic Animation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"take") ) { return take_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"speeddiv") ) { return speeddiv; }
		if (HX_FIELD_EQ(inName,"getIndex") ) { return getIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setIndex") ) { return setIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Animation_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createRange") ) { outValue = createRange_dyn(); return true;  }
	}
	return false;
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"speeddiv") ) { speeddiv=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Animation_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("speeddiv","\x2a","\xd4","\xf6","\xae"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Animation_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsInt,(int)offsetof(Animation_obj,speeddiv),HX_HCSTRING("speeddiv","\x2a","\xd4","\xf6","\xae")},
	{hx::fsInt,(int)offsetof(Animation_obj,count),HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{hx::fsInt,(int)offsetof(Animation_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("speeddiv","\x2a","\xd4","\xf6","\xae"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("take","\x47","\xb8","\xf6","\x4c"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("getIndex","\x9c","\xaa","\xeb","\x1d"),
	HX_HCSTRING("setIndex","\x10","\x04","\x49","\xcc"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#endif

hx::Class Animation_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("createRange","\x21","\xdd","\x9a","\x0d"),
	::String(null()) };

void Animation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha2d.Animation","\x8c","\xd9","\x33","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Animation_obj::__GetStatic;
	__mClass->mSetStaticField = &Animation_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Animation_obj >;
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

} // end namespace kha2d
