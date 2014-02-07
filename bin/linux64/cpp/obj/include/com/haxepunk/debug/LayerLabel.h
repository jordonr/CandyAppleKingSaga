#ifndef INCLUDED_com_haxepunk_debug_LayerLabel
#define INCLUDED_com_haxepunk_debug_LayerLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS3(com,haxepunk,debug,LayerLabel)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(flash,text,TextFormat)
namespace com{
namespace haxepunk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  LayerLabel_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef LayerLabel_obj OBJ_;
		LayerLabel_obj();
		Void __construct(int layer,::flash::text::TextFormat textFormat);

	public:
		static hx::ObjectPtr< LayerLabel_obj > __new(int layer,::flash::text::TextFormat textFormat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LayerLabel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LayerLabel"); }

		::flash::text::TextField label;
		::flash::display::Bitmap inactive;
		::flash::display::Bitmap active;
		bool display;
		virtual Void onClickLayer( ::flash::events::MouseEvent e);
		Dynamic onClickLayer_dyn();

		virtual int set_count( int value);
		Dynamic set_count_dyn();

		int layer;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_LayerLabel */ 
