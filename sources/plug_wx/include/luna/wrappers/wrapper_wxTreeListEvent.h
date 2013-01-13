#ifndef _WRAPPERS_WRAPPER_WXTREELISTEVENT_H_
#define _WRAPPERS_WRAPPER_WXTREELISTEVENT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/treelist.h>

class wrapper_wxTreeListEvent : public wxTreeListEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxTreeListEvent() {
		logDEBUG3("Calling delete function for wrapper wxTreeListEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTreeListEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxTreeListEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTreeListEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxTreeListEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTreeListEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxEvent * wxEvent::Clone() const
	wxEvent * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxEvent::Clone");
		_obj.pushArg((wxTreeListEvent*)this);
		return (_obj.callFunction<wxEvent*>());
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxTreeListEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxTreeListEvent::GetEventCategory();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

