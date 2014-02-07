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
#ifndef INCLUDED_entities_Candy
#include <entities/Candy.h>
#endif
#ifndef INCLUDED_entities_Ground
#include <entities/Ground.h>
#endif
#ifndef INCLUDED_entities_Player
#include <entities/Player.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_scenes_GameScene
#include <scenes/GameScene.h>
#endif
namespace scenes{

Void GameScene_obj::__construct()
{
HX_STACK_PUSH("GameScene::new","scenes/GameScene.hx",22);
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(25)
	::scenes::GameScene_obj::_age = (int)0;
	HX_STACK_LINE(26)
	::scenes::GameScene_obj::_score = (int)0;
	HX_STACK_LINE(27)
	this->spawnCandyTime = this->spawnGroundTime = (int)2;
	HX_STACK_LINE(29)
	this->background = ::com::haxepunk::graphics::Backdrop_obj::__new(HX_CSTRING("graphics/background.png"),null(),null());
}
;
	return null();
}

GameScene_obj::~GameScene_obj() { }

Dynamic GameScene_obj::__CreateEmpty() { return  new GameScene_obj; }
hx::ObjectPtr< GameScene_obj > GameScene_obj::__new()
{  hx::ObjectPtr< GameScene_obj > result = new GameScene_obj();
	result->__construct();
	return result;}

Dynamic GameScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameScene_obj > result = new GameScene_obj();
	result->__construct();
	return result;}

