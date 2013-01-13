#ifndef _WRAPPERS_WRAPPER_WXPANEL_H_
#define _WRAPPERS_WRAPPER_WXPANEL_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/panel.h>

class wrapper_wxPanel : public wxPanel, public luna_wrapper_base {

public:
		

	~wrapper_wxPanel() {
		logDEBUG3("Calling delete function for wrapper wxPanel");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPanel*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPanel(lua_State* L, lua_Table* dum) 
		: wxPanel(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPanel*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxPanel(lua_State* L, lua_Table* dum, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTAB_TRAVERSAL, const wxString & name = wxPanelNameStr) 
		: wxPanel(parent, id, pos, size, style, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPanel*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPanel::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPanel::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxPanel::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPanel::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxPanel::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxPanel::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPanel::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxPanel::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxPanel::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxPanel::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxPanel::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxPanel::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxPanel::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxPanel::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPanel::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPanel::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPanel::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPanel::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPanel::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPanel::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPanel::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPanel::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPanel::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxPanel::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxPanel*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxPanel::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<int>());
		}

		return wxPanel::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<int>());
		}

		return wxPanel::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxPanel::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxPanel::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<long>());
		}

		return wxPanel::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&point);
			_obj.pushArg(origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPanel::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxPanel::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::Validate();
	};

	// wxString wxWindow::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPanel::GetLabel();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxPanel*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxPanel::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxPanel*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPanel::GetName();
	};

	// void wxWindow::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetLabel(label);
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(dir);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxPanel::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxPanel::DragAcceptFiles(accept);
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxPanel::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxPanel::DoUpdateWindowUI(event);
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::InheritAttributes();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxPanel::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxPanel*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxPanel::UpdateWindowUI(flags);
	};

	// bool wxPanel::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::AcceptsFocus();
	};

	// void wxPanel::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::InitDialog();
	};

	// bool wxPanel::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPanel::Layout();
	};

	// void wxPanel::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxPanel*)this);
			return (_obj.callFunction<void>());
		}

		return wxPanel::SetFocus();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

