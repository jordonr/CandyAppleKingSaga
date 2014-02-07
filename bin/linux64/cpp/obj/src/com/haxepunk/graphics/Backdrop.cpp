#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Backdrop
#include <com/haxepunk/graphics/Backdrop.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Backdrop_obj::__construct(Dynamic source,hx::Null< bool >  __o_repeatX,hx::Null< bool >  __o_repeatY)
{
HX_STACK_PUSH("Backdrop::new","com/haxepunk/graphics/Backdrop.hx",25);
bool repeatX = __o_repeatX.Default(true);
bool repeatY = __o_repeatY.Default(true);
{
	HX_STACK_LINE(26)
	if ((::Std_obj::is(source,hx::ClassOf< ::com::haxepunk::graphics::atlas::AtlasRegion >()))){
		HX_STACK_LINE(26)
		::com::haxepunk::graphics::atlas::AtlasRegion region = source;		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(26)
		this->blit = false;
		HX_STACK_LINE(26)
		this->_region = region;
		HX_STACK_LINE(26)
		this->_textWidth = ::Std_obj::_int(region->rect->width);
		HX_STACK_LINE(26)
		this->_textHeight = ::Std_obj::_int(region->rect->height);
	}
	else{
		HX_STACK_LINE(28)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(31)
			::com::haxepunk::graphics::atlas::AtlasRegion region = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(source);		HX_STACK_VAR(region,"region");
			HX_STACK_LINE(31)
			this->blit = false;
			HX_STACK_LINE(31)
			this->_region = region;
			HX_STACK_LINE(31)
			this->_textWidth = ::Std_obj::_int(region->rect->width);
			HX_STACK_LINE(31)
			this->_textHeight = ::Std_obj::_int(region->rect->height);
		}
		else{
			HX_STACK_LINE(35)
			if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(35)
				::flash::display::BitmapData bitmap = source;		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(35)
				this->blit = true;
				HX_STACK_LINE(35)
				this->_source = bitmap;
				HX_STACK_LINE(35)
				this->_textWidth = this->_source->get_width();
				HX_STACK_LINE(35)
				this->_textHeight = this->_source->get_height();
			}
			else{
				HX_STACK_LINE(36)
				if ((::Std_obj::is(source,hx::ClassOf< ::Dynamic >()))){
					HX_STACK_LINE(36)
					this->blit = true;
					HX_STACK_LINE(36)
					this->_source = ::com::haxepunk::HXP_obj::getBitmap(source);
					HX_STACK_LINE(36)
					this->_textWidth = this->_source->get_width();
					HX_STACK_LINE(36)
					this->_textHeight = this->_source->get_height();
				}
			}
			HX_STACK_LINE(37)
			if (((bool((this->_source == null())) && bool((this->_region == null()))))){
				HX_STACK_LINE(37)
				this->blit = true;
				HX_STACK_LINE(37)
				this->_source = ::com::haxepunk::HXP_obj::createBitmap(::com::haxepunk::HXP_obj::width,::com::haxepunk::HXP_obj::height,true,null());
				HX_STACK_LINE(37)
				this->_textWidth = this->_source->get_width();
				HX_STACK_LINE(37)
				this->_textHeight = this->_source->get_height();
			}
		}
	}
	HX_STACK_LINE(41)
	this->_repeatX = repeatX;
	HX_STACK_LINE(42)
	this->_repeatY = repeatY;
	HX_STACK_LINE(44)
	super::__construct(((::com::haxepunk::HXP_obj::width * ((  ((repeatX)) ? int((int)1) : int((int)0) ))) + this->_textWidth),((::com::haxepunk::HXP_obj::height * ((  ((repeatY)) ? int((int)1) : int((int)0) ))) + this->_textHeight));
	HX_STACK_LINE(46)
	if ((this->blit)){
		HX_STACK_LINE(48)
		::com::haxepunk::HXP_obj::rect->x = ::com::haxepunk::HXP_obj::rect->y = (int)0;
		HX_STACK_LINE(49)
		::com::haxepunk::HXP_obj::rect->width = this->_width;
		HX_STACK_LINE(50)
		::com::haxepunk::HXP_obj::rect->height = this->_height;
		HX_STACK_LINE(51)
		this->fillTexture(::com::haxepunk::HXP_obj::rect,this->_source);
	}
}
;
	return null();
}

Backdrop_obj::~Backdrop_obj() { }

Dynamic Backdrop_obj::__CreateEmpty() { return  new Backdrop_obj; }
hx::ObjectPtr< Backdrop_obj > Backdrop_obj::__new(Dynamic source,hx::Null< bool >  __o_repeatX,hx::Null< bool >  __o_repeatY)
{  hx::ObjectPtr< Backdrop_obj > result = new Backdrop_obj();
	result->__construct(source,__o_repeatX,__o_repeatY);
	return result;}

