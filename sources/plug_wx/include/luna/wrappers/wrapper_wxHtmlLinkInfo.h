#ifndef _WRAPPERS_WRAPPER_WXHTMLLINKINFO_H_
#define _WRAPPERS_WRAPPER_WXHTMLLINKINFO_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlcell.h>

class wrapper_wxHtmlLinkInfo : public wxHtmlLinkInfo {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxHtmlLinkInfo(lua_State* L, lua_Table* dum) : wxHtmlLinkInfo(), _obj(L,-1) {};
	wrapper_wxHtmlLinkInfo(lua_State* L, lua_Table* dum, const wxString & href, const wxString & target = wxEmptyString) : wxHtmlLinkInfo(href, target), _obj(L,-1) {};

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

