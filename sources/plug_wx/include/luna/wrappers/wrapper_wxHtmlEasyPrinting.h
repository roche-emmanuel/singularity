#ifndef _WRAPPERS_WRAPPER_WXHTMLEASYPRINTING_H_
#define _WRAPPERS_WRAPPER_WXHTMLEASYPRINTING_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmprint.h>

class wrapper_wxHtmlEasyPrinting : public wxHtmlEasyPrinting {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxHtmlEasyPrinting(lua_State* L, lua_Table* dum, const wxString & name = "Printing", wxWindow * parentWindow = NULL) : wxHtmlEasyPrinting(name, parentWindow), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

