#include <hxcpp.h>

#ifndef INCLUDED_kha_Assets
#include <kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_ImageList
#include <kha/ImageList.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
namespace kha{

Void ImageList_obj::__construct()
{
HX_STACK_FRAME("kha.ImageList","new",0x515fc0e1,"kha.ImageList.new","kha/Assets.hx",9,0x66f27110)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
			{
				HX_STACK_LINE(115)
				Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("shuriken.kng","\x73","\x70","\xe5","\x62"));		HX_STACK_VAR(tmp,"tmp");
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &tmp){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
							__result->Add(HX_HCSTRING("original_height","\x55","\x81","\xff","\x54") , (int)26,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),false);
							__result->Add(HX_HCSTRING("original_width","\x58","\xc4","\x9b","\xc9") , (int)26,false);
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("shuriken","\xfd","\xcb","\x89","\x47"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	this->shurikenDescription = _Function_1_1::Block();
	HX_STACK_LINE(106)
	this->shurikenName = HX_HCSTRING("shuriken","\xfd","\xcb","\x89","\x47");
	HX_STACK_LINE(60)
	this->shuriken = null();
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
			{
				HX_STACK_LINE(115)
				Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("ninjaGreen.kng","\x8f","\xa9","\x39","\xf3"));		HX_STACK_VAR(tmp,"tmp");
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &tmp){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
							__result->Add(HX_HCSTRING("original_height","\x55","\x81","\xff","\x54") , (int)112,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),false);
							__result->Add(HX_HCSTRING("original_width","\x58","\xc4","\x9b","\xc9") , (int)64,false);
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("ninjaGreen","\x19","\x47","\x4c","\xe6"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	this->ninjaGreenDescription = _Function_1_2::Block();
	HX_STACK_LINE(106)
	this->ninjaGreenName = HX_HCSTRING("ninjaGreen","\x19","\x47","\x4c","\xe6");
	HX_STACK_LINE(60)
	this->ninjaGreen = null();
	struct _Function_1_3{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
			{
				HX_STACK_LINE(115)
				Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("ninjaBlackBig.kng","\x21","\xb1","\x30","\xcf"));		HX_STACK_VAR(tmp,"tmp");
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &tmp){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
							__result->Add(HX_HCSTRING("original_height","\x55","\x81","\xff","\x54") , (int)336,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),false);
							__result->Add(HX_HCSTRING("original_width","\x58","\xc4","\x9b","\xc9") , (int)192,false);
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("ninjaBlackBig","\xab","\x9d","\x5f","\x36"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	this->ninjaBlackBigDescription = _Function_1_3::Block();
	HX_STACK_LINE(106)
	this->ninjaBlackBigName = HX_HCSTRING("ninjaBlackBig","\xab","\x9d","\x5f","\x36");
	HX_STACK_LINE(60)
	this->ninjaBlackBig = null();
	struct _Function_1_4{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
			{
				HX_STACK_LINE(115)
				Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("ninjaBlack2.kng","\xf3","\x28","\x5d","\xe6"));		HX_STACK_VAR(tmp,"tmp");
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &tmp){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
							__result->Add(HX_HCSTRING("original_height","\x55","\x81","\xff","\x54") , (int)252,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),false);
							__result->Add(HX_HCSTRING("original_width","\x58","\xc4","\x9b","\xc9") , (int)144,false);
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("ninjaBlack2","\x7d","\x44","\x9b","\x25"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	this->ninjaBlack2Description = _Function_1_4::Block();
	HX_STACK_LINE(106)
	this->ninjaBlack2Name = HX_HCSTRING("ninjaBlack2","\x7d","\x44","\x9b","\x25");
	HX_STACK_LINE(60)
	this->ninjaBlack2 = null();
	struct _Function_1_5{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
			{
				HX_STACK_LINE(115)
				Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("ninjaBlack.kng","\x8b","\x9e","\x13","\x50"));		HX_STACK_VAR(tmp,"tmp");
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &tmp){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
							__result->Add(HX_HCSTRING("original_height","\x55","\x81","\xff","\x54") , (int)252,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),false);
							__result->Add(HX_HCSTRING("original_width","\x58","\xc4","\x9b","\xc9") , (int)144,false);
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("ninjaBlack","\x15","\x0e","\x51","\x01"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	this->ninjaBlackDescription = _Function_1_5::Block();
	HX_STACK_LINE(106)
	this->ninjaBlackName = HX_HCSTRING("ninjaBlack","\x15","\x0e","\x51","\x01");
	HX_STACK_LINE(60)
	this->ninjaBlack = null();
	struct _Function_1_6{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
			{
				HX_STACK_LINE(115)
				Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("greenFace.kng","\xf6","\xee","\x81","\xf1"));		HX_STACK_VAR(tmp,"tmp");
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &tmp){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
							__result->Add(HX_HCSTRING("original_height","\x55","\x81","\xff","\x54") , (int)38,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),false);
							__result->Add(HX_HCSTRING("original_width","\x58","\xc4","\x9b","\xc9") , (int)38,false);
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("greenFace","\x00","\x0d","\x3e","\xa6"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	this->greenFaceDescription = _Function_1_6::Block();
	HX_STACK_LINE(106)
	this->greenFaceName = HX_HCSTRING("greenFace","\x00","\x0d","\x3e","\xa6");
	HX_STACK_LINE(60)
	this->greenFace = null();
	struct _Function_1_7{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
			{
				HX_STACK_LINE(115)
				Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("fireball.kng","\x2b","\x29","\x64","\x0b"));		HX_STACK_VAR(tmp,"tmp");
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &tmp){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
							__result->Add(HX_HCSTRING("original_height","\x55","\x81","\xff","\x54") , (int)9,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),false);
							__result->Add(HX_HCSTRING("original_width","\x58","\xc4","\x9b","\xc9") , (int)13,false);
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("fireball","\xb5","\xc8","\x9f","\xd5"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	this->fireballDescription = _Function_1_7::Block();
	HX_STACK_LINE(106)
	this->fireballName = HX_HCSTRING("fireball","\xb5","\xc8","\x9f","\xd5");
	HX_STACK_LINE(60)
	this->fireball = null();
	struct _Function_1_8{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
			{
				HX_STACK_LINE(115)
				Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("explosion.kng","\x0b","\x24","\x74","\xe4"));		HX_STACK_VAR(tmp,"tmp");
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &tmp){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
							__result->Add(HX_HCSTRING("original_height","\x55","\x81","\xff","\x54") , (int)36,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),false);
							__result->Add(HX_HCSTRING("original_width","\x58","\xc4","\x9b","\xc9") , (int)216,false);
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	this->explosionDescription = _Function_1_8::Block();
	HX_STACK_LINE(106)
	this->explosionName = HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e");
	HX_STACK_LINE(60)
	this->explosion = null();
	struct _Function_1_9{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
			{
				HX_STACK_LINE(115)
				Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("bug.kng","\x2a","\xcf","\xf7","\x1f"));		HX_STACK_VAR(tmp,"tmp");
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &tmp){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
							__result->Add(HX_HCSTRING("original_height","\x55","\x81","\xff","\x54") , (int)36,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),false);
							__result->Add(HX_HCSTRING("original_width","\x58","\xc4","\x9b","\xc9") , (int)144,false);
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("bug","\x34","\xc3","\x4a","\x00"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	this->bugDescription = _Function_1_9::Block();
	HX_STACK_LINE(106)
	this->bugName = HX_HCSTRING("bug","\x34","\xc3","\x4a","\x00");
	HX_STACK_LINE(60)
	this->bug = null();
	struct _Function_1_10{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
			{
				HX_STACK_LINE(115)
				Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("blackFace.kng","\xf2","\x11","\x60","\x0d"));		HX_STACK_VAR(tmp,"tmp");
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::String > &tmp){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kha/internal/AssetsBuilder.hx",115,0x6901246d)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("files","\x77","\xde","\x98","\x00") , tmp,false);
							__result->Add(HX_HCSTRING("original_height","\x55","\x81","\xff","\x54") , (int)38,false);
							__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),false);
							__result->Add(HX_HCSTRING("original_width","\x58","\xc4","\x9b","\xc9") , (int)38,false);
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("blackFace","\xfc","\x01","\x18","\x03"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(115)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(115)
	this->blackFaceDescription = _Function_1_10::Block();
	HX_STACK_LINE(106)
	this->blackFaceName = HX_HCSTRING("blackFace","\xfc","\x01","\x18","\x03");
	HX_STACK_LINE(60)
	this->blackFace = null();
}
;
	return null();
}

//ImageList_obj::~ImageList_obj() { }

Dynamic ImageList_obj::__CreateEmpty() { return  new ImageList_obj; }
hx::ObjectPtr< ImageList_obj > ImageList_obj::__new()
{  hx::ObjectPtr< ImageList_obj > _result_ = new ImageList_obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageList_obj > _result_ = new ImageList_obj();
	_result_->__construct();
	return _result_;}

Void ImageList_obj::blackFaceLoad( Dynamic done){
{
		HX_STACK_FRAME("kha.ImageList","blackFaceLoad",0xc2a37203,"kha.ImageList.blackFaceLoad","kha/internal/AssetsBuilder.hx",123,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/internal/AssetsBuilder.hx",124,0x6901246d)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(124)
				done().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		::kha::Assets_obj::loadImage(HX_HCSTRING("blackFace","\xfc","\x01","\x18","\x03"), Dynamic(new _Function_1_1(done)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,blackFaceLoad,(void))

Void ImageList_obj::blackFaceUnload( ){
{
		HX_STACK_FRAME("kha.ImageList","blackFaceUnload",0x5503ea1c,"kha.ImageList.blackFaceUnload","kha/internal/AssetsBuilder.hx",180,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::kha::Image tmp = this->blackFace;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->unload();
		HX_STACK_LINE(182)
		this->blackFace = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,blackFaceUnload,(void))

Void ImageList_obj::bugLoad( Dynamic done){
{
		HX_STACK_FRAME("kha.ImageList","bugLoad",0xd843f87b,"kha.ImageList.bugLoad","kha/internal/AssetsBuilder.hx",123,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/internal/AssetsBuilder.hx",124,0x6901246d)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(124)
				done().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		::kha::Assets_obj::loadImage(HX_HCSTRING("bug","\x34","\xc3","\x4a","\x00"), Dynamic(new _Function_1_1(done)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,bugLoad,(void))

Void ImageList_obj::bugUnload( ){
{
		HX_STACK_FRAME("kha.ImageList","bugUnload",0x78acfe94,"kha.ImageList.bugUnload","kha/internal/AssetsBuilder.hx",180,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::kha::Image tmp = this->bug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->unload();
		HX_STACK_LINE(182)
		this->bug = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,bugUnload,(void))

Void ImageList_obj::explosionLoad( Dynamic done){
{
		HX_STACK_FRAME("kha.ImageList","explosionLoad",0x99b7841c,"kha.ImageList.explosionLoad","kha/internal/AssetsBuilder.hx",123,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/internal/AssetsBuilder.hx",124,0x6901246d)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(124)
				done().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		::kha::Assets_obj::loadImage(HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e"), Dynamic(new _Function_1_1(done)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,explosionLoad,(void))

Void ImageList_obj::explosionUnload( ){
{
		HX_STACK_FRAME("kha.ImageList","explosionUnload",0x26d37475,"kha.ImageList.explosionUnload","kha/internal/AssetsBuilder.hx",180,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::kha::Image tmp = this->explosion;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->unload();
		HX_STACK_LINE(182)
		this->explosion = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,explosionUnload,(void))

Void ImageList_obj::fireballLoad( Dynamic done){
{
		HX_STACK_FRAME("kha.ImageList","fireballLoad",0x8ab804da,"kha.ImageList.fireballLoad","kha/internal/AssetsBuilder.hx",123,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/internal/AssetsBuilder.hx",124,0x6901246d)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(124)
				done().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		::kha::Assets_obj::loadImage(HX_HCSTRING("fireball","\xb5","\xc8","\x9f","\xd5"), Dynamic(new _Function_1_1(done)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,fireballLoad,(void))

Void ImageList_obj::fireballUnload( ){
{
		HX_STACK_FRAME("kha.ImageList","fireballUnload",0xb98420b3,"kha.ImageList.fireballUnload","kha/internal/AssetsBuilder.hx",180,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::kha::Image tmp = this->fireball;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->unload();
		HX_STACK_LINE(182)
		this->fireball = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,fireballUnload,(void))

Void ImageList_obj::greenFaceLoad( Dynamic done){
{
		HX_STACK_FRAME("kha.ImageList","greenFaceLoad",0xa6c54f07,"kha.ImageList.greenFaceLoad","kha/internal/AssetsBuilder.hx",123,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/internal/AssetsBuilder.hx",124,0x6901246d)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(124)
				done().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		::kha::Assets_obj::loadImage(HX_HCSTRING("greenFace","\x00","\x0d","\x3e","\xa6"), Dynamic(new _Function_1_1(done)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,greenFaceLoad,(void))

Void ImageList_obj::greenFaceUnload( ){
{
		HX_STACK_FRAME("kha.ImageList","greenFaceUnload",0xeb1a1020,"kha.ImageList.greenFaceUnload","kha/internal/AssetsBuilder.hx",180,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::kha::Image tmp = this->greenFace;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->unload();
		HX_STACK_LINE(182)
		this->greenFace = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,greenFaceUnload,(void))

Void ImageList_obj::ninjaBlackLoad( Dynamic done){
{
		HX_STACK_FRAME("kha.ImageList","ninjaBlackLoad",0x00fb4ffa,"kha.ImageList.ninjaBlackLoad","kha/internal/AssetsBuilder.hx",123,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/internal/AssetsBuilder.hx",124,0x6901246d)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(124)
				done().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		::kha::Assets_obj::loadImage(HX_HCSTRING("ninjaBlack","\x15","\x0e","\x51","\x01"), Dynamic(new _Function_1_1(done)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,ninjaBlackLoad,(void))

Void ImageList_obj::ninjaBlackUnload( ){
{
		HX_STACK_FRAME("kha.ImageList","ninjaBlackUnload",0xbf8873d3,"kha.ImageList.ninjaBlackUnload","kha/internal/AssetsBuilder.hx",180,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::kha::Image tmp = this->ninjaBlack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->unload();
		HX_STACK_LINE(182)
		this->ninjaBlack = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,ninjaBlackUnload,(void))

Void ImageList_obj::ninjaBlack2Load( Dynamic done){
{
		HX_STACK_FRAME("kha.ImageList","ninjaBlack2Load",0xcb67bb44,"kha.ImageList.ninjaBlack2Load","kha/internal/AssetsBuilder.hx",123,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/internal/AssetsBuilder.hx",124,0x6901246d)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(124)
				done().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		::kha::Assets_obj::loadImage(HX_HCSTRING("ninjaBlack2","\x7d","\x44","\x9b","\x25"), Dynamic(new _Function_1_1(done)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,ninjaBlack2Load,(void))

Void ImageList_obj::ninjaBlack2Unload( ){
{
		HX_STACK_FRAME("kha.ImageList","ninjaBlack2Unload",0x4e5dc59d,"kha.ImageList.ninjaBlack2Unload","kha/internal/AssetsBuilder.hx",180,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::kha::Image tmp = this->ninjaBlack2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->unload();
		HX_STACK_LINE(182)
		this->ninjaBlack2 = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,ninjaBlack2Unload,(void))

Void ImageList_obj::ninjaBlackBigLoad( Dynamic done){
{
		HX_STACK_FRAME("kha.ImageList","ninjaBlackBigLoad",0xc9e385b2,"kha.ImageList.ninjaBlackBigLoad","kha/internal/AssetsBuilder.hx",123,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/internal/AssetsBuilder.hx",124,0x6901246d)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(124)
				done().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		::kha::Assets_obj::loadImage(HX_HCSTRING("ninjaBlackBig","\xab","\x9d","\x5f","\x36"), Dynamic(new _Function_1_1(done)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,ninjaBlackBigLoad,(void))

Void ImageList_obj::ninjaBlackBigUnload( ){
{
		HX_STACK_FRAME("kha.ImageList","ninjaBlackBigUnload",0xbb33878b,"kha.ImageList.ninjaBlackBigUnload","kha/internal/AssetsBuilder.hx",180,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::kha::Image tmp = this->ninjaBlackBig;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->unload();
		HX_STACK_LINE(182)
		this->ninjaBlackBig = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,ninjaBlackBigUnload,(void))

Void ImageList_obj::ninjaGreenLoad( Dynamic done){
{
		HX_STACK_FRAME("kha.ImageList","ninjaGreenLoad",0xa4215afe,"kha.ImageList.ninjaGreenLoad","kha/internal/AssetsBuilder.hx",123,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/internal/AssetsBuilder.hx",124,0x6901246d)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(124)
				done().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		::kha::Assets_obj::loadImage(HX_HCSTRING("ninjaGreen","\x19","\x47","\x4c","\xe6"), Dynamic(new _Function_1_1(done)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,ninjaGreenLoad,(void))

Void ImageList_obj::ninjaGreenUnload( ){
{
		HX_STACK_FRAME("kha.ImageList","ninjaGreenUnload",0x008a47d7,"kha.ImageList.ninjaGreenUnload","kha/internal/AssetsBuilder.hx",180,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::kha::Image tmp = this->ninjaGreen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->unload();
		HX_STACK_LINE(182)
		this->ninjaGreen = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,ninjaGreenUnload,(void))

Void ImageList_obj::shurikenLoad( Dynamic done){
{
		HX_STACK_FRAME("kha.ImageList","shurikenLoad",0xe2394c22,"kha.ImageList.shurikenLoad","kha/internal/AssetsBuilder.hx",123,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(done,"done")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,done)
		int __ArgCount() const { return 1; }
		Void run(::kha::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/internal/AssetsBuilder.hx",124,0x6901246d)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(124)
				done().Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(123)
		::kha::Assets_obj::loadImage(HX_HCSTRING("shuriken","\xfd","\xcb","\x89","\x47"), Dynamic(new _Function_1_1(done)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ImageList_obj,shurikenLoad,(void))

Void ImageList_obj::shurikenUnload( ){
{
		HX_STACK_FRAME("kha.ImageList","shurikenUnload",0xe95bc9fb,"kha.ImageList.shurikenUnload","kha/internal/AssetsBuilder.hx",180,0x6901246d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::kha::Image tmp = this->shuriken;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->unload();
		HX_STACK_LINE(182)
		this->shuriken = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageList_obj,shurikenUnload,(void))


ImageList_obj::ImageList_obj()
{
}

void ImageList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageList);
	HX_MARK_MEMBER_NAME(blackFace,"blackFace");
	HX_MARK_MEMBER_NAME(blackFaceName,"blackFaceName");
	HX_MARK_MEMBER_NAME(blackFaceDescription,"blackFaceDescription");
	HX_MARK_MEMBER_NAME(bug,"bug");
	HX_MARK_MEMBER_NAME(bugName,"bugName");
	HX_MARK_MEMBER_NAME(bugDescription,"bugDescription");
	HX_MARK_MEMBER_NAME(explosion,"explosion");
	HX_MARK_MEMBER_NAME(explosionName,"explosionName");
	HX_MARK_MEMBER_NAME(explosionDescription,"explosionDescription");
	HX_MARK_MEMBER_NAME(fireball,"fireball");
	HX_MARK_MEMBER_NAME(fireballName,"fireballName");
	HX_MARK_MEMBER_NAME(fireballDescription,"fireballDescription");
	HX_MARK_MEMBER_NAME(greenFace,"greenFace");
	HX_MARK_MEMBER_NAME(greenFaceName,"greenFaceName");
	HX_MARK_MEMBER_NAME(greenFaceDescription,"greenFaceDescription");
	HX_MARK_MEMBER_NAME(ninjaBlack,"ninjaBlack");
	HX_MARK_MEMBER_NAME(ninjaBlackName,"ninjaBlackName");
	HX_MARK_MEMBER_NAME(ninjaBlackDescription,"ninjaBlackDescription");
	HX_MARK_MEMBER_NAME(ninjaBlack2,"ninjaBlack2");
	HX_MARK_MEMBER_NAME(ninjaBlack2Name,"ninjaBlack2Name");
	HX_MARK_MEMBER_NAME(ninjaBlack2Description,"ninjaBlack2Description");
	HX_MARK_MEMBER_NAME(ninjaBlackBig,"ninjaBlackBig");
	HX_MARK_MEMBER_NAME(ninjaBlackBigName,"ninjaBlackBigName");
	HX_MARK_MEMBER_NAME(ninjaBlackBigDescription,"ninjaBlackBigDescription");
	HX_MARK_MEMBER_NAME(ninjaGreen,"ninjaGreen");
	HX_MARK_MEMBER_NAME(ninjaGreenName,"ninjaGreenName");
	HX_MARK_MEMBER_NAME(ninjaGreenDescription,"ninjaGreenDescription");
	HX_MARK_MEMBER_NAME(shuriken,"shuriken");
	HX_MARK_MEMBER_NAME(shurikenName,"shurikenName");
	HX_MARK_MEMBER_NAME(shurikenDescription,"shurikenDescription");
	HX_MARK_END_CLASS();
}

void ImageList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackFace,"blackFace");
	HX_VISIT_MEMBER_NAME(blackFaceName,"blackFaceName");
	HX_VISIT_MEMBER_NAME(blackFaceDescription,"blackFaceDescription");
	HX_VISIT_MEMBER_NAME(bug,"bug");
	HX_VISIT_MEMBER_NAME(bugName,"bugName");
	HX_VISIT_MEMBER_NAME(bugDescription,"bugDescription");
	HX_VISIT_MEMBER_NAME(explosion,"explosion");
	HX_VISIT_MEMBER_NAME(explosionName,"explosionName");
	HX_VISIT_MEMBER_NAME(explosionDescription,"explosionDescription");
	HX_VISIT_MEMBER_NAME(fireball,"fireball");
	HX_VISIT_MEMBER_NAME(fireballName,"fireballName");
	HX_VISIT_MEMBER_NAME(fireballDescription,"fireballDescription");
	HX_VISIT_MEMBER_NAME(greenFace,"greenFace");
	HX_VISIT_MEMBER_NAME(greenFaceName,"greenFaceName");
	HX_VISIT_MEMBER_NAME(greenFaceDescription,"greenFaceDescription");
	HX_VISIT_MEMBER_NAME(ninjaBlack,"ninjaBlack");
	HX_VISIT_MEMBER_NAME(ninjaBlackName,"ninjaBlackName");
	HX_VISIT_MEMBER_NAME(ninjaBlackDescription,"ninjaBlackDescription");
	HX_VISIT_MEMBER_NAME(ninjaBlack2,"ninjaBlack2");
	HX_VISIT_MEMBER_NAME(ninjaBlack2Name,"ninjaBlack2Name");
	HX_VISIT_MEMBER_NAME(ninjaBlack2Description,"ninjaBlack2Description");
	HX_VISIT_MEMBER_NAME(ninjaBlackBig,"ninjaBlackBig");
	HX_VISIT_MEMBER_NAME(ninjaBlackBigName,"ninjaBlackBigName");
	HX_VISIT_MEMBER_NAME(ninjaBlackBigDescription,"ninjaBlackBigDescription");
	HX_VISIT_MEMBER_NAME(ninjaGreen,"ninjaGreen");
	HX_VISIT_MEMBER_NAME(ninjaGreenName,"ninjaGreenName");
	HX_VISIT_MEMBER_NAME(ninjaGreenDescription,"ninjaGreenDescription");
	HX_VISIT_MEMBER_NAME(shuriken,"shuriken");
	HX_VISIT_MEMBER_NAME(shurikenName,"shurikenName");
	HX_VISIT_MEMBER_NAME(shurikenDescription,"shurikenDescription");
}

Dynamic ImageList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bug") ) { return bug; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bugName") ) { return bugName; }
		if (HX_FIELD_EQ(inName,"bugLoad") ) { return bugLoad_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fireball") ) { return fireball; }
		if (HX_FIELD_EQ(inName,"shuriken") ) { return shuriken; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blackFace") ) { return blackFace; }
		if (HX_FIELD_EQ(inName,"bugUnload") ) { return bugUnload_dyn(); }
		if (HX_FIELD_EQ(inName,"explosion") ) { return explosion; }
		if (HX_FIELD_EQ(inName,"greenFace") ) { return greenFace; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ninjaBlack") ) { return ninjaBlack; }
		if (HX_FIELD_EQ(inName,"ninjaGreen") ) { return ninjaGreen; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ninjaBlack2") ) { return ninjaBlack2; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fireballName") ) { return fireballName; }
		if (HX_FIELD_EQ(inName,"fireballLoad") ) { return fireballLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"shurikenName") ) { return shurikenName; }
		if (HX_FIELD_EQ(inName,"shurikenLoad") ) { return shurikenLoad_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"blackFaceName") ) { return blackFaceName; }
		if (HX_FIELD_EQ(inName,"blackFaceLoad") ) { return blackFaceLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"explosionName") ) { return explosionName; }
		if (HX_FIELD_EQ(inName,"explosionLoad") ) { return explosionLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"greenFaceName") ) { return greenFaceName; }
		if (HX_FIELD_EQ(inName,"greenFaceLoad") ) { return greenFaceLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"ninjaBlackBig") ) { return ninjaBlackBig; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bugDescription") ) { return bugDescription; }
		if (HX_FIELD_EQ(inName,"fireballUnload") ) { return fireballUnload_dyn(); }
		if (HX_FIELD_EQ(inName,"ninjaBlackName") ) { return ninjaBlackName; }
		if (HX_FIELD_EQ(inName,"ninjaBlackLoad") ) { return ninjaBlackLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"ninjaGreenName") ) { return ninjaGreenName; }
		if (HX_FIELD_EQ(inName,"ninjaGreenLoad") ) { return ninjaGreenLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"shurikenUnload") ) { return shurikenUnload_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blackFaceUnload") ) { return blackFaceUnload_dyn(); }
		if (HX_FIELD_EQ(inName,"explosionUnload") ) { return explosionUnload_dyn(); }
		if (HX_FIELD_EQ(inName,"greenFaceUnload") ) { return greenFaceUnload_dyn(); }
		if (HX_FIELD_EQ(inName,"ninjaBlack2Name") ) { return ninjaBlack2Name; }
		if (HX_FIELD_EQ(inName,"ninjaBlack2Load") ) { return ninjaBlack2Load_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ninjaBlackUnload") ) { return ninjaBlackUnload_dyn(); }
		if (HX_FIELD_EQ(inName,"ninjaGreenUnload") ) { return ninjaGreenUnload_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ninjaBlack2Unload") ) { return ninjaBlack2Unload_dyn(); }
		if (HX_FIELD_EQ(inName,"ninjaBlackBigName") ) { return ninjaBlackBigName; }
		if (HX_FIELD_EQ(inName,"ninjaBlackBigLoad") ) { return ninjaBlackBigLoad_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"fireballDescription") ) { return fireballDescription; }
		if (HX_FIELD_EQ(inName,"ninjaBlackBigUnload") ) { return ninjaBlackBigUnload_dyn(); }
		if (HX_FIELD_EQ(inName,"shurikenDescription") ) { return shurikenDescription; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"blackFaceDescription") ) { return blackFaceDescription; }
		if (HX_FIELD_EQ(inName,"explosionDescription") ) { return explosionDescription; }
		if (HX_FIELD_EQ(inName,"greenFaceDescription") ) { return greenFaceDescription; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ninjaBlackDescription") ) { return ninjaBlackDescription; }
		if (HX_FIELD_EQ(inName,"ninjaGreenDescription") ) { return ninjaGreenDescription; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ninjaBlack2Description") ) { return ninjaBlack2Description; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ninjaBlackBigDescription") ) { return ninjaBlackBigDescription; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bug") ) { bug=inValue.Cast< ::kha::Image >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bugName") ) { bugName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fireball") ) { fireball=inValue.Cast< ::kha::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shuriken") ) { shuriken=inValue.Cast< ::kha::Image >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blackFace") ) { blackFace=inValue.Cast< ::kha::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explosion") ) { explosion=inValue.Cast< ::kha::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenFace") ) { greenFace=inValue.Cast< ::kha::Image >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ninjaBlack") ) { ninjaBlack=inValue.Cast< ::kha::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ninjaGreen") ) { ninjaGreen=inValue.Cast< ::kha::Image >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ninjaBlack2") ) { ninjaBlack2=inValue.Cast< ::kha::Image >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fireballName") ) { fireballName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shurikenName") ) { shurikenName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"blackFaceName") ) { blackFaceName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explosionName") ) { explosionName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenFaceName") ) { greenFaceName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ninjaBlackBig") ) { ninjaBlackBig=inValue.Cast< ::kha::Image >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bugDescription") ) { bugDescription=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ninjaBlackName") ) { ninjaBlackName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ninjaGreenName") ) { ninjaGreenName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ninjaBlack2Name") ) { ninjaBlack2Name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ninjaBlackBigName") ) { ninjaBlackBigName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"fireballDescription") ) { fireballDescription=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shurikenDescription") ) { shurikenDescription=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"blackFaceDescription") ) { blackFaceDescription=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explosionDescription") ) { explosionDescription=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenFaceDescription") ) { greenFaceDescription=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ninjaBlackDescription") ) { ninjaBlackDescription=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ninjaGreenDescription") ) { ninjaGreenDescription=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ninjaBlack2Description") ) { ninjaBlack2Description=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ninjaBlackBigDescription") ) { ninjaBlackBigDescription=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ImageList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ImageList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blackFace","\xfc","\x01","\x18","\x03"));
	outFields->push(HX_HCSTRING("blackFaceName","\x67","\x4e","\x7f","\x22"));
	outFields->push(HX_HCSTRING("blackFaceDescription","\x60","\x28","\x15","\xdf"));
	outFields->push(HX_HCSTRING("bug","\x34","\xc3","\x4a","\x00"));
	outFields->push(HX_HCSTRING("bugName","\x9f","\x0b","\x17","\x35"));
	outFields->push(HX_HCSTRING("bugDescription","\x28","\x02","\xa8","\x1e"));
	outFields->push(HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e"));
	outFields->push(HX_HCSTRING("explosionName","\x80","\x60","\x93","\xf9"));
	outFields->push(HX_HCSTRING("explosionDescription","\x67","\x7b","\x74","\xf4"));
	outFields->push(HX_HCSTRING("fireball","\xb5","\xc8","\x9f","\xd5"));
	outFields->push(HX_HCSTRING("fireballName","\xa0","\x65","\x83","\x20"));
	outFields->push(HX_HCSTRING("fireballDescription","\x47","\x5a","\x0d","\xae"));
	outFields->push(HX_HCSTRING("greenFace","\x00","\x0d","\x3e","\xa6"));
	outFields->push(HX_HCSTRING("greenFaceName","\x6b","\x2b","\xa1","\x06"));
	outFields->push(HX_HCSTRING("greenFaceDescription","\xdc","\xb3","\x62","\xa2"));
	outFields->push(HX_HCSTRING("ninjaBlack","\x15","\x0e","\x51","\x01"));
	outFields->push(HX_HCSTRING("ninjaBlackName","\x00","\xdb","\x32","\x65"));
	outFields->push(HX_HCSTRING("ninjaBlackDescription","\xe7","\x50","\x51","\x6e"));
	outFields->push(HX_HCSTRING("ninjaBlack2","\x7d","\x44","\x9b","\x25"));
	outFields->push(HX_HCSTRING("ninjaBlack2Name","\x68","\x65","\x7c","\xfb"));
	outFields->push(HX_HCSTRING("ninjaBlack2Description","\x7f","\x63","\x2b","\x91"));
	outFields->push(HX_HCSTRING("ninjaBlackBig","\xab","\x9d","\x5f","\x36"));
	outFields->push(HX_HCSTRING("ninjaBlackBigName","\x96","\xed","\x4f","\xe4"));
	outFields->push(HX_HCSTRING("ninjaBlackBigDescription","\x11","\x5d","\x69","\xcc"));
	outFields->push(HX_HCSTRING("ninjaGreen","\x19","\x47","\x4c","\xe6"));
	outFields->push(HX_HCSTRING("ninjaGreenName","\x04","\xe6","\x58","\x08"));
	outFields->push(HX_HCSTRING("ninjaGreenDescription","\x63","\x6e","\x9c","\x2b"));
	outFields->push(HX_HCSTRING("shuriken","\xfd","\xcb","\x89","\x47"));
	outFields->push(HX_HCSTRING("shurikenName","\xe8","\xac","\x04","\x78"));
	outFields->push(HX_HCSTRING("shurikenDescription","\xff","\x0b","\x83","\xcc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageList_obj,blackFace),HX_HCSTRING("blackFace","\xfc","\x01","\x18","\x03")},
	{hx::fsString,(int)offsetof(ImageList_obj,blackFaceName),HX_HCSTRING("blackFaceName","\x67","\x4e","\x7f","\x22")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageList_obj,blackFaceDescription),HX_HCSTRING("blackFaceDescription","\x60","\x28","\x15","\xdf")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageList_obj,bug),HX_HCSTRING("bug","\x34","\xc3","\x4a","\x00")},
	{hx::fsString,(int)offsetof(ImageList_obj,bugName),HX_HCSTRING("bugName","\x9f","\x0b","\x17","\x35")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageList_obj,bugDescription),HX_HCSTRING("bugDescription","\x28","\x02","\xa8","\x1e")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageList_obj,explosion),HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e")},
	{hx::fsString,(int)offsetof(ImageList_obj,explosionName),HX_HCSTRING("explosionName","\x80","\x60","\x93","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageList_obj,explosionDescription),HX_HCSTRING("explosionDescription","\x67","\x7b","\x74","\xf4")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageList_obj,fireball),HX_HCSTRING("fireball","\xb5","\xc8","\x9f","\xd5")},
	{hx::fsString,(int)offsetof(ImageList_obj,fireballName),HX_HCSTRING("fireballName","\xa0","\x65","\x83","\x20")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageList_obj,fireballDescription),HX_HCSTRING("fireballDescription","\x47","\x5a","\x0d","\xae")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageList_obj,greenFace),HX_HCSTRING("greenFace","\x00","\x0d","\x3e","\xa6")},
	{hx::fsString,(int)offsetof(ImageList_obj,greenFaceName),HX_HCSTRING("greenFaceName","\x6b","\x2b","\xa1","\x06")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageList_obj,greenFaceDescription),HX_HCSTRING("greenFaceDescription","\xdc","\xb3","\x62","\xa2")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageList_obj,ninjaBlack),HX_HCSTRING("ninjaBlack","\x15","\x0e","\x51","\x01")},
	{hx::fsString,(int)offsetof(ImageList_obj,ninjaBlackName),HX_HCSTRING("ninjaBlackName","\x00","\xdb","\x32","\x65")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageList_obj,ninjaBlackDescription),HX_HCSTRING("ninjaBlackDescription","\xe7","\x50","\x51","\x6e")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageList_obj,ninjaBlack2),HX_HCSTRING("ninjaBlack2","\x7d","\x44","\x9b","\x25")},
	{hx::fsString,(int)offsetof(ImageList_obj,ninjaBlack2Name),HX_HCSTRING("ninjaBlack2Name","\x68","\x65","\x7c","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageList_obj,ninjaBlack2Description),HX_HCSTRING("ninjaBlack2Description","\x7f","\x63","\x2b","\x91")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageList_obj,ninjaBlackBig),HX_HCSTRING("ninjaBlackBig","\xab","\x9d","\x5f","\x36")},
	{hx::fsString,(int)offsetof(ImageList_obj,ninjaBlackBigName),HX_HCSTRING("ninjaBlackBigName","\x96","\xed","\x4f","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageList_obj,ninjaBlackBigDescription),HX_HCSTRING("ninjaBlackBigDescription","\x11","\x5d","\x69","\xcc")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageList_obj,ninjaGreen),HX_HCSTRING("ninjaGreen","\x19","\x47","\x4c","\xe6")},
	{hx::fsString,(int)offsetof(ImageList_obj,ninjaGreenName),HX_HCSTRING("ninjaGreenName","\x04","\xe6","\x58","\x08")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageList_obj,ninjaGreenDescription),HX_HCSTRING("ninjaGreenDescription","\x63","\x6e","\x9c","\x2b")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(ImageList_obj,shuriken),HX_HCSTRING("shuriken","\xfd","\xcb","\x89","\x47")},
	{hx::fsString,(int)offsetof(ImageList_obj,shurikenName),HX_HCSTRING("shurikenName","\xe8","\xac","\x04","\x78")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageList_obj,shurikenDescription),HX_HCSTRING("shurikenDescription","\xff","\x0b","\x83","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blackFace","\xfc","\x01","\x18","\x03"),
	HX_HCSTRING("blackFaceName","\x67","\x4e","\x7f","\x22"),
	HX_HCSTRING("blackFaceDescription","\x60","\x28","\x15","\xdf"),
	HX_HCSTRING("blackFaceLoad","\x42","\x76","\x37","\x21"),
	HX_HCSTRING("blackFaceUnload","\x1b","\xbc","\xd0","\x83"),
	HX_HCSTRING("bug","\x34","\xc3","\x4a","\x00"),
	HX_HCSTRING("bugName","\x9f","\x0b","\x17","\x35"),
	HX_HCSTRING("bugDescription","\x28","\x02","\xa8","\x1e"),
	HX_HCSTRING("bugLoad","\x7a","\x33","\xcf","\x33"),
	HX_HCSTRING("bugUnload","\x53","\x37","\xbc","\x39"),
	HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e"),
	HX_HCSTRING("explosionName","\x80","\x60","\x93","\xf9"),
	HX_HCSTRING("explosionDescription","\x67","\x7b","\x74","\xf4"),
	HX_HCSTRING("explosionLoad","\x5b","\x88","\x4b","\xf8"),
	HX_HCSTRING("explosionUnload","\x74","\x46","\xa0","\x55"),
	HX_HCSTRING("fireball","\xb5","\xc8","\x9f","\xd5"),
	HX_HCSTRING("fireballName","\xa0","\x65","\x83","\x20"),
	HX_HCSTRING("fireballDescription","\x47","\x5a","\x0d","\xae"),
	HX_HCSTRING("fireballLoad","\x7b","\x8d","\x3b","\x1f"),
	HX_HCSTRING("fireballUnload","\x94","\xd3","\x73","\x1c"),
	HX_HCSTRING("greenFace","\x00","\x0d","\x3e","\xa6"),
	HX_HCSTRING("greenFaceName","\x6b","\x2b","\xa1","\x06"),
	HX_HCSTRING("greenFaceDescription","\xdc","\xb3","\x62","\xa2"),
	HX_HCSTRING("greenFaceLoad","\x46","\x53","\x59","\x05"),
	HX_HCSTRING("greenFaceUnload","\x1f","\xe2","\xe6","\x19"),
	HX_HCSTRING("ninjaBlack","\x15","\x0e","\x51","\x01"),
	HX_HCSTRING("ninjaBlackName","\x00","\xdb","\x32","\x65"),
	HX_HCSTRING("ninjaBlackDescription","\xe7","\x50","\x51","\x6e"),
	HX_HCSTRING("ninjaBlackLoad","\xdb","\x02","\xeb","\x63"),
	HX_HCSTRING("ninjaBlackUnload","\xf4","\x60","\xf3","\x83"),
	HX_HCSTRING("ninjaBlack2","\x7d","\x44","\x9b","\x25"),
	HX_HCSTRING("ninjaBlack2Name","\x68","\x65","\x7c","\xfb"),
	HX_HCSTRING("ninjaBlack2Description","\x7f","\x63","\x2b","\x91"),
	HX_HCSTRING("ninjaBlack2Load","\x43","\x8d","\x34","\xfa"),
	HX_HCSTRING("ninjaBlack2Unload","\x5c","\x55","\x82","\x67"),
	HX_HCSTRING("ninjaBlackBig","\xab","\x9d","\x5f","\x36"),
	HX_HCSTRING("ninjaBlackBigName","\x96","\xed","\x4f","\xe4"),
	HX_HCSTRING("ninjaBlackBigDescription","\x11","\x5d","\x69","\xcc"),
	HX_HCSTRING("ninjaBlackBigLoad","\x71","\x15","\x08","\xe3"),
	HX_HCSTRING("ninjaBlackBigUnload","\x0a","\xc5","\x6a","\xd2"),
	HX_HCSTRING("ninjaGreen","\x19","\x47","\x4c","\xe6"),
	HX_HCSTRING("ninjaGreenName","\x04","\xe6","\x58","\x08"),
	HX_HCSTRING("ninjaGreenDescription","\x63","\x6e","\x9c","\x2b"),
	HX_HCSTRING("ninjaGreenLoad","\xdf","\x0d","\x11","\x07"),
	HX_HCSTRING("ninjaGreenUnload","\xf8","\x34","\xf5","\xc4"),
	HX_HCSTRING("shuriken","\xfd","\xcb","\x89","\x47"),
	HX_HCSTRING("shurikenName","\xe8","\xac","\x04","\x78"),
	HX_HCSTRING("shurikenDescription","\xff","\x0b","\x83","\xcc"),
	HX_HCSTRING("shurikenLoad","\xc3","\xd4","\xbc","\x76"),
	HX_HCSTRING("shurikenUnload","\xdc","\x7c","\x4b","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageList_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageList_obj::__mClass;

void ImageList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.ImageList","\x6f","\xbc","\x9b","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ImageList_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageList_obj >;
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
