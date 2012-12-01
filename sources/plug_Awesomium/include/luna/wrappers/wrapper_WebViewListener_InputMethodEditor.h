#ifndef _WRAPPERS_WRAPPER_WEBVIEWLISTENER_INPUTMETHODEDITOR_H_
#define _WRAPPERS_WRAPPER_WEBVIEWLISTENER_INPUTMETHODEDITOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebViewListener.h>

namespace sgt {

class wrapper_WebViewListener_InputMethodEditor : public WebViewListener::InputMethodEditor {
protected:
	LuaObject _obj;
	
public:
	

	wrapper_WebViewListener_InputMethodEditor(lua_State* L) : WebViewListener::InputMethodEditor(), _obj(L,-1) {};

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




};

};	



#endif

