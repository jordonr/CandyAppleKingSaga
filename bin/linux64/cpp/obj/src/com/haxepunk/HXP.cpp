#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
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
#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_Alarm
#include <com/haxepunk/tweens/misc/Alarm.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_MultiVarTween
#include <com/haxepunk/tweens/misc/MultiVarTween.h>
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
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageDisplayState
#include <flash/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_media_SoundTransform
#include <flash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{

Void HXP_obj::__construct()
{
	return null();
}

HXP_obj::~HXP_obj() { }

Dynamic HXP_obj::__CreateEmpty() { return  new HXP_obj; }
hx::ObjectPtr< HXP_obj > HXP_obj::__new()
{  hx::ObjectPtr< HXP_obj > result = new HXP_obj();
	result->__construct();
	return result;}

Dynamic HXP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HXP_obj > result = new HXP_obj();
	result->__construct();
	return result;}

::String HXP_obj::VERSION;

Float HXP_obj::get_NUMBER_MAX_VALUE( ){
	HX_STACK_PUSH("HXP::get_NUMBER_MAX_VALUE","com/haxepunk/HXP.hx",51);
	HX_STACK_LINE(51)
	return ((int)179 * ::Math_obj::pow((int)10,(int)306));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_NUMBER_MAX_VALUE,return )

int HXP_obj::INT_MAX_VALUE;

int HXP_obj::blackColor;

int HXP_obj::width;

int HXP_obj::height;

int HXP_obj::windowWidth;

int HXP_obj::windowHeight;

bool HXP_obj::fixed;

Float HXP_obj::frameRate;

Float HXP_obj::assignedFrameRate;

Float HXP_obj::elapsed;

Float HXP_obj::rate;

::com::haxepunk::Screen HXP_obj::screen;

::flash::display::BitmapData HXP_obj::buffer;

::flash::geom::Rectangle HXP_obj::bounds;

::String HXP_obj::defaultFont;

::flash::geom::Point HXP_obj::camera;

::com::haxepunk::Tweener HXP_obj::tweener;

bool HXP_obj::focused;

Float HXP_obj::halfWidth;

Float HXP_obj::halfHeight;

::com::haxepunk::RenderMode HXP_obj::renderMode;

::com::haxepunk::RenderMode HXP_obj::set_renderMode( ::com::haxepunk::RenderMode value){
	HX_STACK_PUSH("HXP::set_renderMode","com/haxepunk/HXP.hx",163);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(164)
	::com::haxepunk::HXP_obj::renderMode = value;
	HX_STACK_LINE(167)
	if (((::com::haxepunk::HXP_obj::screen == null()))){
		HX_STACK_LINE(168)
		::com::haxepunk::HXP_obj::screen = ::com::haxepunk::Screen_obj::__new();
	}
	else{
		HX_STACK_LINE(170)
		::com::haxepunk::HXP_obj::screen->init();
	}
	HX_STACK_LINE(172)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_renderMode,return )

Array< int > HXP_obj::orientations;

Dynamic HXP_obj::choose;

::com::haxepunk::Scene HXP_obj::get_world( ){
	HX_STACK_PUSH("HXP::get_world","com/haxepunk/HXP.hx",190);
	HX_STACK_LINE(191)
	::com::haxepunk::HXP_obj::log(HX_CSTRING("HXP.world is deprecated, please use HXP.scene instead"));
	HX_STACK_LINE(192)
	return ::com::haxepunk::HXP_obj::_scene;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_world,return )

::com::haxepunk::Scene HXP_obj::set_world( ::com::haxepunk::Scene value){
	HX_STACK_PUSH("HXP::set_world","com/haxepunk/HXP.hx",195);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(196)
	::com::haxepunk::HXP_obj::log(HX_CSTRING("HXP.world is deprecated, please use HXP.scene instead"));
	HX_STACK_LINE(197)
	return ::com::haxepunk::HXP_obj::set_scene(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_world,return )

::com::haxepunk::Scene HXP_obj::get_scene( ){
	HX_STACK_PUSH("HXP::get_scene","com/haxepunk/HXP.hx",205);
	HX_STACK_LINE(205)
	return ::com::haxepunk::HXP_obj::_scene;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_scene,return )

::com::haxepunk::Scene HXP_obj::set_scene( ::com::haxepunk::Scene value){
	HX_STACK_PUSH("HXP::set_scene","com/haxepunk/HXP.hx",207);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(208)
	if (((::com::haxepunk::HXP_obj::_goto != null()))){
		HX_STACK_LINE(209)
		if (((::com::haxepunk::HXP_obj::_goto == value))){
			HX_STACK_LINE(210)
			return value;
		}
	}
	else{
		HX_STACK_LINE(213)
		if (((::com::haxepunk::HXP_obj::_scene == value))){
			HX_STACK_LINE(214)
			return value;
		}
	}
	HX_STACK_LINE(216)
	::com::haxepunk::HXP_obj::_goto = value;
	HX_STACK_LINE(217)
	return ::com::haxepunk::HXP_obj::_scene;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_scene,return )

Void HXP_obj::swapScene( ){
{
		HX_STACK_PUSH("HXP::swapScene","com/haxepunk/HXP.hx",221);
		HX_STACK_LINE(222)
		::com::haxepunk::HXP_obj::_scene = ::com::haxepunk::HXP_obj::_goto;
		HX_STACK_LINE(223)
		::com::haxepunk::HXP_obj::_goto = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,swapScene,(void))

Void HXP_obj::resize( int width,int height){
{
		HX_STACK_PUSH("HXP::resize","com/haxepunk/HXP.hx",232);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(234)
		width = ::Std_obj::_int((Float(width) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX)));
		HX_STACK_LINE(235)
		height = ::Std_obj::_int((Float(height) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY)));
		HX_STACK_LINE(236)
		::com::haxepunk::HXP_obj::width = width;
		HX_STACK_LINE(237)
		::com::haxepunk::HXP_obj::height = height;
		HX_STACK_LINE(238)
		::com::haxepunk::HXP_obj::halfWidth = (Float(width) / Float((int)2));
		HX_STACK_LINE(239)
		::com::haxepunk::HXP_obj::halfHeight = (Float(height) / Float((int)2));
		HX_STACK_LINE(240)
		::com::haxepunk::HXP_obj::bounds->width = width;
		HX_STACK_LINE(241)
		::com::haxepunk::HXP_obj::bounds->height = height;
		HX_STACK_LINE(242)
		::com::haxepunk::HXP_obj::screen->resize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,resize,(void))

Void HXP_obj::clear( Dynamic array){
{
		HX_STACK_PUSH("HXP::clear","com/haxepunk/HXP.hx",250);
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(250)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,clear,(void))

Void HXP_obj::setCamera( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_PUSH("HXP::setCamera","com/haxepunk/HXP.hx",264);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(265)
		::com::haxepunk::HXP_obj::camera->x = x;
		HX_STACK_LINE(266)
		::com::haxepunk::HXP_obj::camera->y = y;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,setCamera,(void))

Void HXP_obj::resetCamera( ){
{
		HX_STACK_PUSH("HXP::resetCamera","com/haxepunk/HXP.hx",273);
		HX_STACK_LINE(273)
		::com::haxepunk::HXP_obj::camera->x = ::com::haxepunk::HXP_obj::camera->y = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,resetCamera,(void))

bool HXP_obj::get_fullscreen( ){
	HX_STACK_PUSH("HXP::get_fullscreen","com/haxepunk/HXP.hx",281);
	HX_STACK_LINE(281)
	return (::com::haxepunk::HXP_obj::stage->get_displayState() == ::flash::display::StageDisplayState_obj::FULL_SCREEN);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_fullscreen,return )

bool HXP_obj::set_fullscreen( bool value){
	HX_STACK_PUSH("HXP::set_fullscreen","com/haxepunk/HXP.hx",283);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(284)
	if ((value)){
		HX_STACK_LINE(284)
		::com::haxepunk::HXP_obj::stage->set_displayState(::flash::display::StageDisplayState_obj::FULL_SCREEN);
	}
	else{
		HX_STACK_LINE(285)
		::com::haxepunk::HXP_obj::stage->set_displayState(::flash::display::StageDisplayState_obj::NORMAL);
	}
	HX_STACK_LINE(286)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_fullscreen,return )

Float HXP_obj::get_volume( ){
	HX_STACK_PUSH("HXP::get_volume","com/haxepunk/HXP.hx",293);
	HX_STACK_LINE(293)
	return ::com::haxepunk::HXP_obj::_volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_volume,return )

Float HXP_obj::set_volume( Float value){
	HX_STACK_PUSH("HXP::set_volume","com/haxepunk/HXP.hx",295);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(296)
	if (((value < (int)0))){
		HX_STACK_LINE(296)
		value = (int)0;
	}
	HX_STACK_LINE(297)
	if (((::com::haxepunk::HXP_obj::_volume == value))){
		HX_STACK_LINE(297)
		return value;
	}
	HX_STACK_LINE(298)
	::com::haxepunk::HXP_obj::_soundTransform->volume = ::com::haxepunk::HXP_obj::_volume = value;
	HX_STACK_LINE(302)
	return ::com::haxepunk::HXP_obj::_volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_volume,return )

Float HXP_obj::get_pan( ){
	HX_STACK_PUSH("HXP::get_pan","com/haxepunk/HXP.hx",309);
	HX_STACK_LINE(309)
	return ::com::haxepunk::HXP_obj::_pan;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_pan,return )

Float HXP_obj::set_pan( Float value){
	HX_STACK_PUSH("HXP::set_pan","com/haxepunk/HXP.hx",311);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(312)
	if (((value < (int)-1))){
		HX_STACK_LINE(312)
		value = (int)-1;
	}
	HX_STACK_LINE(313)
	if (((value > (int)1))){
		HX_STACK_LINE(313)
		value = (int)1;
	}
	HX_STACK_LINE(314)
	if (((::com::haxepunk::HXP_obj::_pan == value))){
		HX_STACK_LINE(314)
		return value;
	}
	HX_STACK_LINE(315)
	::com::haxepunk::HXP_obj::_soundTransform->pan = ::com::haxepunk::HXP_obj::_pan = value;
	HX_STACK_LINE(319)
	return ::com::haxepunk::HXP_obj::_pan;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_pan,return )

Dynamic HXP_obj::get_choose( ){
	HX_STACK_PUSH("HXP::get_choose","com/haxepunk/HXP.hx",323);
	HX_STACK_LINE(323)
	return ::Reflect_obj::makeVarArgs(::com::haxepunk::HXP_obj::_choose_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_choose,return )

Dynamic HXP_obj::_choose( Dynamic objs){
	HX_STACK_PUSH("HXP::_choose","com/haxepunk/HXP.hx",328);
	HX_STACK_ARG(objs,"objs");
	HX_STACK_LINE(329)
	if (((bool((bool((objs == null())) || bool((objs->__Field(HX_CSTRING("length"),true) == (int)0)))) || bool((bool((bool((objs->__Field(HX_CSTRING("length"),true) == (int)1)) && bool(::Reflect_obj::hasField(objs->__GetItem((int)0),HX_CSTRING("length"))))) && bool((objs->__GetItem((int)0)->__Field(HX_CSTRING("length"),true) == (int)0))))))){
		HX_STACK_LINE(330)
		hx::Throw (HX_CSTRING("Can't choose a random element on an empty array"));
	}
	HX_STACK_LINE(332)
	if (((bool((objs->__Field(HX_CSTRING("length"),true) == (int)1)) && bool(::Reflect_obj::hasField(objs->__GetItem((int)0),HX_CSTRING("length")))))){
		struct _Function_2_1{
			inline static int Block( Dynamic &objs){
				HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",333);
				{
					HX_STACK_LINE(333)
					::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
					HX_STACK_LINE(333)
					return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646)) * objs->__GetItem((int)0)->__Field(HX_CSTRING("length"),true)));
				}
				return null();
			}
		};
		HX_STACK_LINE(333)
		return objs->__GetItem((int)0)->__GetItem(_Function_2_1::Block(objs));
	}
	struct _Function_1_1{
		inline static int Block( Dynamic &objs){
			HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",335);
			{
				HX_STACK_LINE(335)
				::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
				HX_STACK_LINE(335)
				return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646)) * objs->__Field(HX_CSTRING("length"),true)));
			}
			return null();
		}
	};
	HX_STACK_LINE(335)
	return objs->__GetItem(_Function_1_1::Block(objs));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,_choose,return )

