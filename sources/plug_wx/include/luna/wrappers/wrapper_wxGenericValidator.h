#ifndef _WRAPPERS_WRAPPER_WXGENERICVALIDATOR_H_
#define _WRAPPERS_WRAPPER_WXGENERICVALIDATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/valgen.h>

class wrapper_wxGenericValidator : public wxGenericValidator {
protected:
	sgt::LuaObject _obj;
	
public:
	

	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, const wxGenericValidator & validator) : wxGenericValidator(validator), _obj(L,-1) {};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, bool * valPtr) : wxGenericValidator(valPtr), _obj(L,-1) {};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, wxString * valPtr) : wxGenericValidator(valPtr), _obj(L,-1) {};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, int * valPtr) : wxGenericValidator(valPtr), _obj(L,-1) {};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, wxArrayInt * valPtr) : wxGenericValidator(valPtr), _obj(L,-1) {};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, wxDateTime * valPtr) : wxGenericValidator(valPtr), _obj(L,-1) {};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, wxFileName * valPtr) : wxGenericValidator(valPtr), _obj(L,-1) {};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, float * valPtr) : wxGenericValidator(valPtr), _obj(L,-1) {};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, double * valPtr) : wxGenericValidator(valPtr), _obj(L,-1) {};

	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGenericValidator::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxGenericValidator::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxGenericValidator::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxGenericValidator::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxGenericValidator::SetPreviousHandler(handler);
	};

	// bool wxValidator::Validate(wxWindow * parent)
	bool Validate(wxWindow * parent) {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg(parent);
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::Validate(parent);
	};

	// wxObject * wxGenericValidator::Clone() const
	wxObject * Clone() const {
		if(_obj.pushFunction("Clone")) {
			return (_obj.callFunction<wxObject*>());
		}

		return wxGenericValidator::Clone();
	};

	// bool wxGenericValidator::TransferFromWindow()
	bool TransferFromWindow() {
		if(_obj.pushFunction("TransferFromWindow")) {
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::TransferFromWindow();
	};

	// bool wxGenericValidator::TransferToWindow()
	bool TransferToWindow() {
		if(_obj.pushFunction("TransferToWindow")) {
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::TransferToWindow();
	};


protected:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGenericValidator::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGenericValidator::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::TryAfter(event);
	};


};




#endif

