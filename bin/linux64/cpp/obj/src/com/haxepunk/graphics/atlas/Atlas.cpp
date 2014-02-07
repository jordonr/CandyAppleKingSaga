#include <hxcpp.h>

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
namespace atlas{

Void Atlas_obj::__construct(Dynamic source)
{
HX_STACK_PUSH("Atlas::new","com/haxepunk/graphics/atlas/Atlas.hx",27);
{
	HX_STACK_LINE(27)
	this->_data = ::com::haxepunk::graphics::atlas::AtlasData_obj::create(source);
}
;
	return null();
}

Atlas_obj::~Atlas_obj() { }

Dynamic Atlas_obj::__CreateEmpty() { return  new Atlas_obj; }
hx::ObjectPtr< Atlas_obj > Atlas_obj::__new(Dynamic source)
{  hx::ObjectPtr< Atlas_obj > result = new Atlas_obj();
	result->__construct(source);
	return result;}

Dynamic Atlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Atlas_obj > result = new Atlas_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Atlas_obj::prepareTile( int tile,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_PUSH("Atlas::prepareTile","com/haxepunk/graphics/atlas/Atlas.hx",67);
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
		HX_STACK_LINE(68)
		::com::haxepunk::graphics::atlas::AtlasData _this = this->_data;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(68)
		if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != _this))){
			HX_STACK_LINE(68)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != null()))){
				HX_STACK_LINE(68)
				::com::haxepunk::graphics::atlas::AtlasData _this1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(68)
				if (((_this1->_dataIndex != (int)0))){
					HX_STACK_LINE(68)
					if (((_this1->_dataIndex < _this1->_data->length))){
						HX_STACK_LINE(68)
						_this1->_data->splice(_this1->_dataIndex,(_this1->_data->length - _this1->_dataIndex));
					}
					HX_STACK_LINE(68)
					_this1->_dataIndex = (int)0;
					HX_STACK_LINE(68)
					_this1->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),_this1->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this1->_renderFlags);
				}
			}
			HX_STACK_LINE(68)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas = _this;
		}
		else{
			HX_STACK_LINE(68)
			if (((_this->_layerIndex != layer))){
				HX_STACK_LINE(68)
				if (((_this->_dataIndex != (int)0))){
					HX_STACK_LINE(68)
					if (((_this->_dataIndex < _this->_data->length))){
						HX_STACK_LINE(68)
						_this->_data->splice(_this->_dataIndex,(_this->_data->length - _this->_dataIndex));
					}
					HX_STACK_LINE(68)
					_this->_dataIndex = (int)0;
					HX_STACK_LINE(68)
					_this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),_this->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this->_renderFlags);
				}
				HX_STACK_LINE(68)
				_this->_layerIndex = layer;
			}
		}
		HX_STACK_LINE(68)
		_this->_data[(_this->_dataIndex)++] = x;
		HX_STACK_LINE(68)
		_this->_data[(_this->_dataIndex)++] = y;
		HX_STACK_LINE(68)
		_this->_data[(_this->_dataIndex)++] = tile;
		HX_STACK_LINE(68)
		if (((angle == (int)0))){
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = scaleX;
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = (int)0;
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = (int)0;
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = scaleY;
		}
		else{
			HX_STACK_LINE(68)
			Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(68)
			Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = (cos * scaleX);
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = (-(sin) * scaleY);
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = (sin * scaleX);
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = (cos * scaleY);
		}
		HX_STACK_LINE(68)
		if ((_this->_flagRGB)){
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = red;
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = green;
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = blue;
		}
		HX_STACK_LINE(68)
		if ((_this->_flagAlpha)){
			HX_STACK_LINE(68)
			_this->_data[(_this->_dataIndex)++] = alpha;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(Atlas_obj,prepareTile,(void))

Void Atlas_obj::destroy( ){
{
		HX_STACK_PUSH("Atlas::destroy","com/haxepunk/graphics/atlas/Atlas.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		this->_data->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,destroy,(void))

int Atlas_obj::get_height( ){
	HX_STACK_PUSH("Atlas::get_height","com/haxepunk/graphics/atlas/Atlas.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return this->_data->height;
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,get_height,return )

int Atlas_obj::get_width( ){
	HX_STACK_PUSH("Atlas::get_width","com/haxepunk/graphics/atlas/Atlas.hx",18);
	HX_STACK_THIS(this);
	HX_STACK_LINE(18)
	return this->_data->width;
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,get_width,return )

bool Atlas_obj::smooth;

::com::haxepunk::graphics::atlas::AtlasRegion Atlas_obj::loadImageAsRegion( Dynamic source){
	HX_STACK_PUSH("Atlas::loadImageAsRegion","com/haxepunk/graphics/atlas/Atlas.hx",37);
	HX_STACK_ARG(source,"source");
	HX_STACK_LINE(38)
	::com::haxepunk::graphics::atlas::AtlasData data = ::com::haxepunk::graphics::atlas::AtlasData_obj::create(source);		HX_STACK_VAR(data,"data");
	struct _Function_1_1{
		inline static ::com::haxepunk::graphics::atlas::AtlasRegion Block( ::com::haxepunk::graphics::atlas::AtlasData &data){
			HX_STACK_PUSH("*::closure","com/haxepunk/graphics/atlas/Atlas.hx",39);
			{
				HX_STACK_LINE(39)
				::flash::geom::Rectangle rect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,data->width,data->height);		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(39)
				::flash::geom::Rectangle r = rect->clone();		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(39)
				::flash::geom::Point p = null();		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(39)
				int tileIndex = data->_tilesheet->addTileRect(r,p);		HX_STACK_VAR(tileIndex,"tileIndex");
				HX_STACK_LINE(39)
				return ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(data,tileIndex,rect);
			}
			return null();
		}
	};
	HX_STACK_LINE(39)
	return _Function_1_1::Block(data);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,loadImageAsRegion,return )


Atlas_obj::Atlas_obj()
{
}

void Atlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Atlas);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_END_CLASS();
}

void Atlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
}

Dynamic Atlas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"prepareTile") ) { return prepareTile_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadImageAsRegion") ) { return loadImageAsRegion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Atlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Atlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("smooth"),
	HX_CSTRING("loadImageAsRegion"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_data"),
	HX_CSTRING("prepareTile"),
	HX_CSTRING("destroy"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Atlas_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Atlas_obj::smooth,"smooth");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Atlas_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Atlas_obj::smooth,"smooth");
};

Class Atlas_obj::__mClass;

void Atlas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.Atlas"), hx::TCanCast< Atlas_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Atlas_obj::__boot()
{
	smooth= false;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
