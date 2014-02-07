#ifndef INCLUDED_com_haxepunk_math_Vector
#define INCLUDED_com_haxepunk_math_Vector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/geom/Point.h>
HX_DECLARE_CLASS3(com,haxepunk,math,Vector)
HX_DECLARE_CLASS2(flash,geom,Point)
namespace com{
namespace haxepunk{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Vector_obj : public ::flash::geom::Point_obj{
	public:
		typedef ::flash::geom::Point_obj super;
		typedef Vector_obj OBJ_;
		Vector_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);

	public:
		static hx::ObjectPtr< Vector_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Vector_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Vector"); }

		virtual ::com::haxepunk::math::Vector cross( );
		Dynamic cross_dyn();

		virtual Float dot( ::flash::geom::Point p);
		Dynamic dot_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace math

#endif /* INCLUDED_com_haxepunk_math_Vector */ 
