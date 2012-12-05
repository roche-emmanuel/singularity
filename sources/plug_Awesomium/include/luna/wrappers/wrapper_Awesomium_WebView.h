#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEW_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_WEBVIEW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/WebView.h>

class wrapper_Awesomium_WebView : public Awesomium::WebView {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_Awesomium_WebView(lua_State* L, lua_Table* dum) : Awesomium::WebView(), _obj(L,-1) {};

	// void Awesomium::WebView::Destroy()
	void Destroy() {
		THROW_IF(!_obj.pushFunction("Destroy"),"No implementation for abstract function Awesomium::WebView::Destroy");
		return (_obj.callFunction<void>());
	};

	// Awesomium::WebViewType Awesomium::WebView::type()
	Awesomium::WebViewType type() {
		THROW_IF(!_obj.pushFunction("type"),"No implementation for abstract function Awesomium::WebView::type");
		return (Awesomium::WebViewType)(_obj.callFunction<int>());
	};

	// int Awesomium::WebView::process_id()
	int process_id() {
		THROW_IF(!_obj.pushFunction("process_id"),"No implementation for abstract function Awesomium::WebView::process_id");
		return (_obj.callFunction<int>());
	};

	// ProcessHandle Awesomium::WebView::process_handle()
	ProcessHandle process_handle() {
		THROW_IF(!_obj.pushFunction("process_handle"),"No implementation for abstract function Awesomium::WebView::process_handle");
		return (_obj.callFunction<ProcessHandle>());
	};

