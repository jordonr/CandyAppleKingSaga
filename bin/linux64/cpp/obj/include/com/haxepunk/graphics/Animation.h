#ifndef INCLUDED_com_haxepunk_graphics_Animation
#define INCLUDED_com_haxepunk_graphics_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Animation)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(::String name,Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop);

	public:
		static hx::ObjectPtr< Animation_obj > __new(::String name,Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Animation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Animation"); }

		::com::haxepunk::graphics::Spritemap _parent;
		bool loop;
		int frameCount;
		Float frameRate;
		Array< int > frames;
		::String name;
		virtual ::com::haxepunk::graphics::Spritemap set_parent( ::com::haxepunk::graphics::Spritemap value);
		Dynamic set_parent_dyn();

		::com::haxepunk::graphics::Spritemap parent;
		virtual Void play( hx::Null< bool >  reset);
		Dynamic play_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Animation */ 
