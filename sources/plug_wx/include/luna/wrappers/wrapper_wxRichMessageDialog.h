#ifndef _WRAPPERS_WRAPPER_WXRICHMESSAGEDIALOG_H_
#define _WRAPPERS_WRAPPER_WXRICHMESSAGEDIALOG_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/richmsgdlg.h>

class wrapper_wxRichMessageDialog : public wxRichMessageDialog, public luna_wrapper_base {

public:
		

	~wrapper_wxRichMessageDialog() {
		logDEBUG3("Calling delete function for wrapper wxRichMessageDialog");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxRichMessageDialog(lua_State* L, lua_Table* dum, wxWindow * parent, const wxString & message, const wxString & caption = wxMessageBoxCaptionStr, long style = wxOK | ::wxCENTRE) : wxRichMessageDialog(parent, message, caption, style), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int wxRichMessageDialog::ShowModal()
	int ShowModal() {
		if(_obj.pushFunction("ShowModal")) {
			return (_obj.callFunction<int>());
		}

		return wxRichMessageDialog::ShowModal();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

