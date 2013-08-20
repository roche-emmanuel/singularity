#ifndef _WRAPPERS_WRAPPER_WXFLOATINGPOINTVALIDATOR_H_
#define _WRAPPERS_WRAPPER_WXFLOATINGPOINTVALIDATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/valnum.h>

class wrapper_wxFloatingPointValidator : public wxFloatingPointValidator, public luna_wrapper_base {

public:
		

	~wrapper_wxFloatingPointValidator() {
		logDEBUG3("Calling delete function for wrapper wxFloatingPointValidator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFloatingPointValidator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFloatingPointValidator::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFloatingPointValidator::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxFloatingPointValidator::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxFloatingPointValidator::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFloatingPointValidator::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxFloatingPointValidator::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxFloatingPointValidator::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxFloatingPointValidator::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxFloatingPointValidator::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxFloatingPointValidator::SetPreviousHandler(handler);
	};

	// wxObject * wxValidator::Clone() const
	wxObject * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			return (_obj.callFunction<wxObject*>());
		}

		return wxFloatingPointValidator::Clone();
	};

	// bool wxValidator::Validate(wxWindow * parent)
	bool Validate(wxWindow * parent) {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxFloatingPointValidator*)this);
			_obj.pushArg(parent);
			return (_obj.callFunction<bool>());
		}

		return wxFloatingPointValidator::Validate(parent);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

