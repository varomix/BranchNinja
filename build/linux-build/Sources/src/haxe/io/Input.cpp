#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

int Input_obj::readByte( ){
	HX_STACK_FRAME("haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","/home/varomix/dev/Kha/Tools/haxe/std/haxe/io/Input.hx",48,0x6267c1f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	HX_STACK_DO_THROW(HX_HCSTRING("Not implemented","\x15","\x1e","\x32","\x34"));
	HX_STACK_LINE(48)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
	HX_STACK_FRAME("haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","/home/varomix/dev/Kha/Tools/haxe/std/haxe/io/Input.hx",61,0x6267c1f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(62)
	int k = len;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(63)
	Array< unsigned char > b = s->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(64)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	if ((tmp2)){
		HX_STACK_LINE(64)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(64)
		tmp3 = true;
	}
	HX_STACK_LINE(64)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	if ((tmp4)){
		HX_STACK_LINE(64)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		int tmp8 = s->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		tmp5 = (tmp7 > tmp8);
	}
	else{
		HX_STACK_LINE(64)
		tmp5 = true;
	}
	HX_STACK_LINE(64)
	if ((tmp5)){
		HX_STACK_LINE(65)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(66)
	while((true)){
		HX_STACK_LINE(66)
		bool tmp6 = (k > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		if ((tmp7)){
			HX_STACK_LINE(66)
			break;
		}
		HX_STACK_LINE(72)
		unsigned char tmp8 = this->readByte();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		b[pos] = tmp8;
		HX_STACK_LINE(76)
		(pos)++;
		HX_STACK_LINE(77)
		(k)--;
	}
	HX_STACK_LINE(79)
	int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

Void Input_obj::readFullBytes( ::haxe::io::Bytes s,int pos,int len){
{
		HX_STACK_FRAME("haxe.io.Input","readFullBytes",0x3db9a162,"haxe.io.Input.readFullBytes","/home/varomix/dev/Kha/Tools/haxe/std/haxe/io/Input.hx",131,0x6267c1f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			bool tmp = (len > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(131)
			if ((tmp1)){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(132)
			::haxe::io::Bytes tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			int tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			int tmp5 = this->readBytes(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			int k = tmp5;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(133)
			hx::AddEq(pos,k);
			HX_STACK_LINE(134)
			hx::SubEq(len,k);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readFullBytes,(void))

::haxe::io::Bytes Input_obj::read( int nbytes){
	HX_STACK_FRAME("haxe.io.Input","read",0x27b9839a,"haxe.io.Input.read","/home/varomix/dev/Kha/Tools/haxe/std/haxe/io/Input.hx",141,0x6267c1f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nbytes,"nbytes")
	HX_STACK_LINE(142)
	int tmp = nbytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	::haxe::io::Bytes s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(143)
	int p = (int)0;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(144)
	while((true)){
		HX_STACK_LINE(144)
		bool tmp2 = (nbytes > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		if ((tmp3)){
			HX_STACK_LINE(144)
			break;
		}
		HX_STACK_LINE(145)
		::haxe::io::Bytes tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		int tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		int tmp6 = nbytes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		int tmp7 = this->readBytes(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		int k = tmp7;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(146)
		bool tmp8 = (k == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		if ((tmp8)){
			HX_STACK_LINE(146)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
		}
		HX_STACK_LINE(147)
		hx::AddEq(p,k);
		HX_STACK_LINE(148)
		hx::SubEq(nbytes,k);
	}
	HX_STACK_LINE(150)
	::haxe::io::Bytes tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,read,return )

int Input_obj::readInt32( ){
	HX_STACK_FRAME("haxe.io.Input","readInt32",0xde2f3154,"haxe.io.Input.readInt32","/home/varomix/dev/Kha/Tools/haxe/std/haxe/io/Input.hx",275,0x6267c1f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	int tmp = this->readByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(277)
	int tmp1 = this->readByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(278)
	int tmp2 = this->readByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	int ch3 = tmp2;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(279)
	int tmp3 = this->readByte();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(279)
	int ch4 = tmp3;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(287)
	bool tmp4 = this->bigEndian;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(287)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(287)
	if ((tmp4)){
		HX_STACK_LINE(287)
		int tmp6 = ch4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		int tmp7 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(287)
		int tmp9 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(287)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(287)
		int tmp11 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(287)
		tmp5 = (int(tmp10) | int(tmp11));
	}
	else{
		HX_STACK_LINE(287)
		int tmp6 = ch1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		int tmp7 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(287)
		int tmp9 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(287)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(287)
		int tmp11 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(287)
		tmp5 = (int(tmp10) | int(tmp11));
	}
	HX_STACK_LINE(287)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt32,return )

::String Input_obj::readString( int len){
	HX_STACK_FRAME("haxe.io.Input","readString",0xfdebd00b,"haxe.io.Input.readString","/home/varomix/dev/Kha/Tools/haxe/std/haxe/io/Input.hx",294,0x6267c1f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(295)
	int tmp = len;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	::haxe::io::Bytes b = tmp1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(296)
	::haxe::io::Bytes tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(296)
	int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(296)
	this->readFullBytes(tmp2,(int)0,tmp3);
	HX_STACK_LINE(300)
	::String tmp4 = b->toString();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(300)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readString,return )


Input_obj::Input_obj()
{
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt32") ) { return readInt32_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readFullBytes") ) { return readFullBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Input_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Input_obj,bigEndian),HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readFullBytes","\x26","\x02","\x0b","\xce"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("readInt32","\x18","\xe0","\x07","\x8f"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Input_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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

} // end namespace haxe
} // end namespace io
