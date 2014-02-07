#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#define INCLUDED_com_haxepunk_graphics_atlas_TileAtlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/graphics/atlas/Atlas.h>
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Atlas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,TileAtlas)
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  TileAtlas_obj : public ::com::haxepunk::graphics::atlas::Atlas_obj{
	public:
		typedef ::com::haxepunk::graphics::atlas::Atlas_obj super;
		typedef TileAtlas_obj OBJ_;
		TileAtlas_obj();
		Void __construct(Dynamic source,int tileWidth,int tileHeight,Dynamic __o_tileMarginWidth,Dynamic __o_tileMarginHeight);

	public:
		static hx::ObjectPtr< TileAtlas_obj > __new(Dynamic source,int tileWidth,int tileHeight,Dynamic __o_tileMarginWidth,Dynamic __o_tileMarginHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TileAtlas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileAtlas"); }

		Array< ::Dynamic > _regions;
		virtual Void prepareTiles( int width,int height,int tileWidth,int tileHeight,int tileMarginWidth,int tileMarginHeight);
		Dynamic prepareTiles_dyn();

		virtual ::com::haxepunk::graphics::atlas::AtlasRegion getRegion( int index);
		Dynamic getRegion_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_com_haxepunk_graphics_atlas_TileAtlas */ 
