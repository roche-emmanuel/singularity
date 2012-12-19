#ifndef _WRAPPERS_WRAPPER_WXSPLITTEREVENT_H_
#define _WRAPPERS_WRAPPER_WXSPLITTEREVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/splitter.h>

class wrapper_wxSplitterEvent : public wxSplitterEvent, public luna_wrapper_base {

public:
	

	wrapper_wxSplitterEvent(lua_State* L, lua_Table* dum, int eventType = wxEVT_NULL, wxSplitterWindow * splitter = NULL) : wxSplitterEvent(eventType, splitter), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSplitterEvent::GetClassInfo();
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

		return wxSplitterEvent::GetEventCategory();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSplitterEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSplitterEvent::CloneRefData(data);
	};


};




#endif

