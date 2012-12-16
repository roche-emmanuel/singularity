#ifndef _WRAPPERS_WRAPPER_WXGRIDRANGESELECTEVENT_H_
#define _WRAPPERS_WRAPPER_WXGRIDRANGESELECTEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridRangeSelectEvent : public wxGridRangeSelectEvent, public luna_wrapper_base {

public:
	

	wrapper_wxGridRangeSelectEvent(lua_State* L, lua_Table* dum) : wxGridRangeSelectEvent(), luna_wrapper_base(L) {};
	wrapper_wxGridRangeSelectEvent(lua_State* L, lua_Table* dum, int id, int type, wxObject * obj, const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ()) : wxGridRangeSelectEvent(id, type, obj, topLeft, bottomRight, sel, kbd), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGridRangeSelectEvent::GetClassInfo();
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

		return wxGridRangeSelectEvent::GetEventCategory();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridRangeSelectEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridRangeSelectEvent::CloneRefData(data);
	};


};




#endif

