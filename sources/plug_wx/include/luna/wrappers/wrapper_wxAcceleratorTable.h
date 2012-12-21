#ifndef _WRAPPERS_WRAPPER_WXACCELERATORTABLE_H_
#define _WRAPPERS_WRAPPER_WXACCELERATORTABLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/accel.h>

class wrapper_wxAcceleratorTable : public wxAcceleratorTable, public luna_wrapper_base {

public:
		

	~wrapper_wxAcceleratorTable() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAcceleratorTable(lua_State* L, lua_Table* dum) : wxAcceleratorTable(), luna_wrapper_base(L) {};
	wrapper_wxAcceleratorTable(lua_State* L, lua_Table* dum, const wxString & resource) : wxAcceleratorTable(resource), luna_wrapper_base(L) {};

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

