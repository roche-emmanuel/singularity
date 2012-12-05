#ifndef _WRAPPERS_WRAPPER_WXGCDC_H_
#define _WRAPPERS_WRAPPER_WXGCDC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dcgraph.h>

class wrapper_wxGCDC : public wxGCDC {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxGCDC(lua_State* L, lua_Table* dum, const wxWindowDC & windowDC) : wxGCDC(windowDC), _obj(L,-1) {};
	wrapper_wxGCDC(lua_State* L, lua_Table* dum, const wxMemoryDC & memoryDC) : wxGCDC(memoryDC), _obj(L,-1) {};
	wrapper_wxGCDC(lua_State* L, lua_Table* dum) : wxGCDC(), _obj(L,-1) {};

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

