#ifndef INCLUDED_com_haxepunk_tweens_TweenEvent
#define INCLUDED_com_haxepunk_tweens_TweenEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/events/Event.h>
HX_DECLARE_CLASS3(com,haxepunk,tweens,TweenEvent)
HX_DECLARE_CLASS2(flash,events,Event)
namespace com{
namespace haxepunk{
namespace tweens{


class HXCPP_CLASS_ATTRIBUTES  TweenEvent_obj : public ::flash::events::Event_obj{
	public:
		typedef ::flash::events::Event_obj super;
		typedef TweenEvent_obj OBJ_;
		TweenEvent_obj();
		Void __construct(::String type,Dynamic bubbles,Dynamic cancelable);

	public:
		static hx::ObjectPtr< TweenEvent_obj > __new(::String type,Dynamic bubbles,Dynamic cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TweenEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TweenEvent"); }

		static ::String START;
		static ::String UPDATE;
		static ::String FINISH;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace tweens

#endif /* INCLUDED_com_haxepunk_tweens_TweenEvent */ 
