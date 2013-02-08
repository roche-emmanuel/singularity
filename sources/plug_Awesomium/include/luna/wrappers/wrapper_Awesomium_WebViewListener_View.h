#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_VIEW_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEWLISTENER_VIEW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_Awesomium_WebViewListener_View : public Awesomium::WebViewListener::View, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_WebViewListener_View() {
		logDEBUG3("Calling delete function for wrapper Awesomium_WebViewListener_View");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::WebViewListener::View*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_WebViewListener_View(lua_State* L, lua_Table* dum) 
		: Awesomium::WebViewListener::View(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::WebViewListener::View*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::WebViewListener::View::OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title)
	void OnChangeTitle(Awesomium::WebView * caller, const Awesomium::WebString & title) {
		THROW_IF(!_obj.pushFunction("OnChangeTitle"),"No implementation for abstract function Awesomium::WebViewListener::View::OnChangeTitle");
		_obj.pushArg((Awesomium::WebViewListener::View*)this);
		_obj.pushArg(caller);
		_obj.pushArg(&title);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::View::OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	void OnChangeAddressBar(Awesomium::WebView * caller, const Awesomium::WebURL & url) {
		THROW_IF(!_obj.pushFunction("OnChangeAddressBar"),"No implementation for abstract function Awesomium::WebViewListener::View::OnChangeAddressBar");
		_obj.pushArg((Awesomium::WebViewListener::View*)this);
		_obj.pushArg(caller);
		_obj.pushArg(&url);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::View::OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip)
	void OnChangeTooltip(Awesomium::WebView * caller, const Awesomium::WebString & tooltip) {
		THROW_IF(!_obj.pushFunction("OnChangeTooltip"),"No implementation for abstract function Awesomium::WebViewListener::View::OnChangeTooltip");
		_obj.pushArg((Awesomium::WebViewListener::View*)this);
		_obj.pushArg(caller);
		_obj.pushArg(&tooltip);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::View::OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url)
	void OnChangeTargetURL(Awesomium::WebView * caller, const Awesomium::WebURL & url) {
		THROW_IF(!_obj.pushFunction("OnChangeTargetURL"),"No implementation for abstract function Awesomium::WebViewListener::View::OnChangeTargetURL");
		_obj.pushArg((Awesomium::WebViewListener::View*)this);
		_obj.pushArg(caller);
		_obj.pushArg(&url);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::View::OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor)
	void OnChangeCursor(Awesomium::WebView * caller, Awesomium::Cursor cursor) {
		THROW_IF(!_obj.pushFunction("OnChangeCursor"),"No implementation for abstract function Awesomium::WebViewListener::View::OnChangeCursor");
		_obj.pushArg((Awesomium::WebViewListener::View*)this);
		_obj.pushArg(caller);
		_obj.pushArg(cursor);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::View::OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type)
	void OnChangeFocus(Awesomium::WebView * caller, Awesomium::FocusedElementType focused_type) {
		THROW_IF(!_obj.pushFunction("OnChangeFocus"),"No implementation for abstract function Awesomium::WebViewListener::View::OnChangeFocus");
		_obj.pushArg((Awesomium::WebViewListener::View*)this);
		_obj.pushArg(caller);
		_obj.pushArg(focused_type);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebViewListener::View::OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup)
	void OnShowCreatedWebView(Awesomium::WebView * caller, Awesomium::WebView * new_view, const Awesomium::WebURL & opener_url, const Awesomium::WebURL & target_url, const Awesomium::Rect & initial_pos, bool is_popup) {
		THROW_IF(!_obj.pushFunction("OnShowCreatedWebView"),"No implementation for abstract function Awesomium::WebViewListener::View::OnShowCreatedWebView");
		_obj.pushArg((Awesomium::WebViewListener::View*)this);
		_obj.pushArg(caller);
		_obj.pushArg(new_view);
		_obj.pushArg(&opener_url);
		_obj.pushArg(&target_url);
		_obj.pushArg(&initial_pos);
		_obj.pushArg(is_popup);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

