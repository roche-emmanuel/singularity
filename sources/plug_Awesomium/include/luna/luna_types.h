#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <OSGSurface.h>
#include <Awesomium/Surface.h>
#include <OSGSurfaceFactory.h>
#include <plug_extensions.h>
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

// Class: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Class: Area
template<>
class LunaTraits< Area > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Area* _bind_ctor(lua_State *L);
	static void _bind_dtor(Area* obj);
	typedef osg::Referenced parent_t;
	typedef Area base_t;
	static luna_ConverterType converters[];
};

// Class: HWND
template<>
class LunaTraits< HWND > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static HWND* _bind_ctor(lua_State *L);
	static void _bind_dtor(HWND* obj);
	typedef HWND parent_t;
	typedef HWND base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::Surface
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

// Class: OSGSurface
template<>
class LunaTraits< OSGSurface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OSGSurface* _bind_ctor(lua_State *L);
	static void _bind_dtor(OSGSurface* obj);
	typedef Awesomium::Surface parent_t;
	typedef OSGSurface base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::SurfaceFactory
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

// Class: OSGSurfaceFactory
template<>
class LunaTraits< OSGSurfaceFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OSGSurfaceFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(OSGSurfaceFactory* obj);
	typedef Awesomium::SurfaceFactory parent_t;
	typedef OSGSurfaceFactory base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< OSGSurface * >
template<>
class LunaTraits< std::vector< OSGSurface * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< OSGSurface * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< OSGSurface * >* obj);
	typedef std::vector< OSGSurface * > parent_t;
	typedef std::vector< OSGSurface * > base_t;
	static luna_ConverterType converters[];
};

// Class: SubLoader
template<>
class LunaTraits< SubLoader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SubLoader* _bind_ctor(lua_State *L);
	static void _bind_dtor(SubLoader* obj);
	typedef SubLoader parent_t;
	typedef SubLoader base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< Area > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< Area > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< Area > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< Area > >* obj);
	typedef std::vector< osg::ref_ptr< Area > > parent_t;
	typedef std::vector< osg::ref_ptr< Area > > base_t;
	static luna_ConverterType converters[];
};

// Class: SurfaceSubloadCallback
template<>
class LunaTraits< SurfaceSubloadCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SurfaceSubloadCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(SurfaceSubloadCallback* obj);
	typedef SurfaceSubloadCallback parent_t;
	typedef SurfaceSubloadCallback base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::BitmapSurface
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

// Class: Awesomium::BitmapSurfaceFactory
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

// Class: Awesomium::DataSource
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

// Class: Awesomium::DataPakSource
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

// Class: Awesomium::JSArray
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

// Class: Awesomium::JSObject
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

// Class: Awesomium::JSMethodHandler
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

// Class: Awesomium::JSValue
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

// Class: Awesomium::Rect
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

// Class: Awesomium::PrintConfig
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

// Class: Awesomium::ResourceInterceptor
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

// Class: Awesomium::ResourceRequest
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

// Class: Awesomium::ResourceResponse
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

// Class: Awesomium::UploadElement
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

// Class: Awesomium::WebConfig
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

// Class: Awesomium::WebCore
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

// Class: Awesomium::WebKeyboardEvent
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

// Class: Awesomium::WebMenuItem
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

// Class: Awesomium::WebMenuItemArray
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

// Class: Awesomium::WebPreferences
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

// Class: Awesomium::WebSession
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

// Class: Awesomium::WebString
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

// Class: Awesomium::WebStringArray
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

// Class: Awesomium::WebTouchPoint
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

// Class: Awesomium::WebTouchEvent
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

// Class: Awesomium::WebURL
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

// Class: Awesomium::WebView
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

// Class: Awesomium::WebFileChooserInfo
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

// Class: Awesomium::WebPopupMenuInfo
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

// Class: Awesomium::WebContextMenuInfo
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

// Class: Awesomium::WebLoginDialogInfo
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

// Class: Awesomium::WebPageInfo
template<>
class LunaTraits< Awesomium::WebPageInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::WebPageInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::WebPageInfo* obj);
	typedef Awesomium::WebPageInfo parent_t;
	typedef Awesomium::WebPageInfo base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::WebViewListener::View
template<>
class LunaTraits< Awesomium::WebViewListener::View > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::WebViewListener::View* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::WebViewListener::View* obj);
	typedef Awesomium::WebViewListener::View parent_t;
	typedef Awesomium::WebViewListener::View base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::WebViewListener::Load
