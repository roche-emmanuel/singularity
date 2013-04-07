#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEW_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Awesomium/WebView.h>

class wrapper_Awesomium_WebView : public Awesomium::WebView, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_WebView() {
		logDEBUG3("Calling delete function for wrapper Awesomium_WebView");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::WebView*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_WebView(lua_State* L, lua_Table* dum) 
		: Awesomium::WebView(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::WebView*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::WebView::Destroy()
	void Destroy() {
		THROW_IF(!_obj.pushFunction("Destroy"),"No implementation for abstract function Awesomium::WebView::Destroy");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// Awesomium::WebViewType Awesomium::WebView::type()
	Awesomium::WebViewType type() {
		THROW_IF(!_obj.pushFunction("type"),"No implementation for abstract function Awesomium::WebView::type");
		_obj.pushArg((Awesomium::WebView*)this);
		return (Awesomium::WebViewType)(_obj.callFunction<int>());
	};

	// int Awesomium::WebView::process_id()
	int process_id() {
		THROW_IF(!_obj.pushFunction("process_id"),"No implementation for abstract function Awesomium::WebView::process_id");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<int>());
	};

	// void Awesomium::WebView::set_view_listener(Awesomium::WebViewListener::View * listener)
	void set_view_listener(Awesomium::WebViewListener::View * listener) {
		THROW_IF(!_obj.pushFunction("set_view_listener"),"No implementation for abstract function Awesomium::WebView::set_view_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_load_listener(Awesomium::WebViewListener::Load * listener)
	void set_load_listener(Awesomium::WebViewListener::Load * listener) {
		THROW_IF(!_obj.pushFunction("set_load_listener"),"No implementation for abstract function Awesomium::WebView::set_load_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_process_listener(Awesomium::WebViewListener::Process * listener)
	void set_process_listener(Awesomium::WebViewListener::Process * listener) {
		THROW_IF(!_obj.pushFunction("set_process_listener"),"No implementation for abstract function Awesomium::WebView::set_process_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_menu_listener(Awesomium::WebViewListener::Menu * listener)
	void set_menu_listener(Awesomium::WebViewListener::Menu * listener) {
		THROW_IF(!_obj.pushFunction("set_menu_listener"),"No implementation for abstract function Awesomium::WebView::set_menu_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_dialog_listener(Awesomium::WebViewListener::Dialog * listener)
	void set_dialog_listener(Awesomium::WebViewListener::Dialog * listener) {
		THROW_IF(!_obj.pushFunction("set_dialog_listener"),"No implementation for abstract function Awesomium::WebView::set_dialog_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_print_listener(Awesomium::WebViewListener::Print * listener)
	void set_print_listener(Awesomium::WebViewListener::Print * listener) {
		THROW_IF(!_obj.pushFunction("set_print_listener"),"No implementation for abstract function Awesomium::WebView::set_print_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_download_listener(Awesomium::WebViewListener::Download * listener)
	void set_download_listener(Awesomium::WebViewListener::Download * listener) {
		THROW_IF(!_obj.pushFunction("set_download_listener"),"No implementation for abstract function Awesomium::WebView::set_download_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_input_method_editor_listener(Awesomium::WebViewListener::InputMethodEditor * listener)
	void set_input_method_editor_listener(Awesomium::WebViewListener::InputMethodEditor * listener) {
		THROW_IF(!_obj.pushFunction("set_input_method_editor_listener"),"No implementation for abstract function Awesomium::WebView::set_input_method_editor_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// Awesomium::WebViewListener::View * Awesomium::WebView::view_listener()
	Awesomium::WebViewListener::View * view_listener() {
		THROW_IF(!_obj.pushFunction("view_listener"),"No implementation for abstract function Awesomium::WebView::view_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::WebViewListener::View*>());
	};

	// Awesomium::WebViewListener::Load * Awesomium::WebView::load_listener()
	Awesomium::WebViewListener::Load * load_listener() {
		THROW_IF(!_obj.pushFunction("load_listener"),"No implementation for abstract function Awesomium::WebView::load_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::WebViewListener::Load*>());
	};

	// Awesomium::WebViewListener::Process * Awesomium::WebView::process_listener()
	Awesomium::WebViewListener::Process * process_listener() {
		THROW_IF(!_obj.pushFunction("process_listener"),"No implementation for abstract function Awesomium::WebView::process_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::WebViewListener::Process*>());
	};

	// Awesomium::WebViewListener::Menu * Awesomium::WebView::menu_listener()
	Awesomium::WebViewListener::Menu * menu_listener() {
		THROW_IF(!_obj.pushFunction("menu_listener"),"No implementation for abstract function Awesomium::WebView::menu_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::WebViewListener::Menu*>());
	};

	// Awesomium::WebViewListener::Dialog * Awesomium::WebView::dialog_listener()
	Awesomium::WebViewListener::Dialog * dialog_listener() {
		THROW_IF(!_obj.pushFunction("dialog_listener"),"No implementation for abstract function Awesomium::WebView::dialog_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::WebViewListener::Dialog*>());
	};

	// Awesomium::WebViewListener::Print * Awesomium::WebView::print_listener()
	Awesomium::WebViewListener::Print * print_listener() {
		THROW_IF(!_obj.pushFunction("print_listener"),"No implementation for abstract function Awesomium::WebView::print_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::WebViewListener::Print*>());
	};

	// Awesomium::WebViewListener::Download * Awesomium::WebView::download_listener()
	Awesomium::WebViewListener::Download * download_listener() {
		THROW_IF(!_obj.pushFunction("download_listener"),"No implementation for abstract function Awesomium::WebView::download_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::WebViewListener::Download*>());
	};

	// Awesomium::WebViewListener::InputMethodEditor * Awesomium::WebView::input_method_editor_listener()
	Awesomium::WebViewListener::InputMethodEditor * input_method_editor_listener() {
		THROW_IF(!_obj.pushFunction("input_method_editor_listener"),"No implementation for abstract function Awesomium::WebView::input_method_editor_listener");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::WebViewListener::InputMethodEditor*>());
	};

	// void Awesomium::WebView::LoadURL(const Awesomium::WebURL & url)
	void LoadURL(const Awesomium::WebURL & url) {
		THROW_IF(!_obj.pushFunction("LoadURL"),"No implementation for abstract function Awesomium::WebView::LoadURL");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(&url);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::GoBack()
	void GoBack() {
		THROW_IF(!_obj.pushFunction("GoBack"),"No implementation for abstract function Awesomium::WebView::GoBack");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::GoForward()
	void GoForward() {
		THROW_IF(!_obj.pushFunction("GoForward"),"No implementation for abstract function Awesomium::WebView::GoForward");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::GoToHistoryOffset(int offset)
	void GoToHistoryOffset(int offset) {
		THROW_IF(!_obj.pushFunction("GoToHistoryOffset"),"No implementation for abstract function Awesomium::WebView::GoToHistoryOffset");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(offset);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Stop()
	void Stop() {
		THROW_IF(!_obj.pushFunction("Stop"),"No implementation for abstract function Awesomium::WebView::Stop");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Reload(bool ignore_cache)
	void Reload(bool ignore_cache) {
		THROW_IF(!_obj.pushFunction("Reload"),"No implementation for abstract function Awesomium::WebView::Reload");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(ignore_cache);
		return (_obj.callFunction<void>());
	};

	// bool Awesomium::WebView::CanGoBack()
	bool CanGoBack() {
		THROW_IF(!_obj.pushFunction("CanGoBack"),"No implementation for abstract function Awesomium::WebView::CanGoBack");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<bool>());
	};

	// bool Awesomium::WebView::CanGoForward()
	bool CanGoForward() {
		THROW_IF(!_obj.pushFunction("CanGoForward"),"No implementation for abstract function Awesomium::WebView::CanGoForward");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<bool>());
	};

	// Awesomium::Surface * Awesomium::WebView::surface()
	Awesomium::Surface * surface() {
		THROW_IF(!_obj.pushFunction("surface"),"No implementation for abstract function Awesomium::WebView::surface");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::Surface*>());
	};

	// Awesomium::WebURL Awesomium::WebView::url()
	Awesomium::WebURL url() {
		THROW_IF(!_obj.pushFunction("url"),"No implementation for abstract function Awesomium::WebView::url");
		_obj.pushArg((Awesomium::WebView*)this);
		return *(_obj.callFunction<Awesomium::WebURL*>());
	};

	// Awesomium::WebString Awesomium::WebView::title()
	Awesomium::WebString title() {
		THROW_IF(!_obj.pushFunction("title"),"No implementation for abstract function Awesomium::WebView::title");
		_obj.pushArg((Awesomium::WebView*)this);
		return *(_obj.callFunction<Awesomium::WebString*>());
	};

	// Awesomium::WebSession * Awesomium::WebView::session()
	Awesomium::WebSession * session() {
		THROW_IF(!_obj.pushFunction("session"),"No implementation for abstract function Awesomium::WebView::session");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::WebSession*>());
	};

	// bool Awesomium::WebView::IsLoading()
	bool IsLoading() {
		THROW_IF(!_obj.pushFunction("IsLoading"),"No implementation for abstract function Awesomium::WebView::IsLoading");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<bool>());
	};

	// bool Awesomium::WebView::IsCrashed()
	bool IsCrashed() {
		THROW_IF(!_obj.pushFunction("IsCrashed"),"No implementation for abstract function Awesomium::WebView::IsCrashed");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<bool>());
	};

	// void Awesomium::WebView::Resize(int width, int height)
	void Resize(int width, int height) {
		THROW_IF(!_obj.pushFunction("Resize"),"No implementation for abstract function Awesomium::WebView::Resize");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(width);
		_obj.pushArg(height);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::SetTransparent(bool is_transparent)
	void SetTransparent(bool is_transparent) {
		THROW_IF(!_obj.pushFunction("SetTransparent"),"No implementation for abstract function Awesomium::WebView::SetTransparent");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(is_transparent);
		return (_obj.callFunction<void>());
	};

	// bool Awesomium::WebView::IsTransparent()
	bool IsTransparent() {
		THROW_IF(!_obj.pushFunction("IsTransparent"),"No implementation for abstract function Awesomium::WebView::IsTransparent");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<bool>());
	};

	// void Awesomium::WebView::PauseRendering()
	void PauseRendering() {
		THROW_IF(!_obj.pushFunction("PauseRendering"),"No implementation for abstract function Awesomium::WebView::PauseRendering");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::ResumeRendering()
	void ResumeRendering() {
		THROW_IF(!_obj.pushFunction("ResumeRendering"),"No implementation for abstract function Awesomium::WebView::ResumeRendering");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Focus()
	void Focus() {
		THROW_IF(!_obj.pushFunction("Focus"),"No implementation for abstract function Awesomium::WebView::Focus");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Unfocus()
	void Unfocus() {
		THROW_IF(!_obj.pushFunction("Unfocus"),"No implementation for abstract function Awesomium::WebView::Unfocus");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// Awesomium::FocusedElementType Awesomium::WebView::focused_element_type()
	Awesomium::FocusedElementType focused_element_type() {
		THROW_IF(!_obj.pushFunction("focused_element_type"),"No implementation for abstract function Awesomium::WebView::focused_element_type");
		_obj.pushArg((Awesomium::WebView*)this);
		return (Awesomium::FocusedElementType)(_obj.callFunction<int>());
	};

	// void Awesomium::WebView::InjectMouseMove(int x, int y)
	void InjectMouseMove(int x, int y) {
		THROW_IF(!_obj.pushFunction("InjectMouseMove"),"No implementation for abstract function Awesomium::WebView::InjectMouseMove");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::InjectMouseDown(Awesomium::MouseButton button)
	void InjectMouseDown(Awesomium::MouseButton button) {
		THROW_IF(!_obj.pushFunction("InjectMouseDown"),"No implementation for abstract function Awesomium::WebView::InjectMouseDown");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg((int)button);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::InjectMouseUp(Awesomium::MouseButton button)
	void InjectMouseUp(Awesomium::MouseButton button) {
		THROW_IF(!_obj.pushFunction("InjectMouseUp"),"No implementation for abstract function Awesomium::WebView::InjectMouseUp");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg((int)button);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::InjectMouseWheel(int scroll_vert, int scroll_horz)
	void InjectMouseWheel(int scroll_vert, int scroll_horz) {
		THROW_IF(!_obj.pushFunction("InjectMouseWheel"),"No implementation for abstract function Awesomium::WebView::InjectMouseWheel");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(scroll_vert);
		_obj.pushArg(scroll_horz);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::InjectKeyboardEvent(const Awesomium::WebKeyboardEvent & key_event)
	void InjectKeyboardEvent(const Awesomium::WebKeyboardEvent & key_event) {
		THROW_IF(!_obj.pushFunction("InjectKeyboardEvent"),"No implementation for abstract function Awesomium::WebView::InjectKeyboardEvent");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(&key_event);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::InjectTouchEvent(const Awesomium::WebTouchEvent & touch_event)
	void InjectTouchEvent(const Awesomium::WebTouchEvent & touch_event) {
		THROW_IF(!_obj.pushFunction("InjectTouchEvent"),"No implementation for abstract function Awesomium::WebView::InjectTouchEvent");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(&touch_event);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::ActivateIME(bool activate)
	void ActivateIME(bool activate) {
		THROW_IF(!_obj.pushFunction("ActivateIME"),"No implementation for abstract function Awesomium::WebView::ActivateIME");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(activate);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::SetIMEComposition(const Awesomium::WebString & input_string, int cursor_pos, int target_start, int target_end)
	void SetIMEComposition(const Awesomium::WebString & input_string, int cursor_pos, int target_start, int target_end) {
		THROW_IF(!_obj.pushFunction("SetIMEComposition"),"No implementation for abstract function Awesomium::WebView::SetIMEComposition");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(&input_string);
		_obj.pushArg(cursor_pos);
		_obj.pushArg(target_start);
		_obj.pushArg(target_end);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::ConfirmIMEComposition(const Awesomium::WebString & input_string)
	void ConfirmIMEComposition(const Awesomium::WebString & input_string) {
		THROW_IF(!_obj.pushFunction("ConfirmIMEComposition"),"No implementation for abstract function Awesomium::WebView::ConfirmIMEComposition");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(&input_string);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::CancelIMEComposition()
	void CancelIMEComposition() {
		THROW_IF(!_obj.pushFunction("CancelIMEComposition"),"No implementation for abstract function Awesomium::WebView::CancelIMEComposition");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Undo()
	void Undo() {
		THROW_IF(!_obj.pushFunction("Undo"),"No implementation for abstract function Awesomium::WebView::Undo");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Redo()
	void Redo() {
		THROW_IF(!_obj.pushFunction("Redo"),"No implementation for abstract function Awesomium::WebView::Redo");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Cut()
	void Cut() {
		THROW_IF(!_obj.pushFunction("Cut"),"No implementation for abstract function Awesomium::WebView::Cut");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Copy()
	void Copy() {
		THROW_IF(!_obj.pushFunction("Copy"),"No implementation for abstract function Awesomium::WebView::Copy");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::CopyImageAt(int x, int y)
	void CopyImageAt(int x, int y) {
		THROW_IF(!_obj.pushFunction("CopyImageAt"),"No implementation for abstract function Awesomium::WebView::CopyImageAt");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Paste()
	void Paste() {
		THROW_IF(!_obj.pushFunction("Paste"),"No implementation for abstract function Awesomium::WebView::Paste");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::PasteAndMatchStyle()
	void PasteAndMatchStyle() {
		THROW_IF(!_obj.pushFunction("PasteAndMatchStyle"),"No implementation for abstract function Awesomium::WebView::PasteAndMatchStyle");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::SelectAll()
	void SelectAll() {
		THROW_IF(!_obj.pushFunction("SelectAll"),"No implementation for abstract function Awesomium::WebView::SelectAll");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// int Awesomium::WebView::PrintToFile(const Awesomium::WebString & output_directory, const Awesomium::PrintConfig & config)
	int PrintToFile(const Awesomium::WebString & output_directory, const Awesomium::PrintConfig & config) {
		THROW_IF(!_obj.pushFunction("PrintToFile"),"No implementation for abstract function Awesomium::WebView::PrintToFile");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(&output_directory);
		_obj.pushArg(&config);
		return (_obj.callFunction<int>());
	};

	// Awesomium::Error Awesomium::WebView::last_error() const
	Awesomium::Error last_error() const {
		THROW_IF(!_obj.pushFunction("last_error"),"No implementation for abstract function Awesomium::WebView::last_error");
		_obj.pushArg((Awesomium::WebView*)this);
		return (Awesomium::Error)(_obj.callFunction<int>());
	};

	// Awesomium::JSValue Awesomium::WebView::CreateGlobalJavascriptObject(const Awesomium::WebString & name)
	Awesomium::JSValue CreateGlobalJavascriptObject(const Awesomium::WebString & name) {
		THROW_IF(!_obj.pushFunction("CreateGlobalJavascriptObject"),"No implementation for abstract function Awesomium::WebView::CreateGlobalJavascriptObject");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(&name);
		return *(_obj.callFunction<Awesomium::JSValue*>());
	};

	// void Awesomium::WebView::ExecuteJavascript(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath)
	void ExecuteJavascript(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath) {
		THROW_IF(!_obj.pushFunction("ExecuteJavascript"),"No implementation for abstract function Awesomium::WebView::ExecuteJavascript");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(&script);
		_obj.pushArg(&frame_xpath);
		return (_obj.callFunction<void>());
	};

	// Awesomium::JSValue Awesomium::WebView::ExecuteJavascriptWithResult(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath)
	Awesomium::JSValue ExecuteJavascriptWithResult(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath) {
		THROW_IF(!_obj.pushFunction("ExecuteJavascriptWithResult"),"No implementation for abstract function Awesomium::WebView::ExecuteJavascriptWithResult");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(&script);
		_obj.pushArg(&frame_xpath);
		return *(_obj.callFunction<Awesomium::JSValue*>());
	};

	// void Awesomium::WebView::set_js_method_handler(Awesomium::JSMethodHandler * handler)
	void set_js_method_handler(Awesomium::JSMethodHandler * handler) {
		THROW_IF(!_obj.pushFunction("set_js_method_handler"),"No implementation for abstract function Awesomium::WebView::set_js_method_handler");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(handler);
		return (_obj.callFunction<void>());
	};

	// Awesomium::JSMethodHandler * Awesomium::WebView::js_method_handler()
	Awesomium::JSMethodHandler * js_method_handler() {
		THROW_IF(!_obj.pushFunction("js_method_handler"),"No implementation for abstract function Awesomium::WebView::js_method_handler");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<Awesomium::JSMethodHandler*>());
	};

	// void Awesomium::WebView::DidSelectPopupMenuItem(int item_index)
	void DidSelectPopupMenuItem(int item_index) {
		THROW_IF(!_obj.pushFunction("DidSelectPopupMenuItem"),"No implementation for abstract function Awesomium::WebView::DidSelectPopupMenuItem");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(item_index);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidCancelPopupMenu()
	void DidCancelPopupMenu() {
		THROW_IF(!_obj.pushFunction("DidCancelPopupMenu"),"No implementation for abstract function Awesomium::WebView::DidCancelPopupMenu");
		_obj.pushArg((Awesomium::WebView*)this);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidChooseFiles(const Awesomium::WebStringArray & files, bool should_write_files)
	void DidChooseFiles(const Awesomium::WebStringArray & files, bool should_write_files) {
		THROW_IF(!_obj.pushFunction("DidChooseFiles"),"No implementation for abstract function Awesomium::WebView::DidChooseFiles");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(&files);
		_obj.pushArg(should_write_files);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidLogin(int request_id, const Awesomium::WebString & username, const Awesomium::WebString & password)
	void DidLogin(int request_id, const Awesomium::WebString & username, const Awesomium::WebString & password) {
		THROW_IF(!_obj.pushFunction("DidLogin"),"No implementation for abstract function Awesomium::WebView::DidLogin");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(request_id);
		_obj.pushArg(&username);
		_obj.pushArg(&password);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidCancelLogin(int request_id)
	void DidCancelLogin(int request_id) {
		THROW_IF(!_obj.pushFunction("DidCancelLogin"),"No implementation for abstract function Awesomium::WebView::DidCancelLogin");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(request_id);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidChooseDownloadPath(int download_id, const Awesomium::WebString & path)
	void DidChooseDownloadPath(int download_id, const Awesomium::WebString & path) {
		THROW_IF(!_obj.pushFunction("DidChooseDownloadPath"),"No implementation for abstract function Awesomium::WebView::DidChooseDownloadPath");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(download_id);
		_obj.pushArg(&path);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidCancelDownload(int download_id)
	void DidCancelDownload(int download_id) {
		THROW_IF(!_obj.pushFunction("DidCancelDownload"),"No implementation for abstract function Awesomium::WebView::DidCancelDownload");
		_obj.pushArg((Awesomium::WebView*)this);
		_obj.pushArg(download_id);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// ProcessHandle Awesomium::WebView::process_handle()
ProcessHandle process_handle() {
	THROW_IF(true,"The function call ProcessHandle Awesomium::WebView::process_handle() is not implemented in wrapper.");
	return ProcessHandle();
};

public:
// void Awesomium::WebView::set_parent_window(NativeWindow parent)
void set_parent_window(NativeWindow) {
	THROW_IF(true,"The function call void Awesomium::WebView::set_parent_window(NativeWindow) is not implemented in wrapper.");
};

public:
// NativeWindow Awesomium::WebView::parent_window()
NativeWindow parent_window() {
	THROW_IF(true,"The function call NativeWindow Awesomium::WebView::parent_window() is not implemented in wrapper.");
	return NativeWindow();
};

public:
// NativeWindow Awesomium::WebView::window()
NativeWindow window() {
	THROW_IF(true,"The function call NativeWindow Awesomium::WebView::window() is not implemented in wrapper.");
	return NativeWindow();
};

};




#endif

