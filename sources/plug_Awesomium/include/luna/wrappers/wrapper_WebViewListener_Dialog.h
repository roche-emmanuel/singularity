#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_DIALOG_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_DIALOG_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_WebViewListener_Dialog : public WebViewListener::Dialog, public luna_wrapper_base {

public:
		

	~wrapper_WebViewListener_Dialog() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// Public virtual methods:
	// void WebViewListener::Dialog::OnShowFileChooser(Awesomium::WebView * caller, const Awesomium::WebFileChooserInfo & chooser_info)
	void OnShowFileChooser(Awesomium::WebView * caller, const Awesomium::WebFileChooserInfo & chooser_info) {
		THROW_IF(!_obj.pushFunction("OnShowFileChooser"),"No implementation for abstract function WebViewListener::Dialog::OnShowFileChooser");
		_obj.pushArg(caller);
		_obj.pushArg(&chooser_info);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Dialog::OnShowLoginDialog(Awesomium::WebView * caller, const Awesomium::WebLoginDialogInfo & dialog_info)
	void OnShowLoginDialog(Awesomium::WebView * caller, const Awesomium::WebLoginDialogInfo & dialog_info) {
		THROW_IF(!_obj.pushFunction("OnShowLoginDialog"),"No implementation for abstract function WebViewListener::Dialog::OnShowLoginDialog");
		_obj.pushArg(caller);
		_obj.pushArg(&dialog_info);
		return (_obj.callFunction<void>());
	};



	// Protected virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

