#include <plug_common.h>

class luna_wrapper_wxChoice {
public:
	typedef Luna< wxChoice > luna_t;

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
		wxChoice* ptr= dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxChoice >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxItemContainerImmutable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxChoice* ptr= dynamic_cast< wxChoice* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxChoice >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,59507769) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColumns(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSorted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxChoice::wxChoice()
	static wxChoice* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxChoice::wxChoice() function, expected prototype:\nwxChoice::wxChoice()\nClass arguments details:\n");
		}


		return new wxChoice();
	}

	// wxChoice::wxChoice(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxChoiceNameStr)
	static wxChoice* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxChoice::wxChoice(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxChoiceNameStr) function, expected prototype:\nwxChoice::wxChoice(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxChoiceNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 59507769\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxChoice::wxChoice function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoice::wxChoice function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,5));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxChoice::wxChoice function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : 0;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxChoice::wxChoice function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxChoice(parent, id, pos, size, choices, style, validator, name);
	}

	// Overload binder for wxChoice::wxChoice
	static wxChoice* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxChoice, cannot match any of the overloads for function wxChoice:\n  wxChoice()\n  wxChoice(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxChoice::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxChoiceNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxChoice::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxChoiceNameStr) function, expected prototype:\nbool wxChoice::Create(wxWindow * parent, int id, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxChoiceNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 5 ID = 59507769\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxChoice::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoice::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,6));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxChoice::Create function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxChoice::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxChoice::Create(wxWindow *, int, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, pos, size, choices, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxChoice::GetColumns() const
	static int _bind_GetColumns(lua_State *L) {
		if (!_lg_typecheck_GetColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxChoice::GetColumns() const function, expected prototype:\nint wxChoice::GetColumns() const\nClass arguments details:\n");
		}


		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxChoice::GetColumns() const");
		}
		int lret = self->GetColumns();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoice::GetCurrentSelection() const
	static int _bind_GetCurrentSelection(lua_State *L) {
		if (!_lg_typecheck_GetCurrentSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxChoice::GetCurrentSelection() const function, expected prototype:\nint wxChoice::GetCurrentSelection() const\nClass arguments details:\n");
		}


		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxChoice::GetCurrentSelection() const");
		}
		int lret = self->GetCurrentSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxChoice::SetColumns(int n = 1)
	static int _bind_SetColumns(lua_State *L) {
		if (!_lg_typecheck_SetColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxChoice::SetColumns(int n = 1) function, expected prototype:\nvoid wxChoice::SetColumns(int n = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int n=luatop>1 ? (int)lua_tointeger(L,2) : 1;

		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxChoice::SetColumns(int)");
		}
		self->SetColumns(n);

		return 0;
	}

	// bool wxChoice::IsSorted() const
	static int _bind_IsSorted(lua_State *L) {
		if (!_lg_typecheck_IsSorted(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxChoice::IsSorted() const function, expected prototype:\nbool wxChoice::IsSorted() const\nClass arguments details:\n");
		}


		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxChoice::IsSorted() const");
		}
		bool lret = self->IsSorted();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxChoice::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxChoice::GetCount() const function, expected prototype:\nunsigned int wxChoice::GetCount() const\nClass arguments details:\n");
		}


		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxChoice::GetCount() const");
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoice::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxChoice::GetSelection() const function, expected prototype:\nint wxChoice::GetSelection() const\nClass arguments details:\n");
		}


		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxChoice::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxChoice::SetSelection(int n)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxChoice::SetSelection(int n) function, expected prototype:\nvoid wxChoice::SetSelection(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxChoice::SetSelection(int)");
		}
		self->SetSelection(n);

		return 0;
	}

	// int wxChoice::FindString(const wxString & string, bool caseSensitive = false) const
	static int _bind_FindString(lua_State *L) {
		if (!_lg_typecheck_FindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxChoice::FindString(const wxString & string, bool caseSensitive = false) const function, expected prototype:\nint wxChoice::FindString(const wxString & string, bool caseSensitive = false) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		bool caseSensitive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxChoice::FindString(const wxString &, bool) const");
		}
		int lret = self->FindString(string, caseSensitive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxChoice::GetString(unsigned int n) const
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxChoice::GetString(unsigned int n) const function, expected prototype:\nwxString wxChoice::GetString(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxChoice::GetString(unsigned int) const");
		}
		wxString lret = self->GetString(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxChoice::SetString(unsigned int n, const wxString & string)
	static int _bind_SetString(lua_State *L) {
		if (!_lg_typecheck_SetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxChoice::SetString(unsigned int n, const wxString & string) function, expected prototype:\nvoid wxChoice::SetString(unsigned int n, const wxString & string)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		wxString string(lua_tostring(L,3),lua_objlen(L,3));

		wxChoice* self=dynamic_cast< wxChoice* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxChoice::SetString(unsigned int, const wxString &)");
		}
		self->SetString(n, string);

		return 0;
	}


	// Operator binds:

};

wxChoice* LunaTraits< wxChoice >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxChoice::_bind_ctor(L);
}

void LunaTraits< wxChoice >::_bind_dtor(wxChoice* obj) {
	delete obj;
}

const char LunaTraits< wxChoice >::className[] = "wxChoice";
const char LunaTraits< wxChoice >::fullName[] = "wxChoice";
const char LunaTraits< wxChoice >::moduleName[] = "wx";
const char* LunaTraits< wxChoice >::parents[] = {"wx.wxControlWithItems", 0};
const int LunaTraits< wxChoice >::hash = 18957753;
const int LunaTraits< wxChoice >::uniqueIDs[] = {56813631, 53506535, 69784830,0};

luna_RegType LunaTraits< wxChoice >::methods[] = {
	{"Create", &luna_wrapper_wxChoice::_bind_Create},
	{"GetColumns", &luna_wrapper_wxChoice::_bind_GetColumns},
	{"GetCurrentSelection", &luna_wrapper_wxChoice::_bind_GetCurrentSelection},
	{"SetColumns", &luna_wrapper_wxChoice::_bind_SetColumns},
	{"IsSorted", &luna_wrapper_wxChoice::_bind_IsSorted},
	{"GetCount", &luna_wrapper_wxChoice::_bind_GetCount},
	{"GetSelection", &luna_wrapper_wxChoice::_bind_GetSelection},
	{"SetSelection", &luna_wrapper_wxChoice::_bind_SetSelection},
	{"FindString", &luna_wrapper_wxChoice::_bind_FindString},
	{"GetString", &luna_wrapper_wxChoice::_bind_GetString},
	{"SetString", &luna_wrapper_wxChoice::_bind_SetString},
	{"__eq", &luna_wrapper_wxChoice::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxChoice >::converters[] = {
	{"wxObject", &luna_wrapper_wxChoice::_cast_from_wxObject},
	{"wxItemContainerImmutable", &luna_wrapper_wxChoice::_cast_from_wxItemContainerImmutable},
	{0,0}
};

luna_RegEnumType LunaTraits< wxChoice >::enumValues[] = {
	{0,0}
};


