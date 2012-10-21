#include <plug_common.h>

class luna_wrapper_wxTextValidator {
public:
	typedef Luna< wxTextValidator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxTextValidator* ptr= dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextValidator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExcludes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIncludes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExcludes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCharExcludes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIncludes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCharIncludes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TransferFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TransferToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Validate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTextValidator::wxTextValidator(const wxTextValidator & validator)
	static wxTextValidator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextValidator::wxTextValidator(const wxTextValidator & validator) function, expected prototype:\nwxTextValidator::wxTextValidator(const wxTextValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxTextValidator* validator_ptr=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTextValidator::wxTextValidator function");
		}
		const wxTextValidator & validator=*validator_ptr;

		return new wxTextValidator(validator);
	}

	// wxTextValidator::wxTextValidator(long style = wxFILTER_NONE, wxString * valPtr = NULL)
	static wxTextValidator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxTextValidator::wxTextValidator(long style = wxFILTER_NONE, wxString * valPtr = NULL) function, expected prototype:\nwxTextValidator::wxTextValidator(long style = wxFILTER_NONE, wxString * valPtr = NULL)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		long style=luatop>0 ? (long)lua_tointeger(L,1) : wxFILTER_NONE;
		wxString valPtr(lua_tostring(L,2),lua_objlen(L,2));

		return new wxTextValidator(style, &valPtr);
	}

	// Overload binder for wxTextValidator::wxTextValidator
	static wxTextValidator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTextValidator, cannot match any of the overloads for function wxTextValidator:\n  wxTextValidator(const wxTextValidator &)\n  wxTextValidator(long, wxString *)\n");
		return NULL;
	}


	// Function binds:
	// wxObject * wxTextValidator::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxObject * wxTextValidator::Clone() const function, expected prototype:\nwxObject * wxTextValidator::Clone() const\nClass arguments details:\n");
		}


		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxObject * wxTextValidator::Clone() const");
		}
		wxObject * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// wxArrayString & wxTextValidator::GetExcludes()
	static int _bind_GetExcludes(lua_State *L) {
		if (!_lg_typecheck_GetExcludes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayString & wxTextValidator::GetExcludes() function, expected prototype:\nwxArrayString & wxTextValidator::GetExcludes()\nClass arguments details:\n");
		}


		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxArrayString & wxTextValidator::GetExcludes()");
		}
		const wxArrayString* lret = &self->GetExcludes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}

	// wxArrayString & wxTextValidator::GetIncludes()
	static int _bind_GetIncludes(lua_State *L) {
		if (!_lg_typecheck_GetIncludes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxArrayString & wxTextValidator::GetIncludes() function, expected prototype:\nwxArrayString & wxTextValidator::GetIncludes()\nClass arguments details:\n");
		}


		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxArrayString & wxTextValidator::GetIncludes()");
		}
		const wxArrayString* lret = &self->GetIncludes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}

	// long wxTextValidator::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxTextValidator::GetStyle() const function, expected prototype:\nlong wxTextValidator::GetStyle() const\nClass arguments details:\n");
		}


		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxTextValidator::GetStyle() const");
		}
		long lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTextValidator::HasFlag(wxTextValidatorStyle style) const
	static int _bind_HasFlag(lua_State *L) {
		if (!_lg_typecheck_HasFlag(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::HasFlag(wxTextValidatorStyle style) const function, expected prototype:\nbool wxTextValidator::HasFlag(wxTextValidatorStyle style) const\nClass arguments details:\n");
		}

		wxTextValidatorStyle style=(wxTextValidatorStyle)lua_tointeger(L,2);

		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextValidator::HasFlag(wxTextValidatorStyle) const");
		}
		bool lret = self->HasFlag(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextValidator::OnChar(wxKeyEvent & event)
	static int _bind_OnChar(lua_State *L) {
		if (!_lg_typecheck_OnChar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextValidator::OnChar(wxKeyEvent & event) function, expected prototype:\nvoid wxTextValidator::OnChar(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxKeyEvent* event_ptr=dynamic_cast< wxKeyEvent* >(Luna< wxObject >::check(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextValidator::OnChar function");
		}
		wxKeyEvent & event=*event_ptr;

		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextValidator::OnChar(wxKeyEvent &)");
		}
		self->OnChar(event);

		return 0;
	}

	// void wxTextValidator::SetExcludes(const wxArrayString & stringList)
	static int _bind_SetExcludes(lua_State *L) {
		if (!_lg_typecheck_SetExcludes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextValidator::SetExcludes(const wxArrayString & stringList) function, expected prototype:\nvoid wxTextValidator::SetExcludes(const wxArrayString & stringList)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* stringList_ptr=(Luna< wxArrayString >::check(L,2));
		if( !stringList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stringList in wxTextValidator::SetExcludes function");
		}
		const wxArrayString & stringList=*stringList_ptr;

		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextValidator::SetExcludes(const wxArrayString &)");
		}
		self->SetExcludes(stringList);

		return 0;
	}

	// void wxTextValidator::SetCharExcludes(const wxString & chars)
	static int _bind_SetCharExcludes(lua_State *L) {
		if (!_lg_typecheck_SetCharExcludes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextValidator::SetCharExcludes(const wxString & chars) function, expected prototype:\nvoid wxTextValidator::SetCharExcludes(const wxString & chars)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString chars(lua_tostring(L,2),lua_objlen(L,2));

		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextValidator::SetCharExcludes(const wxString &)");
		}
		self->SetCharExcludes(chars);

		return 0;
	}

	// void wxTextValidator::SetIncludes(const wxArrayString & stringList)
	static int _bind_SetIncludes(lua_State *L) {
		if (!_lg_typecheck_SetIncludes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextValidator::SetIncludes(const wxArrayString & stringList) function, expected prototype:\nvoid wxTextValidator::SetIncludes(const wxArrayString & stringList)\nClass arguments details:\narg 1 ID = 59507769\n");
		}

		const wxArrayString* stringList_ptr=(Luna< wxArrayString >::check(L,2));
		if( !stringList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stringList in wxTextValidator::SetIncludes function");
		}
		const wxArrayString & stringList=*stringList_ptr;

		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextValidator::SetIncludes(const wxArrayString &)");
		}
		self->SetIncludes(stringList);

		return 0;
	}

	// void wxTextValidator::SetCharIncludes(const wxString & chars)
	static int _bind_SetCharIncludes(lua_State *L) {
		if (!_lg_typecheck_SetCharIncludes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextValidator::SetCharIncludes(const wxString & chars) function, expected prototype:\nvoid wxTextValidator::SetCharIncludes(const wxString & chars)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString chars(lua_tostring(L,2),lua_objlen(L,2));

		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextValidator::SetCharIncludes(const wxString &)");
		}
		self->SetCharIncludes(chars);

		return 0;
	}

	// void wxTextValidator::SetStyle(long style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxTextValidator::SetStyle(long style) function, expected prototype:\nvoid wxTextValidator::SetStyle(long style)\nClass arguments details:\n");
		}

		long style=(long)lua_tointeger(L,2);

		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxTextValidator::SetStyle(long)");
		}
		self->SetStyle(style);

		return 0;
	}

	// bool wxTextValidator::TransferFromWindow()
	static int _bind_TransferFromWindow(lua_State *L) {
		if (!_lg_typecheck_TransferFromWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::TransferFromWindow() function, expected prototype:\nbool wxTextValidator::TransferFromWindow()\nClass arguments details:\n");
		}


		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextValidator::TransferFromWindow()");
		}
		bool lret = self->TransferFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextValidator::TransferToWindow()
	static int _bind_TransferToWindow(lua_State *L) {
		if (!_lg_typecheck_TransferToWindow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::TransferToWindow() function, expected prototype:\nbool wxTextValidator::TransferToWindow()\nClass arguments details:\n");
		}


		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextValidator::TransferToWindow()");
		}
		bool lret = self->TransferToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextValidator::Validate(wxWindow * parent)
	static int _bind_Validate(lua_State *L) {
		if (!_lg_typecheck_Validate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::Validate(wxWindow * parent) function, expected prototype:\nbool wxTextValidator::Validate(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxTextValidator* self=dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextValidator::Validate(wxWindow *)");
		}
		bool lret = self->Validate(parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTextValidator* LunaTraits< wxTextValidator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextValidator::_bind_ctor(L);
}

void LunaTraits< wxTextValidator >::_bind_dtor(wxTextValidator* obj) {
	delete obj;
}

const char LunaTraits< wxTextValidator >::className[] = "wxTextValidator";
const char LunaTraits< wxTextValidator >::fullName[] = "wxTextValidator";
const char LunaTraits< wxTextValidator >::moduleName[] = "wx";
const char* LunaTraits< wxTextValidator >::parents[] = {"wx.wxValidator", 0};
const int LunaTraits< wxTextValidator >::hash = 48482282;
const int LunaTraits< wxTextValidator >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTextValidator >::methods[] = {
	{"Clone", &luna_wrapper_wxTextValidator::_bind_Clone},
	{"GetExcludes", &luna_wrapper_wxTextValidator::_bind_GetExcludes},
	{"GetIncludes", &luna_wrapper_wxTextValidator::_bind_GetIncludes},
	{"GetStyle", &luna_wrapper_wxTextValidator::_bind_GetStyle},
	{"HasFlag", &luna_wrapper_wxTextValidator::_bind_HasFlag},
	{"OnChar", &luna_wrapper_wxTextValidator::_bind_OnChar},
	{"SetExcludes", &luna_wrapper_wxTextValidator::_bind_SetExcludes},
	{"SetCharExcludes", &luna_wrapper_wxTextValidator::_bind_SetCharExcludes},
	{"SetIncludes", &luna_wrapper_wxTextValidator::_bind_SetIncludes},
	{"SetCharIncludes", &luna_wrapper_wxTextValidator::_bind_SetCharIncludes},
	{"SetStyle", &luna_wrapper_wxTextValidator::_bind_SetStyle},
	{"TransferFromWindow", &luna_wrapper_wxTextValidator::_bind_TransferFromWindow},
	{"TransferToWindow", &luna_wrapper_wxTextValidator::_bind_TransferToWindow},
	{"Validate", &luna_wrapper_wxTextValidator::_bind_Validate},
	{"__eq", &luna_wrapper_wxTextValidator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextValidator >::converters[] = {
	{"wxObject", &luna_wrapper_wxTextValidator::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextValidator >::enumValues[] = {
	{0,0}
};


