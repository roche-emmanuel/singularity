#ifndef _WRAPPERS_WRAPPER_WXJOYSTICK_H_
#define _WRAPPERS_WRAPPER_WXJOYSTICK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/joystick.h>

class wrapper_wxJoystick : public wxJoystick, public luna_wrapper_base {

public:
	

	wrapper_wxJoystick(lua_State* L, lua_Table* dum, int joystick = ::wxJOYSTICK1) : wxJoystick(joystick), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxJoystick::GetClassInfo();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxJoystick::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxJoystick::CloneRefData(data);
	};


};




#endif