int HXP_obj::sign( Float value){
	HX_STACK_PUSH("HXP::sign","com/haxepunk/HXP.hx",344);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(344)
	return (  (((value < (int)0))) ? int((int)-1) : int((  (((value > (int)0))) ? int((int)1) : int((int)0) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,sign,return )

Float HXP_obj::approach( Float value,Float target,Float amount){
	HX_STACK_PUSH("HXP::approach","com/haxepunk/HXP.hx",356);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_LINE(356)
	if (((value < (target - amount)))){
		HX_STACK_LINE(357)
		return (value + amount);
	}
	else{
		HX_STACK_LINE(359)
		if (((value > (target + amount)))){
			HX_STACK_LINE(359)
			return (value - amount);
		}
		else{
			HX_STACK_LINE(361)
			return target;
		}
	}
	HX_STACK_LINE(356)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,approach,return )

Float HXP_obj::lerp( Float a,Float b,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_PUSH("HXP::lerp","com/haxepunk/HXP.hx",374);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(t,"t");
{
		HX_STACK_LINE(374)
		return (a + (((b - a)) * t));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,lerp,return )

int HXP_obj::colorLerp( int fromColor,int toColor,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_PUSH("HXP::colorLerp","com/haxepunk/HXP.hx",386);
	HX_STACK_ARG(fromColor,"fromColor");
	HX_STACK_ARG(toColor,"toColor");
	HX_STACK_ARG(t,"t");
{
		HX_STACK_LINE(386)
		if (((t <= (int)0))){
			HX_STACK_LINE(387)
			return fromColor;
		}
		else{
			HX_STACK_LINE(388)
			if (((t >= (int)1))){
				HX_STACK_LINE(388)
				return toColor;
			}
			else{
				HX_STACK_LINE(390)
				int a = (int((int(fromColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(a,"a");
				int r = (int((int(fromColor) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
				int g = (int((int(fromColor) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
				int b = (int(fromColor) & int((int)255));		HX_STACK_VAR(b,"b");
				int dA = (((int((int(toColor) >> int((int)24))) & int((int)255))) - a);		HX_STACK_VAR(dA,"dA");
				int dR = (((int((int(toColor) >> int((int)16))) & int((int)255))) - r);		HX_STACK_VAR(dR,"dR");
				int dG = (((int((int(toColor) >> int((int)8))) & int((int)255))) - g);		HX_STACK_VAR(dG,"dG");
				int dB = (((int(toColor) & int((int)255))) - b);		HX_STACK_VAR(dB,"dB");
				HX_STACK_LINE(398)
				hx::AddEq(a,::Std_obj::_int((dA * t)));
				HX_STACK_LINE(399)
				hx::AddEq(r,::Std_obj::_int((dR * t)));
				HX_STACK_LINE(400)
				hx::AddEq(g,::Std_obj::_int((dG * t)));
				HX_STACK_LINE(401)
				hx::AddEq(b,::Std_obj::_int((dB * t)));
				HX_STACK_LINE(402)
				return (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
			}
		}
		HX_STACK_LINE(386)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,colorLerp,return )

Void HXP_obj::stepTowards( Dynamic object,Float x,Float y,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(1);
	HX_STACK_PUSH("HXP::stepTowards","com/haxepunk/HXP.hx",414);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(distance,"distance");
{
		HX_STACK_LINE(415)
		::com::haxepunk::HXP_obj::point->x = (x - object->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(416)
		::com::haxepunk::HXP_obj::point->y = (y - object->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(417)
		if (((::com::haxepunk::HXP_obj::point->get_length() <= distance))){
			HX_STACK_LINE(419)
			object->__FieldRef(HX_CSTRING("x")) = x;
			HX_STACK_LINE(420)
			object->__FieldRef(HX_CSTRING("y")) = y;
			HX_STACK_LINE(421)
			return null();
		}
		HX_STACK_LINE(423)
		::com::haxepunk::HXP_obj::point->normalize(distance);
		HX_STACK_LINE(424)
		hx::AddEq(object->__FieldRef(HX_CSTRING("x")),::com::haxepunk::HXP_obj::point->x);
		HX_STACK_LINE(425)
		hx::AddEq(object->__FieldRef(HX_CSTRING("y")),::com::haxepunk::HXP_obj::point->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,stepTowards,(void))

Void HXP_obj::anchorTo( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(0);
	HX_STACK_PUSH("HXP::anchorTo","com/haxepunk/HXP.hx",435);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(anchor,"anchor");
	HX_STACK_ARG(distance,"distance");
{
		HX_STACK_LINE(436)
		::com::haxepunk::HXP_obj::point->x = (object->__Field(HX_CSTRING("x"),true) - anchor->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(437)
		::com::haxepunk::HXP_obj::point->y = (object->__Field(HX_CSTRING("y"),true) - anchor->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(438)
		if (((::com::haxepunk::HXP_obj::point->get_length() > distance))){
			HX_STACK_LINE(438)
			::com::haxepunk::HXP_obj::point->normalize(distance);
		}
		HX_STACK_LINE(439)
		object->__FieldRef(HX_CSTRING("x")) = (anchor->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::point->x);
		HX_STACK_LINE(440)
		object->__FieldRef(HX_CSTRING("y")) = (anchor->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::point->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,anchorTo,(void))

Float HXP_obj::angle( Float x1,Float y1,Float x2,Float y2){
	HX_STACK_PUSH("HXP::angle","com/haxepunk/HXP.hx",452);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_LINE(453)
	Float a = (::Math_obj::atan2((y2 - y1),(x2 - x1)) * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(454)
	return (  (((a < (int)0))) ? Float((a + (int)360)) : Float(a) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,angle,return )

Void HXP_obj::angleXY( Dynamic object,Float angle,hx::Null< Float >  __o_length,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float length = __o_length.Default(1);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_PUSH("HXP::angleXY","com/haxepunk/HXP.hx",466);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(length,"length");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(467)
		hx::MultEq(angle,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(468)
		object->__FieldRef(HX_CSTRING("x")) = ((::Math_obj::cos(angle) * length) + x);
		HX_STACK_LINE(469)
		object->__FieldRef(HX_CSTRING("y")) = ((::Math_obj::sin(angle) * length) + y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,angleXY,(void))

Float HXP_obj::angleDifference( Float angle1,Float angle2){
	HX_STACK_PUSH("HXP::angleDifference","com/haxepunk/HXP.hx",479);
	HX_STACK_ARG(angle1,"angle1");
	HX_STACK_ARG(angle2,"angle2");
	HX_STACK_LINE(480)
	Float diff = (angle2 - angle1);		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(481)
	while(((diff < (int)-180))){
		HX_STACK_LINE(481)
		hx::AddEq(diff,(int)360);
	}
	HX_STACK_LINE(482)
	while(((diff > (int)180))){
		HX_STACK_LINE(482)
		hx::SubEq(diff,(int)360);
	}
	HX_STACK_LINE(483)
	return diff;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,angleDifference,return )

Void HXP_obj::rotateAround( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_angle,hx::Null< bool >  __o_relative){
Float angle = __o_angle.Default(0);
bool relative = __o_relative.Default(true);
	HX_STACK_PUSH("HXP::rotateAround","com/haxepunk/HXP.hx",494);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(anchor,"anchor");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(relative,"relative");
{
		HX_STACK_LINE(495)
		if ((relative)){
			struct _Function_2_1{
				inline static Float Block( Dynamic &anchor,Dynamic &object){
					HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",495);
					{
						HX_STACK_LINE(495)
						Float x1 = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x1,"x1");
						Float y1 = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y1,"y1");
						Float x2 = object->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x2,"x2");
						Float y2 = object->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(495)
						Float a = (::Math_obj::atan2((y2 - y1),(x2 - x1)) * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(495)
						return (  (((a < (int)0))) ? Float((a + (int)360)) : Float(a) );
					}
					return null();
				}
			};
			HX_STACK_LINE(495)
			hx::AddEq(angle,_Function_2_1::Block(anchor,object));
		}
		HX_STACK_LINE(496)
		{
			struct _Function_2_1{
				inline static Float Block( Dynamic &anchor,Dynamic &object){
					HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",496);
					{
						HX_STACK_LINE(496)
						Float x1 = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x1,"x1");
						Float y1 = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y1,"y1");
						Float x2 = object->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x2,"x2");
						Float y2 = object->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(496)
						return ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(496)
			Float angle1 = angle;		HX_STACK_VAR(angle1,"angle1");
			Float length = _Function_2_1::Block(anchor,object);		HX_STACK_VAR(length,"length");
			Float x = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x,"x");
			Float y = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(496)
			hx::MultEq(angle1,(Float(::Math_obj::PI) / Float((int)-180)));
			HX_STACK_LINE(496)
			object->__FieldRef(HX_CSTRING("x")) = ((::Math_obj::cos(angle1) * length) + x);
			HX_STACK_LINE(496)
			object->__FieldRef(HX_CSTRING("y")) = ((::Math_obj::sin(angle1) * length) + y);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,rotateAround,(void))

Float HXP_obj::round( Float num,int precision){
	HX_STACK_PUSH("HXP::round","com/haxepunk/HXP.hx",506);
	HX_STACK_ARG(num,"num");
	HX_STACK_ARG(precision,"precision");
	HX_STACK_LINE(507)
	Float exp = ::Math_obj::pow((int)10,precision);		HX_STACK_VAR(exp,"exp");
	HX_STACK_LINE(508)
	return (Float(::Math_obj::round((num * exp))) / Float(exp));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,round,return )

Float HXP_obj::distance( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_PUSH("HXP::distance","com/haxepunk/HXP.hx",520);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
{
		HX_STACK_LINE(520)
		return ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,distance,return )

Float HXP_obj::distanceSquared( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_PUSH("HXP::distanceSquared","com/haxepunk/HXP.hx",533);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
{
		HX_STACK_LINE(533)
		return ((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,distanceSquared,return )

Float HXP_obj::distanceRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_PUSH("HXP::distanceRects","com/haxepunk/HXP.hx",550);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(w1,"w1");
	HX_STACK_ARG(h1,"h1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_ARG(w2,"w2");
	HX_STACK_ARG(h2,"h2");
	HX_STACK_LINE(551)
	if (((bool((x1 < (x2 + w2))) && bool((x2 < (x1 + w1)))))){
		HX_STACK_LINE(553)
		if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
			HX_STACK_LINE(553)
			return (int)0;
		}
		HX_STACK_LINE(554)
		if (((y1 > y2))){
			HX_STACK_LINE(554)
			return (y1 - ((y2 + h2)));
		}
		HX_STACK_LINE(555)
		return (y2 - ((y1 + h1)));
	}
	HX_STACK_LINE(557)
	if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
		HX_STACK_LINE(559)
		if (((x1 > x2))){
			HX_STACK_LINE(559)
			return (x1 - ((x2 + w2)));
		}
		HX_STACK_LINE(560)
		return (x2 - ((x1 + w1)));
	}
	HX_STACK_LINE(562)
	if (((x1 > x2))){
		HX_STACK_LINE(564)
		if (((y1 > y2))){
			struct _Function_3_1{
				inline static Float Block( Float &x2,Float &y1,Float &w2,Float &h2,Float &x1,Float &y2){
					HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",564);
					{
						HX_STACK_LINE(564)
						Float x21 = (x2 + w2);		HX_STACK_VAR(x21,"x21");
						Float y21 = (y2 + h2);		HX_STACK_VAR(y21,"y21");
						HX_STACK_LINE(564)
						return ::Math_obj::sqrt(((((x21 - x1)) * ((x21 - x1))) + (((y21 - y1)) * ((y21 - y1)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(564)
			return _Function_3_1::Block(x2,y1,w2,h2,x1,y2);
		}
		struct _Function_2_1{
			inline static Float Block( Float &y1,Float &x2,Float &w2,Float &x1,Float &h1,Float &y2){
				HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",565);
				{
					HX_STACK_LINE(565)
					Float y11 = (y1 + h1);		HX_STACK_VAR(y11,"y11");
					Float x21 = (x2 + w2);		HX_STACK_VAR(x21,"x21");
					HX_STACK_LINE(565)
					return ::Math_obj::sqrt(((((x21 - x1)) * ((x21 - x1))) + (((y2 - y11)) * ((y2 - y11)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(565)
		return _Function_2_1::Block(y1,x2,w2,x1,h1,y2);
	}
	HX_STACK_LINE(567)
	if (((y1 > y2))){
		struct _Function_2_1{
			inline static Float Block( Float &x2,Float &y1,Float &x1,Float &h2,Float &w1,Float &y2){
				HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",567);
				{
					HX_STACK_LINE(567)
					Float x11 = (x1 + w1);		HX_STACK_VAR(x11,"x11");
					Float y21 = (y2 + h2);		HX_STACK_VAR(y21,"y21");
					HX_STACK_LINE(567)
					return ::Math_obj::sqrt(((((x2 - x11)) * ((x2 - x11))) + (((y21 - y1)) * ((y21 - y1)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(567)
		return _Function_2_1::Block(x2,y1,x1,h2,w1,y2);
	}
	struct _Function_1_1{
		inline static Float Block( Float &y1,Float &x2,Float &x1,Float &w1,Float &h1,Float &y2){
			HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",568);
			{
				HX_STACK_LINE(568)
				Float x11 = (x1 + w1);		HX_STACK_VAR(x11,"x11");
				Float y11 = (y1 + h1);		HX_STACK_VAR(y11,"y11");
				HX_STACK_LINE(568)
				return ::Math_obj::sqrt(((((x2 - x11)) * ((x2 - x11))) + (((y2 - y11)) * ((y2 - y11)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(568)
	return _Function_1_1::Block(y1,x2,x1,w1,h1,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(HXP_obj,distanceRects,return )

Float HXP_obj::distanceRectPoint( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_PUSH("HXP::distanceRectPoint","com/haxepunk/HXP.hx",582);
	HX_STACK_ARG(px,"px");
	HX_STACK_ARG(py,"py");
	HX_STACK_ARG(rx,"rx");
	HX_STACK_ARG(ry,"ry");
	HX_STACK_ARG(rw,"rw");
	HX_STACK_ARG(rh,"rh");
	HX_STACK_LINE(583)
	if (((bool((px >= rx)) && bool((px <= (rx + rw)))))){
		HX_STACK_LINE(585)
		if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
			HX_STACK_LINE(585)
			return (int)0;
		}
		HX_STACK_LINE(586)
		if (((py > ry))){
			HX_STACK_LINE(586)
			return (py - ((ry + rh)));
		}
		HX_STACK_LINE(587)
		return (ry - py);
	}
	HX_STACK_LINE(589)
	if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
		HX_STACK_LINE(591)
		if (((px > rx))){
			HX_STACK_LINE(591)
			return (px - ((rx + rw)));
		}
		HX_STACK_LINE(592)
		return (rx - px);
	}
	HX_STACK_LINE(594)
	if (((px > rx))){
		HX_STACK_LINE(596)
		if (((py > ry))){
			struct _Function_3_1{
				inline static Float Block( Float &rw,Float &rh,Float &py,Float &ry,Float &px,Float &rx){
					HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",596);
					{
						HX_STACK_LINE(596)
						Float x2 = (rx + rw);		HX_STACK_VAR(x2,"x2");
						Float y2 = (ry + rh);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(596)
						return ::Math_obj::sqrt(((((x2 - px)) * ((x2 - px))) + (((y2 - py)) * ((y2 - py)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(596)
			return _Function_3_1::Block(rw,rh,py,ry,px,rx);
		}
		struct _Function_2_1{
			inline static Float Block( Float &rw,Float &py,Float &px,Float &ry,Float &rx){
				HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",597);
				{
					HX_STACK_LINE(597)
					Float x2 = (rx + rw);		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(597)
					return ::Math_obj::sqrt(((((x2 - px)) * ((x2 - px))) + (((ry - py)) * ((ry - py)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(597)
		return _Function_2_1::Block(rw,py,px,ry,rx);
	}
	HX_STACK_LINE(599)
	if (((py > ry))){
		struct _Function_2_1{
			inline static Float Block( Float &rh,Float &py,Float &ry,Float &px,Float &rx){
				HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",599);
				{
					HX_STACK_LINE(599)
					Float y2 = (ry + rh);		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(599)
					return ::Math_obj::sqrt(((((rx - px)) * ((rx - px))) + (((y2 - py)) * ((y2 - py)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(599)
		return _Function_2_1::Block(rh,py,ry,px,rx);
	}
	HX_STACK_LINE(600)
	return ::Math_obj::sqrt(((((rx - px)) * ((rx - px))) + (((ry - py)) * ((ry - py)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(HXP_obj,distanceRectPoint,return )

Float HXP_obj::clamp( Float value,Float min,Float max){
	HX_STACK_PUSH("HXP::clamp","com/haxepunk/HXP.hx",611);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(611)
	if (((max > min))){
		HX_STACK_LINE(613)
		if (((value < min))){
			HX_STACK_LINE(614)
			return min;
		}
		else{
			HX_STACK_LINE(615)
			if (((value > max))){
				HX_STACK_LINE(615)
				return max;
			}
			else{
				HX_STACK_LINE(616)
				return value;
			}
		}
	}
	else{
		HX_STACK_LINE(619)
		if (((value < max))){
			HX_STACK_LINE(621)
			return max;
		}
		else{
			HX_STACK_LINE(622)
			if (((value > min))){
				HX_STACK_LINE(622)
				return min;
			}
			else{
				HX_STACK_LINE(623)
				return value;
			}
		}
	}
	HX_STACK_LINE(611)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,clamp,return )

Void HXP_obj::clampInRect( Dynamic object,Float x,Float y,Float width,Float height,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_PUSH("HXP::clampInRect","com/haxepunk/HXP.hx",637);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(padding,"padding");
{
		HX_STACK_LINE(638)
		object->__FieldRef(HX_CSTRING("x")) = ::com::haxepunk::HXP_obj::clamp(object->__Field(HX_CSTRING("x"),true),(x + padding),((x + width) - padding));
		HX_STACK_LINE(639)
		object->__FieldRef(HX_CSTRING("y")) = ::com::haxepunk::HXP_obj::clamp(object->__Field(HX_CSTRING("y"),true),(y + padding),((y + height) - padding));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(HXP_obj,clampInRect,(void))

Float HXP_obj::scale( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_PUSH("HXP::scale","com/haxepunk/HXP.hx",652);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(min2,"min2");
	HX_STACK_ARG(max2,"max2");
	HX_STACK_LINE(652)
	return (min2 + ((Float(((value - min))) / Float(((max - min)))) * ((max2 - min2))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,scale,return )

Float HXP_obj::scaleClamp( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_PUSH("HXP::scaleClamp","com/haxepunk/HXP.hx",666);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(min2,"min2");
	HX_STACK_ARG(max2,"max2");
	HX_STACK_LINE(667)
	value = (min2 + ((Float(((value - min))) / Float(((max - min)))) * ((max2 - min2))));
	HX_STACK_LINE(668)
	if (((max2 > min2))){
		HX_STACK_LINE(670)
		value = (  (((value < max2))) ? Float(value) : Float(max2) );
		HX_STACK_LINE(671)
		return (  (((value > min2))) ? Float(value) : Float(min2) );
	}
	HX_STACK_LINE(673)
	value = (  (((value < min2))) ? Float(value) : Float(min2) );
	HX_STACK_LINE(674)
	return (  (((value > max2))) ? Float(value) : Float(max2) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,scaleClamp,return )

int HXP_obj::randomSeed;

int HXP_obj::set_randomSeed( int value){
	HX_STACK_PUSH("HXP::set_randomSeed","com/haxepunk/HXP.hx",682);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(683)
	::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp(value,1.0,(int)2147483646));
	HX_STACK_LINE(684)
	::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
	HX_STACK_LINE(685)
	return ::com::haxepunk::HXP_obj::_seed;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_randomSeed,return )

Void HXP_obj::randomizeSeed( ){
{
		HX_STACK_PUSH("HXP::randomizeSeed","com/haxepunk/HXP.hx",692);
		HX_STACK_LINE(693)
		::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp(::Std_obj::_int(((int)2147483646 * ::Math_obj::random())),1.0,(int)2147483646));
		HX_STACK_LINE(693)
		::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
		HX_STACK_LINE(693)
		::com::haxepunk::HXP_obj::_seed;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,randomizeSeed,(void))

Float HXP_obj::random;

Float HXP_obj::get_random( ){
	HX_STACK_PUSH("HXP::get_random","com/haxepunk/HXP.hx",701);
	HX_STACK_LINE(702)
	::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
	HX_STACK_LINE(703)
	return (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_random,return )

int HXP_obj::rand( int amount){
	HX_STACK_PUSH("HXP::rand","com/haxepunk/HXP.hx",712);
	HX_STACK_ARG(amount,"amount");
	HX_STACK_LINE(713)
	::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
	HX_STACK_LINE(714)
	return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646)) * amount));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,rand,return )

int HXP_obj::indexOf( Dynamic arr,Dynamic v){
	HX_STACK_PUSH("HXP::indexOf","com/haxepunk/HXP.hx",727);
	HX_STACK_ARG(arr,"arr");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(727)
	return ::Lambda_obj::indexOf(arr,v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,indexOf,return )

Dynamic HXP_obj::next( Dynamic current,Dynamic options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_PUSH("HXP::next","com/haxepunk/HXP.hx",743);
	HX_STACK_ARG(current,"current");
	HX_STACK_ARG(options,"options");
	HX_STACK_ARG(loop,"loop");
{
		HX_STACK_LINE(743)
		if ((loop)){
			HX_STACK_LINE(745)
			return options->__GetItem(hx::Mod(((::Lambda_obj::indexOf(options,current) + (int)1)),options->__Field(HX_CSTRING("length"),true)));
		}
		else{
			HX_STACK_LINE(747)
			return options->__GetItem(::Std_obj::_int(::Math_obj::max((::Lambda_obj::indexOf(options,current) + (int)1),(options->__Field(HX_CSTRING("length"),true) - (int)1))));
		}
		HX_STACK_LINE(743)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,next,return )

Dynamic HXP_obj::prev( Dynamic current,Dynamic options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_PUSH("HXP::prev","com/haxepunk/HXP.hx",758);
	HX_STACK_ARG(current,"current");
	HX_STACK_ARG(options,"options");
	HX_STACK_ARG(loop,"loop");
{
		HX_STACK_LINE(758)
		if ((loop)){
			HX_STACK_LINE(760)
			return options->__GetItem(hx::Mod((((::Lambda_obj::indexOf(options,current) - (int)1) + options->__Field(HX_CSTRING("length"),true))),options->__Field(HX_CSTRING("length"),true)));
		}
		else{
			HX_STACK_LINE(762)
			return options->__GetItem(::Std_obj::_int(::Math_obj::max((::Lambda_obj::indexOf(options,current) - (int)1),(int)0)));
		}
		HX_STACK_LINE(758)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,prev,return )

Dynamic HXP_obj::swap( Dynamic current,Dynamic a,Dynamic b){
	HX_STACK_PUSH("HXP::swap","com/haxepunk/HXP.hx",773);
	HX_STACK_ARG(current,"current");
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(773)
	return (  (((current == a))) ? Dynamic(b) : Dynamic(a) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,swap,return )

int HXP_obj::getColorRGB( hx::Null< int >  __o_R,hx::Null< int >  __o_G,hx::Null< int >  __o_B){
int R = __o_R.Default(0);
int G = __o_G.Default(0);
int B = __o_B.Default(0);
	HX_STACK_PUSH("HXP::getColorRGB","com/haxepunk/HXP.hx",785);
	HX_STACK_ARG(R,"R");
	HX_STACK_ARG(G,"G");
	HX_STACK_ARG(B,"B");
{
		HX_STACK_LINE(785)
		return (int((int((int(R) << int((int)16))) | int((int(G) << int((int)8))))) | int(B));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,getColorRGB,return )

int HXP_obj::getColorHSV( Float h,Float s,Float v){
	HX_STACK_PUSH("HXP::getColorHSV","com/haxepunk/HXP.hx",797);
	HX_STACK_ARG(h,"h");
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(798)
	h = ::Std_obj::_int((h * (int)360));
	HX_STACK_LINE(799)
	int hi = hx::Mod(::Math_obj::floor((Float(h) / Float((int)60))),(int)6);		HX_STACK_VAR(hi,"hi");
	Float f = ((Float(h) / Float((int)60)) - ::Math_obj::floor((Float(h) / Float((int)60))));		HX_STACK_VAR(f,"f");
	Float p = (v * (((int)1 - s)));		HX_STACK_VAR(p,"p");
	Float q = (v * (((int)1 - (f * s))));		HX_STACK_VAR(q,"q");
	Float t = (v * (((int)1 - ((((int)1 - f)) * s))));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(804)
	switch( (int)(hi)){
		case (int)0: {
			HX_STACK_LINE(806)
			return (int((int((int(::Std_obj::_int((v * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((t * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(807)
			return (int((int((int(::Std_obj::_int((q * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((v * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(808)
			return (int((int((int(::Std_obj::_int((p * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((v * (int)255))) << int((int)8))))) | int(::Std_obj::_int((t * (int)255))));
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(809)
			return (int((int((int(::Std_obj::_int((p * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((q * (int)255))) << int((int)8))))) | int(::Std_obj::_int((v * (int)255))));
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(810)
			return (int((int((int(::Std_obj::_int((t * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((v * (int)255))));
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(811)
			return (int((int((int(::Std_obj::_int((v * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((q * (int)255))));
		}
		;break;
		default: {
			HX_STACK_LINE(812)
			return (int)0;
		}
	}
	HX_STACK_LINE(814)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,getColorHSV,return )

Float HXP_obj::getColorHue( int color){
	HX_STACK_PUSH("HXP::getColorHue","com/haxepunk/HXP.hx",823);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(824)
	int h = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(825)
	int s = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(826)
	int v = (int(color) & int((int)255));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(828)
	int max = ::Std_obj::_int(::Math_obj::max(h,::Math_obj::max(s,v)));		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(829)
	int min = ::Std_obj::_int(::Math_obj::min(h,::Math_obj::min(s,v)));		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(831)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(833)
	if (((max == min))){
		HX_STACK_LINE(833)
		hue = (int)0;
	}
	else{
		HX_STACK_LINE(835)
		if (((max == h))){
			HX_STACK_LINE(835)
			hue = hx::Mod((((Float(((int)60 * ((s - v)))) / Float(((max - min)))) + (int)360)),(int)360);
		}
		else{
			HX_STACK_LINE(837)
			if (((max == s))){
				HX_STACK_LINE(837)
				hue = ((Float(((int)60 * ((v - h)))) / Float(((max - min)))) + (int)120);
			}
			else{
				HX_STACK_LINE(839)
				if (((max == v))){
					HX_STACK_LINE(839)
					hue = ((Float(((int)60 * ((h - s)))) / Float(((max - min)))) + (int)240);
				}
			}
		}
	}
	HX_STACK_LINE(843)
	return (Float(hue) / Float((int)360));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorHue,return )

Float HXP_obj::getColorSaturation( int color){
	HX_STACK_PUSH("HXP::getColorSaturation","com/haxepunk/HXP.hx",852);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(853)
	int h = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(854)
	int s = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(855)
	int v = (int(color) & int((int)255));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(857)
	int max = ::Std_obj::_int(::Math_obj::max(h,::Math_obj::max(s,v)));		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(859)
	if (((max == (int)0))){
		HX_STACK_LINE(859)
		return (int)0;
	}
	else{
		HX_STACK_LINE(862)
		int min = ::Std_obj::_int(::Math_obj::min(h,::Math_obj::min(s,v)));		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(864)
		return (Float(((max - min))) / Float(max));
	}
	HX_STACK_LINE(859)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorSaturation,return )

Float HXP_obj::getColorValue( int color){
	HX_STACK_PUSH("HXP::getColorValue","com/haxepunk/HXP.hx",874);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(875)
	int h = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(876)
	int s = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(877)
	int v = (int(color) & int((int)255));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(879)
	return (Float(::Std_obj::_int(::Math_obj::max(h,::Math_obj::max(s,v)))) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorValue,return )

int HXP_obj::getRed( int color){
	HX_STACK_PUSH("HXP::getRed","com/haxepunk/HXP.hx",888);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(888)
	return (int((int(color) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getRed,return )

int HXP_obj::getGreen( int color){
	HX_STACK_PUSH("HXP::getGreen","com/haxepunk/HXP.hx",898);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(898)
	return (int((int(color) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getGreen,return )

int HXP_obj::getBlue( int color){
	HX_STACK_PUSH("HXP::getBlue","com/haxepunk/HXP.hx",908);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(908)
	return (int(color) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getBlue,return )

::flash::display::BitmapData HXP_obj::getBitmap( Dynamic source){
	HX_STACK_PUSH("HXP::getBitmap","com/haxepunk/HXP.hx",918);
	HX_STACK_ARG(source,"source");
	HX_STACK_LINE(919)
	::String name = ::Std_obj::string(source);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(920)
	if ((::com::haxepunk::HXP_obj::_bitmap->exists(name))){
		HX_STACK_LINE(921)
		return ::com::haxepunk::HXP_obj::_bitmap->get(name);
	}
	HX_STACK_LINE(924)
	::flash::display::BitmapData data = ::openfl::Assets_obj::getBitmapData(source,false);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(929)
	if (((data != null()))){
		HX_STACK_LINE(930)
		::com::haxepunk::HXP_obj::_bitmap->set(name,data);
	}
	HX_STACK_LINE(932)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getBitmap,return )

bool HXP_obj::removeBitmap( Dynamic source){
	HX_STACK_PUSH("HXP::removeBitmap","com/haxepunk/HXP.hx",936);
	HX_STACK_ARG(source,"source");
	HX_STACK_LINE(937)
	::String name = ::Std_obj::string(source);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(938)
	if ((::com::haxepunk::HXP_obj::_bitmap->exists(name))){
		HX_STACK_LINE(940)
		::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::_bitmap->get(name);		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(941)
		bitmap->dispose();
		HX_STACK_LINE(942)
		bitmap = null();
		HX_STACK_LINE(943)
		return ::com::haxepunk::HXP_obj::_bitmap->remove(name);
	}
	HX_STACK_LINE(945)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,removeBitmap,return )

::flash::display::BitmapData HXP_obj::createBitmap( int width,int height,Dynamic __o_transparent,Dynamic __o_color){
Dynamic transparent = __o_transparent.Default(false);
Dynamic color = __o_color.Default(0);
	HX_STACK_PUSH("HXP::createBitmap","com/haxepunk/HXP.hx",959);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(transparent,"transparent");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(959)
		return ::flash::display::BitmapData_obj::__new(width,height,transparent,color,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,createBitmap,return )

Float HXP_obj::timeFlag( ){
	HX_STACK_PUSH("HXP::timeFlag","com/haxepunk/HXP.hx",981);
	HX_STACK_LINE(982)
	Float t = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(t,"t");
	Float e = (t - ::com::haxepunk::HXP_obj::_time);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(984)
	::com::haxepunk::HXP_obj::_time = t;
	HX_STACK_LINE(985)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,timeFlag,return )

::com::haxepunk::debug::Console HXP_obj::get_console( ){
	HX_STACK_PUSH("HXP::get_console","com/haxepunk/HXP.hx",993);
	HX_STACK_LINE(994)
	if (((::com::haxepunk::HXP_obj::_console == null()))){
		HX_STACK_LINE(994)
		::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
	}
	HX_STACK_LINE(995)
	return ::com::haxepunk::HXP_obj::_console;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_console,return )

bool HXP_obj::consoleEnabled( ){
	HX_STACK_PUSH("HXP::consoleEnabled","com/haxepunk/HXP.hx",1002);
	HX_STACK_LINE(1002)
	return (::com::haxepunk::HXP_obj::_console != null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,consoleEnabled,return )

Dynamic HXP_obj::log;

Dynamic HXP_obj::watch;

::com::haxepunk::tweens::misc::MultiVarTween HXP_obj::tween( Dynamic object,Dynamic values,Float duration,Dynamic options){
	HX_STACK_PUSH("HXP::tween","com/haxepunk/HXP.hx",1044);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(values,"values");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(options,"options");
	HX_STACK_LINE(1044)
	Dynamic options1 = Dynamic( Array_obj<Dynamic>::__new().Add(options));		HX_STACK_VAR(options1,"options1");
	HX_STACK_LINE(1044)
	Array< Float > duration1 = Array_obj< Float >::__new().Add(duration);		HX_STACK_VAR(duration1,"duration1");
	HX_STACK_LINE(1044)
	Dynamic values1 = Dynamic( Array_obj<Dynamic>::__new().Add(values));		HX_STACK_VAR(values1,"values1");
	HX_STACK_LINE(1044)
	Dynamic object1 = Dynamic( Array_obj<Dynamic>::__new().Add(object));		HX_STACK_VAR(object1,"object1");
	HX_STACK_LINE(1046)
	if (((bool((options1->__GetItem((int)0) != null())) && bool(::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("delay")))))){
		HX_STACK_LINE(1048)
		Float delay = options1->__GetItem((int)0)->__Field(HX_CSTRING("delay"),true);		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(1049)
		::Reflect_obj::deleteField(options1->__GetItem((int)0),HX_CSTRING("delay"));

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_2_1,Dynamic,values1,Dynamic,object1,Array< Float >,duration1,Dynamic,options1)
		Void run(Dynamic o){
			HX_STACK_PUSH("*::_Function_2_1","com/haxepunk/HXP.hx",1050);
			HX_STACK_ARG(o,"o");
			{
				HX_STACK_LINE(1050)
				::com::haxepunk::HXP_obj::tween(object1->__GetItem((int)0),values1->__GetItem((int)0),duration1->__get((int)0),options1->__GetItem((int)0));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1050)
		::com::haxepunk::HXP_obj::alarm(delay, Dynamic(new _Function_2_1(values1,object1,duration1,options1)),null(),null());
		HX_STACK_LINE(1051)
		return null();
	}
	HX_STACK_LINE(1054)
	::com::haxepunk::TweenType type = ::com::haxepunk::TweenType_obj::OneShot;		HX_STACK_VAR(type,"type");
	Dynamic complete = null();		HX_STACK_VAR(complete,"complete");
	Dynamic ease = null();		HX_STACK_VAR(ease,"ease");
	::com::haxepunk::Tweener tweener = ::com::haxepunk::HXP_obj::tweener;		HX_STACK_VAR(tweener,"tweener");
	HX_STACK_LINE(1058)
	if ((::Std_obj::is(object1->__GetItem((int)0),hx::ClassOf< ::com::haxepunk::Tweener >()))){
		HX_STACK_LINE(1058)
		tweener = hx::TCast< com::haxepunk::Tweener >::cast(object1->__GetItem((int)0));
	}
	HX_STACK_LINE(1059)
	if (((options1->__GetItem((int)0) != null()))){
		HX_STACK_LINE(1061)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("type")))){
			HX_STACK_LINE(1061)
			type = options1->__GetItem((int)0)->__Field(HX_CSTRING("type"),true);
		}
		HX_STACK_LINE(1062)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("complete")))){
			HX_STACK_LINE(1062)
			complete = options1->__GetItem((int)0)->__Field(HX_CSTRING("complete"),true);
		}
		HX_STACK_LINE(1063)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("ease")))){
			HX_STACK_LINE(1063)
			ease = options1->__GetItem((int)0)->__Field(HX_CSTRING("ease"),true);
		}
		HX_STACK_LINE(1064)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("tweener")))){
			HX_STACK_LINE(1064)
			tweener = options1->__GetItem((int)0)->__Field(HX_CSTRING("tweener"),true);
		}
	}
	HX_STACK_LINE(1066)
	::com::haxepunk::tweens::misc::MultiVarTween tween = ::com::haxepunk::tweens::misc::MultiVarTween_obj::__new(complete,type);		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(1067)
	tween->tween(object1->__GetItem((int)0),values1->__GetItem((int)0),duration1->__get((int)0),ease);
	HX_STACK_LINE(1068)
	tweener->addTween(tween,null());
	HX_STACK_LINE(1069)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,tween,return )

::com::haxepunk::tweens::misc::Alarm HXP_obj::alarm( Float delay,Dynamic complete,::com::haxepunk::TweenType type,::com::haxepunk::Tweener tweener){
	HX_STACK_PUSH("HXP::alarm","com/haxepunk/HXP.hx",1083);
	HX_STACK_ARG(delay,"delay");
	HX_STACK_ARG(complete,"complete");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(tweener,"tweener");
	HX_STACK_LINE(1084)
	if (((type == null()))){
		HX_STACK_LINE(1084)
		type = ::com::haxepunk::TweenType_obj::OneShot;
	}
	HX_STACK_LINE(1085)
	if (((tweener == null()))){
		HX_STACK_LINE(1085)
		tweener = ::com::haxepunk::HXP_obj::tweener;
	}
	HX_STACK_LINE(1087)
	::com::haxepunk::tweens::misc::Alarm alarm = ::com::haxepunk::tweens::misc::Alarm_obj::__new(delay,complete,type);		HX_STACK_VAR(alarm,"alarm");
	HX_STACK_LINE(1088)
	tweener->addTween(alarm,true);
	HX_STACK_LINE(1089)
	return alarm;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,alarm,return )

Array< int > HXP_obj::frames( int from,int to,hx::Null< int >  __o_skip){
int skip = __o_skip.Default(0);
	HX_STACK_PUSH("HXP::frames","com/haxepunk/HXP.hx",1101);
	HX_STACK_ARG(from,"from");
	HX_STACK_ARG(to,"to");
	HX_STACK_ARG(skip,"skip");
{
		HX_STACK_LINE(1102)
		Array< int > a = Array_obj< int >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1103)
		(skip)++;
		HX_STACK_LINE(1104)
		if (((from < to))){
			HX_STACK_LINE(1105)
			while(((from <= to))){
				HX_STACK_LINE(1108)
				a->push(from);
				HX_STACK_LINE(1109)
				hx::AddEq(from,skip);
			}
		}
		else{
			HX_STACK_LINE(1113)
			while(((from >= to))){
				HX_STACK_LINE(1116)
				a->push(from);
				HX_STACK_LINE(1117)
				hx::SubEq(from,skip);
			}
		}
		HX_STACK_LINE(1120)
		return a;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,frames,return )

Void HXP_obj::shuffle( Dynamic a){
{
		HX_STACK_PUSH("HXP::shuffle","com/haxepunk/HXP.hx",1128);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(1128)
		if ((::Std_obj::is(a,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(1131)
			int i = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
			int j;		HX_STACK_VAR(j,"j");
			Dynamic t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1132)
			while(((--(i) > (int)0))){
				HX_STACK_LINE(1134)
				t = a->__GetItem(i);
				struct _Function_3_1{
					inline static int Block( int &i){
						HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",1135);
						{
							HX_STACK_LINE(1135)
							::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
							HX_STACK_LINE(1135)
							return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646)) * ((i + (int)1))));
						}
						return null();
					}
				};
				HX_STACK_LINE(1135)
				hx::IndexRef((a).mPtr,i) = a->__GetItem(j = _Function_3_1::Block(i));
				HX_STACK_LINE(1136)
				hx::IndexRef((a).mPtr,j) = t;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,shuffle,(void))

Void HXP_obj::resizeStage( int width,int height){
{
		HX_STACK_PUSH("HXP::resizeStage","com/haxepunk/HXP.hx",1148);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(1150)
		::com::haxepunk::HXP_obj::stage->resize(width,height);
		HX_STACK_LINE(1151)
		::com::haxepunk::HXP_obj::resize(width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,resizeStage,(void))

Float HXP_obj::time;

Float HXP_obj::set_time( Float value){
	HX_STACK_PUSH("HXP::set_time","com/haxepunk/HXP.hx",1158);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1159)
	::com::haxepunk::HXP_obj::_time = value;
	HX_STACK_LINE(1160)
	return ::com::haxepunk::HXP_obj::_time;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_time,return )

bool HXP_obj::gotoIsNull( ){
	HX_STACK_PUSH("HXP::gotoIsNull","com/haxepunk/HXP.hx",1163);
	HX_STACK_LINE(1163)
	return (::com::haxepunk::HXP_obj::_goto == null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,gotoIsNull,return )

::com::haxepunk::Scene HXP_obj::_scene;

::com::haxepunk::Scene HXP_obj::_goto;

::com::haxepunk::debug::Console HXP_obj::_console;

Float HXP_obj::_time;

Float HXP_obj::_updateTime;

Float HXP_obj::_renderTime;

Float HXP_obj::_gameTime;

Float HXP_obj::_systemTime;

::haxe::ds::StringMap HXP_obj::_bitmap;

int HXP_obj::_seed;

Float HXP_obj::_volume;

Float HXP_obj::_pan;

::flash::media::SoundTransform HXP_obj::_soundTransform;

Float HXP_obj::get_DEG( ){
	HX_STACK_PUSH("HXP::get_DEG","com/haxepunk/HXP.hx",1192);
	HX_STACK_LINE(1192)
	return (Float((int)-180) / Float(::Math_obj::PI));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_DEG,return )

Float HXP_obj::get_RAD( ){
	HX_STACK_PUSH("HXP::get_RAD","com/haxepunk/HXP.hx",1194);
	HX_STACK_LINE(1194)
	return (Float(::Math_obj::PI) / Float((int)-180));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_RAD,return )

::flash::display::Stage HXP_obj::stage;

::com::haxepunk::Engine HXP_obj::engine;

::flash::geom::Point HXP_obj::point;

::flash::geom::Point HXP_obj::point2;

::flash::geom::Point HXP_obj::zero;

::flash::geom::Rectangle HXP_obj::rect;

::flash::geom::Matrix HXP_obj::matrix;

::flash::display::Sprite HXP_obj::sprite;

::com::haxepunk::Entity HXP_obj::entity;


HXP_obj::HXP_obj()
{
}

void HXP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HXP);
	HX_MARK_END_CLASS();
}

void HXP_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic HXP_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return get_pan(); }
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"DEG") ) { return get_DEG(); }
		if (HX_FIELD_EQ(inName,"RAD") ) { return get_RAD(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"rand") ) { return rand_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"_pan") ) { return _pan; }
		if (HX_FIELD_EQ(inName,"zero") ) { return zero; }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"fixed") ) { return fixed; }
		if (HX_FIELD_EQ(inName,"world") ) { return get_world(); }
		if (HX_FIELD_EQ(inName,"scene") ) { return get_scene(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"alarm") ) { return alarm_dyn(); }
		if (HX_FIELD_EQ(inName,"_goto") ) { return _goto; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_seed") ) { return _seed; }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"choose") ) { return inCallProp ? get_choose() : choose; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return get_volume(); }
		if (HX_FIELD_EQ(inName,"random") ) { return inCallProp ? get_random() : random; }
		if (HX_FIELD_EQ(inName,"getRed") ) { return getRed_dyn(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames_dyn(); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		if (HX_FIELD_EQ(inName,"point2") ) { return point2; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"tweener") ) { return tweener; }
		if (HX_FIELD_EQ(inName,"focused") ) { return focused; }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"_choose") ) { return _choose_dyn(); }
		if (HX_FIELD_EQ(inName,"angleXY") ) { return angleXY_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBlue") ) { return getBlue_dyn(); }
		if (HX_FIELD_EQ(inName,"console") ) { return get_console(); }
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		if (HX_FIELD_EQ(inName,"get_DEG") ) { return get_DEG_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RAD") ) { return get_RAD_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"approach") ) { return approach_dyn(); }
		if (HX_FIELD_EQ(inName,"anchorTo") ) { return anchorTo_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"getGreen") ) { return getGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"timeFlag") ) { return timeFlag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return set_time_dyn(); }
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { return halfWidth; }
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"set_world") ) { return set_world_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"swapScene") ) { return swapScene_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"colorLerp") ) { return colorLerp_dyn(); }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { return _gameTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"halfHeight") ) { return halfHeight; }
		if (HX_FIELD_EQ(inName,"renderMode") ) { return renderMode; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return get_fullscreen(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"get_choose") ) { return get_choose_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleClamp") ) { return scaleClamp_dyn(); }
		if (HX_FIELD_EQ(inName,"randomSeed") ) { return randomSeed; }
		if (HX_FIELD_EQ(inName,"get_random") ) { return get_random_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoIsNull") ) { return gotoIsNull_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { return windowWidth; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { return defaultFont; }
		if (HX_FIELD_EQ(inName,"resetCamera") ) { return resetCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"stepTowards") ) { return stepTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"clampInRect") ) { return clampInRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorRGB") ) { return getColorRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorHSV") ) { return getColorHSV_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorHue") ) { return getColorHue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_console") ) { return get_console_dyn(); }
		if (HX_FIELD_EQ(inName,"resizeStage") ) { return resizeStage_dyn(); }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { return _updateTime; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { return _renderTime; }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { return _systemTime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { return windowHeight; }
		if (HX_FIELD_EQ(inName,"orientations") ) { return orientations; }
		if (HX_FIELD_EQ(inName,"rotateAround") ) { return rotateAround_dyn(); }
		if (HX_FIELD_EQ(inName,"removeBitmap") ) { return removeBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"createBitmap") ) { return createBitmap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceRects") ) { return distanceRects_dyn(); }
		if (HX_FIELD_EQ(inName,"randomizeSeed") ) { return randomizeSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorValue") ) { return getColorValue_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_renderMode") ) { return set_renderMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_randomSeed") ) { return set_randomSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"consoleEnabled") ) { return consoleEnabled_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angleDifference") ) { return angleDifference_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { return distanceSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { return _soundTransform; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NUMBER_MAX_VALUE") ) { return get_NUMBER_MAX_VALUE(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"assignedFrameRate") ) { return assignedFrameRate; }
		if (HX_FIELD_EQ(inName,"distanceRectPoint") ) { return distanceRectPoint_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorSaturation") ) { return getColorSaturation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_NUMBER_MAX_VALUE") ) { return get_NUMBER_MAX_VALUE_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HXP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return set_pan(inValue); }
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp) return set_time(inValue);time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pan") ) { _pan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zero") ) { zero=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { return set_world(inValue); }
		if (HX_FIELD_EQ(inName,"scene") ) { return set_scene(inValue); }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_goto") ) { _goto=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_seed") ) { _seed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::com::haxepunk::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"choose") ) { choose=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { return set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"random") ) { random=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::haxepunk::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweener") ) { tweener=inValue.Cast< ::com::haxepunk::Tweener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focused") ) { focused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::com::haxepunk::debug::Console >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { _gameTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"halfHeight") ) { halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderMode") ) { if (inCallProp) return set_renderMode(inValue);renderMode=inValue.Cast< ::com::haxepunk::RenderMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return set_fullscreen(inValue); }
		if (HX_FIELD_EQ(inName,"randomSeed") ) { if (inCallProp) return set_randomSeed(inValue);randomSeed=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { windowWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { defaultFont=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { _updateTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { _renderTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { _systemTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { windowHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orientations") ) { orientations=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { _soundTransform=inValue.Cast< ::flash::media::SoundTransform >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"assignedFrameRate") ) { assignedFrameRate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HXP_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VERSION"),
	HX_CSTRING("get_NUMBER_MAX_VALUE"),
	HX_CSTRING("INT_MAX_VALUE"),
	HX_CSTRING("blackColor"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("windowWidth"),
	HX_CSTRING("windowHeight"),
	HX_CSTRING("fixed"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("assignedFrameRate"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("rate"),
	HX_CSTRING("screen"),
	HX_CSTRING("buffer"),
	HX_CSTRING("bounds"),
	HX_CSTRING("defaultFont"),
	HX_CSTRING("camera"),
	HX_CSTRING("tweener"),
	HX_CSTRING("focused"),
	HX_CSTRING("halfWidth"),
	HX_CSTRING("halfHeight"),
	HX_CSTRING("renderMode"),
	HX_CSTRING("set_renderMode"),
	HX_CSTRING("orientations"),
	HX_CSTRING("choose"),
	HX_CSTRING("get_world"),
	HX_CSTRING("set_world"),
	HX_CSTRING("get_scene"),
	HX_CSTRING("set_scene"),
	HX_CSTRING("swapScene"),
	HX_CSTRING("resize"),
	HX_CSTRING("clear"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("resetCamera"),
	HX_CSTRING("get_fullscreen"),
	HX_CSTRING("set_fullscreen"),
	HX_CSTRING("get_volume"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("get_pan"),
	HX_CSTRING("set_pan"),
	HX_CSTRING("get_choose"),
	HX_CSTRING("_choose"),
	HX_CSTRING("sign"),
	HX_CSTRING("approach"),
	HX_CSTRING("lerp"),
	HX_CSTRING("colorLerp"),
	HX_CSTRING("stepTowards"),
	HX_CSTRING("anchorTo"),
	HX_CSTRING("angle"),
	HX_CSTRING("angleXY"),
	HX_CSTRING("angleDifference"),
	HX_CSTRING("rotateAround"),
	HX_CSTRING("round"),
	HX_CSTRING("distance"),
	HX_CSTRING("distanceSquared"),
	HX_CSTRING("distanceRects"),
	HX_CSTRING("distanceRectPoint"),
	HX_CSTRING("clamp"),
	HX_CSTRING("clampInRect"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleClamp"),
	HX_CSTRING("randomSeed"),
	HX_CSTRING("set_randomSeed"),
	HX_CSTRING("randomizeSeed"),
	HX_CSTRING("random"),
	HX_CSTRING("get_random"),
	HX_CSTRING("rand"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("next"),
	HX_CSTRING("prev"),
	HX_CSTRING("swap"),
	HX_CSTRING("getColorRGB"),
	HX_CSTRING("getColorHSV"),
	HX_CSTRING("getColorHue"),
	HX_CSTRING("getColorSaturation"),
	HX_CSTRING("getColorValue"),
	HX_CSTRING("getRed"),
	HX_CSTRING("getGreen"),
	HX_CSTRING("getBlue"),
	HX_CSTRING("getBitmap"),
	HX_CSTRING("removeBitmap"),
	HX_CSTRING("createBitmap"),
	HX_CSTRING("timeFlag"),
	HX_CSTRING("get_console"),
	HX_CSTRING("consoleEnabled"),
	HX_CSTRING("log"),
	HX_CSTRING("watch"),
	HX_CSTRING("tween"),
	HX_CSTRING("alarm"),
	HX_CSTRING("frames"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("resizeStage"),
	HX_CSTRING("time"),
	HX_CSTRING("set_time"),
	HX_CSTRING("gotoIsNull"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_goto"),
	HX_CSTRING("_console"),
	HX_CSTRING("_time"),
	HX_CSTRING("_updateTime"),
	HX_CSTRING("_renderTime"),
	HX_CSTRING("_gameTime"),
	HX_CSTRING("_systemTime"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_seed"),
	HX_CSTRING("_volume"),
	HX_CSTRING("_pan"),
	HX_CSTRING("_soundTransform"),
	HX_CSTRING("get_DEG"),
	HX_CSTRING("get_RAD"),
	HX_CSTRING("stage"),
	HX_CSTRING("engine"),
	HX_CSTRING("point"),
	HX_CSTRING("point2"),
	HX_CSTRING("zero"),
	HX_CSTRING("rect"),
	HX_CSTRING("matrix"),
	HX_CSTRING("sprite"),
	HX_CSTRING("entity"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HXP_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HXP_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(HXP_obj::INT_MAX_VALUE,"INT_MAX_VALUE");
	HX_MARK_MEMBER_NAME(HXP_obj::blackColor,"blackColor");
	HX_MARK_MEMBER_NAME(HXP_obj::width,"width");
	HX_MARK_MEMBER_NAME(HXP_obj::height,"height");
	HX_MARK_MEMBER_NAME(HXP_obj::windowWidth,"windowWidth");
	HX_MARK_MEMBER_NAME(HXP_obj::windowHeight,"windowHeight");
	HX_MARK_MEMBER_NAME(HXP_obj::fixed,"fixed");
	HX_MARK_MEMBER_NAME(HXP_obj::frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(HXP_obj::assignedFrameRate,"assignedFrameRate");
	HX_MARK_MEMBER_NAME(HXP_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(HXP_obj::rate,"rate");
	HX_MARK_MEMBER_NAME(HXP_obj::screen,"screen");
	HX_MARK_MEMBER_NAME(HXP_obj::buffer,"buffer");
	HX_MARK_MEMBER_NAME(HXP_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(HXP_obj::defaultFont,"defaultFont");
	HX_MARK_MEMBER_NAME(HXP_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(HXP_obj::tweener,"tweener");
	HX_MARK_MEMBER_NAME(HXP_obj::focused,"focused");
	HX_MARK_MEMBER_NAME(HXP_obj::halfWidth,"halfWidth");
	HX_MARK_MEMBER_NAME(HXP_obj::halfHeight,"halfHeight");
	HX_MARK_MEMBER_NAME(HXP_obj::renderMode,"renderMode");
	HX_MARK_MEMBER_NAME(HXP_obj::orientations,"orientations");
	HX_MARK_MEMBER_NAME(HXP_obj::choose,"choose");
	HX_MARK_MEMBER_NAME(HXP_obj::randomSeed,"randomSeed");
	HX_MARK_MEMBER_NAME(HXP_obj::random,"random");
	HX_MARK_MEMBER_NAME(HXP_obj::log,"log");
	HX_MARK_MEMBER_NAME(HXP_obj::watch,"watch");
	HX_MARK_MEMBER_NAME(HXP_obj::time,"time");
	HX_MARK_MEMBER_NAME(HXP_obj::_scene,"_scene");
	HX_MARK_MEMBER_NAME(HXP_obj::_goto,"_goto");
	HX_MARK_MEMBER_NAME(HXP_obj::_console,"_console");
	HX_MARK_MEMBER_NAME(HXP_obj::_time,"_time");
	HX_MARK_MEMBER_NAME(HXP_obj::_updateTime,"_updateTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_renderTime,"_renderTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_systemTime,"_systemTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(HXP_obj::_seed,"_seed");
	HX_MARK_MEMBER_NAME(HXP_obj::_volume,"_volume");
	HX_MARK_MEMBER_NAME(HXP_obj::_pan,"_pan");
	HX_MARK_MEMBER_NAME(HXP_obj::_soundTransform,"_soundTransform");
	HX_MARK_MEMBER_NAME(HXP_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(HXP_obj::engine,"engine");
	HX_MARK_MEMBER_NAME(HXP_obj::point,"point");
	HX_MARK_MEMBER_NAME(HXP_obj::point2,"point2");
	HX_MARK_MEMBER_NAME(HXP_obj::zero,"zero");
	HX_MARK_MEMBER_NAME(HXP_obj::rect,"rect");
	HX_MARK_MEMBER_NAME(HXP_obj::matrix,"matrix");
	HX_MARK_MEMBER_NAME(HXP_obj::sprite,"sprite");
	HX_MARK_MEMBER_NAME(HXP_obj::entity,"entity");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HXP_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HXP_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(HXP_obj::INT_MAX_VALUE,"INT_MAX_VALUE");
	HX_VISIT_MEMBER_NAME(HXP_obj::blackColor,"blackColor");
	HX_VISIT_MEMBER_NAME(HXP_obj::width,"width");
	HX_VISIT_MEMBER_NAME(HXP_obj::height,"height");
	HX_VISIT_MEMBER_NAME(HXP_obj::windowWidth,"windowWidth");
	HX_VISIT_MEMBER_NAME(HXP_obj::windowHeight,"windowHeight");
	HX_VISIT_MEMBER_NAME(HXP_obj::fixed,"fixed");
	HX_VISIT_MEMBER_NAME(HXP_obj::frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(HXP_obj::assignedFrameRate,"assignedFrameRate");
	HX_VISIT_MEMBER_NAME(HXP_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(HXP_obj::rate,"rate");
	HX_VISIT_MEMBER_NAME(HXP_obj::screen,"screen");
	HX_VISIT_MEMBER_NAME(HXP_obj::buffer,"buffer");
	HX_VISIT_MEMBER_NAME(HXP_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(HXP_obj::defaultFont,"defaultFont");
	HX_VISIT_MEMBER_NAME(HXP_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(HXP_obj::tweener,"tweener");
	HX_VISIT_MEMBER_NAME(HXP_obj::focused,"focused");
	HX_VISIT_MEMBER_NAME(HXP_obj::halfWidth,"halfWidth");
	HX_VISIT_MEMBER_NAME(HXP_obj::halfHeight,"halfHeight");
	HX_VISIT_MEMBER_NAME(HXP_obj::renderMode,"renderMode");
	HX_VISIT_MEMBER_NAME(HXP_obj::orientations,"orientations");
	HX_VISIT_MEMBER_NAME(HXP_obj::choose,"choose");
	HX_VISIT_MEMBER_NAME(HXP_obj::randomSeed,"randomSeed");
	HX_VISIT_MEMBER_NAME(HXP_obj::random,"random");
	HX_VISIT_MEMBER_NAME(HXP_obj::log,"log");
	HX_VISIT_MEMBER_NAME(HXP_obj::watch,"watch");
	HX_VISIT_MEMBER_NAME(HXP_obj::time,"time");
	HX_VISIT_MEMBER_NAME(HXP_obj::_scene,"_scene");
	HX_VISIT_MEMBER_NAME(HXP_obj::_goto,"_goto");
	HX_VISIT_MEMBER_NAME(HXP_obj::_console,"_console");
	HX_VISIT_MEMBER_NAME(HXP_obj::_time,"_time");
	HX_VISIT_MEMBER_NAME(HXP_obj::_updateTime,"_updateTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_renderTime,"_renderTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_systemTime,"_systemTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(HXP_obj::_seed,"_seed");
	HX_VISIT_MEMBER_NAME(HXP_obj::_volume,"_volume");
	HX_VISIT_MEMBER_NAME(HXP_obj::_pan,"_pan");
	HX_VISIT_MEMBER_NAME(HXP_obj::_soundTransform,"_soundTransform");
	HX_VISIT_MEMBER_NAME(HXP_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(HXP_obj::engine,"engine");
	HX_VISIT_MEMBER_NAME(HXP_obj::point,"point");
	HX_VISIT_MEMBER_NAME(HXP_obj::point2,"point2");
	HX_VISIT_MEMBER_NAME(HXP_obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(HXP_obj::rect,"rect");
	HX_VISIT_MEMBER_NAME(HXP_obj::matrix,"matrix");
	HX_VISIT_MEMBER_NAME(HXP_obj::sprite,"sprite");
	HX_VISIT_MEMBER_NAME(HXP_obj::entity,"entity");
};

Class HXP_obj::__mClass;

void HXP_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.HXP"), hx::TCanCast< HXP_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HXP_obj::__boot()
{
	VERSION= HX_CSTRING("2.5.0");
	INT_MAX_VALUE= (int)2147483646;
	blackColor= (int)0;
	frameRate= (int)0;
	rate= (int)1;
	defaultFont= HX_CSTRING("font/04B_03__.ttf");
	camera= ::flash::geom::Point_obj::__new(null(),null());
	tweener= ::com::haxepunk::Tweener_obj::__new();
	focused= false;
	orientations= Array_obj< int >::__new();

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_1)
Void run(Dynamic data){
	HX_STACK_PUSH("*::_Function_0_1","com/haxepunk/HXP.hx",1011);
	HX_STACK_ARG(data,"data");
	{
		HX_STACK_LINE(1011)
		if (((::com::haxepunk::HXP_obj::_console != null()))){
			HX_STACK_LINE(1013)
			::com::haxepunk::HXP_obj::_console->log(data);
		}
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	log= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_1()));

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_2)
Void run(Dynamic properties){
	HX_STACK_PUSH("*::_Function_0_2","com/haxepunk/HXP.hx",1023);
	HX_STACK_ARG(properties,"properties");
	{
		HX_STACK_LINE(1023)
		if (((::com::haxepunk::HXP_obj::_console != null()))){
			HX_STACK_LINE(1025)
			::com::haxepunk::HXP_obj::_console->watch(properties);
		}
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	watch= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_2()));
	_scene= ::com::haxepunk::Scene_obj::__new();
	_bitmap= ::haxe::ds::StringMap_obj::__new();
	_seed= (int)0;
	_volume= (int)1;
	_pan= (int)0;
	_soundTransform= ::flash::media::SoundTransform_obj::__new(null(),null());
	point= ::flash::geom::Point_obj::__new(null(),null());
	point2= ::flash::geom::Point_obj::__new(null(),null());
	zero= ::flash::geom::Point_obj::__new(null(),null());
	rect= ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	matrix= ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	sprite= ::flash::display::Sprite_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
