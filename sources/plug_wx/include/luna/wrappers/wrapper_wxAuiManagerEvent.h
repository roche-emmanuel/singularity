#ifndef _WRAPPERS_WRAPPER_WXAUIMANAGEREVENT_H_
#define _WRAPPERS_WRAPPER_WXAUIMANAGEREVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/aui/framemanager.h>

class wrapper_wxAuiManagerEvent : public wxAuiManagerEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxAuiManagerEvent() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAuiManagerEvent(lua_State* L, lua_Table* dum, int type = wxEVT_NULL) : wxAuiManagerEvent(type), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxAuiManagerEvent::GetClassInfo();
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

		return wxAuiManagerEvent::GetEventCategory();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAuiManagerEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAuiManagerEvent::CloneRefData(data);
	};


};




#endif
