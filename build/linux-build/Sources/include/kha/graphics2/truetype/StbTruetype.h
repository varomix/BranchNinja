#ifndef INCLUDED_kha_graphics2_truetype_StbTruetype
#define INCLUDED_kha_graphics2_truetype_StbTruetype

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Blob)
HX_DECLARE_CLASS3(kha,graphics2,truetype,StbTruetype)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__active_edge)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__bitmap)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__edge)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__point)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_aligned_quad)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_bakedchar)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_fontinfo)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_temp_font_v_metrics)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_temp_glyph_h_metrics)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_temp_rect)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_temp_region)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_vertex)
namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES  StbTruetype_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StbTruetype_obj OBJ_;
		StbTruetype_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.StbTruetype")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StbTruetype_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StbTruetype_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StbTruetype","\xa9","\x5e","\xa4","\x2f"); }

		static void __boot();
		static Void STBTT_assert( bool value);
		static Dynamic STBTT_assert_dyn();

		static Float STBTT_POINT_SIZE( Float x);
		static Dynamic STBTT_POINT_SIZE_dyn();

		static int STBTT_vmove;
		static int STBTT_vline;
		static int STBTT_vcurve;
		static int STBTT_MACSTYLE_DONTCARE;
		static int STBTT_MACSTYLE_BOLD;
		static int STBTT_MACSTYLE_ITALIC;
		static int STBTT_MACSTYLE_UNDERSCORE;
		static int STBTT_MACSTYLE_NONE;
		static int STBTT_PLATFORM_ID_UNICODE;
		static int STBTT_PLATFORM_ID_MAC;
		static int STBTT_PLATFORM_ID_ISO;
		static int STBTT_PLATFORM_ID_MICROSOFT;
		static int STBTT_UNICODE_EID_UNICODE_1_0;
		static int STBTT_UNICODE_EID_UNICODE_1_1;
		static int STBTT_UNICODE_EID_ISO_10646;
		static int STBTT_UNICODE_EID_UNICODE_2_0_BMP;
		static int STBTT_UNICODE_EID_UNICODE_2_0_FULL;
		static int STBTT_MS_EID_SYMBOL;
		static int STBTT_MS_EID_UNICODE_BMP;
		static int STBTT_MS_EID_SHIFTJIS;
		static int STBTT_MS_EID_UNICODE_FULL;
		static int STBTT_MAC_EID_ROMAN;
		static int STBTT_MAC_EID_ARABIC;
		static int STBTT_MAC_EID_JAPANESE;
		static int STBTT_MAC_EID_HEBREW;
		static int STBTT_MAC_EID_CHINESE_TRAD;
		static int STBTT_MAC_EID_GREEK;
		static int STBTT_MAC_EID_KOREAN;
		static int STBTT_MAC_EID_RUSSIAN;
		static int STBTT_MS_LANG_ENGLISH;
		static int STBTT_MS_LANG_ITALIAN;
		static int STBTT_MS_LANG_CHINESE;
		static int STBTT_MS_LANG_JAPANESE;
		static int STBTT_MS_LANG_DUTCH;
		static int STBTT_MS_LANG_KOREAN;
		static int STBTT_MS_LANG_FRENCH;
		static int STBTT_MS_LANG_RUSSIAN;
		static int STBTT_MS_LANG_GERMAN;
		static int STBTT_MS_LANG_SPANISH;
		static int STBTT_MS_LANG_HEBREW;
		static int STBTT_MS_LANG_SWEDISH;
		static int STBTT_MAC_LANG_ENGLISH;
		static int STBTT_MAC_LANG_JAPANESE;
		static int STBTT_MAC_LANG_ARABIC;
		static int STBTT_MAC_LANG_KOREAN;
		static int STBTT_MAC_LANG_DUTCH;
		static int STBTT_MAC_LANG_RUSSIAN;
		static int STBTT_MAC_LANG_FRENCH;
		static int STBTT_MAC_LANG_SPANISH;
		static int STBTT_MAC_LANG_GERMAN;
		static int STBTT_MAC_LANG_SWEDISH;
		static int STBTT_MAC_LANG_HEBREW;
		static int STBTT_MAC_LANG_CHINESE_SIMPLIFIED;
		static int STBTT_MAC_LANG_ITALIAN;
		static int STBTT_MAC_LANG_CHINESE_TRAD;
		static int STBTT_MAX_OVERSAMPLE;
		static int STBTT_RASTERIZER_VERSION;
		static int ttBYTE( ::kha::Blob p,hx::Null< int >  pos);
		static Dynamic ttBYTE_dyn();

		static int ttCHAR( ::kha::Blob p,hx::Null< int >  pos);
		static Dynamic ttCHAR_dyn();

		static int ttUSHORT( ::kha::Blob p,hx::Null< int >  pos);
		static Dynamic ttUSHORT_dyn();

		static int ttSHORT( ::kha::Blob p,hx::Null< int >  pos);
		static Dynamic ttSHORT_dyn();

		static int ttULONG( ::kha::Blob p,hx::Null< int >  pos);
		static Dynamic ttULONG_dyn();

		static int ttLONG( ::kha::Blob p,hx::Null< int >  pos);
		static Dynamic ttLONG_dyn();

		static int ttFixed( ::kha::Blob p,hx::Null< int >  pos);
		static Dynamic ttFixed_dyn();

		static bool stbtt_tag4( ::kha::Blob p,int pos,int c0,int c1,int c2,int c3);
		static Dynamic stbtt_tag4_dyn();

		static bool stbtt_tag( ::kha::Blob p,int pos,::String str);
		static Dynamic stbtt_tag_dyn();

		static bool stbtt__isfont( ::kha::Blob font);
		static Dynamic stbtt__isfont_dyn();

		static int stbtt__find_table( ::kha::Blob data,int fontstart,::String tag);
		static Dynamic stbtt__find_table_dyn();

		static int stbtt_GetFontOffsetForIndex( ::kha::Blob font_collection,int index);
		static Dynamic stbtt_GetFontOffsetForIndex_dyn();

		static bool stbtt_InitFont( ::kha::graphics2::truetype::Stbtt_fontinfo info,::kha::Blob data,int fontstart);
		static Dynamic stbtt_InitFont_dyn();

		static int stbtt_FindGlyphIndex( ::kha::graphics2::truetype::Stbtt_fontinfo info,int unicode_codepoint);
		static Dynamic stbtt_FindGlyphIndex_dyn();

		static Array< ::Dynamic > stbtt_GetCodepointShape( ::kha::graphics2::truetype::Stbtt_fontinfo info,int unicode_codepoint);
		static Dynamic stbtt_GetCodepointShape_dyn();

		static Void stbtt_setvertex( ::kha::graphics2::truetype::Stbtt_vertex v,int type,int x,int y,int cx,int cy);
		static Dynamic stbtt_setvertex_dyn();

		static int stbtt__GetGlyfOffset( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph_index);
		static Dynamic stbtt__GetGlyfOffset_dyn();

		static bool stbtt_GetGlyphBox( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph_index,::kha::graphics2::truetype::Stbtt_temp_rect rect);
		static Dynamic stbtt_GetGlyphBox_dyn();

		static bool stbtt_GetCodepointBox( ::kha::graphics2::truetype::Stbtt_fontinfo info,int codepoint,::kha::graphics2::truetype::Stbtt_temp_rect rect);
		static Dynamic stbtt_GetCodepointBox_dyn();

		static bool stbtt_IsGlyphEmpty( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph_index);
		static Dynamic stbtt_IsGlyphEmpty_dyn();

		static int stbtt__close_shape( Array< ::Dynamic > vertices,int num_vertices,bool was_off,bool start_off,int sx,int sy,int scx,int scy,int cx,int cy);
		static Dynamic stbtt__close_shape_dyn();

		static Void copyVertices( Array< ::Dynamic > from,Array< ::Dynamic > to,int offset,int count);
		static Dynamic copyVertices_dyn();

		static Array< ::Dynamic > stbtt_GetGlyphShape( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph_index);
		static Dynamic stbtt_GetGlyphShape_dyn();

		static ::kha::graphics2::truetype::Stbtt_temp_glyph_h_metrics stbtt_GetGlyphHMetrics( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph_index);
		static Dynamic stbtt_GetGlyphHMetrics_dyn();

		static int stbtt_GetGlyphKernAdvance( ::kha::graphics2::truetype::Stbtt_fontinfo info,int glyph1,int glyph2);
		static Dynamic stbtt_GetGlyphKernAdvance_dyn();

		static int stbtt_GetCodepointKernAdvance( ::kha::graphics2::truetype::Stbtt_fontinfo info,int ch1,int ch2);
		static Dynamic stbtt_GetCodepointKernAdvance_dyn();

		static ::kha::graphics2::truetype::Stbtt_temp_glyph_h_metrics stbtt_GetCodepointHMetrics( ::kha::graphics2::truetype::Stbtt_fontinfo info,int codepoint);
		static Dynamic stbtt_GetCodepointHMetrics_dyn();

		static ::kha::graphics2::truetype::Stbtt_temp_font_v_metrics stbtt_GetFontVMetrics( ::kha::graphics2::truetype::Stbtt_fontinfo info);
		static Dynamic stbtt_GetFontVMetrics_dyn();

		static ::kha::graphics2::truetype::Stbtt_temp_rect stbtt_GetFontBoundingBox( ::kha::graphics2::truetype::Stbtt_fontinfo info);
		static Dynamic stbtt_GetFontBoundingBox_dyn();

		static Float stbtt_ScaleForPixelHeight( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float height);
		static Dynamic stbtt_ScaleForPixelHeight_dyn();

		static Float stbtt_ScaleForMappingEmToPixels( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float pixels);
		static Dynamic stbtt_ScaleForMappingEmToPixels_dyn();

		static ::kha::graphics2::truetype::Stbtt_temp_rect stbtt_GetGlyphBitmapBoxSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo font,int glyph,Float scale_x,Float scale_y,Float shift_x,Float shift_y);
		static Dynamic stbtt_GetGlyphBitmapBoxSubpixel_dyn();

		static ::kha::graphics2::truetype::Stbtt_temp_rect stbtt_GetGlyphBitmapBox( ::kha::graphics2::truetype::Stbtt_fontinfo font,int glyph,Float scale_x,Float scale_y);
		static Dynamic stbtt_GetGlyphBitmapBox_dyn();

		static ::kha::graphics2::truetype::Stbtt_temp_rect stbtt_GetCodepointBitmapBoxSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo font,int codepoint,Float scale_x,Float scale_y,Float shift_x,Float shift_y);
		static Dynamic stbtt_GetCodepointBitmapBoxSubpixel_dyn();

		static ::kha::graphics2::truetype::Stbtt_temp_rect stbtt_GetCodepointBitmapBox( ::kha::graphics2::truetype::Stbtt_fontinfo font,int codepoint,Float scale_x,Float scale_y);
		static Dynamic stbtt_GetCodepointBitmapBox_dyn();

		static ::kha::graphics2::truetype::Stbtt__active_edge stbtt__new_active( Array< ::Dynamic > e,int eIndex,int off_x,Float start_point);
		static Dynamic stbtt__new_active_dyn();

		static Void stbtt__handle_clipped_edge( Array< Float > scanline,int scanlineIndex,int x,::kha::graphics2::truetype::Stbtt__active_edge e,Float x0,Float y0,Float x1,Float y1);
		static Dynamic stbtt__handle_clipped_edge_dyn();

		static Void stbtt__fill_active_edges_new( Array< Float > scanline,Array< Float > scanline_fill,int scanline_fillIndex,int len,::kha::graphics2::truetype::Stbtt__active_edge e,Float y_top);
		static Dynamic stbtt__fill_active_edges_new_dyn();

		static Void stbtt__rasterize_sorted_edges( ::kha::graphics2::truetype::Stbtt__bitmap result,Array< ::Dynamic > e,int n,int vsubsample,int off_x,int off_y);
		static Dynamic stbtt__rasterize_sorted_edges_dyn();

		static bool STBTT__COMPARE( ::kha::graphics2::truetype::Stbtt__edge a,::kha::graphics2::truetype::Stbtt__edge b);
		static Dynamic STBTT__COMPARE_dyn();

		static Void stbtt__sort_edges_ins_sort( Array< ::Dynamic > p,int n);
		static Dynamic stbtt__sort_edges_ins_sort_dyn();

		static Void stbtt__sort_edges_quicksort( Array< ::Dynamic > p,int pIndex,int n);
		static Dynamic stbtt__sort_edges_quicksort_dyn();

		static Void stbtt__sort_edges( Array< ::Dynamic > p,int n);
		static Dynamic stbtt__sort_edges_dyn();

		static Void stbtt__rasterize( ::kha::graphics2::truetype::Stbtt__bitmap result,Array< ::Dynamic > pts,Array< int > wcount,int windings,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int off_x,int off_y,bool invert);
		static Dynamic stbtt__rasterize_dyn();

		static Void stbtt__add_point( Array< ::Dynamic > points,int n,Float x,Float y);
		static Dynamic stbtt__add_point_dyn();

		static int stbtt__tesselate_curve( Array< ::Dynamic > points,Dynamic num_points,Float x0,Float y0,Float x1,Float y1,Float x2,Float y2,Float objspace_flatness_squared,int n);
		static Dynamic stbtt__tesselate_curve_dyn();

		static Array< ::Dynamic > stbtt_FlattenCurves( Array< ::Dynamic > vertices,int num_verts,Float objspace_flatness,Dynamic contour_lengths,Dynamic num_contours);
		static Dynamic stbtt_FlattenCurves_dyn();

		static Void stbtt_Rasterize( ::kha::graphics2::truetype::Stbtt__bitmap result,Float flatness_in_pixels,Array< ::Dynamic > vertices,int num_verts,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int x_off,int y_off,bool invert);
		static Dynamic stbtt_Rasterize_dyn();

		static ::kha::Blob stbtt_GetGlyphBitmapSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int glyph,::kha::graphics2::truetype::Stbtt_temp_region region);
		static Dynamic stbtt_GetGlyphBitmapSubpixel_dyn();

		static ::kha::Blob stbtt_GetGlyphBitmap( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float scale_x,Float scale_y,int glyph,::kha::graphics2::truetype::Stbtt_temp_region region);
		static Dynamic stbtt_GetGlyphBitmap_dyn();

		static Void stbtt_MakeGlyphBitmapSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo info,::kha::Blob output,int output_offset,int out_w,int out_h,int out_stride,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int glyph);
		static Dynamic stbtt_MakeGlyphBitmapSubpixel_dyn();

		static Void stbtt_MakeGlyphBitmap( ::kha::graphics2::truetype::Stbtt_fontinfo info,::kha::Blob output,int output_offset,int out_w,int out_h,int out_stride,Float scale_x,Float scale_y,int glyph);
		static Dynamic stbtt_MakeGlyphBitmap_dyn();

		static ::kha::Blob stbtt_GetCodepointBitmapSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int codepoint,::kha::graphics2::truetype::Stbtt_temp_region region);
		static Dynamic stbtt_GetCodepointBitmapSubpixel_dyn();

		static Void stbtt_MakeCodepointBitmapSubpixel( ::kha::graphics2::truetype::Stbtt_fontinfo info,::kha::Blob output,int output_offset,int out_w,int out_h,int out_stride,Float scale_x,Float scale_y,Float shift_x,Float shift_y,int codepoint);
		static Dynamic stbtt_MakeCodepointBitmapSubpixel_dyn();

		static ::kha::Blob stbtt_GetCodepointBitmap( ::kha::graphics2::truetype::Stbtt_fontinfo info,Float scale_x,Float scale_y,int codepoint,::kha::graphics2::truetype::Stbtt_temp_region region);
		static Dynamic stbtt_GetCodepointBitmap_dyn();

		static Void stbtt_MakeCodepointBitmap( ::kha::graphics2::truetype::Stbtt_fontinfo info,::kha::Blob output,int output_offset,int out_w,int out_h,int out_stride,Float scale_x,Float scale_y,int codepoint);
		static Dynamic stbtt_MakeCodepointBitmap_dyn();

		static int stbtt_BakeFontBitmap( ::kha::Blob data,int offset,Float pixel_height,::kha::Blob pixels,int pw,int ph,int first_char,int num_chars,Array< ::Dynamic > chardata);
		static Dynamic stbtt_BakeFontBitmap_dyn();

		static Void stbtt_GetBakedQuad( Array< ::Dynamic > chardata,int pw,int ph,int char_index,Dynamic xpos,Dynamic ypos,::kha::graphics2::truetype::Stbtt_aligned_quad q,bool opengl_fillrule);
		static Dynamic stbtt_GetBakedQuad_dyn();

};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_StbTruetype */ 
