#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <Awesomium/Surface.h>
#include <Awesomium/BitmapSurface.h>
#include <Awesomium/DataSource.h>
#include <Awesomium/DataPak.h>
#include <Awesomium/JSArray.h>
#include <Awesomium/JSObject.h>
#include <Awesomium/JSValue.h>
#include <Awesomium/Platform.h>
#include <Awesomium/PrintConfig.h>
#include <Awesomium/ResourceInterceptor.h>
#include <Awesomium/WebConfig.h>
#include <Awesomium/WebCore.h>
#include <Awesomium/WebKeyboardEvent.h>
#include <Awesomium/WebMenuItem.h>
#include <Awesomium/WebPreferences.h>
#include <Awesomium/WebSession.h>
#include <Awesomium/WebString.h>
#include <Awesomium/WebStringArray.h>
#include <Awesomium/WebTouchEvent.h>
#include <Awesomium/WebURL.h>
#include <Awesomium/WebView.h>
#include <Awesomium/WebViewListener.h>

template<>
class LunaTraits< Awesomium::Surface > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::Surface* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::Surface* obj);
    typedef Awesomium::Surface parent_t;
    typedef Awesomium::Surface base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::BitmapSurface > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::BitmapSurface* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::BitmapSurface* obj);
    typedef Awesomium::Surface parent_t;
    typedef Awesomium::BitmapSurface base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::SurfaceFactory > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::SurfaceFactory* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::SurfaceFactory* obj);
    typedef Awesomium::SurfaceFactory parent_t;
    typedef Awesomium::SurfaceFactory base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::BitmapSurfaceFactory > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::BitmapSurfaceFactory* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::BitmapSurfaceFactory* obj);
    typedef Awesomium::SurfaceFactory parent_t;
    typedef Awesomium::BitmapSurfaceFactory base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::DataSource > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::DataSource* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::DataSource* obj);
    typedef Awesomium::DataSource parent_t;
    typedef Awesomium::DataSource base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::DataPakSource > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::DataPakSource* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::DataPakSource* obj);
    typedef Awesomium::DataSource parent_t;
    typedef Awesomium::DataPakSource base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::JSArray > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::JSArray* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::JSArray* obj);
    typedef Awesomium::JSArray parent_t;
    typedef Awesomium::JSArray base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::JSObject > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::JSObject* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::JSObject* obj);
    typedef Awesomium::JSObject parent_t;
    typedef Awesomium::JSObject base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::JSMethodHandler > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::JSMethodHandler* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::JSMethodHandler* obj);
    typedef Awesomium::JSMethodHandler parent_t;
    typedef Awesomium::JSMethodHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::JSValue > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::JSValue* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::JSValue* obj);
    typedef Awesomium::JSValue parent_t;
    typedef Awesomium::JSValue base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::Rect > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::Rect* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::Rect* obj);
    typedef Awesomium::Rect parent_t;
    typedef Awesomium::Rect base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::PrintConfig > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::PrintConfig* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::PrintConfig* obj);
    typedef Awesomium::PrintConfig parent_t;
    typedef Awesomium::PrintConfig base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::ResourceInterceptor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::ResourceInterceptor* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::ResourceInterceptor* obj);
    typedef Awesomium::ResourceInterceptor parent_t;
    typedef Awesomium::ResourceInterceptor base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::ResourceRequest > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::ResourceRequest* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::ResourceRequest* obj);
    typedef Awesomium::ResourceRequest parent_t;
    typedef Awesomium::ResourceRequest base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::ResourceResponse > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::ResourceResponse* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::ResourceResponse* obj);
    typedef Awesomium::ResourceResponse parent_t;
    typedef Awesomium::ResourceResponse base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::UploadElement > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::UploadElement* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::UploadElement* obj);
    typedef Awesomium::UploadElement parent_t;
    typedef Awesomium::UploadElement base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebConfig > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebConfig* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebConfig* obj);
    typedef Awesomium::WebConfig parent_t;
    typedef Awesomium::WebConfig base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebCore > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebCore* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebCore* obj);
    typedef Awesomium::WebCore parent_t;
    typedef Awesomium::WebCore base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebKeyboardEvent > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebKeyboardEvent* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebKeyboardEvent* obj);
    typedef Awesomium::WebKeyboardEvent parent_t;
    typedef Awesomium::WebKeyboardEvent base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebMenuItem > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebMenuItem* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebMenuItem* obj);
    typedef Awesomium::WebMenuItem parent_t;
    typedef Awesomium::WebMenuItem base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebMenuItemArray > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebMenuItemArray* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebMenuItemArray* obj);
    typedef Awesomium::WebMenuItemArray parent_t;
    typedef Awesomium::WebMenuItemArray base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebPreferences > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebPreferences* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebPreferences* obj);
    typedef Awesomium::WebPreferences parent_t;
    typedef Awesomium::WebPreferences base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebSession > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebSession* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebSession* obj);
    typedef Awesomium::WebSession parent_t;
    typedef Awesomium::WebSession base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebString > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebString* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebString* obj);
    typedef Awesomium::WebString parent_t;
    typedef Awesomium::WebString base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebStringArray > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebStringArray* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebStringArray* obj);
    typedef Awesomium::WebStringArray parent_t;
    typedef Awesomium::WebStringArray base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebTouchPoint > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebTouchPoint* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebTouchPoint* obj);
    typedef Awesomium::WebTouchPoint parent_t;
    typedef Awesomium::WebTouchPoint base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebTouchEvent > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebTouchEvent* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebTouchEvent* obj);
    typedef Awesomium::WebTouchEvent parent_t;
    typedef Awesomium::WebTouchEvent base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebURL > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebURL* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebURL* obj);
    typedef Awesomium::WebURL parent_t;
    typedef Awesomium::WebURL base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebView > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebView* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebView* obj);
    typedef Awesomium::WebView parent_t;
    typedef Awesomium::WebView base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebFileChooserInfo > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebFileChooserInfo* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebFileChooserInfo* obj);
    typedef Awesomium::WebFileChooserInfo parent_t;
    typedef Awesomium::WebFileChooserInfo base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebPopupMenuInfo > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebPopupMenuInfo* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebPopupMenuInfo* obj);
    typedef Awesomium::WebPopupMenuInfo parent_t;
    typedef Awesomium::WebPopupMenuInfo base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebContextMenuInfo > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebContextMenuInfo* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebContextMenuInfo* obj);
    typedef Awesomium::WebContextMenuInfo parent_t;
    typedef Awesomium::WebContextMenuInfo base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< Awesomium::WebLoginDialogInfo > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static Awesomium::WebLoginDialogInfo* _bind_ctor(lua_State *L);
    static void _bind_dtor(Awesomium::WebLoginDialogInfo* obj);
    typedef Awesomium::WebLoginDialogInfo parent_t;
    typedef Awesomium::WebLoginDialogInfo base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< WebViewListener::View > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static WebViewListener::View* _bind_ctor(lua_State *L);
    static void _bind_dtor(WebViewListener::View* obj);
    typedef WebViewListener::View parent_t;
    typedef WebViewListener::View base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< WebViewListener::Load > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static WebViewListener::Load* _bind_ctor(lua_State *L);
    static void _bind_dtor(WebViewListener::Load* obj);
    typedef WebViewListener::Load parent_t;
    typedef WebViewListener::Load base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< WebViewListener::Process > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static WebViewListener::Process* _bind_ctor(lua_State *L);
    static void _bind_dtor(WebViewListener::Process* obj);
    typedef WebViewListener::Process parent_t;
    typedef WebViewListener::Process base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< WebViewListener::Menu > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static WebViewListener::Menu* _bind_ctor(lua_State *L);
    static void _bind_dtor(WebViewListener::Menu* obj);
    typedef WebViewListener::Menu parent_t;
    typedef WebViewListener::Menu base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< WebViewListener::Dialog > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static WebViewListener::Dialog* _bind_ctor(lua_State *L);
    static void _bind_dtor(WebViewListener::Dialog* obj);
    typedef WebViewListener::Dialog parent_t;
    typedef WebViewListener::Dialog base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< WebViewListener::Print > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static WebViewListener::Print* _bind_ctor(lua_State *L);
    static void _bind_dtor(WebViewListener::Print* obj);
    typedef WebViewListener::Print parent_t;
    typedef WebViewListener::Print base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< WebViewListener::Download > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static WebViewListener::Download* _bind_ctor(lua_State *L);
    static void _bind_dtor(WebViewListener::Download* obj);
    typedef WebViewListener::Download parent_t;
    typedef WebViewListener::Download base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< WebViewListener::InputMethodEditor > {
public:
    static const char className[];
    static const char fullName[];
    static const char moduleName[];
    static const char* parents[];
    static const int uniqueIDs[];
    static const int hash;
    static luna_RegType methods[];
    static luna_RegEnumType enumValues[];
    static WebViewListener::InputMethodEditor* _bind_ctor(lua_State *L);
    static void _bind_dtor(WebViewListener::InputMethodEditor* obj);
    typedef WebViewListener::InputMethodEditor parent_t;
    typedef WebViewListener::InputMethodEditor base_t;
	static luna_ConverterType converters[];
};


