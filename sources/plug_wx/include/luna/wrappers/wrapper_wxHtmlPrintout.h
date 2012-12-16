#ifndef _WRAPPERS_WRAPPER_WXHTMLPRINTOUT_H_
#define _WRAPPERS_WRAPPER_WXHTMLPRINTOUT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmprint.h>

class wrapper_wxHtmlPrintout : public wxHtmlPrintout, public luna_wrapper_base {

public:
	

	wrapper_wxHtmlPrintout(lua_State* L, lua_Table* dum, const wxString & title = "Printout") : wxHtmlPrintout(title), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlPrintout::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlPrintout::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlPrintout::CloneRefData(data);
	};


};




#endif

