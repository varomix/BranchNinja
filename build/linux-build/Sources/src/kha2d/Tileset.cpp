#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha2d_Tile
#include <kha2d/Tile.h>
#endif
#ifndef INCLUDED_kha2d_Tileset
#include <kha2d/Tileset.h>
#endif
namespace kha2d{

Void Tileset_obj::__construct(::kha::Image image,int tileWidth,int tileHeight,Array< ::Dynamic > tiles)
{
HX_STACK_FRAME("kha2d.Tileset","new",0xdfee68ae,"kha2d.Tileset.new","Sources/kha2d/Tileset.hx",14,0xc0dc0dda)
HX_STACK_THIS(this)
HX_STACK_ARG(image,"image")
HX_STACK_ARG(tileWidth,"tileWidth")
HX_STACK_ARG(tileHeight,"tileHeight")
HX_STACK_ARG(tiles,"tiles")
{
	HX_STACK_LINE(15)
	this->TILE_WIDTH = (int)32;
	HX_STACK_LINE(16)
	this->TILE_HEIGHT = (int)32;
	HX_STACK_LINE(18)
	this->image = image;
	HX_STACK_LINE(19)
	this->TILE_WIDTH = tileWidth;
	HX_STACK_LINE(20)
	this->TILE_HEIGHT = tileHeight;
	HX_STACK_LINE(21)
	int tmp = image->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	int tmp1 = this->TILE_WIDTH;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	this->xmax = tmp3;
	HX_STACK_LINE(22)
	int tmp4 = image->get_height();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	int tmp5 = this->TILE_HEIGHT;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(22)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(22)
	this->ymax = tmp7;
	HX_STACK_LINE(23)
	bool tmp8 = (tiles == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(23)
	if ((tmp8)){
		HX_STACK_LINE(24)
		Array< ::Dynamic > tmp9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(24)
		this->tiles = tmp9;
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(25)
			int tmp10 = this->getLength();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(25)
			int _g = tmp10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(25)
			while((true)){
				HX_STACK_LINE(25)
				bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(25)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(25)
				if ((tmp12)){
					HX_STACK_LINE(25)
					break;
				}
				HX_STACK_LINE(25)
				int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(25)
				int i = tmp13;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(25)
				Array< ::Dynamic > tmp14 = this->tiles;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(25)
				::kha2d::Tile tmp15 = ::kha2d::Tile_obj::__new(i,false);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(25)
				tmp14->push(tmp15);
			}
		}
	}
	else{
		HX_STACK_LINE(27)
		this->tiles = tiles;
	}
}
;
	return null();
}

//Tileset_obj::~Tileset_obj() { }

Dynamic Tileset_obj::__CreateEmpty() { return  new Tileset_obj; }
hx::ObjectPtr< Tileset_obj > Tileset_obj::__new(::kha::Image image,int tileWidth,int tileHeight,Array< ::Dynamic > tiles)
{  hx::ObjectPtr< Tileset_obj > _result_ = new Tileset_obj();
	_result_->__construct(image,tileWidth,tileHeight,tiles);
	return _result_;}

Dynamic Tileset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tileset_obj > _result_ = new Tileset_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Tileset_obj::render( ::kha::graphics2::Graphics g,int tile,int x,int y){
{
		HX_STACK_FRAME("kha2d.Tileset","render",0x0dcc77c8,"kha2d.Tileset.render","Sources/kha2d/Tileset.hx",30,0xc0dc0dda)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(tile,"tile")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(31)
		bool tmp = (tile < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		if ((tmp)){
			HX_STACK_LINE(31)
			return null();
		}
		HX_STACK_LINE(32)
		Array< ::Dynamic > tmp1 = this->tiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		int tmp2 = tile;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		::kha2d::Tile tmp3 = tmp1->__get(tmp2).StaticCast< ::kha2d::Tile >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		int index = tmp3->imageIndex;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(33)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		int tmp5 = this->xmax;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		int ytile = tmp7;		HX_STACK_VAR(ytile,"ytile");
		HX_STACK_LINE(34)
		int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		int tmp9 = ytile;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(34)
		int tmp10 = this->xmax;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		int tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(34)
		int xtile = tmp12;		HX_STACK_VAR(xtile,"xtile");
		HX_STACK_LINE(35)
		::kha::Image tmp13 = this->image;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(35)
		int tmp14 = xtile;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(35)
		int tmp15 = this->TILE_WIDTH;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(35)
		int tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(35)
		int tmp17 = ytile;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(35)
		int tmp18 = this->TILE_HEIGHT;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(35)
		int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(35)
		int tmp20 = this->TILE_WIDTH;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(35)
		int tmp21 = this->TILE_HEIGHT;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(35)
		int tmp22 = x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(35)
		int tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(35)
		int tmp24 = this->TILE_WIDTH;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(35)
		int tmp25 = this->TILE_HEIGHT;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(35)
		g->drawScaledSubImage(tmp13,tmp16,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Tileset_obj,render,(void))

::kha2d::Tile Tileset_obj::tile( int index){
	HX_STACK_FRAME("kha2d.Tileset","tile",0x14a77720,"kha2d.Tileset.tile","Sources/kha2d/Tileset.hx",38,0xc0dc0dda)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(39)
	Array< ::Dynamic > tmp = this->tiles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::kha2d::Tile tmp2 = tmp->__get(tmp1).StaticCast< ::kha2d::Tile >();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,tile,return )

int Tileset_obj::getLength( ){
	HX_STACK_FRAME("kha2d.Tileset","getLength",0x1484e4ea,"kha2d.Tileset.getLength","Sources/kha2d/Tileset.hx",42,0xc0dc0dda)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	int tmp = this->xmax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	int tmp1 = this->ymax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Tileset_obj,getLength,return )


Tileset_obj::Tileset_obj()
{
}

void Tileset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tileset);
	HX_MARK_MEMBER_NAME(TILE_WIDTH,"TILE_WIDTH");
	HX_MARK_MEMBER_NAME(TILE_HEIGHT,"TILE_HEIGHT");
	HX_MARK_MEMBER_NAME(xmax,"xmax");
	HX_MARK_MEMBER_NAME(ymax,"ymax");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_END_CLASS();
}

void Tileset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(TILE_WIDTH,"TILE_WIDTH");
	HX_VISIT_MEMBER_NAME(TILE_HEIGHT,"TILE_HEIGHT");
	HX_VISIT_MEMBER_NAME(xmax,"xmax");
	HX_VISIT_MEMBER_NAME(ymax,"ymax");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
}

Dynamic Tileset_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xmax") ) { return xmax; }
		if (HX_FIELD_EQ(inName,"ymax") ) { return ymax; }
		if (HX_FIELD_EQ(inName,"tile") ) { return tile_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TILE_WIDTH") ) { return TILE_WIDTH; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TILE_HEIGHT") ) { return TILE_HEIGHT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tileset_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xmax") ) { xmax=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ymax") ) { ymax=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::kha::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TILE_WIDTH") ) { TILE_WIDTH=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TILE_HEIGHT") ) { TILE_HEIGHT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tileset_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Tileset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3"));
	outFields->push(HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b"));
	outFields->push(HX_HCSTRING("xmax","\x2c","\xa5","\xa4","\x4f"));
	outFields->push(HX_HCSTRING("ymax","\xcb","\xdb","\x4d","\x50"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Tileset_obj,TILE_WIDTH),HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3")},
	{hx::fsInt,(int)offsetof(Tileset_obj,TILE_HEIGHT),HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b")},
	{hx::fsInt,(int)offsetof(Tileset_obj,xmax),HX_HCSTRING("xmax","\x2c","\xa5","\xa4","\x4f")},
	{hx::fsInt,(int)offsetof(Tileset_obj,ymax),HX_HCSTRING("ymax","\xcb","\xdb","\x4d","\x50")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(Tileset_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tileset_obj,tiles),HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("TILE_WIDTH","\xd5","\x5e","\xc1","\xb3"),
	HX_HCSTRING("TILE_HEIGHT","\x18","\x14","\xc1","\x4b"),
	HX_HCSTRING("xmax","\x2c","\xa5","\xa4","\x4f"),
	HX_HCSTRING("ymax","\xcb","\xdb","\x4d","\x50"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
};

#endif

hx::Class Tileset_obj::__mClass;

void Tileset_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha2d.Tileset","\xbc","\x39","\x4d","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Tileset_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tileset_obj >;
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
