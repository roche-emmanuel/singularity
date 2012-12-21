#ifndef _WRAPPERS_WRAPPER_WXGCDC_H_
#define _WRAPPERS_WRAPPER_WXGCDC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dcgraph.h>

class wrapper_wxGCDC : public wxGCDC, public luna_wrapper_base {

public:
		

	~wrapper_wxGCDC() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGCDC(lua_State* L, lua_Table* dum, const wxWindowDC & windowDC) : wxGCDC(windowDC), luna_wrapper_base(L) {};
	wrapper_wxGCDC(lua_State* L, lua_Table* dum, const wxMemoryDC & memoryDC) : wxGCDC(memoryDC), luna_wrapper_base(L) {};
	wrapper_wxGCDC(lua_State* L, lua_Table* dum) : wxGCDC(), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGCDC::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGCDC::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGCDC::CloneRefData(data);
	};


};




#endif
