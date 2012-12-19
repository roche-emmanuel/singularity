#ifndef _WRAPPERS_WRAPPER_WXCONTEXTHELP_H_
#define _WRAPPERS_WRAPPER_WXCONTEXTHELP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/cshelp.h>

class wrapper_wxContextHelp : public wxContextHelp, public luna_wrapper_base {

public:
	

	wrapper_wxContextHelp(lua_State* L, lua_Table* dum, wxWindow * window = NULL, bool doNow = true) : wxContextHelp(window, doNow), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxContextHelp::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxContextHelp::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxContextHelp::CloneRefData(data);
	};


};




#endif

