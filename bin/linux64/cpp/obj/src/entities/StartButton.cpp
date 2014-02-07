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
#ifndef INCLUDED_entities_StartButton
#include <entities/StartButton.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_scenes_StartScene
#include <scenes/StartScene.h>
#endif
namespace entities{

Void StartButton_obj::__construct(Float x,Float y)
{
HX_STACK_PUSH("StartButton::new","entities/StartButton.hx",12);
{
	HX_STACK_LINE(13)
	super::__construct(x,y);
	HX_STACK_LINE(15)
	this->img = ::com::haxepunk::graphics::Image_obj::__new(HX_CSTRING("graphics/start.png"),null(),null());
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

StartButton_obj::~StartButton_obj() { }

Dynamic StartButton_obj::__CreateEmpty() { return  new StartButton_obj; }
hx::ObjectPtr< StartButton_obj > StartButton_obj::__new(Float x,Float y)
{  hx::ObjectPtr< StartButton_obj > result = new StartButton_obj();
	result->__construct(x,y);
	return result;}

Dynamic StartButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StartButton_obj > result = new StartButton_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void StartButton_obj::update( ){
{
		HX_STACK_PUSH("StartButton::update","entities/StartButton.hx",23);
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


::String StartButton_obj::imagePath;


StartButton_obj::StartButton_obj()
{
}

void StartButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StartButton);
	HX_MARK_MEMBER_NAME(img,"img");
	HX_MARK_MEMBER_NAME(speed,"speed");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StartButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(img,"img");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic StartButton_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic StartButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void StartButton_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(StartButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StartButton_obj::imagePath,"imagePath");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StartButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StartButton_obj::imagePath,"imagePath");
};

Class StartButton_obj::__mClass;

void StartButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.StartButton"), hx::TCanCast< StartButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void StartButton_obj::__boot()
{
	imagePath= HX_CSTRING("graphics/start.png");
}

} // end namespace entities
