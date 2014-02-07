#ifndef INCLUDED_entities_StartButton
#define INCLUDED_entities_StartButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/BaseEntity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS1(entities,BaseEntity)
HX_DECLARE_CLASS1(entities,StartButton)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  StartButton_obj : public ::entities::BaseEntity_obj{
	public:
		typedef ::entities::BaseEntity_obj super;
		typedef StartButton_obj OBJ_;
		StartButton_obj();
		Void __construct(Float x,Float y);

	public:
		static hx::ObjectPtr< StartButton_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StartButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StartButton"); }

		virtual Void update( );

		::com::haxepunk::graphics::Image img;
		Float speed;
		static ::String imagePath;
};

} // end namespace entities

#endif /* INCLUDED_entities_StartButton */ 
