#ifndef _WRAPPERS_WRAPPER_WXCOLLAPSIBLEPANEEVENT_H_
#define _WRAPPERS_WRAPPER_WXCOLLAPSIBLEPANEEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/collpane.h>

class wrapper_wxCollapsiblePaneEvent : public wxCollapsiblePaneEvent {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxCollapsiblePaneEvent(lua_State* L, lua_Table* dum, wxObject * generator, int id, bool collapsed) : wxCollapsiblePaneEvent(generator, id, collapsed), _obj(L,-1) {};

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

