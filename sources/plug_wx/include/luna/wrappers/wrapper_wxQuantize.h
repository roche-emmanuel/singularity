#ifndef _WRAPPERS_WRAPPER_WXQUANTIZE_H_
#define _WRAPPERS_WRAPPER_WXQUANTIZE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/quantize.h>

class wrapper_wxQuantize : public wxQuantize {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxQuantize(lua_State* L, lua_Table* dum) : wxQuantize(), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxQuantize::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxQuantize::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxQuantize::CloneRefData(data);
	};


};




#endif

