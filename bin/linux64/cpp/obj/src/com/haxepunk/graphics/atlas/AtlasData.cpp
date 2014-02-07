#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
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
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

Void AtlasData_obj::__construct(::flash::display::BitmapData bd)
{
HX_STACK_PUSH("AtlasData::new","com/haxepunk/graphics/atlas/AtlasData.hx",12);
{
	HX_STACK_LINE(355)
	this->_dataIndex = (int)0;
	HX_STACK_LINE(347)
	this->_layerIndex = (int)0;
	HX_STACK_LINE(345)
	this->_refCount = (int)0;
	HX_STACK_LINE(77)
	this->_data = Array_obj< Float >::__new();
	HX_STACK_LINE(79)
	this->_tilesheet = ::openfl::display::Tilesheet_obj::__new(bd);
	HX_STACK_LINE(81)
	this->_renderFlags = (int)28;
	HX_STACK_LINE(82)
	this->_flagAlpha = true;
	HX_STACK_LINE(83)
	this->_flagRGB = true;
	HX_STACK_LINE(85)
	this->width = bd->get_width();
	HX_STACK_LINE(86)
	this->height = bd->get_height();
	HX_STACK_LINE(88)
	this->_refCount = (int)0;
	HX_STACK_LINE(89)
	this->_layerIndex = (int)-1;
	HX_STACK_LINE(90)
	::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases->push(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

AtlasData_obj::~AtlasData_obj() { }

Dynamic AtlasData_obj::__CreateEmpty() { return  new AtlasData_obj; }
hx::ObjectPtr< AtlasData_obj > AtlasData_obj::__new(::flash::display::BitmapData bd)
{  hx::ObjectPtr< AtlasData_obj > result = new AtlasData_obj();
	result->__construct(bd);
	return result;}

Dynamic AtlasData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasData_obj > result = new AtlasData_obj();
	result->__construct(inArgs[0]);
	return result;}

int AtlasData_obj::set_blend( int value){
	HX_STACK_PUSH("AtlasData::set_blend","com/haxepunk/graphics/atlas/AtlasData.hx",326);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(327)
	switch( (int)(value)){
		case (int)-1: {
			HX_STACK_LINE(330)
			hx::AndEq(this->_renderFlags,(int)-65537);
			HX_STACK_LINE(331)
			hx::AndEq(this->_renderFlags,(int)-1);
		}
		;break;
		case (int)65536: {
			HX_STACK_LINE(333)
			hx::OrEq(this->_renderFlags,(int)65536);
			HX_STACK_LINE(334)
			hx::AndEq(this->_renderFlags,(int)-1);
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(336)
			hx::AndEq(this->_renderFlags,(int)-65537);
			HX_STACK_LINE(337)
			hx::OrEq(this->_renderFlags,(int)0);
		}
		;break;
	}
	HX_STACK_LINE(339)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_blend,return )

int AtlasData_obj::get_blend( ){
	HX_STACK_PUSH("AtlasData::get_blend","com/haxepunk/graphics/atlas/AtlasData.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_LINE(317)
	if (((((int(this->_renderFlags) & int((int)0))) != (int)0))){
		HX_STACK_LINE(319)
		return (int)0;
	}
	else{
		HX_STACK_LINE(320)
		if (((((int(this->_renderFlags) & int((int)65536))) != (int)0))){
			HX_STACK_LINE(321)
			return (int)65536;
		}
		else{
			HX_STACK_LINE(323)
			return (int)-1;
		}
	}
	HX_STACK_LINE(317)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_blend,return )

bool AtlasData_obj::set_rgb( bool value){
	HX_STACK_PUSH("AtlasData::set_rgb","com/haxepunk/graphics/atlas/AtlasData.hx",305);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(306)
	if ((value)){
		HX_STACK_LINE(306)
		hx::OrEq(this->_renderFlags,(int)4);
	}
	else{
		HX_STACK_LINE(307)
		hx::AndEq(this->_renderFlags,(int)-5);
	}
	HX_STACK_LINE(308)
	this->_flagRGB = value;
	HX_STACK_LINE(309)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_rgb,return )

bool AtlasData_obj::get_rgb( ){
	HX_STACK_PUSH("AtlasData::get_rgb","com/haxepunk/graphics/atlas/AtlasData.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_LINE(303)
	return (((int(this->_renderFlags) & int((int)4))) != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_rgb,return )

bool AtlasData_obj::set_alpha( bool value){
	HX_STACK_PUSH("AtlasData::set_alpha","com/haxepunk/graphics/atlas/AtlasData.hx",291);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(292)
	if ((value)){
		HX_STACK_LINE(292)
		hx::OrEq(this->_renderFlags,(int)8);
	}
	else{
		HX_STACK_LINE(293)
		hx::AndEq(this->_renderFlags,(int)-9);
	}
	HX_STACK_LINE(294)
	this->_flagAlpha = value;
	HX_STACK_LINE(295)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_alpha,return )

bool AtlasData_obj::get_alpha( ){
	HX_STACK_PUSH("AtlasData::get_alpha","com/haxepunk/graphics/atlas/AtlasData.hx",289);
	HX_STACK_THIS(this);
	HX_STACK_LINE(289)
	return (((int(this->_renderFlags) & int((int)8))) != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_alpha,return )

Void AtlasData_obj::prepareTile( int tile,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_PUSH("AtlasData::prepareTile","com/haxepunk/graphics/atlas/AtlasData.hx",246);
		HX_STACK_THIS(this);
		HX_STACK_ARG(tile,"tile");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(layer,"layer");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(247)
		if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(247)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != null()))){
				HX_STACK_LINE(247)
				::com::haxepunk::graphics::atlas::AtlasData _this = ::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(247)
				if (((_this->_dataIndex != (int)0))){
					HX_STACK_LINE(247)
					if (((_this->_dataIndex < _this->_data->length))){
						HX_STACK_LINE(247)
						_this->_data->splice(_this->_dataIndex,(_this->_data->length - _this->_dataIndex));
					}
					HX_STACK_LINE(247)
					_this->_dataIndex = (int)0;
					HX_STACK_LINE(247)
					_this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),_this->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this->_renderFlags);
				}
			}
			HX_STACK_LINE(247)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas = hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(247)
			if (((this->_layerIndex != layer))){
				HX_STACK_LINE(247)
				if (((this->_dataIndex != (int)0))){
					HX_STACK_LINE(247)
					if (((this->_dataIndex < this->_data->length))){
						HX_STACK_LINE(247)
						this->_data->splice(this->_dataIndex,(this->_data->length - this->_dataIndex));
					}
					HX_STACK_LINE(247)
					this->_dataIndex = (int)0;
					HX_STACK_LINE(247)
					this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),this->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
				}
				HX_STACK_LINE(247)
				this->_layerIndex = layer;
			}
		}
		HX_STACK_LINE(249)
		this->_data[(this->_dataIndex)++] = x;
		HX_STACK_LINE(250)
		this->_data[(this->_dataIndex)++] = y;
		HX_STACK_LINE(251)
		this->_data[(this->_dataIndex)++] = tile;
		HX_STACK_LINE(254)
		if (((angle == (int)0))){
			HX_STACK_LINE(257)
			this->_data[(this->_dataIndex)++] = scaleX;
			HX_STACK_LINE(258)
			this->_data[(this->_dataIndex)++] = (int)0;
			HX_STACK_LINE(259)
			this->_data[(this->_dataIndex)++] = (int)0;
			HX_STACK_LINE(260)
			this->_data[(this->_dataIndex)++] = scaleY;
		}
		else{
			HX_STACK_LINE(264)
			Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(265)
			Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(266)
			this->_data[(this->_dataIndex)++] = (cos * scaleX);
			HX_STACK_LINE(267)
			this->_data[(this->_dataIndex)++] = (-(sin) * scaleY);
			HX_STACK_LINE(268)
			this->_data[(this->_dataIndex)++] = (sin * scaleX);
			HX_STACK_LINE(269)
			this->_data[(this->_dataIndex)++] = (cos * scaleY);
		}
		HX_STACK_LINE(272)
		if ((this->_flagRGB)){
			HX_STACK_LINE(274)
			this->_data[(this->_dataIndex)++] = red;
			HX_STACK_LINE(275)
			this->_data[(this->_dataIndex)++] = green;
			HX_STACK_LINE(276)
			this->_data[(this->_dataIndex)++] = blue;
		}
		HX_STACK_LINE(278)
		if ((this->_flagAlpha)){
			HX_STACK_LINE(279)
			this->_data[(this->_dataIndex)++] = alpha;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(AtlasData_obj,prepareTile,(void))

Void AtlasData_obj::prepareTileMatrix( int tile,int layer,Float tx,Float ty,Float a,Float b,Float c,Float d,Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_PUSH("AtlasData::prepareTileMatrix","com/haxepunk/graphics/atlas/AtlasData.hx",203);
		HX_STACK_THIS(this);
		HX_STACK_ARG(tile,"tile");
		HX_STACK_ARG(layer,"layer");
		HX_STACK_ARG(tx,"tx");
		HX_STACK_ARG(ty,"ty");
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(d,"d");
		HX_STACK_ARG(red,"red");
		HX_STACK_ARG(green,"green");
		HX_STACK_ARG(blue,"blue");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(204)
		if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(204)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != null()))){
				HX_STACK_LINE(204)
				::com::haxepunk::graphics::atlas::AtlasData _this = ::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(204)
				if (((_this->_dataIndex != (int)0))){
					HX_STACK_LINE(204)
					if (((_this->_dataIndex < _this->_data->length))){
						HX_STACK_LINE(204)
						_this->_data->splice(_this->_dataIndex,(_this->_data->length - _this->_dataIndex));
					}
					HX_STACK_LINE(204)
					_this->_dataIndex = (int)0;
					HX_STACK_LINE(204)
					_this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),_this->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this->_renderFlags);
				}
			}
			HX_STACK_LINE(204)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas = hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(204)
			if (((this->_layerIndex != layer))){
				HX_STACK_LINE(204)
				if (((this->_dataIndex != (int)0))){
					HX_STACK_LINE(204)
					if (((this->_dataIndex < this->_data->length))){
						HX_STACK_LINE(204)
						this->_data->splice(this->_dataIndex,(this->_data->length - this->_dataIndex));
					}
					HX_STACK_LINE(204)
					this->_dataIndex = (int)0;
					HX_STACK_LINE(204)
					this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),this->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
				}
				HX_STACK_LINE(204)
				this->_layerIndex = layer;
			}
		}
		HX_STACK_LINE(206)
		this->_data[(this->_dataIndex)++] = tx;
		HX_STACK_LINE(207)
		this->_data[(this->_dataIndex)++] = ty;
		HX_STACK_LINE(208)
		this->_data[(this->_dataIndex)++] = tile;
		HX_STACK_LINE(211)
		this->_data[(this->_dataIndex)++] = a;
		HX_STACK_LINE(212)
		this->_data[(this->_dataIndex)++] = b;
		HX_STACK_LINE(213)
		this->_data[(this->_dataIndex)++] = c;
		HX_STACK_LINE(214)
		this->_data[(this->_dataIndex)++] = d;
		HX_STACK_LINE(217)
		if ((this->_flagRGB)){
			HX_STACK_LINE(219)
			this->_data[(this->_dataIndex)++] = red;
			HX_STACK_LINE(220)
			this->_data[(this->_dataIndex)++] = green;
			HX_STACK_LINE(221)
			this->_data[(this->_dataIndex)++] = blue;
		}
		HX_STACK_LINE(223)
		if ((this->_flagAlpha)){
			HX_STACK_LINE(224)
			this->_data[(this->_dataIndex)++] = alpha;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(AtlasData_obj,prepareTileMatrix,(void))

Void AtlasData_obj::checkForFlush( int layer){
{
		HX_STACK_PUSH("AtlasData::checkForFlush","com/haxepunk/graphics/atlas/AtlasData.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_LINE(171)
		if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(174)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != null()))){
				HX_STACK_LINE(175)
				::com::haxepunk::graphics::atlas::AtlasData _this = ::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(175)
				if (((_this->_dataIndex != (int)0))){
					HX_STACK_LINE(175)
					if (((_this->_dataIndex < _this->_data->length))){
						HX_STACK_LINE(175)
						_this->_data->splice(_this->_dataIndex,(_this->_data->length - _this->_dataIndex));
					}
					HX_STACK_LINE(175)
					_this->_dataIndex = (int)0;
					HX_STACK_LINE(175)
					_this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),_this->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this->_renderFlags);
				}
			}
			HX_STACK_LINE(176)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas = hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(178)
			if (((this->_layerIndex != layer))){
				HX_STACK_LINE(180)
				if (((this->_dataIndex != (int)0))){
					HX_STACK_LINE(180)
					if (((this->_dataIndex < this->_data->length))){
						HX_STACK_LINE(180)
						this->_data->splice(this->_dataIndex,(this->_data->length - this->_dataIndex));
					}
					HX_STACK_LINE(180)
					this->_dataIndex = (int)0;
					HX_STACK_LINE(180)
					this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),this->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
				}
				HX_STACK_LINE(181)
				this->_layerIndex = layer;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,checkForFlush,(void))

