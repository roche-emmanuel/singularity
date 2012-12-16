#ifndef _WRAPPERS_WRAPPER_WXWINDOWMODALDIALOGEVENT_H_
#define _WRAPPERS_WRAPPER_WXWINDOWMODALDIALOGEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/dialog.h>

class wrapper_wxWindowModalDialogEvent : public wxWindowModalDialogEvent, public luna_wrapper_base {

public:
	

	wrapper_wxWindowModalDialogEvent(lua_State* L, lua_Table* dum, int commandType = wxEVT_NULL, int id = 0) : wxWindowModalDialogEvent(commandType, id), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxWindowModalDialogEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxWindowModalDialogEvent::GetEventCategory();
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
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWindowModalDialogEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWindowModalDialogEvent::CloneRefData(data);
	};


};




#endif

