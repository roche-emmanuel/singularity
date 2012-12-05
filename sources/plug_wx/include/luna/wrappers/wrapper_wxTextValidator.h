#ifndef _WRAPPERS_WRAPPER_WXTEXTVALIDATOR_H_
#define _WRAPPERS_WRAPPER_WXTEXTVALIDATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/valtext.h>

class wrapper_wxTextValidator : public wxTextValidator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxTextValidator(lua_State* L, lua_Table* dum, const wxTextValidator & validator) : wxTextValidator(validator), _obj(L,-1) {};
	wrapper_wxTextValidator(lua_State* L, lua_Table* dum, long style = ::wxFILTER_NONE, wxString * valPtr = NULL) : wxTextValidator(style, valPtr), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxObject::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxEvtHandler::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::SetPreviousHandler(handler);
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
	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	// bool wxEvtHandler::TryBefore(wxEvent & event)
	// bool wxEvtHandler::TryAfter(wxEvent & event)
	// wxString wxTextValidator::IsValid(const wxString & val) const

};




#endif

