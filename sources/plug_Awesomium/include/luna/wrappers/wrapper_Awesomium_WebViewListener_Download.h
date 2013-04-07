#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_DOWNLOAD_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_DOWNLOAD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_Awesomium_WebViewListener_Download : public Awesomium::WebViewListener::Download, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_WebViewListener_Download() {
		logDEBUG3("Calling delete function for wrapper Awesomium_WebViewListener_Download");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::WebViewListener::Download*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_WebViewListener_Download(lua_State* L, lua_Table* dum) 
		: Awesomium::WebViewListener::Download(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::WebViewListener::Download*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::WebViewListener::Download::OnRequestDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & suggested_filename, const Awesomium::WebString & mime_type)
	void OnRequestDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & suggested_filename, const Awesomium::WebString & mime_type) {
		THROW_IF(!_obj.pushFunction("OnRequestDownload"),"No implementation for abstract function Awesomium::WebViewListener::Download::OnRequestDownload");
		_obj.pushArg((Awesomium::WebViewListener::Download*)this);
		_obj.pushArg(caller);
		_obj.pushArg(download_id);
		_obj.pushArg(&url);
		_obj.pushArg(&suggested_filename);
		_obj.pushArg(&mime_type);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Download::OnUpdateDownload(Awesomium::WebView * caller, int download_id, long long total_bytes, long long received_bytes, long long current_speed)
	void OnUpdateDownload(Awesomium::WebView * caller, int download_id, long long total_bytes, long long received_bytes, long long current_speed) {
		THROW_IF(!_obj.pushFunction("OnUpdateDownload"),"No implementation for abstract function Awesomium::WebViewListener::Download::OnUpdateDownload");
		_obj.pushArg((Awesomium::WebViewListener::Download*)this);
		_obj.pushArg(caller);
		_obj.pushArg(download_id);
		_obj.pushArg(total_bytes);
		_obj.pushArg(received_bytes);
		_obj.pushArg(current_speed);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::Download::OnFinishDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & saved_path)
	void OnFinishDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & saved_path) {
		THROW_IF(!_obj.pushFunction("OnFinishDownload"),"No implementation for abstract function Awesomium::WebViewListener::Download::OnFinishDownload");
		_obj.pushArg((Awesomium::WebViewListener::Download*)this);
		_obj.pushArg(caller);
		_obj.pushArg(download_id);
		_obj.pushArg(&url);
		_obj.pushArg(&saved_path);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

