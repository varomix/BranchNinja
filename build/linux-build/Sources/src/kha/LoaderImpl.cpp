#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Kravur
#include <kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_LoaderImpl
#include <kha/LoaderImpl.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha_kore_Sound
#include <kha/kore/Sound.h>
#endif
#ifndef INCLUDED_kha_kore_Video
#include <kha/kore/Video.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace kha{

Void LoaderImpl_obj::__construct()
{
	return null();
}

//LoaderImpl_obj::~LoaderImpl_obj() { }

Dynamic LoaderImpl_obj::__CreateEmpty() { return  new LoaderImpl_obj; }
hx::ObjectPtr< LoaderImpl_obj > LoaderImpl_obj::__new()
{  hx::ObjectPtr< LoaderImpl_obj > _result_ = new LoaderImpl_obj();
	_result_->__construct();
	return _result_;}

Dynamic LoaderImpl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoaderImpl_obj > _result_ = new LoaderImpl_obj();
	_result_->__construct();
	return _result_;}

Void LoaderImpl_obj::loadSoundFromDescription( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.LoaderImpl","loadSoundFromDescription",0xe0aa28ba,"kha.LoaderImpl.loadSoundFromDescription","kha/LoaderImpl.hx",14,0xe7c84980)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(15)
		::String tmp = desc->__Field(HX_HCSTRING("files","\x77","\xde","\x98","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		::kha::kore::Sound tmp1 = ::kha::kore::Sound_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		done(tmp1).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoaderImpl_obj,loadSoundFromDescription,(void))

Array< ::String > LoaderImpl_obj::getSoundFormats( ){
	HX_STACK_FRAME("kha.LoaderImpl","getSoundFormats",0x27f48852,"kha.LoaderImpl.getSoundFormats","kha/LoaderImpl.hx",18,0xe7c84980)
	HX_STACK_LINE(19)
	Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("wav","\x2c","\xa1","\x5a","\x00")).Add(HX_HCSTRING("ogg","\x4f","\x94","\x54","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoaderImpl_obj,getSoundFormats,return )

Void LoaderImpl_obj::loadImageFromDescription( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.LoaderImpl","loadImageFromDescription",0x995853ae,"kha.LoaderImpl.loadImageFromDescription","kha/LoaderImpl.hx",22,0xe7c84980)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(23)
		Dynamic tmp = desc;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		bool tmp1 = ::Reflect_obj::hasField(tmp,HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		if ((tmp1)){
			HX_STACK_LINE(23)
			tmp2 = desc->__Field(HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(23)
			tmp2 = false;
		}
		HX_STACK_LINE(23)
		bool readable = tmp2;		HX_STACK_VAR(readable,"readable");
		HX_STACK_LINE(24)
		::String tmp3 = desc->__Field(HX_HCSTRING("files","\x77","\xde","\x98","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		bool tmp4 = readable;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		::kha::Image tmp5 = ::kha::Image_obj::fromFile(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		done(tmp5).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoaderImpl_obj,loadImageFromDescription,(void))

Array< ::String > LoaderImpl_obj::getImageFormats( ){
	HX_STACK_FRAME("kha.LoaderImpl","getImageFormats",0x03849f46,"kha.LoaderImpl.getImageFormats","kha/LoaderImpl.hx",27,0xe7c84980)
	HX_STACK_LINE(28)
	Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00")).Add(HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoaderImpl_obj,getImageFormats,return )

Void LoaderImpl_obj::loadBlobFromDescription( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.LoaderImpl","loadBlobFromDescription",0xc375dd9e,"kha.LoaderImpl.loadBlobFromDescription","kha/LoaderImpl.hx",31,0xe7c84980)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(32)
		::String tmp = desc->__Field(HX_HCSTRING("files","\x77","\xde","\x98","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::haxe::io::Bytes tmp1 = ::sys::io::File_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::kha::Blob tmp2 = ::kha::Blob_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		done(tmp2).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoaderImpl_obj,loadBlobFromDescription,(void))

Void LoaderImpl_obj::loadFontFromDescription( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.LoaderImpl","loadFontFromDescription",0x8d450d6c,"kha.LoaderImpl.loadFontFromDescription","kha/LoaderImpl.hx",35,0xe7c84980)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(36)
		Dynamic tmp = desc;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Blob blob){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/LoaderImpl.hx",36,0xe7c84980)
			HX_STACK_ARG(blob,"blob")
			{
				HX_STACK_LINE(37)
				::kha::Kravur tmp1 = ::kha::Kravur_obj::__new(blob);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(37)
				done(tmp1).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(36)
		::kha::LoaderImpl_obj::loadBlobFromDescription(tmp, Dynamic(new _Function_1_1(done)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoaderImpl_obj,loadFontFromDescription,(void))

Void LoaderImpl_obj::loadVideoFromDescription( Dynamic desc,Dynamic done){
{
		HX_STACK_FRAME("kha.LoaderImpl","loadVideoFromDescription",0xb166228e,"kha.LoaderImpl.loadVideoFromDescription","kha/LoaderImpl.hx",41,0xe7c84980)
		HX_STACK_ARG(desc,"desc")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(42)
		::String tmp = desc->__Field(HX_HCSTRING("files","\x77","\xde","\x98","\x00"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::kha::kore::Video tmp1 = ::kha::kore::Video_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		done(tmp1).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoaderImpl_obj,loadVideoFromDescription,(void))

::String LoaderImpl_obj::videoFormat( ){
return ::String(Kore::System::videoFormats()[0]);
{
		HX_STACK_FRAME("kha.LoaderImpl","videoFormat",0xb96220e1,"kha.LoaderImpl.videoFormat","kha/LoaderImpl.hx",47,0xe7c84980)
		HX_STACK_LINE(47)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoaderImpl_obj,videoFormat,return )

Array< ::String > LoaderImpl_obj::getVideoFormats( ){
	HX_STACK_FRAME("kha.LoaderImpl","getVideoFormats",0x2db88e26,"kha.LoaderImpl.getVideoFormats","kha/LoaderImpl.hx",50,0xe7c84980)
	HX_STACK_LINE(51)
	::String tmp = ::kha::LoaderImpl_obj::videoFormat();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Array< ::String > tmp1 = Array_obj< ::String >::__new().Add(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoaderImpl_obj,getVideoFormats,return )

Void LoaderImpl_obj::showKeyboard( ){
Kore::System::showKeyboard();
{
		HX_STACK_FRAME("kha.LoaderImpl","showKeyboard",0x17068d15,"kha.LoaderImpl.showKeyboard","kha/LoaderImpl.hx",55,0xe7c84980)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoaderImpl_obj,showKeyboard,(void))

Void LoaderImpl_obj::hideKeyboard( ){
Kore::System::hideKeyboard();
{
		HX_STACK_FRAME("kha.LoaderImpl","hideKeyboard",0xac7eb9da,"kha.LoaderImpl.hideKeyboard","kha/LoaderImpl.hx",60,0xe7c84980)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoaderImpl_obj,hideKeyboard,(void))

Void LoaderImpl_obj::loadURL( ::String url){
Kore::System::loadURL(url);
{
		HX_STACK_FRAME("kha.LoaderImpl","loadURL",0x42883038,"kha.LoaderImpl.loadURL","kha/LoaderImpl.hx",65,0xe7c84980)
		HX_STACK_ARG(url,"url")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoaderImpl_obj,loadURL,(void))


LoaderImpl_obj::LoaderImpl_obj()
{
}

bool LoaderImpl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"loadURL") ) { outValue = loadURL_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoFormat") ) { outValue = videoFormat_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"showKeyboard") ) { outValue = showKeyboard_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hideKeyboard") ) { outValue = hideKeyboard_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSoundFormats") ) { outValue = getSoundFormats_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getImageFormats") ) { outValue = getImageFormats_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVideoFormats") ) { outValue = getVideoFormats_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"loadBlobFromDescription") ) { outValue = loadBlobFromDescription_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFontFromDescription") ) { outValue = loadFontFromDescription_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"loadSoundFromDescription") ) { outValue = loadSoundFromDescription_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadImageFromDescription") ) { outValue = loadImageFromDescription_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadVideoFromDescription") ) { outValue = loadVideoFromDescription_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoaderImpl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoaderImpl_obj::__mClass,"__mClass");
};

#endif

hx::Class LoaderImpl_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("loadSoundFromDescription","\xe9","\xf8","\x23","\x55"),
	HX_HCSTRING("getSoundFormats","\x03","\x7a","\x51","\x16"),
	HX_HCSTRING("loadImageFromDescription","\xdd","\x23","\xd2","\x0d"),
	HX_HCSTRING("getImageFormats","\xf7","\x90","\xe1","\xf1"),
	HX_HCSTRING("loadBlobFromDescription","\x4f","\x68","\x95","\x8a"),
	HX_HCSTRING("loadFontFromDescription","\x1d","\x98","\x64","\x54"),
	HX_HCSTRING("loadVideoFromDescription","\xbd","\xf2","\xdf","\x25"),
	HX_HCSTRING("videoFormat","\x12","\x26","\x36","\x76"),
	HX_HCSTRING("getVideoFormats","\xd7","\x7f","\x15","\x1c"),
	HX_HCSTRING("showKeyboard","\xc4","\x12","\xb7","\x93"),
	HX_HCSTRING("hideKeyboard","\x89","\x3f","\x2f","\x29"),
	HX_HCSTRING("loadURL","\xe9","\x88","\xe3","\x08"),
	::String(null()) };

void LoaderImpl_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.LoaderImpl","\xbd","\xa0","\xb9","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoaderImpl_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LoaderImpl_obj >;
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
