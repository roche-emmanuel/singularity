#ifndef _WRAPPERS_WRAPPER_WXURL_H_
#define _WRAPPERS_WRAPPER_WXURL_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/url.h>

class wrapper_wxURL : public wxURL {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxURL(lua_State* L, lua_Table* dum, const wxString & url = wxEmptyString) : wxURL(url), _obj(L,-1) {};

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

