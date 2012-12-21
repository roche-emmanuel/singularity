#ifndef _WRAPPERS_WRAPPER_WXOBJECT_H_
#define _WRAPPERS_WRAPPER_WXOBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/object.h>

class wrapper_wxObject : public wxObject, public luna_wrapper_base {

public:
		

	~wrapper_wxObject() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxObject(lua_State* L, lua_Table* dum) : wxObject(), luna_wrapper_base(L) {};
	wrapper_wxObject(lua_State* L, lua_Table* dum, const wxObject & other) : wxObject(other), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxObject::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxObject::CloneRefData(data);
	};


};




#endif