Dynamic Backdrop_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Backdrop_obj > result = new Backdrop_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Backdrop_obj::renderAtlas( int layer,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_PUSH("Backdrop::renderAtlas","com/haxepunk/graphics/Backdrop.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(97)
		this->_point->x = ((point->x + this->x) - (camera->x * this->scrollX));
		HX_STACK_LINE(98)
		this->_point->y = ((point->y + this->y) - (camera->y * this->scrollY));
		HX_STACK_LINE(100)
		if ((this->_repeatX)){
			HX_STACK_LINE(102)
			hx::ModEq(this->_point->x,this->_textWidth);
			HX_STACK_LINE(103)
			if (((this->_point->x > (int)0))){
				HX_STACK_LINE(103)
				hx::SubEq(this->_point->x,this->_textWidth);
			}
		}
		HX_STACK_LINE(106)
		if ((this->_repeatY)){
			HX_STACK_LINE(108)
			hx::ModEq(this->_point->y,this->_textHeight);
			HX_STACK_LINE(109)
			if (((this->_point->y > (int)0))){
				HX_STACK_LINE(109)
				hx::SubEq(this->_point->y,this->_textHeight);
			}
		}
		HX_STACK_LINE(112)
		Float sx = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(sx,"sx");
		Float sy = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(sy,"sy");
		Float px = (this->_point->x * sx);		HX_STACK_VAR(px,"px");
		Float py = (this->_point->y * sy);		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(115)
		Float y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(116)
		while(((y < (this->_height * sy)))){
			HX_STACK_LINE(118)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(119)
			while(((x < (this->_width * sx)))){
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					::com::haxepunk::graphics::atlas::AtlasRegion _this = this->_region;		HX_STACK_VAR(_this,"_this");
					Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
					HX_STACK_LINE(121)
					if ((_this->rotated)){
						HX_STACK_LINE(121)
						angle = (angle + (int)90);
					}
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(121)
						if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != _this1))){
							HX_STACK_LINE(121)
							if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != null()))){
								HX_STACK_LINE(121)
								::com::haxepunk::graphics::atlas::AtlasData _this2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(121)
								if (((_this2->_dataIndex != (int)0))){
									HX_STACK_LINE(121)
									if (((_this2->_dataIndex < _this2->_data->length))){
										HX_STACK_LINE(121)
										_this2->_data->splice(_this2->_dataIndex,(_this2->_data->length - _this2->_dataIndex));
									}
									HX_STACK_LINE(121)
									_this2->_dataIndex = (int)0;
									HX_STACK_LINE(121)
									_this2->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),_this2->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this2->_renderFlags);
								}
							}
							HX_STACK_LINE(121)
							::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas = _this1;
						}
						else{
							HX_STACK_LINE(121)
							if (((_this1->_layerIndex != layer))){
								HX_STACK_LINE(121)
								if (((_this1->_dataIndex != (int)0))){
									HX_STACK_LINE(121)
									if (((_this1->_dataIndex < _this1->_data->length))){
										HX_STACK_LINE(121)
										_this1->_data->splice(_this1->_dataIndex,(_this1->_data->length - _this1->_dataIndex));
									}
									HX_STACK_LINE(121)
									_this1->_dataIndex = (int)0;
									HX_STACK_LINE(121)
									_this1->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),_this1->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this1->_renderFlags);
								}
								HX_STACK_LINE(121)
								_this1->_layerIndex = layer;
							}
						}
						HX_STACK_LINE(121)
						_this1->_data[(_this1->_dataIndex)++] = ::Math_obj::floor((px + x));
						HX_STACK_LINE(121)
						_this1->_data[(_this1->_dataIndex)++] = ::Math_obj::floor((py + y));
						HX_STACK_LINE(121)
						_this1->_data[(_this1->_dataIndex)++] = _this->tileIndex;
						HX_STACK_LINE(121)
						if (((angle == (int)0))){
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = sx;
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = (int)0;
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = (int)0;
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = sy;
						}
						else{
							HX_STACK_LINE(121)
							Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
							HX_STACK_LINE(121)
							Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = (cos * sx);
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = (-(sin) * sy);
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = (sin * sx);
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = (cos * sy);
						}
						HX_STACK_LINE(121)
						if ((_this1->_flagRGB)){
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = this->_red;
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = this->_green;
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = this->_blue;
						}
						HX_STACK_LINE(121)
						if ((_this1->_flagAlpha)){
							HX_STACK_LINE(121)
							_this1->_data[(_this1->_dataIndex)++] = this->_alpha;
						}
					}
				}
				HX_STACK_LINE(122)
				hx::AddEq(x,(this->_textWidth * sx));
			}
			HX_STACK_LINE(124)
			hx::AddEq(y,(this->_textHeight * sy));
		}
	}
return null();
}


