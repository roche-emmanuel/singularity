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

		return wxAcceleratorTable::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAcceleratorTable::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAcceleratorTable::CloneRefData(data);
	};


};




#endif

