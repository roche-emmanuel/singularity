#ifndef _WRAPPERS_WRAPPER_WXJOYSTICK_H_
#define _WRAPPERS_WRAPPER_WXJOYSTICK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/joystick.h>

class wrapper_wxJoystick : public wxJoystick {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxJoystick(lua_State* L, lua_Table* dum, int joystick = ::wxJOYSTICK1) : wxJoystick(joystick), _obj(L,-1) {};

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

