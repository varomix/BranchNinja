#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_kore_Sound
#include <kha/kore/Sound.h>
#endif
namespace kha{
namespace kore{

Void Sound_obj::__construct(::String filename)
{
HX_STACK_FRAME("kha.kore.Sound","new",0x4b148154,"kha.kore.Sound.new","kha/kore/Sound.hx",15,0x7012c0fc)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->filename = filename;
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::String filename)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(filename);
	return _result_;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Sound_obj::uncompress2( ){

		sound = new Kore::Sound(filename.c_str());
		if (sound->format.channels == 1) {
			if (sound->format.bitsPerSample == 8) {
				this->_createData(sound->size * 2);
				for (int i = 0; i < sound->size; ++i) {
					uncompressedData[i * 2 + 0] = sound->data[i] / 255.0 * 2.0 - 1.0;
					uncompressedData[i * 2 + 1] = sound->data[i] / 255.0 * 2.0 - 1.0;
				}
			}
			else if (sound->format.bitsPerSample == 16) {
				this->_createData(sound->size);
				Kore::s16* sdata = (Kore::s16*)&sound->data[0];
				for (int i = 0; i < sound->size / 2; ++i) {
					uncompressedData[i * 2 + 0] = sdata[i] / 32767.0;
					uncompressedData[i * 2 + 1] = sdata[i] / 32767.0;
				}
			}
			else {
				this->_createData(2);
			}
		}
		else {
			if (sound->format.bitsPerSample == 8) {
				this->_createData(sound->size);
				for (int i = 0; i < sound->size; ++i) {
					uncompressedData[i] = sound->data[i] / 255.0 * 2.0 - 1.0;
				}
			}
			else if (sound->format.bitsPerSample == 16) {
				this->_createData(sound->size / 2);
				Kore::s16* sdata = (Kore::s16*)&sound->data[0];
				for (int i = 0; i < sound->size / 2; ++i) {
					uncompressedData[i] = sdata[i] / 32767.0;
				}
			}
			else {
				this->_createData(2);
			}
		}
	
{
		HX_STACK_FRAME("kha.kore.Sound","uncompress2",0x5a4eb1cb,"kha.kore.Sound.uncompress2","kha/kore/Sound.hx",61,0x7012c0fc)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,uncompress2,(void))

Void Sound_obj::uncompress( Dynamic done){
{
		HX_STACK_FRAME("kha.kore.Sound","uncompress",0xc94d4487,"kha.kore.Sound.uncompress","kha/kore/Sound.hx",65,0x7012c0fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(66)
		this->uncompress2();
		HX_STACK_LINE(67)
		this->compressedData = null();
		HX_STACK_LINE(68)
		done().Cast< Void >();
	}
return null();
}


Void Sound_obj::unload2( ){
delete sound; sound = nullptr;
{
		HX_STACK_FRAME("kha.kore.Sound","unload2",0x241e7947,"kha.kore.Sound.unload2","kha/kore/Sound.hx",83,0x7012c0fc)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,unload2,(void))

Void Sound_obj::unload( ){
{
		HX_STACK_FRAME("kha.kore.Sound","unload",0x49a2008b,"kha.kore.Sound.unload","kha/kore/Sound.hx",87,0x7012c0fc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		this->super::unload();
		HX_STACK_LINE(89)
		this->unload2();
	}
return null();
}


Void Sound_obj::_createData( int size){
{
		HX_STACK_FRAME("kha.kore.Sound","_createData",0x3883a959,"kha.kore.Sound._createData","kha/kore/Sound.hx",92,0x7012c0fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(93)
		Array< Float > tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(93)
			Array< Float > tmp1 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(93)
			this1 = tmp1;
			HX_STACK_LINE(93)
			int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			this1->__SetSizeExact(tmp2);
			HX_STACK_LINE(93)
			tmp = this1;
		}
		HX_STACK_LINE(93)
		this->uncompressedData = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,_createData,(void))


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(filename,"filename");
	::kha::Sound_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filename,"filename");
	::kha::Sound_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unload2") ) { return unload2_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"filename") ) { return filename; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uncompress2") ) { return uncompress2_dyn(); }
		if (HX_FIELD_EQ(inName,"_createData") ) { return _createData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"filename") ) { filename=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Sound_obj,filename),HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77"),
	HX_HCSTRING("uncompress2","\xd7","\xec","\x45","\x49"),
	HX_HCSTRING("uncompress","\xfb","\x2e","\x83","\x09"),
	HX_HCSTRING("unload2","\x53","\x3e","\x80","\x75"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("_createData","\x65","\xe4","\x7a","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

hx::Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.Sound","\x62","\x87","\xc4","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Sound_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
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
} // end namespace kore