Void AtlasData_obj::flush( ){
{
		HX_STACK_PUSH("AtlasData::flush","com/haxepunk/graphics/atlas/AtlasData.hx",154);
		HX_STACK_THIS(this);
		HX_STACK_LINE(154)
		if (((this->_dataIndex != (int)0))){
			HX_STACK_LINE(157)
			if (((this->_dataIndex < this->_data->length))){
				HX_STACK_LINE(158)
				this->_data->splice(this->_dataIndex,(this->_data->length - this->_dataIndex));
			}
			HX_STACK_LINE(161)
			this->_dataIndex = (int)0;
			HX_STACK_LINE(162)
			this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),this->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,flush,(void))

::com::haxepunk::graphics::atlas::AtlasRegion AtlasData_obj::createRegion( ::flash::geom::Rectangle rect,::flash::geom::Point center){
	HX_STACK_PUSH("AtlasData::createRegion","com/haxepunk/graphics/atlas/AtlasData.hx",146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(center,"center");
	HX_STACK_LINE(147)
	::flash::geom::Rectangle r = rect->clone();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(148)
	::flash::geom::Point p = (  (((center != null()))) ? ::flash::geom::Point(::flash::geom::Point_obj::__new(center->x,center->y)) : ::flash::geom::Point(null()) );		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(149)
	int tileIndex = this->_tilesheet->addTileRect(r,p);		HX_STACK_VAR(tileIndex,"tileIndex");
	HX_STACK_LINE(150)
	return ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(hx::ObjectPtr<OBJ_>(this),tileIndex,rect);
}


HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,createRegion,return )

Void AtlasData_obj::destroy( ){
{
		HX_STACK_PUSH("AtlasData::destroy","com/haxepunk/graphics/atlas/AtlasData.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_LINE(115)
		hx::SubEq(this->_refCount,(int)1);
		HX_STACK_LINE(116)
		if (((this->_refCount <= (int)0))){
			HX_STACK_LINE(118)
			if (((this->_name != null()))){
				HX_STACK_LINE(120)
				::com::haxepunk::HXP_obj::removeBitmap(this->_name);
				HX_STACK_LINE(121)
				::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->remove(this->_name);
			}
			HX_STACK_LINE(123)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,destroy,(void))

int AtlasData_obj::BLEND_NONE;

int AtlasData_obj::BLEND_ADD;

int AtlasData_obj::BLEND_NORMAL;

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::create( Dynamic source){
	HX_STACK_PUSH("AtlasData::create","com/haxepunk/graphics/atlas/AtlasData.hx",28);
	HX_STACK_ARG(source,"source");
	HX_STACK_LINE(29)
	::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(30)
	if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
		HX_STACK_LINE(31)
		data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source);
	}
	else{
		struct _Function_2_1{
			inline static ::com::haxepunk::graphics::atlas::AtlasData Block( Dynamic &source){
				HX_STACK_PUSH("*::closure","com/haxepunk/graphics/atlas/AtlasData.hx",39);
				{
					HX_STACK_LINE(39)
					::String name = source;		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(39)
					::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(39)
					if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(name))){
						HX_STACK_LINE(39)
						data1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(name);
					}
					else{
						HX_STACK_LINE(39)
						::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(name);		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(39)
						if (((bitmap != null()))){
							HX_STACK_LINE(39)
							data1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap);
							HX_STACK_LINE(39)
							data1->_name = name;
							HX_STACK_LINE(39)
							::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->set(name,data1);
						}
					}
					HX_STACK_LINE(39)
					return data1;
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		data = _Function_2_1::Block(source);
	}
	HX_STACK_LINE(42)
	if (((data != null()))){
		HX_STACK_LINE(43)
		hx::AddEq(data->_refCount,(int)1);
	}
	HX_STACK_LINE(47)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,create,return )

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::getAtlasDataByName( ::String name,hx::Null< bool >  __o_create){
bool create = __o_create.Default(false);
	HX_STACK_PUSH("AtlasData::getAtlasDataByName","com/haxepunk/graphics/atlas/AtlasData.hx",56);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(create,"create");
{
		HX_STACK_LINE(57)
		::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(58)
		if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(name))){
			HX_STACK_LINE(59)
			data = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(name);
		}
		else{
			HX_STACK_LINE(62)
			if ((create)){
				HX_STACK_LINE(64)
				::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(name);		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(65)
				if (((bitmap != null()))){
					HX_STACK_LINE(67)
					data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap);
					HX_STACK_LINE(68)
					data->_name = name;
					HX_STACK_LINE(69)
					::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->set(name,data);
				}
			}
		}
		HX_STACK_LINE(72)
		return data;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,getAtlasDataByName,return )

