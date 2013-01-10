#ifndef _WRAPPERS_WRAPPER_WXHTMLWINDOW_H_
#define _WRAPPERS_WRAPPER_WXHTMLWINDOW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlwin.h>

class wrapper_wxHtmlWindow : public wxHtmlWindow, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlWindow() {
		logDEBUG3("Calling delete function for wrapper wxHtmlWindow");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlWindow*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlWindow(lua_State* L, lua_Table* dum) 
		: wxHtmlWindow(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlWindow*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxHtmlWindow(lua_State* L, lua_Table* dum, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = "htmlWindow") 
		: wxHtmlWindow(parent, id, pos, size, style, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlWindow*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// bool wxHtmlWindow::OnCellClicked(wxHtmlCell * cell, int x, int y, const wxMouseEvent & event)
	bool OnCellClicked(wxHtmlCell * cell, int x, int y, const wxMouseEvent & event) {
		if(_obj.pushFunction("OnCellClicked")) {
			_obj.pushArg((wxHtmlWindow*)this);
			_obj.pushArg(cell);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxHtmlWindow::OnCellClicked(cell, x, y, event);
	};

	// void wxHtmlWindow::OnCellMouseHover(wxHtmlCell * cell, int x, int y)
	void OnCellMouseHover(wxHtmlCell * cell, int x, int y) {
		if(_obj.pushFunction("OnCellMouseHover")) {
			_obj.pushArg((wxHtmlWindow*)this);
			_obj.pushArg(cell);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWindow::OnCellMouseHover(cell, x, y);
	};

public:
	// Public virtual methods:
	// bool wxHtmlWindow::LoadPage(const wxString & location)
	bool LoadPage(const wxString & location) {
		if(_obj.pushFunction("LoadPage")) {
			_obj.pushArg((wxHtmlWindow*)this);
			_obj.pushArg(location);
			return (_obj.callFunction<bool>());
		}

		return wxHtmlWindow::LoadPage(location);
	};

	// void wxHtmlWindow::OnLinkClicked(const wxHtmlLinkInfo & link)
	void OnLinkClicked(const wxHtmlLinkInfo & link) {
		if(_obj.pushFunction("OnLinkClicked")) {
			_obj.pushArg((wxHtmlWindow*)this);
			_obj.pushArg(&link);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWindow::OnLinkClicked(link);
	};

	// void wxHtmlWindow::OnSetTitle(const wxString & title)
	void OnSetTitle(const wxString & title) {
		if(_obj.pushFunction("OnSetTitle")) {
			_obj.pushArg((wxHtmlWindow*)this);
			_obj.pushArg(title);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWindow::OnSetTitle(title);
	};

	// void wxHtmlWindow::ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)
	void ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString) {
		if(_obj.pushFunction("ReadCustomization")) {
			_obj.pushArg((wxHtmlWindow*)this);
			_obj.pushArg(cfg);
			_obj.pushArg(path);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWindow::ReadCustomization(cfg, path);
	};

	// bool wxHtmlWindow::SetPage(const wxString & source)
	bool SetPage(const wxString & source) {
		if(_obj.pushFunction("SetPage")) {
			_obj.pushArg((wxHtmlWindow*)this);
			_obj.pushArg(source);
			return (_obj.callFunction<bool>());
		}

		return wxHtmlWindow::SetPage(source);
	};

	// void wxHtmlWindow::WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)
	void WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString) {
		if(_obj.pushFunction("WriteCustomization")) {
			_obj.pushArg((wxHtmlWindow*)this);
			_obj.pushArg(cfg);
			_obj.pushArg(path);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWindow::WriteCustomization(cfg, path);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