	// void Awesomium::WebView::set_view_listener(WebViewListener::View * listener)
	void set_view_listener(WebViewListener::View * listener) {
		THROW_IF(!_obj.pushFunction("set_view_listener"),"No implementation for abstract function Awesomium::WebView::set_view_listener");
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_load_listener(WebViewListener::Load * listener)
	void set_load_listener(WebViewListener::Load * listener) {
		THROW_IF(!_obj.pushFunction("set_load_listener"),"No implementation for abstract function Awesomium::WebView::set_load_listener");
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_process_listener(WebViewListener::Process * listener)
	void set_process_listener(WebViewListener::Process * listener) {
		THROW_IF(!_obj.pushFunction("set_process_listener"),"No implementation for abstract function Awesomium::WebView::set_process_listener");
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_menu_listener(WebViewListener::Menu * listener)
	void set_menu_listener(WebViewListener::Menu * listener) {
		THROW_IF(!_obj.pushFunction("set_menu_listener"),"No implementation for abstract function Awesomium::WebView::set_menu_listener");
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_dialog_listener(WebViewListener::Dialog * listener)
	void set_dialog_listener(WebViewListener::Dialog * listener) {
		THROW_IF(!_obj.pushFunction("set_dialog_listener"),"No implementation for abstract function Awesomium::WebView::set_dialog_listener");
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_print_listener(WebViewListener::Print * listener)
	void set_print_listener(WebViewListener::Print * listener) {
		THROW_IF(!_obj.pushFunction("set_print_listener"),"No implementation for abstract function Awesomium::WebView::set_print_listener");
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_download_listener(WebViewListener::Download * listener)
	void set_download_listener(WebViewListener::Download * listener) {
		THROW_IF(!_obj.pushFunction("set_download_listener"),"No implementation for abstract function Awesomium::WebView::set_download_listener");
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::set_input_method_editor_listener(WebViewListener::InputMethodEditor * listener)
	void set_input_method_editor_listener(WebViewListener::InputMethodEditor * listener) {
		THROW_IF(!_obj.pushFunction("set_input_method_editor_listener"),"No implementation for abstract function Awesomium::WebView::set_input_method_editor_listener");
		_obj.pushArg(listener);
		return (_obj.callFunction<void>());
	};

	// WebViewListener::View * Awesomium::WebView::view_listener()
	WebViewListener::View * view_listener() {
		THROW_IF(!_obj.pushFunction("view_listener"),"No implementation for abstract function Awesomium::WebView::view_listener");
		return (_obj.callFunction<WebViewListener::View*>());
	};

	// WebViewListener::Load * Awesomium::WebView::load_listener()
	WebViewListener::Load * load_listener() {
		THROW_IF(!_obj.pushFunction("load_listener"),"No implementation for abstract function Awesomium::WebView::load_listener");
		return (_obj.callFunction<WebViewListener::Load*>());
	};

	// WebViewListener::Process * Awesomium::WebView::process_listener()
	WebViewListener::Process * process_listener() {
		THROW_IF(!_obj.pushFunction("process_listener"),"No implementation for abstract function Awesomium::WebView::process_listener");
		return (_obj.callFunction<WebViewListener::Process*>());
	};

	// WebViewListener::Menu * Awesomium::WebView::menu_listener()
	WebViewListener::Menu * menu_listener() {
		THROW_IF(!_obj.pushFunction("menu_listener"),"No implementation for abstract function Awesomium::WebView::menu_listener");
		return (_obj.callFunction<WebViewListener::Menu*>());
	};

	// WebViewListener::Dialog * Awesomium::WebView::dialog_listener()
	WebViewListener::Dialog * dialog_listener() {
		THROW_IF(!_obj.pushFunction("dialog_listener"),"No implementation for abstract function Awesomium::WebView::dialog_listener");
		return (_obj.callFunction<WebViewListener::Dialog*>());
	};

	// WebViewListener::Print * Awesomium::WebView::print_listener()
	WebViewListener::Print * print_listener() {
		THROW_IF(!_obj.pushFunction("print_listener"),"No implementation for abstract function Awesomium::WebView::print_listener");
		return (_obj.callFunction<WebViewListener::Print*>());
	};

	// WebViewListener::Download * Awesomium::WebView::download_listener()
	WebViewListener::Download * download_listener() {
		THROW_IF(!_obj.pushFunction("download_listener"),"No implementation for abstract function Awesomium::WebView::download_listener");
		return (_obj.callFunction<WebViewListener::Download*>());
	};

	// WebViewListener::InputMethodEditor * Awesomium::WebView::input_method_editor_listener()
	WebViewListener::InputMethodEditor * input_method_editor_listener() {
		THROW_IF(!_obj.pushFunction("input_method_editor_listener"),"No implementation for abstract function Awesomium::WebView::input_method_editor_listener");
		return (_obj.callFunction<WebViewListener::InputMethodEditor*>());
	};

	// void Awesomium::WebView::LoadURL(const Awesomium::WebURL & url)
	void LoadURL(const Awesomium::WebURL & url) {
		THROW_IF(!_obj.pushFunction("LoadURL"),"No implementation for abstract function Awesomium::WebView::LoadURL");
		_obj.pushArg(&url);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::GoBack()
	void GoBack() {
		THROW_IF(!_obj.pushFunction("GoBack"),"No implementation for abstract function Awesomium::WebView::GoBack");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::GoForward()
	void GoForward() {
		THROW_IF(!_obj.pushFunction("GoForward"),"No implementation for abstract function Awesomium::WebView::GoForward");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::GoToHistoryOffset(int offset)
	void GoToHistoryOffset(int offset) {
		THROW_IF(!_obj.pushFunction("GoToHistoryOffset"),"No implementation for abstract function Awesomium::WebView::GoToHistoryOffset");
		_obj.pushArg(offset);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Stop()
	void Stop() {
		THROW_IF(!_obj.pushFunction("Stop"),"No implementation for abstract function Awesomium::WebView::Stop");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Reload(bool ignore_cache)
	void Reload(bool ignore_cache) {
		THROW_IF(!_obj.pushFunction("Reload"),"No implementation for abstract function Awesomium::WebView::Reload");
		_obj.pushArg(ignore_cache);
		return (_obj.callFunction<void>());
	};

	// bool Awesomium::WebView::CanGoBack()
	bool CanGoBack() {
		THROW_IF(!_obj.pushFunction("CanGoBack"),"No implementation for abstract function Awesomium::WebView::CanGoBack");
		return (_obj.callFunction<bool>());
	};

	// bool Awesomium::WebView::CanGoForward()
	bool CanGoForward() {
		THROW_IF(!_obj.pushFunction("CanGoForward"),"No implementation for abstract function Awesomium::WebView::CanGoForward");
		return (_obj.callFunction<bool>());
	};

	// Awesomium::Surface * Awesomium::WebView::surface()
	Awesomium::Surface * surface() {
		THROW_IF(!_obj.pushFunction("surface"),"No implementation for abstract function Awesomium::WebView::surface");
		return (_obj.callFunction<Awesomium::Surface*>());
	};

	// Awesomium::WebURL Awesomium::WebView::url()
	Awesomium::WebURL url() {
		THROW_IF(!_obj.pushFunction("url"),"No implementation for abstract function Awesomium::WebView::url");
		return *(_obj.callFunction<Awesomium::WebURL*>());
	};

	// Awesomium::WebString Awesomium::WebView::title()
	Awesomium::WebString title() {
		THROW_IF(!_obj.pushFunction("title"),"No implementation for abstract function Awesomium::WebView::title");
		return *(_obj.callFunction<Awesomium::WebString*>());
	};

	// Awesomium::WebSession * Awesomium::WebView::session()
	Awesomium::WebSession * session() {
		THROW_IF(!_obj.pushFunction("session"),"No implementation for abstract function Awesomium::WebView::session");
		return (_obj.callFunction<Awesomium::WebSession*>());
	};

	// bool Awesomium::WebView::IsLoading()
	bool IsLoading() {
		THROW_IF(!_obj.pushFunction("IsLoading"),"No implementation for abstract function Awesomium::WebView::IsLoading");
		return (_obj.callFunction<bool>());
	};

	// bool Awesomium::WebView::IsCrashed()
	bool IsCrashed() {
		THROW_IF(!_obj.pushFunction("IsCrashed"),"No implementation for abstract function Awesomium::WebView::IsCrashed");
		return (_obj.callFunction<bool>());
	};

	// void Awesomium::WebView::Resize(int width, int height)
	void Resize(int width, int height) {
		THROW_IF(!_obj.pushFunction("Resize"),"No implementation for abstract function Awesomium::WebView::Resize");
		_obj.pushArg(width);
		_obj.pushArg(height);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::SetTransparent(bool is_transparent)
	void SetTransparent(bool is_transparent) {
		THROW_IF(!_obj.pushFunction("SetTransparent"),"No implementation for abstract function Awesomium::WebView::SetTransparent");
		_obj.pushArg(is_transparent);
		return (_obj.callFunction<void>());
	};

	// bool Awesomium::WebView::IsTransparent()
	bool IsTransparent() {
		THROW_IF(!_obj.pushFunction("IsTransparent"),"No implementation for abstract function Awesomium::WebView::IsTransparent");
		return (_obj.callFunction<bool>());
	};

	// void Awesomium::WebView::PauseRendering()
	void PauseRendering() {
		THROW_IF(!_obj.pushFunction("PauseRendering"),"No implementation for abstract function Awesomium::WebView::PauseRendering");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::ResumeRendering()
	void ResumeRendering() {
		THROW_IF(!_obj.pushFunction("ResumeRendering"),"No implementation for abstract function Awesomium::WebView::ResumeRendering");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Focus()
	void Focus() {
		THROW_IF(!_obj.pushFunction("Focus"),"No implementation for abstract function Awesomium::WebView::Focus");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Unfocus()
	void Unfocus() {
		THROW_IF(!_obj.pushFunction("Unfocus"),"No implementation for abstract function Awesomium::WebView::Unfocus");
		return (_obj.callFunction<void>());
	};

	// Awesomium::FocusedElementType Awesomium::WebView::focused_element_type()
	Awesomium::FocusedElementType focused_element_type() {
		THROW_IF(!_obj.pushFunction("focused_element_type"),"No implementation for abstract function Awesomium::WebView::focused_element_type");
		return (Awesomium::FocusedElementType)(_obj.callFunction<int>());
	};

	// void Awesomium::WebView::InjectMouseMove(int x, int y)
	void InjectMouseMove(int x, int y) {
		THROW_IF(!_obj.pushFunction("InjectMouseMove"),"No implementation for abstract function Awesomium::WebView::InjectMouseMove");
		_obj.pushArg(x);
		_obj.pushArg(y);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::InjectMouseDown(Awesomium::MouseButton button)
	void InjectMouseDown(Awesomium::MouseButton button) {
		THROW_IF(!_obj.pushFunction("InjectMouseDown"),"No implementation for abstract function Awesomium::WebView::InjectMouseDown");
		_obj.pushArg(button);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::InjectMouseUp(Awesomium::MouseButton button)
	void InjectMouseUp(Awesomium::MouseButton button) {
		THROW_IF(!_obj.pushFunction("InjectMouseUp"),"No implementation for abstract function Awesomium::WebView::InjectMouseUp");
		_obj.pushArg(button);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::InjectMouseWheel(int scroll_vert, int scroll_horz)
	void InjectMouseWheel(int scroll_vert, int scroll_horz) {
		THROW_IF(!_obj.pushFunction("InjectMouseWheel"),"No implementation for abstract function Awesomium::WebView::InjectMouseWheel");
		_obj.pushArg(scroll_vert);
		_obj.pushArg(scroll_horz);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::InjectKeyboardEvent(const Awesomium::WebKeyboardEvent & key_event)
	void InjectKeyboardEvent(const Awesomium::WebKeyboardEvent & key_event) {
		THROW_IF(!_obj.pushFunction("InjectKeyboardEvent"),"No implementation for abstract function Awesomium::WebView::InjectKeyboardEvent");
		_obj.pushArg(&key_event);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::InjectTouchEvent(const Awesomium::WebTouchEvent & touch_event)
	void InjectTouchEvent(const Awesomium::WebTouchEvent & touch_event) {
		THROW_IF(!_obj.pushFunction("InjectTouchEvent"),"No implementation for abstract function Awesomium::WebView::InjectTouchEvent");
		_obj.pushArg(&touch_event);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::ActivateIME(bool activate)
	void ActivateIME(bool activate) {
		THROW_IF(!_obj.pushFunction("ActivateIME"),"No implementation for abstract function Awesomium::WebView::ActivateIME");
		_obj.pushArg(activate);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::SetIMEComposition(const Awesomium::WebString & input_string, int cursor_pos, int target_start, int target_end)
	void SetIMEComposition(const Awesomium::WebString & input_string, int cursor_pos, int target_start, int target_end) {
		THROW_IF(!_obj.pushFunction("SetIMEComposition"),"No implementation for abstract function Awesomium::WebView::SetIMEComposition");
		_obj.pushArg(&input_string);
		_obj.pushArg(cursor_pos);
		_obj.pushArg(target_start);
		_obj.pushArg(target_end);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::ConfirmIMEComposition(const Awesomium::WebString & input_string)
	void ConfirmIMEComposition(const Awesomium::WebString & input_string) {
		THROW_IF(!_obj.pushFunction("ConfirmIMEComposition"),"No implementation for abstract function Awesomium::WebView::ConfirmIMEComposition");
		_obj.pushArg(&input_string);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::CancelIMEComposition()
	void CancelIMEComposition() {
		THROW_IF(!_obj.pushFunction("CancelIMEComposition"),"No implementation for abstract function Awesomium::WebView::CancelIMEComposition");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Undo()
	void Undo() {
		THROW_IF(!_obj.pushFunction("Undo"),"No implementation for abstract function Awesomium::WebView::Undo");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Redo()
	void Redo() {
		THROW_IF(!_obj.pushFunction("Redo"),"No implementation for abstract function Awesomium::WebView::Redo");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Cut()
	void Cut() {
		THROW_IF(!_obj.pushFunction("Cut"),"No implementation for abstract function Awesomium::WebView::Cut");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Copy()
	void Copy() {
		THROW_IF(!_obj.pushFunction("Copy"),"No implementation for abstract function Awesomium::WebView::Copy");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::CopyImageAt(int x, int y)
	void CopyImageAt(int x, int y) {
		THROW_IF(!_obj.pushFunction("CopyImageAt"),"No implementation for abstract function Awesomium::WebView::CopyImageAt");
		_obj.pushArg(x);
		_obj.pushArg(y);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::Paste()
	void Paste() {
		THROW_IF(!_obj.pushFunction("Paste"),"No implementation for abstract function Awesomium::WebView::Paste");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::PasteAndMatchStyle()
	void PasteAndMatchStyle() {
		THROW_IF(!_obj.pushFunction("PasteAndMatchStyle"),"No implementation for abstract function Awesomium::WebView::PasteAndMatchStyle");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::SelectAll()
	void SelectAll() {
		THROW_IF(!_obj.pushFunction("SelectAll"),"No implementation for abstract function Awesomium::WebView::SelectAll");
		return (_obj.callFunction<void>());
	};

	// int Awesomium::WebView::PrintToFile(const Awesomium::WebString & output_directory, const Awesomium::PrintConfig & config)
	int PrintToFile(const Awesomium::WebString & output_directory, const Awesomium::PrintConfig & config) {
		THROW_IF(!_obj.pushFunction("PrintToFile"),"No implementation for abstract function Awesomium::WebView::PrintToFile");
		_obj.pushArg(&output_directory);
		_obj.pushArg(&config);
		return (_obj.callFunction<int>());
	};

	// Awesomium::Error Awesomium::WebView::last_error() const
	Awesomium::Error last_error() const {
		THROW_IF(!_obj.pushFunction("last_error"),"No implementation for abstract function Awesomium::WebView::last_error");
		return (Awesomium::Error)(_obj.callFunction<int>());
	};

	// Awesomium::JSValue Awesomium::WebView::CreateGlobalJavascriptObject(const Awesomium::WebString & name)
	Awesomium::JSValue CreateGlobalJavascriptObject(const Awesomium::WebString & name) {
		THROW_IF(!_obj.pushFunction("CreateGlobalJavascriptObject"),"No implementation for abstract function Awesomium::WebView::CreateGlobalJavascriptObject");
		_obj.pushArg(&name);
		return *(_obj.callFunction<Awesomium::JSValue*>());
	};

	// void Awesomium::WebView::ExecuteJavascript(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath)
	void ExecuteJavascript(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath) {
		THROW_IF(!_obj.pushFunction("ExecuteJavascript"),"No implementation for abstract function Awesomium::WebView::ExecuteJavascript");
		_obj.pushArg(&script);
		_obj.pushArg(&frame_xpath);
		return (_obj.callFunction<void>());
	};

	// Awesomium::JSValue Awesomium::WebView::ExecuteJavascriptWithResult(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath)
	Awesomium::JSValue ExecuteJavascriptWithResult(const Awesomium::WebString & script, const Awesomium::WebString & frame_xpath) {
		THROW_IF(!_obj.pushFunction("ExecuteJavascriptWithResult"),"No implementation for abstract function Awesomium::WebView::ExecuteJavascriptWithResult");
		_obj.pushArg(&script);
		_obj.pushArg(&frame_xpath);
		return *(_obj.callFunction<Awesomium::JSValue*>());
	};

	// void Awesomium::WebView::set_js_method_handler(Awesomium::JSMethodHandler * handler)
	void set_js_method_handler(Awesomium::JSMethodHandler * handler) {
		THROW_IF(!_obj.pushFunction("set_js_method_handler"),"No implementation for abstract function Awesomium::WebView::set_js_method_handler");
		_obj.pushArg(handler);
		return (_obj.callFunction<void>());
	};

	// Awesomium::JSMethodHandler * Awesomium::WebView::js_method_handler()
	Awesomium::JSMethodHandler * js_method_handler() {
		THROW_IF(!_obj.pushFunction("js_method_handler"),"No implementation for abstract function Awesomium::WebView::js_method_handler");
		return (_obj.callFunction<Awesomium::JSMethodHandler*>());
	};

	// void Awesomium::WebView::DidSelectPopupMenuItem(int item_index)
	void DidSelectPopupMenuItem(int item_index) {
		THROW_IF(!_obj.pushFunction("DidSelectPopupMenuItem"),"No implementation for abstract function Awesomium::WebView::DidSelectPopupMenuItem");
		_obj.pushArg(item_index);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidCancelPopupMenu()
	void DidCancelPopupMenu() {
		THROW_IF(!_obj.pushFunction("DidCancelPopupMenu"),"No implementation for abstract function Awesomium::WebView::DidCancelPopupMenu");
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidChooseFiles(const Awesomium::WebStringArray & files, bool should_write_files)
	void DidChooseFiles(const Awesomium::WebStringArray & files, bool should_write_files) {
		THROW_IF(!_obj.pushFunction("DidChooseFiles"),"No implementation for abstract function Awesomium::WebView::DidChooseFiles");
		_obj.pushArg(&files);
		_obj.pushArg(should_write_files);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidLogin(int request_id, const Awesomium::WebString & username, const Awesomium::WebString & password)
	void DidLogin(int request_id, const Awesomium::WebString & username, const Awesomium::WebString & password) {
		THROW_IF(!_obj.pushFunction("DidLogin"),"No implementation for abstract function Awesomium::WebView::DidLogin");
		_obj.pushArg(request_id);
		_obj.pushArg(&username);
		_obj.pushArg(&password);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidCancelLogin(int request_id)
	void DidCancelLogin(int request_id) {
		THROW_IF(!_obj.pushFunction("DidCancelLogin"),"No implementation for abstract function Awesomium::WebView::DidCancelLogin");
		_obj.pushArg(request_id);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidChooseDownloadPath(int download_id, const Awesomium::WebString & path)
	void DidChooseDownloadPath(int download_id, const Awesomium::WebString & path) {
		THROW_IF(!_obj.pushFunction("DidChooseDownloadPath"),"No implementation for abstract function Awesomium::WebView::DidChooseDownloadPath");
		_obj.pushArg(download_id);
		_obj.pushArg(&path);
		return (_obj.callFunction<void>());
	};

	// void Awesomium::WebView::DidCancelDownload(int download_id)
	void DidCancelDownload(int download_id) {
		THROW_IF(!_obj.pushFunction("DidCancelDownload"),"No implementation for abstract function Awesomium::WebView::DidCancelDownload");
		_obj.pushArg(download_id);
		return (_obj.callFunction<void>());
	};




};




#endif

