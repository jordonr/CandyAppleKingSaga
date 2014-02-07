#ifndef INCLUDED_entities_RestartButton
#define INCLUDED_entities_RestartButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/BaseEntity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS1(entities,BaseEntity)
HX_DECLARE_CLASS1(entities,RestartButton)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  RestartButton_obj : public ::entities::BaseEntity_obj{
	public:
		typedef ::entities::BaseEntity_obj super;
		typedef RestartButton_obj OBJ_;
		RestartButton_obj();
		Void __construct(Float x,Float y);

	public:
		static hx::ObjectPtr< RestartButton_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RestartButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RestartButton"); }

		virtual Void update( );

		::com::haxepunk::graphics::Image img;
		Float speed;
		static ::String imagePath;
};

} // end namespace entities

#endif /* INCLUDED_entities_RestartButton */ 
