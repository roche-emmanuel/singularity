#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_LOAD_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_LOAD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_Awesomium_WebViewListener_Load : public Awesomium::WebViewListener::Load, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_WebViewListener_Load() {
		logDEBUG3("Calling delete function for wrapper Awesomium_WebViewListener_Load");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::WebViewListener::Load*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_WebViewListener_Load(lua_State* L, lua_Table* dum) 
		: Awesomium::WebViewListener::Load(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::WebViewListener::Load*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page)
	void OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page) {
		THROW_IF(!_obj.pushFunction("OnBeginLoadingFrame"),"No implementation for abstract function Awesomium::WebViewListener::Load::OnBeginLoadingFrame");
		_obj.pushArg((Awesomium::WebViewListener::Load*)this);
		_obj.pushArg(caller);
		_obj.pushArg(frame_id);
		_obj.pushArg(is_main_frame);
		_obj.pushArg(&url);
		_obj.pushArg(is_error_page);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc)
	void OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc) {
		THROW_IF(!_obj.pushFunction("OnFailLoadingFrame"),"No implementation for abstract function Awesomium::WebViewListener::Load::OnFailLoadingFrame");
		_obj.pushArg((Awesomium::WebViewListener::Load*)this);
		_obj.pushArg(caller);
		_obj.pushArg(frame_id);
		_obj.pushArg(is_main_frame);
		_obj.pushArg(&url);
		_obj.pushArg(error_code);
		_obj.pushArg(&error_desc);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url)
	void OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url) {
		THROW_IF(!_obj.pushFunction("OnFinishLoadingFrame"),"No implementation for abstract function Awesomium::WebViewListener::Load::OnFinishLoadingFrame");
		_obj.pushArg((Awesomium::WebViewListener::Load*)this);
		_obj.pushArg(caller);
		_obj.pushArg(frame_id);
		_obj.pushArg(is_main_frame);
		_obj.pushArg(&url);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Load::OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	void OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url) {
		THROW_IF(!_obj.pushFunction("OnDocumentReady"),"No implementation for abstract function Awesomium::WebViewListener::Load::OnDocumentReady");
		_obj.pushArg((Awesomium::WebViewListener::Load*)this);
		_obj.pushArg(caller);
		_obj.pushArg(&url);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

