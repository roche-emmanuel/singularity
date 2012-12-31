#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_INPUTMETHODEDITOR_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_INPUTMETHODEDITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

class wrapper_WebViewListener_InputMethodEditor : public WebViewListener::InputMethodEditor, public luna_wrapper_base {

public:
		

	~wrapper_WebViewListener_InputMethodEditor() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_WebViewListener_InputMethodEditor(lua_State* L, lua_Table* dum) : WebViewListener::InputMethodEditor(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void WebViewListener::InputMethodEditor::OnUpdateIME(Awesomium::WebView * caller, Awesomium::TextInputType type, int caret_x, int caret_y)
	void OnUpdateIME(Awesomium::WebView * caller, Awesomium::TextInputType type, int caret_x, int caret_y) {
		THROW_IF(!_obj.pushFunction("OnUpdateIME"),"No implementation for abstract function WebViewListener::InputMethodEditor::OnUpdateIME");
		_obj.pushArg(caller);
		_obj.pushArg(type);
		_obj.pushArg(caret_x);
		_obj.pushArg(caret_y);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::InputMethodEditor::OnCancelIME(Awesomium::WebView * caller)
	void OnCancelIME(Awesomium::WebView * caller) {
		THROW_IF(!_obj.pushFunction("OnCancelIME"),"No implementation for abstract function WebViewListener::InputMethodEditor::OnCancelIME");
		_obj.pushArg(caller);
		return (_obj.callFunction<void>());
	};

	// void WebViewListener::InputMethodEditor::OnChangeIMERange(Awesomium::WebView * caller, unsigned int start, unsigned int end)
	void OnChangeIMERange(Awesomium::WebView * caller, unsigned int start, unsigned int end) {
		THROW_IF(!_obj.pushFunction("OnChangeIMERange"),"No implementation for abstract function WebViewListener::InputMethodEditor::OnChangeIMERange");
		_obj.pushArg(caller);
		_obj.pushArg(start);
		_obj.pushArg(end);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

