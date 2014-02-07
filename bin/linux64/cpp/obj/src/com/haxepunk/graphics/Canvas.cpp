#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Canvas_obj::__construct(int width,int height)
{
HX_STACK_PUSH("Canvas::new","com/haxepunk/graphics/Canvas.hx",16);
{
	HX_STACK_LINE(365)
	this->_maxHeight = (int)4000;
	HX_STACK_LINE(364)
	this->_maxWidth = (int)4000;
	HX_STACK_LINE(50)
	super::__construct();
	HX_STACK_LINE(51)
	this->_color = (int)16777215;
	HX_STACK_LINE(52)
	this->_red = this->_green = this->_blue = (int)1;
	HX_STACK_LINE(53)
	this->_alpha = (int)1;
	HX_STACK_LINE(54)
	this->_graphics = ::com::haxepunk::HXP_obj::sprite->get_graphics();
	HX_STACK_LINE(55)
	this->_matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(56)
	this->_rect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(57)
	this->_colorTransform = ::flash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(58)
	this->_buffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(59)
	this->angle = (int)0;
	HX_STACK_LINE(60)
	this->scale = this->scaleX = this->scaleY = (int)1;
	HX_STACK_LINE(62)
	this->_width = width;
	HX_STACK_LINE(63)
	this->_height = height;
	HX_STACK_LINE(65)
	if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::BUFFER))){
		HX_STACK_LINE(67)
		this->_refWidth = ::Math_obj::ceil((Float(width) / Float(this->_maxWidth)));
		HX_STACK_LINE(68)
		this->_refHeight = ::Math_obj::ceil((Float(height) / Float(this->_maxHeight)));
		HX_STACK_LINE(69)
		this->_ref = ::com::haxepunk::HXP_obj::createBitmap(this->_refWidth,this->_refHeight,null(),null());
		HX_STACK_LINE(70)
		int x = (int)0;		HX_STACK_VAR(x,"x");
		int y = (int)0;		HX_STACK_VAR(y,"y");
		int w;		HX_STACK_VAR(w,"w");
		int h;		HX_STACK_VAR(h,"h");
		int i = (int)0;		HX_STACK_VAR(i,"i");
		int ww = hx::Mod(this->_width,this->_maxWidth);		HX_STACK_VAR(ww,"ww");
		int hh = hx::Mod(this->_height,this->_maxHeight);		HX_STACK_VAR(hh,"hh");
		HX_STACK_LINE(73)
		if (((ww == (int)0))){
			HX_STACK_LINE(73)
			ww = this->_maxWidth;
		}
		HX_STACK_LINE(74)
		if (((hh == (int)0))){
			HX_STACK_LINE(74)
			hh = this->_maxHeight;
		}
		HX_STACK_LINE(75)
		while(((y < this->_refHeight))){
			HX_STACK_LINE(77)
			h = (  (((y < (this->_refHeight - (int)1)))) ? int(this->_maxHeight) : int(hh) );
			HX_STACK_LINE(78)
			while(((x < this->_refWidth))){
				HX_STACK_LINE(80)
				w = (  (((x < (this->_refWidth - (int)1)))) ? int(this->_maxWidth) : int(ww) );
				HX_STACK_LINE(81)
				this->_ref->setPixel(x,y,i);
				HX_STACK_LINE(82)
				this->_buffers[i] = ::com::haxepunk::HXP_obj::createBitmap(w,h,true,null());
				HX_STACK_LINE(83)
				(i)++;
				HX_STACK_LINE(83)
				(x)++;
			}
			HX_STACK_LINE(85)
			x = (int)0;
			HX_STACK_LINE(85)
			(y)++;
		}
	}
}
;
	return null();
}

Canvas_obj::~Canvas_obj() { }

Dynamic Canvas_obj::__CreateEmpty() { return  new Canvas_obj; }
hx::ObjectPtr< Canvas_obj > Canvas_obj::__new(int width,int height)
{  hx::ObjectPtr< Canvas_obj > result = new Canvas_obj();
	result->__construct(width,height);
	return result;}

