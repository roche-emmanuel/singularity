#ifndef _WRAPPERS_WRAPPER_WXMOUSECAPTURELOSTEVENT_H_
#define _WRAPPERS_WRAPPER_WXMOUSECAPTURELOSTEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxMouseCaptureLostEvent : public wxMouseCaptureLostEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxMouseCaptureLostEvent() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMouseCaptureLostEvent(lua_State* L, lua_Table* dum, int windowId = 0) : wxMouseCaptureLostEvent(windowId), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMouseCaptureLostEvent::GetClassInfo();
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

		return wxMouseCaptureLostEvent::GetEventCategory();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMouseCaptureLostEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMouseCaptureLostEvent::CloneRefData(data);
	};


};




#endif
