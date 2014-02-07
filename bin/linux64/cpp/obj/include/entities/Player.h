#ifndef INCLUDED_entities_Player
#define INCLUDED_entities_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/BaseEntity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)
HX_DECLARE_CLASS1(entities,BaseEntity)
HX_DECLARE_CLASS1(entities,Player)
HX_DECLARE_CLASS2(flash,geom,Point)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::entities::BaseEntity_obj{
	public:
		typedef ::entities::BaseEntity_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(int x,int y);

	public:
		static hx::ObjectPtr< Player_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Player_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Player"); }

		virtual Void update( );

		virtual bool moveCollideX( ::com::haxepunk::Entity e);

		virtual bool moveCollideY( ::com::haxepunk::Entity e);

		virtual Void handleCandy( ::com::haxepunk::Entity e);
		Dynamic handleCandy_dyn();

		virtual Void fall( );
		Dynamic fall_dyn();

		virtual Void doJump( );
		Dynamic doJump_dyn();

		virtual Void outOfBounds( );
		Dynamic outOfBounds_dyn();

		virtual Void move( );
		Dynamic move_dyn();

		virtual Void setAnimations( );
		Dynamic setAnimations_dyn();

		virtual Void handleInput( );
		Dynamic handleInput_dyn();

		bool onGround;
		int jump;
		::flash::geom::Point velocity;
		::com::haxepunk::graphics::Spritemap sprite;
		::flash::geom::Point gravity;
		int climb;
		Float yAcceleration;
		Float xAcceleration;
		static Float jumpForce;
};

} // end namespace entities

#endif /* INCLUDED_entities_Player */ 