Void AtlasData_obj::startScene( ::com::haxepunk::Scene scene){
{
		HX_STACK_PUSH("AtlasData::startScene","com/haxepunk/graphics/atlas/AtlasData.hx",98);
		HX_STACK_ARG(scene,"scene");
		HX_STACK_LINE(99)
		::com::haxepunk::graphics::atlas::AtlasData_obj::_scene = scene;
		HX_STACK_LINE(100)
		::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics()->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,startScene,(void))

Void AtlasData_obj::endScene( ){
{
		HX_STACK_PUSH("AtlasData::endScene","com/haxepunk/graphics/atlas/AtlasData.hx",104);
		HX_STACK_LINE(105)
		if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != null()))){
			HX_STACK_LINE(106)
			::com::haxepunk::graphics::atlas::AtlasData _this = ::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(106)
			if (((_this->_dataIndex != (int)0))){
				HX_STACK_LINE(106)
				if (((_this->_dataIndex < _this->_data->length))){
					HX_STACK_LINE(106)
					_this->_data->splice(_this->_dataIndex,(_this->_data->length - _this->_dataIndex));
				}
				HX_STACK_LINE(106)
				_this->_dataIndex = (int)0;
				HX_STACK_LINE(106)
				_this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),_this->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this->_renderFlags);
			}
		}
		HX_STACK_LINE(107)
		::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,endScene,(void))