Void GameScene_obj::spawnCandy( ){
{
		HX_STACK_PUSH("GameScene::spawnCandy","scenes/GameScene.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(85)
		int x = ::Math_obj::floor((::Math_obj::random() * ::com::haxepunk::HXP_obj::width));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(86)
		int y = ::Math_obj::floor((::Math_obj::random() * ::com::haxepunk::HXP_obj::height));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(88)
		if (((this->collideRect(HX_CSTRING("ground"),x,y,(int)35,(int)35) == null()))){
			HX_STACK_LINE(88)
			this->add(::entities::Candy_obj::__new(x,y));
		}
		HX_STACK_LINE(92)
		this->spawnCandyTime = (int)2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScene_obj,spawnCandy,(void))

Void GameScene_obj::spawnPlatform( ){
{
		HX_STACK_PUSH("GameScene::spawnPlatform","scenes/GameScene.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		int numSquares = (::Math_obj::floor((::Math_obj::random() * (int)7)) + (int)3);		HX_STACK_VAR(numSquares,"numSquares");
		HX_STACK_LINE(71)
		int x = ::Math_obj::floor((::Math_obj::random() * ::com::haxepunk::HXP_obj::width));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(72)
		int y = ::Math_obj::floor((::Math_obj::random() * ::com::haxepunk::HXP_obj::height));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(74)
		if (((this->collideRect(HX_CSTRING("player"),x,y,(numSquares * (int)32),(int)32) == null()))){
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(76)
				while(((_g < numSquares))){
					HX_STACK_LINE(76)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(77)
					this->add(::entities::Ground_obj::__new((x + (i * (int)16)),y));
				}
			}
			HX_STACK_LINE(80)
			this->spawnGroundTime = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScene_obj,spawnPlatform,(void))

Void GameScene_obj::spawnFloor( ){
{
		HX_STACK_PUSH("GameScene::spawnFloor","scenes/GameScene.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_LINE(63)
		int numSquares = ::Math_obj::floor((Float(::com::haxepunk::HXP_obj::width) / Float((int)16)));		HX_STACK_VAR(numSquares,"numSquares");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(64)
			while(((_g < numSquares))){
				HX_STACK_LINE(64)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(65)
				this->add(::entities::Ground_obj::__new((i * (int)16),(::com::haxepunk::HXP_obj::height - (int)16)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScene_obj,spawnFloor,(void))

Void GameScene_obj::spawnPlayer( ){
{
		HX_STACK_PUSH("GameScene::spawnPlayer","scenes/GameScene.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_LINE(58)
		this->add(::entities::Player_obj::__new((int)0,(int)0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameScene_obj,spawnPlayer,(void))

Void GameScene_obj::update( ){
{
		HX_STACK_PUSH("GameScene::update","scenes/GameScene.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_LINE(42)
		hx::SubEq(this->spawnCandyTime,::com::haxepunk::HXP_obj::elapsed);
		HX_STACK_LINE(43)
		hx::SubEq(this->spawnGroundTime,::com::haxepunk::HXP_obj::elapsed);
		HX_STACK_LINE(45)
		hx::AddEq(::scenes::GameScene_obj::_age,::com::haxepunk::HXP_obj::elapsed);
		HX_STACK_LINE(47)
		if (((this->spawnGroundTime < (int)0))){
			HX_STACK_LINE(47)
			this->spawnPlatform();
		}
		HX_STACK_LINE(51)
		if (((this->spawnCandyTime < 0.5))){
			HX_STACK_LINE(51)
			this->spawnCandy();
		}
		HX_STACK_LINE(55)
		this->super::update();
	}
return null();
}


Void GameScene_obj::begin( ){
{
		HX_STACK_PUSH("GameScene::begin","scenes/GameScene.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		this->super::begin();
		HX_STACK_LINE(35)
		this->addGraphic(this->background,null(),null(),null());
		HX_STACK_LINE(37)
		this->spawnFloor();
		HX_STACK_LINE(38)
		this->spawnPlayer();
	}
return null();
}


Float GameScene_obj::_age;

int GameScene_obj::_score;

Float GameScene_obj::defaultSpawnTime;

Float GameScene_obj::minPlatformSize;

Float GameScene_obj::maxPlatformSize;

Void GameScene_obj::addToScore( int v){
{
		HX_STACK_PUSH("GameScene::addToScore","scenes/GameScene.hx",95);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(95)
		hx::AddEq(::scenes::GameScene_obj::_score,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameScene_obj,addToScore,(void))

int GameScene_obj::getScore( ){
	HX_STACK_PUSH("GameScene::getScore","scenes/GameScene.hx",99);
	HX_STACK_LINE(99)
	return ::scenes::GameScene_obj::_score;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameScene_obj,getScore,return )


GameScene_obj::GameScene_obj()
{
}

void GameScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameScene);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(spawnGroundTime,"spawnGroundTime");
	HX_MARK_MEMBER_NAME(spawnCandyTime,"spawnCandyTime");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(spawnGroundTime,"spawnGroundTime");
	HX_VISIT_MEMBER_NAME(spawnCandyTime,"spawnCandyTime");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GameScene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_age") ) { return _age; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_score") ) { return _score; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getScore") ) { return getScore_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addToScore") ) { return addToScore_dyn(); }
		if (HX_FIELD_EQ(inName,"spawnCandy") ) { return spawnCandy_dyn(); }
		if (HX_FIELD_EQ(inName,"spawnFloor") ) { return spawnFloor_dyn(); }
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spawnPlayer") ) { return spawnPlayer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"spawnPlatform") ) { return spawnPlatform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"spawnCandyTime") ) { return spawnCandyTime; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"spawnGroundTime") ) { return spawnGroundTime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_age") ) { _age=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_score") ) { _score=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::com::haxepunk::graphics::Backdrop >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"spawnCandyTime") ) { spawnCandyTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"spawnGroundTime") ) { spawnGroundTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("spawnGroundTime"));
	outFields->push(HX_CSTRING("spawnCandyTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_age"),
	HX_CSTRING("_score"),
	HX_CSTRING("defaultSpawnTime"),
	HX_CSTRING("minPlatformSize"),
	HX_CSTRING("maxPlatformSize"),
	HX_CSTRING("addToScore"),
	HX_CSTRING("getScore"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("spawnCandy"),
	HX_CSTRING("spawnPlatform"),
	HX_CSTRING("spawnFloor"),
	HX_CSTRING("spawnPlayer"),
	HX_CSTRING("update"),
	HX_CSTRING("begin"),
	HX_CSTRING("background"),
	HX_CSTRING("spawnGroundTime"),
	HX_CSTRING("spawnCandyTime"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameScene_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameScene_obj::_age,"_age");
	HX_MARK_MEMBER_NAME(GameScene_obj::_score,"_score");
	HX_MARK_MEMBER_NAME(GameScene_obj::defaultSpawnTime,"defaultSpawnTime");
	HX_MARK_MEMBER_NAME(GameScene_obj::minPlatformSize,"minPlatformSize");
	HX_MARK_MEMBER_NAME(GameScene_obj::maxPlatformSize,"maxPlatformSize");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameScene_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameScene_obj::_age,"_age");
	HX_VISIT_MEMBER_NAME(GameScene_obj::_score,"_score");
	HX_VISIT_MEMBER_NAME(GameScene_obj::defaultSpawnTime,"defaultSpawnTime");
	HX_VISIT_MEMBER_NAME(GameScene_obj::minPlatformSize,"minPlatformSize");
	HX_VISIT_MEMBER_NAME(GameScene_obj::maxPlatformSize,"maxPlatformSize");
};

Class GameScene_obj::__mClass;

void GameScene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scenes.GameScene"), hx::TCanCast< GameScene_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GameScene_obj::__boot()
{
	defaultSpawnTime= (int)2;
	minPlatformSize= (int)3;
	maxPlatformSize= (int)7;
}

} // end namespace scenes
