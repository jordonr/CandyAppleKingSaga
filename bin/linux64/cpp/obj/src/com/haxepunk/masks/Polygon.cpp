#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Vector
#include <com/haxepunk/math/Vector.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Polygon_obj::__construct(Array< ::Dynamic > points,::flash::geom::Point origin)
{
HX_STACK_PUSH("Polygon::new","com/haxepunk/masks/Polygon.hx",31);
{
	HX_STACK_LINE(32)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(33)
	if (((points->length < (int)3))){
		HX_STACK_LINE(33)
		hx::Throw (HX_CSTRING("The polygon needs at least 3 sides."));
	}
	HX_STACK_LINE(34)
	this->_points = points;
	HX_STACK_LINE(36)
	this->_fakeEntity = ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(37)
	this->_fakeTileHitbox = ::com::haxepunk::masks::Hitbox_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(39)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(40)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
	HX_STACK_LINE(41)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >()),this->collideGrid_dyn());
	HX_STACK_LINE(42)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >()),this->collideCircle_dyn());
	HX_STACK_LINE(43)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Polygon >()),this->collidePolygon_dyn());
	HX_STACK_LINE(45)
	this->origin = (  (((origin != null()))) ? ::flash::geom::Point(origin) : ::flash::geom::Point(::flash::geom::Point_obj::__new(null(),null())) );
	HX_STACK_LINE(46)
	this->_angle = (int)0;
	HX_STACK_LINE(48)
	this->updateAxes();
}
;
	return null();
}

Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Array< ::Dynamic > points,::flash::geom::Point origin)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(points,origin);
	return result;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Polygon_obj::updateAxes( ){
{
		HX_STACK_PUSH("Polygon::updateAxes","com/haxepunk/masks/Polygon.hx",565);
		HX_STACK_THIS(this);
		HX_STACK_LINE(566)
		this->generateAxes();
		HX_STACK_LINE(567)
		this->removeDuplicateAxes();
		HX_STACK_LINE(568)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,updateAxes,(void))

Void Polygon_obj::removeDuplicateAxes( ){
{
		HX_STACK_PUSH("Polygon::removeDuplicateAxes","com/haxepunk/masks/Polygon.hx",538);
		HX_STACK_THIS(this);
		HX_STACK_LINE(539)
		int nAxes = this->_axes->length;		HX_STACK_VAR(nAxes,"nAxes");
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			Dynamic array = this->_indicesToRemove;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(540)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(542)
		{
			HX_STACK_LINE(542)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(542)
			while(((_g < nAxes))){
				HX_STACK_LINE(542)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(544)
					while(((_g1 < nAxes))){
						HX_STACK_LINE(544)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(546)
						if (((bool((i == j)) || bool((::Math_obj::max(i,j) >= nAxes))))){
							HX_STACK_LINE(546)
							continue;
						}
						HX_STACK_LINE(551)
						if (((bool((bool((this->_axes->__get(i).StaticCast< ::com::haxepunk::math::Vector >()->x == this->_axes->__get(j).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((this->_axes->__get(i).StaticCast< ::com::haxepunk::math::Vector >()->y == this->_axes->__get(j).StaticCast< ::com::haxepunk::math::Vector >()->y)))) || bool((bool((-(this->_axes->__get(i).StaticCast< ::com::haxepunk::math::Vector >()->x) == this->_axes->__get(j).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((-(this->_axes->__get(i).StaticCast< ::com::haxepunk::math::Vector >()->y) == this->_axes->__get(j).StaticCast< ::com::haxepunk::math::Vector >()->y))))))){
							HX_STACK_LINE(553)
							this->_indicesToRemove->push(j);
						}
					}
				}
			}
		}
		HX_STACK_LINE(560)
		Dynamic indexToRemove;		HX_STACK_VAR(indexToRemove,"indexToRemove");
		HX_STACK_LINE(561)
		while((((indexToRemove = this->_indicesToRemove->pop()) != null()))){
			HX_STACK_LINE(561)
			this->_axes->splice(indexToRemove,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,removeDuplicateAxes,(void))

Void Polygon_obj::generateAxes( ){
{
		HX_STACK_PUSH("Polygon::generateAxes","com/haxepunk/masks/Polygon.hx",508);
		HX_STACK_THIS(this);
		HX_STACK_LINE(509)
		this->_axes = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(510)
		this->_indicesToRemove = Array_obj< int >::__new();
		HX_STACK_LINE(512)
		Float temp;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(513)
		int nPoints = this->_points->length;		HX_STACK_VAR(nPoints,"nPoints");
		HX_STACK_LINE(514)
		::com::haxepunk::math::Vector edge;		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(515)
		int i;		HX_STACK_VAR(i,"i");
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(517)
		i = (int)0;
		HX_STACK_LINE(518)
		j = (nPoints - (int)1);
		HX_STACK_LINE(519)
		while(((i < nPoints))){
			HX_STACK_LINE(520)
			edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());
			HX_STACK_LINE(521)
			edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get(j).StaticCast< ::flash::geom::Point >()->x);
			HX_STACK_LINE(522)
			edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get(j).StaticCast< ::flash::geom::Point >()->y);
			HX_STACK_LINE(525)
			temp = edge->y;
			HX_STACK_LINE(526)
			edge->y = -(edge->x);
			HX_STACK_LINE(527)
			edge->x = temp;
			HX_STACK_LINE(528)
			edge->normalize((int)1);
			HX_STACK_LINE(530)
			this->_axes->push(edge);
			HX_STACK_LINE(532)
			j = i;
			HX_STACK_LINE(533)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,generateAxes,(void))

Void Polygon_obj::rotate( Float angleDelta){
{
		HX_STACK_PUSH("Polygon::rotate","com/haxepunk/masks/Polygon.hx",478);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angleDelta,"angleDelta");
		HX_STACK_LINE(479)
		hx::AddEq(this->_angle,angleDelta);
		HX_STACK_LINE(481)
		hx::MultEq(angleDelta,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(483)
		::flash::geom::Point p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(485)
		{
			HX_STACK_LINE(485)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(485)
			while(((_g1 < _g))){
				HX_STACK_LINE(485)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(487)
				p = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
				HX_STACK_LINE(488)
				Float dx = (p->x - this->origin->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(489)
				Float dy = (p->y - this->origin->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(491)
				Float pointAngle = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(pointAngle,"pointAngle");
				HX_STACK_LINE(492)
				Float length = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(494)
				p->x = ((::Math_obj::cos((pointAngle + angleDelta)) * length) + this->origin->x);
				HX_STACK_LINE(495)
				p->y = ((::Math_obj::sin((pointAngle + angleDelta)) * length) + this->origin->y);
			}
		}
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(498)
			while(((_g < _g1->length))){
				HX_STACK_LINE(498)
				::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(498)
				++(_g);
				HX_STACK_LINE(500)
				Float axisAngle = ::Math_obj::atan2(a->y,a->x);		HX_STACK_VAR(axisAngle,"axisAngle");
				HX_STACK_LINE(502)
				a->x = ::Math_obj::cos((axisAngle + angleDelta));
				HX_STACK_LINE(503)
				a->y = ::Math_obj::sin((axisAngle + angleDelta));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,rotate,(void))

Void Polygon_obj::update( ){
{
		HX_STACK_PUSH("Polygon::update","com/haxepunk/masks/Polygon.hx",402);
		HX_STACK_THIS(this);
		HX_STACK_LINE(403)
		this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
		HX_STACK_LINE(404)
		int projX = ::Math_obj::round(::com::haxepunk::masks::Polygon_obj::firstProj->min);		HX_STACK_VAR(projX,"projX");
		HX_STACK_LINE(405)
		this->_width = ::Math_obj::round((::com::haxepunk::masks::Polygon_obj::firstProj->max - ::com::haxepunk::masks::Polygon_obj::firstProj->min));
		HX_STACK_LINE(406)
		this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
		HX_STACK_LINE(407)
		int projY = ::Math_obj::round(::com::haxepunk::masks::Polygon_obj::secondProj->min);		HX_STACK_VAR(projY,"projY");
		HX_STACK_LINE(408)
		this->_height = ::Math_obj::round((::com::haxepunk::masks::Polygon_obj::secondProj->max - ::com::haxepunk::masks::Polygon_obj::secondProj->min));
		HX_STACK_LINE(410)
		if (((this->list != null()))){
			HX_STACK_LINE(411)
			this->list->update();
		}
		else{
			HX_STACK_LINE(415)
			if (((this->parent != null()))){
				HX_STACK_LINE(417)
				this->parent->originX = (-(this->_x) - projX);
				HX_STACK_LINE(418)
				this->parent->originY = (-(this->_y) - projY);
				HX_STACK_LINE(419)
				this->parent->width = this->_width;
				HX_STACK_LINE(420)
				this->parent->height = this->_height;
			}
		}
	}
return null();
}


Array< ::Dynamic > Polygon_obj::set_points( Array< ::Dynamic > value){
	HX_STACK_PUSH("Polygon::set_points","com/haxepunk/masks/Polygon.hx",392);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(393)
	if (((this->_points != value))){
		HX_STACK_LINE(394)
		this->_points = value;
		HX_STACK_LINE(395)
		if (((bool((this->list != null())) || bool((this->parent != null()))))){
			HX_STACK_LINE(395)
			this->updateAxes();
		}
	}
	HX_STACK_LINE(397)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_points,return )

Array< ::Dynamic > Polygon_obj::get_points( ){
	HX_STACK_PUSH("Polygon::get_points","com/haxepunk/masks/Polygon.hx",390);
	HX_STACK_THIS(this);
	HX_STACK_LINE(390)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_points,return )

Float Polygon_obj::set_angle( Float value){
	HX_STACK_PUSH("Polygon::set_angle","com/haxepunk/masks/Polygon.hx",375);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(376)
	if (((value != this->_angle))){
		HX_STACK_LINE(377)
		this->rotate((value - this->_angle));
		HX_STACK_LINE(378)
		if (((bool((this->list != null())) || bool((this->parent != null()))))){
			HX_STACK_LINE(378)
			this->update();
		}
	}
	HX_STACK_LINE(380)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_angle,return )

Float Polygon_obj::get_angle( ){
	HX_STACK_PUSH("Polygon::get_angle","com/haxepunk/masks/Polygon.hx",373);
	HX_STACK_THIS(this);
	HX_STACK_LINE(373)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_angle,return )

Void Polygon_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_PUSH("Polygon::debugDraw","com/haxepunk/masks/Polygon.hx",348);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_LINE(348)
		if (((this->parent != null()))){
			struct _Function_2_1{
				inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",351);
					{
						HX_STACK_LINE(351)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(351)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",352);
					{
						HX_STACK_LINE(352)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(352)
						return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
					}
					return null();
				}
			};
			HX_STACK_LINE(351)
			Float offsetX = ((_Function_2_1::Block(this) + this->_x) - ::com::haxepunk::HXP_obj::camera->x);		HX_STACK_VAR(offsetX,"offsetX");
			Float offsetY = ((_Function_2_2::Block(this) + this->_y) - ::com::haxepunk::HXP_obj::camera->y);		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(354)
			graphics->beginFill((int)255,.3);
			HX_STACK_LINE(356)
			graphics->moveTo((((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->y + offsetY)) * scaleY));
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(357)
				while(((_g1 < _g))){
					HX_STACK_LINE(357)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(359)
					graphics->lineTo((((this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y + offsetY)) * scaleY));
				}
			}
			HX_STACK_LINE(362)
			graphics->endFill();
			HX_STACK_LINE(365)
			graphics->drawCircle((((offsetX + this->origin->x)) * scaleX),(((offsetY + this->origin->y)) * scaleY),(int)2);
		}
	}
return null();
}


Void Polygon_obj::project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_PUSH("Polygon::project","com/haxepunk/masks/Polygon.hx",323);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(projection,"projection");
		HX_STACK_LINE(324)
		::flash::geom::Point p = this->_points->__get((int)0).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(326)
		Float min = ((axis->x * p->x) + (axis->y * p->y));		HX_STACK_VAR(min,"min");
		Float max = min;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(329)
			while(((_g1 < _g))){
				HX_STACK_LINE(329)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(331)
				p = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
				HX_STACK_LINE(332)
				Float cur = ((axis->x * p->x) + (axis->y * p->y));		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(334)
				if (((cur < min))){
					HX_STACK_LINE(335)
					min = cur;
				}
				else{
					HX_STACK_LINE(338)
					if (((cur > max))){
						HX_STACK_LINE(339)
						max = cur;
					}
				}
			}
		}
		HX_STACK_LINE(343)
		projection->min = min;
		HX_STACK_LINE(344)
		projection->max = max;
	}
return null();
}


bool Polygon_obj::collidePolygon( ::com::haxepunk::masks::Polygon other){
	HX_STACK_PUSH("Polygon::collidePolygon","com/haxepunk/masks/Polygon.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(277)
	Float offset;		HX_STACK_VAR(offset,"offset");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",278);
			{
				HX_STACK_LINE(278)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(278)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Polygon &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",278);
			{
				HX_STACK_LINE(278)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(278)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(278)
	Float offsetX = ((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other));		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",279);
			{
				HX_STACK_LINE(279)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(279)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Polygon &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",279);
			{
				HX_STACK_LINE(279)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(279)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(279)
	Float offsetY = ((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other));		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(283)
	{
		HX_STACK_LINE(283)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(283)
		while(((_g < _g1->length))){
			HX_STACK_LINE(283)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(283)
			++(_g);
			HX_STACK_LINE(285)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(286)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(289)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(290)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(291)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",294);
					{
						HX_STACK_LINE(294)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(294)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(294)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(295)
				return false;
			}
		}
	}
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(302)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = other->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(302)
		while(((_g < _g1->length))){
			HX_STACK_LINE(302)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(302)
			++(_g);
			HX_STACK_LINE(304)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(305)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(308)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(309)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(310)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",313);
					{
						HX_STACK_LINE(313)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(313)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(313)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(314)
				return false;
			}
		}
	}
	HX_STACK_LINE(318)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collidePolygon,return )

bool Polygon_obj::collideCircle( ::com::haxepunk::masks::Circle circle){
	HX_STACK_PUSH("Polygon::collideCircle","com/haxepunk/masks/Polygon.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_ARG(circle,"circle");
	HX_STACK_LINE(201)
	int edgesCrossed = (int)0;		HX_STACK_VAR(edgesCrossed,"edgesCrossed");
	HX_STACK_LINE(202)
	::flash::geom::Point p1;		HX_STACK_VAR(p1,"p1");
	::flash::geom::Point p2;		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(203)
	int i;		HX_STACK_VAR(i,"i");
	int j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(204)
	int nPoints = this->_points->length;		HX_STACK_VAR(nPoints,"nPoints");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",205);
			{
				HX_STACK_LINE(205)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(205)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(205)
	Float offsetX = (_Function_1_1::Block(this) + this->_x);		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",206);
			{
				HX_STACK_LINE(206)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(206)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(206)
	Float offsetY = (_Function_1_2::Block(this) + this->_y);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(210)
	i = (int)0;
	HX_STACK_LINE(211)
	j = (nPoints - (int)1);
	HX_STACK_LINE(212)
	while(((i < nPoints))){
		HX_STACK_LINE(213)
		p1 = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(214)
		p2 = this->_points->__get(j).StaticCast< ::flash::geom::Point >();
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",216);
				{
					HX_STACK_LINE(216)
					::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(216)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(216)
		Float distFromCenter = (((Float((((p2->x - p1->x)) * ((((circle->_y + _Function_2_1::Block(circle)) - p1->y) - offsetY)))) / Float(((p2->y - p1->y)))) + p1->x) + offsetX);		HX_STACK_VAR(distFromCenter,"distFromCenter");
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",218);
				{
					HX_STACK_LINE(218)
					::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(218)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",218);
				{
					HX_STACK_LINE(218)
					::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(218)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",219);
				{
					HX_STACK_LINE(219)
					::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(219)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(218)
		if (((bool((((p1->y + offsetY) > (circle->_y + _Function_2_2::Block(circle))) != ((p2->y + offsetY) > (circle->_y + _Function_2_3::Block(circle))))) && bool(((circle->_x + _Function_2_4::Block(circle)) < distFromCenter))))){
			HX_STACK_LINE(220)
			(edgesCrossed)++;
		}
		HX_STACK_LINE(223)
		j = i;
		HX_STACK_LINE(224)
		(i)++;
	}
	HX_STACK_LINE(227)
	if (((((int(edgesCrossed) & int((int)1))) > (int)0))){
		HX_STACK_LINE(227)
		return true;
	}
	HX_STACK_LINE(230)
	Float radiusSqr = (circle->_radius * circle->_radius);		HX_STACK_VAR(radiusSqr,"radiusSqr");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",231);
			{
				HX_STACK_LINE(231)
				::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(231)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(231)
	Float cx = (circle->_x + _Function_1_3::Block(circle));		HX_STACK_VAR(cx,"cx");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",232);
			{
				HX_STACK_LINE(232)
				::com::haxepunk::Entity _this = circle->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(232)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(232)
	Float cy = (circle->_y + _Function_1_4::Block(circle));		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(233)
	Float minDistanceSqr = (int)0;		HX_STACK_VAR(minDistanceSqr,"minDistanceSqr");
	HX_STACK_LINE(234)
	Float closestX;		HX_STACK_VAR(closestX,"closestX");
	HX_STACK_LINE(235)
	Float closestY;		HX_STACK_VAR(closestY,"closestY");
	HX_STACK_LINE(237)
	i = (int)0;
	HX_STACK_LINE(238)
	j = (nPoints - (int)1);
	HX_STACK_LINE(239)
	while(((i < nPoints))){
		HX_STACK_LINE(240)
		p1 = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(241)
		p2 = this->_points->__get(j).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(243)
		Float segmentLenSqr = ((((p1->x - p2->x)) * ((p1->x - p2->x))) + (((p1->y - p2->y)) * ((p1->y - p2->y))));		HX_STACK_VAR(segmentLenSqr,"segmentLenSqr");
		HX_STACK_LINE(246)
		Float t = (Float(((((((cx - p1->x) - offsetX)) * ((p2->x - p1->x))) + ((((cy - p1->y) - offsetY)) * ((p2->y - p1->y)))))) / Float(segmentLenSqr));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(248)
		if (((t < (int)0))){
			HX_STACK_LINE(249)
			closestX = p1->x;
			HX_STACK_LINE(250)
			closestY = p1->y;
		}
		else{
			HX_STACK_LINE(251)
			if (((t > (int)1))){
				HX_STACK_LINE(252)
				closestX = p2->x;
				HX_STACK_LINE(253)
				closestY = p2->y;
			}
			else{
				HX_STACK_LINE(255)
				closestX = (p1->x + (t * ((p2->x - p1->x))));
				HX_STACK_LINE(256)
				closestY = (p1->y + (t * ((p2->y - p1->y))));
			}
		}
		HX_STACK_LINE(258)
		hx::AddEq(closestX,offsetX);
		HX_STACK_LINE(259)
		hx::AddEq(closestY,offsetY);
		HX_STACK_LINE(261)
		minDistanceSqr = ((((cx - closestX)) * ((cx - closestX))) + (((cy - closestY)) * ((cy - closestY))));
		HX_STACK_LINE(263)
		if (((minDistanceSqr <= radiusSqr))){
			HX_STACK_LINE(263)
			return true;
		}
		HX_STACK_LINE(265)
		j = i;
		HX_STACK_LINE(266)
		(i)++;
	}
	HX_STACK_LINE(269)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideCircle,return )

bool Polygon_obj::collideGrid( ::com::haxepunk::masks::Grid grid){
	HX_STACK_PUSH("Polygon::collideGrid","com/haxepunk/masks/Polygon.hx",168);
	HX_STACK_THIS(this);
	HX_STACK_ARG(grid,"grid");
	HX_STACK_LINE(169)
	int tileW = ::Std_obj::_int(grid->_tile->width);		HX_STACK_VAR(tileW,"tileW");
	HX_STACK_LINE(170)
	int tileH = ::Std_obj::_int(grid->_tile->height);		HX_STACK_VAR(tileH,"tileH");
	HX_STACK_LINE(171)
	bool solidTile;		HX_STACK_VAR(solidTile,"solidTile");
	HX_STACK_LINE(173)
	this->_fakeEntity->width = tileW;
	HX_STACK_LINE(174)
	this->_fakeEntity->height = tileH;
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",175);
			{
				HX_STACK_LINE(175)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(175)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(175)
	this->_fakeEntity->x = _Function_1_1::Block(this);
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",176);
			{
				HX_STACK_LINE(176)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(176)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(176)
	this->_fakeEntity->y = _Function_1_2::Block(this);
	HX_STACK_LINE(177)
	this->_fakeEntity->originX = (grid->parent->originX + grid->_x);
	HX_STACK_LINE(178)
	this->_fakeEntity->originY = (grid->parent->originY + grid->_y);
	HX_STACK_LINE(180)
	this->_fakeTileHitbox->_width = tileW;
	HX_STACK_LINE(181)
	this->_fakeTileHitbox->_height = tileH;
	HX_STACK_LINE(182)
	this->_fakeTileHitbox->parent = this->_fakeEntity;
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = grid->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		while(((_g1 < _g))){
			HX_STACK_LINE(184)
			int r = (_g1)++;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(185)
			{
				HX_STACK_LINE(185)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = grid->columns;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(185)
				while(((_g3 < _g2))){
					HX_STACK_LINE(185)
					int c = (_g3)++;		HX_STACK_VAR(c,"c");
					struct _Function_5_1{
						inline static Float Block( ::com::haxepunk::masks::Grid &grid){
							HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",186);
							{
								HX_STACK_LINE(186)
								::com::haxepunk::Entity _this = grid->parent;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(186)
								return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
							}
							return null();
						}
					};
					HX_STACK_LINE(186)
					this->_fakeEntity->x = ((_Function_5_1::Block(grid) + grid->_x) + (c * tileW));
					struct _Function_5_2{
						inline static Float Block( ::com::haxepunk::masks::Grid &grid){
							HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",187);
							{
								HX_STACK_LINE(187)
								::com::haxepunk::Entity _this = grid->parent;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(187)
								return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(187)
					this->_fakeEntity->y = ((_Function_5_2::Block(grid) + grid->_y) + (r * tileH));
					HX_STACK_LINE(188)
					solidTile = grid->getTile(c,r);
					HX_STACK_LINE(190)
					if (((bool(solidTile) && bool(this->collideHitbox(this->_fakeTileHitbox))))){
						HX_STACK_LINE(190)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(193)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideGrid,return )

bool Polygon_obj::collideHitbox( ::com::haxepunk::masks::Hitbox hitbox){
	HX_STACK_PUSH("Polygon::collideHitbox","com/haxepunk/masks/Polygon.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_ARG(hitbox,"hitbox");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",112);
			{
				HX_STACK_LINE(112)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(112)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &hitbox){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",112);
			{
				HX_STACK_LINE(112)
				::com::haxepunk::Entity _this = hitbox->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(112)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",113);
			{
				HX_STACK_LINE(113)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(113)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &hitbox){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",113);
			{
				HX_STACK_LINE(113)
				::com::haxepunk::Entity _this = hitbox->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(113)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(111)
	Float offset;		HX_STACK_VAR(offset,"offset");
	Float offsetX = ((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(hitbox));		HX_STACK_VAR(offsetX,"offsetX");
	Float offsetY = ((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(hitbox));		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(116)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(117)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(119)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(120)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_5{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",123);
			{
				HX_STACK_LINE(123)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(123)
				return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(123)
	if ((!(_Function_1_5::Block()))){
		HX_STACK_LINE(124)
		return false;
	}
	HX_STACK_LINE(129)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(130)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(132)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(133)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_6{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",136);
			{
				HX_STACK_LINE(136)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(136)
				return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(136)
	if ((!(_Function_1_6::Block()))){
		HX_STACK_LINE(137)
		return false;
	}
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		while(((_g < _g1->length))){
			HX_STACK_LINE(143)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(143)
			++(_g);
			HX_STACK_LINE(145)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(146)
			hitbox->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(148)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(149)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(150)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",153);
					{
						HX_STACK_LINE(153)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(153)
						return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(153)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(154)
				return false;
			}
		}
	}
	HX_STACK_LINE(158)
	return true;
}


bool Polygon_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Polygon::collideMask","com/haxepunk/masks/Polygon.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",57);
			{
				HX_STACK_LINE(57)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(57)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",57);
			{
				HX_STACK_LINE(57)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(57)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",58);
			{
				HX_STACK_LINE(58)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(58)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",58);
			{
				HX_STACK_LINE(58)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(58)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(56)
	Float offset;		HX_STACK_VAR(offset,"offset");
	Float offsetX = ((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other));		HX_STACK_VAR(offsetX,"offsetX");
	Float offsetY = ((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other));		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(61)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(62)
	other->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(64)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(65)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_5{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",68);
			{
				HX_STACK_LINE(68)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(68)
				return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	if ((!(_Function_1_5::Block()))){
		HX_STACK_LINE(69)
		return false;
	}
	HX_STACK_LINE(74)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(75)
	other->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(77)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(78)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_6{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",81);
			{
				HX_STACK_LINE(81)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(81)
				return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(81)
	if ((!(_Function_1_6::Block()))){
		HX_STACK_LINE(82)
		return false;
	}
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		while(((_g < _g1->length))){
			HX_STACK_LINE(88)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(88)
			++(_g);
			HX_STACK_LINE(90)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(91)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(93)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(94)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(95)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",98);
					{
						HX_STACK_LINE(98)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(98)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(98)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(99)
				return false;
			}
		}
	}
	HX_STACK_LINE(103)
	return true;
}


::com::haxepunk::masks::Polygon Polygon_obj::createPolygon( hx::Null< int >  __o_sides,hx::Null< Float >  __o_radius,hx::Null< Float >  __o_angle){
int sides = __o_sides.Default(3);
Float radius = __o_radius.Default(100);
Float angle = __o_angle.Default(0);
	HX_STACK_PUSH("Polygon::createPolygon","com/haxepunk/masks/Polygon.hx",433);
	HX_STACK_ARG(sides,"sides");
	HX_STACK_ARG(radius,"radius");
	HX_STACK_ARG(angle,"angle");
{
		HX_STACK_LINE(434)
		if (((sides < (int)3))){
			HX_STACK_LINE(434)
			hx::Throw (HX_CSTRING("The polygon needs at least 3 sides."));
		}
		HX_STACK_LINE(437)
		Float rotationAngle = (Float((::Math_obj::PI * (int)2)) / Float(sides));		HX_STACK_VAR(rotationAngle,"rotationAngle");
		HX_STACK_LINE(440)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(442)
			while(((_g < sides))){
				HX_STACK_LINE(442)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(444)
				Float tempAngle = (::Math_obj::PI + (i * rotationAngle));		HX_STACK_VAR(tempAngle,"tempAngle");
				HX_STACK_LINE(445)
				::flash::geom::Point p = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(446)
				p->x = ((::Math_obj::cos(tempAngle) * radius) + radius);
				HX_STACK_LINE(447)
				p->y = ((::Math_obj::sin(tempAngle) * radius) + radius);
				HX_STACK_LINE(448)
				points->push(p);
			}
		}
		HX_STACK_LINE(452)
		::com::haxepunk::masks::Polygon poly = ::com::haxepunk::masks::Polygon_obj::__new(points,null());		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(453)
		poly->origin->x = radius;
		HX_STACK_LINE(454)
		poly->origin->y = radius;
		HX_STACK_LINE(455)
		poly->set_angle(angle);
		HX_STACK_LINE(456)
		return poly;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,createPolygon,return )

::com::haxepunk::masks::Polygon Polygon_obj::createFromArray( Array< Float > points){
	HX_STACK_PUSH("Polygon::createFromArray","com/haxepunk/masks/Polygon.hx",466);
	HX_STACK_ARG(points,"points");
	HX_STACK_LINE(467)
	Array< ::Dynamic > p = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(469)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(470)
	while(((i < points->length))){
		HX_STACK_LINE(471)
		p->push(::flash::geom::Point_obj::__new(points->__get((i)++),points->__get((i)++)));
	}
	HX_STACK_LINE(474)
	return ::com::haxepunk::masks::Polygon_obj::__new(p,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,createFromArray,return )

::com::haxepunk::math::Projection Polygon_obj::firstProj;

::com::haxepunk::math::Projection Polygon_obj::secondProj;

::com::haxepunk::math::Vector Polygon_obj::vertical;

::com::haxepunk::math::Vector Polygon_obj::horizontal;


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(_indicesToRemove,"_indicesToRemove");
	HX_MARK_MEMBER_NAME(_fakeTileHitbox,"_fakeTileHitbox");
	HX_MARK_MEMBER_NAME(_fakeEntity,"_fakeEntity");
	HX_MARK_MEMBER_NAME(_axes,"_axes");
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(origin,"origin");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_indicesToRemove,"_indicesToRemove");
	HX_VISIT_MEMBER_NAME(_fakeTileHitbox,"_fakeTileHitbox");
	HX_VISIT_MEMBER_NAME(_fakeEntity,"_fakeEntity");
	HX_VISIT_MEMBER_NAME(_axes,"_axes");
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axes") ) { return _axes; }
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"points") ) { return get_points(); }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { return vertical; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { return firstProj; }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { return secondProj; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
		if (HX_FIELD_EQ(inName,"updateAxes") ) { return updateAxes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_points") ) { return set_points_dyn(); }
		if (HX_FIELD_EQ(inName,"get_points") ) { return get_points_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fakeEntity") ) { return _fakeEntity; }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateAxes") ) { return generateAxes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPolygon") ) { return createPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidePolygon") ) { return collidePolygon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createFromArray") ) { return createFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"_fakeTileHitbox") ) { return _fakeTileHitbox; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_indicesToRemove") ) { return _indicesToRemove; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeDuplicateAxes") ) { return removeDuplicateAxes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axes") ) { _axes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { return set_points(inValue); }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { firstProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { secondProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fakeEntity") ) { _fakeEntity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fakeTileHitbox") ) { _fakeTileHitbox=inValue.Cast< ::com::haxepunk::masks::Hitbox >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_indicesToRemove") ) { _indicesToRemove=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_indicesToRemove"));
	outFields->push(HX_CSTRING("_fakeTileHitbox"));
	outFields->push(HX_CSTRING("_fakeEntity"));
	outFields->push(HX_CSTRING("_axes"));
	outFields->push(HX_CSTRING("_points"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("origin"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createPolygon"),
	HX_CSTRING("createFromArray"),
	HX_CSTRING("firstProj"),
	HX_CSTRING("secondProj"),
	HX_CSTRING("vertical"),
	HX_CSTRING("horizontal"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_indicesToRemove"),
	HX_CSTRING("_fakeTileHitbox"),
	HX_CSTRING("_fakeEntity"),
	HX_CSTRING("_axes"),
	HX_CSTRING("_points"),
	HX_CSTRING("_angle"),
	HX_CSTRING("updateAxes"),
	HX_CSTRING("removeDuplicateAxes"),
	HX_CSTRING("generateAxes"),
	HX_CSTRING("rotate"),
	HX_CSTRING("update"),
	HX_CSTRING("set_points"),
	HX_CSTRING("get_points"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("project"),
	HX_CSTRING("collidePolygon"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("origin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_MARK_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_VISIT_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

Class Polygon_obj::__mClass;

void Polygon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Polygon"), hx::TCanCast< Polygon_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Polygon_obj::__boot()
{
	firstProj= ::com::haxepunk::math::Projection_obj::__new();
	secondProj= ::com::haxepunk::math::Projection_obj::__new();
	vertical= ::com::haxepunk::math::Vector_obj::__new((int)0,(int)1);
	horizontal= ::com::haxepunk::math::Vector_obj::__new((int)1,(int)0);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