Void Backdrop_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_PUSH("Backdrop::render","com/haxepunk/graphics/Backdrop.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(74)
		this->_point->x = ((point->x + this->x) - (camera->x * this->scrollX));
		HX_STACK_LINE(75)
		this->_point->y = ((point->y + this->y) - (camera->y * this->scrollY));
		HX_STACK_LINE(77)
		if ((this->_repeatX)){
			HX_STACK_LINE(79)
			hx::ModEq(this->_point->x,this->_textWidth);
			HX_STACK_LINE(80)
			if (((this->_point->x > (int)0))){
				HX_STACK_LINE(80)
				hx::SubEq(this->_point->x,this->_textWidth);
			}
		}
		HX_STACK_LINE(83)
		if ((this->_repeatY)){
			HX_STACK_LINE(85)
			hx::ModEq(this->_point->y,this->_textHeight);
			HX_STACK_LINE(86)
			if (((this->_point->y > (int)0))){
				HX_STACK_LINE(86)
				hx::SubEq(this->_point->y,this->_textHeight);
			}
		}
		HX_STACK_LINE(89)
		this->_x = this->x;
		HX_STACK_LINE(89)
		this->_y = this->y;
		HX_STACK_LINE(90)
		this->x = this->y = (int)0;
		HX_STACK_LINE(91)
		this->super::render(target,this->_point,::com::haxepunk::HXP_obj::zero);
		HX_STACK_LINE(92)
		this->x = this->_x;
		HX_STACK_LINE(92)
		this->y = this->_y;
	}
return null();
}


Void Backdrop_obj::setBitmapSource( ::flash::display::BitmapData bitmap){
{
		HX_STACK_PUSH("Backdrop::setBitmapSource","com/haxepunk/graphics/Backdrop.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bitmap,"bitmap");
		HX_STACK_LINE(65)
		this->blit = true;
		HX_STACK_LINE(66)
		this->_source = bitmap;
		HX_STACK_LINE(67)
		this->_textWidth = this->_source->get_width();
		HX_STACK_LINE(68)
		this->_textHeight = this->_source->get_height();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Backdrop_obj,setBitmapSource,(void))

Void Backdrop_obj::setAtlasRegion( ::com::haxepunk::graphics::atlas::AtlasRegion region){
{
		HX_STACK_PUSH("Backdrop::setAtlasRegion","com/haxepunk/graphics/Backdrop.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_ARG(region,"region");
		HX_STACK_LINE(57)
		this->blit = false;
		HX_STACK_LINE(58)
		this->_region = region;
		HX_STACK_LINE(59)
		this->_textWidth = ::Std_obj::_int(region->rect->width);
		HX_STACK_LINE(60)
		this->_textHeight = ::Std_obj::_int(region->rect->height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Backdrop_obj,setAtlasRegion,(void))


Backdrop_obj::Backdrop_obj()
{
}

void Backdrop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Backdrop);
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_repeatY,"_repeatY");
	HX_MARK_MEMBER_NAME(_repeatX,"_repeatX");
	HX_MARK_MEMBER_NAME(_textHeight,"_textHeight");
	HX_MARK_MEMBER_NAME(_textWidth,"_textWidth");
	HX_MARK_MEMBER_NAME(_region,"_region");
	HX_MARK_MEMBER_NAME(_source,"_source");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Backdrop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_repeatY,"_repeatY");
	HX_VISIT_MEMBER_NAME(_repeatX,"_repeatX");
	HX_VISIT_MEMBER_NAME(_textHeight,"_textHeight");
	HX_VISIT_MEMBER_NAME(_textWidth,"_textWidth");
	HX_VISIT_MEMBER_NAME(_region,"_region");
	HX_VISIT_MEMBER_NAME(_source,"_source");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Backdrop_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_region") ) { return _region; }
		if (HX_FIELD_EQ(inName,"_source") ) { return _source; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_repeatY") ) { return _repeatY; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { return _repeatX; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textWidth") ) { return _textWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textHeight") ) { return _textHeight; }
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setAtlasRegion") ) { return setAtlasRegion_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setBitmapSource") ) { return setBitmapSource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Backdrop_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_region") ) { _region=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasRegion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_source") ) { _source=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_repeatY") ) { _repeatY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { _repeatX=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textWidth") ) { _textWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textHeight") ) { _textHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Backdrop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_repeatY"));
	outFields->push(HX_CSTRING("_repeatX"));
	outFields->push(HX_CSTRING("_textHeight"));
	outFields->push(HX_CSTRING("_textWidth"));
	outFields->push(HX_CSTRING("_region"));
	outFields->push(HX_CSTRING("_source"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_repeatY"),
	HX_CSTRING("_repeatX"),
	HX_CSTRING("_textHeight"),
	HX_CSTRING("_textWidth"),
	HX_CSTRING("_region"),
	HX_CSTRING("_source"),
	HX_CSTRING("renderAtlas"),
	HX_CSTRING("render"),
	HX_CSTRING("setBitmapSource"),
	HX_CSTRING("setAtlasRegion"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Backdrop_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Backdrop_obj::__mClass,"__mClass");
};

Class Backdrop_obj::__mClass;

void Backdrop_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Backdrop"), hx::TCanCast< Backdrop_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Backdrop_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
