#ifndef _WRAPPERS_WRAPPER_WXEXTHELPCONTROLLER_H_
#define _WRAPPERS_WRAPPER_WXEXTHELPCONTROLLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/generic/helpext.h>

class wrapper_wxExtHelpController : public wxExtHelpController, public luna_wrapper_base {

public:
		

	~wrapper_wxExtHelpController() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	

	// bool wxHelpController::DisplayContextPopup(int contextId)
	bool DisplayContextPopup(int contextId) {
		if(_obj.pushFunction("DisplayContextPopup")) {
			_obj.pushArg(contextId);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::DisplayContextPopup(contextId);
	};

	// bool wxHelpController::DisplayTextPopup(const wxString & text, const wxPoint & pos)
	bool DisplayTextPopup(const wxString & text, const wxPoint & pos) {
		if(_obj.pushFunction("DisplayTextPopup")) {
			_obj.pushArg(text);
			_obj.pushArg(&pos);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::DisplayTextPopup(text, pos);
	};

	// wxWindow * wxHelpController::GetParentWindow() const
	wxWindow * GetParentWindow() const {
		if(_obj.pushFunction("GetParentWindow")) {
			return (_obj.callFunction<wxWindow*>());
		}

		return wxExtHelpController::GetParentWindow();
	};

	// void wxHelpController::SetParentWindow(wxWindow * parentWindow)
	void SetParentWindow(wxWindow * parentWindow) {
		if(_obj.pushFunction("SetParentWindow")) {
			_obj.pushArg(parentWindow);
			return (_obj.callFunction<void>());
		}

		return wxExtHelpController::SetParentWindow(parentWindow);
	};




};




#endif
