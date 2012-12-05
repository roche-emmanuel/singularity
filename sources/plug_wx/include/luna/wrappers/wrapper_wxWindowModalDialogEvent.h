#ifndef _WRAPPERS_WRAPPER_WXWINDOWMODALDIALOGEVENT_H_
#define _WRAPPERS_WRAPPER_WXWINDOWMODALDIALOGEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dialog.h>

class wrapper_wxWindowModalDialogEvent : public wxWindowModalDialogEvent {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxWindowModalDialogEvent(lua_State* L, lua_Table* dum, int commandType = wxEVT_NULL, int id = 0) : wxWindowModalDialogEvent(commandType, id), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxEvent::GetEventCategory();
	};

	// wxEvent * wxWindowModalDialogEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			return (_obj.callFunction<wxEvent*>());
		}

		return wxWindowModalDialogEvent::Clone();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

