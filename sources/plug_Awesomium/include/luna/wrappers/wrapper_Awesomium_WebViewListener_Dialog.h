#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_DIALOG_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_DIALOG_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_Awesomium_WebViewListener_Dialog : public Awesomium::WebViewListener::Dialog, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_WebViewListener_Dialog() {
		logDEBUG3("Calling delete function for wrapper Awesomium_WebViewListener_Dialog");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::WebViewListener::Dialog*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_WebViewListener_Dialog(lua_State* L, lua_Table* dum) 
		: Awesomium::WebViewListener::Dialog(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::WebViewListener::Dialog*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::WebViewListener::Dialog::OnShowFileChooser(Awesomium::WebView * caller, const Awesomium::WebFileChooserInfo & chooser_info)
	void OnShowFileChooser(Awesomium::WebView * caller, const Awesomium::WebFileChooserInfo & chooser_info) {
		THROW_IF(!_obj.pushFunction("OnShowFileChooser"),"No implementation for abstract function Awesomium::WebViewListener::Dialog::OnShowFileChooser");
		_obj.pushArg((Awesomium::WebViewListener::Dialog*)this);
		_obj.pushArg(caller);
		_obj.pushArg(&chooser_info);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Dialog::OnShowLoginDialog(Awesomium::WebView * caller, const Awesomium::WebLoginDialogInfo & dialog_info)
	void OnShowLoginDialog(Awesomium::WebView * caller, const Awesomium::WebLoginDialogInfo & dialog_info) {
		THROW_IF(!_obj.pushFunction("OnShowLoginDialog"),"No implementation for abstract function Awesomium::WebViewListener::Dialog::OnShowLoginDialog");
		_obj.pushArg((Awesomium::WebViewListener::Dialog*)this);
		_obj.pushArg(caller);
		_obj.pushArg(&dialog_info);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

