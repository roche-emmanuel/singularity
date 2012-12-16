#ifndef _WRAPPERS_WRAPPER_WXSPINDOUBLEEVENT_H_
#define _WRAPPERS_WRAPPER_WXSPINDOUBLEEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/spinctrl.h>

class wrapper_wxSpinDoubleEvent : public wxSpinDoubleEvent, public luna_wrapper_base {

public:
	

	wrapper_wxSpinDoubleEvent(lua_State* L, lua_Table* dum, int commandType = wxEVT_NULL, int winid = 0, double value = 0) : wxSpinDoubleEvent(commandType, winid, value), luna_wrapper_base(L) {};
	wrapper_wxSpinDoubleEvent(lua_State* L, lua_Table* dum, const wxSpinDoubleEvent & event) : wxSpinDoubleEvent(event), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSpinDoubleEvent::GetClassInfo();
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

		return wxSpinDoubleEvent::GetEventCategory();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSpinDoubleEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSpinDoubleEvent::CloneRefData(data);
	};


};




#endif