Void AtlasData_obj::destroyAll( ){
{
		HX_STACK_PUSH("AtlasData::destroyAll","com/haxepunk/graphics/atlas/AtlasData.hx",131);
		HX_STACK_LINE(132)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(132)
		while(((_g < _g1->length))){
			HX_STACK_LINE(132)
			::com::haxepunk::graphics::atlas::AtlasData atlas = _g1->__get(_g).StaticCast< ::com::haxepunk::graphics::atlas::AtlasData >();		HX_STACK_VAR(atlas,"atlas");
			HX_STACK_LINE(132)
			++(_g);
			HX_STACK_LINE(134)
			atlas->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,destroyAll,(void))

::com::haxepunk::Scene AtlasData_obj::_scene;

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::_lastAtlas;

::haxe::ds::StringMap AtlasData_obj::_dataPool;

Array< ::Dynamic > AtlasData_obj::_atlases;


AtlasData_obj::AtlasData_obj()
{
}

void AtlasData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtlasData);
	HX_MARK_MEMBER_NAME(_dataIndex,"_dataIndex");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_MARK_MEMBER_NAME(_flagAlpha,"_flagAlpha");
	HX_MARK_MEMBER_NAME(_flagRGB,"_flagRGB");
	HX_MARK_MEMBER_NAME(_renderFlags,"_renderFlags");
	HX_MARK_MEMBER_NAME(_layerIndex,"_layerIndex");
	HX_MARK_MEMBER_NAME(_refCount,"_refCount");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void AtlasData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataIndex,"_dataIndex");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_VISIT_MEMBER_NAME(_flagAlpha,"_flagAlpha");
	HX_VISIT_MEMBER_NAME(_flagRGB,"_flagRGB");
	HX_VISIT_MEMBER_NAME(_renderFlags,"_renderFlags");
	HX_VISIT_MEMBER_NAME(_layerIndex,"_layerIndex");
	HX_VISIT_MEMBER_NAME(_refCount,"_refCount");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic AtlasData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { return get_rgb(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		if (HX_FIELD_EQ(inName,"blend") ) { return get_blend(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_rgb") ) { return set_rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rgb") ) { return get_rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endScene") ) { return endScene_dyn(); }
		if (HX_FIELD_EQ(inName,"_atlases") ) { return _atlases; }
		if (HX_FIELD_EQ(inName,"_flagRGB") ) { return _flagRGB; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataPool") ) { return _dataPool; }
		if (HX_FIELD_EQ(inName,"_refCount") ) { return _refCount; }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blend") ) { return get_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startScene") ) { return startScene_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyAll") ) { return destroyAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_lastAtlas") ) { return _lastAtlas; }
		if (HX_FIELD_EQ(inName,"_dataIndex") ) { return _dataIndex; }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { return _tilesheet; }
		if (HX_FIELD_EQ(inName,"_flagAlpha") ) { return _flagAlpha; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layerIndex") ) { return _layerIndex; }
		if (HX_FIELD_EQ(inName,"prepareTile") ) { return prepareTile_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_renderFlags") ) { return _renderFlags; }
		if (HX_FIELD_EQ(inName,"createRegion") ) { return createRegion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkForFlush") ) { return checkForFlush_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareTileMatrix") ) { return prepareTileMatrix_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getAtlasDataByName") ) { return getAtlasDataByName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AtlasData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { return set_rgb(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { return set_blend(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_atlases") ) { _atlases=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flagRGB") ) { _flagRGB=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataPool") ) { _dataPool=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refCount") ) { _refCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastAtlas") ) { _lastAtlas=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataIndex") ) { _dataIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { _tilesheet=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flagAlpha") ) { _flagAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layerIndex") ) { _layerIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_renderFlags") ) { _renderFlags=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AtlasData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_dataIndex"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_tilesheet"));
	outFields->push(HX_CSTRING("_flagAlpha"));
	outFields->push(HX_CSTRING("_flagRGB"));
	outFields->push(HX_CSTRING("_renderFlags"));
	outFields->push(HX_CSTRING("_layerIndex"));
	outFields->push(HX_CSTRING("_refCount"));
	outFields->push(HX_CSTRING("_name"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("rgb"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BLEND_NONE"),
	HX_CSTRING("BLEND_ADD"),
	HX_CSTRING("BLEND_NORMAL"),
	HX_CSTRING("create"),
	HX_CSTRING("getAtlasDataByName"),
	HX_CSTRING("startScene"),
	HX_CSTRING("endScene"),
	HX_CSTRING("destroyAll"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_lastAtlas"),
	HX_CSTRING("_dataPool"),
	HX_CSTRING("_atlases"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_dataIndex"),
	HX_CSTRING("_data"),
	HX_CSTRING("_tilesheet"),
	HX_CSTRING("_flagAlpha"),
	HX_CSTRING("_flagRGB"),
	HX_CSTRING("_renderFlags"),
	HX_CSTRING("_layerIndex"),
	HX_CSTRING("_refCount"),
	HX_CSTRING("_name"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("get_blend"),
	HX_CSTRING("set_rgb"),
	HX_CSTRING("get_rgb"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("prepareTile"),
	HX_CSTRING("prepareTileMatrix"),
	HX_CSTRING("checkForFlush"),
	HX_CSTRING("flush"),
	HX_CSTRING("createRegion"),
	HX_CSTRING("destroy"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_NONE,"BLEND_NONE");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_ADD,"BLEND_ADD");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_NORMAL,"BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_scene,"_scene");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_lastAtlas,"_lastAtlas");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_dataPool,"_dataPool");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_atlases,"_atlases");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_NONE,"BLEND_NONE");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_ADD,"BLEND_ADD");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_NORMAL,"BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_scene,"_scene");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_lastAtlas,"_lastAtlas");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_dataPool,"_dataPool");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_atlases,"_atlases");
};

Class AtlasData_obj::__mClass;

void AtlasData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.AtlasData"), hx::TCanCast< AtlasData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AtlasData_obj::__boot()
{
	BLEND_NONE= (int)-1;
	BLEND_ADD= (int)65536;
	BLEND_NORMAL= (int)0;
	_dataPool= ::haxe::ds::StringMap_obj::__new();
	_atlases= Array_obj< ::Dynamic >::__new();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
