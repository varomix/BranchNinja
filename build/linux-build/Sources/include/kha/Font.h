#ifndef INCLUDED_kha_Font
#define INCLUDED_kha_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
HX_DECLARE_CLASS1(kha,Font)
HX_DECLARE_CLASS1(kha,Resource)
namespace kha{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public ::kha::Resource_obj{
	public:
		typedef ::kha::Resource_obj super;
		typedef Font_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Float height( int fontSize)=0;
virtual Dynamic height_dyn()=0;
		virtual Float width( int fontSize,::String str)=0;
virtual Dynamic width_dyn()=0;
		virtual Float baseline( int fontSize)=0;
virtual Dynamic baseline_dyn()=0;
};



template<typename IMPL>
class Font_delegate_ : public Font_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Font_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Float height( int fontSize) { return mDelegate->height(fontSize);}
		Dynamic height_dyn() { return mDelegate->height_dyn();}
		Float width( int fontSize,::String str) { return mDelegate->width(fontSize,str);}
		Dynamic width_dyn() { return mDelegate->width_dyn();}
		Float baseline( int fontSize) { return mDelegate->baseline(fontSize);}
		Dynamic baseline_dyn() { return mDelegate->baseline_dyn();}
		Void unload( ) { return mDelegate->unload();}
		Dynamic unload_dyn() { return mDelegate->unload_dyn();}
};

} // end namespace kha

#endif /* INCLUDED_kha_Font */ 
