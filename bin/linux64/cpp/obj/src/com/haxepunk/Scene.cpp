#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace com{
namespace haxepunk{

Void Scene_obj::__construct()
{
HX_STACK_PUSH("Scene::new","com/haxepunk/Scene.hx",31);
{
	HX_STACK_LINE(32)
	super::__construct();
	HX_STACK_LINE(33)
	this->visible = true;
	HX_STACK_LINE(34)
	this->camera = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(35)
	this->_count = (int)0;
	HX_STACK_LINE(37)
	this->_layerList = Array_obj< int >::__new();
	HX_STACK_LINE(38)
	this->_layerCount = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(39)
	this->_sprite = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(41)
	this->_add = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(42)
	this->_remove = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(43)
	this->_recycle = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(45)
	this->_layerDisplay = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(46)
	this->_renderFirst = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(47)
	this->_renderLast = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(48)
	this->_typeFirst = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(50)
	this->_classCount = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(51)
	this->_typeCount = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(52)
	this->_recycled = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(53)
	this->_entityNames = ::haxe::ds::StringMap_obj::__new();
}
;
	return null();
}

Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new()
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Void Scene_obj::unregisterName( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::unregisterName","com/haxepunk/Scene.hx",1276);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1277)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1278)
		this->_entityNames->remove(fe->__Field(HX_CSTRING("_name"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,unregisterName,(void))

Void Scene_obj::registerName( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::registerName","com/haxepunk/Scene.hx",1269);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1270)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1271)
		this->_entityNames->set(fe->__Field(HX_CSTRING("_name"),true),e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,registerName,(void))

Void Scene_obj::removeType( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::removeType","com/haxepunk/Scene.hx",1257);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1258)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1260)
		if (((this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true)) == e))){
			HX_STACK_LINE(1260)
			this->_typeFirst->set(fe->__Field(HX_CSTRING("_type"),true),fe->__Field(HX_CSTRING("_typeNext"),true));
		}
		HX_STACK_LINE(1261)
		if (((fe->__Field(HX_CSTRING("_typeNext"),true) != null()))){
			HX_STACK_LINE(1261)
			fe->__Field(HX_CSTRING("_typeNext"),true)->__FieldRef(HX_CSTRING("_typePrev")) = fe->__Field(HX_CSTRING("_typePrev"),true);
		}
		HX_STACK_LINE(1262)
		if (((fe->__Field(HX_CSTRING("_typePrev"),true) != null()))){
			HX_STACK_LINE(1262)
			fe->__Field(HX_CSTRING("_typePrev"),true)->__FieldRef(HX_CSTRING("_typeNext")) = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(1263)
		fe->__FieldRef(HX_CSTRING("_typeNext")) = fe->__FieldRef(HX_CSTRING("_typePrev")) = null();
		HX_STACK_LINE(1264)
		this->_typeCount->set(fe->__Field(HX_CSTRING("_type"),true),(this->_typeCount->get(fe->__Field(HX_CSTRING("_type"),true)) - (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeType,(void))

Void Scene_obj::addType( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::addType","com/haxepunk/Scene.hx",1237);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1238)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1240)
		if (((this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true)) != null()))){
			HX_STACK_LINE(1242)
			this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true))->__FieldRef(HX_CSTRING("_typePrev")) = e;
			HX_STACK_LINE(1243)
			fe->__FieldRef(HX_CSTRING("_typeNext")) = this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true));
			HX_STACK_LINE(1244)
			this->_typeCount->set(fe->__Field(HX_CSTRING("_type"),true),(this->_typeCount->get(fe->__Field(HX_CSTRING("_type"),true)) + (int)1));
		}
		else{
			HX_STACK_LINE(1248)
			fe->__FieldRef(HX_CSTRING("_typeNext")) = null();
			HX_STACK_LINE(1249)
			this->_typeCount->set(fe->__Field(HX_CSTRING("_type"),true),(int)1);
		}
		HX_STACK_LINE(1251)
		fe->__FieldRef(HX_CSTRING("_typePrev")) = null();
		HX_STACK_LINE(1252)
		this->_typeFirst->set(fe->__Field(HX_CSTRING("_type"),true),e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addType,(void))

Void Scene_obj::removeRender( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::removeRender","com/haxepunk/Scene.hx",1202);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1203)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1204)
		if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
			HX_STACK_LINE(1204)
			fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
		}
		else{
			HX_STACK_LINE(1205)
			this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderPrev"),true));
		}
		HX_STACK_LINE(1206)
		if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
			HX_STACK_LINE(1206)
			fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
		}
		else{
			HX_STACK_LINE(1210)
			this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderNext"),true));
			HX_STACK_LINE(1211)
			if (((fe->__Field(HX_CSTRING("_renderNext"),true) == null()))){
				HX_STACK_LINE(1214)
				if (((this->_layerList->length > (int)1))){
					HX_STACK_LINE(1216)
					this->_layerList[::Lambda_obj::indexOf(this->_layerList,fe->__Field(HX_CSTRING("_layer"),true))] = this->_layerList->__get((this->_layerList->length - (int)1));
					HX_STACK_LINE(1217)
					this->_layerSort = true;
				}
				HX_STACK_LINE(1219)
				this->_layerList->pop();
			}
		}
		HX_STACK_LINE(1222)
		if (((e->_graphic != null()))){
			HX_STACK_LINE(1222)
			e->_graphic->destroy();
		}
		HX_STACK_LINE(1223)
		int newLayerCount = (this->_layerCount->get(fe->__Field(HX_CSTRING("_layer"),true)) - (int)1);		HX_STACK_VAR(newLayerCount,"newLayerCount");
		HX_STACK_LINE(1224)
		if (((newLayerCount > (int)0))){
			HX_STACK_LINE(1225)
			this->_layerCount->set(fe->__Field(HX_CSTRING("_layer"),true),newLayerCount);
			HX_STACK_LINE(1225)
			newLayerCount;
		}
		else{
			HX_STACK_LINE(1228)
			this->_layerCount->remove(fe->__Field(HX_CSTRING("_layer"),true));
			HX_STACK_LINE(1229)
			this->_renderFirst->remove(fe->__Field(HX_CSTRING("_layer"),true));
			HX_STACK_LINE(1230)
			this->_renderLast->remove(fe->__Field(HX_CSTRING("_layer"),true));
		}
		HX_STACK_LINE(1232)
		fe->__FieldRef(HX_CSTRING("_renderNext")) = fe->__FieldRef(HX_CSTRING("_renderPrev")) = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeRender,(void))

Void Scene_obj::addRender( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::addRender","com/haxepunk/Scene.hx",1177);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1178)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1179)
		Dynamic f = this->_renderFirst->get(fe->__Field(HX_CSTRING("_layer"),true));		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(1180)
		if (((f != null()))){
			HX_STACK_LINE(1183)
			fe->__FieldRef(HX_CSTRING("_renderNext")) = f;
			HX_STACK_LINE(1184)
			f->__FieldRef(HX_CSTRING("_renderPrev")) = e;
			HX_STACK_LINE(1185)
			{
				HX_STACK_LINE(1185)
				int v = (this->_layerCount->get(fe->__Field(HX_CSTRING("_layer"),true)) + (int)1);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1185)
				this->_layerCount->set(fe->__Field(HX_CSTRING("_layer"),true),v);
				HX_STACK_LINE(1185)
				v;
			}
		}
		else{
			HX_STACK_LINE(1190)
			this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),e);
			HX_STACK_LINE(1191)
			this->_layerList[this->_layerList->length] = fe->__Field(HX_CSTRING("_layer"),true);
			HX_STACK_LINE(1192)
			this->_layerSort = true;
			HX_STACK_LINE(1193)
			fe->__FieldRef(HX_CSTRING("_renderNext")) = null();
			HX_STACK_LINE(1194)
			{
				HX_STACK_LINE(1194)
				this->_layerCount->set(fe->__Field(HX_CSTRING("_layer"),true),(int)1);
				HX_STACK_LINE(1194)
				(int)1;
			}
		}
		HX_STACK_LINE(1196)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),e);
		HX_STACK_LINE(1197)
		fe->__FieldRef(HX_CSTRING("_renderPrev")) = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addRender,(void))

