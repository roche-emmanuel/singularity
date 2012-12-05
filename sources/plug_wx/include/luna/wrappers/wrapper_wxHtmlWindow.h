#ifndef _WRAPPERS_WRAPPER_WXHTMLWINDOW_H_
#define _WRAPPERS_WRAPPER_WXHTMLWINDOW_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlwin.h>

class wrapper_wxHtmlWindow : public wxHtmlWindow {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxHtmlWindow(lua_State* L, lua_Table* dum) : wxHtmlWindow(), _obj(L,-1) {};
	wrapper_wxHtmlWindow(lua_State* L, lua_Table* dum, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = "htmlWindow") : wxHtmlWindow(parent, id, pos, size, style, name), _obj(L,-1) {};

	// bool wxHtmlWindow::LoadPage(const wxString & location)
	bool LoadPage(const wxString & location) {
		if(_obj.pushFunction("LoadPage")) {
			_obj.pushArg(location);
			return (_obj.callFunction<bool>());
		}

		return wxHtmlWindow::LoadPage(location);
	};

	// void wxHtmlWindow::OnLinkClicked(const wxHtmlLinkInfo & link)
	void OnLinkClicked(const wxHtmlLinkInfo & link) {
		if(_obj.pushFunction("OnLinkClicked")) {
			_obj.pushArg(&link);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWindow::OnLinkClicked(link);
	};

	// void wxHtmlWindow::OnSetTitle(const wxString & title)
	void OnSetTitle(const wxString & title) {
		if(_obj.pushFunction("OnSetTitle")) {
			_obj.pushArg(title);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWindow::OnSetTitle(title);
	};

	// void wxHtmlWindow::ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)
	void ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString) {
		if(_obj.pushFunction("ReadCustomization")) {
			_obj.pushArg(cfg);
			_obj.pushArg(path);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWindow::ReadCustomization(cfg, path);
	};

	// bool wxHtmlWindow::SetPage(const wxString & source)
	bool SetPage(const wxString & source) {
		if(_obj.pushFunction("SetPage")) {
			_obj.pushArg(source);
			return (_obj.callFunction<bool>());
		}

		return wxHtmlWindow::SetPage(source);
	};

	// void wxHtmlWindow::WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)
	void WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString) {
		if(_obj.pushFunction("WriteCustomization")) {
			_obj.pushArg(cfg);
			_obj.pushArg(path);
			return (_obj.callFunction<void>());
		}

		return wxHtmlWindow::WriteCustomization(cfg, path);
	};


protected:
	// bool wxHtmlWindow::OnCellClicked(wxHtmlCell * cell, int x, int y, const wxMouseEvent & event)
	// void wxHtmlWindow::OnCellMouseHover(wxHtmlCell * cell, int x, int y)

};




#endif

