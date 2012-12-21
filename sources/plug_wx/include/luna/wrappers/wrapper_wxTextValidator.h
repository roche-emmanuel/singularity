#ifndef _WRAPPERS_WRAPPER_WXTEXTVALIDATOR_H_
#define _WRAPPERS_WRAPPER_WXTEXTVALIDATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/valtext.h>

class wrapper_wxTextValidator : public wxTextValidator, public luna_wrapper_base {

public:
		

	~wrapper_wxTextValidator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTextValidator(lua_State* L, lua_Table* dum, const wxTextValidator & validator) : wxTextValidator(validator), luna_wrapper_base(L) {};
	wrapper_wxTextValidator(lua_State* L, lua_Table* dum, long style = ::wxFILTER_NONE, wxString * valPtr = NULL) : wxTextValidator(style, valPtr), luna_wrapper_base(L) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxTextValidator::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxTextValidator::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxTextValidator::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTextValidator::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxTextValidator::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxTextValidator::SetPreviousHandler(handler);
	};

	// wxObject * wxTextValidator::Clone() const
	wxObject * Clone() const {
		if(_obj.pushFunction("Clone")) {
			return (_obj.callFunction<wxObject*>());
		}

		return wxTextValidator::Clone();
	};

	// bool wxTextValidator::TransferFromWindow()
	bool TransferFromWindow() {
		if(_obj.pushFunction("TransferFromWindow")) {
			return (_obj.callFunction<bool>());
		}

		return wxTextValidator::TransferFromWindow();
	};

	// bool wxTextValidator::TransferToWindow()
	bool TransferToWindow() {
		if(_obj.pushFunction("TransferToWindow")) {
			return (_obj.callFunction<bool>());
		}

		return wxTextValidator::TransferToWindow();
	};

	// bool wxTextValidator::Validate(wxWindow * parent)
	bool Validate(wxWindow * parent) {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg(parent);
			return (_obj.callFunction<bool>());
		}

		return wxTextValidator::Validate(parent);
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTextValidator::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTextValidator::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTextValidator::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTextValidator::TryAfter(event);
	};

	// wxString wxTextValidator::IsValid(const wxString & val) const
	wxString IsValid(const wxString & val) const {
		if(_obj.pushFunction("IsValid")) {
			_obj.pushArg(val);
			return *(_obj.callFunction<wxString*>());
		}

		return wxTextValidator::IsValid(val);
	};


};




#endif

