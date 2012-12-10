#ifndef _WRAPPERS_WRAPPER_WXHTMLHELPDIALOG_H_
#define _WRAPPERS_WRAPPER_WXHTMLHELPDIALOG_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/helpdlg.h>

class wrapper_wxHtmlHelpDialog : public wxHtmlHelpDialog {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxHtmlHelpDialog(lua_State* L, lua_Table* dum, wxHtmlHelpData * data = NULL) : wxHtmlHelpDialog(data), _obj(L,-1) {};
	wrapper_wxHtmlHelpDialog(lua_State* L, lua_Table* dum, wxWindow * parent, int wxWindowID, const wxString & title = wxEmptyString, int style = wxHF_DEFAULT_STYLE, wxHtmlHelpData * data = NULL) : wxHtmlHelpDialog(parent, wxWindowID, title, style, data), _obj(L,-1) {};




};




#endif