Dynamic Canvas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Canvas_obj > result = new Canvas_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Canvas_obj::get_height( ){
	HX_STACK_PUSH("Canvas::get_height","com/haxepunk/graphics/Canvas.hx",358);
	HX_STACK_THIS(this);
	HX_STACK_LINE(358)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_height,return )

int Canvas_obj::get_width( ){
	HX_STACK_PUSH("Canvas::get_width","com/haxepunk/graphics/Canvas.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_LINE(352)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_width,return )

Void Canvas_obj::shift( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_PUSH("Canvas::shift","com/haxepunk/graphics/Canvas.hx",344);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(344)
		this->drawGraphic(x,y,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Canvas_obj,shift,(void))

Float Canvas_obj::set_alpha( Float value){
	HX_STACK_PUSH("Canvas::set_alpha","com/haxepunk/graphics/Canvas.hx",320);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(321)
	if (((value < (int)0))){
		HX_STACK_LINE(321)
		value = (int)0;
	}
	HX_STACK_LINE(322)
	if (((value > (int)1))){
		HX_STACK_LINE(322)
		value = (int)1;
	}
	HX_STACK_LINE(323)
	if (((this->_alpha == value))){
		HX_STACK_LINE(323)
		return this->_alpha;
	}
	HX_STACK_LINE(324)
	this->_alpha = value;
	HX_STACK_LINE(325)
	if (((bool((this->_alpha == (int)1)) && bool((this->_color == (int)16777215))))){
		HX_STACK_LINE(327)
		this->_tint = null();
		HX_STACK_LINE(328)
		return this->_alpha;
	}
	HX_STACK_LINE(330)
	this->_tint = this->_colorTransform;
	HX_STACK_LINE(331)
	this->_tint->redMultiplier = this->_red;
	HX_STACK_LINE(332)
	this->_tint->greenMultiplier = this->_green;
	HX_STACK_LINE(333)
	this->_tint->blueMultiplier = this->_blue;
	HX_STACK_LINE(334)
	this->_tint->alphaMultiplier = this->_alpha;
	HX_STACK_LINE(335)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_alpha,return )

Float Canvas_obj::get_alpha( ){
	HX_STACK_PUSH("Canvas::get_alpha","com/haxepunk/graphics/Canvas.hx",318);
	HX_STACK_THIS(this);
	HX_STACK_LINE(318)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_alpha,return )

int Canvas_obj::set_color( int value){
	HX_STACK_PUSH("Canvas::set_color","com/haxepunk/graphics/Canvas.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(294)
	hx::ModEq(value,(int)16777215);
	HX_STACK_LINE(295)
	if (((this->_color == value))){
		HX_STACK_LINE(295)
		return this->_color;
	}
	HX_STACK_LINE(296)
	this->_color = value;
	HX_STACK_LINE(297)
	this->_red = (Float(((int((int(this->get_color()) >> int((int)16))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(298)
	this->_green = (Float(((int((int(this->get_color()) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(299)
	this->_blue = (Float(((int(this->get_color()) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(301)
	if (((bool((this->_alpha == (int)1)) && bool((this->_color == (int)16777215))))){
		HX_STACK_LINE(303)
		this->_tint = null();
		HX_STACK_LINE(304)
		return this->_color;
	}
	HX_STACK_LINE(306)
	this->_tint = this->_colorTransform;
	HX_STACK_LINE(307)
	this->_tint->redMultiplier = this->_red;
	HX_STACK_LINE(308)
	this->_tint->greenMultiplier = this->_green;
	HX_STACK_LINE(309)
	this->_tint->blueMultiplier = this->_blue;
	HX_STACK_LINE(310)
	this->_tint->alphaMultiplier = this->_alpha;
	HX_STACK_LINE(311)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_color,return )

int Canvas_obj::get_color( ){
	HX_STACK_PUSH("Canvas::get_color","com/haxepunk/graphics/Canvas.hx",291);
	HX_STACK_THIS(this);
	HX_STACK_LINE(291)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_color,return )

Void Canvas_obj::drawGraphic( int x,int y,::com::haxepunk::Graphic source){
{
		HX_STACK_PUSH("Canvas::drawGraphic","com/haxepunk/graphics/Canvas.hx",271);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(source,"source");
		HX_STACK_LINE(272)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(273)
			while(((_g < _g1->length))){
				HX_STACK_LINE(273)
				::flash::display::BitmapData buffer = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(273)
				++(_g);
				HX_STACK_LINE(275)
				this->_point->x = (x - xx);
				HX_STACK_LINE(276)
				this->_point->y = (y - yy);
				HX_STACK_LINE(277)
				source->render(buffer,this->_point,::com::haxepunk::HXP_obj::zero);
				HX_STACK_LINE(278)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(279)
				if (((xx >= this->_width))){
					HX_STACK_LINE(281)
					xx = (int)0;
					HX_STACK_LINE(282)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,drawGraphic,(void))

Void Canvas_obj::fillTexture( ::flash::geom::Rectangle rect,::flash::display::BitmapData texture){
{
		HX_STACK_PUSH("Canvas::fillTexture","com/haxepunk/graphics/Canvas.hx",246);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rect,"rect");
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(247)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(248)
			while(((_g < _g1->length))){
				HX_STACK_LINE(248)
				::flash::display::BitmapData buffer = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(248)
				++(_g);
				HX_STACK_LINE(250)
				this->_graphics->clear();
				HX_STACK_LINE(251)
				this->_graphics->beginBitmapFill(texture,null(),null(),null());
				HX_STACK_LINE(252)
				this->_graphics->drawRect((rect->x - xx),(rect->y - yy),rect->width,rect->height);
				HX_STACK_LINE(253)
				buffer->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
				HX_STACK_LINE(254)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(255)
				if (((xx >= this->_width))){
					HX_STACK_LINE(257)
					xx = (int)0;
					HX_STACK_LINE(258)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
		HX_STACK_LINE(261)
		this->_graphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Canvas_obj,fillTexture,(void))

Void Canvas_obj::drawRect( ::flash::geom::Rectangle rect,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_PUSH("Canvas::drawRect","com/haxepunk/graphics/Canvas.hx",203);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(204)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		::flash::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(205)
		if (((alpha >= (int)1))){
			HX_STACK_LINE(207)
			this->_rect->width = rect->width;
			HX_STACK_LINE(208)
			this->_rect->height = rect->height;
			HX_STACK_LINE(210)
			{
				HX_STACK_LINE(210)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(210)
				while(((_g < _g1->length))){
					HX_STACK_LINE(210)
					::flash::display::BitmapData buffer1 = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(210)
					++(_g);
					HX_STACK_LINE(212)
					this->_rect->x = (rect->x - xx);
					HX_STACK_LINE(213)
					this->_rect->y = (rect->y - yy);
					HX_STACK_LINE(214)
					buffer1->fillRect(this->_rect,(int((int)-16777216) | int(color)));
					HX_STACK_LINE(215)
					hx::AddEq(xx,this->_maxWidth);
					HX_STACK_LINE(216)
					if (((xx >= this->_width))){
						HX_STACK_LINE(218)
						xx = (int)0;
						HX_STACK_LINE(219)
						hx::AddEq(yy,this->_maxHeight);
					}
				}
			}
			HX_STACK_LINE(222)
			return null();
		}
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(224)
			while(((_g < _g1->length))){
				HX_STACK_LINE(224)
				::flash::display::BitmapData buffer1 = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(224)
				++(_g);
				HX_STACK_LINE(226)
				this->_graphics->clear();
				HX_STACK_LINE(227)
				this->_graphics->beginFill(color,alpha);
				HX_STACK_LINE(228)
				this->_graphics->drawRect((rect->x - xx),(rect->y - yy),rect->width,rect->height);
				HX_STACK_LINE(229)
				buffer1->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
				HX_STACK_LINE(230)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(231)
				if (((xx >= this->_width))){
					HX_STACK_LINE(233)
					xx = (int)0;
					HX_STACK_LINE(234)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
		HX_STACK_LINE(237)
		this->_graphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,drawRect,(void))

Void Canvas_obj::fill( ::flash::geom::Rectangle rect,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_PUSH("Canvas::fill","com/haxepunk/graphics/Canvas.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(176)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		::flash::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(177)
		this->_rect->width = rect->width;
		HX_STACK_LINE(178)
		this->_rect->height = rect->height;
		HX_STACK_LINE(179)
		if (((alpha >= (int)1))){
			HX_STACK_LINE(179)
			hx::OrEq(color,(int)-16777216);
		}
		else{
			HX_STACK_LINE(180)
			if (((alpha <= (int)0))){
				HX_STACK_LINE(180)
				color = (int)0;
			}
			else{
				HX_STACK_LINE(181)
				color = (int((int(::Std_obj::_int((alpha * (int)255))) << int((int)24))) | int((int((int)16777215) & int(color))));
			}
		}
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(182)
			while(((_g < _g1->length))){
				HX_STACK_LINE(182)
				::flash::display::BitmapData buffer1 = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(182)
				++(_g);
				HX_STACK_LINE(184)
				this->_rect->x = (rect->x - xx);
				HX_STACK_LINE(185)
				this->_rect->y = (rect->y - yy);
				HX_STACK_LINE(186)
				buffer1->fillRect(this->_rect,color);
				HX_STACK_LINE(187)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(188)
				if (((xx >= this->_width))){
					HX_STACK_LINE(190)
					xx = (int)0;
					HX_STACK_LINE(191)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,fill,(void))

Void Canvas_obj::draw( int x,int y,::flash::display::BitmapData source,::flash::geom::Rectangle rect){
{
		HX_STACK_PUSH("Canvas::draw","com/haxepunk/graphics/Canvas.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(source,"source");
		HX_STACK_ARG(rect,"rect");
		HX_STACK_LINE(153)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(154)
			while(((_g < _g1->length))){
				HX_STACK_LINE(154)
				::flash::display::BitmapData buffer = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(154)
				++(_g);
				HX_STACK_LINE(156)
				this->_point->x = (x - xx);
				HX_STACK_LINE(157)
				this->_point->y = (y - yy);
				HX_STACK_LINE(158)
				buffer->copyPixels(source,(  (((rect != null()))) ? ::flash::geom::Rectangle(rect) : ::flash::geom::Rectangle(source->get_rect()) ),this->_point,null(),null(),true);
				HX_STACK_LINE(159)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(160)
				if (((xx >= this->_width))){
					HX_STACK_LINE(162)
					xx = (int)0;
					HX_STACK_LINE(163)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Canvas_obj,draw,(void))

Void Canvas_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_PUSH("Canvas::render","com/haxepunk/graphics/Canvas.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(93)
		Float sx = (this->scale * this->scaleX);		HX_STACK_VAR(sx,"sx");
		Float sy = (this->scale * this->scaleY);		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(97)
		this->_point->x = ((point->x + this->x) - (camera->x * this->scrollX));
		HX_STACK_LINE(98)
		this->_point->y = ((point->y + this->y) - (camera->y * this->scrollY));
		HX_STACK_LINE(100)
		this->_rect->x = this->_rect->y = (int)0;
		HX_STACK_LINE(101)
		this->_rect->width = this->_maxWidth;
		HX_STACK_LINE(102)
		this->_rect->height = this->_maxHeight;
		HX_STACK_LINE(105)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		::flash::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		Float px = this->_point->x;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(106)
		target->lock();
		HX_STACK_LINE(107)
		while(((yy < this->_refHeight))){
			HX_STACK_LINE(109)
			while(((xx < this->_refWidth))){
				HX_STACK_LINE(111)
				buffer = this->_buffers->__get(this->_ref->getPixel(xx,yy)).StaticCast< ::flash::display::BitmapData >();
				HX_STACK_LINE(113)
				if (((bool((bool((bool((bool((this->angle == (int)0)) && bool((sx == (int)1)))) && bool((sy == (int)1)))) && bool((this->blend == null())))) && bool((this->_tint == null()))))){
					HX_STACK_LINE(115)
					this->_rect->width = buffer->get_width();
					HX_STACK_LINE(116)
					this->_rect->height = buffer->get_height();
					HX_STACK_LINE(117)
					target->copyPixels(buffer,this->_rect,this->_point,null(),null(),true);
				}
				else{
					HX_STACK_LINE(122)
					this->_matrix->b = this->_matrix->c = (int)0;
					HX_STACK_LINE(123)
					this->_matrix->a = sx;
					HX_STACK_LINE(124)
					this->_matrix->d = sy;
					HX_STACK_LINE(125)
					this->_matrix->tx = this->_matrix->ty = (int)0;
					HX_STACK_LINE(126)
					if (((this->angle != (int)0))){
						HX_STACK_LINE(126)
						this->_matrix->rotate((this->angle * ((Float(::Math_obj::PI) / Float((int)-180)))));
					}
					HX_STACK_LINE(127)
					hx::AddEq(this->_matrix->tx,this->_point->x);
					HX_STACK_LINE(128)
					hx::AddEq(this->_matrix->ty,this->_point->y);
					HX_STACK_LINE(130)
					target->draw(buffer,this->_matrix,this->_tint,this->blend,null(),null());
				}
				HX_STACK_LINE(133)
				hx::AddEq(this->_point->x,this->_maxWidth);
				HX_STACK_LINE(134)
				(xx)++;
			}
			HX_STACK_LINE(136)
			this->_point->x = px;
			HX_STACK_LINE(137)
			hx::AddEq(this->_point->y,this->_maxHeight);
			HX_STACK_LINE(138)
			xx = (int)0;
			HX_STACK_LINE(139)
			(yy)++;
		}
		HX_STACK_LINE(141)
		target->unlock(null());
	}
return null();
}



Canvas_obj::Canvas_obj()
{
}

void Canvas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Canvas);
	HX_MARK_MEMBER_NAME(_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_refHeight,"_refHeight");
	HX_MARK_MEMBER_NAME(_refWidth,"_refWidth");
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_tint,"_tint");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_MARK_MEMBER_NAME(_maxWidth,"_maxWidth");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(blend,"blend");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Canvas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_refHeight,"_refHeight");
	HX_VISIT_MEMBER_NAME(_refWidth,"_refWidth");
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_tint,"_tint");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_VISIT_MEMBER_NAME(_maxWidth,"_maxWidth");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Canvas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return _ref; }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"_tint") ) { return _tint; }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		if (HX_FIELD_EQ(inName,"_refWidth") ) { return _refWidth; }
		if (HX_FIELD_EQ(inName,"_maxWidth") ) { return _maxWidth; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_refHeight") ) { return _refHeight; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { return _maxHeight; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawGraphic") ) { return drawGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"fillTexture") ) { return fillTexture_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Canvas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tint") ) { _tint=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refWidth") ) { _refWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxWidth") ) { _maxWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_refHeight") ) { _refHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { _maxHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Canvas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_graphics"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_refHeight"));
	outFields->push(HX_CSTRING("_refWidth"));
	outFields->push(HX_CSTRING("_ref"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_tint"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_maxHeight"));
	outFields->push(HX_CSTRING("_maxWidth"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_buffers"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("blend"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_graphics"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_refHeight"),
	HX_CSTRING("_refWidth"),
	HX_CSTRING("_ref"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_green"),
	HX_CSTRING("_red"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_tint"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_color"),
	HX_CSTRING("_maxHeight"),
	HX_CSTRING("_maxWidth"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("_buffers"),
	HX_CSTRING("get_height"),
	HX_CSTRING("height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("width"),
	HX_CSTRING("shift"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("drawGraphic"),
	HX_CSTRING("fillTexture"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("fill"),
	HX_CSTRING("draw"),
	HX_CSTRING("render"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("scale"),
	HX_CSTRING("angle"),
	HX_CSTRING("blend"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Canvas_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Canvas_obj::__mClass,"__mClass");
};

Class Canvas_obj::__mClass;

void Canvas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Canvas"), hx::TCanCast< Canvas_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Canvas_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
