#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_PROCESS_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_PROCESS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_WebViewListener_Process : public WebViewListener::Process, public luna_wrapper_base {

public:
		

	~wrapper_WebViewListener_Process() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void WebViewListener::Process::OnUnresponsive(Awesomium::WebView * caller)
	void OnUnresponsive(Awesomium::WebView * caller) {
		THROW_IF(!_obj.pushFunction("OnUnresponsive"),"No implementation for abstract function WebViewListener::Process::OnUnresponsive");
		_obj.pushArg(caller);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Process::OnResponsive(Awesomium::WebView * caller)
	void OnResponsive(Awesomium::WebView * caller) {
		THROW_IF(!_obj.pushFunction("OnResponsive"),"No implementation for abstract function WebViewListener::Process::OnResponsive");
		_obj.pushArg(caller);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Process::OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status)
	void OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status) {
		THROW_IF(!_obj.pushFunction("OnCrashed"),"No implementation for abstract function WebViewListener::Process::OnCrashed");
		_obj.pushArg(caller);
		_obj.pushArg(status);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

