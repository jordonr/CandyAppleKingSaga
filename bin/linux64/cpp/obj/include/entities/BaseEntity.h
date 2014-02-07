#ifndef INCLUDED_entities_BaseEntity
#define INCLUDED_entities_BaseEntity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,BaseEntity)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  BaseEntity_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef BaseEntity_obj OBJ_;
		BaseEntity_obj();
		Void __construct(Float x,Float y);

	public:
		static hx::ObjectPtr< BaseEntity_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BaseEntity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BaseEntity"); }

		virtual bool clickedOn( );
		Dynamic clickedOn_dyn();

		virtual Void update( );

		Float _age;
		bool _clicked;
};

} // end namespace entities

#endif /* INCLUDED_entities_BaseEntity */ 
