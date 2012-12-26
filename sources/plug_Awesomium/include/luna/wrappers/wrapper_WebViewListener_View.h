#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_VIEW_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_VIEW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_WebViewListener_View : public WebViewListener::View, public luna_wrapper_base {

public:
	


	// void WebViewListener::View::OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title)
	void OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title) {
		THROW_IF(!_obj.pushFunction("OnChangeTitle"),"No implementation for abstract function WebViewListener::View::OnChangeTitle");
		_obj.pushArg(caller);
		_obj.pushArg(&title);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::View::OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	void OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url) {
		THROW_IF(!_obj.pushFunction("OnChangeAddressBar"),"No implementation for abstract function WebViewListener::View::OnChangeAddressBar");
		_obj.pushArg(caller);
		_obj.pushArg(&url);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::View::OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip)
	void OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip) {
		THROW_IF(!_obj.pushFunction("OnChangeTooltip"),"No implementation for abstract function WebViewListener::View::OnChangeTooltip");
		_obj.pushArg(caller);
		_obj.pushArg(&tooltip);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::View::OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	void OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url) {
		THROW_IF(!_obj.pushFunction("OnChangeTargetURL"),"No implementation for abstract function WebViewListener::View::OnChangeTargetURL");
		_obj.pushArg(caller);
		_obj.pushArg(&url);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::View::OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor)
	void OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor) {
		THROW_IF(!_obj.pushFunction("OnChangeCursor"),"No implementation for abstract function WebViewListener::View::OnChangeCursor");
		_obj.pushArg(caller);
		_obj.pushArg(cursor);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::View::OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type)
	void OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type) {
		THROW_IF(!_obj.pushFunction("OnChangeFocus"),"No implementation for abstract function WebViewListener::View::OnChangeFocus");
		_obj.pushArg(caller);
		_obj.pushArg(focused_type);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup)
	void OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup) {
		THROW_IF(!_obj.pushFunction("OnShowCreatedWebView"),"No implementation for abstract function WebViewListener::View::OnShowCreatedWebView");
		_obj.pushArg(caller);
		_obj.pushArg(new_view);
		_obj.pushArg(&opener_url);
		_obj.pushArg(&target_url);
		_obj.pushArg(&initial_pos);
		_obj.pushArg(is_popup);
		return (_obj.callFunction<void>());
	};




};




#endif

