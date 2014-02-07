#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{

Void TileAtlas_obj::__construct(Dynamic source,int tileWidth,int tileHeight,Dynamic __o_tileMarginWidth,Dynamic __o_tileMarginHeight)
{
HX_STACK_PUSH("TileAtlas::new","com/haxepunk/graphics/atlas/TileAtlas.hx",17);
Dynamic tileMarginWidth = __o_tileMarginWidth.Default(0);
Dynamic tileMarginHeight = __o_tileMarginHeight.Default(0);
{
	HX_STACK_LINE(18)
	super::__construct(source);
	HX_STACK_LINE(19)
	this->_regions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(20)
	this->prepareTiles(this->_data->width,this->_data->height,tileWidth,tileHeight,tileMarginWidth,tileMarginHeight);
}
;
	return null();
}

TileAtlas_obj::~TileAtlas_obj() { }

Dynamic TileAtlas_obj::__CreateEmpty() { return  new TileAtlas_obj; }
hx::ObjectPtr< TileAtlas_obj > TileAtlas_obj::__new(Dynamic source,int tileWidth,int tileHeight,Dynamic __o_tileMarginWidth,Dynamic __o_tileMarginHeight)
{  hx::ObjectPtr< TileAtlas_obj > result = new TileAtlas_obj();
	result->__construct(source,tileWidth,tileHeight,__o_tileMarginWidth,__o_tileMarginHeight);
	return result;}

Dynamic TileAtlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileAtlas_obj > result = new TileAtlas_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void TileAtlas_obj::prepareTiles( int width,int height,int tileWidth,int tileHeight,int tileMarginWidth,int tileMarginHeight){
{
		HX_STACK_PUSH("TileAtlas::prepareTiles","com/haxepunk/graphics/atlas/TileAtlas.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(tileWidth,"tileWidth");
		HX_STACK_ARG(tileHeight,"tileHeight");
		HX_STACK_ARG(tileMarginWidth,"tileMarginWidth");
		HX_STACK_ARG(tileMarginHeight,"tileMarginHeight");
		HX_STACK_LINE(36)
		int cols = ::Math_obj::floor((Float(width) / Float(tileWidth)));		HX_STACK_VAR(cols,"cols");
		HX_STACK_LINE(37)
		int rows = ::Math_obj::floor((Float(height) / Float(tileHeight)));		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(39)
		::com::haxepunk::HXP_obj::rect->width = tileWidth;
		HX_STACK_LINE(40)
		::com::haxepunk::HXP_obj::rect->height = tileHeight;
		HX_STACK_LINE(42)
		::com::haxepunk::HXP_obj::point->x = ::com::haxepunk::HXP_obj::point->y = (int)0;
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			while(((_g < rows))){
				HX_STACK_LINE(44)
				int y = (_g)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(46)
				::com::haxepunk::HXP_obj::rect->y = (y * ((tileHeight + tileMarginHeight)));
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(48)
					while(((_g1 < cols))){
						HX_STACK_LINE(48)
						int x = (_g1)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(50)
						::com::haxepunk::HXP_obj::rect->x = (x * ((tileWidth + tileMarginWidth)));
						struct _Function_5_1{
							inline static ::com::haxepunk::graphics::atlas::AtlasRegion Block( ::com::haxepunk::graphics::atlas::TileAtlas_obj *__this){
								HX_STACK_PUSH("*::closure","com/haxepunk/graphics/atlas/TileAtlas.hx",52);
								{
									HX_STACK_LINE(52)
									::com::haxepunk::graphics::atlas::AtlasData _this = __this->_data;		HX_STACK_VAR(_this,"_this");
									::flash::geom::Rectangle rect = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(rect,"rect");
									::flash::geom::Point center = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(center,"center");
									HX_STACK_LINE(52)
									::flash::geom::Rectangle r = rect->clone();		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(52)
									::flash::geom::Point p = (  (((center != null()))) ? ::flash::geom::Point(::flash::geom::Point_obj::__new(center->x,center->y)) : ::flash::geom::Point(null()) );		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(52)
									int tileIndex = _this->_tilesheet->addTileRect(r,p);		HX_STACK_VAR(tileIndex,"tileIndex");
									HX_STACK_LINE(52)
									return ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(_this,tileIndex,rect);
								}
								return null();
							}
						};
						HX_STACK_LINE(52)
						this->_regions->push(_Function_5_1::Block(this));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(TileAtlas_obj,prepareTiles,(void))

::com::haxepunk::graphics::atlas::AtlasRegion TileAtlas_obj::getRegion( int index){
	HX_STACK_PUSH("TileAtlas::getRegion","com/haxepunk/graphics/atlas/TileAtlas.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(30)
	return this->_regions->__get(index).StaticCast< ::com::haxepunk::graphics::atlas::AtlasRegion >();
}


HX_DEFINE_DYNAMIC_FUNC1(TileAtlas_obj,getRegion,return )


TileAtlas_obj::TileAtlas_obj()
{
}

void TileAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileAtlas);
	HX_MARK_MEMBER_NAME(_regions,"_regions");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_regions,"_regions");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TileAtlas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regions") ) { return _regions; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"prepareTiles") ) { return prepareTiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileAtlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regions") ) { _regions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_regions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_regions"),
	HX_CSTRING("prepareTiles"),
	HX_CSTRING("getRegion"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileAtlas_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileAtlas_obj::__mClass,"__mClass");
};

Class TileAtlas_obj::__mClass;

void TileAtlas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.TileAtlas"), hx::TCanCast< TileAtlas_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileAtlas_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
