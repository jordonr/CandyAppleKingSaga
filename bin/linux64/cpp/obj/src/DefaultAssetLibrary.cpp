#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_media_SoundLoaderContext
#include <flash/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_FontStyle
#include <flash/text/FontStyle.h>
#endif
#ifndef INCLUDED_flash_text_FontType
#include <flash/text/FontType.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_AssetData
#include <openfl/AssetData.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif

Void DefaultAssetLibrary_obj::__construct()
{
HX_STACK_PUSH("DefaultAssetLibrary::new","DefaultAssetLibrary.hx",33);
{
	HX_STACK_LINE(35)
	super::__construct();
	HX_STACK_LINE(115)
	try{
		HX_STACK_LINE(124)
		::flash::utils::ByteArray bytes = ::flash::utils::ByteArray_obj::readFile(HX_CSTRING("manifest"));		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(127)
		if (((bytes != null()))){
			HX_STACK_LINE(129)
			bytes->position = (int)0;
			HX_STACK_LINE(131)
			if (((bytes->length > (int)0))){
				HX_STACK_LINE(133)
				::String data = bytes->readUTFBytes(bytes->length);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(135)
				if (((bool((data != null())) && bool((data.length > (int)0))))){
					HX_STACK_LINE(137)
					Array< ::Dynamic > manifest = ::haxe::Unserializer_obj::run(data);		HX_STACK_VAR(manifest,"manifest");
					HX_STACK_LINE(139)
					{
						HX_STACK_LINE(139)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(139)
						while(((_g < manifest->length))){
							HX_STACK_LINE(139)
							::openfl::AssetData asset = manifest->__get(_g).StaticCast< ::openfl::AssetData >();		HX_STACK_VAR(asset,"asset");
							HX_STACK_LINE(139)
							++(_g);
							HX_STACK_LINE(141)
							::DefaultAssetLibrary_obj::path->set(asset->id,asset->path);
							HX_STACK_LINE(142)
							::DefaultAssetLibrary_obj::type->set(asset->id,asset->type);
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(150)
			::haxe::Log_obj::trace(HX_CSTRING("Warning: Could not load asset manifest"),hx::SourceInfo(HX_CSTRING("DefaultAssetLibrary.hx"),152,HX_CSTRING("DefaultAssetLibrary"),HX_CSTRING("new")));
		}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(156)
				::haxe::Log_obj::trace(HX_CSTRING("Warning: Could not load asset manifest"),hx::SourceInfo(HX_CSTRING("DefaultAssetLibrary.hx"),158,HX_CSTRING("DefaultAssetLibrary"),HX_CSTRING("new")));
			}
		}
	}
}
;
	return null();
}

DefaultAssetLibrary_obj::~DefaultAssetLibrary_obj() { }

Dynamic DefaultAssetLibrary_obj::__CreateEmpty() { return  new DefaultAssetLibrary_obj; }
hx::ObjectPtr< DefaultAssetLibrary_obj > DefaultAssetLibrary_obj::__new()
{  hx::ObjectPtr< DefaultAssetLibrary_obj > result = new DefaultAssetLibrary_obj();
	result->__construct();
	return result;}

Dynamic DefaultAssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLibrary_obj > result = new DefaultAssetLibrary_obj();
	result->__construct();
	return result;}

Void DefaultAssetLibrary_obj::loadSound( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("DefaultAssetLibrary::loadSound","DefaultAssetLibrary.hx",519);
		HX_STACK_THIS(this);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(519)
		handler(this->getSound(id)).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadMusic( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("DefaultAssetLibrary::loadMusic","DefaultAssetLibrary.hx",490);
		HX_STACK_THIS(this);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(490)
		handler(this->getMusic(id)).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadFont( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("DefaultAssetLibrary::loadFont","DefaultAssetLibrary.hx",461);
		HX_STACK_THIS(this);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(461)
		handler(this->getFont(id)).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("DefaultAssetLibrary::loadBytes","DefaultAssetLibrary.hx",424);
		HX_STACK_THIS(this);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(424)
		handler(this->getBytes(id)).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadBitmapData( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("DefaultAssetLibrary::loadBitmapData","DefaultAssetLibrary.hx",391);
		HX_STACK_THIS(this);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(391)
		handler(this->getBitmapData(id)).Cast< Void >();
	}
return null();
}


bool DefaultAssetLibrary_obj::isLocal( ::String id,::openfl::AssetType type){
	HX_STACK_PUSH("DefaultAssetLibrary::isLocal","DefaultAssetLibrary.hx",374);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(374)
	return true;
}


::flash::media::Sound DefaultAssetLibrary_obj::getSound( ::String id){
	HX_STACK_PUSH("DefaultAssetLibrary::getSound","DefaultAssetLibrary.hx",351);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(351)
	return ::flash::media::Sound_obj::__new(::flash::net::URLRequest_obj::__new(::DefaultAssetLibrary_obj::path->get(id)),null(),(::DefaultAssetLibrary_obj::type->get(id) == ::openfl::AssetType_obj::MUSIC));
}


::String DefaultAssetLibrary_obj::getPath( ::String id){
	HX_STACK_PUSH("DefaultAssetLibrary::getPath","DefaultAssetLibrary.hx",336);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(336)
	return ::DefaultAssetLibrary_obj::path->get(id);
}


::flash::media::Sound DefaultAssetLibrary_obj::getMusic( ::String id){
	HX_STACK_PUSH("DefaultAssetLibrary::getMusic","DefaultAssetLibrary.hx",313);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(313)
	return ::flash::media::Sound_obj::__new(::flash::net::URLRequest_obj::__new(::DefaultAssetLibrary_obj::path->get(id)),null(),true);
}


::flash::text::Font DefaultAssetLibrary_obj::getFont( ::String id){
	HX_STACK_PUSH("DefaultAssetLibrary::getFont","DefaultAssetLibrary.hx",294);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(294)
	return ::flash::text::Font_obj::__new(::DefaultAssetLibrary_obj::path->get(id),null(),null());
}


::flash::utils::ByteArray DefaultAssetLibrary_obj::getBytes( ::String id){
	HX_STACK_PUSH("DefaultAssetLibrary::getBytes","DefaultAssetLibrary.hx",245);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(245)
	return ::flash::utils::ByteArray_obj::readFile(::DefaultAssetLibrary_obj::path->get(id));
}


::flash::display::BitmapData DefaultAssetLibrary_obj::getBitmapData( ::String id){
	HX_STACK_PUSH("DefaultAssetLibrary::getBitmapData","DefaultAssetLibrary.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(222)
	return ::flash::display::BitmapData_obj::load(::DefaultAssetLibrary_obj::path->get(id),null());
}


bool DefaultAssetLibrary_obj::exists( ::String id,::openfl::AssetType type){
	HX_STACK_PUSH("DefaultAssetLibrary::exists","DefaultAssetLibrary.hx",167);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(169)
	::openfl::AssetType assetType = ::DefaultAssetLibrary_obj::type->get(id);		HX_STACK_VAR(assetType,"assetType");
	HX_STACK_LINE(185)
	if (((assetType != null()))){
		HX_STACK_LINE(187)
		if (((bool((assetType == type)) || bool((bool(((bool((type == ::openfl::AssetType_obj::SOUND)) || bool((type == ::openfl::AssetType_obj::MUSIC))))) && bool(((bool((assetType == ::openfl::AssetType_obj::MUSIC)) || bool((assetType == ::openfl::AssetType_obj::SOUND)))))))))){
			HX_STACK_LINE(187)
			return true;
		}
		HX_STACK_LINE(207)
		if (((bool((type == ::openfl::AssetType_obj::BINARY)) || bool((type == null()))))){
			HX_STACK_LINE(207)
			return true;
		}
	}
	HX_STACK_LINE(217)
	return false;
}


::haxe::ds::StringMap DefaultAssetLibrary_obj::className;

::haxe::ds::StringMap DefaultAssetLibrary_obj::path;

::haxe::ds::StringMap DefaultAssetLibrary_obj::type;


DefaultAssetLibrary_obj::DefaultAssetLibrary_obj()
{
}

void DefaultAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultAssetLibrary);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultAssetLibrary_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return loadBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultAssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("className"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadSound"),
	HX_CSTRING("loadMusic"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadBitmapData"),
	HX_CSTRING("isLocal"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getMusic"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("exists"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::className,"className");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::path,"path");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::type,"type");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::className,"className");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::path,"path");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::type,"type");
};

Class DefaultAssetLibrary_obj::__mClass;

void DefaultAssetLibrary_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DefaultAssetLibrary"), hx::TCanCast< DefaultAssetLibrary_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DefaultAssetLibrary_obj::__boot()
{
	className= ::haxe::ds::StringMap_obj::__new();
	path= ::haxe::ds::StringMap_obj::__new();
	type= ::haxe::ds::StringMap_obj::__new();
}

