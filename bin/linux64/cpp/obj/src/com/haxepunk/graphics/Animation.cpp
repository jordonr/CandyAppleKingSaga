#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
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
namespace com{
namespace haxepunk{
namespace graphics{

Void Animation_obj::__construct(::String name,Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop)
{
HX_STACK_PUSH("Animation::new","com/haxepunk/graphics/Animation.hx",17);
Float frameRate = __o_frameRate.Default(0);
bool loop = __o_loop.Default(true);
{
	HX_STACK_LINE(18)
	this->name = name;
	HX_STACK_LINE(19)
	this->frames = frames;
	HX_STACK_LINE(20)
	this->frameRate = frameRate;
	HX_STACK_LINE(21)
	this->loop = loop;
	HX_STACK_LINE(22)
	this->frameCount = frames->length;
}
;
	return null();
}

Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(::String name,Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(name,frames,__o_frameRate,__o_loop);
	return result;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::com::haxepunk::graphics::Spritemap Animation_obj::set_parent( ::com::haxepunk::graphics::Spritemap value){
	HX_STACK_PUSH("Animation::set_parent","com/haxepunk/graphics/Animation.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(36)
	this->_parent = value;
	HX_STACK_LINE(37)
	return this->_parent;
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,set_parent,return )

Void Animation_obj::play( hx::Null< bool >  __o_reset){
bool reset = __o_reset.Default(false);
	HX_STACK_PUSH("Animation::play","com/haxepunk/graphics/Animation.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_ARG(reset,"reset");
{
		HX_STACK_LINE(30)
		this->_parent->play(this->name,reset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,play,(void))


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic Animation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { return frameCount; }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp) return set_parent(inValue);parent=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("loop"));
	outFields->push(HX_CSTRING("frameCount"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_parent"),
	HX_CSTRING("loop"),
	HX_CSTRING("frameCount"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("frames"),
	HX_CSTRING("name"),
	HX_CSTRING("set_parent"),
	HX_CSTRING("parent"),
	HX_CSTRING("play"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Animation"), hx::TCanCast< Animation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Animation_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
