#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#define INCLUDED_com_haxepunk_graphics_Canvas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Graphic.h>
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Canvas)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,BlendMode)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,ColorTransform)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Canvas_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef Canvas_obj OBJ_;
		Canvas_obj();
		Void __construct(int width,int height);

	public:
		static hx::ObjectPtr< Canvas_obj > __new(int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Canvas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Canvas"); }

		::flash::display::Graphics _graphics;
		::flash::geom::Rectangle _rect;
		int _refHeight;
		int _refWidth;
		::flash::display::BitmapData _ref;
		Float _blue;
		Float _green;
		Float _red;
		::flash::geom::Matrix _matrix;
		::flash::geom::ColorTransform _colorTransform;
		::flash::geom::ColorTransform _tint;
		Float _alpha;
		int _color;
		int _maxHeight;
		int _maxWidth;
		int _height;
		int _width;
		Array< ::Dynamic > _buffers;
		virtual int get_height( );
		Dynamic get_height_dyn();

		int height;
		virtual int get_width( );
		Dynamic get_width_dyn();

		int width;
		virtual Void shift( hx::Null< int >  x,hx::Null< int >  y);
		Dynamic shift_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual Void drawGraphic( int x,int y,::com::haxepunk::Graphic source);
		Dynamic drawGraphic_dyn();

		virtual Void fillTexture( ::flash::geom::Rectangle rect,::flash::display::BitmapData texture);
		Dynamic fillTexture_dyn();

		virtual Void drawRect( ::flash::geom::Rectangle rect,hx::Null< int >  color,hx::Null< Float >  alpha);
		Dynamic drawRect_dyn();

		virtual Void fill( ::flash::geom::Rectangle rect,hx::Null< int >  color,hx::Null< Float >  alpha);
		Dynamic fill_dyn();

		virtual Void draw( int x,int y,::flash::display::BitmapData source,::flash::geom::Rectangle rect);
		Dynamic draw_dyn();

		virtual Void render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera);

		Float scaleY;
		Float scaleX;
		Float scale;
		Float angle;
		::flash::display::BlendMode blend;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Canvas */ 
