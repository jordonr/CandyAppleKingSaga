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
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Text_obj::__construct(::String text,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic options)
{
HX_STACK_PUSH("Text::new","com/haxepunk/graphics/Text.hx",37);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(212)
	this->_textHardware = false;
	HX_STACK_LINE(44)
	this->autoHeight = false;
	HX_STACK_LINE(43)
	this->autoWidth = false;
	HX_STACK_LINE(57)
	if (((options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/haxepunk/graphics/Text.hx",59);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(59)
		options = _Function_2_1::Block();
		HX_STACK_LINE(60)
		options->__FieldRef(HX_CSTRING("color")) = (int)16777215;
	}
	HX_STACK_LINE(63)
	if (((options->__Field(HX_CSTRING("font"),true) == null()))){
		HX_STACK_LINE(63)
		options->__FieldRef(HX_CSTRING("font")) = ::com::haxepunk::HXP_obj::defaultFont;
	}
	HX_STACK_LINE(64)
	if (((options->__Field(HX_CSTRING("size"),true) == (int)0))){
		HX_STACK_LINE(64)
		options->__FieldRef(HX_CSTRING("size")) = (int)16;
	}
	HX_STACK_LINE(65)
	if (((options->__Field(HX_CSTRING("align"),true) == null()))){
		HX_STACK_LINE(65)
		options->__FieldRef(HX_CSTRING("align")) = ::flash::text::TextFormatAlign_obj::LEFT;
	}
	HX_STACK_LINE(67)
	::flash::text::Font fontObj = ::openfl::Assets_obj::getFont(options->__Field(HX_CSTRING("font"),true),null());		HX_STACK_VAR(fontObj,"fontObj");
	HX_STACK_LINE(68)
	this->_format = ::flash::text::TextFormat_obj::__new(fontObj->fontName,options->__Field(HX_CSTRING("size"),true),(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(69)
	this->_format->align = options->__Field(HX_CSTRING("align"),true);
	HX_STACK_LINE(70)
	this->_format->leading = options->__Field(HX_CSTRING("leading"),true);
	HX_STACK_LINE(72)
	this->_field = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(76)
	this->_field->set_wordWrap(options->__Field(HX_CSTRING("wordWrap"),true));
	HX_STACK_LINE(77)
	this->_field->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(78)
	this->_field->set_text(text);
	HX_STACK_LINE(79)
	this->_field->set_selectable(false);
	HX_STACK_LINE(81)
	this->resizable = options->__Field(HX_CSTRING("resizable"),true);
	HX_STACK_LINE(83)
	if (((width == (int)0))){
		HX_STACK_LINE(85)
		width = ::Std_obj::_int((this->_field->get_textWidth() + (int)4));
		HX_STACK_LINE(86)
		this->autoWidth = true;
	}
	HX_STACK_LINE(88)
	if (((height == (int)0))){
		HX_STACK_LINE(90)
		height = ::Std_obj::_int((this->_field->get_textHeight() + (int)4));
		HX_STACK_LINE(91)
		this->autoHeight = true;
	}
	HX_STACK_LINE(94)
	::flash::display::BitmapData source = ::com::haxepunk::HXP_obj::createBitmap(width,height,true,null());		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(95)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
		HX_STACK_LINE(97)
		this->_sourceRect = source->get_rect();
		HX_STACK_LINE(98)
		this->_source = source;
		HX_STACK_LINE(99)
		this->_bitmap = ::flash::display::Bitmap_obj::__new(null(),null(),null());
		HX_STACK_LINE(100)
		this->_colorTransform = ::flash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(101)
		this->createBuffer();
		HX_STACK_LINE(102)
		this->updateBuffer(null());
		HX_STACK_LINE(103)
		this->_textHardware = true;
	}
	HX_STACK_LINE(105)
	super::__construct(source,null(),null());
	HX_STACK_LINE(107)
	this->set_text(text);
	HX_STACK_LINE(108)
	this->set_color(options->__Field(HX_CSTRING("color"),true));
	HX_STACK_LINE(109)
	this->x = x;
	HX_STACK_LINE(110)
	this->y = y;
}
;
	return null();
}

Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new(::String text,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic options)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(text,__o_x,__o_y,__o_width,__o_height,options);
	return result;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

int Text_obj::set_size( int value){
	HX_STACK_PUSH("Text::set_size","com/haxepunk/graphics/Text.hx",202);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(203)
	if (((this->size == value))){
		HX_STACK_LINE(203)
		return value;
	}
	HX_STACK_LINE(204)
	this->_format->size = this->size = value;
	HX_STACK_LINE(205)
	this->updateBuffer(null());
	HX_STACK_LINE(206)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_size,return )

::String Text_obj::set_font( ::String value){
	HX_STACK_PUSH("Text::set_font","com/haxepunk/graphics/Text.hx",189);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(190)
	if (((this->font == value))){
		HX_STACK_LINE(190)
		return value;
	}
	HX_STACK_LINE(191)
	value = ::openfl::Assets_obj::getFont(value,null())->fontName;
	HX_STACK_LINE(192)
	this->_format->font = this->font = value;
	HX_STACK_LINE(193)
	this->updateBuffer(null());
	HX_STACK_LINE(194)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_font,return )

::String Text_obj::set_text( ::String value){
	HX_STACK_PUSH("Text::set_text","com/haxepunk/graphics/Text.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(178)
	if (((this->text == value))){
		HX_STACK_LINE(178)
		return value;
	}
	HX_STACK_LINE(179)
	this->_field->set_text(this->text = value);
	HX_STACK_LINE(180)
	this->updateBuffer(null());
	HX_STACK_LINE(181)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

Void Text_obj::destroy( ){
{
		HX_STACK_PUSH("Text::destroy","com/haxepunk/graphics/Text.hx",165);
		HX_STACK_THIS(this);
		HX_STACK_LINE(165)
		if (((bool(this->_textHardware) && bool((this->_region != null()))))){
			HX_STACK_LINE(167)
			this->_region->destroy();
		}
	}
return null();
}


Void Text_obj::updateBuffer( hx::Null< bool >  __o_clearBefore){
bool clearBefore = __o_clearBefore.Default(false);
	HX_STACK_PUSH("Text::updateBuffer","com/haxepunk/graphics/Text.hx",115);
	HX_STACK_THIS(this);
	HX_STACK_ARG(clearBefore,"clearBefore");
{
		HX_STACK_LINE(116)
		this->_field->setTextFormat(this->_format,null(),null());
		HX_STACK_LINE(117)
		this->_field->set_width(this->_bufferRect->width);
		HX_STACK_LINE(119)
		if ((this->autoWidth)){
			HX_STACK_LINE(120)
			this->_field->set_width(this->textWidth = ::Math_obj::ceil((this->_field->get_textWidth() + (int)4)));
		}
		HX_STACK_LINE(121)
		if ((this->autoHeight)){
			HX_STACK_LINE(122)
			this->_field->set_height(this->textHeight = ::Math_obj::ceil((this->_field->get_textHeight() + (int)4)));
		}
		HX_STACK_LINE(124)
		if ((this->resizable)){
			HX_STACK_LINE(126)
			this->_bufferRect->width = this->textWidth;
			HX_STACK_LINE(127)
			this->_bufferRect->height = this->textHeight;
		}
		HX_STACK_LINE(130)
		if (((bool((this->textWidth > this->_source->get_width())) || bool((this->textHeight > this->_source->get_height()))))){
			HX_STACK_LINE(132)
			this->_source = ::com::haxepunk::HXP_obj::createBitmap(::Std_obj::_int(::Math_obj::max(this->textWidth,this->_source->get_width())),::Std_obj::_int(::Math_obj::max(this->textHeight,this->_source->get_height())),true,null());
			HX_STACK_LINE(137)
			this->_sourceRect = this->_source->get_rect();
			HX_STACK_LINE(138)
			this->createBuffer();
		}
		else{
			HX_STACK_LINE(141)
			this->_source->fillRect(this->_sourceRect,(int)0);
		}
		HX_STACK_LINE(145)
		if ((this->resizable)){
			HX_STACK_LINE(147)
			this->_field->set_width(this->textWidth);
			HX_STACK_LINE(148)
			this->_field->set_height(this->textHeight);
		}
		HX_STACK_LINE(151)
		this->_source->draw(this->_field,null(),null(),null(),null(),null());
		HX_STACK_LINE(152)
		this->super::updateBuffer(clearBefore);
		HX_STACK_LINE(154)
		if ((this->_textHardware)){
			HX_STACK_LINE(156)
			if (((this->_region != null()))){
				HX_STACK_LINE(157)
				this->_region->destroy();
			}
			HX_STACK_LINE(160)
			this->_region = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(this->_source);
		}
	}
return null();
}



Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(_textHardware,"_textHardware");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_field,"_field");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(autoHeight,"autoHeight");
	HX_MARK_MEMBER_NAME(autoWidth,"autoWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(resizable,"resizable");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textHardware,"_textHardware");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_field,"_field");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(autoHeight,"autoHeight");
	HX_VISIT_MEMBER_NAME(autoWidth,"autoWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(resizable,"resizable");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_field") ) { return _field; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { return autoWidth; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"resizable") ) { return resizable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { return autoHeight; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBuffer") ) { return updateBuffer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_textHardware") ) { return _textHardware; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return set_size(inValue);size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp) return set_font(inValue);font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_field") ) { _field=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { autoWidth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resizable") ) { resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoHeight") ) { autoHeight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_textHardware") ) { _textHardware=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textHardware"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_field"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("autoHeight"));
	outFields->push(HX_CSTRING("autoWidth"));
	outFields->push(HX_CSTRING("textHeight"));
	outFields->push(HX_CSTRING("textWidth"));
	outFields->push(HX_CSTRING("resizable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_textHardware"),
	HX_CSTRING("_format"),
	HX_CSTRING("_field"),
	HX_CSTRING("set_size"),
	HX_CSTRING("size"),
	HX_CSTRING("set_font"),
	HX_CSTRING("font"),
	HX_CSTRING("set_text"),
	HX_CSTRING("text"),
	HX_CSTRING("destroy"),
	HX_CSTRING("updateBuffer"),
	HX_CSTRING("autoHeight"),
	HX_CSTRING("autoWidth"),
	HX_CSTRING("textHeight"),
	HX_CSTRING("textWidth"),
	HX_CSTRING("resizable"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Text"), hx::TCanCast< Text_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Text_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