template<>
class LunaType< 23910648 > {
public:
    typedef Awesomium::Surface type;
    
};

template<>
class LunaType< 86287934 > {
public:
    typedef Awesomium::SurfaceFactory type;
    
};

template<>
class LunaType< 37218942 > {
public:
    typedef Awesomium::DataSource type;
    
};

template<>
class LunaType< 18109170 > {
public:
    typedef Awesomium::JSArray type;
    
};

template<>
class LunaType< 47180827 > {
public:
    typedef Awesomium::JSObject type;
    
};

template<>
class LunaType< 91373609 > {
public:
    typedef Awesomium::JSMethodHandler type;
    
};

template<>
class LunaType< 36991498 > {
public:
    typedef Awesomium::JSValue type;
    
};

template<>
class LunaType< 8907551 > {
public:
    typedef Awesomium::Rect type;
    
};

template<>
class LunaType< 23715294 > {
public:
    typedef Awesomium::PrintConfig type;
    
};

template<>
class LunaType< 29549996 > {
public:
    typedef Awesomium::ResourceInterceptor type;
    
};

template<>
class LunaType< 4492238 > {
public:
    typedef Awesomium::ResourceRequest type;
    
};

template<>
class LunaType< 92193223 > {
public:
    typedef Awesomium::ResourceResponse type;
    
};

