#ifndef INCLUDED_scenes_EndScene
#define INCLUDED_scenes_EndScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Scene.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(scenes,EndScene)
namespace scenes{


class HXCPP_CLASS_ATTRIBUTES  EndScene_obj : public ::com::haxepunk::Scene_obj{
	public:
		typedef ::com::haxepunk::Scene_obj super;
		typedef EndScene_obj OBJ_;
		EndScene_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EndScene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EndScene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EndScene"); }

		virtual Void update( );

		virtual Void begin( );

		::com::haxepunk::Entity restartButton;
};

} // end namespace scenes

#endif /* INCLUDED_scenes_EndScene */ 
