#ifndef INCLUDED_scenes_StartScene
#define INCLUDED_scenes_StartScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Scene.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Backdrop)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Canvas)
HX_DECLARE_CLASS1(scenes,StartScene)
namespace scenes{


class HXCPP_CLASS_ATTRIBUTES  StartScene_obj : public ::com::haxepunk::Scene_obj{
	public:
		typedef ::com::haxepunk::Scene_obj super;
		typedef StartScene_obj OBJ_;
		StartScene_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< StartScene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StartScene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StartScene"); }

		virtual Void update( );

		virtual Void begin( );

		::com::haxepunk::Entity startButton;
		::com::haxepunk::graphics::Backdrop background;
		static Void startGame( );
		static Dynamic startGame_dyn();

};

} // end namespace scenes

#endif /* INCLUDED_scenes_StartScene */ 
