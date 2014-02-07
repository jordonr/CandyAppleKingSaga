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
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Pixelmask
#include <com/haxepunk/masks/Pixelmask.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Grid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("Grid::new","com/haxepunk/masks/Grid.hx",36);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(37)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(40)
	if (((bool((bool((bool((width == (int)0)) || bool((height == (int)0)))) || bool((tileWidth == (int)0)))) || bool((tileHeight == (int)0))))){
		HX_STACK_LINE(41)
		hx::Throw (HX_CSTRING("Illegal Grid, sizes cannot be 0."));
	}
	HX_STACK_LINE(45)
	this->_rect = ::com::haxepunk::HXP_obj::rect;
	HX_STACK_LINE(46)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(47)
	this->_point2 = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(50)
	this->columns = ::Std_obj::_int((Float(width) / Float(tileWidth)));
	HX_STACK_LINE(51)
	this->rows = ::Std_obj::_int((Float(height) / Float(tileHeight)));
	HX_STACK_LINE(53)
	this->_tile = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);
	HX_STACK_LINE(54)
	this->_x = x;
	HX_STACK_LINE(55)
	this->_y = y;
	HX_STACK_LINE(56)
	this->_width = width;
	HX_STACK_LINE(57)
	this->_height = height;
	HX_STACK_LINE(58)
	this->usePositions = false;
	HX_STACK_LINE(61)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(62)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
	HX_STACK_LINE(63)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Pixelmask >()),this->collidePixelmask_dyn());
	HX_STACK_LINE(64)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >()),this->collideGrid_dyn());
	HX_STACK_LINE(66)
	this->data = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		while(((_g1 < _g))){
			HX_STACK_LINE(67)
			int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(69)
			this->data->push(Array_obj< bool >::__new());
		}
	}
}
;
	return null();
}

Grid_obj::~Grid_obj() { }

