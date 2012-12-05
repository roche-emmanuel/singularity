#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWICONTEXT_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWICONTEXT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewIconText : public wxDataViewIconText {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxDataViewIconText(lua_State* L, lua_Table* dum, const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon) : wxDataViewIconText(text, icon), _obj(L,-1) {};
	wrapper_wxDataViewIconText(lua_State* L, lua_Table* dum, const wxDataViewIconText & other) : wxDataViewIconText(other), _obj(L,-1) {};

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

