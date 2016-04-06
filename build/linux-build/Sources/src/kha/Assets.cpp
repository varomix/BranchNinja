#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_kha_Assets
#include <kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Blob
#include <kha/Blob.h>
#endif
#ifndef INCLUDED_kha_BlobList
#include <kha/BlobList.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_FontList
#include <kha/FontList.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_ImageList
#include <kha/ImageList.h>
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
#ifndef INCLUDED_kha_SoundList
#include <kha/SoundList.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha_VideoList
#include <kha/VideoList.h>
#endif
namespace kha{

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

::kha::ImageList Assets_obj::images;

::kha::SoundList Assets_obj::sounds;

::kha::BlobList Assets_obj::blobs;

::kha::FontList Assets_obj::fonts;

::kha::VideoList Assets_obj::videos;

Void Assets_obj::loadEverything( Dynamic callback){
{
		HX_STACK_FRAME("kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",50,0x66f27110)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(51)
		Array< int > filesLeft = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(filesLeft,"filesLeft");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			Array< ::String > tmp = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::BlobList >());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(52)
			Array< ::String > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(52)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				if ((tmp2)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				::String blob = tmp3;		HX_STACK_VAR(blob,"blob");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(53)
				::String tmp4 = blob;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				bool tmp5 = ::StringTools_obj::endsWith(tmp4,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				if ((tmp5)){
					HX_STACK_LINE(54)
					++(filesLeft[(int)0]);
				}
			}
		}
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			Array< ::String > tmp = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::ImageList >());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(57)
			Array< ::String > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				if ((tmp2)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				::String image = tmp3;		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(58)
				::String tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				bool tmp5 = ::StringTools_obj::endsWith(tmp4,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				if ((tmp5)){
					HX_STACK_LINE(59)
					++(filesLeft[(int)0]);
				}
			}
		}
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(62)
			Array< ::String > tmp = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::SoundList >());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(62)
			Array< ::String > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(62)
			while((true)){
				HX_STACK_LINE(62)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(62)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(62)
				if ((tmp2)){
					HX_STACK_LINE(62)
					break;
				}
				HX_STACK_LINE(62)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(62)
				::String sound = tmp3;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(62)
				++(_g);
				HX_STACK_LINE(63)
				::String tmp4 = sound;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				bool tmp5 = ::StringTools_obj::endsWith(tmp4,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(63)
				if ((tmp5)){
					HX_STACK_LINE(64)
					++(filesLeft[(int)0]);
				}
			}
		}
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			Array< ::String > tmp = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::FontList >());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			Array< ::String > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(67)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(67)
				if ((tmp2)){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(67)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(67)
				::String font = tmp3;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(67)
				++(_g);
				HX_STACK_LINE(68)
				::String tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				bool tmp5 = ::StringTools_obj::endsWith(tmp4,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				if ((tmp5)){
					HX_STACK_LINE(69)
					++(filesLeft[(int)0]);
				}
			}
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(72)
			Array< ::String > tmp = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::VideoList >());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			Array< ::String > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(72)
			while((true)){
				HX_STACK_LINE(72)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(72)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(72)
				if ((tmp2)){
					HX_STACK_LINE(72)
					break;
				}
				HX_STACK_LINE(72)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(72)
				::String video = tmp3;		HX_STACK_VAR(video,"video");
				HX_STACK_LINE(72)
				++(_g);
				HX_STACK_LINE(73)
				::String tmp4 = video;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				bool tmp5 = ::StringTools_obj::endsWith(tmp4,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				if ((tmp5)){
					HX_STACK_LINE(74)
					++(filesLeft[(int)0]);
				}
			}
		}
		HX_STACK_LINE(78)
		bool tmp = (filesLeft->__get((int)0) == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		if ((tmp)){
			HX_STACK_LINE(79)
			callback().Cast< Void >();
			HX_STACK_LINE(80)
			return null();
		}
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			Array< ::String > tmp1 = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::BlobList >());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			Array< ::String > _g1 = tmp1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(83)
			while((true)){
				HX_STACK_LINE(83)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(83)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(83)
				if ((tmp3)){
					HX_STACK_LINE(83)
					break;
				}
				HX_STACK_LINE(83)
				::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(83)
				::String blob = tmp4;		HX_STACK_VAR(blob,"blob");
				HX_STACK_LINE(83)
				++(_g);
				HX_STACK_LINE(84)
				::String tmp5 = blob;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(84)
				bool tmp6 = ::StringTools_obj::endsWith(tmp5,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				if ((tmp6)){
					HX_STACK_LINE(85)
					::kha::BlobList tmp7 = ::kha::Assets_obj::blobs;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(85)
					::String tmp8 = blob;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(85)
					Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,callback,Array< int >,filesLeft)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","kha/Assets.hx",85,0x66f27110)
						{
							HX_STACK_LINE(86)
							--(filesLeft[(int)0]);
							HX_STACK_LINE(87)
							bool tmp10 = (filesLeft->__get((int)0) == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(87)
							if ((tmp10)){
								HX_STACK_LINE(87)
								callback().Cast< Void >();
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(85)
					tmp9( Dynamic(new _Function_4_1(callback,filesLeft)));
				}
			}
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			Array< ::String > tmp1 = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::ImageList >());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			Array< ::String > _g1 = tmp1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(91)
			while((true)){
				HX_STACK_LINE(91)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(91)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(91)
				if ((tmp3)){
					HX_STACK_LINE(91)
					break;
				}
				HX_STACK_LINE(91)
				::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(91)
				::String image = tmp4;		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(91)
				++(_g);
				HX_STACK_LINE(92)
				::String tmp5 = image;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				bool tmp6 = ::StringTools_obj::endsWith(tmp5,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				if ((tmp6)){
					HX_STACK_LINE(93)
					::kha::ImageList tmp7 = ::kha::Assets_obj::images;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(93)
					::String tmp8 = image;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(93)
					Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,callback,Array< int >,filesLeft)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","kha/Assets.hx",93,0x66f27110)
						{
							HX_STACK_LINE(94)
							--(filesLeft[(int)0]);
							HX_STACK_LINE(95)
							bool tmp10 = (filesLeft->__get((int)0) == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(95)
							if ((tmp10)){
								HX_STACK_LINE(95)
								callback().Cast< Void >();
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(93)
					tmp9( Dynamic(new _Function_4_1(callback,filesLeft)));
				}
			}
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			Array< ::String > tmp1 = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::SoundList >());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(99)
			Array< ::String > _g1 = tmp1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			while((true)){
				HX_STACK_LINE(99)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(99)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				if ((tmp3)){
					HX_STACK_LINE(99)
					break;
				}
				HX_STACK_LINE(99)
				::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				::String sound = tmp4;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(99)
				++(_g);
				HX_STACK_LINE(100)
				::String tmp5 = sound;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				bool tmp6 = ::StringTools_obj::endsWith(tmp5,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				if ((tmp6)){
					HX_STACK_LINE(101)
					::kha::SoundList tmp7 = ::kha::Assets_obj::sounds;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(101)
					::String tmp8 = sound;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(101)
					Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");

					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_4_1,Dynamic,callback,Array< int >,filesLeft,::String,sound)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","kha/Assets.hx",101,0x66f27110)
						{
							HX_STACK_LINE(102)
							::kha::SoundList tmp10 = ::kha::Assets_obj::sounds;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(102)
							int tmp11 = (sound.length - (int)4);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(102)
							::String tmp12 = sound.substring((int)0,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(102)
							Dynamic tmp13 = ::Reflect_obj::field(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(102)
							::kha::Sound sound1 = tmp13;		HX_STACK_VAR(sound1,"sound1");

							HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Dynamic,callback,Array< int >,filesLeft)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","kha/Assets.hx",103,0x66f27110)
								{
									HX_STACK_LINE(104)
									--(filesLeft[(int)0]);
									HX_STACK_LINE(105)
									bool tmp14 = (filesLeft->__get((int)0) == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(105)
									if ((tmp14)){
										HX_STACK_LINE(105)
										callback().Cast< Void >();
									}
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(103)
							sound1->uncompress( Dynamic(new _Function_5_1(callback,filesLeft)));
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(101)
					tmp9( Dynamic(new _Function_4_1(callback,filesLeft,sound)));
				}
			}
		}
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(110)
			Array< ::String > tmp1 = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::FontList >());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			Array< ::String > _g1 = tmp1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(110)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(110)
				if ((tmp3)){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(110)
				::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(110)
				::String font = tmp4;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(110)
				++(_g);
				HX_STACK_LINE(111)
				::String tmp5 = font;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(111)
				bool tmp6 = ::StringTools_obj::endsWith(tmp5,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(111)
				if ((tmp6)){
					HX_STACK_LINE(112)
					::kha::FontList tmp7 = ::kha::Assets_obj::fonts;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(112)
					::String tmp8 = font;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(112)
					Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,callback,Array< int >,filesLeft)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","kha/Assets.hx",112,0x66f27110)
						{
							HX_STACK_LINE(113)
							--(filesLeft[(int)0]);
							HX_STACK_LINE(114)
							bool tmp10 = (filesLeft->__get((int)0) == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(114)
							if ((tmp10)){
								HX_STACK_LINE(114)
								callback().Cast< Void >();
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(112)
					tmp9( Dynamic(new _Function_4_1(callback,filesLeft)));
				}
			}
		}
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(118)
			Array< ::String > tmp1 = ::Type_obj::getInstanceFields(hx::ClassOf< ::kha::VideoList >());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(118)
			Array< ::String > _g1 = tmp1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(118)
			while((true)){
				HX_STACK_LINE(118)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(118)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(118)
				if ((tmp3)){
					HX_STACK_LINE(118)
					break;
				}
				HX_STACK_LINE(118)
				::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(118)
				::String video = tmp4;		HX_STACK_VAR(video,"video");
				HX_STACK_LINE(118)
				++(_g);
				HX_STACK_LINE(119)
				::String tmp5 = video;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(119)
				bool tmp6 = ::StringTools_obj::endsWith(tmp5,HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(119)
				if ((tmp6)){
					HX_STACK_LINE(120)
					::kha::VideoList tmp7 = ::kha::Assets_obj::videos;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(120)
					::String tmp8 = video;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(120)
					Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,callback,Array< int >,filesLeft)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","kha/Assets.hx",120,0x66f27110)
						{
							HX_STACK_LINE(121)
							--(filesLeft[(int)0]);
							HX_STACK_LINE(122)
							bool tmp10 = (filesLeft->__get((int)0) == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(122)
							if ((tmp10)){
								HX_STACK_LINE(122)
								callback().Cast< Void >();
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(120)
					tmp9( Dynamic(new _Function_4_1(callback,filesLeft)));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadEverything,(void))

Void Assets_obj::loadImage( ::String name,Dynamic done){
{
		HX_STACK_FRAME("kha.Assets","loadImage",0xe6c94354,"kha.Assets.loadImage","kha/Assets.hx",134,0x66f27110)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(135)
		::kha::ImageList tmp = ::kha::Assets_obj::images;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		::String tmp1 = (name + HX_HCSTRING("Description","\xdc","\xa0","\x4f","\x43"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		Dynamic description = tmp2;		HX_STACK_VAR(description,"description");
		HX_STACK_LINE(136)
		Dynamic tmp3 = description;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,done,::String,name)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/Assets.hx",136,0x66f27110)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(137)
				::kha::ImageList tmp4 = ::kha::Assets_obj::images;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(137)
				::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(137)
				::kha::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				::Reflect_obj::setField(tmp4,tmp5,tmp6);
				HX_STACK_LINE(138)
				::kha::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(138)
				done(tmp7).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(136)
		::kha::LoaderImpl_obj::loadImageFromDescription(tmp3, Dynamic(new _Function_1_1(done,name)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadImage,(void))

Void Assets_obj::loadImageFromPath( ::String path,bool readable,Dynamic done){
{
		HX_STACK_FRAME("kha.Assets","loadImageFromPath",0x3f4a27a3,"kha.Assets.loadImageFromPath","kha/Assets.hx",149,0x66f27110)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(readable,"readable")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(150)
		Array< ::String > tmp = Array_obj< ::String >::__new().Add(path);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		bool tmp1 = readable;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &tmp,bool &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/Assets.hx",150,0x66f27110)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
					__result->Add(HX_HCSTRING("readable","\xf0","\x1b","\x87","\x7d") , tmp1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(150)
		Dynamic tmp2 = _Function_1_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		Dynamic description = tmp2;		HX_STACK_VAR(description,"description");
		HX_STACK_LINE(151)
		Dynamic tmp3 = description;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		Dynamic tmp4 = done;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		::kha::LoaderImpl_obj::loadImageFromDescription(tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadImageFromPath,(void))

Array< ::String > Assets_obj::imageFormats;

Array< ::String > Assets_obj::get_imageFormats( ){
	HX_STACK_FRAME("kha.Assets","get_imageFormats",0xb185ddab,"kha.Assets.get_imageFormats","kha/Assets.hx",156,0x66f27110)
	HX_STACK_LINE(157)
	Array< ::String > tmp = ::kha::LoaderImpl_obj::getImageFormats();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_imageFormats,return )

Void Assets_obj::loadBlob( ::String name,Dynamic done){
{
		HX_STACK_FRAME("kha.Assets","loadBlob",0xeb2f7b84,"kha.Assets.loadBlob","kha/Assets.hx",160,0x66f27110)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(161)
		::kha::BlobList tmp = ::kha::Assets_obj::blobs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		::String tmp1 = (name + HX_HCSTRING("Description","\xdc","\xa0","\x4f","\x43"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		Dynamic description = tmp2;		HX_STACK_VAR(description,"description");
		HX_STACK_LINE(162)
		Dynamic tmp3 = description;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,done,::String,name)
		int __ArgCount() const { return 1; }
		Void run(::kha::Blob blob){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/Assets.hx",162,0x66f27110)
			HX_STACK_ARG(blob,"blob")
			{
				HX_STACK_LINE(163)
				::kha::BlobList tmp4 = ::kha::Assets_obj::blobs;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(163)
				::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(163)
				::kha::Blob tmp6 = blob;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(163)
				::Reflect_obj::setField(tmp4,tmp5,tmp6);
				HX_STACK_LINE(164)
				::kha::Blob tmp7 = blob;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(164)
				done(tmp7).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(162)
		::kha::LoaderImpl_obj::loadBlobFromDescription(tmp3, Dynamic(new _Function_1_1(done,name)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBlob,(void))

Void Assets_obj::loadBlobFromPath( ::String path,Dynamic done){
{
		HX_STACK_FRAME("kha.Assets","loadBlobFromPath",0x75ec0fd3,"kha.Assets.loadBlobFromPath","kha/Assets.hx",168,0x66f27110)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(169)
		Array< ::String > tmp = Array_obj< ::String >::__new().Add(path);		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/Assets.hx",169,0x66f27110)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(169)
		Dynamic tmp1 = _Function_1_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		Dynamic description = tmp1;		HX_STACK_VAR(description,"description");
		HX_STACK_LINE(170)
		Dynamic tmp2 = description;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		Dynamic tmp3 = done;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		::kha::LoaderImpl_obj::loadBlobFromDescription(tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBlobFromPath,(void))

Void Assets_obj::loadSound( ::String name,Dynamic done){
{
		HX_STACK_FRAME("kha.Assets","loadSound",0xaa2cb0c8,"kha.Assets.loadSound","kha/Assets.hx",173,0x66f27110)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(174)
		::kha::SoundList tmp = ::kha::Assets_obj::sounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		::String tmp1 = (name + HX_HCSTRING("Description","\xdc","\xa0","\x4f","\x43"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		Dynamic description = tmp2;		HX_STACK_VAR(description,"description");
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			Dynamic tmp3 = description;		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,done,::String,name)
			int __ArgCount() const { return 1; }
			Void run(::kha::Sound sound){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","kha/Assets.hx",175,0x66f27110)
				HX_STACK_ARG(sound,"sound")
				{
					HX_STACK_LINE(176)
					::kha::SoundList tmp4 = ::kha::Assets_obj::sounds;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(176)
					::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(176)
					::kha::Sound tmp6 = sound;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(176)
					::Reflect_obj::setField(tmp4,tmp5,tmp6);
					HX_STACK_LINE(177)
					::kha::Sound tmp7 = sound;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(177)
					done(tmp7).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(175)
			::kha::LoaderImpl_obj::loadSoundFromDescription(tmp3, Dynamic(new _Function_2_1(done,name)));
			HX_STACK_LINE(175)
			return null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadSound,(void))

Void Assets_obj::loadSoundFromPath( ::String path,Dynamic done){
{
		HX_STACK_FRAME("kha.Assets","loadSoundFromPath",0xfcc62917,"kha.Assets.loadSoundFromPath","kha/Assets.hx",181,0x66f27110)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(182)
		Array< ::String > tmp = Array_obj< ::String >::__new().Add(path);		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/Assets.hx",182,0x66f27110)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(182)
		Dynamic tmp1 = _Function_1_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		Dynamic description = tmp1;		HX_STACK_VAR(description,"description");
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			Dynamic tmp2 = description;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			Dynamic tmp3 = done;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			::kha::LoaderImpl_obj::loadSoundFromDescription(tmp2,tmp3);
			HX_STACK_LINE(183)
			return null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadSoundFromPath,(void))

Array< ::String > Assets_obj::soundFormats;

Array< ::String > Assets_obj::get_soundFormats( ){
	HX_STACK_FRAME("kha.Assets","get_soundFormats",0xd5f5c6b7,"kha.Assets.get_soundFormats","kha/Assets.hx",188,0x66f27110)
	HX_STACK_LINE(189)
	Array< ::String > tmp = ::kha::LoaderImpl_obj::getSoundFormats();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_soundFormats,return )

Void Assets_obj::loadFont( ::String name,Dynamic done){
{
		HX_STACK_FRAME("kha.Assets","loadFont",0xedd69bf6,"kha.Assets.loadFont","kha/Assets.hx",192,0x66f27110)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(193)
		::kha::FontList tmp = ::kha::Assets_obj::fonts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		::String tmp1 = (name + HX_HCSTRING("Description","\xdc","\xa0","\x4f","\x43"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		Dynamic description = tmp2;		HX_STACK_VAR(description,"description");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			Dynamic tmp3 = description;		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,done,::String,name)
			int __ArgCount() const { return 1; }
			Void run(::kha::Font font){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","kha/Assets.hx",194,0x66f27110)
				HX_STACK_ARG(font,"font")
				{
					HX_STACK_LINE(195)
					::kha::FontList tmp4 = ::kha::Assets_obj::fonts;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(195)
					::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(195)
					::kha::Font tmp6 = font;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(195)
					::Reflect_obj::setField(tmp4,tmp5,tmp6);
					HX_STACK_LINE(196)
					::kha::Font tmp7 = font;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(196)
					done(tmp7).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(194)
			::kha::LoaderImpl_obj::loadFontFromDescription(tmp3, Dynamic(new _Function_2_1(done,name)));
			HX_STACK_LINE(194)
			return null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadFont,(void))

Void Assets_obj::loadFontFromPath( ::String path,Dynamic done){
{
		HX_STACK_FRAME("kha.Assets","loadFontFromPath",0x1433f245,"kha.Assets.loadFontFromPath","kha/Assets.hx",200,0x66f27110)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(201)
		Array< ::String > tmp = Array_obj< ::String >::__new().Add(path);		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/Assets.hx",201,0x66f27110)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(201)
		Dynamic tmp1 = _Function_1_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		Dynamic description = tmp1;		HX_STACK_VAR(description,"description");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			Dynamic tmp2 = description;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			Dynamic tmp3 = done;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			::kha::LoaderImpl_obj::loadFontFromDescription(tmp2,tmp3);
			HX_STACK_LINE(202)
			return null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadFontFromPath,(void))

Array< ::String > Assets_obj::fontFormats;

Array< ::String > Assets_obj::get_fontFormats( ){
	HX_STACK_FRAME("kha.Assets","get_fontFormats",0xc3a68c23,"kha.Assets.get_fontFormats","kha/Assets.hx",207,0x66f27110)
	HX_STACK_LINE(208)
	Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_fontFormats,return )

Void Assets_obj::loadVideo( ::String name,Dynamic done){
{
		HX_STACK_FRAME("kha.Assets","loadVideo",0x605c3874,"kha.Assets.loadVideo","kha/Assets.hx",211,0x66f27110)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(212)
		::kha::VideoList tmp = ::kha::Assets_obj::videos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		::String tmp1 = (name + HX_HCSTRING("Description","\xdc","\xa0","\x4f","\x43"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		Dynamic description = tmp2;		HX_STACK_VAR(description,"description");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Dynamic tmp3 = description;		HX_STACK_VAR(tmp3,"tmp3");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,done,::String,name)
			int __ArgCount() const { return 1; }
			Void run(::kha::Video video){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","kha/Assets.hx",213,0x66f27110)
				HX_STACK_ARG(video,"video")
				{
					HX_STACK_LINE(214)
					::kha::VideoList tmp4 = ::kha::Assets_obj::videos;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(214)
					::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(214)
					::kha::Video tmp6 = video;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(214)
					::Reflect_obj::setField(tmp4,tmp5,tmp6);
					HX_STACK_LINE(215)
					::kha::Video tmp7 = video;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(215)
					done(tmp7).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(213)
			::kha::LoaderImpl_obj::loadVideoFromDescription(tmp3, Dynamic(new _Function_2_1(done,name)));
			HX_STACK_LINE(213)
			return null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadVideo,(void))

Void Assets_obj::loadVideoFromPath( ::String path,Dynamic done){
{
		HX_STACK_FRAME("kha.Assets","loadVideoFromPath",0x02873cc3,"kha.Assets.loadVideoFromPath","kha/Assets.hx",219,0x66f27110)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(done,"done")
		HX_STACK_LINE(220)
		Array< ::String > tmp = Array_obj< ::String >::__new().Add(path);		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/Assets.hx",220,0x66f27110)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(220)
		Dynamic tmp1 = _Function_1_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		Dynamic description = tmp1;		HX_STACK_VAR(description,"description");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			Dynamic tmp2 = description;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(221)
			Dynamic tmp3 = done;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			::kha::LoaderImpl_obj::loadVideoFromDescription(tmp2,tmp3);
			HX_STACK_LINE(221)
			return null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadVideoFromPath,(void))

Array< ::String > Assets_obj::videoFormats;

Array< ::String > Assets_obj::get_videoFormats( ){
	HX_STACK_FRAME("kha.Assets","get_videoFormats",0xdbb9cc8b,"kha.Assets.get_videoFormats","kha/Assets.hx",226,0x66f27110)
	HX_STACK_LINE(227)
	Array< ::String > tmp = ::kha::LoaderImpl_obj::getVideoFormats();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_videoFormats,return )


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blobs") ) { outValue = blobs; return true;  }
		if (HX_FIELD_EQ(inName,"fonts") ) { outValue = fonts; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { outValue = images; return true;  }
		if (HX_FIELD_EQ(inName,"sounds") ) { outValue = sounds; return true;  }
		if (HX_FIELD_EQ(inName,"videos") ) { outValue = videos; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadBlob") ) { outValue = loadBlob_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadVideo") ) { outValue = loadVideo_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fontFormats") ) { outValue = inCallProp == hx::paccAlways ? get_fontFormats() : fontFormats; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imageFormats") ) { outValue = inCallProp == hx::paccAlways ? get_imageFormats() : imageFormats; return true; }
		if (HX_FIELD_EQ(inName,"soundFormats") ) { outValue = inCallProp == hx::paccAlways ? get_soundFormats() : soundFormats; return true; }
		if (HX_FIELD_EQ(inName,"videoFormats") ) { outValue = inCallProp == hx::paccAlways ? get_videoFormats() : videoFormats; return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadEverything") ) { outValue = loadEverything_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_fontFormats") ) { outValue = get_fontFormats_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_imageFormats") ) { outValue = get_imageFormats_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadBlobFromPath") ) { outValue = loadBlobFromPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_soundFormats") ) { outValue = get_soundFormats_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFontFromPath") ) { outValue = loadFontFromPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_videoFormats") ) { outValue = get_videoFormats_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadImageFromPath") ) { outValue = loadImageFromPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadSoundFromPath") ) { outValue = loadSoundFromPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadVideoFromPath") ) { outValue = loadVideoFromPath_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::ImageList*/ ,(void *) &Assets_obj::images,HX_HCSTRING("images","\xb8","\x50","\x92","\xfe")},
	{hx::fsObject /*::kha::SoundList*/ ,(void *) &Assets_obj::sounds,HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32")},
	{hx::fsObject /*::kha::BlobList*/ ,(void *) &Assets_obj::blobs,HX_HCSTRING("blobs","\x76","\x74","\xfc","\xb4")},
	{hx::fsObject /*::kha::FontList*/ ,(void *) &Assets_obj::fonts,HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04")},
	{hx::fsObject /*::kha::VideoList*/ ,(void *) &Assets_obj::videos,HX_HCSTRING("videos","\x98","\xd7","\x95","\xe5")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Assets_obj::imageFormats,HX_HCSTRING("imageFormats","\x41","\x3b","\xf7","\xce")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Assets_obj::soundFormats,HX_HCSTRING("soundFormats","\x4d","\x24","\x67","\xf3")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Assets_obj::fontFormats,HX_HCSTRING("fontFormats","\x4d","\x73","\xff","\xf3")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Assets_obj::videoFormats,HX_HCSTRING("videoFormats","\x21","\x2a","\x2b","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::images,"images");
	HX_MARK_MEMBER_NAME(Assets_obj::sounds,"sounds");
	HX_MARK_MEMBER_NAME(Assets_obj::blobs,"blobs");
	HX_MARK_MEMBER_NAME(Assets_obj::fonts,"fonts");
	HX_MARK_MEMBER_NAME(Assets_obj::videos,"videos");
	HX_MARK_MEMBER_NAME(Assets_obj::imageFormats,"imageFormats");
	HX_MARK_MEMBER_NAME(Assets_obj::soundFormats,"soundFormats");
	HX_MARK_MEMBER_NAME(Assets_obj::fontFormats,"fontFormats");
	HX_MARK_MEMBER_NAME(Assets_obj::videoFormats,"videoFormats");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::images,"images");
	HX_VISIT_MEMBER_NAME(Assets_obj::sounds,"sounds");
	HX_VISIT_MEMBER_NAME(Assets_obj::blobs,"blobs");
	HX_VISIT_MEMBER_NAME(Assets_obj::fonts,"fonts");
	HX_VISIT_MEMBER_NAME(Assets_obj::videos,"videos");
	HX_VISIT_MEMBER_NAME(Assets_obj::imageFormats,"imageFormats");
	HX_VISIT_MEMBER_NAME(Assets_obj::soundFormats,"soundFormats");
	HX_VISIT_MEMBER_NAME(Assets_obj::fontFormats,"fontFormats");
	HX_VISIT_MEMBER_NAME(Assets_obj::videoFormats,"videoFormats");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"),
	HX_HCSTRING("sounds","\xc4","\xa8","\x2e","\x32"),
	HX_HCSTRING("blobs","\x76","\x74","\xfc","\xb4"),
	HX_HCSTRING("fonts","\xc4","\xb7","\x91","\x04"),
	HX_HCSTRING("videos","\x98","\xd7","\x95","\xe5"),
	HX_HCSTRING("loadEverything","\x39","\xd4","\x86","\x35"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadImageFromPath","\xa4","\xb8","\x7a","\xeb"),
	HX_HCSTRING("imageFormats","\x41","\x3b","\xf7","\xce"),
	HX_HCSTRING("get_imageFormats","\xca","\x27","\x96","\xd3"),
	HX_HCSTRING("loadBlob","\xa3","\x0e","\xb9","\xb1"),
	HX_HCSTRING("loadBlobFromPath","\xf2","\x59","\xfc","\x97"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadSoundFromPath","\x18","\xba","\xf6","\xa8"),
	HX_HCSTRING("soundFormats","\x4d","\x24","\x67","\xf3"),
	HX_HCSTRING("get_soundFormats","\xd6","\x10","\x06","\xf8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadFontFromPath","\x64","\x3c","\x44","\x36"),
	HX_HCSTRING("fontFormats","\x4d","\x73","\xff","\xf3"),
	HX_HCSTRING("get_fontFormats","\xe4","\x2a","\xe1","\xb4"),
	HX_HCSTRING("loadVideo","\x75","\x60","\x33","\x52"),
	HX_HCSTRING("loadVideoFromPath","\xc4","\xcd","\xb7","\xae"),
	HX_HCSTRING("videoFormats","\x21","\x2a","\x2b","\xf9"),
	HX_HCSTRING("get_videoFormats","\xaa","\x16","\xca","\xfd"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Assets","\xad","\x13","\xc3","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
	images= ::kha::ImageList_obj::__new();
	sounds= ::kha::SoundList_obj::__new();
	blobs= ::kha::BlobList_obj::__new();
	fonts= ::kha::FontList_obj::__new();
	videos= ::kha::VideoList_obj::__new();
}

} // end namespace kha
