#ifndef _WRAPPERS_WRAPPER_WXHTMLEASYPRINTING_H_
#define _WRAPPERS_WRAPPER_WXHTMLEASYPRINTING_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmprint.h>

class wrapper_wxHtmlEasyPrinting : public wxHtmlEasyPrinting, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlEasyPrinting() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlEasyPrinting(lua_State* L, lua_Table* dum, const wxString & name = "Printing", wxWindow * parentWindow = NULL) : wxHtmlEasyPrinting(name, parentWindow), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlEasyPrinting::GetClassInfo();
	};


protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlEasyPrinting::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlEasyPrinting::CloneRefData(data);
	};

public:
	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

