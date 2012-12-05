#ifndef _WRAPPERS_WRAPPER_WXFINDREPLACEDATA_H_
#define _WRAPPERS_WRAPPER_WXFINDREPLACEDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/fdrepdlg.h>

class wrapper_wxFindReplaceData : public wxFindReplaceData {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxFindReplaceData(lua_State* L, lua_Table* dum, unsigned int flags = 0) : wxFindReplaceData(flags), _obj(L,-1) {};

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

