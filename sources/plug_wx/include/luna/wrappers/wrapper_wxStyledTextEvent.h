#ifndef _WRAPPERS_WRAPPER_WXSTYLEDTEXTEVENT_H_
#define _WRAPPERS_WRAPPER_WXSTYLEDTEXTEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/stc/stc.h>

class wrapper_wxStyledTextEvent : public wxStyledTextEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxStyledTextEvent() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxStyledTextEvent(lua_State* L, lua_Table* dum, int commandType = 0, int id = 0) : wxStyledTextEvent(commandType, id), luna_wrapper_base(L) {};
	wrapper_wxStyledTextEvent(lua_State* L, lua_Table* dum, const wxStyledTextEvent & event) : wxStyledTextEvent(event), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxStyledTextEvent::GetClassInfo();
	};

	// wxEvent * wxEvent::Clone() const
	wxEvent * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxEvent::Clone");
		return (_obj.callFunction<wxEvent*>());
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxStyledTextEvent::GetEventCategory();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxStyledTextEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxStyledTextEvent::CloneRefData(data);
	};


};




#endif

