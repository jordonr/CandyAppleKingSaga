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
#ifndef INCLUDED_entities_BaseEntity
#include <entities/BaseEntity.h>
#endif
#ifndef INCLUDED_entities_Ground
#include <entities/Ground.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
namespace entities{

Void Ground_obj::__construct(int x,int y)
{
HX_STACK_PUSH("Ground::new","entities/Ground.hx",9);
{
	HX_STACK_LINE(10)
	super::__construct(x,y);
	HX_STACK_LINE(12)
	this->set_graphic(::com::haxepunk::graphics::Image_obj::__new(HX_CSTRING("graphics/grass.png"),null(),null()));
	HX_STACK_LINE(13)
	this->setHitboxTo(this->_graphic);
	HX_STACK_LINE(15)
	this->set_type(HX_CSTRING("ground"));
}
;
	return null();
}

Ground_obj::~Ground_obj() { }

Dynamic Ground_obj::__CreateEmpty() { return  new Ground_obj; }
hx::ObjectPtr< Ground_obj > Ground_obj::__new(int x,int y)
{  hx::ObjectPtr< Ground_obj > result = new Ground_obj();
	result->__construct(x,y);
	return result;}

Dynamic Ground_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ground_obj > result = new Ground_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Ground_obj::update( ){
{
		HX_STACK_PUSH("Ground::update","entities/Ground.hx",24);
		HX_STACK_THIS(this);
		HX_STACK_LINE(25)
		this->outOfBounds();
		HX_STACK_LINE(27)
		if (((this->_age > (int)25))){
			HX_STACK_LINE(27)
			this->moveBy((int)0,(int)2,null(),null());
		}
		HX_STACK_LINE(31)
		this->super::update();
	}
return null();
}


Void Ground_obj::outOfBounds( ){
{
		HX_STACK_PUSH("Ground::outOfBounds","entities/Ground.hx",18);
		HX_STACK_THIS(this);
		HX_STACK_LINE(18)
		if (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) > ::com::haxepunk::HXP_obj::height))){
			HX_STACK_LINE(19)
			this->_scene->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ground_obj,outOfBounds,(void))


Ground_obj::Ground_obj()
{
}

void Ground_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ground);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ground_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Ground_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"outOfBounds") ) { return outOfBounds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ground_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Ground_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("outOfBounds"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ground_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ground_obj::__mClass,"__mClass");
};

Class Ground_obj::__mClass;

void Ground_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Ground"), hx::TCanCast< Ground_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Ground_obj::__boot()
{
}

} // end namespace entities
