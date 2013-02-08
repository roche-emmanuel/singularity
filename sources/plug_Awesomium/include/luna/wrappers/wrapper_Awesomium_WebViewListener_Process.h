#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_PROCESS_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_PROCESS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_Awesomium_WebViewListener_Process : public Awesomium::WebViewListener::Process, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_WebViewListener_Process() {
		logDEBUG3("Calling delete function for wrapper Awesomium_WebViewListener_Process");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::WebViewListener::Process*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_WebViewListener_Process(lua_State* L, lua_Table* dum) 
		: Awesomium::WebViewListener::Process(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::WebViewListener::Process*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::WebViewListener::Process::OnUnresponsive(Awesomium::WebView * caller)
	void OnUnresponsive(Awesomium::WebView * caller) {
		THROW_IF(!_obj.pushFunction("OnUnresponsive"),"No implementation for abstract function Awesomium::WebViewListener::Process::OnUnresponsive");
		_obj.pushArg((Awesomium::WebViewListener::Process*)this);
		_obj.pushArg(caller);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Process::OnResponsive(Awesomium::WebView * caller)
	void OnResponsive(Awesomium::WebView * caller) {
		THROW_IF(!_obj.pushFunction("OnResponsive"),"No implementation for abstract function Awesomium::WebViewListener::Process::OnResponsive");
		_obj.pushArg((Awesomium::WebViewListener::Process*)this);
		_obj.pushArg(caller);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Process::OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status)
	void OnCrashed(Awesomium::WebView * caller, Awesomium::TerminationStatus status) {
		THROW_IF(!_obj.pushFunction("OnCrashed"),"No implementation for abstract function Awesomium::WebViewListener::Process::OnCrashed");
		_obj.pushArg((Awesomium::WebViewListener::Process*)this);
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

