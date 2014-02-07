#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_Backdrop
#include <com/haxepunk/graphics/Backdrop.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
#endif
#ifndef INCLUDED_entities_BaseEntity
#include <entities/BaseEntity.h>
#endif
#ifndef INCLUDED_entities_StartButton
#include <entities/StartButton.h>
#endif
#ifndef INCLUDED_scenes_GameScene
#include <scenes/GameScene.h>
#endif
#ifndef INCLUDED_scenes_StartScene
#include <scenes/StartScene.h>
#endif
namespace scenes{

Void StartScene_obj::__construct()
{
HX_STACK_PUSH("StartScene::new","scenes/StartScene.hx",15);
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->background = ::com::haxepunk::graphics::Backdrop_obj::__new(HX_CSTRING("graphics/background.png"),null(),null());
	HX_STACK_LINE(18)
	this->startButton = ::entities::StartButton_obj::__new((int)0,(int)0);
}
;
	return null();
}

StartScene_obj::~StartScene_obj() { }

Dynamic StartScene_obj::__CreateEmpty() { return  new StartScene_obj; }
hx::ObjectPtr< StartScene_obj > StartScene_obj::__new()
{  hx::ObjectPtr< StartScene_obj > result = new StartScene_obj();
	result->__construct();
	return result;}

Dynamic StartScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StartScene_obj > result = new StartScene_obj();
	result->__construct();
	return result;}

Void StartScene_obj::update( ){
{
		HX_STACK_PUSH("StartScene::update","scenes/StartScene.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		this->super::update();
	}
return null();
}


Void StartScene_obj::begin( ){
{
		HX_STACK_PUSH("StartScene::begin","scenes/StartScene.hx",21);
		HX_STACK_THIS(this);
		HX_STACK_LINE(22)
		this->super::begin();
		HX_STACK_LINE(24)
		this->startButton->x = (::com::haxepunk::HXP_obj::halfWidth - (Float(this->startButton->width) / Float((int)2)));
		HX_STACK_LINE(25)
		this->startButton->y = (::com::haxepunk::HXP_obj::halfHeight - (Float(this->startButton->height) / Float((int)2)));
		HX_STACK_LINE(27)
		this->addGraphic(this->background,null(),null(),null());
		HX_STACK_LINE(28)
		this->add(this->startButton);
	}
return null();
}


Void StartScene_obj::startGame( ){
{
		HX_STACK_PUSH("StartScene::startGame","scenes/StartScene.hx",36);
		HX_STACK_LINE(36)
		::com::haxepunk::HXP_obj::set_scene(::scenes::GameScene_obj::__new());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StartScene_obj,startGame,(void))


StartScene_obj::StartScene_obj()
{
}

void StartScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StartScene);
	HX_MARK_MEMBER_NAME(startButton,"startButton");
	HX_MARK_MEMBER_NAME(background,"background");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StartScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(startButton,"startButton");
	HX_VISIT_MEMBER_NAME(background,"background");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic StartScene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startButton") ) { return startButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StartScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::com::haxepunk::graphics::Backdrop >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startButton") ) { startButton=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StartScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("startButton"));
	outFields->push(HX_CSTRING("background"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("startGame"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("begin"),
	HX_CSTRING("startButton"),
	HX_CSTRING("background"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StartScene_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StartScene_obj::__mClass,"__mClass");
};

Class StartScene_obj::__mClass;

void StartScene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scenes.StartScene"), hx::TCanCast< StartScene_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void StartScene_obj::__boot()
{
}

} // end namespace scenes
