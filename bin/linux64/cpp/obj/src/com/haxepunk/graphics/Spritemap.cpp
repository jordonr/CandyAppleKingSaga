#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
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
#ifndef INCLUDED_com_haxepunk_graphics_Animation
#include <com/haxepunk/graphics/Animation.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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
namespace graphics{

Void Spritemap_obj::__construct(Dynamic source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,Dynamic cbFunc,::String __o_name)
{
HX_STACK_PUSH("Spritemap::new","com/haxepunk/graphics/Spritemap.hx",43);
int frameWidth = __o_frameWidth.Default(0);
int frameHeight = __o_frameHeight.Default(0);
::String name = __o_name.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(44)
	this->complete = true;
	HX_STACK_LINE(45)
	this->rate = (int)1;
	HX_STACK_LINE(46)
	this->_anims = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(47)
	this->_timer = this->_frame = (int)0;
	HX_STACK_LINE(49)
	this->_rect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,frameWidth,frameHeight);
	HX_STACK_LINE(50)
	if ((::Std_obj::is(source,hx::ClassOf< ::com::haxepunk::graphics::atlas::TileAtlas >()))){
		HX_STACK_LINE(52)
		this->blit = false;
		HX_STACK_LINE(53)
		this->_atlas = hx::TCast< com::haxepunk::graphics::atlas::TileAtlas >::cast(source);
		HX_STACK_LINE(54)
		this->_region = this->_atlas->getRegion(this->_frame);
	}
	else{
		HX_STACK_LINE(56)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(58)
			this->blit = false;
			HX_STACK_LINE(59)
			this->_atlas = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(source,frameWidth,frameHeight,null(),null());
			HX_STACK_LINE(60)
			this->_region = this->_atlas->getRegion(this->_frame);
		}
	}
	HX_STACK_LINE(63)
	super::__construct(source,this->_rect,name);
	HX_STACK_LINE(65)
	if ((this->blit)){
		HX_STACK_LINE(67)
		this->_width = this->_source->get_width();
		HX_STACK_LINE(68)
		this->_height = this->_source->get_height();
	}
	else{
		HX_STACK_LINE(72)
		this->_width = ::Std_obj::_int(this->_atlas->get_width());
		HX_STACK_LINE(73)
		this->_height = ::Std_obj::_int(this->_atlas->get_height());
	}
	HX_STACK_LINE(75)
	if (((frameWidth == (int)0))){
		HX_STACK_LINE(75)
		this->_rect->width = this->_width;
	}
	HX_STACK_LINE(76)
	if (((frameHeight == (int)0))){
		HX_STACK_LINE(76)
		this->_rect->height = this->_height;
	}
	HX_STACK_LINE(78)
	if (((bool((hx::Mod(this->_width,this->_rect->width) != (int)0)) || bool((hx::Mod(this->_height,this->_rect->height) != (int)0))))){
		HX_STACK_LINE(79)
		hx::Throw (HX_CSTRING("Source image width and height should be multiples of the frame width and height."));
	}
	HX_STACK_LINE(81)
	this->_columns = ::Math_obj::ceil((Float(this->_width) / Float(this->_rect->width)));
	HX_STACK_LINE(82)
	this->_rows = ::Math_obj::ceil((Float(this->_height) / Float(this->_rect->height)));
	HX_STACK_LINE(83)
	this->_frameCount = (this->_columns * this->_rows);
	HX_STACK_LINE(84)
	this->callbackFunc = cbFunc;
	HX_STACK_LINE(86)
	this->updateBuffer(null());
	HX_STACK_LINE(87)
	this->active = true;
}
;
	return null();
}

Spritemap_obj::~Spritemap_obj() { }

Dynamic Spritemap_obj::__CreateEmpty() { return  new Spritemap_obj; }
hx::ObjectPtr< Spritemap_obj > Spritemap_obj::__new(Dynamic source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,Dynamic cbFunc,::String __o_name)
{  hx::ObjectPtr< Spritemap_obj > result = new Spritemap_obj();
	result->__construct(source,__o_frameWidth,__o_frameHeight,cbFunc,__o_name);
	return result;}

