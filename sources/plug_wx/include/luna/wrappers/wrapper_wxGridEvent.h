#ifndef _WRAPPERS_WRAPPER_WXGRIDEVENT_H_
#define _WRAPPERS_WRAPPER_WXGRIDEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridEvent : public wxGridEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxGridEvent() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridEvent(lua_State* L, lua_Table* dum) : wxGridEvent(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_wxGridEvent(lua_State* L, lua_Table* dum, int id, int type, wxObject * obj, int row = -1, int col = -1, int x = -1, int y = -1, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ()) : wxGridEvent(id, type, obj, row, col, x, y, sel, kbd), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGridEvent::GetClassInfo();
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

		return wxGridEvent::GetEventCategory();
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
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridEvent::CloneRefData(data);
	};

public:
	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

