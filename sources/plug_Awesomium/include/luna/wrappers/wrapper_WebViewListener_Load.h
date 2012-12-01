#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_LOAD_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_LOAD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

namespace sgt {

class wrapper_WebViewListener_Load : public WebViewListener::Load {
protected:
	LuaObject _obj;
	
public:
	

	wrapper_WebViewListener_Load(lua_State* L) : WebViewListener::Load(), _obj(L,-1) {};

	// void WebViewListener::Load::OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page)
	void OnBeginLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, bool is_error_page) {
		THROW_IF(!_obj.pushFunction("OnBeginLoadingFrame"),"No implementation for abstract function WebViewListener::Load::OnBeginLoadingFrame");
		_obj.pushArg(caller);
		_obj.pushArg(frame_id);
		_obj.pushArg(is_main_frame);
		_obj.pushArg(&url);
		_obj.pushArg(is_error_page);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Load::OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc)
	void OnFailLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url, int error_code, const Awesomium::WebString & error_desc) {
		THROW_IF(!_obj.pushFunction("OnFailLoadingFrame"),"No implementation for abstract function WebViewListener::Load::OnFailLoadingFrame");
		_obj.pushArg(caller);
		_obj.pushArg(frame_id);
		_obj.pushArg(is_main_frame);
		_obj.pushArg(&url);
		_obj.pushArg(error_code);
		_obj.pushArg(&error_desc);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Load::OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url)
	void OnFinishLoadingFrame(Awesomium::WebView * caller, long long frame_id, bool is_main_frame, const Awesomium::WebURL & url) {
		THROW_IF(!_obj.pushFunction("OnFinishLoadingFrame"),"No implementation for abstract function WebViewListener::Load::OnFinishLoadingFrame");
		_obj.pushArg(caller);
		_obj.pushArg(frame_id);
		_obj.pushArg(is_main_frame);
		_obj.pushArg(&url);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::Load::OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	void OnDocumentReady(Awesomium::WebView * caller, const Awesomium::WebURL & url) {
		THROW_IF(!_obj.pushFunction("OnDocumentReady"),"No implementation for abstract function WebViewListener::Load::OnDocumentReady");
		_obj.pushArg(caller);
		_obj.pushArg(&url);
		return (_obj.callFunction<void>());
	};




};

};	



#endif

