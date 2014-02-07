#ifndef INCLUDED_com_haxepunk_graphics_Backdrop
#define INCLUDED_com_haxepunk_graphics_Backdrop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/graphics/Canvas.h>
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Backdrop)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Canvas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Backdrop_obj : public ::com::haxepunk::graphics::Canvas_obj{
	public:
		typedef ::com::haxepunk::graphics::Canvas_obj super;
		typedef Backdrop_obj OBJ_;
		Backdrop_obj();
		Void __construct(Dynamic source,hx::Null< bool >  __o_repeatX,hx::Null< bool >  __o_repeatY);

	public:
		static hx::ObjectPtr< Backdrop_obj > __new(Dynamic source,hx::Null< bool >  __o_repeatX,hx::Null< bool >  __o_repeatY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Backdrop_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Backdrop"); }

		Float _y;
		Float _x;
		bool _repeatY;
		bool _repeatX;
		int _textHeight;
		int _textWidth;
		::com::haxepunk::graphics::atlas::AtlasRegion _region;
		::flash::display::BitmapData _source;
		virtual Void renderAtlas( int layer,::flash::geom::Point point,::flash::geom::Point camera);

		virtual Void render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera);

		virtual Void setBitmapSource( ::flash::display::BitmapData bitmap);
		Dynamic setBitmapSource_dyn();

		virtual Void setAtlasRegion( ::com::haxepunk::graphics::atlas::AtlasRegion region);
		Dynamic setAtlasRegion_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Backdrop */ 
