#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_DIALOG_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_DIALOG_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

namespace sgt {

class wrapper_WebViewListener_Dialog : public WebViewListener::Dialog {
protected:
	LuaObject _obj;
	
public:
	

	wrapper_WebViewListener_Dialog(lua_State* L) : WebViewListener::Dialog(), _obj(L,-1) {};

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




};

};	



#endif

