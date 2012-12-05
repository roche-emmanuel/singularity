#ifndef _WRAPPERS_WRAPPER_WXCOLOURPICKEREVENT_H_
#define _WRAPPERS_WRAPPER_WXCOLOURPICKEREVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/clrpicker.h>

class wrapper_wxColourPickerEvent : public wxColourPickerEvent {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxColourPickerEvent(lua_State* L, lua_Table* dum, wxObject * generator, int id, const wxColour & colour) : wxColourPickerEvent(generator, id, colour), _obj(L,-1) {};

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

