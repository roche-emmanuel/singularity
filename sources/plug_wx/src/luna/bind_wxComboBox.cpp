#include <plug_common.h>

#include <luna/wrappers/wrapper_wxComboBox.h>

class luna_wrapper_wxComboBox {
public:
	typedef Luna< wxComboBox > luna_t;

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
		wxComboBox* ptr= dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxComboBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxItemContainerImmutable(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxComboBox* ptr= dynamic_cast< wxComboBox* >(Luna< wxItemContainerImmutable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxComboBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTextEntry(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxComboBox* ptr= dynamic_cast< wxComboBox* >(Luna< wxTextEntry >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxComboBox >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( (!dynamic_cast< wxArrayString* >(Luna< wxArrayString >::check(L,6))) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8))) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( (!dynamic_cast< wxPoint* >(Luna< wxPoint >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( (!dynamic_cast< wxSize* >(Luna< wxSize >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( (!dynamic_cast< wxArrayString* >(Luna< wxArrayString >::check(L,7))) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>8 && (!dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9))) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCurrentSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsListEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsTextEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSelection_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Popup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Dismiss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxComboBox::wxComboBox()
	static wxComboBox* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxComboBox::wxComboBox() function, expected prototype:\nwxComboBox::wxComboBox()\nClass arguments details:\n");
		}


		return new wxComboBox();
	}

	// wxComboBox::wxComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static wxComboBox* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxComboBox::wxComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nwxComboBox::wxComboBox(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxComboBox::wxComboBox function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboBox::wxComboBox function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,6));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxComboBox::wxComboBox function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : 0;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxComboBox::wxComboBox function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxComboBox(parent, id, value, pos, size, choices, style, validator, name);
	}

	// wxComboBox::wxComboBox(lua_Table * data)
	static wxComboBox* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxComboBox::wxComboBox(lua_Table * data) function, expected prototype:\nwxComboBox::wxComboBox(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxComboBox(L,NULL);
	}

	// wxComboBox::wxComboBox(lua_Table * data, wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static wxComboBox* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxComboBox::wxComboBox(lua_Table * data, wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nwxComboBox::wxComboBox(lua_Table * data, wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 7 ID = 59507769\narg 9 ID = 56813631\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxComboBox::wxComboBox function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,6));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboBox::wxComboBox function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,7));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxComboBox::wxComboBox function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : 0;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxComboBox::wxComboBox function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wrapper_wxComboBox(L,NULL, parent, id, value, pos, size, choices, style, validator, name);
	}

	// Overload binder for wxComboBox::wxComboBox
	static wxComboBox* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxComboBox, cannot match any of the overloads for function wxComboBox:\n  wxComboBox()\n  wxComboBox(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)\n  wxComboBox(lua_Table *)\n  wxComboBox(lua_Table *, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nbool wxComboBox::Create(wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 8 ID = 56813631\narg 9 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxComboBox::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,6));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboBox::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,7));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxComboBox::Create function");
		}
		const wxArrayString & choices=*choices_ptr;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : 0;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxComboBox::Create function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboBox::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, value, pos, size, choices, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxComboBox::GetCurrentSelection() const
	static int _bind_GetCurrentSelection(lua_State *L) {
		if (!_lg_typecheck_GetCurrentSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxComboBox::GetCurrentSelection() const function, expected prototype:\nint wxComboBox::GetCurrentSelection() const\nClass arguments details:\n");
		}


		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxComboBox::GetCurrentSelection() const");
		}
		int lret = self->GetCurrentSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxComboBox::GetInsertionPoint() const
	static int _bind_GetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_GetInsertionPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxComboBox::GetInsertionPoint() const function, expected prototype:\nlong wxComboBox::GetInsertionPoint() const\nClass arguments details:\n");
		}


		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxComboBox::GetInsertionPoint() const");
		}
		long lret = self->GetInsertionPoint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxComboBox::IsListEmpty() const
	static int _bind_IsListEmpty(lua_State *L) {
		if (!_lg_typecheck_IsListEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboBox::IsListEmpty() const function, expected prototype:\nbool wxComboBox::IsListEmpty() const\nClass arguments details:\n");
		}


		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboBox::IsListEmpty() const");
		}
		bool lret = self->IsListEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboBox::IsTextEmpty() const
	static int _bind_IsTextEmpty(lua_State *L) {
		if (!_lg_typecheck_IsTextEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxComboBox::IsTextEmpty() const function, expected prototype:\nbool wxComboBox::IsTextEmpty() const\nClass arguments details:\n");
		}


		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxComboBox::IsTextEmpty() const");
		}
		bool lret = self->IsTextEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboBox::SetSelection(long from, long to)
	static int _bind_SetSelection_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetSelection_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboBox::SetSelection(long from, long to) function, expected prototype:\nvoid wxComboBox::SetSelection(long from, long to)\nClass arguments details:\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);

		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboBox::SetSelection(long, long)");
		}
		self->SetSelection(from, to);

		return 0;
	}

	// void wxComboBox::SetSelection(int n)
	static int _bind_SetSelection_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetSelection_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboBox::SetSelection(int n) function, expected prototype:\nvoid wxComboBox::SetSelection(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboBox::SetSelection(int)");
		}
		self->SetSelection(n);

		return 0;
	}

	// Overload binder for wxComboBox::SetSelection
	static int _bind_SetSelection(lua_State *L) {
		if (_lg_typecheck_SetSelection_overload_1(L)) return _bind_SetSelection_overload_1(L);
		if (_lg_typecheck_SetSelection_overload_2(L)) return _bind_SetSelection_overload_2(L);

		luaL_error(L, "error in function SetSelection, cannot match any of the overloads for function SetSelection:\n  SetSelection(long, long)\n  SetSelection(int)\n");
		return 0;
	}

	// void wxComboBox::SetValue(const wxString & text)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboBox::SetValue(const wxString & text) function, expected prototype:\nvoid wxComboBox::SetValue(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboBox::SetValue(const wxString &)");
		}
		self->SetValue(text);

		return 0;
	}

	// void wxComboBox::Popup()
	static int _bind_Popup(lua_State *L) {
		if (!_lg_typecheck_Popup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboBox::Popup() function, expected prototype:\nvoid wxComboBox::Popup()\nClass arguments details:\n");
		}


		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboBox::Popup()");
		}
		self->Popup();

		return 0;
	}

	// void wxComboBox::Dismiss()
	static int _bind_Dismiss(lua_State *L) {
		if (!_lg_typecheck_Dismiss(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboBox::Dismiss() function, expected prototype:\nvoid wxComboBox::Dismiss()\nClass arguments details:\n");
		}


		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboBox::Dismiss()");
		}
		self->Dismiss();

		return 0;
	}

	// int wxComboBox::GetSelection() const
	static int _bind_GetSelection_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetSelection_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxComboBox::GetSelection() const function, expected prototype:\nint wxComboBox::GetSelection() const\nClass arguments details:\n");
		}


		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxComboBox::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxComboBox::GetSelection(long * from, long * to) const
	static int _bind_GetSelection_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetSelection_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboBox::GetSelection(long * from, long * to) const function, expected prototype:\nvoid wxComboBox::GetSelection(long * from, long * to) const\nClass arguments details:\n");
		}

		long from=(long)lua_tointeger(L,2);
		long to=(long)lua_tointeger(L,3);

		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboBox::GetSelection(long *, long *) const");
		}
		self->GetSelection(&from, &to);

		return 0;
	}

	// Overload binder for wxComboBox::GetSelection
	static int _bind_GetSelection(lua_State *L) {
		if (_lg_typecheck_GetSelection_overload_1(L)) return _bind_GetSelection_overload_1(L);
		if (_lg_typecheck_GetSelection_overload_2(L)) return _bind_GetSelection_overload_2(L);

		luaL_error(L, "error in function GetSelection, cannot match any of the overloads for function GetSelection:\n  GetSelection()\n  GetSelection(long *, long *)\n");
		return 0;
	}

	// int wxComboBox::FindString(const wxString & string, bool caseSensitive = false) const
	static int _bind_FindString(lua_State *L) {
		if (!_lg_typecheck_FindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxComboBox::FindString(const wxString & string, bool caseSensitive = false) const function, expected prototype:\nint wxComboBox::FindString(const wxString & string, bool caseSensitive = false) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		bool caseSensitive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxComboBox::FindString(const wxString &, bool) const");
		}
		int lret = self->FindString(string, caseSensitive);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxComboBox::GetString(unsigned int n) const
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxComboBox::GetString(unsigned int n) const function, expected prototype:\nwxString wxComboBox::GetString(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxComboBox::GetString(unsigned int) const");
		}
		wxString lret = self->GetString(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxComboBox::GetStringSelection() const
	static int _bind_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_GetStringSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxComboBox::GetStringSelection() const function, expected prototype:\nwxString wxComboBox::GetStringSelection() const\nClass arguments details:\n");
		}


		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxComboBox::GetStringSelection() const");
		}
		wxString lret = self->GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxComboBox::SetString(unsigned int n, const wxString & string)
	static int _bind_SetString(lua_State *L) {
		if (!_lg_typecheck_SetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxComboBox::SetString(unsigned int n, const wxString & string) function, expected prototype:\nvoid wxComboBox::SetString(unsigned int n, const wxString & string)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		wxString string(lua_tostring(L,3),lua_objlen(L,3));

		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxComboBox::SetString(unsigned int, const wxString &)");
		}
		self->SetString(n, string);

		return 0;
	}

	// unsigned int wxComboBox::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxComboBox::GetCount() const function, expected prototype:\nunsigned int wxComboBox::GetCount() const\nClass arguments details:\n");
		}


		wxComboBox* self=dynamic_cast< wxComboBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxComboBox::GetCount() const");
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxComboBox* LunaTraits< wxComboBox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxComboBox::_bind_ctor(L);
}

