#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_JSMETHODHANDLER_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_JSMETHODHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Awesomium/JSObject.h>

class wrapper_Awesomium_JSMethodHandler : public Awesomium::JSMethodHandler, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_JSMethodHandler() {
		logDEBUG3("Calling delete function for wrapper Awesomium_JSMethodHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::JSMethodHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_JSMethodHandler(lua_State* L, lua_Table* dum) 
		: Awesomium::JSMethodHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::JSMethodHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)
	void OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args) {
		THROW_IF(!_obj.pushFunction("OnMethodCall"),"No implementation for abstract function Awesomium::JSMethodHandler::OnMethodCall");
		_obj.pushArg((Awesomium::JSMethodHandler*)this);
		_obj.pushArg(caller);
		_obj.pushArg(remote_object_id);
		_obj.pushArg(&method_name);
		_obj.pushArg(&args);
		return (_obj.callFunction<void>());
	};

	// Awesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)
	Awesomium::JSValue OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args) {
		THROW_IF(!_obj.pushFunction("OnMethodCallWithReturnValue"),"No implementation for abstract function Awesomium::JSMethodHandler::OnMethodCallWithReturnValue");
		_obj.pushArg((Awesomium::JSMethodHandler*)this);
		_obj.pushArg(caller);
		_obj.pushArg(remote_object_id);
		_obj.pushArg(&method_name);
		_obj.pushArg(&args);
		return *(_obj.callFunction<Awesomium::JSValue*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

