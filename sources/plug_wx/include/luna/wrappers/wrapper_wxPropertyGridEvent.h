#ifndef _WRAPPERS_WRAPPER_WXPROPERTYGRIDEVENT_H_
#define _WRAPPERS_WRAPPER_WXPROPERTYGRIDEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/propgrid/propgrid.h>

class wrapper_wxPropertyGridEvent : public wxPropertyGridEvent {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxPropertyGridEvent(lua_State* L, lua_Table* dum, int commandType = 0, int id = 0) : wxPropertyGridEvent(commandType, id), _obj(L,-1) {};
	wrapper_wxPropertyGridEvent(lua_State* L, lua_Table* dum, const wxPropertyGridEvent & event) : wxPropertyGridEvent(event), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
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

		return wxEvent::GetEventCategory();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

