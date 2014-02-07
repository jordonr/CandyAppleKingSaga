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
#ifndef INCLUDED_com_haxepunk_graphics_Animation
#include <com/haxepunk/graphics/Animation.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_entities_BaseEntity
#include <entities/BaseEntity.h>
#endif
#ifndef INCLUDED_entities_Player
#include <entities/Player.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_scenes_EndScene
#include <scenes/EndScene.h>
#endif
namespace entities{

Void Player_obj::__construct(int x,int y)
{
HX_STACK_PUSH("Player::new","entities/Player.hx",24);
{
	HX_STACK_LINE(25)
	super::__construct(x,y);
	HX_STACK_LINE(27)
	this->sprite = ::com::haxepunk::graphics::Spritemap_obj::__new(HX_CSTRING("graphics/King.png"),(int)16,(int)16,null(),null());
	HX_STACK_LINE(29)
	this->sprite->add(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)1),null(),null());
	HX_STACK_LINE(30)
	this->sprite->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)4).Add((int)5),(int)12,null());
	HX_STACK_LINE(32)
	this->sprite->play(HX_CSTRING("idle"),null());
	HX_STACK_LINE(34)
	this->set_graphic(this->sprite);
	HX_STACK_LINE(35)
	this->setHitboxTo(this->_graphic);
	HX_STACK_LINE(37)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("left"),Array_obj< int >::__new().Add((int)37).Add((int)65));
	HX_STACK_LINE(38)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("right"),Array_obj< int >::__new().Add((int)39).Add((int)68));
	HX_STACK_LINE(39)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)38).Add((int)87));
	HX_STACK_LINE(41)
	this->velocity = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(42)
	this->gravity = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(43)
	this->velocity->x = (int)0;
	HX_STACK_LINE(44)
	this->gravity->y = (int)1;
	HX_STACK_LINE(45)
	this->jump = (int)0;
	HX_STACK_LINE(46)
	this->onGround = false;
	HX_STACK_LINE(47)
	this->xAcceleration = (int)0;
	HX_STACK_LINE(49)
	this->set_type(HX_CSTRING("player"));
}
;
	return null();
}

Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int x,int y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(x,y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_PUSH("Player::update","entities/Player.hx",154);
		HX_STACK_THIS(this);
		HX_STACK_LINE(155)
		this->outOfBounds();
		HX_STACK_LINE(156)
		this->handleInput();
		HX_STACK_LINE(157)
		this->move();
		HX_STACK_LINE(158)
		this->setAnimations();
		HX_STACK_LINE(160)
		this->super::update();
	}
return null();
}


bool Player_obj::moveCollideX( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Player::moveCollideX","entities/Player.hx",146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(147)
	if (((e->_type == HX_CSTRING("candy")))){
		HX_STACK_LINE(147)
		this->handleCandy(e);
	}
	HX_STACK_LINE(151)
	return true;
}


bool Player_obj::moveCollideY( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Player::moveCollideY","entities/Player.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(135)
	if (((e->_type == HX_CSTRING("candy")))){
		HX_STACK_LINE(135)
		this->handleCandy(e);
	}
	HX_STACK_LINE(139)
	if (((e->_type == HX_CSTRING("ground")))){
		HX_STACK_LINE(139)
		this->onGround = true;
	}
	HX_STACK_LINE(143)
	return true;
}


