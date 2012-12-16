#ifndef _WRAPPERS_WRAPPER_WXLAYOUTCONSTRAINTS_H_
#define _WRAPPERS_WRAPPER_WXLAYOUTCONSTRAINTS_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/layout.h>

class wrapper_wxLayoutConstraints : public wxLayoutConstraints, public luna_wrapper_base {

public:
	

	wrapper_wxLayoutConstraints(lua_State* L, lua_Table* dum) : wxLayoutConstraints(), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxLayoutConstraints::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxLayoutConstraints::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxLayoutConstraints::CloneRefData(data);
	};


};




#endif