Dynamic Grid_obj::__CreateEmpty() { return  new Grid_obj; }
hx::ObjectPtr< Grid_obj > Grid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return result;}

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Grid_obj::squareProjection( ::flash::geom::Point axis,::flash::geom::Point point){
{
		HX_STACK_PUSH("Grid::squareProjection","com/haxepunk/masks/Grid.hx",538);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(538)
		if (((axis->x < axis->y))){
			HX_STACK_LINE(541)
			point->x = axis->x;
			HX_STACK_LINE(542)
			point->y = axis->y;
		}
		else{
			HX_STACK_LINE(546)
			point->y = axis->x;
			HX_STACK_LINE(547)
			point->x = axis->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,squareProjection,(void))

Void Grid_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_PUSH("Grid::debugDraw","com/haxepunk/masks/Grid.hx",498);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		struct _Function_1_1{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",499);
				{
					HX_STACK_LINE(499)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(499)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(499)
		::com::haxepunk::HXP_obj::point->x = ((((this->_x + _Function_1_1::Block(this)) - ::com::haxepunk::HXP_obj::camera->x)) * ::com::haxepunk::HXP_obj::screen->fullScaleX);
		struct _Function_1_2{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",500);
				{
					HX_STACK_LINE(500)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(500)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(500)
		::com::haxepunk::HXP_obj::point->y = ((((this->_y + _Function_1_2::Block(this)) - ::com::haxepunk::HXP_obj::camera->y)) * ::com::haxepunk::HXP_obj::screen->fullScaleY);
		HX_STACK_LINE(502)
		graphics->beginFill((int)255,0.3);
		HX_STACK_LINE(503)
		Float stepX = (::Std_obj::_int(this->_tile->width) * ::com::haxepunk::HXP_obj::screen->fullScaleX);		HX_STACK_VAR(stepX,"stepX");
		Float stepY = (::Std_obj::_int(this->_tile->height) * ::com::haxepunk::HXP_obj::screen->fullScaleY);		HX_STACK_VAR(stepY,"stepY");
		Float pos = (::com::haxepunk::HXP_obj::point->x + stepX);		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(507)
		{
			HX_STACK_LINE(507)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->columns;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(507)
			while(((_g1 < _g))){
				HX_STACK_LINE(507)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(509)
				graphics->drawRect(pos,::com::haxepunk::HXP_obj::point->y,(int)1,(this->_height * ::com::haxepunk::HXP_obj::screen->fullScaleX));
				HX_STACK_LINE(510)
				hx::AddEq(pos,stepX);
			}
		}
		HX_STACK_LINE(513)
		pos = (::com::haxepunk::HXP_obj::point->y + stepY);
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(514)
			while(((_g1 < _g))){
				HX_STACK_LINE(514)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(516)
				graphics->drawRect(::com::haxepunk::HXP_obj::point->x,pos,(this->_width * ::com::haxepunk::HXP_obj::screen->fullScaleY),(int)1);
				HX_STACK_LINE(517)
				hx::AddEq(pos,stepY);
			}
		}
		HX_STACK_LINE(520)
		::com::haxepunk::HXP_obj::rect->y = ::com::haxepunk::HXP_obj::point->y;
		HX_STACK_LINE(521)
		{
			HX_STACK_LINE(521)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(521)
			while(((_g1 < _g))){
				HX_STACK_LINE(521)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(523)
				::com::haxepunk::HXP_obj::rect->x = ::com::haxepunk::HXP_obj::point->x;
				HX_STACK_LINE(524)
				{
					HX_STACK_LINE(524)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(524)
					while(((_g3 < _g2))){
						HX_STACK_LINE(524)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(526)
						if ((this->data->__get(y).StaticCast< Array< bool > >()->__get(x))){
							HX_STACK_LINE(527)
							graphics->drawRect(::com::haxepunk::HXP_obj::rect->x,::com::haxepunk::HXP_obj::rect->y,stepX,stepY);
						}
						HX_STACK_LINE(530)
						hx::AddEq(::com::haxepunk::HXP_obj::rect->x,stepX);
					}
				}
				HX_STACK_LINE(532)
				hx::AddEq(::com::haxepunk::HXP_obj::rect->y,stepY);
			}
		}
		HX_STACK_LINE(534)
		graphics->endFill();
	}
return null();
}


bool Grid_obj::collideGrid( ::com::haxepunk::masks::Grid other){
	HX_STACK_PUSH("Grid::collideGrid","com/haxepunk/masks/Grid.hx",409);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",411);
			{
				HX_STACK_LINE(411)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(411)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(411)
	Float ax1 = (_Function_1_1::Block(this) + this->_x);		HX_STACK_VAR(ax1,"ax1");
	HX_STACK_LINE(412)
	Float ax2 = (ax1 + this->_width);		HX_STACK_VAR(ax2,"ax2");
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Grid &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",413);
			{
				HX_STACK_LINE(413)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(413)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(413)
	Float bx1 = (_Function_1_2::Block(other) + other->_x);		HX_STACK_VAR(bx1,"bx1");
	HX_STACK_LINE(414)
	Float bx2 = (bx1 + other->_width);		HX_STACK_VAR(bx2,"bx2");
	HX_STACK_LINE(415)
	if (((bool((ax2 < bx1)) || bool((ax1 > bx2))))){
		HX_STACK_LINE(415)
		return false;
	}
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",418);
			{
				HX_STACK_LINE(418)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(418)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(418)
	Float ay1 = (_Function_1_3::Block(this) + this->_y);		HX_STACK_VAR(ay1,"ay1");
	HX_STACK_LINE(419)
	Float ay2 = (ay1 + this->_height);		HX_STACK_VAR(ay2,"ay2");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Grid &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",420);
			{
				HX_STACK_LINE(420)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(420)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(420)
	Float by1 = (_Function_1_4::Block(other) + other->_y);		HX_STACK_VAR(by1,"by1");
	HX_STACK_LINE(421)
	Float by2 = (by1 + other->_height);		HX_STACK_VAR(by2,"by2");
	HX_STACK_LINE(422)
	if (((bool((ay2 < by1)) || bool((ay1 > by2))))){
		HX_STACK_LINE(422)
		return false;
	}
	HX_STACK_LINE(425)
	Float ox1 = (  (((ax1 > bx1))) ? Float(ax1) : Float(bx1) );		HX_STACK_VAR(ox1,"ox1");
	HX_STACK_LINE(426)
	Float oy1 = (  (((ay1 > by1))) ? Float(ay1) : Float(by1) );		HX_STACK_VAR(oy1,"oy1");
	HX_STACK_LINE(427)
	Float ox2 = (  (((ax2 < bx2))) ? Float(ax2) : Float(bx2) );		HX_STACK_VAR(ox2,"ox2");
	HX_STACK_LINE(428)
	Float oy2 = (  (((ay2 < by2))) ? Float(ay2) : Float(by2) );		HX_STACK_VAR(oy2,"oy2");
	HX_STACK_LINE(433)
	Float tw;		HX_STACK_VAR(tw,"tw");
	Float th;		HX_STACK_VAR(th,"th");
	HX_STACK_LINE(434)
	if (((this->_tile->width < other->_tile->width))){
		HX_STACK_LINE(436)
		tw = this->_tile->width;
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",437);
				{
					HX_STACK_LINE(437)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(437)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(437)
		hx::SubEq(ox1,(_Function_2_1::Block(this) + this->_x));
		HX_STACK_LINE(438)
		ox1 = (::Std_obj::_int((Float(ox1) / Float(tw))) * tw);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",439);
				{
					HX_STACK_LINE(439)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(439)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(439)
		hx::AddEq(ox1,(_Function_2_2::Block(this) + this->_x));
	}
	else{
		HX_STACK_LINE(443)
		tw = other->_tile->width;
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",444);
				{
					HX_STACK_LINE(444)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(444)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(444)
		hx::SubEq(ox1,(_Function_2_1::Block(other) + other->_x));
		HX_STACK_LINE(445)
		ox1 = (::Std_obj::_int((Float(ox1) / Float(tw))) * tw);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",446);
				{
					HX_STACK_LINE(446)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(446)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(446)
		hx::AddEq(ox1,(_Function_2_2::Block(other) + other->_x));
	}
	HX_STACK_LINE(448)
	if (((this->_tile->height < other->_tile->height))){
		HX_STACK_LINE(450)
		th = this->_tile->height;
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",451);
				{
					HX_STACK_LINE(451)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(451)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(451)
		hx::SubEq(oy1,(_Function_2_1::Block(this) + this->_y));
		HX_STACK_LINE(452)
		oy1 = (::Std_obj::_int((Float(oy1) / Float(th))) * th);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",453);
				{
					HX_STACK_LINE(453)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(453)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(453)
		hx::AddEq(oy1,(_Function_2_2::Block(this) + this->_y));
	}
	else{
		HX_STACK_LINE(457)
		th = other->_tile->height;
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",458);
				{
					HX_STACK_LINE(458)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(458)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(458)
		hx::SubEq(oy1,(_Function_2_1::Block(other) + other->_y));
		HX_STACK_LINE(459)
		oy1 = (::Std_obj::_int((Float(oy1) / Float(th))) * th);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",460);
				{
					HX_STACK_LINE(460)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(460)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(460)
		hx::AddEq(oy1,(_Function_2_2::Block(other) + other->_y));
	}
	HX_STACK_LINE(464)
	Float y = oy1;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(465)
	Float x = (int)0;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(466)
	while(((y < oy2))){
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",468);
				{
					HX_STACK_LINE(468)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(468)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(468)
		int ar1 = ::Std_obj::_int((Float((((y - _Function_2_1::Block(this)) - this->_y))) / Float(this->_tile->height)));		HX_STACK_VAR(ar1,"ar1");
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",469);
				{
					HX_STACK_LINE(469)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(469)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(469)
		int br1 = ::Std_obj::_int((Float((((y - _Function_2_2::Block(other)) - other->_y))) / Float(other->_tile->height)));		HX_STACK_VAR(br1,"br1");
		struct _Function_2_3{
			inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",470);
				{
					HX_STACK_LINE(470)
					::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(470)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(470)
		int ar2 = ::Std_obj::_int((Float(((((y - _Function_2_3::Block(this)) - this->_y) + ((th - (int)1))))) / Float(this->_tile->height)));		HX_STACK_VAR(ar2,"ar2");
		struct _Function_2_4{
			inline static Float Block( ::com::haxepunk::masks::Grid &other){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",471);
				{
					HX_STACK_LINE(471)
					::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(471)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(471)
		int br2 = ::Std_obj::_int((Float(((((y - _Function_2_4::Block(other)) - other->_y) + ((th - (int)1))))) / Float(other->_tile->height)));		HX_STACK_VAR(br2,"br2");
		HX_STACK_LINE(473)
		x = ox1;
		HX_STACK_LINE(474)
		while(((x < ox2))){
			struct _Function_3_1{
				inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",476);
					{
						HX_STACK_LINE(476)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(476)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(476)
			int ac1 = ::Std_obj::_int((Float((((x - _Function_3_1::Block(this)) - this->_x))) / Float(this->_tile->width)));		HX_STACK_VAR(ac1,"ac1");
			struct _Function_3_2{
				inline static Float Block( ::com::haxepunk::masks::Grid &other){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",477);
					{
						HX_STACK_LINE(477)
						::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(477)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(477)
			int bc1 = ::Std_obj::_int((Float((((x - _Function_3_2::Block(other)) - other->_x))) / Float(other->_tile->width)));		HX_STACK_VAR(bc1,"bc1");
			struct _Function_3_3{
				inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",478);
					{
						HX_STACK_LINE(478)
						::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(478)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(478)
			int ac2 = ::Std_obj::_int((Float(((((x - _Function_3_3::Block(this)) - this->_x) + ((tw - (int)1))))) / Float(this->_tile->width)));		HX_STACK_VAR(ac2,"ac2");
			struct _Function_3_4{
				inline static Float Block( ::com::haxepunk::masks::Grid &other){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",479);
					{
						HX_STACK_LINE(479)
						::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(479)
						return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
					}
					return null();
				}
			};
			HX_STACK_LINE(479)
			int bc2 = ::Std_obj::_int((Float(((((x - _Function_3_4::Block(other)) - other->_x) + ((tw - (int)1))))) / Float(other->_tile->width)));		HX_STACK_VAR(bc2,"bc2");
			HX_STACK_LINE(482)
			if (((bool((bool((bool((bool(this->getTile(ac1,ar1)) && bool(other->getTile(bc1,br1)))) || bool((bool(this->getTile(ac2,ar1)) && bool(other->getTile(bc2,br1)))))) || bool((bool(this->getTile(ac1,ar2)) && bool(other->getTile(bc1,br2)))))) || bool((bool(this->getTile(ac2,ar2)) && bool(other->getTile(bc2,br2))))))){
				HX_STACK_LINE(486)
				return true;
			}
			HX_STACK_LINE(489)
			hx::AddEq(x,tw);
		}
		HX_STACK_LINE(491)
		hx::AddEq(y,th);
	}
	HX_STACK_LINE(494)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collideGrid,return )

bool Grid_obj::collidePixelmask( ::com::haxepunk::masks::Pixelmask other){
	HX_STACK_PUSH("Grid::collidePixelmask","com/haxepunk/masks/Grid.hx",360);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(402)
	::haxe::Log_obj::trace(HX_CSTRING("Pixelmasks will not work in targets other than flash due to hittest not being implemented in OpenFL."),hx::SourceInfo(HX_CSTRING("Grid.hx"),402,HX_CSTRING("com.haxepunk.masks.Grid"),HX_CSTRING("collidePixelmask")));
	HX_STACK_LINE(404)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collidePixelmask,return )

bool Grid_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_PUSH("Grid::collideHitbox","com/haxepunk/masks/Grid.hx",336);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(337)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",338);
			{
				HX_STACK_LINE(338)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(338)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",338);
			{
				HX_STACK_LINE(338)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(338)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(338)
	this->_rect->x = (((_Function_1_1::Block(other) - other->_x) - _Function_1_2::Block(this)) + this->_x);
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",339);
			{
				HX_STACK_LINE(339)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(339)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",339);
			{
				HX_STACK_LINE(339)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(339)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(339)
	this->_rect->y = (((_Function_1_3::Block(other) - other->_y) - _Function_1_4::Block(this)) + this->_y);
	HX_STACK_LINE(340)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + other->_width) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(341)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + other->_height) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(342)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(343)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(345)
		while(((_g < pointY))){
			HX_STACK_LINE(345)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(347)
			{
				HX_STACK_LINE(347)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(347)
				while(((_g1 < pointX))){
					HX_STACK_LINE(347)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(349)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(350)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(355)
	return false;
}


bool Grid_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Grid::collideMask","com/haxepunk/masks/Grid.hx",312);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(313)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	struct _Function_1_1{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",314);
			{
				HX_STACK_LINE(314)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(314)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",314);
			{
				HX_STACK_LINE(314)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(314)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(314)
	this->_rect->x = (((_Function_1_1::Block(other) - other->parent->originX) - _Function_1_2::Block(this)) + this->parent->originX);
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",315);
			{
				HX_STACK_LINE(315)
				::com::haxepunk::Entity _this = other->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(315)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Grid_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Grid.hx",315);
			{
				HX_STACK_LINE(315)
				::com::haxepunk::Entity _this = __this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(315)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(315)
	this->_rect->y = (((_Function_1_3::Block(other) - other->parent->originY) - _Function_1_4::Block(this)) + this->parent->originY);
	HX_STACK_LINE(316)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + other->parent->width) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(317)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + other->parent->height) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(318)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(319)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(321)
		while(((_g < pointY))){
			HX_STACK_LINE(321)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(323)
				while(((_g1 < pointX))){
					HX_STACK_LINE(323)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(325)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(326)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(331)
	return false;
}


int Grid_obj::get_tileHeight( ){
	HX_STACK_PUSH("Grid::get_tileHeight","com/haxepunk/masks/Grid.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(293)
	return ::Std_obj::_int(this->_tile->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileHeight,return )

int Grid_obj::get_tileWidth( ){
	HX_STACK_PUSH("Grid::get_tileWidth","com/haxepunk/masks/Grid.hx",287);
	HX_STACK_THIS(this);
	HX_STACK_LINE(287)
	return ::Std_obj::_int(this->_tile->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileWidth,return )

::com::haxepunk::masks::Grid Grid_obj::clone( ){
	HX_STACK_PUSH("Grid::clone","com/haxepunk/masks/Grid.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_LINE(272)
	::com::haxepunk::masks::Grid cloneGrid = ::com::haxepunk::masks::Grid_obj::__new(this->_width,this->_height,::Std_obj::_int(this->_tile->width),::Std_obj::_int(this->_tile->height),this->_x,this->_y);		HX_STACK_VAR(cloneGrid,"cloneGrid");
	HX_STACK_LINE(273)
	{
		HX_STACK_LINE(273)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(273)
		while(((_g1 < _g))){
			HX_STACK_LINE(273)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(275)
			{
				HX_STACK_LINE(275)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(275)
				while(((_g3 < _g2))){
					HX_STACK_LINE(275)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(277)
					cloneGrid->setTile(x,y,this->getTile(x,y));
				}
			}
		}
	}
	HX_STACK_LINE(280)
	return cloneGrid;
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,clone,return )

::String Grid_obj::saveToString( ::String __o_columnSep,::String __o_rowSep,::String __o_solid,::String __o_empty){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
::String solid = __o_solid.Default(HX_CSTRING("true"));
::String empty = __o_empty.Default(HX_CSTRING("false"));
	HX_STACK_PUSH("Grid::saveToString","com/haxepunk/masks/Grid.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_ARG(columnSep,"columnSep");
	HX_STACK_ARG(rowSep,"rowSep");
	HX_STACK_ARG(solid,"solid");
	HX_STACK_ARG(empty,"empty");
{
		HX_STACK_LINE(251)
		::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
		int x;		HX_STACK_VAR(x,"x");
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(253)
		{
			HX_STACK_LINE(253)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(253)
			while(((_g1 < _g))){
				HX_STACK_LINE(253)
				int y1 = (_g1)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(255)
				{
					HX_STACK_LINE(255)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(255)
					while(((_g3 < _g2))){
						HX_STACK_LINE(255)
						int x1 = (_g3)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(257)
						hx::AddEq(s,::Std_obj::string((  ((this->getTileXY(x1,y1))) ? Dynamic(solid) : Dynamic(empty) )));
						HX_STACK_LINE(258)
						if (((x1 != (this->columns - (int)1)))){
							HX_STACK_LINE(258)
							hx::AddEq(s,columnSep);
						}
					}
				}
				HX_STACK_LINE(260)
				if (((y1 != (this->rows - (int)1)))){
					HX_STACK_LINE(260)
					hx::AddEq(s,rowSep);
				}
			}
		}
		HX_STACK_LINE(262)
		return s;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,saveToString,return )

Void Grid_obj::loadFrom2DArray( Array< ::Dynamic > array){
{
		HX_STACK_PUSH("Grid::loadFrom2DArray","com/haxepunk/masks/Grid.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(232)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = array->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		while(((_g1 < _g))){
			HX_STACK_LINE(232)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(234)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = array->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(234)
				while(((_g3 < _g2))){
					HX_STACK_LINE(234)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(236)
					this->setTile(x,y,(array->__get(y).StaticCast< Array< int > >()->__get(x) > (int)0));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,loadFrom2DArray,(void))

Void Grid_obj::loadFromString( ::String str,::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
	HX_STACK_PUSH("Grid::loadFromString","com/haxepunk/masks/Grid.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_ARG(str,"str");
	HX_STACK_ARG(columnSep,"columnSep");
	HX_STACK_ARG(rowSep,"rowSep");
{
		HX_STACK_LINE(210)
		Array< ::String > row = str.split(rowSep);		HX_STACK_VAR(row,"row");
		int rows = row->length;		HX_STACK_VAR(rows,"rows");
		Array< ::String > col;		HX_STACK_VAR(col,"col");
		int cols;		HX_STACK_VAR(cols,"cols");
		int x;		HX_STACK_VAR(x,"x");
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(213)
			while(((_g < rows))){
				HX_STACK_LINE(213)
				int y1 = (_g)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(215)
				if (((row->__get(y1) == HX_CSTRING("")))){
					HX_STACK_LINE(215)
					continue;
				}
				HX_STACK_LINE(216)
				col = row->__get(y1).split(columnSep);
				HX_STACK_LINE(217)
				cols = col->length;
				HX_STACK_LINE(218)
				{
					HX_STACK_LINE(218)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(218)
					while(((_g1 < cols))){
						HX_STACK_LINE(218)
						int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(220)
						if (((col->__get(x1) == HX_CSTRING("")))){
							HX_STACK_LINE(220)
							continue;
						}
						HX_STACK_LINE(221)
						this->setTile(x1,y1,(::Std_obj::parseInt(col->__get(x1)) > (int)0));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,loadFromString,(void))

Void Grid_obj::clearRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_PUSH("Grid::clearRect","com/haxepunk/masks/Grid.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
{
		HX_STACK_LINE(198)
		this->setRect(column,row,width,height,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,clearRect,(void))

Void Grid_obj::setRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
bool solid = __o_solid.Default(true);
	HX_STACK_PUSH("Grid::setRect","com/haxepunk/masks/Grid.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(solid,"solid");
{
		HX_STACK_LINE(173)
		if ((this->usePositions)){
			HX_STACK_LINE(175)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(176)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
			HX_STACK_LINE(177)
			width = ::Std_obj::_int((Float(width) / Float(this->_tile->width)));
			HX_STACK_LINE(178)
			height = ::Std_obj::_int((Float(height) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			int _g1 = row;		HX_STACK_VAR(_g1,"_g1");
			int _g = (row + height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(181)
			while(((_g1 < _g))){
				HX_STACK_LINE(181)
				int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(183)
				{
					HX_STACK_LINE(183)
					int _g3 = column;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = (column + width);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(183)
					while(((_g3 < _g2))){
						HX_STACK_LINE(183)
						int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(185)
						this->setTileXY(xx,yy,solid);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Grid_obj,setRect,(void))

bool Grid_obj::getTileXY( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_PUSH("Grid::getTileXY","com/haxepunk/masks/Grid.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(159)
		if ((!(((  (((bool((bool((bool((x < (int)0)) || bool((x > (this->columns - (int)1))))) || bool((y < (int)0)))) || bool((y > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(159)
			return false;
		}
		HX_STACK_LINE(160)
		return this->data->__get(y).StaticCast< Array< bool > >()->__get(x);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTileXY,return )

bool Grid_obj::getTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("Grid::getTile","com/haxepunk/masks/Grid.hx",141);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(142)
		if ((this->usePositions)){
			HX_STACK_LINE(144)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(145)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(147)
		return this->getTileXY(column,row);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTile,return )

bool Grid_obj::checkTile( int column,int row){
	HX_STACK_PUSH("Grid::checkTile","com/haxepunk/masks/Grid.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_LINE(119)
	if (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))){
		HX_STACK_LINE(122)
		return false;
	}
	else{
		HX_STACK_LINE(129)
		return true;
	}
	HX_STACK_LINE(119)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,checkTile,return )

Void Grid_obj::clearTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("Grid::clearTile","com/haxepunk/masks/Grid.hx",114);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(114)
		this->setTile(column,row,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,clearTile,(void))

Void Grid_obj::setTileXY( hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< bool >  __o_solid){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
bool solid = __o_solid.Default(true);
	HX_STACK_PUSH("Grid::setTileXY","com/haxepunk/masks/Grid.hx",103);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solid,"solid");
{
		HX_STACK_LINE(104)
		if ((!(((  (((bool((bool((bool((x < (int)0)) || bool((x > (this->columns - (int)1))))) || bool((y < (int)0)))) || bool((y > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(104)
			return null();
		}
		HX_STACK_LINE(105)
		this->data->__get(y).StaticCast< Array< bool > >()[x] = solid;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTileXY,(void))

Void Grid_obj::setTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
bool solid = __o_solid.Default(true);
	HX_STACK_PUSH("Grid::setTile","com/haxepunk/masks/Grid.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(solid,"solid");
{
		HX_STACK_LINE(87)
		if ((this->usePositions)){
			HX_STACK_LINE(89)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(90)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(92)
		this->setTileXY(column,row,solid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTile,(void))


Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(usePositions,"usePositions");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(usePositions,"usePositions");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Grid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"setRect") ) { return setRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return get_tileWidth(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileXY") ) { return getTileXY_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTile") ) { return checkTile_dyn(); }
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileXY") ) { return setTileXY_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return get_tileHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"saveToString") ) { return saveToString_dyn(); }
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFromString") ) { return loadFromString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadFrom2DArray") ) { return loadFrom2DArray_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"squareProjection") ) { return squareProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Grid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_point2"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_tile"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("usePositions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_point2"),
	HX_CSTRING("_point"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_tile"),
	HX_CSTRING("squareProjection"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("collidePixelmask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("data"),
	HX_CSTRING("rows"),
	HX_CSTRING("columns"),
	HX_CSTRING("get_tileHeight"),
	HX_CSTRING("get_tileWidth"),
	HX_CSTRING("clone"),
	HX_CSTRING("saveToString"),
	HX_CSTRING("loadFrom2DArray"),
	HX_CSTRING("loadFromString"),
	HX_CSTRING("clearRect"),
	HX_CSTRING("setRect"),
	HX_CSTRING("getTileXY"),
	HX_CSTRING("getTile"),
	HX_CSTRING("checkTile"),
	HX_CSTRING("clearTile"),
	HX_CSTRING("setTileXY"),
	HX_CSTRING("setTile"),
	HX_CSTRING("usePositions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Grid"), hx::TCanCast< Grid_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Grid_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
