#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_PROCESS_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_PROCESS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

namespace sgt {

class wrapper_WebViewListener_Process : public WebViewListener::Process {
protected:
	LuaObject _obj;
	
public:
	

	wrapper_WebViewListener_Process(lua_State* L) : WebViewListener::Process(), _obj(L,-1) {};

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




};

};	



#endif

