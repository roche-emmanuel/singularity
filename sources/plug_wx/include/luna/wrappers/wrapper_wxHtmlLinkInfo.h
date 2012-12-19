#ifndef _WRAPPERS_WRAPPER_WXHTMLLINKINFO_H_
#define _WRAPPERS_WRAPPER_WXHTMLLINKINFO_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/html/htmlcell.h>

class wrapper_wxHtmlLinkInfo : public wxHtmlLinkInfo, public luna_wrapper_base {

public:
	

	wrapper_wxHtmlLinkInfo(lua_State* L, lua_Table* dum) : wxHtmlLinkInfo(), luna_wrapper_base(L) {};
	wrapper_wxHtmlLinkInfo(lua_State* L, lua_Table* dum, const wxString & href, const wxString & target = wxEmptyString) : wxHtmlLinkInfo(href, target), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlLinkInfo::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlLinkInfo::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlLinkInfo::CloneRefData(data);
	};


};




#endif

