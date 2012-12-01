#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_JSMETHODHANDLER_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_JSMETHODHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/JSObject.h>

namespace sgt {

class wrapper_Awesomium_JSMethodHandler : public Awesomium::JSMethodHandler {
protected:
	LuaObject _obj;
	
public:
	

	wrapper_Awesomium_JSMethodHandler(lua_State* L) : Awesomium::JSMethodHandler(), _obj(L,-1) {};

	// void Awesomium::JSMethodHandler::OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)
	void OnMethodCall(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args) {
		THROW_IF(!_obj.pushFunction("OnMethodCall"),"No implementation for abstract function Awesomium::JSMethodHandler::OnMethodCall");
		_obj.pushArg(caller);
		_obj.pushArg(remote_object_id);
		_obj.pushArg(&method_name);
		_obj.pushArg(&args);
		return (_obj.callFunction<void>());
	};

	// Awesomium::JSValue Awesomium::JSMethodHandler::OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args)
	Awesomium::JSValue OnMethodCallWithReturnValue(Awesomium::WebView * caller, unsigned int remote_object_id, const Awesomium::WebString & method_name, const Awesomium::JSArray & args) {
		THROW_IF(!_obj.pushFunction("OnMethodCallWithReturnValue"),"No implementation for abstract function Awesomium::JSMethodHandler::OnMethodCallWithReturnValue");
		_obj.pushArg(caller);
		_obj.pushArg(remote_object_id);
		_obj.pushArg(&method_name);
		_obj.pushArg(&args);
		return *(_obj.callFunction<Awesomium::JSValue*>());
	};




};

};	



#endif