Void Scene_obj::removeUpdate( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::removeUpdate","com/haxepunk/Scene.hx",1163);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1164)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1167)
		if (((this->_updateFirst == e))){
			HX_STACK_LINE(1167)
			this->_updateFirst = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
		HX_STACK_LINE(1168)
		if (((fe->__Field(HX_CSTRING("_updateNext"),true) != null()))){
			HX_STACK_LINE(1168)
			fe->__Field(HX_CSTRING("_updateNext"),true)->__FieldRef(HX_CSTRING("_updatePrev")) = fe->__Field(HX_CSTRING("_updatePrev"),true);
		}
		HX_STACK_LINE(1169)
		if (((fe->__Field(HX_CSTRING("_updatePrev"),true) != null()))){
			HX_STACK_LINE(1169)
			fe->__Field(HX_CSTRING("_updatePrev"),true)->__FieldRef(HX_CSTRING("_updateNext")) = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
		HX_STACK_LINE(1170)
		fe->__FieldRef(HX_CSTRING("_updateNext")) = fe->__FieldRef(HX_CSTRING("_updatePrev")) = null();
		HX_STACK_LINE(1171)
		(this->_count)--;
		HX_STACK_LINE(1172)
		this->_classCount->set(fe->__Field(HX_CSTRING("_class"),true),(this->_classCount->get(fe->__Field(HX_CSTRING("_class"),true)) - (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeUpdate,(void))

Void Scene_obj::addUpdate( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Scene::addUpdate","com/haxepunk/Scene.hx",1144);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(1145)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1148)
		if (((this->_updateFirst != null()))){
			HX_STACK_LINE(1150)
			this->_updateFirst->__FieldRef(HX_CSTRING("_updatePrev")) = e;
			HX_STACK_LINE(1151)
			fe->__FieldRef(HX_CSTRING("_updateNext")) = this->_updateFirst;
		}
		else{
			HX_STACK_LINE(1153)
			fe->__FieldRef(HX_CSTRING("_updateNext")) = null();
		}
		HX_STACK_LINE(1154)
		fe->__FieldRef(HX_CSTRING("_updatePrev")) = null();
		HX_STACK_LINE(1155)
		this->_updateFirst = e;
		HX_STACK_LINE(1156)
		(this->_count)++;
		HX_STACK_LINE(1157)
		if (((this->_classCount->get(fe->__Field(HX_CSTRING("_class"),true)) != (int)0))){
			HX_STACK_LINE(1157)
			this->_classCount->set(fe->__Field(HX_CSTRING("_class"),true),(int)0);
		}
		HX_STACK_LINE(1158)
		this->_classCount->set(fe->__Field(HX_CSTRING("_class"),true),(this->_classCount->get(fe->__Field(HX_CSTRING("_class"),true)) + (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addUpdate,(void))

Void Scene_obj::updateLists( hx::Null< bool >  __o_shouldAdd){
bool shouldAdd = __o_shouldAdd.Default(true);
	HX_STACK_PUSH("Scene::updateLists","com/haxepunk/Scene.hx",1080);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shouldAdd,"shouldAdd");
{
		HX_STACK_LINE(1081)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(1082)
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1085)
		if (((this->_remove->length > (int)0))){
			HX_STACK_LINE(1087)
			{
				HX_STACK_LINE(1087)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->_remove;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1087)
				while(((_g < _g1->length))){
					HX_STACK_LINE(1087)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1087)
					++(_g);
					HX_STACK_LINE(1089)
					fe = e1;
					HX_STACK_LINE(1090)
					if (((fe->__Field(HX_CSTRING("_scene"),true) == null()))){
						HX_STACK_LINE(1092)
						int idx = ::Lambda_obj::indexOf(this->_add,e1);		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(1093)
						if (((idx >= (int)0))){
							HX_STACK_LINE(1093)
							this->_add->splice(idx,(int)1);
						}
						HX_STACK_LINE(1094)
						continue;
					}
					HX_STACK_LINE(1096)
					if (((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(1097)
						continue;
					}
					HX_STACK_LINE(1098)
					e1->removed();
					HX_STACK_LINE(1099)
					fe->__FieldRef(HX_CSTRING("_scene")) = null();
					HX_STACK_LINE(1100)
					this->removeUpdate(e1);
					HX_STACK_LINE(1101)
					this->removeRender(e1);
					HX_STACK_LINE(1102)
					if (((fe->__Field(HX_CSTRING("_type"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1102)
						this->removeType(e1);
					}
					HX_STACK_LINE(1103)
					if (((fe->__Field(HX_CSTRING("_name"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1103)
						this->unregisterName(e1);
					}
					HX_STACK_LINE(1104)
					if (((bool(e1->autoClear) && bool(e1->get_hasTween())))){
						HX_STACK_LINE(1104)
						e1->clearTweens();
					}
				}
			}
			HX_STACK_LINE(1106)
			{
				HX_STACK_LINE(1106)
				Dynamic array = this->_remove;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1106)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
		HX_STACK_LINE(1110)
		if (((bool(shouldAdd) && bool((this->_add->length > (int)0))))){
			HX_STACK_LINE(1112)
			{
				HX_STACK_LINE(1112)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->_add;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1112)
				while(((_g < _g1->length))){
					HX_STACK_LINE(1112)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1112)
					++(_g);
					HX_STACK_LINE(1114)
					fe = e1;
					HX_STACK_LINE(1115)
					if (((fe->__Field(HX_CSTRING("_scene"),true) != null()))){
						HX_STACK_LINE(1115)
						continue;
					}
					HX_STACK_LINE(1116)
					fe->__FieldRef(HX_CSTRING("_scene")) = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1117)
					this->addUpdate(e1);
					HX_STACK_LINE(1118)
					this->addRender(e1);
					HX_STACK_LINE(1119)
					if (((fe->__Field(HX_CSTRING("_type"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1119)
						this->addType(e1);
					}
					HX_STACK_LINE(1120)
					if (((fe->__Field(HX_CSTRING("_name"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1120)
						this->registerName(e1);
					}
					HX_STACK_LINE(1121)
					e1->added();
				}
			}
			HX_STACK_LINE(1123)
			{
				HX_STACK_LINE(1123)
				Dynamic array = this->_add;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1123)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
		HX_STACK_LINE(1127)
		if (((this->_recycle->length > (int)0))){
			HX_STACK_LINE(1129)
			{
				HX_STACK_LINE(1129)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->_recycle;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1129)
				while(((_g < _g1->length))){
					HX_STACK_LINE(1129)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1129)
					++(_g);
					HX_STACK_LINE(1131)
					fe = e1;
					HX_STACK_LINE(1132)
					if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != null())) || bool((fe->__Field(HX_CSTRING("_recycleNext"),true) != null()))))){
						HX_STACK_LINE(1133)
						continue;
					}
					HX_STACK_LINE(1135)
					fe->__FieldRef(HX_CSTRING("_recycleNext")) = this->_recycled->get(fe->__Field(HX_CSTRING("_class"),true));
					HX_STACK_LINE(1136)
					this->_recycled->set(fe->__Field(HX_CSTRING("_class"),true),e1);
				}
			}
			HX_STACK_LINE(1138)
			{
				HX_STACK_LINE(1138)
				Dynamic array = this->_recycle;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1138)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,updateLists,(void))

::com::haxepunk::Entity Scene_obj::getInstance( ::String name){
	HX_STACK_PUSH("Scene::getInstance","com/haxepunk/Scene.hx",1071);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(1071)
	return this->_entityNames->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getInstance,return )

Void Scene_obj::getAll( Dynamic into){
{
		HX_STACK_PUSH("Scene::getAll","com/haxepunk/Scene.hx",1053);
		HX_STACK_THIS(this);
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(1054)
		Dynamic e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1057)
		while(((fe != null()))){
			HX_STACK_LINE(1059)
			e = fe;
			HX_STACK_LINE(1060)
			hx::IndexRef((into).mPtr,(n)++) = e;
			HX_STACK_LINE(1061)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getAll,(void))

Void Scene_obj::getLayer( int layer,Dynamic into){
{
		HX_STACK_PUSH("Scene::getLayer","com/haxepunk/Scene.hx",1035);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer,"layer");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(1036)
		Dynamic e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_renderLast->get(layer);		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1039)
		while(((fe != null()))){
			HX_STACK_LINE(1041)
			e = fe;
			HX_STACK_LINE(1042)
			hx::IndexRef((into).mPtr,(n)++) = e;
			HX_STACK_LINE(1043)
			fe = fe->__Field(HX_CSTRING("_updatePrev"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getLayer,(void))

Void Scene_obj::getClass( ::Class c,Dynamic into){
{
		HX_STACK_PUSH("Scene::getClass","com/haxepunk/Scene.hx",1017);
		HX_STACK_THIS(this);
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(1018)
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1020)
		while(((fe != null()))){
			HX_STACK_LINE(1022)
			if ((::Std_obj::is(fe,c))){
				HX_STACK_LINE(1023)
				hx::IndexRef((into).mPtr,(n)++) = fe;
			}
			HX_STACK_LINE(1024)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getClass,(void))

Void Scene_obj::getType( ::String type,Dynamic into){
{
		HX_STACK_PUSH("Scene::getType","com/haxepunk/Scene.hx",1000);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(1001)
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1003)
		while(((fe != null()))){
			HX_STACK_LINE(1005)
			hx::IndexRef((into).mPtr,(n)++) = fe;
			HX_STACK_LINE(1006)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getType,(void))

int Scene_obj::get_uniqueTypes( ){
	HX_STACK_PUSH("Scene::get_uniqueTypes","com/haxepunk/Scene.hx",987);
	HX_STACK_THIS(this);
	HX_STACK_LINE(988)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::haxepunk::Scene_obj *__this){
			HX_STACK_PUSH("*::closure","com/haxepunk/Scene.hx",989);
			{
				HX_STACK_LINE(989)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_typeCount);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/haxepunk/Scene.hx",989);
					{
						HX_STACK_LINE(989)
						return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(989)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(989)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		int type = __it->next();
		(i)++;
	}
	HX_STACK_LINE(990)
	return i;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_uniqueTypes,return )

int Scene_obj::get_layerNearest( ){
	HX_STACK_PUSH("Scene::get_layerNearest","com/haxepunk/Scene.hx",977);
	HX_STACK_THIS(this);
	HX_STACK_LINE(978)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(978)
		return (int)0;
	}
	HX_STACK_LINE(979)
	return this->_layerList->__get((int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layerNearest,return )

int Scene_obj::get_layerFarthest( ){
	HX_STACK_PUSH("Scene::get_layerFarthest","com/haxepunk/Scene.hx",967);
	HX_STACK_THIS(this);
	HX_STACK_LINE(968)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(968)
		return (int)0;
	}
	HX_STACK_LINE(969)
	return this->_layerList->__get((this->_layerList->length - (int)1));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layerFarthest,return )

::com::haxepunk::Entity Scene_obj::get_nearest( ){
	HX_STACK_PUSH("Scene::get_nearest","com/haxepunk/Scene.hx",957);
	HX_STACK_THIS(this);
	HX_STACK_LINE(958)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(958)
		return null();
	}
	HX_STACK_LINE(959)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderFirst->get(this->_layerList->__get((int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_nearest,return )

::com::haxepunk::Entity Scene_obj::get_farthest( ){
	HX_STACK_PUSH("Scene::get_farthest","com/haxepunk/Scene.hx",947);
	HX_STACK_THIS(this);
	HX_STACK_LINE(948)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(948)
		return null();
	}
	HX_STACK_LINE(949)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderLast->get(this->_layerList->__get((this->_layerList->length - (int)1))));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_farthest,return )

::com::haxepunk::Entity Scene_obj::layerLast( int layer){
	HX_STACK_PUSH("Scene::layerLast","com/haxepunk/Scene.hx",937);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_LINE(938)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(938)
		return null();
	}
	HX_STACK_LINE(939)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderLast->get(layer));
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerLast,return )

::com::haxepunk::Entity Scene_obj::layerFirst( int layer){
	HX_STACK_PUSH("Scene::layerFirst","com/haxepunk/Scene.hx",926);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_LINE(927)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(927)
		return null();
	}
	HX_STACK_LINE(928)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderFirst->get(layer));
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerFirst,return )

Dynamic Scene_obj::classFirst( ::Class c){
	HX_STACK_PUSH("Scene::classFirst","com/haxepunk/Scene.hx",909);
	HX_STACK_THIS(this);
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(910)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(910)
		return null();
	}
	HX_STACK_LINE(911)
	Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(912)
	while(((fe != null()))){
		HX_STACK_LINE(914)
		if ((::Std_obj::is(fe,c))){
			HX_STACK_LINE(914)
			return fe;
		}
		HX_STACK_LINE(915)
		fe = fe->__Field(HX_CSTRING("_updateNext"),true);
	}
	HX_STACK_LINE(917)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,classFirst,return )

::com::haxepunk::Entity Scene_obj::typeFirst( ::String type){
	HX_STACK_PUSH("Scene::typeFirst","com/haxepunk/Scene.hx",898);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(899)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(899)
		return null();
	}
	HX_STACK_LINE(900)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_typeFirst->get(type));
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,typeFirst,return )

int Scene_obj::get_layers( ){
	HX_STACK_PUSH("Scene::get_layers","com/haxepunk/Scene.hx",890);
	HX_STACK_THIS(this);
	HX_STACK_LINE(890)
	return this->_layerList->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layers,return )

::com::haxepunk::Entity Scene_obj::get_first( ){
	HX_STACK_PUSH("Scene::get_first","com/haxepunk/Scene.hx",884);
	HX_STACK_THIS(this);
	HX_STACK_LINE(884)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_updateFirst);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_first,return )

int Scene_obj::layerCount( int layer){
	HX_STACK_PUSH("Scene::layerCount","com/haxepunk/Scene.hx",876);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_LINE(876)
	return this->_layerCount->get(layer);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerCount,return )

int Scene_obj::classCount( ::String c){
	HX_STACK_PUSH("Scene::classCount","com/haxepunk/Scene.hx",866);
	HX_STACK_THIS(this);
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(866)
	return this->_classCount->get(c);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,classCount,return )

int Scene_obj::typeCount( ::String type){
	HX_STACK_PUSH("Scene::typeCount","com/haxepunk/Scene.hx",856);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(856)
	return this->_typeCount->get(type);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,typeCount,return )

int Scene_obj::get_count( ){
	HX_STACK_PUSH("Scene::get_count","com/haxepunk/Scene.hx",848);
	HX_STACK_THIS(this);
	HX_STACK_LINE(848)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_count,return )

::com::haxepunk::Entity Scene_obj::nearestToPoint( ::String type,Float x,Float y,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_PUSH("Scene::nearestToPoint","com/haxepunk/Scene.hx",809);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(useHitboxes,"useHitboxes");
{
		HX_STACK_LINE(810)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(815)
		if ((useHitboxes)){
			HX_STACK_LINE(817)
			while(((fe != null()))){
				HX_STACK_LINE(819)
				n = hx::TCast< com::haxepunk::Entity >::cast(fe);
				HX_STACK_LINE(820)
				dist = ::com::haxepunk::Scene_obj::squarePointRect(x,y,(((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )) - n->originX),(((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )) - n->originY),n->width,n->height);
				HX_STACK_LINE(821)
				if (((dist < nearDist))){
					HX_STACK_LINE(823)
					nearDist = dist;
					HX_STACK_LINE(824)
					near = n;
				}
				HX_STACK_LINE(826)
				fe = fe->__Field(HX_CSTRING("_typeNext"),true);
			}
			HX_STACK_LINE(828)
			return near;
		}
		HX_STACK_LINE(830)
		while(((fe != null()))){
			HX_STACK_LINE(832)
			n = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(833)
			dist = ((((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )))) * ((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) ))))) + (((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )))) * ((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) ))))));
			HX_STACK_LINE(834)
			if (((dist < nearDist))){
				HX_STACK_LINE(836)
				nearDist = dist;
				HX_STACK_LINE(837)
				near = n;
			}
			HX_STACK_LINE(839)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(841)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,nearestToPoint,return )

::com::haxepunk::Entity Scene_obj::nearestToClass( ::String type,::com::haxepunk::Entity e,Dynamic classType,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_PUSH("Scene::nearestToClass","com/haxepunk/Scene.hx",777);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(classType,"classType");
	HX_STACK_ARG(useHitboxes,"useHitboxes");
{
		HX_STACK_LINE(778)
		if ((useHitboxes)){
			HX_STACK_LINE(778)
			return this->nearestToRect(type,(((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX),(((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(779)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		Float dist;		HX_STACK_VAR(dist,"dist");
		Float x = (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX);		HX_STACK_VAR(x,"x");
		Float y = (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(786)
		while(((fe != null()))){
			HX_STACK_LINE(788)
			n = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(789)
			dist = ((((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )))) * ((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) ))))) + (((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )))) * ((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) ))))));
			HX_STACK_LINE(790)
			if (((bool((dist < nearDist)) && bool(::Std_obj::is(e,classType))))){
				HX_STACK_LINE(792)
				nearDist = dist;
				HX_STACK_LINE(793)
				near = n;
			}
			HX_STACK_LINE(795)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(797)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,nearestToClass,return )

::com::haxepunk::Entity Scene_obj::nearestToEntity( ::String type,::com::haxepunk::Entity e,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_PUSH("Scene::nearestToEntity","com/haxepunk/Scene.hx",744);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(useHitboxes,"useHitboxes");
{
		HX_STACK_LINE(745)
		if ((useHitboxes)){
			HX_STACK_LINE(745)
			return this->nearestToRect(type,(((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX),(((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(746)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		Float dist;		HX_STACK_VAR(dist,"dist");
		Float x = (((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) )) - e->originX);		HX_STACK_VAR(x,"x");
		Float y = (((  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) )) - e->originY);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(753)
		while(((fe != null()))){
			HX_STACK_LINE(755)
			n = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(756)
			dist = ((((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )))) * ((x - ((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) ))))) + (((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )))) * ((y - ((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) ))))));
			HX_STACK_LINE(757)
			if (((dist < nearDist))){
				HX_STACK_LINE(759)
				nearDist = dist;
				HX_STACK_LINE(760)
				near = n;
			}
			HX_STACK_LINE(762)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(764)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,nearestToEntity,return )

::com::haxepunk::Entity Scene_obj::nearestToRect( ::String type,Float x,Float y,Float width,Float height){
	HX_STACK_PUSH("Scene::nearestToRect","com/haxepunk/Scene.hx",717);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(718)
	::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
	Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
	::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
	Float dist;		HX_STACK_VAR(dist,"dist");
	HX_STACK_LINE(722)
	while(((fe != null()))){
		HX_STACK_LINE(724)
		n = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(725)
		dist = ::com::haxepunk::Scene_obj::squareRects(x,y,width,height,(((  ((n->followCamera)) ? Float((n->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(n->x) )) - n->originX),(((  ((n->followCamera)) ? Float((n->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(n->y) )) - n->originY),n->width,n->height);
		HX_STACK_LINE(726)
		if (((dist < nearDist))){
			HX_STACK_LINE(728)
			nearDist = dist;
			HX_STACK_LINE(729)
			near = n;
		}
		HX_STACK_LINE(731)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(733)
	return near;
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,nearestToRect,return )

Void Scene_obj::collidePointInto( ::String type,Float pX,Float pY,Dynamic into){
{
		HX_STACK_PUSH("Scene::collidePointInto","com/haxepunk/Scene.hx",695);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(pX,"pX");
		HX_STACK_ARG(pY,"pY");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(696)
		Dynamic e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(699)
		while(((fe != null()))){
			HX_STACK_LINE(701)
			e = fe;
			HX_STACK_LINE(702)
			if (((bool(e->__Field(HX_CSTRING("collidable"),true)) && bool(e->__Field(HX_CSTRING("collidePoint"),true)((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) ),(  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) ),pX,pY))))){
				HX_STACK_LINE(702)
				hx::IndexRef((into).mPtr,(n)++) = e;
			}
			HX_STACK_LINE(703)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,collidePointInto,(void))

Void Scene_obj::collideCircleInto( ::String type,Float circleX,Float circleY,Float radius,Dynamic into){
{
		HX_STACK_PUSH("Scene::collideCircleInto","com/haxepunk/Scene.hx",672);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(circleX,"circleX");
		HX_STACK_ARG(circleY,"circleY");
		HX_STACK_ARG(radius,"radius");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(673)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(677)
		hx::MultEq(radius,radius);
		HX_STACK_LINE(678)
		while(((fe != null()))){
			HX_STACK_LINE(680)
			e = fe;
			struct _Function_2_1{
				inline static Float Block( ::com::haxepunk::Entity &e,Float &circleX,Float &circleY){
					HX_STACK_PUSH("*::closure","com/haxepunk/Scene.hx",681);
					{
						HX_STACK_LINE(681)
						Float x2 = (  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) );		HX_STACK_VAR(x2,"x2");
						Float y2 = (  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) );		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(681)
						return ((((x2 - circleX)) * ((x2 - circleX))) + (((y2 - circleY)) * ((y2 - circleY))));
					}
					return null();
				}
			};
			HX_STACK_LINE(681)
			if (((_Function_2_1::Block(e,circleX,circleY) < radius))){
				HX_STACK_LINE(681)
				hx::IndexRef((into).mPtr,(n)++) = e;
			}
			HX_STACK_LINE(682)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,collideCircleInto,(void))

Void Scene_obj::collideRectInto( ::String type,Float rX,Float rY,Float rWidth,Float rHeight,Dynamic into){
{
		HX_STACK_PUSH("Scene::collideRectInto","com/haxepunk/Scene.hx",650);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(rX,"rX");
		HX_STACK_ARG(rY,"rY");
		HX_STACK_ARG(rWidth,"rWidth");
		HX_STACK_ARG(rHeight,"rHeight");
		HX_STACK_ARG(into,"into");
		HX_STACK_LINE(651)
		Dynamic e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(654)
		while(((fe != null()))){
			HX_STACK_LINE(656)
			e = fe;
			HX_STACK_LINE(657)
			if (((bool(e->__Field(HX_CSTRING("collidable"),true)) && bool(e->__Field(HX_CSTRING("collideRect"),true)((  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->__Field(HX_CSTRING("x"),true)) ),(  ((e->__Field(HX_CSTRING("followCamera"),true))) ? Float((e->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->__Field(HX_CSTRING("y"),true)) ),rX,rY,rWidth,rHeight))))){
				HX_STACK_LINE(657)
				hx::IndexRef((into).mPtr,(n)++) = e;
			}
			HX_STACK_LINE(658)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Scene_obj,collideRectInto,(void))

::com::haxepunk::Entity Scene_obj::collideLine( ::String type,int fromX,int fromY,int toX,int toY,hx::Null< int >  __o_precision,::flash::geom::Point p){
int precision = __o_precision.Default(1);
	HX_STACK_PUSH("Scene::collideLine","com/haxepunk/Scene.hx",521);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(fromX,"fromX");
	HX_STACK_ARG(fromY,"fromY");
	HX_STACK_ARG(toX,"toX");
	HX_STACK_ARG(toY,"toY");
	HX_STACK_ARG(precision,"precision");
	HX_STACK_ARG(p,"p");
{
		HX_STACK_LINE(523)
		if (((precision < (int)1))){
			HX_STACK_LINE(523)
			precision = (int)1;
		}
		HX_STACK_LINE(524)
		if (((::Math_obj::sqrt(((((toX - fromX)) * ((toX - fromX))) + (((toY - fromY)) * ((toY - fromY))))) < precision))){
			HX_STACK_LINE(525)
			if (((p != null()))){
				HX_STACK_LINE(528)
				if (((bool((fromX == toX)) && bool((fromY == toY))))){
					HX_STACK_LINE(530)
					p->x = toX;
					HX_STACK_LINE(530)
					p->y = toY;
					HX_STACK_LINE(531)
					return this->collidePoint(type,toX,toY);
				}
				HX_STACK_LINE(533)
				return this->collideLine(type,fromX,fromY,toX,toY,(int)1,p);
			}
			else{
				HX_STACK_LINE(535)
				return this->collidePoint(type,fromX,toY);
			}
		}
		HX_STACK_LINE(539)
		int xDelta = ::Std_obj::_int(::Math_obj::abs((toX - fromX)));		HX_STACK_VAR(xDelta,"xDelta");
		int yDelta = ::Std_obj::_int(::Math_obj::abs((toY - fromY)));		HX_STACK_VAR(yDelta,"yDelta");
		Float xSign = (  (((toX > fromX))) ? Float(precision) : Float(-(precision)) );		HX_STACK_VAR(xSign,"xSign");
		Float ySign = (  (((toY > fromY))) ? Float(precision) : Float(-(precision)) );		HX_STACK_VAR(ySign,"ySign");
		Float x = fromX;		HX_STACK_VAR(x,"x");
		Float y = fromY;		HX_STACK_VAR(y,"y");
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(546)
		if (((xDelta > yDelta))){
			HX_STACK_LINE(548)
			hx::MultEq(ySign,(Float(yDelta) / Float(xDelta)));
			HX_STACK_LINE(549)
			if (((xSign > (int)0))){
				HX_STACK_LINE(550)
				while(((x < toX))){
					HX_STACK_LINE(553)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(555)
						if (((p == null()))){
							HX_STACK_LINE(555)
							return e;
						}
						HX_STACK_LINE(556)
						if (((precision < (int)2))){
							HX_STACK_LINE(558)
							p->x = (x - xSign);
							HX_STACK_LINE(558)
							p->y = (y - ySign);
							HX_STACK_LINE(559)
							return e;
						}
						HX_STACK_LINE(561)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(563)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(563)
					hx::AddEq(y,ySign);
				}
			}
			else{
				HX_STACK_LINE(567)
				while(((x > toX))){
					HX_STACK_LINE(570)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(572)
						if (((p == null()))){
							HX_STACK_LINE(572)
							return e;
						}
						HX_STACK_LINE(573)
						if (((precision < (int)2))){
							HX_STACK_LINE(575)
							p->x = (x - xSign);
							HX_STACK_LINE(575)
							p->y = (y - ySign);
							HX_STACK_LINE(576)
							return e;
						}
						HX_STACK_LINE(578)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(580)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(580)
					hx::AddEq(y,ySign);
				}
			}
		}
		else{
			HX_STACK_LINE(586)
			hx::MultEq(xSign,(Float(xDelta) / Float(yDelta)));
			HX_STACK_LINE(587)
			if (((ySign > (int)0))){
				HX_STACK_LINE(588)
				while(((y < toY))){
					HX_STACK_LINE(591)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(593)
						if (((p == null()))){
							HX_STACK_LINE(593)
							return e;
						}
						HX_STACK_LINE(594)
						if (((precision < (int)2))){
							HX_STACK_LINE(596)
							p->x = (x - xSign);
							HX_STACK_LINE(596)
							p->y = (y - ySign);
							HX_STACK_LINE(597)
							return e;
						}
						HX_STACK_LINE(599)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(601)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(601)
					hx::AddEq(y,ySign);
				}
			}
			else{
				HX_STACK_LINE(605)
				while(((y > toY))){
					HX_STACK_LINE(608)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(610)
						if (((p == null()))){
							HX_STACK_LINE(610)
							return e;
						}
						HX_STACK_LINE(611)
						if (((precision < (int)2))){
							HX_STACK_LINE(613)
							p->x = (x - xSign);
							HX_STACK_LINE(613)
							p->y = (y - ySign);
							HX_STACK_LINE(614)
							return e;
						}
						HX_STACK_LINE(616)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(618)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(618)
					hx::AddEq(y,ySign);
				}
			}
		}
		HX_STACK_LINE(624)
		if (((precision > (int)1))){
			HX_STACK_LINE(626)
			if (((p == null()))){
				HX_STACK_LINE(626)
				return this->collidePoint(type,toX,toY);
			}
			HX_STACK_LINE(627)
			if (((this->collidePoint(type,toX,toY) != null()))){
				HX_STACK_LINE(627)
				return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
			}
		}
		HX_STACK_LINE(631)
		if (((p != null()))){
			HX_STACK_LINE(633)
			p->x = toX;
			HX_STACK_LINE(634)
			p->y = toY;
		}
		HX_STACK_LINE(636)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC7(Scene_obj,collideLine,return )

::com::haxepunk::Entity Scene_obj::collidePoint( ::String type,Float pX,Float pY){
	HX_STACK_PUSH("Scene::collidePoint","com/haxepunk/Scene.hx",487);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(pX,"pX");
	HX_STACK_ARG(pY,"pY");
	HX_STACK_LINE(488)
	::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
	Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	::com::haxepunk::Entity result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(491)
	while(((fe != null()))){
		HX_STACK_LINE(493)
		e = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(495)
		if (((bool(e->collidable) && bool(e->collidePoint((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ),(  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ),pX,pY))))){
			HX_STACK_LINE(495)
			if (((result == null()))){
				HX_STACK_LINE(497)
				result = e;
			}
			else{
				HX_STACK_LINE(500)
				if (((e->_layer < result->_layer))){
					HX_STACK_LINE(500)
					result = e;
				}
			}
		}
		HX_STACK_LINE(504)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(506)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,collidePoint,return )

::com::haxepunk::Entity Scene_obj::collideRect( ::String type,Float rX,Float rY,Float rWidth,Float rHeight){
	HX_STACK_PUSH("Scene::collideRect","com/haxepunk/Scene.hx",467);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(rX,"rX");
	HX_STACK_ARG(rY,"rY");
	HX_STACK_ARG(rWidth,"rWidth");
	HX_STACK_ARG(rHeight,"rHeight");
	HX_STACK_LINE(468)
	::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
	Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(470)
	while(((fe != null()))){
		HX_STACK_LINE(472)
		e = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(473)
		if (((bool(e->collidable) && bool(e->collideRect((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ),(  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ),rX,rY,rWidth,rHeight))))){
			HX_STACK_LINE(473)
			return e;
		}
		HX_STACK_LINE(474)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(476)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,collideRect,return )

bool Scene_obj::isAtBack( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::isAtBack","com/haxepunk/Scene.hx",452);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(453)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(454)
	return (fe->__Field(HX_CSTRING("_renderNext"),true) == null());
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isAtBack,return )

bool Scene_obj::isAtFront( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::isAtFront","com/haxepunk/Scene.hx",441);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(442)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(443)
	return (fe->__Field(HX_CSTRING("_renderPrev"),true) == null());
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isAtFront,return )

bool Scene_obj::sendBackward( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::sendBackward","com/haxepunk/Scene.hx",419);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(420)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(421)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderNext"),true) == null()))))){
		HX_STACK_LINE(421)
		return false;
	}
	HX_STACK_LINE(423)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(424)
	if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
		HX_STACK_LINE(424)
		fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	}
	else{
		HX_STACK_LINE(425)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderNext"),true));
	}
	HX_STACK_LINE(427)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(428)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true)->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(429)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = e;
	HX_STACK_LINE(430)
	if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
		HX_STACK_LINE(430)
		fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = e;
	}
	else{
		HX_STACK_LINE(431)
		this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	}
	HX_STACK_LINE(432)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sendBackward,return )

bool Scene_obj::bringForward( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::bringForward","com/haxepunk/Scene.hx",397);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(398)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(399)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderPrev"),true) == null()))))){
		HX_STACK_LINE(399)
		return false;
	}
	HX_STACK_LINE(401)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(402)
	if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
		HX_STACK_LINE(402)
		fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	}
	else{
		HX_STACK_LINE(403)
		this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderPrev"),true));
	}
	HX_STACK_LINE(405)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(406)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true)->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(407)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = e;
	HX_STACK_LINE(408)
	if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
		HX_STACK_LINE(408)
		fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = e;
	}
	else{
		HX_STACK_LINE(409)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	}
	HX_STACK_LINE(410)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bringForward,return )

