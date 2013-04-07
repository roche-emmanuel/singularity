#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_PRINT_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_PRINT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_Awesomium_WebViewListener_Print : public Awesomium::WebViewListener::Print, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_WebViewListener_Print() {
		logDEBUG3("Calling delete function for wrapper Awesomium_WebViewListener_Print");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::WebViewListener::Print*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_WebViewListener_Print(lua_State* L, lua_Table* dum) 
		: Awesomium::WebViewListener::Print(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::WebViewListener::Print*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::WebViewListener::Print::OnRequestPrint(Awesomium::WebView * caller)
	void OnRequestPrint(Awesomium::WebView * caller) {
		THROW_IF(!_obj.pushFunction("OnRequestPrint"),"No implementation for abstract function Awesomium::WebViewListener::Print::OnRequestPrint");
		_obj.pushArg((Awesomium::WebViewListener::Print*)this);
		_obj.pushArg(caller);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Print::OnFailPrint(Awesomium::WebView * caller, int request_id)
	void OnFailPrint(Awesomium::WebView * caller, int request_id) {
		THROW_IF(!_obj.pushFunction("OnFailPrint"),"No implementation for abstract function Awesomium::WebViewListener::Print::OnFailPrint");
		_obj.pushArg((Awesomium::WebViewListener::Print*)this);
		_obj.pushArg(caller);
		_obj.pushArg(request_id);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Print::OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list)
	void OnFinishPrint(Awesomium::WebView * caller, int request_id, const Awesomium::WebStringArray & file_list) {
		THROW_IF(!_obj.pushFunction("OnFinishPrint"),"No implementation for abstract function Awesomium::WebViewListener::Print::OnFinishPrint");
		_obj.pushArg((Awesomium::WebViewListener::Print*)this);
		_obj.pushArg(caller);
		_obj.pushArg(request_id);
		_obj.pushArg(&file_list);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

