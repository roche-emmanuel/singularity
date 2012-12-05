#ifndef _WRAPPERS_WRAPPER_WXGRIDEVENT_H_
#define _WRAPPERS_WRAPPER_WXGRIDEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridEvent : public wxGridEvent {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxGridEvent(lua_State* L, lua_Table* dum) : wxGridEvent(), _obj(L,-1) {};
	wrapper_wxGridEvent(lua_State* L, lua_Table* dum, int id, int type, wxObject * obj, int row = -1, int col = -1, int x = -1, int y = -1, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ()) : wxGridEvent(id, type, obj, row, col, x, y, sel, kbd), _obj(L,-1) {};

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

	// int wxGridEvent::GetCol()
	int GetCol() {
		if(_obj.pushFunction("GetCol")) {
			return (_obj.callFunction<int>());
		}

		return wxGridEvent::GetCol();
	};

	// int wxGridEvent::GetRow()
	int GetRow() {
		if(_obj.pushFunction("GetRow")) {
			return (_obj.callFunction<int>());
		}

		return wxGridEvent::GetRow();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const

};




#endif

