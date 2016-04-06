#include <hxcpp.h>

#ifndef INCLUDED_kha2d_Rectangle
#include <kha2d/Rectangle.h>
#endif
namespace kha2d{

Void Rectangle_obj::__construct(Float x,Float y,Float width,Float height)
{
HX_STACK_FRAME("kha2d.Rectangle","new",0x39428729,"kha2d.Rectangle.new","Sources/kha2d/Rectangle.hx",9,0xbba31dbf)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(10)
	this->x = x;
	HX_STACK_LINE(11)
	this->y = y;
	HX_STACK_LINE(12)
	this->width = width;
	HX_STACK_LINE(13)
	this->height = height;
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(Float x,Float y,Float width,Float height)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(x,y,width,height);
	return _result_;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Rectangle_obj::setPos( int x,int y){
{
		HX_STACK_FRAME("kha2d.Rectangle","setPos",0xd0efd7e9,"kha2d.Rectangle.setPos","Sources/kha2d/Rectangle.hx",16,0xbba31dbf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(17)
		this->x = x;
		HX_STACK_LINE(18)
		this->y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,setPos,(void))

Void Rectangle_obj::moveX( int xdelta){
{
		HX_STACK_FRAME("kha2d.Rectangle","moveX",0x67868730,"kha2d.Rectangle.moveX","Sources/kha2d/Rectangle.hx",22,0xbba31dbf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xdelta,"xdelta")
		HX_STACK_LINE(22)
		hx::AddEq(this->x,xdelta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,moveX,(void))

Void Rectangle_obj::moveY( int ydelta){
{
		HX_STACK_FRAME("kha2d.Rectangle","moveY",0x67868731,"kha2d.Rectangle.moveY","Sources/kha2d/Rectangle.hx",26,0xbba31dbf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ydelta,"ydelta")
		HX_STACK_LINE(26)
		hx::AddEq(this->y,ydelta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,moveY,(void))

bool Rectangle_obj::collision( ::kha2d::Rectangle r){
	HX_STACK_FRAME("kha2d.Rectangle","collision",0x63701bfb,"kha2d.Rectangle.collision","Sources/kha2d/Rectangle.hx",29,0xbba31dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(30)
	bool a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(31)
	bool b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(32)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Float tmp1 = r->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	if ((tmp2)){
		HX_STACK_LINE(32)
		Float tmp3 = r->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(32)
		Float tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(32)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(32)
		bool tmp7 = (tmp3 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(32)
		a = tmp7;
	}
	else{
		HX_STACK_LINE(33)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		Float tmp4 = (r->x + r->width);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		a = tmp5;
	}
	HX_STACK_LINE(34)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	Float tmp4 = r->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	if ((tmp5)){
		HX_STACK_LINE(34)
		Float tmp6 = r->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		Float tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(34)
		bool tmp10 = (tmp6 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		b = tmp10;
	}
	else{
		HX_STACK_LINE(35)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		Float tmp7 = (r->y + r->height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		b = tmp8;
	}
	HX_STACK_LINE(36)
	bool tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	if ((tmp6)){
		HX_STACK_LINE(36)
		tmp7 = b;
	}
	else{
		HX_STACK_LINE(36)
		tmp7 = false;
	}
	HX_STACK_LINE(36)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,collision,return )


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"moveX") ) { return moveX_dyn(); }
		if (HX_FIELD_EQ(inName,"moveY") ) { return moveY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"setPos") ) { return setPos_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"collision") ) { return collision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Rectangle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("setPos","\x12","\xeb","\x6c","\x6f"),
	HX_HCSTRING("moveX","\x27","\xcc","\x65","\x0c"),
	HX_HCSTRING("moveY","\x28","\xcc","\x65","\x0c"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

hx::Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha2d.Rectangle","\xb7","\xbe","\x7b","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Rectangle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rectangle_obj >;
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
