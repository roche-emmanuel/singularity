#ifndef _WRAPPERS_WRAPPER_WXINTEGERVALIDATOR_H_
#define _WRAPPERS_WRAPPER_WXINTEGERVALIDATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/valnum.h>

class wrapper_wxIntegerValidator : public wxIntegerValidator, public luna_wrapper_base {

public:
		

	~wrapper_wxIntegerValidator() {
		logDEBUG3("Calling delete function for wrapper wxIntegerValidator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxIntegerValidator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxIntegerValidator*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIntegerValidator::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxIntegerValidator*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIntegerValidator::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxIntegerValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxIntegerValidator::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxIntegerValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxIntegerValidator::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxIntegerValidator*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxIntegerValidator::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxIntegerValidator*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxIntegerValidator::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxIntegerValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxIntegerValidator::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxIntegerValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxIntegerValidator::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxIntegerValidator*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxIntegerValidator::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxIntegerValidator*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxIntegerValidator::SetPreviousHandler(handler);
	};

	// wxObject * wxValidator::Clone() const
	wxObject * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxIntegerValidator*)this);
			return (_obj.callFunction<wxObject*>());
		}

		return wxIntegerValidator::Clone();
	};

	// bool wxValidator::Validate(wxWindow * parent)
	bool Validate(wxWindow * parent) {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxIntegerValidator*)this);
			_obj.pushArg(parent);
			return (_obj.callFunction<bool>());
		}

		return wxIntegerValidator::Validate(parent);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

