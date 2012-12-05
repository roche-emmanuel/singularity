#ifndef _WRAPPERS_WRAPPER_WXPAGESETUPDIALOGDATA_H_
#define _WRAPPERS_WRAPPER_WXPAGESETUPDIALOGDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/cmndata.h>

class wrapper_wxPageSetupDialogData : public wxPageSetupDialogData {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxPageSetupDialogData(lua_State* L, lua_Table* dum) : wxPageSetupDialogData(), _obj(L,-1) {};
	wrapper_wxPageSetupDialogData(lua_State* L, lua_Table* dum, const wxPageSetupDialogData & data) : wxPageSetupDialogData(data), _obj(L,-1) {};

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

