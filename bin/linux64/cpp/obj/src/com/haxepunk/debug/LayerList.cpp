#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_LayerLabel
#include <com/haxepunk/debug/LayerLabel.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_LayerList
#include <com/haxepunk/debug/LayerList.h>
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
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
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

Void LayerList_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_PUSH("LayerList::new","com/haxepunk/debug/LayerList.hx",85);
int width = __o_width.Default(250);
int height = __o_height.Default(400);
{
	HX_STACK_LINE(86)
	super::__construct();
	HX_STACK_LINE(88)
	::flash::display::Sprite mask = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(mask,"mask");
	HX_STACK_LINE(89)
	mask->get_graphics()->beginFill((int)0,null());
	HX_STACK_LINE(90)
	mask->get_graphics()->drawRect((int)0,(int)0,width,height);
	HX_STACK_LINE(91)
	mask->get_graphics()->endFill();
	HX_STACK_LINE(92)
	this->addChild(mask);
	HX_STACK_LINE(93)
	this->set_mask(mask);
	HX_STACK_LINE(95)
	this->get_graphics()->beginFill((int)0,.15);
	HX_STACK_LINE(96)
	this->get_graphics()->drawRect((int)0,(int)0,width,height);
	HX_STACK_LINE(97)
	this->get_graphics()->endFill();
	HX_STACK_LINE(99)
	::flash::text::Font font = ::openfl::Assets_obj::getFont(HX_CSTRING("font/04B_03__.ttf"),null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(100)
	if (((font == null()))){
		HX_STACK_LINE(101)
		font = ::openfl::Assets_obj::getFont(::com::haxepunk::HXP_obj::defaultFont,null());
	}
	HX_STACK_LINE(104)
	this->_textFormat = ::flash::text::TextFormat_obj::__new(font->fontName,(int)16,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(106)
	this->_labels = ::haxe::ds::IntMap_obj::__new();
}
;
	return null();
}

LayerList_obj::~LayerList_obj() { }

Dynamic LayerList_obj::__CreateEmpty() { return  new LayerList_obj; }
hx::ObjectPtr< LayerList_obj > LayerList_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< LayerList_obj > result = new LayerList_obj();
	result->__construct(__o_width,__o_height);
	return result;}

Dynamic LayerList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LayerList_obj > result = new LayerList_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void LayerList_obj::set( ::haxe::ds::IntMap list){
{
		HX_STACK_PUSH("LayerList::set","com/haxepunk/debug/LayerList.hx",110);
		HX_STACK_THIS(this);
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(112)
		for(::cpp::FastIterator_obj< ::com::haxepunk::debug::LayerLabel > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::debug::LayerLabel >(this->_labels->iterator());  __it->hasNext(); ){
			::com::haxepunk::debug::LayerLabel label = __it->next();
			this->removeChild(label);
		}
		HX_STACK_LINE(118)
		Array< int > keys = Array_obj< int >::__new();		HX_STACK_VAR(keys,"keys");
		HX_STACK_LINE(119)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(list->keys());  __it->hasNext(); ){
			int key = __it->next();
			if (((list->get(key) > (int)0))){
				HX_STACK_LINE(122)
				keys->push(key);
			}
;
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(int a,int b){
			HX_STACK_PUSH("*::_Function_1_1","com/haxepunk/debug/LayerList.hx",124);
			HX_STACK_ARG(a,"a");
			HX_STACK_ARG(b,"b");
			{
				HX_STACK_LINE(124)
				return (a - b);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(124)
		keys->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(126)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(127)
			while(((_g < keys->length))){
				HX_STACK_LINE(127)
				int layer = keys->__get(_g);		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(127)
				++(_g);
				HX_STACK_LINE(129)
				::com::haxepunk::debug::LayerLabel label;		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(130)
				if ((this->_labels->exists(layer))){
					HX_STACK_LINE(131)
					label = this->_labels->get(layer);
				}
				else{
					HX_STACK_LINE(136)
					label = ::com::haxepunk::debug::LayerLabel_obj::__new(layer,this->_textFormat);
					HX_STACK_LINE(137)
					this->_labels->set(layer,label);
				}
				HX_STACK_LINE(139)
				label->set_count(list->get(layer));
				HX_STACK_LINE(140)
				label->set_y((((i)++ * (int)20) + (int)5));
				HX_STACK_LINE(141)
				this->addChild(label);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LayerList_obj,set,(void))


LayerList_obj::LayerList_obj()
{
}

void LayerList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LayerList);
	HX_MARK_MEMBER_NAME(_textFormat,"_textFormat");
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LayerList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textFormat,"_textFormat");
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LayerList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { return _labels; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { return _textFormat; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LayerList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { _textFormat=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LayerList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textFormat"));
	outFields->push(HX_CSTRING("_labels"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_textFormat"),
	HX_CSTRING("_labels"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayerList_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayerList_obj::__mClass,"__mClass");
};

Class LayerList_obj::__mClass;

void LayerList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.LayerList"), hx::TCanCast< LayerList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LayerList_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
