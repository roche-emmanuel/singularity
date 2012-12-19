#ifndef _WRAPPERS_WRAPPER_WXPAGESETUPDIALOGDATA_H_
#define _WRAPPERS_WRAPPER_WXPAGESETUPDIALOGDATA_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/cmndata.h>

class wrapper_wxPageSetupDialogData : public wxPageSetupDialogData, public luna_wrapper_base {

public:
	

	wrapper_wxPageSetupDialogData(lua_State* L, lua_Table* dum) : wxPageSetupDialogData(), luna_wrapper_base(L) {};
	wrapper_wxPageSetupDialogData(lua_State* L, lua_Table* dum, const wxPageSetupDialogData & data) : wxPageSetupDialogData(data), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPageSetupDialogData::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPageSetupDialogData::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPageSetupDialogData::CloneRefData(data);
	};


};




#endif

