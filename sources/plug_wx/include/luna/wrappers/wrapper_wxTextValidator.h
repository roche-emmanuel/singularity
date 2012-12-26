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
	
	wrapper_wxTextValidator(lua_State* L, lua_Table* dum, const wxTextValidator & validator) : wxTextValidator(validator), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_wxTextValidator(lua_State* L, lua_Table* dum, long style = ::wxFILTER_NONE, wxString * valPtr = NULL) : wxTextValidator(style, valPtr), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
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
	// Protected virtual methods:
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

public:
	// Protected non-virtual methods:
	// bool wxTextValidator::ContainsOnlyIncludedCharacters(const wxString & val) const
	bool public_ContainsOnlyIncludedCharacters(const wxString & val) const {
		return wxTextValidator::ContainsOnlyIncludedCharacters(val);
	};

	// bool wxTextValidator::ContainsExcludedCharacters(const wxString & val) const
	bool public_ContainsExcludedCharacters(const wxString & val) const {
		return wxTextValidator::ContainsExcludedCharacters(val);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_ContainsOnlyIncludedCharacters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_ContainsExcludedCharacters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// bool wxTextValidator::public_ContainsOnlyIncludedCharacters(const wxString & val) const
	static int _bind_public_ContainsOnlyIncludedCharacters(lua_State *L) {
		if (!_lg_typecheck_public_ContainsOnlyIncludedCharacters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::public_ContainsOnlyIncludedCharacters(const wxString & val) const function, expected prototype:\nbool wxTextValidator::public_ContainsOnlyIncludedCharacters(const wxString & val) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString val(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_wxTextValidator* self=Luna< wxObject >::checkSubType< wrapper_wxTextValidator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextValidator::public_ContainsOnlyIncludedCharacters(const wxString &) const");
		}
		bool lret = self->public_ContainsOnlyIncludedCharacters(val);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextValidator::public_ContainsExcludedCharacters(const wxString & val) const
	static int _bind_public_ContainsExcludedCharacters(lua_State *L) {
		if (!_lg_typecheck_public_ContainsExcludedCharacters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::public_ContainsExcludedCharacters(const wxString & val) const function, expected prototype:\nbool wxTextValidator::public_ContainsExcludedCharacters(const wxString & val) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString val(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_wxTextValidator* self=Luna< wxObject >::checkSubType< wrapper_wxTextValidator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextValidator::public_ContainsExcludedCharacters(const wxString &) const");
		}
		bool lret = self->public_ContainsExcludedCharacters(val);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_ContainsOnlyIncludedCharacters",_bind_public_ContainsOnlyIncludedCharacters},
		{"protected_ContainsExcludedCharacters",_bind_public_ContainsExcludedCharacters},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

