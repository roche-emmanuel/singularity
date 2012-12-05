#ifndef _WRAPPERS_WRAPPER_WXACCELERATORTABLE_H_
#define _WRAPPERS_WRAPPER_WXACCELERATORTABLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/accel.h>

class wrapper_wxAcceleratorTable : public wxAcceleratorTable {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxAcceleratorTable(lua_State* L, lua_Table* dum) : wxAcceleratorTable(), _obj(L,-1) {};
	wrapper_wxAcceleratorTable(lua_State* L, lua_Table* dum, const wxString & resource) : wxAcceleratorTable(resource), _obj(L,-1) {};

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

