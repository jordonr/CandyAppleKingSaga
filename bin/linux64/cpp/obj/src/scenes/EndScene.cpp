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
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_entities_BaseEntity
#include <entities/BaseEntity.h>
#endif
#ifndef INCLUDED_entities_RestartButton
#include <entities/RestartButton.h>
#endif
#ifndef INCLUDED_scenes_EndScene
#include <scenes/EndScene.h>
#endif
#ifndef INCLUDED_scenes_GameScene
#include <scenes/GameScene.h>
#endif
namespace scenes{

Void EndScene_obj::__construct()
{
HX_STACK_PUSH("EndScene::new","scenes/EndScene.hx",14);
{
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(16)
	this->restartButton = ::entities::RestartButton_obj::__new((int)0,(int)0);
}
;
	return null();
}

EndScene_obj::~EndScene_obj() { }

Dynamic EndScene_obj::__CreateEmpty() { return  new EndScene_obj; }
hx::ObjectPtr< EndScene_obj > EndScene_obj::__new()
{  hx::ObjectPtr< EndScene_obj > result = new EndScene_obj();
	result->__construct();
	return result;}

Dynamic EndScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EndScene_obj > result = new EndScene_obj();
	result->__construct();
	return result;}

Void EndScene_obj::update( ){
{
		HX_STACK_PUSH("EndScene::update","scenes/EndScene.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		if ((::com::haxepunk::utils::Input_obj::check((int)13))){
			HX_STACK_LINE(50)
			::com::haxepunk::HXP_obj::set_scene(::scenes::GameScene_obj::__new());
		}
		HX_STACK_LINE(54)
		this->super::update();
	}
return null();
}


Void EndScene_obj::begin( ){
{
		HX_STACK_PUSH("EndScene::begin","scenes/EndScene.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		::com::haxepunk::graphics::Text line1 = ::com::haxepunk::graphics::Text_obj::__new(HX_CSTRING("You Scored"),null(),null(),null(),null(),null());		HX_STACK_VAR(line1,"line1");
		HX_STACK_LINE(22)
		::com::haxepunk::graphics::Text line2 = ::com::haxepunk::graphics::Text_obj::__new((HX_CSTRING("") + ::scenes::GameScene_obj::getScore()),null(),null(),null(),null(),null());		HX_STACK_VAR(line2,"line2");
		HX_STACK_LINE(23)
		::com::haxepunk::graphics::Text line3 = ::com::haxepunk::graphics::Text_obj::__new(HX_CSTRING("(Press Enter to Restart)"),null(),null(),null(),null(),null());		HX_STACK_VAR(line3,"line3");
		HX_STACK_LINE(25)
		line1->set_size((int)58);
		HX_STACK_LINE(26)
		line2->set_size((int)72);
		HX_STACK_LINE(27)
		line3->set_size((int)12);
		HX_STACK_LINE(29)
		line1->x = (::com::haxepunk::HXP_obj::halfWidth - (Float(line1->textWidth) / Float((int)2)));
		HX_STACK_LINE(30)
		line1->y = (::com::haxepunk::HXP_obj::halfHeight - (line1->textHeight * (int)3));
		HX_STACK_LINE(32)
		line2->x = (::com::haxepunk::HXP_obj::halfWidth - (Float(line2->textWidth) / Float((int)2)));
		HX_STACK_LINE(33)
		line2->y = ((::com::haxepunk::HXP_obj::halfHeight - (line2->textHeight * 1.5)) + line1->textHeight);
		HX_STACK_LINE(35)
		this->restartButton->x = (::com::haxepunk::HXP_obj::halfWidth - (Float(this->restartButton->width) / Float((int)2)));
		HX_STACK_LINE(36)
		this->restartButton->y = (((::com::haxepunk::HXP_obj::halfHeight - (Float(this->restartButton->height) / Float((int)2))) + line1->textHeight) + line2->textHeight);
		HX_STACK_LINE(38)
		line3->x = (::com::haxepunk::HXP_obj::halfWidth - (Float(line3->textWidth) / Float((int)2)));
		HX_STACK_LINE(39)
		line3->y = ((((::com::haxepunk::HXP_obj::halfHeight - (line3->textHeight * 1.5)) + line1->textHeight) + line2->textHeight) + this->restartButton->height);
		HX_STACK_LINE(41)
		this->addGraphic(line1,null(),null(),null());
		HX_STACK_LINE(42)
		this->addGraphic(line2,null(),null(),null());
		HX_STACK_LINE(43)
		this->add(this->restartButton);
		HX_STACK_LINE(44)
		this->addGraphic(line3,null(),null(),null());
		HX_STACK_LINE(46)
		this->super::begin();
	}
return null();
}



EndScene_obj::EndScene_obj()
{
}

void EndScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EndScene);
	HX_MARK_MEMBER_NAME(restartButton,"restartButton");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EndScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(restartButton,"restartButton");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic EndScene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restartButton") ) { return restartButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EndScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"restartButton") ) { restartButton=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EndScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("restartButton"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("begin"),
	HX_CSTRING("restartButton"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EndScene_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EndScene_obj::__mClass,"__mClass");
};

Class EndScene_obj::__mClass;

void EndScene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scenes.EndScene"), hx::TCanCast< EndScene_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EndScene_obj::__boot()
{
}

} // end namespace scenes
