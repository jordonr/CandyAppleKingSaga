#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Graphiclist_obj::__construct(Dynamic graphic)
{
HX_STACK_PUSH("Graphiclist::new","com/haxepunk/graphics/Graphiclist.hx",21);
{
	HX_STACK_LINE(22)
	this->_graphics = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(23)
	this->_temp = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(24)
	this->_camera = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(25)
	this->_count = (int)0;
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(29)
	if (((graphic != null()))){
		HX_STACK_LINE(31)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		while(((_g < graphic->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(31)
			Dynamic g = graphic->__GetItem(_g);		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(31)
			++(_g);
			HX_STACK_LINE(31)
			if (((hx::TCast< com::haxepunk::Graphic >::cast(g) != null()))){
				HX_STACK_LINE(31)
				this->add(g);
			}
		}
	}
}
;
	return null();
}

Graphiclist_obj::~Graphiclist_obj() { }

Dynamic Graphiclist_obj::__CreateEmpty() { return  new Graphiclist_obj; }
hx::ObjectPtr< Graphiclist_obj > Graphiclist_obj::__new(Dynamic graphic)
{  hx::ObjectPtr< Graphiclist_obj > result = new Graphiclist_obj();
	result->__construct(graphic);
	return result;}

Dynamic Graphiclist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphiclist_obj > result = new Graphiclist_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Graphiclist_obj::updateCheck( ){
{
		HX_STACK_PUSH("Graphiclist::updateCheck","com/haxepunk/graphics/Graphiclist.hx",184);
		HX_STACK_THIS(this);
		HX_STACK_LINE(185)
		this->active = false;
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(186)
			while(((_g < _g1->length))){
				HX_STACK_LINE(186)
				::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(186)
				++(_g);
				HX_STACK_LINE(188)
				if ((g->active)){
					HX_STACK_LINE(190)
					this->active = true;
					HX_STACK_LINE(191)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,updateCheck,(void))

int Graphiclist_obj::get_count( ){
	HX_STACK_PUSH("Graphiclist::get_count","com/haxepunk/graphics/Graphiclist.hx",178);
	HX_STACK_THIS(this);
	HX_STACK_LINE(178)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,get_count,return )

Array< ::Dynamic > Graphiclist_obj::get_children( ){
	HX_STACK_PUSH("Graphiclist::get_children","com/haxepunk/graphics/Graphiclist.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_LINE(172)
	return this->_graphics;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,get_children,return )

Void Graphiclist_obj::removeAll( ){
{
		HX_STACK_PUSH("Graphiclist::removeAll","com/haxepunk/graphics/Graphiclist.hx",161);
		HX_STACK_THIS(this);
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			Dynamic array = this->_graphics;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(162)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(163)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(164)
		this->_count = (int)0;
		HX_STACK_LINE(165)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,removeAll,(void))

Void Graphiclist_obj::removeAt( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_PUSH("Graphiclist::removeAt","com/haxepunk/graphics/Graphiclist.hx",150);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
{
		HX_STACK_LINE(151)
		if (((this->_graphics->length == (int)0))){
			HX_STACK_LINE(151)
			return null();
		}
		HX_STACK_LINE(152)
		hx::ModEq(index,this->_graphics->length);
		HX_STACK_LINE(153)
		this->remove(this->_graphics->__get(hx::Mod(index,this->_graphics->length)).StaticCast< ::com::haxepunk::Graphic >());
		HX_STACK_LINE(154)
		this->updateCheck();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,removeAt,(void))

::com::haxepunk::Graphic Graphiclist_obj::remove( ::com::haxepunk::Graphic graphic){
	HX_STACK_PUSH("Graphiclist::remove","com/haxepunk/graphics/Graphiclist.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphic,"graphic");
	HX_STACK_LINE(130)
	if (((::Lambda_obj::indexOf(this->_graphics,graphic) < (int)0))){
		HX_STACK_LINE(130)
		return graphic;
	}
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(131)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(133)
		while(((_g < _g1->length))){
			HX_STACK_LINE(133)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(133)
			++(_g);
			HX_STACK_LINE(135)
			if (((g == graphic))){
				HX_STACK_LINE(135)
				(this->_count)--;
			}
			else{
				HX_STACK_LINE(136)
				this->_temp[this->_temp->length] = g;
			}
		}
	}
	HX_STACK_LINE(138)
	Array< ::Dynamic > temp = this->_graphics;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(139)
	this->_graphics = this->_temp;
	HX_STACK_LINE(140)
	this->_temp = temp;
	HX_STACK_LINE(141)
	this->updateCheck();
	HX_STACK_LINE(142)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,remove,return )

::com::haxepunk::Graphic Graphiclist_obj::add( ::com::haxepunk::Graphic graphic){
	HX_STACK_PUSH("Graphiclist::add","com/haxepunk/graphics/Graphiclist.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphic,"graphic");
	HX_STACK_LINE(112)
	if (((graphic == null()))){
		HX_STACK_LINE(112)
		return graphic;
	}
	HX_STACK_LINE(115)
	if (((this->_count == (int)0))){
		HX_STACK_LINE(115)
		this->blit = graphic->blit;
	}
	else{
		HX_STACK_LINE(116)
		if (((this->blit != graphic->blit))){
			HX_STACK_LINE(116)
			hx::Throw (HX_CSTRING("Can't add graphic objects with different render methods."));
		}
	}
	HX_STACK_LINE(118)
	this->_graphics[(this->_count)++] = graphic;
	HX_STACK_LINE(119)
	if ((!(this->active))){
		HX_STACK_LINE(119)
		this->active = graphic->active;
	}
	HX_STACK_LINE(120)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,add,return )

Void Graphiclist_obj::destroy( ){
{
		HX_STACK_PUSH("Graphiclist::destroy","com/haxepunk/graphics/Graphiclist.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_LINE(99)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		while(((_g < _g1->length))){
			HX_STACK_LINE(99)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(99)
			++(_g);
			HX_STACK_LINE(101)
			g->destroy();
		}
	}
return null();
}


Void Graphiclist_obj::renderAtlas( int layer,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_PUSH("Graphiclist::renderAtlas","com/haxepunk/graphics/Graphiclist.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(72)
		hx::AddEq(point->x,this->x);
		HX_STACK_LINE(73)
		hx::AddEq(point->y,this->y);
		HX_STACK_LINE(74)
		hx::MultEq(camera->x,this->scrollX);
		HX_STACK_LINE(75)
		hx::MultEq(camera->y,this->scrollY);
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(77)
			while(((_g < _g1->length))){
				HX_STACK_LINE(77)
				::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(77)
				++(_g);
				HX_STACK_LINE(79)
				if ((g->get_visible())){
					HX_STACK_LINE(81)
					if ((g->relative)){
						HX_STACK_LINE(83)
						this->_point->x = point->x;
						HX_STACK_LINE(84)
						this->_point->y = point->y;
					}
					else{
						HX_STACK_LINE(86)
						this->_point->x = this->_point->y = (int)0;
					}
					HX_STACK_LINE(87)
					this->_camera->x = camera->x;
					HX_STACK_LINE(88)
					this->_camera->y = camera->y;
					HX_STACK_LINE(89)
					g->renderAtlas(layer,this->_point,this->_camera);
				}
			}
		}
	}
return null();
}


Void Graphiclist_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_PUSH("Graphiclist::render","com/haxepunk/graphics/Graphiclist.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(47)
		hx::AddEq(point->x,this->x);
		HX_STACK_LINE(48)
		hx::AddEq(point->y,this->y);
		HX_STACK_LINE(49)
		hx::MultEq(camera->x,this->scrollX);
		HX_STACK_LINE(50)
		hx::MultEq(camera->y,this->scrollY);
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			while(((_g < _g1->length))){
				HX_STACK_LINE(52)
				::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(54)
				if ((g->get_visible())){
					HX_STACK_LINE(56)
					if ((g->relative)){
						HX_STACK_LINE(58)
						this->_point->x = point->x;
						HX_STACK_LINE(59)
						this->_point->y = point->y;
					}
					else{
						HX_STACK_LINE(61)
						this->_point->x = this->_point->y = (int)0;
					}
					HX_STACK_LINE(62)
					this->_camera->x = camera->x;
					HX_STACK_LINE(63)
					this->_camera->y = camera->y;
					HX_STACK_LINE(64)
					g->render(target,this->_point,this->_camera);
				}
			}
		}
	}
return null();
}


Void Graphiclist_obj::update( ){
{
		HX_STACK_PUSH("Graphiclist::update","com/haxepunk/graphics/Graphiclist.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_LINE(38)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		while(((_g < _g1->length))){
			HX_STACK_LINE(38)
			::com::haxepunk::Graphic g = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(38)
			++(_g);
			HX_STACK_LINE(40)
			if ((g->active)){
				HX_STACK_LINE(40)
				g->update();
			}
		}
	}
return null();
}



Graphiclist_obj::Graphiclist_obj()
{
}

void Graphiclist_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphiclist);
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_temp,"_temp");
	HX_MARK_MEMBER_NAME(_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(children,"children");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Graphiclist_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_temp,"_temp");
	HX_VISIT_MEMBER_NAME(_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(children,"children");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Graphiclist_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_temp") ) { return _temp; }
		if (HX_FIELD_EQ(inName,"count") ) { return inCallProp ? get_count() : count; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return inCallProp ? get_children() : children; }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateCheck") ) { return updateCheck_dyn(); }
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_children") ) { return get_children_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphiclist_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_temp") ) { _temp=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphiclist_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_camera"));
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_temp"));
	outFields->push(HX_CSTRING("_graphics"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("children"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_camera"),
	HX_CSTRING("_count"),
	HX_CSTRING("_temp"),
	HX_CSTRING("_graphics"),
	HX_CSTRING("updateCheck"),
	HX_CSTRING("get_count"),
	HX_CSTRING("count"),
	HX_CSTRING("get_children"),
	HX_CSTRING("children"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("renderAtlas"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

Class Graphiclist_obj::__mClass;

void Graphiclist_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Graphiclist"), hx::TCanCast< Graphiclist_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Graphiclist_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
