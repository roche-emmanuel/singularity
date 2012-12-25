#ifndef _WRAPPERS_WRAPPER_WXHTMLHELPCONTROLLER_H_
#define _WRAPPERS_WRAPPER_WXHTMLHELPCONTROLLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/helpctrl.h>

class wrapper_wxHtmlHelpController : public wxHtmlHelpController, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlHelpController() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlHelpController(lua_State* L, lua_Table* dum, int style = wxHF_DEFAULT_STYLE, wxWindow * parentWindow = NULL) : wxHtmlHelpController(style, parentWindow), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// bool wxHtmlHelpController::DisplayContents()
	bool DisplayContents() {
		if(_obj.pushFunction("DisplayContents")) {
			return (_obj.callFunction<bool>());
		}

		return wxHtmlHelpController::DisplayContents();
	};

	// bool wxHtmlHelpController::KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL)
	bool KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL) {
		if(_obj.pushFunction("KeywordSearch")) {
			_obj.pushArg(keyword);
			_obj.pushArg(mode);
			return (_obj.callFunction<bool>());
		}

		return wxHtmlHelpController::KeywordSearch(keyword, mode);
	};

	// void wxHtmlHelpController::ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)
	void ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString) {
		if(_obj.pushFunction("ReadCustomization")) {
			_obj.pushArg(cfg);
			_obj.pushArg(path);
			return (_obj.callFunction<void>());
		}

		return wxHtmlHelpController::ReadCustomization(cfg, path);
	};

	// void wxHtmlHelpController::WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)
	void WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString) {
		if(_obj.pushFunction("WriteCustomization")) {
			_obj.pushArg(cfg);
			_obj.pushArg(path);
			return (_obj.callFunction<void>());
		}

		return wxHtmlHelpController::WriteCustomization(cfg, path);
	};


protected:
	// Protected virtual methods:
	// wxHtmlHelpDialog * wxHtmlHelpController::CreateHelpDialog(wxHtmlHelpData * data)
	wxHtmlHelpDialog * CreateHelpDialog(wxHtmlHelpData * data) {
		if(_obj.pushFunction("CreateHelpDialog")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxHtmlHelpDialog*>());
		}

		return wxHtmlHelpController::CreateHelpDialog(data);
	};

	// wxHtmlHelpFrame * wxHtmlHelpController::CreateHelpFrame(wxHtmlHelpData * data)
	wxHtmlHelpFrame * CreateHelpFrame(wxHtmlHelpData * data) {
		if(_obj.pushFunction("CreateHelpFrame")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxHtmlHelpFrame*>());
		}

		return wxHtmlHelpController::CreateHelpFrame(data);
	};

public:
	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

