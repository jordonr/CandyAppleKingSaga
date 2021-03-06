#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_PS3_GAMEPAD
#include <com/haxepunk/utils/PS3_GAMEPAD.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void PS3_GAMEPAD_obj::__construct()
{
	return null();
}

PS3_GAMEPAD_obj::~PS3_GAMEPAD_obj() { }

Dynamic PS3_GAMEPAD_obj::__CreateEmpty() { return  new PS3_GAMEPAD_obj; }
hx::ObjectPtr< PS3_GAMEPAD_obj > PS3_GAMEPAD_obj::__new()
{  hx::ObjectPtr< PS3_GAMEPAD_obj > result = new PS3_GAMEPAD_obj();
	result->__construct();
	return result;}

Dynamic PS3_GAMEPAD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PS3_GAMEPAD_obj > result = new PS3_GAMEPAD_obj();
	result->__construct();
	return result;}

int PS3_GAMEPAD_obj::TRIANGLE_BUTTON;

int PS3_GAMEPAD_obj::CIRCLE_BUTTON;

int PS3_GAMEPAD_obj::X_BUTTON;

int PS3_GAMEPAD_obj::SQUARE_BUTTON;

int PS3_GAMEPAD_obj::L1_BUTTON;

int PS3_GAMEPAD_obj::R1_BUTTON;

int PS3_GAMEPAD_obj::L2_BUTTON;

int PS3_GAMEPAD_obj::R2_BUTTON;

int PS3_GAMEPAD_obj::SELECT_BUTTON;

int PS3_GAMEPAD_obj::START_BUTTON;

int PS3_GAMEPAD_obj::PS_BUTTON;

int PS3_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON;

int PS3_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON;

int PS3_GAMEPAD_obj::DPAD_UP;

int PS3_GAMEPAD_obj::DPAD_DOWN;

int PS3_GAMEPAD_obj::DPAD_LEFT;

int PS3_GAMEPAD_obj::DPAD_RIGHT;

int PS3_GAMEPAD_obj::LEFT_ANALOGUE_X;

int PS3_GAMEPAD_obj::LEFT_ANALOGUE_Y;

int PS3_GAMEPAD_obj::TRIANGLE_BUTTON_PRESSURE;

int PS3_GAMEPAD_obj::CIRCLE_BUTTON_PRESSURE;

int PS3_GAMEPAD_obj::X_BUTTON_PRESSURE;

int PS3_GAMEPAD_obj::SQUARE_BUTTON_PRESSURE;


PS3_GAMEPAD_obj::PS3_GAMEPAD_obj()
{
}

void PS3_GAMEPAD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PS3_GAMEPAD);
	HX_MARK_END_CLASS();
}

void PS3_GAMEPAD_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic PS3_GAMEPAD_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic PS3_GAMEPAD_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PS3_GAMEPAD_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TRIANGLE_BUTTON"),
	HX_CSTRING("CIRCLE_BUTTON"),
	HX_CSTRING("X_BUTTON"),
	HX_CSTRING("SQUARE_BUTTON"),
	HX_CSTRING("L1_BUTTON"),
	HX_CSTRING("R1_BUTTON"),
	HX_CSTRING("L2_BUTTON"),
	HX_CSTRING("R2_BUTTON"),
	HX_CSTRING("SELECT_BUTTON"),
	HX_CSTRING("START_BUTTON"),
	HX_CSTRING("PS_BUTTON"),
	HX_CSTRING("LEFT_ANALOGUE_BUTTON"),
	HX_CSTRING("RIGHT_ANALOGUE_BUTTON"),
	HX_CSTRING("DPAD_UP"),
	HX_CSTRING("DPAD_DOWN"),
	HX_CSTRING("DPAD_LEFT"),
	HX_CSTRING("DPAD_RIGHT"),
	HX_CSTRING("LEFT_ANALOGUE_X"),
	HX_CSTRING("LEFT_ANALOGUE_Y"),
	HX_CSTRING("TRIANGLE_BUTTON_PRESSURE"),
	HX_CSTRING("CIRCLE_BUTTON_PRESSURE"),
	HX_CSTRING("X_BUTTON_PRESSURE"),
	HX_CSTRING("SQUARE_BUTTON_PRESSURE"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::TRIANGLE_BUTTON,"TRIANGLE_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::CIRCLE_BUTTON,"CIRCLE_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::X_BUTTON,"X_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::SQUARE_BUTTON,"SQUARE_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::L1_BUTTON,"L1_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::R1_BUTTON,"R1_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::L2_BUTTON,"L2_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::R2_BUTTON,"R2_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::SELECT_BUTTON,"SELECT_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::START_BUTTON,"START_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::PS_BUTTON,"PS_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::TRIANGLE_BUTTON_PRESSURE,"TRIANGLE_BUTTON_PRESSURE");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::CIRCLE_BUTTON_PRESSURE,"CIRCLE_BUTTON_PRESSURE");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::X_BUTTON_PRESSURE,"X_BUTTON_PRESSURE");
	HX_MARK_MEMBER_NAME(PS3_GAMEPAD_obj::SQUARE_BUTTON_PRESSURE,"SQUARE_BUTTON_PRESSURE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::TRIANGLE_BUTTON,"TRIANGLE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::CIRCLE_BUTTON,"CIRCLE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::X_BUTTON,"X_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::SQUARE_BUTTON,"SQUARE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::L1_BUTTON,"L1_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::R1_BUTTON,"R1_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::L2_BUTTON,"L2_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::R2_BUTTON,"R2_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::SELECT_BUTTON,"SELECT_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::START_BUTTON,"START_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::PS_BUTTON,"PS_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::TRIANGLE_BUTTON_PRESSURE,"TRIANGLE_BUTTON_PRESSURE");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::CIRCLE_BUTTON_PRESSURE,"CIRCLE_BUTTON_PRESSURE");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::X_BUTTON_PRESSURE,"X_BUTTON_PRESSURE");
	HX_VISIT_MEMBER_NAME(PS3_GAMEPAD_obj::SQUARE_BUTTON_PRESSURE,"SQUARE_BUTTON_PRESSURE");
};

Class PS3_GAMEPAD_obj::__mClass;

void PS3_GAMEPAD_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.PS3_GAMEPAD"), hx::TCanCast< PS3_GAMEPAD_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PS3_GAMEPAD_obj::__boot()
{
	TRIANGLE_BUTTON= (int)12;
	CIRCLE_BUTTON= (int)13;
	X_BUTTON= (int)14;
	SQUARE_BUTTON= (int)15;
	L1_BUTTON= (int)10;
	R1_BUTTON= (int)11;
	L2_BUTTON= (int)8;
	R2_BUTTON= (int)9;
	SELECT_BUTTON= (int)0;
	START_BUTTON= (int)3;
	PS_BUTTON= (int)16;
	LEFT_ANALOGUE_BUTTON= (int)1;
	RIGHT_ANALOGUE_BUTTON= (int)2;
	DPAD_UP= (int)4;
	DPAD_DOWN= (int)6;
	DPAD_LEFT= (int)7;
	DPAD_RIGHT= (int)5;
	LEFT_ANALOGUE_X= (int)0;
	LEFT_ANALOGUE_Y= (int)1;
	TRIANGLE_BUTTON_PRESSURE= (int)16;
	CIRCLE_BUTTON_PRESSURE= (int)17;
	X_BUTTON_PRESSURE= (int)18;
	SQUARE_BUTTON_PRESSURE= (int)19;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
