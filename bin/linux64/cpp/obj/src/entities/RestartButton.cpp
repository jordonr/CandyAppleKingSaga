#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_entities_BaseEntity
#include <entities/BaseEntity.h>
#endif
#ifndef INCLUDED_entities_RestartButton
#include <entities/RestartButton.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_scenes_StartScene
#include <scenes/StartScene.h>
#endif
namespace entities{

Void RestartButton_obj::__construct(Float x,Float y)
{
HX_STACK_PUSH("RestartButton::new","entities/RestartButton.hx",12);
{
	HX_STACK_LINE(13)
	super::__construct(x,y);
	HX_STACK_LINE(15)
	this->img = ::com::haxepunk::graphics::Image_obj::__new(HX_CSTRING("graphics/restart.png"),null(),null());
	HX_STACK_LINE(16)
	this->set_graphic(this->img);
	HX_STACK_LINE(18)
	this->setHitboxTo(this->img);
	HX_STACK_LINE(20)
	this->set_type(HX_CSTRING("startLogo"));
}
;
	return null();
}

RestartButton_obj::~RestartButton_obj() { }

Dynamic RestartButton_obj::__CreateEmpty() { return  new RestartButton_obj; }
hx::ObjectPtr< RestartButton_obj > RestartButton_obj::__new(Float x,Float y)
{  hx::ObjectPtr< RestartButton_obj > result = new RestartButton_obj();
	result->__construct(x,y);
	return result;}

Dynamic RestartButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RestartButton_obj > result = new RestartButton_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void RestartButton_obj::update( ){
{
		HX_STACK_PUSH("RestartButton::update","entities/RestartButton.hx",23);
		HX_STACK_THIS(this);
		HX_STACK_LINE(24)
		if ((this->clickedOn())){
			HX_STACK_LINE(24)
			::scenes::StartScene_obj::startGame();
		}
		HX_STACK_LINE(28)
		this->super::update();
	}
return null();
}


::String RestartButton_obj::imagePath;


RestartButton_obj::RestartButton_obj()
{
}

void RestartButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RestartButton);
	HX_MARK_MEMBER_NAME(img,"img");
	HX_MARK_MEMBER_NAME(speed,"speed");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RestartButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(img,"img");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RestartButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { return img; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RestartButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { img=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RestartButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("img"));
	outFields->push(HX_CSTRING("speed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("imagePath"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("img"),
	HX_CSTRING("speed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RestartButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RestartButton_obj::imagePath,"imagePath");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RestartButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RestartButton_obj::imagePath,"imagePath");
};

Class RestartButton_obj::__mClass;

void RestartButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.RestartButton"), hx::TCanCast< RestartButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RestartButton_obj::__boot()
{
	imagePath= HX_CSTRING("graphics/restart.png");
}

} // end namespace entities