template<>
class LunaType< 53298683 > {
public:
    typedef Awesomium::UploadElement type;
    
};

template<>
class LunaType< 51132402 > {
public:
    typedef Awesomium::WebConfig type;
    
};

template<>
class LunaType< 53327 > {
public:
    typedef Awesomium::WebCore type;
    
};

template<>
class LunaType< 95002106 > {
public:
    typedef Awesomium::WebKeyboardEvent type;
    
};

template<>
class LunaType< 2194484 > {
public:
    typedef Awesomium::WebMenuItem type;
    
};

template<>
class LunaType< 62259121 > {
public:
    typedef Awesomium::WebMenuItemArray type;
    
};

template<>
class LunaType< 51772222 > {
public:
    typedef Awesomium::WebPreferences type;
    
};

template<>
class LunaType< 3873994 > {
public:
    typedef Awesomium::WebSession type;
    
};

template<>
class LunaType< 13938525 > {
public:
    typedef Awesomium::WebString type;
    
};

template<>
class LunaType< 16354805 > {
public:
    typedef Awesomium::WebStringArray type;
    
};

template<>
class LunaType< 3335349 > {
public:
    typedef Awesomium::WebTouchPoint type;
    
};

template<>
class LunaType< 93381335 > {
public:
    typedef Awesomium::WebTouchEvent type;
    
};

template<>
class LunaType< 3243885 > {
public:
    typedef Awesomium::WebURL type;
    
};

template<>
class LunaType< 613205 > {
public:
    typedef Awesomium::WebView type;
    
};

template<>
class LunaType< 95946160 > {
public:
    typedef Awesomium::WebFileChooserInfo type;
    
};

template<>
class LunaType< 93395030 > {
public:
    typedef Awesomium::WebPopupMenuInfo type;
    
};

template<>
class LunaType< 8209039 > {
public:
    typedef Awesomium::WebContextMenuInfo type;
    
};

template<>
class LunaType< 90938304 > {
public:
    typedef Awesomium::WebLoginDialogInfo type;
    
};

template<>
class LunaType< 66232947 > {
public:
    typedef WebViewListener::View type;
    
};

template<>
class LunaType< 65940660 > {
public:
    typedef WebViewListener::Load type;
    
};

template<>
class LunaType< 86671035 > {
public:
    typedef WebViewListener::Process type;
    
};

template<>
class LunaType< 65961261 > {
public:
    typedef WebViewListener::Menu type;
    
};

template<>
class LunaType< 34397265 > {
public:
    typedef WebViewListener::Dialog type;
    
};

template<>
class LunaType< 47951591 > {
public:
    typedef WebViewListener::Print type;
    
};

template<>
class LunaType< 12394159 > {
public:
    typedef WebViewListener::Download type;
    
};

template<>
class LunaType< 85723603 > {
public:
    typedef WebViewListener::InputMethodEditor type;
    
};


#endif

