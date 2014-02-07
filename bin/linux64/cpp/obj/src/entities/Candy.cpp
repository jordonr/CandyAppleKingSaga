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
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
#endif
#ifndef INCLUDED_entities_BaseEntity
#include <entities/BaseEntity.h>
#endif
#ifndef INCLUDED_entities_Candy
#include <entities/Candy.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_scenes_GameScene
#include <scenes/GameScene.h>
#endif
namespace entities{

Void Candy_obj::__construct(Float x,Float y)
{
HX_STACK_PUSH("Candy::new","entities/Candy.hx",14);
{
	HX_STACK_LINE(15)
	super::__construct(x,y);
	HX_STACK_LINE(17)
	this->candy = ::com::haxepunk::graphics::Spritemap_obj::__new(HX_CSTRING("graphics/candysheet.png"),(int)35,(int)35,null(),null());
	HX_STACK_LINE(19)
	this->set_graphic(this->candy);
	HX_STACK_LINE(20)
	this->setHitboxTo(this->candy);
	HX_STACK_LINE(21)
	this->candy->set_frame(::Math_obj::floor((::Math_obj::random() * (int)93)));
	HX_STACK_LINE(23)
	this->setValue();
	HX_STACK_LINE(25)
	this->set_type(HX_CSTRING("candy"));
}
;
	return null();
}

Candy_obj::~Candy_obj() { }

Dynamic Candy_obj::__CreateEmpty() { return  new Candy_obj; }
hx::ObjectPtr< Candy_obj > Candy_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Candy_obj > result = new Candy_obj();
	result->__construct(x,y);
	return result;}

Dynamic Candy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Candy_obj > result = new Candy_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Candy_obj::setValue( ){
{
		HX_STACK_PUSH("Candy::setValue","entities/Candy.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_LINE(37)
		if (((this->candy->get_frame() < (int)8))){
			HX_STACK_LINE(38)
			this->value = (int)12;
		}
		else{
			HX_STACK_LINE(40)
			if (((this->candy->get_frame() < (int)11))){
				HX_STACK_LINE(40)
				this->value = (int)100;
			}
			else{
				HX_STACK_LINE(42)
				if (((this->candy->get_frame() < (int)18))){
					HX_STACK_LINE(42)
					this->value = (int)12;
				}
				else{
					HX_STACK_LINE(44)
					if (((this->candy->get_frame() < (int)21))){
						HX_STACK_LINE(44)
						this->value = (int)35;
					}
					else{
						HX_STACK_LINE(46)
						if (((this->candy->get_frame() < (int)28))){
							HX_STACK_LINE(46)
							this->value = (int)12;
						}
						else{
							HX_STACK_LINE(48)
							if (((this->candy->get_frame() < (int)37))){
								HX_STACK_LINE(48)
								this->value = (int)10;
							}
							else{
								HX_STACK_LINE(50)
								if (((this->candy->get_frame() < (int)51))){
									HX_STACK_LINE(50)
									this->value = (int)5;
								}
								else{
									HX_STACK_LINE(52)
									if (((this->candy->get_frame() < (int)59))){
										HX_STACK_LINE(52)
										this->value = (int)12;
									}
									else{
										HX_STACK_LINE(54)
										this->value = (int)5;
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Candy_obj,setValue,(void))

Void Candy_obj::removed( ){
{
		HX_STACK_PUSH("Candy::removed","entities/Candy.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		::scenes::GameScene_obj::addToScore(this->value);
	}
return null();
}


Void Candy_obj::update( ){
{
		HX_STACK_PUSH("Candy::update","entities/Candy.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_LINE(28)
		this->super::update();
	}
return null();
}


Float Candy_obj::speed;

::String Candy_obj::imagePath;


Candy_obj::Candy_obj()
{
}

void Candy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Candy);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(candy,"candy");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Candy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(candy,"candy");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Candy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"candy") ) { return candy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"removed") ) { return removed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Candy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"candy") ) { candy=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Candy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("candy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("speed"),
	HX_CSTRING("imagePath"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setValue"),
	HX_CSTRING("removed"),
	HX_CSTRING("update"),
	HX_CSTRING("value"),
	HX_CSTRING("candy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Candy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Candy_obj::speed,"speed");
	HX_MARK_MEMBER_NAME(Candy_obj::imagePath,"imagePath");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Candy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Candy_obj::speed,"speed");
	HX_VISIT_MEMBER_NAME(Candy_obj::imagePath,"imagePath");
};

Class Candy_obj::__mClass;

void Candy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Candy"), hx::TCanCast< Candy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Candy_obj::__boot()
{
	speed= (int)5;
	imagePath= HX_CSTRING("graphics/candysheet.png");
}

} // end namespace entities
