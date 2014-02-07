#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#define INCLUDED_com_haxepunk_graphics_Spritemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/graphics/Image.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Animation)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Atlas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,TileAtlas)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Spritemap_obj : public ::com::haxepunk::graphics::Image_obj{
	public:
		typedef ::com::haxepunk::graphics::Image_obj super;
		typedef Spritemap_obj OBJ_;
		Spritemap_obj();
		Void __construct(Dynamic source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,Dynamic cbFunc,::String __o_name);

	public:
		static hx::ObjectPtr< Spritemap_obj > __new(Dynamic source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,Dynamic cbFunc,::String __o_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Spritemap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Spritemap"); }

		::com::haxepunk::graphics::atlas::TileAtlas _atlas;
		Float _timer;
		int _frame;
		int _index;
		::com::haxepunk::graphics::Animation _anim;
		::haxe::ds::StringMap _anims;
		int _frameCount;
		int _rows;
		int _columns;
		int _height;
		int _width;
		::flash::geom::Rectangle _rect;
		virtual ::String get_currentAnim( );
		Dynamic get_currentAnim_dyn();

		::String currentAnim;
		virtual int get_rows( );
		Dynamic get_rows_dyn();

		int rows;
		virtual int get_columns( );
		Dynamic get_columns_dyn();

		int columns;
		virtual int get_frameCount( );
		Dynamic get_frameCount_dyn();

		int frameCount;
		virtual int set_index( int value);
		Dynamic set_index_dyn();

		virtual int get_index( );
		Dynamic get_index_dyn();

		virtual int set_frame( int value);
		Dynamic set_frame_dyn();

		virtual int get_frame( );
		Dynamic get_frame_dyn();

		virtual Void setAnimFrame( ::String name,int index);
		Dynamic setAnimFrame_dyn();

		virtual Void randFrame( );
		Dynamic randFrame_dyn();

		virtual Void setFrame( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic setFrame_dyn();

		virtual int getFrame( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic getFrame_dyn();

		virtual ::com::haxepunk::graphics::Animation play( ::String name,hx::Null< bool >  reset);
		Dynamic play_dyn();

		virtual ::com::haxepunk::graphics::Animation add( ::String name,Array< int > frames,hx::Null< Float >  frameRate,hx::Null< bool >  loop);
		Dynamic add_dyn();

		virtual Void update( );

		virtual Void updateBuffer( hx::Null< bool >  clearBefore);

		Float rate;
		Dynamic callbackFunc;
		Dynamic &callbackFunc_dyn() { return callbackFunc;}
		bool complete;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Spritemap */ 
