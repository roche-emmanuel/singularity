#ifndef _WRAPPERS_WRAPPER_WXGRIDSIZEEVENT_H_
#define _WRAPPERS_WRAPPER_WXGRIDSIZEEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridSizeEvent : public wxGridSizeEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxGridSizeEvent() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridSizeEvent(lua_State* L, lua_Table* dum) : wxGridSizeEvent(), luna_wrapper_base(L) {};
	wrapper_wxGridSizeEvent(lua_State* L, lua_Table* dum, int id, int type, wxObject * obj, int rowOrCol = -1, int x = -1, int y = -1, const wxKeyboardState & kbd = wxKeyboardState ()) : wxGridSizeEvent(id, type, obj, rowOrCol, x, y, kbd), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGridSizeEvent::GetClassInfo();
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

		return wxGridSizeEvent::GetEventCategory();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridSizeEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridSizeEvent::CloneRefData(data);
	};


};




#endif

