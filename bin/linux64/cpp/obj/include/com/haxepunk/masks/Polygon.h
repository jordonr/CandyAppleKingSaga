#ifndef INCLUDED_com_haxepunk_masks_Polygon
#define INCLUDED_com_haxepunk_masks_Polygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/masks/Hitbox.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,masks,Circle)
HX_DECLARE_CLASS3(com,haxepunk,masks,Grid)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Polygon)
HX_DECLARE_CLASS3(com,haxepunk,math,Projection)
HX_DECLARE_CLASS3(com,haxepunk,math,Vector)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,geom,Point)
namespace com{
namespace haxepunk{
namespace masks{


class HXCPP_CLASS_ATTRIBUTES  Polygon_obj : public ::com::haxepunk::masks::Hitbox_obj{
	public:
		typedef ::com::haxepunk::masks::Hitbox_obj super;
		typedef Polygon_obj OBJ_;
		Polygon_obj();
		Void __construct(Array< ::Dynamic > points,::flash::geom::Point origin);

	public:
		static hx::ObjectPtr< Polygon_obj > __new(Array< ::Dynamic > points,::flash::geom::Point origin);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Polygon_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Polygon"); }

		Array< int > _indicesToRemove;
		::com::haxepunk::masks::Hitbox _fakeTileHitbox;
		::com::haxepunk::Entity _fakeEntity;
		Array< ::Dynamic > _axes;
		Array< ::Dynamic > _points;
		Float _angle;
		virtual Void updateAxes( );
		Dynamic updateAxes_dyn();

		virtual Void removeDuplicateAxes( );
		Dynamic removeDuplicateAxes_dyn();

		virtual Void generateAxes( );
		Dynamic generateAxes_dyn();

		virtual Void rotate( Float angleDelta);
		Dynamic rotate_dyn();

		virtual Void update( );

		virtual Array< ::Dynamic > set_points( Array< ::Dynamic > value);
		Dynamic set_points_dyn();

		virtual Array< ::Dynamic > get_points( );
		Dynamic get_points_dyn();

		virtual Float set_angle( Float value);
		Dynamic set_angle_dyn();

		virtual Float get_angle( );
		Dynamic get_angle_dyn();

		virtual Void debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY);

		virtual Void project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection);

		virtual bool collidePolygon( ::com::haxepunk::masks::Polygon other);
		Dynamic collidePolygon_dyn();

		virtual bool collideCircle( ::com::haxepunk::masks::Circle circle);
		Dynamic collideCircle_dyn();

		virtual bool collideGrid( ::com::haxepunk::masks::Grid grid);
		Dynamic collideGrid_dyn();

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox hitbox);

		virtual bool collideMask( ::com::haxepunk::Mask other);

		::flash::geom::Point origin;
		static ::com::haxepunk::masks::Polygon createPolygon( hx::Null< int >  sides,hx::Null< Float >  radius,hx::Null< Float >  angle);
		static Dynamic createPolygon_dyn();

		static ::com::haxepunk::masks::Polygon createFromArray( Array< Float > points);
		static Dynamic createFromArray_dyn();

		static ::com::haxepunk::math::Projection firstProj;
		static ::com::haxepunk::math::Projection secondProj;
		static ::com::haxepunk::math::Vector vertical;
		static ::com::haxepunk::math::Vector horizontal;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Polygon */ 
