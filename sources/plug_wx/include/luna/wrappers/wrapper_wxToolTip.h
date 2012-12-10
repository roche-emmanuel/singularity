#ifndef _WRAPPERS_WRAPPER_WXTOOLTIP_H_
#define _WRAPPERS_WRAPPER_WXTOOLTIP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/tooltip.h>

class wrapper_wxToolTip : public wxToolTip {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxToolTip(lua_State* L, lua_Table* dum, const wxString & tip) : wxToolTip(tip), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxToolTip::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxToolTip::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxToolTip::CloneRefData(data);
	};


};




#endif

