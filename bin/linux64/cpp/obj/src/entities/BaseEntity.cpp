#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
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
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_entities_BaseEntity
#include <entities/BaseEntity.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
namespace entities{

Void BaseEntity_obj::__construct(Float x,Float y)
{
HX_STACK_PUSH("BaseEntity::new","entities/BaseEntity.hx",7);
{
	HX_STACK_LINE(10)
	this->_age = (int)0;
	HX_STACK_LINE(9)
	this->_clicked = false;
	HX_STACK_LINE(12)
	super::__construct(x,y,null(),null());
}
;
	return null();
}

BaseEntity_obj::~BaseEntity_obj() { }

Dynamic BaseEntity_obj::__CreateEmpty() { return  new BaseEntity_obj; }
hx::ObjectPtr< BaseEntity_obj > BaseEntity_obj::__new(Float x,Float y)
{  hx::ObjectPtr< BaseEntity_obj > result = new BaseEntity_obj();
	result->__construct(x,y);
	return result;}

Dynamic BaseEntity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseEntity_obj > result = new BaseEntity_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool BaseEntity_obj::clickedOn( ){
	HX_STACK_PUSH("BaseEntity::clickedOn","entities/BaseEntity.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_LINE(23)
	bool pressed = (bool(this->collidePoint((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ),::Std_obj::_int((::com::haxepunk::HXP_obj::screen->get_mouseX() + this->_scene->camera->x)),::Std_obj::_int((::com::haxepunk::HXP_obj::screen->get_mouseY() + this->_scene->camera->y)))) && bool(::com::haxepunk::utils::Input_obj::mousePressed));		HX_STACK_VAR(pressed,"pressed");
	HX_STACK_LINE(24)
	if ((pressed)){
		HX_STACK_LINE(24)
		return true;
	}
	HX_STACK_LINE(28)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(BaseEntity_obj,clickedOn,return )

Void BaseEntity_obj::update( ){
{
		HX_STACK_PUSH("BaseEntity::update","entities/BaseEntity.hx",16);
		HX_STACK_THIS(this);
		HX_STACK_LINE(17)
		hx::AddEq(this->_age,::com::haxepunk::HXP_obj::elapsed);
		HX_STACK_LINE(19)
		this->super::update();
	}
return null();
}



BaseEntity_obj::BaseEntity_obj()
{
}

void BaseEntity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseEntity);
	HX_MARK_MEMBER_NAME(_age,"_age");
	HX_MARK_MEMBER_NAME(_clicked,"_clicked");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseEntity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_age,"_age");
	HX_VISIT_MEMBER_NAME(_clicked,"_clicked");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BaseEntity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_age") ) { return _age; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_clicked") ) { return _clicked; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickedOn") ) { return clickedOn_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseEntity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_age") ) { _age=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_clicked") ) { _clicked=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseEntity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_age"));
	outFields->push(HX_CSTRING("_clicked"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clickedOn"),
	HX_CSTRING("update"),
	HX_CSTRING("_age"),
	HX_CSTRING("_clicked"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseEntity_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseEntity_obj::__mClass,"__mClass");
};

Class BaseEntity_obj::__mClass;

void BaseEntity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.BaseEntity"), hx::TCanCast< BaseEntity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BaseEntity_obj::__boot()
{
}

} // end namespace entities
