#ifndef _WRAPPERS_WRAPPER_WXWINDOWDC_H_
#define _WRAPPERS_WRAPPER_WXWINDOWDC_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dcclient.h>

class wrapper_wxWindowDC : public wxWindowDC {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxWindowDC(lua_State* L, lua_Table* dum, wxWindow * window) : wxWindowDC(window), _obj(L,-1) {};

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