template<>
class LunaTraits< Awesomium::WebViewListener::Load > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::WebViewListener::Load* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::WebViewListener::Load* obj);
	typedef Awesomium::WebViewListener::Load parent_t;
	typedef Awesomium::WebViewListener::Load base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::WebViewListener::Process
template<>
class LunaTraits< Awesomium::WebViewListener::Process > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::WebViewListener::Process* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::WebViewListener::Process* obj);
	typedef Awesomium::WebViewListener::Process parent_t;
	typedef Awesomium::WebViewListener::Process base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::WebViewListener::Menu
template<>
class LunaTraits< Awesomium::WebViewListener::Menu > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::WebViewListener::Menu* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::WebViewListener::Menu* obj);
	typedef Awesomium::WebViewListener::Menu parent_t;
	typedef Awesomium::WebViewListener::Menu base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::WebViewListener::Dialog
template<>
class LunaTraits< Awesomium::WebViewListener::Dialog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::WebViewListener::Dialog* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::WebViewListener::Dialog* obj);
	typedef Awesomium::WebViewListener::Dialog parent_t;
	typedef Awesomium::WebViewListener::Dialog base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::WebViewListener::Print
template<>
class LunaTraits< Awesomium::WebViewListener::Print > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::WebViewListener::Print* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::WebViewListener::Print* obj);
	typedef Awesomium::WebViewListener::Print parent_t;
	typedef Awesomium::WebViewListener::Print base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::WebViewListener::Download
template<>
class LunaTraits< Awesomium::WebViewListener::Download > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::WebViewListener::Download* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::WebViewListener::Download* obj);
	typedef Awesomium::WebViewListener::Download parent_t;
	typedef Awesomium::WebViewListener::Download base_t;
	static luna_ConverterType converters[];
};

// Class: Awesomium::WebViewListener::InputMethodEditor
template<>
class LunaTraits< Awesomium::WebViewListener::InputMethodEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Awesomium::WebViewListener::InputMethodEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(Awesomium::WebViewListener::InputMethodEditor* obj);
	typedef Awesomium::WebViewListener::InputMethodEditor parent_t;
	typedef Awesomium::WebViewListener::InputMethodEditor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Image
template<>
class LunaTraits< osg::Image > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Image* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Image* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Image base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture2D
template<>
class LunaTraits< osg::Texture2D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture2D* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture2D* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture2D base_t;
	static luna_ConverterType converters[];
};

// Class: osg::State
template<>
class LunaTraits< osg::State > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::State* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::State* obj);
	typedef osg::Referenced parent_t;
	typedef osg::State base_t;
	static luna_ConverterType converters[];
};



// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 2231045 > {
public:
	typedef HWND type;
	
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
class LunaType< 92984376 > {
public:
	typedef OSGSurfaceFactory::SurfaceList type;
	
};

template<>
class LunaType< 84162755 > {
public:
	typedef SubLoader type;
	
};

template<>
class LunaType< 69910077 > {
public:
	typedef SubLoader::AreaList type;
	
};

template<>
class LunaType< 92967815 > {
public:
	typedef SurfaceSubloadCallback type;
	
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
class LunaType< 74820420 > {
public:
	typedef Awesomium::WebPageInfo type;
	
};

template<>
class LunaType< 9977401 > {
public:
	typedef Awesomium::WebViewListener::View type;
	
};

template<>
class LunaType< 9685114 > {
public:
	typedef Awesomium::WebViewListener::Load type;
	
};

template<>
class LunaType< 78037157 > {
public:
	typedef Awesomium::WebViewListener::Process type;
	
};

template<>
class LunaType< 9705715 > {
public:
	typedef Awesomium::WebViewListener::Menu type;
	
};

template<>
class LunaType< 72828454 > {
public:
	typedef Awesomium::WebViewListener::Dialog type;
	
};

template<>
class LunaType< 4030006 > {
public:
	typedef Awesomium::WebViewListener::Print type;
	
};

template<>
class LunaType< 44749586 > {
public:
	typedef Awesomium::WebViewListener::Download type;
	
};

template<>
class LunaType< 9490281 > {
public:
	typedef Awesomium::WebViewListener::InputMethodEditor type;
	
};

template<>
class LunaType< 80535448 > {
public:
	typedef osg::Image type;
	
};

template<>
class LunaType< 71812813 > {
public:
	typedef osg::Texture2D type;
	
};

template<>
class LunaType< 89979598 > {
public:
	typedef osg::State type;
	
};

template<>
class LunaType< 64985157 > {
public:
	typedef std::vector< OSGSurface * > type;
	
};

template<>
class LunaType< 5192565 > {
public:
	typedef std::vector< osg::ref_ptr< Area > > type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};


#endif