void LunaTraits< wxComboBox >::_bind_dtor(wxComboBox* obj) {
	delete obj;
}

const char LunaTraits< wxComboBox >::className[] = "wxComboBox";
const char LunaTraits< wxComboBox >::fullName[] = "wxComboBox";
const char LunaTraits< wxComboBox >::moduleName[] = "wx";
const char* LunaTraits< wxComboBox >::parents[] = {"wx.wxControl", "wx.wxItemContainer", "wx.wxTextEntry", 0};
const int LunaTraits< wxComboBox >::hash = 67528656;
const int LunaTraits< wxComboBox >::uniqueIDs[] = {56813631, 53506535, 69784830, 54144136,0};

luna_RegType LunaTraits< wxComboBox >::methods[] = {
	{"Create", &luna_wrapper_wxComboBox::_bind_Create},
	{"GetCurrentSelection", &luna_wrapper_wxComboBox::_bind_GetCurrentSelection},
	{"GetInsertionPoint", &luna_wrapper_wxComboBox::_bind_GetInsertionPoint},
	{"IsListEmpty", &luna_wrapper_wxComboBox::_bind_IsListEmpty},
	{"IsTextEmpty", &luna_wrapper_wxComboBox::_bind_IsTextEmpty},
	{"SetSelection", &luna_wrapper_wxComboBox::_bind_SetSelection},
	{"SetValue", &luna_wrapper_wxComboBox::_bind_SetValue},
	{"Popup", &luna_wrapper_wxComboBox::_bind_Popup},
	{"Dismiss", &luna_wrapper_wxComboBox::_bind_Dismiss},
	{"GetSelection", &luna_wrapper_wxComboBox::_bind_GetSelection},
	{"FindString", &luna_wrapper_wxComboBox::_bind_FindString},
	{"GetString", &luna_wrapper_wxComboBox::_bind_GetString},
	{"GetStringSelection", &luna_wrapper_wxComboBox::_bind_GetStringSelection},
	{"SetString", &luna_wrapper_wxComboBox::_bind_SetString},
	{"GetCount", &luna_wrapper_wxComboBox::_bind_GetCount},
	{"__eq", &luna_wrapper_wxComboBox::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxComboBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxComboBox::_cast_from_wxObject},
	{"wxItemContainerImmutable", &luna_wrapper_wxComboBox::_cast_from_wxItemContainerImmutable},
	{"wxTextEntry", &luna_wrapper_wxComboBox::_cast_from_wxTextEntry},
	{0,0}
};

luna_RegEnumType LunaTraits< wxComboBox >::enumValues[] = {
	{0,0}
};


