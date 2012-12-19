#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_MENU_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_MENU_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_WebViewListener_Menu : public WebViewListener::Menu, public luna_wrapper_base {

public:
	


	// void WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info)
	void OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info) {
		THROW_IF(!_obj.pushFunction("OnShowPopupMenu"),"No implementation for abstract function WebViewListener::Menu::OnShowPopupMenu");
		_obj.pushArg(caller);
		_obj.pushArg(&menu_info);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info)
	void OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info) {
		THROW_IF(!_obj.pushFunction("OnShowContextMenu"),"No implementation for abstract function WebViewListener::Menu::OnShowContextMenu");
		_obj.pushArg(caller);
		_obj.pushArg(&menu_info);
		return (_obj.callFunction<void>());
	};




};




#endif

