#ifndef _WRAPPERS_WRAPPER_WXOBJECT_H_
#define _WRAPPERS_WRAPPER_WXOBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/object.h>

class wrapper_wxObject : public wxObject {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxObject(lua_State* L, lua_Table* dum) : wxObject(), _obj(L,-1) {};
	wrapper_wxObject(lua_State* L, lua_Table* dum, const wxObject & other) : wxObject(other), _obj(L,-1) {};

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