Void Player_obj::handleCandy( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Player::handleCandy","entities/Player.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(130)
		this->_scene->remove(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,handleCandy,(void))

Void Player_obj::fall( ){
{
		HX_STACK_PUSH("Player::fall","entities/Player.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_LINE(122)
		if ((this->onGround)){
			HX_STACK_LINE(123)
			this->velocity->y = (int)2;
		}
		else{
			HX_STACK_LINE(125)
			hx::AddEq(this->velocity->y,this->gravity->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,fall,(void))

Void Player_obj::doJump( ){
{
		HX_STACK_PUSH("Player::doJump","entities/Player.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_LINE(115)
		if ((this->onGround)){
			struct _Function_2_1{
				inline static int Block( ::entities::Player_obj *__this){
					HX_STACK_PUSH("*::closure","entities/Player.hx",117);
					{
						HX_STACK_LINE(117)
						Float value = (  ((__this->followCamera)) ? Float((__this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(__this->y) );		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(117)
						return (  (((value < (int)0))) ? int((int)-1) : int((  (((value > (int)0))) ? int((int)1) : int((int)0) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(117)
			this->velocity->y = (-(_Function_2_1::Block(this)) * (int)5);
			HX_STACK_LINE(118)
			this->onGround = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,doJump,(void))

Void Player_obj::outOfBounds( ){
{
		HX_STACK_PUSH("Player::outOfBounds","entities/Player.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_LINE(109)
		if (((bool((bool((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) < (int)0)) || bool((((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) )) > ::com::haxepunk::HXP_obj::width)))) || bool((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) > ::com::haxepunk::HXP_obj::width))))){
			HX_STACK_LINE(110)
			::com::haxepunk::HXP_obj::set_scene(::scenes::EndScene_obj::__new());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,outOfBounds,(void))

Void Player_obj::move( ){
{
		HX_STACK_PUSH("Player::move","entities/Player.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_LINE(88)
		hx::AddEq(this->velocity->x,this->xAcceleration);
		HX_STACK_LINE(90)
		if (((::Math_obj::abs(this->velocity->x) > (int)5))){
			struct _Function_2_1{
				inline static int Block( ::entities::Player_obj *__this){
					HX_STACK_PUSH("*::closure","entities/Player.hx",91);
					{
						HX_STACK_LINE(91)
						Float value = __this->velocity->x;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(91)
						return (  (((value < (int)0))) ? int((int)-1) : int((  (((value > (int)0))) ? int((int)1) : int((int)0) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(90)
			this->velocity->x = ((int)5 * _Function_2_1::Block(this));
		}
		HX_STACK_LINE(94)
		if (((this->velocity->x < (int)0))){
			HX_STACK_LINE(94)
			this->velocity->x = ::Math_obj::min((this->velocity->x + 0.4),(int)0);
		}
		else{
			HX_STACK_LINE(96)
			if (((this->velocity->x > (int)0))){
				HX_STACK_LINE(96)
				this->velocity->x = ::Math_obj::max((this->velocity->x - 0.4),(int)0);
			}
		}
		HX_STACK_LINE(100)
		if (((this->jump == (int)1))){
			HX_STACK_LINE(100)
			this->doJump();
		}
		else{
			HX_STACK_LINE(102)
			this->fall();
		}
		HX_STACK_LINE(106)
		this->moveBy(this->velocity->x,this->velocity->y,Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("candy")).Add(HX_CSTRING("ground"))),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,move,(void))

Void Player_obj::setAnimations( ){
{
		HX_STACK_PUSH("Player::setAnimations","entities/Player.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_LINE(73)
		if (((this->velocity->x == (int)0))){
			HX_STACK_LINE(74)
			this->sprite->play(HX_CSTRING("idle"),null());
		}
		else{
			HX_STACK_LINE(77)
			this->sprite->play(HX_CSTRING("walk"),null());
			HX_STACK_LINE(79)
			if (((this->velocity->x < (int)0))){
				HX_STACK_LINE(79)
				this->sprite->set_flipped(true);
			}
			else{
				HX_STACK_LINE(81)
				this->sprite->set_flipped(false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,setAnimations,(void))

Void Player_obj::handleInput( ){
{
		HX_STACK_PUSH("Player::handleInput","entities/Player.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_LINE(55)
		if ((this->onGround)){
			HX_STACK_LINE(56)
			this->xAcceleration = (int)0;
			HX_STACK_LINE(58)
			if ((::com::haxepunk::utils::Input_obj::check(HX_CSTRING("left")))){
				HX_STACK_LINE(58)
				this->xAcceleration = (int)-1;
			}
			HX_STACK_LINE(61)
			if ((::com::haxepunk::utils::Input_obj::check(HX_CSTRING("right")))){
				HX_STACK_LINE(61)
				this->xAcceleration = (int)1;
			}
		}
		HX_STACK_LINE(66)
		if ((::com::haxepunk::utils::Input_obj::check(HX_CSTRING("jump")))){
			HX_STACK_LINE(66)
			this->jump = (int)1;
		}
		else{
			HX_STACK_LINE(68)
			this->jump = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,handleInput,(void))

Float Player_obj::jumpForce;


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(onGround,"onGround");
	HX_MARK_MEMBER_NAME(jump,"jump");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(climb,"climb");
	HX_MARK_MEMBER_NAME(yAcceleration,"yAcceleration");
	HX_MARK_MEMBER_NAME(xAcceleration,"xAcceleration");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onGround,"onGround");
	HX_VISIT_MEMBER_NAME(jump,"jump");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(climb,"climb");
	HX_VISIT_MEMBER_NAME(yAcceleration,"yAcceleration");
	HX_VISIT_MEMBER_NAME(xAcceleration,"xAcceleration");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fall") ) { return fall_dyn(); }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"climb") ) { return climb; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"doJump") ) { return doJump_dyn(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onGround") ) { return onGround; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"handleCandy") ) { return handleCandy_dyn(); }
		if (HX_FIELD_EQ(inName,"outOfBounds") ) { return outOfBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"handleInput") ) { return handleInput_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moveCollideX") ) { return moveCollideX_dyn(); }
		if (HX_FIELD_EQ(inName,"moveCollideY") ) { return moveCollideY_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setAnimations") ) { return setAnimations_dyn(); }
		if (HX_FIELD_EQ(inName,"yAcceleration") ) { return yAcceleration; }
		if (HX_FIELD_EQ(inName,"xAcceleration") ) { return xAcceleration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { jump=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"climb") ) { climb=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onGround") ) { onGround=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"yAcceleration") ) { yAcceleration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xAcceleration") ) { xAcceleration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("onGround"));
	outFields->push(HX_CSTRING("jump"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("climb"));
	outFields->push(HX_CSTRING("yAcceleration"));
	outFields->push(HX_CSTRING("xAcceleration"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("jumpForce"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("moveCollideX"),
	HX_CSTRING("moveCollideY"),
	HX_CSTRING("handleCandy"),
	HX_CSTRING("fall"),
	HX_CSTRING("doJump"),
	HX_CSTRING("outOfBounds"),
	HX_CSTRING("move"),
	HX_CSTRING("setAnimations"),
	HX_CSTRING("handleInput"),
	HX_CSTRING("onGround"),
	HX_CSTRING("jump"),
	HX_CSTRING("velocity"),
	HX_CSTRING("sprite"),
	HX_CSTRING("gravity"),
	HX_CSTRING("climb"),
	HX_CSTRING("yAcceleration"),
	HX_CSTRING("xAcceleration"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Player_obj::jumpForce,"jumpForce");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Player_obj::jumpForce,"jumpForce");
};

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Player_obj::__boot()
{
	jumpForce= (int)5;
}

} // end namespace entities
