#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_DOWNLOAD_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_DOWNLOAD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_WebViewListener_Download : public WebViewListener::Download {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_WebViewListener_Download(lua_State* L, lua_Table* dum) : WebViewListener::Download(), _obj(L,-1) {};

	// void WebViewListener::Download::OnRequestDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & suggested_filename, const Awesomium::WebString & mime_type)
	void OnRequestDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & suggested_filename, const Awesomium::WebString & mime_type) {
		THROW_IF(!_obj.pushFunction("OnRequestDownload"),"No implementation for abstract function WebViewListener::Download::OnRequestDownload");
		_obj.pushArg(caller);
		_obj.pushArg(download_id);
		_obj.pushArg(&url);
		_obj.pushArg(&suggested_filename);
		_obj.pushArg(&mime_type);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Download::OnUpdateDownload(Awesomium::WebView * caller, int download_id, long long total_bytes, long long received_bytes, long long current_speed)
	void OnUpdateDownload(Awesomium::WebView * caller, int download_id, long long total_bytes, long long received_bytes, long long current_speed) {
		THROW_IF(!_obj.pushFunction("OnUpdateDownload"),"No implementation for abstract function WebViewListener::Download::OnUpdateDownload");
		_obj.pushArg(caller);
		_obj.pushArg(download_id);
		_obj.pushArg(total_bytes);
		_obj.pushArg(received_bytes);
		_obj.pushArg(current_speed);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Download::OnFinishDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & saved_path)
	void OnFinishDownload(Awesomium::WebView * caller, int download_id, const Awesomium::WebURL & url, const Awesomium::WebString & saved_path) {
		THROW_IF(!_obj.pushFunction("OnFinishDownload"),"No implementation for abstract function WebViewListener::Download::OnFinishDownload");
		_obj.pushArg(caller);
		_obj.pushArg(download_id);
		_obj.pushArg(&url);
		_obj.pushArg(&saved_path);
		return (_obj.callFunction<void>());
	};




};




#endif