bool Scene_obj::sendToBack( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::sendToBack","com/haxepunk/Scene.hx",376);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(377)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(378)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderNext"),true) == null()))))){
		HX_STACK_LINE(378)
		return false;
	}
	HX_STACK_LINE(380)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(381)
	if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
		HX_STACK_LINE(381)
		fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	}
	else{
		HX_STACK_LINE(382)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderNext"),true));
	}
	HX_STACK_LINE(384)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = this->_renderLast->get(fe->__Field(HX_CSTRING("_layer"),true));
	HX_STACK_LINE(385)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = e;
	HX_STACK_LINE(386)
	this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	HX_STACK_LINE(387)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = null();
	HX_STACK_LINE(388)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sendToBack,return )

bool Scene_obj::bringToFront( ::com::haxepunk::Entity e){
	HX_STACK_PUSH("Scene::bringToFront","com/haxepunk/Scene.hx",355);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(356)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(357)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderPrev"),true) == null()))))){
		HX_STACK_LINE(357)
		return false;
	}
	HX_STACK_LINE(359)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(360)
	if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
		HX_STACK_LINE(360)
		fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	}
	else{
		HX_STACK_LINE(361)
		this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderPrev"),true));
	}
	HX_STACK_LINE(363)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = this->_renderFirst->get(fe->__Field(HX_CSTRING("_layer"),true));
	HX_STACK_LINE(364)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = e;
	HX_STACK_LINE(365)
	this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	HX_STACK_LINE(366)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = null();
	HX_STACK_LINE(367)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bringToFront,return )

