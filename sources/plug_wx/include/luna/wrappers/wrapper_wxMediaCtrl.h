#ifndef _WRAPPERS_WRAPPER_WXMEDIACTRL_H_
#define _WRAPPERS_WRAPPER_WXMEDIACTRL_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/mediactrl.h>

class wrapper_wxMediaCtrl : public wxMediaCtrl, public luna_wrapper_base {

public:
		

	~wrapper_wxMediaCtrl() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMediaCtrl(lua_State* L, lua_Table* dum) : wxMediaCtrl(), luna_wrapper_base(L) {};
	wrapper_wxMediaCtrl(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxString & fileName = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & szBackend = wxEmptyString, const wxValidator & validator = wxDefaultValidator, const wxString & name = "mediaCtrl") : wxMediaCtrl(parent, id, fileName, pos, size, style, szBackend, validator, name), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMediaCtrl::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxMediaCtrl::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxMediaCtrl::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxMediaCtrl::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxMediaCtrl::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxMediaCtrl::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxMediaCtrl::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxMediaCtrl::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxMediaCtrl::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxMediaCtrl::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxMediaCtrl::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxMediaCtrl::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxMediaCtrl::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxMediaCtrl::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxMediaCtrl::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			return (_obj.callFunction<int>());
		}

		return wxMediaCtrl::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			return (_obj.callFunction<int>());
		}

		return wxMediaCtrl::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxMediaCtrl::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg(style);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			return (_obj.callFunction<long>());
		}

		return wxMediaCtrl::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg(effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg(effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg(&point);
			_obj.pushArg(origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxMediaCtrl::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			return (_obj.callFunction<wxValidator*>());
		}

		return wxMediaCtrl::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxMediaCtrl::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxMediaCtrl::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg(dir);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxMediaCtrl::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::DoUpdateWindowUI(event);
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::InitDialog();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			return *(_obj.callFunction<wxString*>());
		}

		return wxMediaCtrl::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetLabel(label);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMediaCtrl::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMediaCtrl::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			return *(_obj.callFunction<wxSize*>());
		}

		return wxMediaCtrl::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxMediaCtrl::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxMediaCtrl::AddPendingEvent(event);
	};


};




#endif
