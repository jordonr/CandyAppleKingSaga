#ifndef INCLUDED_scenes_GameScene
#define INCLUDED_scenes_GameScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Scene.h>
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Backdrop)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Canvas)
HX_DECLARE_CLASS1(scenes,GameScene)
namespace scenes{


class HXCPP_CLASS_ATTRIBUTES  GameScene_obj : public ::com::haxepunk::Scene_obj{
	public:
		typedef ::com::haxepunk::Scene_obj super;
		typedef GameScene_obj OBJ_;
		GameScene_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GameScene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GameScene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameScene"); }

		virtual Void spawnCandy( );
		Dynamic spawnCandy_dyn();

		virtual Void spawnPlatform( );
		Dynamic spawnPlatform_dyn();

		virtual Void spawnFloor( );
		Dynamic spawnFloor_dyn();

		virtual Void spawnPlayer( );
		Dynamic spawnPlayer_dyn();

		virtual Void update( );

		virtual Void begin( );

		::com::haxepunk::graphics::Backdrop background;
		Float spawnGroundTime;
		Float spawnCandyTime;
		static Float _age;
		static int _score;
		static Float defaultSpawnTime;
		static Float minPlatformSize;
		static Float maxPlatformSize;
		static Void addToScore( int v);
		static Dynamic addToScore_dyn();

		static int getScore( );
		static Dynamic getScore_dyn();

};

} // end namespace scenes

#endif /* INCLUDED_scenes_GameScene */ 
