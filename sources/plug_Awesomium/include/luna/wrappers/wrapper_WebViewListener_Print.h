#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_PRINT_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_PRINT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_WebViewListener_Print : public WebViewListener::Print, public luna_wrapper_base {

public:
	


	// void WebViewListener::Print::OnRequestPrint(Awesomium::WebView * caller)
	void OnRequestPrint(Awesomium::WebView * caller) {
		THROW_IF(!_obj.pushFunction("OnRequestPrint"),"No implementation for abstract function WebViewListener::Print::OnRequestPrint");
		_obj.pushArg(caller);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Print::OnFailPrint(Awesomium::WebView * caller, int request_id)
	void OnFailPrint(Awesomium::WebView * caller, int request_id) {
		THROW_IF(!_obj.pushFunction("OnFailPrint"),"No implementation for abstract function WebViewListener::Print::OnFailPrint");
		_obj.pushArg(caller);
		_obj.pushArg(request_id);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Print::OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list)
	void OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list) {
		THROW_IF(!_obj.pushFunction("OnFinishPrint"),"No implementation for abstract function WebViewListener::Print::OnFinishPrint");
		_obj.pushArg(caller);
		_obj.pushArg(request_id);
		_obj.pushArg(&file_list);
		return (_obj.callFunction<void>());
	};




};




#endif

