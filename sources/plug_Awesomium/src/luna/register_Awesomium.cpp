#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_Awesomium(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"luna");
	Luna< void >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"Awesomium");
	Luna< SurfaceSubloadCallback >::Register(L);
	Luna< Awesomium::Surface >::Register(L);
	Luna< Awesomium::BitmapSurface >::Register(L);
	Luna< Awesomium::SurfaceFactory >::Register(L);
	Luna< Awesomium::BitmapSurfaceFactory >::Register(L);
	Luna< Awesomium::DataSource >::Register(L);
	Luna< Awesomium::DataPakSource >::Register(L);
	Luna< Awesomium::JSArray >::Register(L);
	Luna< Awesomium::JSObject >::Register(L);
	Luna< Awesomium::JSMethodHandler >::Register(L);
	Luna< Awesomium::JSValue >::Register(L);
	Luna< Awesomium::Rect >::Register(L);
	Luna< Awesomium::PrintConfig >::Register(L);
	Luna< Awesomium::ResourceInterceptor >::Register(L);
	Luna< Awesomium::ResourceRequest >::Register(L);
	Luna< Awesomium::ResourceResponse >::Register(L);
	Luna< Awesomium::UploadElement >::Register(L);
	Luna< Awesomium::WebConfig >::Register(L);
	Luna< Awesomium::WebCore >::Register(L);
	Luna< Awesomium::WebKeyboardEvent >::Register(L);
	Luna< Awesomium::WebMenuItem >::Register(L);
	Luna< Awesomium::WebMenuItemArray >::Register(L);
	Luna< Awesomium::WebPreferences >::Register(L);
	Luna< Awesomium::WebSession >::Register(L);
	Luna< Awesomium::WebString >::Register(L);
	Luna< Awesomium::WebStringArray >::Register(L);
	Luna< Awesomium::WebTouchPoint >::Register(L);
	Luna< Awesomium::WebTouchEvent >::Register(L);
	Luna< Awesomium::WebURL >::Register(L);
	Luna< Awesomium::WebView >::Register(L);
	Luna< Awesomium::WebFileChooserInfo >::Register(L);
	Luna< Awesomium::WebPopupMenuInfo >::Register(L);
	Luna< Awesomium::WebContextMenuInfo >::Register(L);
	Luna< Awesomium::WebLoginDialogInfo >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"WebViewListener");
	Luna< WebViewListener::View >::Register(L);
	Luna< WebViewListener::Load >::Register(L);
	Luna< WebViewListener::Process >::Register(L);
	Luna< WebViewListener::Menu >::Register(L);
	Luna< WebViewListener::Dialog >::Register(L);
	Luna< WebViewListener::Print >::Register(L);
	Luna< WebViewListener::Download >::Register(L);
	Luna< WebViewListener::InputMethodEditor >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"Awesomium");

	register_defines(L);

	register_enums(L);

	register_global_functions(L);

	luna_popModule(L);

	luna_copyParents(L,"Awesomium");
	luna_copyParents(L,"WebViewListener");

	luna_pushModule(L,"Awesomium");
	return 1;
}

#ifdef __cplusplus
}
#endif

