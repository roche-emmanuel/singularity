#ifndef _WRAPPERS_WRAPPER_WXGRIDRANGESELECTEVENT_H_
#define _WRAPPERS_WRAPPER_WXGRIDRANGESELECTEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridRangeSelectEvent : public wxGridRangeSelectEvent {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxGridRangeSelectEvent(lua_State* L, lua_Table* dum) : wxGridRangeSelectEvent(), _obj(L,-1) {};
	wrapper_wxGridRangeSelectEvent(lua_State* L, lua_Table* dum, int id, int type, wxObject * obj, const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ()) : wxGridRangeSelectEvent(id, type, obj, topLeft, bottomRight, sel, kbd), _obj(L,-1) {};

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

