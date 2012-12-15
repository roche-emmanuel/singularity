#ifndef _WRAPPERS_WRAPPER_WXINDIVIDUALLAYOUTCONSTRAINT_H_
#define _WRAPPERS_WRAPPER_WXINDIVIDUALLAYOUTCONSTRAINT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/layout.h>

class wrapper_wxIndividualLayoutConstraint : public wxIndividualLayoutConstraint {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxIndividualLayoutConstraint(lua_State* L, lua_Table* dum) : wxIndividualLayoutConstraint(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxIndividualLayoutConstraint::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIndividualLayoutConstraint::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIndividualLayoutConstraint::CloneRefData(data);
	};


};




#endif