Void Scene_obj::clearRecycledAll( ){
{
		HX_STACK_PUSH("Scene::clearRecycledAll","com/haxepunk/Scene.hx",339);
		HX_STACK_THIS(this);
		HX_STACK_LINE(340)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		struct _Function_1_1{
			inline static Dynamic Block( ::com::haxepunk::Scene_obj *__this){
				HX_STACK_PUSH("*::closure","com/haxepunk/Scene.hx",342);
				{
					HX_STACK_LINE(342)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_recycled);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/haxepunk/Scene.hx",342);
						{
							HX_STACK_LINE(342)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(342)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(342)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::haxepunk::Entity e1 = __it->next();
			{
				HX_STACK_LINE(344)
				fe = e1;
				HX_STACK_LINE(345)
				this->clearRecycled(fe->__Field(HX_CSTRING("_class"),true));
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clearRecycledAll,(void))

Void Scene_obj::clearRecycled( ::String classType){
{
		HX_STACK_PUSH("Scene::clearRecycled","com/haxepunk/Scene.hx",321);
		HX_STACK_THIS(this);
		HX_STACK_ARG(classType,"classType");
		HX_STACK_LINE(322)
		::com::haxepunk::Entity e = this->_recycled->get(classType);		HX_STACK_VAR(e,"e");
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(325)
		while(((e != null()))){
			HX_STACK_LINE(327)
			fe = e;
			HX_STACK_LINE(328)
			n = fe->__Field(HX_CSTRING("_recycleNext"),true);
			HX_STACK_LINE(329)
			fe->__FieldRef(HX_CSTRING("_recycleNext")) = null();
			HX_STACK_LINE(330)
			e = n;
		}
		HX_STACK_LINE(332)
		this->_recycled->set(classType,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,clearRecycled,(void))

Dynamic Scene_obj::recycle( Dynamic e){
	HX_STACK_PUSH("Scene::recycle","com/haxepunk/Scene.hx",311);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(312)
	this->_recycle[this->_recycle->length] = e;
	HX_STACK_LINE(313)
	return this->remove(e);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,recycle,return )

Dynamic Scene_obj::create( ::Class classType,hx::Null< bool >  __o_addToScene,Dynamic constructorsArgs){
bool addToScene = __o_addToScene.Default(true);
	HX_STACK_PUSH("Scene::create","com/haxepunk/Scene.hx",281);
	HX_STACK_THIS(this);
	HX_STACK_ARG(classType,"classType");
	HX_STACK_ARG(addToScene,"addToScene");
	HX_STACK_ARG(constructorsArgs,"constructorsArgs");
{
		HX_STACK_LINE(282)
		::String className = ::Type_obj::getClassName(classType);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(283)
		Dynamic fe = this->_recycled->get(className);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(284)
		if (((fe != null()))){
			HX_STACK_LINE(286)
			this->_recycled->set(className,fe->__Field(HX_CSTRING("_recycleNext"),true));
			HX_STACK_LINE(287)
			fe->__FieldRef(HX_CSTRING("_recycleNext")) = null();
		}
		else{
			HX_STACK_LINE(290)
			if (((constructorsArgs != null()))){
				HX_STACK_LINE(292)
				fe = ::Type_obj::createInstance(classType,constructorsArgs);
			}
			else{
				HX_STACK_LINE(294)
				fe = ::Type_obj::createInstance(classType,Dynamic( Array_obj<Dynamic>::__new()));
			}
		}
		HX_STACK_LINE(296)
		Dynamic e = fe;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(298)
		if ((addToScene)){
			HX_STACK_LINE(299)
			return this->add(e);
		}
		HX_STACK_LINE(301)
		return e;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,create,return )

::com::haxepunk::Entity Scene_obj::addMask( ::com::haxepunk::Mask mask,::String type,hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_PUSH("Scene::addMask","com/haxepunk/Scene.hx",266);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mask,"mask");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(267)
		::com::haxepunk::Entity e = ::com::haxepunk::Entity_obj::__new(x,y,null(),mask);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(268)
		if (((type != HX_CSTRING("")))){
			HX_STACK_LINE(268)
			e->set_type(type);
		}
		HX_STACK_LINE(269)
		e->active = e->visible = false;
		HX_STACK_LINE(270)
		return this->add(e);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,addMask,return )

::com::haxepunk::Entity Scene_obj::addGraphic( ::com::haxepunk::Graphic graphic,hx::Null< int >  __o_layer,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
int layer = __o_layer.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_PUSH("Scene::addGraphic","com/haxepunk/Scene.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphic,"graphic");
	HX_STACK_ARG(layer,"layer");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(251)
		::com::haxepunk::Entity e = ::com::haxepunk::Entity_obj::__new(x,y,graphic,null());		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(252)
		e->set_layer(layer);
		HX_STACK_LINE(253)
		e->active = false;
		HX_STACK_LINE(254)
		return this->add(e);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,addGraphic,return )

Void Scene_obj::removeList( Dynamic list){
{
		HX_STACK_PUSH("Scene::removeList","com/haxepunk/Scene.hx",237);
		HX_STACK_THIS(this);
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(237)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic e = __it->next();
			this->remove(e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeList,(void))

Void Scene_obj::addList( Dynamic list){
{
		HX_STACK_PUSH("Scene::addList","com/haxepunk/Scene.hx",228);
		HX_STACK_THIS(this);
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(228)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic e = __it->next();
			this->add(e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addList,(void))

Void Scene_obj::removeAll( ){
{
		HX_STACK_PUSH("Scene::removeAll","com/haxepunk/Scene.hx",214);
		HX_STACK_THIS(this);
		HX_STACK_LINE(215)
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(216)
		while(((fe != null()))){
			HX_STACK_LINE(218)
			this->_remove[this->_remove->length] = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(219)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,removeAll,(void))

Dynamic Scene_obj::remove( Dynamic e){
	HX_STACK_PUSH("Scene::remove","com/haxepunk/Scene.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(206)
	this->_remove[this->_remove->length] = e;
	HX_STACK_LINE(207)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,remove,return )

Dynamic Scene_obj::add( Dynamic e){
	HX_STACK_PUSH("Scene::add","com/haxepunk/Scene.hx",194);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(195)
	this->_add[this->_add->length] = e;
	HX_STACK_LINE(196)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,add,return )

::flash::display::Sprite Scene_obj::get_sprite( ){
	HX_STACK_PUSH("Scene::get_sprite","com/haxepunk/Scene.hx",184);
	HX_STACK_THIS(this);
	HX_STACK_LINE(184)
	return this->_sprite;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_sprite,return )

int Scene_obj::get_mouseY( ){
	HX_STACK_PUSH("Scene::get_mouseY","com/haxepunk/Scene.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_LINE(175)
	return ::Std_obj::_int((::com::haxepunk::HXP_obj::screen->get_mouseY() + this->camera->y));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseY,return )

int Scene_obj::get_mouseX( ){
	HX_STACK_PUSH("Scene::get_mouseX","com/haxepunk/Scene.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_LINE(166)
	return ::Std_obj::_int((::com::haxepunk::HXP_obj::screen->get_mouseX() + this->camera->x));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseX,return )

Void Scene_obj::render( ){
{
		HX_STACK_PUSH("Scene::render","com/haxepunk/Scene.hx",131);
		HX_STACK_THIS(this);
		HX_STACK_LINE(133)
		if ((this->_layerSort)){
			HX_STACK_LINE(135)
			if (((this->_layerList->length > (int)1))){
				HX_STACK_LINE(135)
				this->_layerList->sort(this->layerSort_dyn());
			}
			HX_STACK_LINE(136)
			this->_layerSort = false;
		}
		HX_STACK_LINE(139)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(140)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_scene = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(140)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics()->clear();
		}
		HX_STACK_LINE(143)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< int > _g1 = this->_layerList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(145)
			while(((_g < _g1->length))){
				HX_STACK_LINE(145)
				int layer = _g1->__get(_g);		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(145)
				++(_g);
				HX_STACK_LINE(147)
				if ((!(((bool(!(this->_layerDisplay->exists(layer))) || bool(this->_layerDisplay->get(layer))))))){
					HX_STACK_LINE(147)
					continue;
				}
				HX_STACK_LINE(148)
				fe = this->_renderLast->get(layer);
				HX_STACK_LINE(149)
				while(((fe != null()))){
					HX_STACK_LINE(151)
					e = hx::TCast< com::haxepunk::Entity >::cast(fe);
					HX_STACK_LINE(152)
					if ((e->visible)){
						HX_STACK_LINE(152)
						e->render();
					}
					HX_STACK_LINE(153)
					fe = fe->__Field(HX_CSTRING("_renderPrev"),true);
				}
			}
		}
		HX_STACK_LINE(157)
		if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
			HX_STACK_LINE(158)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas != null()))){
				HX_STACK_LINE(158)
				::com::haxepunk::graphics::atlas::AtlasData _this = ::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(158)
				if (((_this->_dataIndex != (int)0))){
					HX_STACK_LINE(158)
					if (((_this->_dataIndex < _this->_data->length))){
						HX_STACK_LINE(158)
						_this->_data->splice(_this->_dataIndex,(_this->_data->length - _this->_dataIndex));
					}
					HX_STACK_LINE(158)
					_this->_dataIndex = (int)0;
					HX_STACK_LINE(158)
					_this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->_sprite->get_graphics(),_this->_data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this->_renderFlags);
				}
			}
			HX_STACK_LINE(158)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_lastAtlas = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,render,(void))

int Scene_obj::layerSort( int a,int b){
	HX_STACK_PUSH("Scene::layerSort","com/haxepunk/Scene.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(121)
	return (b - a);
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,layerSort,return )

bool Scene_obj::layerVisible( int layer){
	HX_STACK_PUSH("Scene::layerVisible","com/haxepunk/Scene.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_LINE(113)
	return (bool(!(this->_layerDisplay->exists(layer))) || bool(this->_layerDisplay->get(layer)));
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerVisible,return )

Void Scene_obj::showLayer( int layer,hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_PUSH("Scene::showLayer","com/haxepunk/Scene.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_ARG(show,"show");
{
		HX_STACK_LINE(105)
		this->_layerDisplay->set(layer,show);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,showLayer,(void))

Void Scene_obj::update( ){
{
		HX_STACK_PUSH("Scene::update","com/haxepunk/Scene.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_LINE(84)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(86)
		while(((fe != null()))){
			HX_STACK_LINE(88)
			e = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(89)
			if ((e->active)){
				HX_STACK_LINE(91)
				if ((e->get_hasTween())){
					HX_STACK_LINE(91)
					e->updateTweens();
				}
				HX_STACK_LINE(92)
				e->update();
			}
			HX_STACK_LINE(94)
			if (((bool((e->_graphic != null())) && bool(e->_graphic->active)))){
				HX_STACK_LINE(94)
				e->_graphic->update();
			}
			HX_STACK_LINE(95)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


Void Scene_obj::focusLost( ){
{
		HX_STACK_PUSH("Scene::focusLost","com/haxepunk/Scene.hx",74);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,focusLost,(void))

Void Scene_obj::focusGained( ){
{
		HX_STACK_PUSH("Scene::focusGained","com/haxepunk/Scene.hx",69);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,focusGained,(void))

Void Scene_obj::end( ){
{
		HX_STACK_PUSH("Scene::end","com/haxepunk/Scene.hx",64);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,end,(void))

Void Scene_obj::begin( ){
{
		HX_STACK_PUSH("Scene::begin","com/haxepunk/Scene.hx",59);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,begin,(void))

Float Scene_obj::squareRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_PUSH("Scene::squareRects","com/haxepunk/Scene.hx",1283);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(w1,"w1");
	HX_STACK_ARG(h1,"h1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_ARG(w2,"w2");
	HX_STACK_ARG(h2,"h2");
	HX_STACK_LINE(1284)
	if (((bool((x1 < (x2 + w2))) && bool((x2 < (x1 + w1)))))){
		HX_STACK_LINE(1286)
		if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
			HX_STACK_LINE(1286)
			return (int)0;
		}
		HX_STACK_LINE(1287)
		if (((y1 > y2))){
			HX_STACK_LINE(1287)
			return (((y1 - ((y2 + h2)))) * ((y1 - ((y2 + h2)))));
		}
		HX_STACK_LINE(1288)
		return (((y2 - ((y1 + h1)))) * ((y2 - ((y1 + h1)))));
	}
	HX_STACK_LINE(1290)
	if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
		HX_STACK_LINE(1292)
		if (((x1 > x2))){
			HX_STACK_LINE(1292)
			return (((x1 - ((x2 + w2)))) * ((x1 - ((x2 + w2)))));
		}
		HX_STACK_LINE(1293)
		return (((x2 - ((x1 + w1)))) * ((x2 - ((x1 + w1)))));
	}
	HX_STACK_LINE(1295)
	if (((x1 > x2))){
		HX_STACK_LINE(1297)
		if (((y1 > y2))){
			HX_STACK_LINE(1297)
			return ::com::haxepunk::Scene_obj::squarePoints(x1,y1,(x2 + w2),(y2 + h2));
		}
		HX_STACK_LINE(1298)
		return ::com::haxepunk::Scene_obj::squarePoints(x1,(y1 + h1),(x2 + w2),y2);
	}
	HX_STACK_LINE(1300)
	if (((y1 > y2))){
		HX_STACK_LINE(1300)
		return ::com::haxepunk::Scene_obj::squarePoints((x1 + w1),y1,x2,(y2 + h2));
	}
	HX_STACK_LINE(1301)
	return ::com::haxepunk::Scene_obj::squarePoints((x1 + w1),(y1 + h1),x2,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Scene_obj,squareRects,return )

Float Scene_obj::squarePoints( Float x1,Float y1,Float x2,Float y2){
	HX_STACK_PUSH("Scene::squarePoints","com/haxepunk/Scene.hx",1306);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_LINE(1306)
	return ((((x1 - x2)) * ((x1 - x2))) + (((y1 - y2)) * ((y1 - y2))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,squarePoints,return )

Float Scene_obj::squarePointRect( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_PUSH("Scene::squarePointRect","com/haxepunk/Scene.hx",1312);
	HX_STACK_ARG(px,"px");
	HX_STACK_ARG(py,"py");
	HX_STACK_ARG(rx,"rx");
	HX_STACK_ARG(ry,"ry");
	HX_STACK_ARG(rw,"rw");
	HX_STACK_ARG(rh,"rh");
	HX_STACK_LINE(1313)
	if (((bool((px >= rx)) && bool((px <= (rx + rw)))))){
		HX_STACK_LINE(1315)
		if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
			HX_STACK_LINE(1315)
			return (int)0;
		}
		HX_STACK_LINE(1316)
		if (((py > ry))){
			HX_STACK_LINE(1316)
			return (((py - ((ry + rh)))) * ((py - ((ry + rh)))));
		}
		HX_STACK_LINE(1317)
		return (((ry - py)) * ((ry - py)));
	}
	HX_STACK_LINE(1319)
	if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
		HX_STACK_LINE(1321)
		if (((px > rx))){
			HX_STACK_LINE(1321)
			return (((px - ((rx + rw)))) * ((px - ((rx + rw)))));
		}
		HX_STACK_LINE(1322)
		return (((rx - px)) * ((rx - px)));
	}
	HX_STACK_LINE(1324)
	if (((px > rx))){
		HX_STACK_LINE(1326)
		if (((py > ry))){
			HX_STACK_LINE(1326)
			return ::com::haxepunk::Scene_obj::squarePoints(px,py,(rx + rw),(ry + rh));
		}
		HX_STACK_LINE(1327)
		return ::com::haxepunk::Scene_obj::squarePoints(px,py,(rx + rw),ry);
	}
	HX_STACK_LINE(1329)
	if (((py > ry))){
		HX_STACK_LINE(1329)
		return ::com::haxepunk::Scene_obj::squarePoints(px,py,rx,(ry + rh));
	}
	HX_STACK_LINE(1330)
	return ::com::haxepunk::Scene_obj::squarePoints(px,py,rx,ry);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Scene_obj,squarePointRect,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(_entityNames,"_entityNames");
	HX_MARK_MEMBER_NAME(_recycled,"_recycled");
	HX_MARK_MEMBER_NAME(_typeCount,"_typeCount");
	HX_MARK_MEMBER_NAME(_typeFirst,"_typeFirst");
	HX_MARK_MEMBER_NAME(_classCount,"_classCount");
	HX_MARK_MEMBER_NAME(_renderLast,"_renderLast");
	HX_MARK_MEMBER_NAME(_renderFirst,"_renderFirst");
	HX_MARK_MEMBER_NAME(_layerCount,"_layerCount");
	HX_MARK_MEMBER_NAME(_layerDisplay,"_layerDisplay");
	HX_MARK_MEMBER_NAME(_layerList,"_layerList");
	HX_MARK_MEMBER_NAME(_layerSort,"_layerSort");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_updateFirst,"_updateFirst");
	HX_MARK_MEMBER_NAME(_recycle,"_recycle");
	HX_MARK_MEMBER_NAME(_remove,"_remove");
	HX_MARK_MEMBER_NAME(_add,"_add");
	HX_MARK_MEMBER_NAME(uniqueTypes,"uniqueTypes");
	HX_MARK_MEMBER_NAME(layerNearest,"layerNearest");
	HX_MARK_MEMBER_NAME(layerFarthest,"layerFarthest");
	HX_MARK_MEMBER_NAME(nearest,"nearest");
	HX_MARK_MEMBER_NAME(farthest,"farthest");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(visible,"visible");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_entityNames,"_entityNames");
	HX_VISIT_MEMBER_NAME(_recycled,"_recycled");
	HX_VISIT_MEMBER_NAME(_typeCount,"_typeCount");
	HX_VISIT_MEMBER_NAME(_typeFirst,"_typeFirst");
	HX_VISIT_MEMBER_NAME(_classCount,"_classCount");
	HX_VISIT_MEMBER_NAME(_renderLast,"_renderLast");
	HX_VISIT_MEMBER_NAME(_renderFirst,"_renderFirst");
	HX_VISIT_MEMBER_NAME(_layerCount,"_layerCount");
	HX_VISIT_MEMBER_NAME(_layerDisplay,"_layerDisplay");
	HX_VISIT_MEMBER_NAME(_layerList,"_layerList");
	HX_VISIT_MEMBER_NAME(_layerSort,"_layerSort");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_updateFirst,"_updateFirst");
	HX_VISIT_MEMBER_NAME(_recycle,"_recycle");
	HX_VISIT_MEMBER_NAME(_remove,"_remove");
	HX_VISIT_MEMBER_NAME(_add,"_add");
	HX_VISIT_MEMBER_NAME(uniqueTypes,"uniqueTypes");
	HX_VISIT_MEMBER_NAME(layerNearest,"layerNearest");
	HX_VISIT_MEMBER_NAME(layerFarthest,"layerFarthest");
	HX_VISIT_MEMBER_NAME(nearest,"nearest");
	HX_VISIT_MEMBER_NAME(farthest,"farthest");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_add") ) { return _add; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return inCallProp ? get_first() : first; }
		if (HX_FIELD_EQ(inName,"count") ) { return get_count(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		if (HX_FIELD_EQ(inName,"getAll") ) { return getAll_dyn(); }
		if (HX_FIELD_EQ(inName,"layers") ) { return inCallProp ? get_layers() : layers; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return inCallProp ? get_sprite() : sprite; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_remove") ) { return _remove; }
		if (HX_FIELD_EQ(inName,"addType") ) { return addType_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"nearest") ) { return inCallProp ? get_nearest() : nearest; }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"addMask") ) { return addMask_dyn(); }
		if (HX_FIELD_EQ(inName,"addList") ) { return addList_dyn(); }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_recycle") ) { return _recycle; }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getClass") ) { return getClass_dyn(); }
		if (HX_FIELD_EQ(inName,"farthest") ) { return inCallProp ? get_farthest() : farthest; }
		if (HX_FIELD_EQ(inName,"isAtBack") ) { return isAtBack_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_recycled") ) { return _recycled; }
		if (HX_FIELD_EQ(inName,"addRender") ) { return addRender_dyn(); }
		if (HX_FIELD_EQ(inName,"addUpdate") ) { return addUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"layerLast") ) { return layerLast_dyn(); }
		if (HX_FIELD_EQ(inName,"typeFirst") ) { return typeFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"get_first") ) { return get_first_dyn(); }
		if (HX_FIELD_EQ(inName,"typeCount") ) { return typeCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"isAtFront") ) { return isAtFront_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"layerSort") ) { return layerSort_dyn(); }
		if (HX_FIELD_EQ(inName,"showLayer") ) { return showLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_typeCount") ) { return _typeCount; }
		if (HX_FIELD_EQ(inName,"_typeFirst") ) { return _typeFirst; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { return _layerList; }
		if (HX_FIELD_EQ(inName,"_layerSort") ) { return _layerSort; }
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		if (HX_FIELD_EQ(inName,"layerFirst") ) { return layerFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"classFirst") ) { return classFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layers") ) { return get_layers_dyn(); }
		if (HX_FIELD_EQ(inName,"layerCount") ) { return layerCount_dyn(); }
		if (HX_FIELD_EQ(inName,"classCount") ) { return classCount_dyn(); }
		if (HX_FIELD_EQ(inName,"sendToBack") ) { return sendToBack_dyn(); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"removeList") ) { return removeList_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sprite") ) { return get_sprite_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"squareRects") ) { return squareRects_dyn(); }
		if (HX_FIELD_EQ(inName,"_classCount") ) { return _classCount; }
		if (HX_FIELD_EQ(inName,"_renderLast") ) { return _renderLast; }
		if (HX_FIELD_EQ(inName,"_layerCount") ) { return _layerCount; }
		if (HX_FIELD_EQ(inName,"updateLists") ) { return updateLists_dyn(); }
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"uniqueTypes") ) { return inCallProp ? get_uniqueTypes() : uniqueTypes; }
		if (HX_FIELD_EQ(inName,"get_nearest") ) { return get_nearest_dyn(); }
		if (HX_FIELD_EQ(inName,"collideLine") ) { return collideLine_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRect") ) { return collideRect_dyn(); }
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"squarePoints") ) { return squarePoints_dyn(); }
		if (HX_FIELD_EQ(inName,"_entityNames") ) { return _entityNames; }
		if (HX_FIELD_EQ(inName,"_renderFirst") ) { return _renderFirst; }
		if (HX_FIELD_EQ(inName,"_updateFirst") ) { return _updateFirst; }
		if (HX_FIELD_EQ(inName,"registerName") ) { return registerName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRender") ) { return removeRender_dyn(); }
		if (HX_FIELD_EQ(inName,"removeUpdate") ) { return removeUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"layerNearest") ) { return inCallProp ? get_layerNearest() : layerNearest; }
		if (HX_FIELD_EQ(inName,"get_farthest") ) { return get_farthest_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"sendBackward") ) { return sendBackward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringForward") ) { return bringForward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringToFront") ) { return bringToFront_dyn(); }
		if (HX_FIELD_EQ(inName,"layerVisible") ) { return layerVisible_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layerDisplay") ) { return _layerDisplay; }
		if (HX_FIELD_EQ(inName,"layerFarthest") ) { return inCallProp ? get_layerFarthest() : layerFarthest; }
		if (HX_FIELD_EQ(inName,"nearestToRect") ) { return nearestToRect_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRecycled") ) { return clearRecycled_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unregisterName") ) { return unregisterName_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToPoint") ) { return nearestToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToClass") ) { return nearestToClass_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"squarePointRect") ) { return squarePointRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uniqueTypes") ) { return get_uniqueTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToEntity") ) { return nearestToEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRectInto") ) { return collideRectInto_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_layerNearest") ) { return get_layerNearest_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePointInto") ) { return collidePointInto_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRecycledAll") ) { return clearRecycledAll_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_layerFarthest") ) { return get_layerFarthest_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircleInto") ) { return collideCircleInto_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_add") ) { _add=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_remove") ) { _remove=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nearest") ) { nearest=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_recycle") ) { _recycle=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"farthest") ) { farthest=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_recycled") ) { _recycled=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_typeCount") ) { _typeCount=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typeFirst") ) { _typeFirst=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { _layerList=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerSort") ) { _layerSort=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_classCount") ) { _classCount=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderLast") ) { _renderLast=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerCount") ) { _layerCount=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniqueTypes") ) { uniqueTypes=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_entityNames") ) { _entityNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderFirst") ) { _renderFirst=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateFirst") ) { _updateFirst=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerNearest") ) { layerNearest=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layerDisplay") ) { _layerDisplay=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerFarthest") ) { layerFarthest=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_entityNames"));
	outFields->push(HX_CSTRING("_recycled"));
	outFields->push(HX_CSTRING("_typeCount"));
	outFields->push(HX_CSTRING("_typeFirst"));
	outFields->push(HX_CSTRING("_classCount"));
	outFields->push(HX_CSTRING("_renderLast"));
	outFields->push(HX_CSTRING("_renderFirst"));
	outFields->push(HX_CSTRING("_layerCount"));
	outFields->push(HX_CSTRING("_layerDisplay"));
	outFields->push(HX_CSTRING("_layerList"));
	outFields->push(HX_CSTRING("_layerSort"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_updateFirst"));
	outFields->push(HX_CSTRING("_recycle"));
	outFields->push(HX_CSTRING("_remove"));
	outFields->push(HX_CSTRING("_add"));
	outFields->push(HX_CSTRING("uniqueTypes"));
	outFields->push(HX_CSTRING("layerNearest"));
	outFields->push(HX_CSTRING("layerFarthest"));
	outFields->push(HX_CSTRING("nearest"));
	outFields->push(HX_CSTRING("farthest"));
	outFields->push(HX_CSTRING("layers"));
	outFields->push(HX_CSTRING("first"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("visible"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("squareRects"),
	HX_CSTRING("squarePoints"),
	HX_CSTRING("squarePointRect"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_entityNames"),
	HX_CSTRING("_recycled"),
	HX_CSTRING("_typeCount"),
	HX_CSTRING("_typeFirst"),
	HX_CSTRING("_classCount"),
	HX_CSTRING("_renderLast"),
	HX_CSTRING("_renderFirst"),
	HX_CSTRING("_layerCount"),
	HX_CSTRING("_layerDisplay"),
	HX_CSTRING("_layerList"),
	HX_CSTRING("_layerSort"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_count"),
	HX_CSTRING("_updateFirst"),
	HX_CSTRING("_recycle"),
	HX_CSTRING("_remove"),
	HX_CSTRING("_add"),
	HX_CSTRING("unregisterName"),
	HX_CSTRING("registerName"),
	HX_CSTRING("removeType"),
	HX_CSTRING("addType"),
	HX_CSTRING("removeRender"),
	HX_CSTRING("addRender"),
	HX_CSTRING("removeUpdate"),
	HX_CSTRING("addUpdate"),
	HX_CSTRING("updateLists"),
	HX_CSTRING("getInstance"),
	HX_CSTRING("getAll"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("getClass"),
	HX_CSTRING("getType"),
	HX_CSTRING("get_uniqueTypes"),
	HX_CSTRING("uniqueTypes"),
	HX_CSTRING("get_layerNearest"),
	HX_CSTRING("layerNearest"),
	HX_CSTRING("get_layerFarthest"),
	HX_CSTRING("layerFarthest"),
	HX_CSTRING("get_nearest"),
	HX_CSTRING("nearest"),
	HX_CSTRING("get_farthest"),
	HX_CSTRING("farthest"),
	HX_CSTRING("layerLast"),
	HX_CSTRING("layerFirst"),
	HX_CSTRING("classFirst"),
	HX_CSTRING("typeFirst"),
	HX_CSTRING("get_layers"),
	HX_CSTRING("layers"),
	HX_CSTRING("get_first"),
	HX_CSTRING("first"),
	HX_CSTRING("layerCount"),
	HX_CSTRING("classCount"),
	HX_CSTRING("typeCount"),
	HX_CSTRING("get_count"),
	HX_CSTRING("nearestToPoint"),
	HX_CSTRING("nearestToClass"),
	HX_CSTRING("nearestToEntity"),
	HX_CSTRING("nearestToRect"),
	HX_CSTRING("collidePointInto"),
	HX_CSTRING("collideCircleInto"),
	HX_CSTRING("collideRectInto"),
	HX_CSTRING("collideLine"),
	HX_CSTRING("collidePoint"),
	HX_CSTRING("collideRect"),
	HX_CSTRING("isAtBack"),
	HX_CSTRING("isAtFront"),
	HX_CSTRING("sendBackward"),
	HX_CSTRING("bringForward"),
	HX_CSTRING("sendToBack"),
	HX_CSTRING("bringToFront"),
	HX_CSTRING("clearRecycledAll"),
	HX_CSTRING("clearRecycled"),
	HX_CSTRING("recycle"),
	HX_CSTRING("create"),
	HX_CSTRING("addMask"),
	HX_CSTRING("addGraphic"),
	HX_CSTRING("removeList"),
	HX_CSTRING("addList"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("get_sprite"),
	HX_CSTRING("sprite"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("render"),
	HX_CSTRING("layerSort"),
	HX_CSTRING("layerVisible"),
	HX_CSTRING("showLayer"),
	HX_CSTRING("update"),
	HX_CSTRING("focusLost"),
	HX_CSTRING("focusGained"),
	HX_CSTRING("end"),
	HX_CSTRING("begin"),
	HX_CSTRING("camera"),
	HX_CSTRING("visible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Scene"), hx::TCanCast< Scene_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Scene_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
