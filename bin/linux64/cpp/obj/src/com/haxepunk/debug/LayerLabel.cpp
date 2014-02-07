#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
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
#ifndef INCLUDED_com_haxepunk_debug_LayerLabel
#include <com/haxepunk/debug/LayerLabel.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void LayerLabel_obj::__construct(int layer,::flash::text::TextFormat textFormat)
{
HX_STACK_PUSH("LayerLabel::new","com/haxepunk/debug/LayerList.hx",22);
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(25)
	this->active = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_visible.png"),null()),null(),null());
	HX_STACK_LINE(26)
	this->inactive = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_hidden.png"),null()),null(),null());
	HX_STACK_LINE(28)
	this->label = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(29)
	this->label->set_defaultTextFormat(textFormat);
	HX_STACK_LINE(30)
	this->label->set_selectable(false);
	HX_STACK_LINE(31)
	this->label->set_width((int)150);
	HX_STACK_LINE(32)
	this->label->set_height((int)14);
	HX_STACK_LINE(34)
	this->label->set_x((int)24);
	HX_STACK_LINE(35)
	this->label->set_y((int)2);
	HX_STACK_LINE(40)
	this->set_x((int)6);
	HX_STACK_LINE(41)
	this->layer = layer;
	HX_STACK_LINE(42)
	this->set_count((int)0);
	HX_STACK_LINE(43)
	this->display = true;
	HX_STACK_LINE(45)
	this->addChild(this->active);
	HX_STACK_LINE(46)
	this->addChild(this->label);
	HX_STACK_LINE(48)
	this->addEventListener(HX_CSTRING("click"),this->onClickLayer_dyn(),true,null(),null());
}
;
	return null();
}

LayerLabel_obj::~LayerLabel_obj() { }

Dynamic LayerLabel_obj::__CreateEmpty() { return  new LayerLabel_obj; }
hx::ObjectPtr< LayerLabel_obj > LayerLabel_obj::__new(int layer,::flash::text::TextFormat textFormat)
{  hx::ObjectPtr< LayerLabel_obj > result = new LayerLabel_obj();
	result->__construct(layer,textFormat);
	return result;}

Dynamic LayerLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LayerLabel_obj > result = new LayerLabel_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void LayerLabel_obj::onClickLayer( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("LayerLabel::onClickLayer","com/haxepunk/debug/LayerList.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(60)
		this->display = !(this->display);
		HX_STACK_LINE(61)
		if ((this->display)){
			HX_STACK_LINE(63)
			this->removeChild(this->inactive);
			HX_STACK_LINE(64)
			this->addChild(this->active);
		}
		else{
			HX_STACK_LINE(68)
			this->removeChild(this->active);
			HX_STACK_LINE(69)
			this->addChild(this->inactive);
		}
		HX_STACK_LINE(72)
		::com::haxepunk::HXP_obj::_scene->_layerDisplay->set(this->layer,this->display);
		HX_STACK_LINE(73)
		::com::haxepunk::HXP_obj::engine->render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LayerLabel_obj,onClickLayer,(void))

int LayerLabel_obj::set_count( int value){
	HX_STACK_PUSH("LayerLabel::set_count","com/haxepunk/debug/LayerList.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(54)
	this->label->set_text(((((HX_CSTRING("Layer ") + this->layer) + HX_CSTRING(" [")) + value) + HX_CSTRING("]")));
	HX_STACK_LINE(55)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(LayerLabel_obj,set_count,return )


LayerLabel_obj::LayerLabel_obj()
{
}

void LayerLabel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LayerLabel);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(inactive,"inactive");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(layer,"layer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LayerLabel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(inactive,"inactive");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LayerLabel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return display; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inactive") ) { return inactive; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_count") ) { return set_count_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onClickLayer") ) { return onClickLayer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LayerLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { return set_count(inValue); }
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inactive") ) { inactive=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LayerLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("inactive"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("display"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("layer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("label"),
	HX_CSTRING("inactive"),
	HX_CSTRING("active"),
	HX_CSTRING("display"),
	HX_CSTRING("onClickLayer"),
	HX_CSTRING("set_count"),
	HX_CSTRING("layer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayerLabel_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayerLabel_obj::__mClass,"__mClass");
};

Class LayerLabel_obj::__mClass;

void LayerLabel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.LayerLabel"), hx::TCanCast< LayerLabel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LayerLabel_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
