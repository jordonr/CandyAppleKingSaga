#ifndef INCLUDED_entities_Ground
#define INCLUDED_entities_Ground

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/BaseEntity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,BaseEntity)
HX_DECLARE_CLASS1(entities,Ground)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Ground_obj : public ::entities::BaseEntity_obj{
	public:
		typedef ::entities::BaseEntity_obj super;
		typedef Ground_obj OBJ_;
		Ground_obj();
		Void __construct(int x,int y);

	public:
		static hx::ObjectPtr< Ground_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Ground_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ground"); }

		virtual Void update( );

		virtual Void outOfBounds( );
		Dynamic outOfBounds_dyn();

};

} // end namespace entities

#endif /* INCLUDED_entities_Ground */ 