Dynamic Spritemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spritemap_obj > result = new Spritemap_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::String Spritemap_obj::get_currentAnim( ){
	HX_STACK_PUSH("Spritemap::get_currentAnim","com/haxepunk/graphics/Spritemap.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_LINE(303)
	return (  (((this->_anim != null()))) ? ::String(this->_anim->name) : ::String(HX_CSTRING("")) );
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_currentAnim,return )

int Spritemap_obj::get_rows( ){
	HX_STACK_PUSH("Spritemap::get_rows","com/haxepunk/graphics/Spritemap.hx",297);
	HX_STACK_THIS(this);
	HX_STACK_LINE(297)
	return this->_rows;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_rows,return )

int Spritemap_obj::get_columns( ){
	HX_STACK_PUSH("Spritemap::get_columns","com/haxepunk/graphics/Spritemap.hx",291);
	HX_STACK_THIS(this);
	HX_STACK_LINE(291)
	return this->_columns;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_columns,return )

int Spritemap_obj::get_frameCount( ){
	HX_STACK_PUSH("Spritemap::get_frameCount","com/haxepunk/graphics/Spritemap.hx",285);
	HX_STACK_THIS(this);
	HX_STACK_LINE(285)
	return this->_frameCount;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_frameCount,return )

int Spritemap_obj::set_index( int value){
	HX_STACK_PUSH("Spritemap::set_index","com/haxepunk/graphics/Spritemap.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(272)
	if (((this->_anim == null()))){
		HX_STACK_LINE(272)
		return (int)0;
	}
	HX_STACK_LINE(273)
	hx::ModEq(value,this->_anim->frameCount);
	HX_STACK_LINE(274)
	if (((this->_index == value))){
		HX_STACK_LINE(274)
		return this->_index;
	}
	HX_STACK_LINE(275)
	this->_index = value;
	HX_STACK_LINE(276)
	this->_frame = this->_anim->frames->__get(this->_index);
	HX_STACK_LINE(277)
	this->updateBuffer(null());
	HX_STACK_LINE(278)
	return this->_index;
}


HX_DEFINE_DYNAMIC_FUNC1(Spritemap_obj,set_index,return )

int Spritemap_obj::get_index( ){
	HX_STACK_PUSH("Spritemap::get_index","com/haxepunk/graphics/Spritemap.hx",269);
	HX_STACK_THIS(this);
	HX_STACK_LINE(269)
	return (  (((this->_anim != null()))) ? int(this->_index) : int((int)0) );
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_index,return )

int Spritemap_obj::set_frame( int value){
	HX_STACK_PUSH("Spritemap::set_frame","com/haxepunk/graphics/Spritemap.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(256)
	this->_anim = null();
	HX_STACK_LINE(257)
	hx::ModEq(value,this->_frameCount);
	HX_STACK_LINE(258)
	if (((value < (int)0))){
		HX_STACK_LINE(258)
		value = (this->_frameCount + value);
	}
	HX_STACK_LINE(259)
	if (((this->_frame == value))){
		HX_STACK_LINE(259)
		return this->_frame;
	}
	HX_STACK_LINE(260)
	this->_frame = value;
	HX_STACK_LINE(261)
	this->updateBuffer(null());
	HX_STACK_LINE(262)
	return this->_frame;
}


HX_DEFINE_DYNAMIC_FUNC1(Spritemap_obj,set_frame,return )

int Spritemap_obj::get_frame( ){
	HX_STACK_PUSH("Spritemap::get_frame","com/haxepunk/graphics/Spritemap.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_LINE(253)
	return this->_frame;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_frame,return )

Void Spritemap_obj::setAnimFrame( ::String name,int index){
{
		HX_STACK_PUSH("Spritemap::setAnimFrame","com/haxepunk/graphics/Spritemap.hx",241);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(242)
		Array< int > frames = this->_anims->get(name)->__Field(HX_CSTRING("frames"),true);		HX_STACK_VAR(frames,"frames");
		HX_STACK_LINE(243)
		index = hx::Mod(index,frames->length);
		HX_STACK_LINE(244)
		if (((index < (int)0))){
			HX_STACK_LINE(244)
			hx::AddEq(index,frames->length);
		}
		HX_STACK_LINE(245)
		this->set_frame(frames->__get(index));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Spritemap_obj,setAnimFrame,(void))

Void Spritemap_obj::randFrame( ){
{
		HX_STACK_PUSH("Spritemap::randFrame","com/haxepunk/graphics/Spritemap.hx",231);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static int Block( ::com::haxepunk::graphics::Spritemap_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/graphics/Spritemap.hx",232);
				{
					HX_STACK_LINE(232)
					::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
					HX_STACK_LINE(232)
					return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646)) * __this->_frameCount));
				}
				return null();
			}
		};
		HX_STACK_LINE(231)
		this->set_frame(_Function_1_1::Block(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,randFrame,(void))

Void Spritemap_obj::setFrame( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("Spritemap::setFrame","com/haxepunk/graphics/Spritemap.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(220)
		this->_anim = null();
		HX_STACK_LINE(221)
		int frame = ((hx::Mod(row,this->_rows) * this->_columns) + hx::Mod(column,this->_columns));		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(222)
		if (((this->_frame == frame))){
			HX_STACK_LINE(222)
			return null();
		}
		HX_STACK_LINE(223)
		this->_frame = frame;
		HX_STACK_LINE(224)
		this->updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Spritemap_obj,setFrame,(void))

int Spritemap_obj::getFrame( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("Spritemap::getFrame","com/haxepunk/graphics/Spritemap.hx",208);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(208)
		return ((hx::Mod(row,this->_rows) * this->_columns) + hx::Mod(column,this->_columns));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Spritemap_obj,getFrame,return )

::com::haxepunk::graphics::Animation Spritemap_obj::play( ::String __o_name,hx::Null< bool >  __o_reset){
::String name = __o_name.Default(HX_CSTRING(""));
bool reset = __o_reset.Default(false);
	HX_STACK_PUSH("Spritemap::play","com/haxepunk/graphics/Spritemap.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(reset,"reset");
{
		HX_STACK_LINE(183)
		if (((bool((bool(!(reset)) && bool((this->_anim != null())))) && bool((this->_anim->name == name))))){
			HX_STACK_LINE(183)
			return this->_anim;
		}
		HX_STACK_LINE(184)
		if ((this->_anims->exists(name))){
			HX_STACK_LINE(186)
			this->_anim = this->_anims->get(name);
			HX_STACK_LINE(187)
			this->_timer = this->_index = (int)0;
			HX_STACK_LINE(188)
			this->_frame = this->_anim->frames->__get((int)0);
			HX_STACK_LINE(189)
			this->complete = false;
		}
		else{
			HX_STACK_LINE(193)
			this->_anim = null();
			HX_STACK_LINE(194)
			this->_frame = this->_index = (int)0;
			HX_STACK_LINE(195)
			this->complete = true;
		}
		HX_STACK_LINE(197)
		this->updateBuffer(null());
		HX_STACK_LINE(198)
		return this->_anim;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Spritemap_obj,play,return )

::com::haxepunk::graphics::Animation Spritemap_obj::add( ::String name,Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop){
Float frameRate = __o_frameRate.Default(0);
bool loop = __o_loop.Default(true);
	HX_STACK_PUSH("Spritemap::add","com/haxepunk/graphics/Spritemap.hx",157);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(frames,"frames");
	HX_STACK_ARG(frameRate,"frameRate");
	HX_STACK_ARG(loop,"loop");
{
		HX_STACK_LINE(158)
		if (((this->_anims->get(name) != null()))){
			HX_STACK_LINE(159)
			hx::Throw (HX_CSTRING("Cannot have multiple animations with the same name"));
		}
		HX_STACK_LINE(161)
		if (((frameRate == (int)0))){
			HX_STACK_LINE(162)
			frameRate = ::com::haxepunk::HXP_obj::assignedFrameRate;
		}
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = frames->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			while(((_g1 < _g))){
				HX_STACK_LINE(164)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(166)
				hx::ModEq(frames[i],this->_frameCount);
				HX_STACK_LINE(167)
				if (((frames->__get(i) < (int)0))){
					HX_STACK_LINE(167)
					hx::AddEq(frames[i],this->_frameCount);
				}
			}
		}
		HX_STACK_LINE(169)
		::com::haxepunk::graphics::Animation anim = ::com::haxepunk::graphics::Animation_obj::__new(name,frames,frameRate,loop);		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(170)
		this->_anims->set(name,anim);
		HX_STACK_LINE(171)
		anim->set_parent(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(172)
		return anim;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Spritemap_obj,add,return )

Void Spritemap_obj::update( ){
{
		HX_STACK_PUSH("Spritemap::update","com/haxepunk/graphics/Spritemap.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_LINE(116)
		if (((bool((this->_anim != null())) && bool(!(this->complete))))){
			HX_STACK_LINE(119)
			hx::AddEq(this->_timer,(((  ((::com::haxepunk::HXP_obj::fixed)) ? Float((Float(this->_anim->frameRate) / Float(::com::haxepunk::HXP_obj::assignedFrameRate))) : Float((this->_anim->frameRate * ::com::haxepunk::HXP_obj::elapsed)) )) * this->rate));
			HX_STACK_LINE(120)
			if (((this->_timer >= (int)1))){
				HX_STACK_LINE(122)
				while(((this->_timer >= (int)1))){
					HX_STACK_LINE(124)
					(this->_timer)--;
					HX_STACK_LINE(125)
					(this->_index)++;
					HX_STACK_LINE(126)
					if (((this->_index == this->_anim->frameCount))){
						HX_STACK_LINE(127)
						if ((this->_anim->loop)){
							HX_STACK_LINE(130)
							this->_index = (int)0;
							HX_STACK_LINE(131)
							if (((this->callbackFunc_dyn() != null()))){
								HX_STACK_LINE(131)
								this->callbackFunc();
							}
						}
						else{
							HX_STACK_LINE(135)
							this->_index = (this->_anim->frameCount - (int)1);
							HX_STACK_LINE(136)
							this->complete = true;
							HX_STACK_LINE(137)
							if (((this->callbackFunc_dyn() != null()))){
								HX_STACK_LINE(137)
								this->callbackFunc();
							}
							HX_STACK_LINE(138)
							break;
						}
					}
				}
				HX_STACK_LINE(142)
				if (((this->_anim != null()))){
					HX_STACK_LINE(142)
					this->_frame = ::Std_obj::_int(this->_anim->frames->__get(this->_index));
				}
				HX_STACK_LINE(143)
				this->updateBuffer(null());
			}
		}
	}
return null();
}


Void Spritemap_obj::updateBuffer( hx::Null< bool >  __o_clearBefore){
bool clearBefore = __o_clearBefore.Default(false);
	HX_STACK_PUSH("Spritemap::updateBuffer","com/haxepunk/graphics/Spritemap.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_ARG(clearBefore,"clearBefore");
{
		HX_STACK_LINE(94)
		if ((this->blit)){
			HX_STACK_LINE(98)
			if (((bool((this->_width > (int)0)) && bool((this->_height > (int)0))))){
				HX_STACK_LINE(99)
				this->_rect->x = (this->_rect->width * this->_frame);
				HX_STACK_LINE(100)
				this->_rect->y = (::Std_obj::_int((Float(this->_rect->x) / Float(this->_width))) * this->_rect->height);
				HX_STACK_LINE(101)
				this->_rect->x = hx::Mod(this->_rect->x,this->_width);
				HX_STACK_LINE(102)
				if ((this->_flipped)){
					HX_STACK_LINE(102)
					this->_rect->x = ((this->_width - this->_rect->width) - this->_rect->x);
				}
			}
			HX_STACK_LINE(106)
			this->super::updateBuffer(clearBefore);
		}
		else{
			HX_STACK_LINE(109)
			this->_region = this->_atlas->getRegion(this->_frame);
		}
	}
return null();
}



Spritemap_obj::Spritemap_obj()
{
}

void Spritemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spritemap);
	HX_MARK_MEMBER_NAME(_atlas,"_atlas");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_anim,"_anim");
	HX_MARK_MEMBER_NAME(_anims,"_anims");
	HX_MARK_MEMBER_NAME(_frameCount,"_frameCount");
	HX_MARK_MEMBER_NAME(_rows,"_rows");
	HX_MARK_MEMBER_NAME(_columns,"_columns");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(currentAnim,"currentAnim");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(callbackFunc,"callbackFunc");
	HX_MARK_MEMBER_NAME(complete,"complete");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Spritemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_atlas,"_atlas");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_anim,"_anim");
	HX_VISIT_MEMBER_NAME(_anims,"_anims");
	HX_VISIT_MEMBER_NAME(_frameCount,"_frameCount");
	HX_VISIT_MEMBER_NAME(_rows,"_rows");
	HX_VISIT_MEMBER_NAME(_columns,"_columns");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(currentAnim,"currentAnim");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(callbackFunc,"callbackFunc");
	HX_VISIT_MEMBER_NAME(complete,"complete");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Spritemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return inCallProp ? get_rows() : rows; }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_anim") ) { return _anim; }
		if (HX_FIELD_EQ(inName,"_rows") ) { return _rows; }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"index") ) { return get_index(); }
		if (HX_FIELD_EQ(inName,"frame") ) { return get_frame(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_atlas") ) { return _atlas; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_frame") ) { return _frame; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"_anims") ) { return _anims; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"columns") ) { return inCallProp ? get_columns() : columns; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { return _columns; }
		if (HX_FIELD_EQ(inName,"get_rows") ) { return get_rows_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return get_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"randFrame") ) { return randFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { return inCallProp ? get_frameCount() : frameCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { return _frameCount; }
		if (HX_FIELD_EQ(inName,"currentAnim") ) { return inCallProp ? get_currentAnim() : currentAnim; }
		if (HX_FIELD_EQ(inName,"get_columns") ) { return get_columns_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setAnimFrame") ) { return setAnimFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffer") ) { return updateBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"callbackFunc") ) { return callbackFunc; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_frameCount") ) { return get_frameCount_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentAnim") ) { return get_currentAnim_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spritemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_anim") ) { _anim=inValue.Cast< ::com::haxepunk::graphics::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { return set_index(inValue); }
		if (HX_FIELD_EQ(inName,"frame") ) { return set_frame(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_atlas") ) { _atlas=inValue.Cast< ::com::haxepunk::graphics::atlas::TileAtlas >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_anims") ) { _anims=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { _frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentAnim") ) { currentAnim=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callbackFunc") ) { callbackFunc=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spritemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_atlas"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_frame"));
	outFields->push(HX_CSTRING("_index"));
	outFields->push(HX_CSTRING("_anim"));
	outFields->push(HX_CSTRING("_anims"));
	outFields->push(HX_CSTRING("_frameCount"));
	outFields->push(HX_CSTRING("_rows"));
	outFields->push(HX_CSTRING("_columns"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("currentAnim"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("frameCount"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("rate"));
	outFields->push(HX_CSTRING("complete"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_atlas"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_frame"),
	HX_CSTRING("_index"),
	HX_CSTRING("_anim"),
	HX_CSTRING("_anims"),
	HX_CSTRING("_frameCount"),
	HX_CSTRING("_rows"),
	HX_CSTRING("_columns"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("_rect"),
	HX_CSTRING("get_currentAnim"),
	HX_CSTRING("currentAnim"),
	HX_CSTRING("get_rows"),
	HX_CSTRING("rows"),
	HX_CSTRING("get_columns"),
	HX_CSTRING("columns"),
	HX_CSTRING("get_frameCount"),
	HX_CSTRING("frameCount"),
	HX_CSTRING("set_index"),
	HX_CSTRING("get_index"),
	HX_CSTRING("set_frame"),
	HX_CSTRING("get_frame"),
	HX_CSTRING("setAnimFrame"),
	HX_CSTRING("randFrame"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("getFrame"),
	HX_CSTRING("play"),
	HX_CSTRING("add"),
	HX_CSTRING("update"),
	HX_CSTRING("updateBuffer"),
	HX_CSTRING("rate"),
	HX_CSTRING("callbackFunc"),
	HX_CSTRING("complete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spritemap_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spritemap_obj::__mClass,"__mClass");
};

Class Spritemap_obj::__mClass;

void Spritemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Spritemap"), hx::TCanCast< Spritemap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Spritemap_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
