#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_MENU_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_MENU_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_Awesomium_WebViewListener_Menu : public Awesomium::WebViewListener::Menu, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_WebViewListener_Menu() {
		logDEBUG3("Calling delete function for wrapper Awesomium_WebViewListener_Menu");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::WebViewListener::Menu*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_WebViewListener_Menu(lua_State* L, lua_Table* dum) 
		: Awesomium::WebViewListener::Menu(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::WebViewListener::Menu*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::WebViewListener::Menu::OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info)
	void OnShowPopupMenu(Awesomium::WebView * caller, const Awesomium::WebPopupMenuInfo & menu_info) {
		THROW_IF(!_obj.pushFunction("OnShowPopupMenu"),"No implementation for abstract function Awesomium::WebViewListener::Menu::OnShowPopupMenu");
		_obj.pushArg((Awesomium::WebViewListener::Menu*)this);
		_obj.pushArg(caller);
		_obj.pushArg(&menu_info);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Menu::OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info)
	void OnShowContextMenu(Awesomium::WebView * caller, const Awesomium::WebContextMenuInfo & menu_info) {
		THROW_IF(!_obj.pushFunction("OnShowContextMenu"),"No implementation for abstract function Awesomium::WebViewListener::Menu::OnShowContextMenu");
		_obj.pushArg((Awesomium::WebViewListener::Menu*)this);
		_obj.pushArg(caller);
		_obj.pushArg(&menu_info);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

