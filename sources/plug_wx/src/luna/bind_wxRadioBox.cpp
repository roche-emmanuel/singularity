#include <plug_common.h>

class luna_wrapper_wxRadioBox {
public:
	typedef Luna< wxRadioBox > luna_t;

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
		wxRadioBox* ptr= dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRadioBox >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>10 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>9 && lua_isstring(L,10)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>11 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,59507769) ) return false;
		if( luatop>7 && (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && !Luna<void>::has_uniqueid(L,10,56813631) ) return false;
		if( luatop>10 && lua_isstring(L,11)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemFromPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemHelpText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemToolTip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRowCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsItemEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsItemShown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemHelpText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemToolTip(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRadioBox::wxRadioBox()
	static wxRadioBox* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRadioBox::wxRadioBox() function, expected prototype:\nwxRadioBox::wxRadioBox()\nClass arguments details:\n");
		}


		return new wxRadioBox();
	}

	// wxRadioBox::wxRadioBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr)
	static wxRadioBox* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRadioBox::wxRadioBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr) function, expected prototype:\nwxRadioBox::wxRadioBox(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 9 ID = 56813631\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRadioBox::wxRadioBox function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,5));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::wxRadioBox function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,6));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxRadioBox::wxRadioBox function");
		}
		const wxArrayString & choices=*choices_ptr;
		int majorDimension=luatop>6 ? (int)lua_tointeger(L,7) : 0;
		long style=luatop>7 ? (long)lua_tointeger(L,8) : wxRA_SPECIFY_COLS;
		const wxValidator* validator_ptr=luatop>8 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRadioBox::wxRadioBox function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wxRadioBox(parent, id, label, pos, size, choices, majorDimension, style, validator, name);
	}

	// Overload binder for wxRadioBox::wxRadioBox
	static wxRadioBox* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRadioBox, cannot match any of the overloads for function wxRadioBox:\n  wxRadioBox()\n  wxRadioBox(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, int, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRadioBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr) function, expected prototype:\nbool wxRadioBox::Create(wxWindow * parent, int id, const wxString & label, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxRadioBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 6 ID = 59507769\narg 9 ID = 56813631\narg 10 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,5));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRadioBox::Create function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,6));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRadioBox::Create function");
		}
		const wxSize & size=*size_ptr;
		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,7));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxRadioBox::Create function");
		}
		const wxArrayString & choices=*choices_ptr;
		int majorDimension=luatop>7 ? (int)lua_tointeger(L,8) : 0;
		long style=luatop>8 ? (long)lua_tointeger(L,9) : wxRA_SPECIFY_COLS;
		const wxValidator* validator_ptr=luatop>9 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,10)) : NULL;
		if( luatop>9 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxRadioBox::Create function");
		}
		const wxValidator & validator=luatop>9 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,11),lua_objlen(L,11));

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRadioBox::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, const wxArrayString &, int, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, label, pos, size, choices, majorDimension, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::Enable(unsigned int n, bool enable = true)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::Enable(unsigned int n, bool enable = true) function, expected prototype:\nbool wxRadioBox::Enable(unsigned int n, bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		bool enable=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRadioBox::Enable(unsigned int, bool)");
		}
		bool lret = self->Enable(n, enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxRadioBox::FindString(const wxString & string, bool bCase = false) const
	static int _bind_FindString(lua_State *L) {
		if (!_lg_typecheck_FindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRadioBox::FindString(const wxString & string, bool bCase = false) const function, expected prototype:\nint wxRadioBox::FindString(const wxString & string, bool bCase = false) const\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		bool bCase=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRadioBox::FindString(const wxString &, bool) const");
		}
		int lret = self->FindString(string, bCase);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxRadioBox::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxRadioBox::GetColumnCount() const function, expected prototype:\nunsigned int wxRadioBox::GetColumnCount() const\nClass arguments details:\n");
		}


		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxRadioBox::GetColumnCount() const");
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRadioBox::GetItemFromPoint(const wxPoint & pt) const
	static int _bind_GetItemFromPoint(lua_State *L) {
		if (!_lg_typecheck_GetItemFromPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRadioBox::GetItemFromPoint(const wxPoint & pt) const function, expected prototype:\nint wxRadioBox::GetItemFromPoint(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRadioBox::GetItemFromPoint function");
		}
		const wxPoint & pt=*pt_ptr;

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRadioBox::GetItemFromPoint(const wxPoint &) const");
		}
		int lret = self->GetItemFromPoint(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxRadioBox::GetItemHelpText(unsigned int item) const
	static int _bind_GetItemHelpText(lua_State *L) {
		if (!_lg_typecheck_GetItemHelpText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxRadioBox::GetItemHelpText(unsigned int item) const function, expected prototype:\nwxString wxRadioBox::GetItemHelpText(unsigned int item) const\nClass arguments details:\n");
		}

		unsigned int item=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxRadioBox::GetItemHelpText(unsigned int) const");
		}
		wxString lret = self->GetItemHelpText(item);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxToolTip * wxRadioBox::GetItemToolTip(unsigned int item) const
	static int _bind_GetItemToolTip(lua_State *L) {
		if (!_lg_typecheck_GetItemToolTip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxToolTip * wxRadioBox::GetItemToolTip(unsigned int item) const function, expected prototype:\nwxToolTip * wxRadioBox::GetItemToolTip(unsigned int item) const\nClass arguments details:\n");
		}

		unsigned int item=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxToolTip * wxRadioBox::GetItemToolTip(unsigned int) const");
		}
		wxToolTip * lret = self->GetItemToolTip(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolTip >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxRadioBox::GetRowCount() const
	static int _bind_GetRowCount(lua_State *L) {
		if (!_lg_typecheck_GetRowCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxRadioBox::GetRowCount() const function, expected prototype:\nunsigned int wxRadioBox::GetRowCount() const\nClass arguments details:\n");
		}


		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxRadioBox::GetRowCount() const");
		}
		unsigned int lret = self->GetRowCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRadioBox::IsItemEnabled(unsigned int n) const
	static int _bind_IsItemEnabled(lua_State *L) {
		if (!_lg_typecheck_IsItemEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::IsItemEnabled(unsigned int n) const function, expected prototype:\nbool wxRadioBox::IsItemEnabled(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRadioBox::IsItemEnabled(unsigned int) const");
		}
		bool lret = self->IsItemEnabled(n);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRadioBox::IsItemShown(unsigned int n) const
	static int _bind_IsItemShown(lua_State *L) {
		if (!_lg_typecheck_IsItemShown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::IsItemShown(unsigned int n) const function, expected prototype:\nbool wxRadioBox::IsItemShown(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRadioBox::IsItemShown(unsigned int) const");
		}
		bool lret = self->IsItemShown(n);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRadioBox::SetItemHelpText(unsigned int item, const wxString & helptext)
	static int _bind_SetItemHelpText(lua_State *L) {
		if (!_lg_typecheck_SetItemHelpText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRadioBox::SetItemHelpText(unsigned int item, const wxString & helptext) function, expected prototype:\nvoid wxRadioBox::SetItemHelpText(unsigned int item, const wxString & helptext)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		unsigned int item=(unsigned int)lua_tointeger(L,2);
		wxString helptext(lua_tostring(L,3),lua_objlen(L,3));

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRadioBox::SetItemHelpText(unsigned int, const wxString &)");
		}
		self->SetItemHelpText(item, helptext);

		return 0;
	}

	// void wxRadioBox::SetItemToolTip(unsigned int item, const wxString & text)
	static int _bind_SetItemToolTip(lua_State *L) {
		if (!_lg_typecheck_SetItemToolTip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRadioBox::SetItemToolTip(unsigned int item, const wxString & text) function, expected prototype:\nvoid wxRadioBox::SetItemToolTip(unsigned int item, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		unsigned int item=(unsigned int)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRadioBox::SetItemToolTip(unsigned int, const wxString &)");
		}
		self->SetItemToolTip(item, text);

		return 0;
	}

	// bool wxRadioBox::Show(unsigned int item, bool show = true)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRadioBox::Show(unsigned int item, bool show = true) function, expected prototype:\nbool wxRadioBox::Show(unsigned int item, bool show = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int item=(unsigned int)lua_tointeger(L,2);
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRadioBox::Show(unsigned int, bool)");
		}
		bool lret = self->Show(item, show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxRadioBox::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int wxRadioBox::GetCount() const function, expected prototype:\nunsigned int wxRadioBox::GetCount() const\nClass arguments details:\n");
		}


		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int wxRadioBox::GetCount() const");
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxRadioBox::GetString(unsigned int n) const
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxRadioBox::GetString(unsigned int n) const function, expected prototype:\nwxString wxRadioBox::GetString(unsigned int n) const\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxRadioBox::GetString(unsigned int) const");
		}
		wxString lret = self->GetString(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxRadioBox::SetString(unsigned int n, const wxString & string)
	static int _bind_SetString(lua_State *L) {
		if (!_lg_typecheck_SetString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRadioBox::SetString(unsigned int n, const wxString & string) function, expected prototype:\nvoid wxRadioBox::SetString(unsigned int n, const wxString & string)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,2);
		wxString string(lua_tostring(L,3),lua_objlen(L,3));

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRadioBox::SetString(unsigned int, const wxString &)");
		}
		self->SetString(n, string);

		return 0;
	}

	// void wxRadioBox::SetSelection(int n)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRadioBox::SetSelection(int n) function, expected prototype:\nvoid wxRadioBox::SetSelection(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRadioBox::SetSelection(int)");
		}
		self->SetSelection(n);

		return 0;
	}

	// int wxRadioBox::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxRadioBox::GetSelection() const function, expected prototype:\nint wxRadioBox::GetSelection() const\nClass arguments details:\n");
		}


		wxRadioBox* self=dynamic_cast< wxRadioBox* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxRadioBox::GetSelection() const");
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRadioBox* LunaTraits< wxRadioBox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRadioBox::_bind_ctor(L);
}

void LunaTraits< wxRadioBox >::_bind_dtor(wxRadioBox* obj) {
	delete obj;
}

const char LunaTraits< wxRadioBox >::className[] = "wxRadioBox";
const char LunaTraits< wxRadioBox >::fullName[] = "wxRadioBox";
const char LunaTraits< wxRadioBox >::moduleName[] = "wx";
const char* LunaTraits< wxRadioBox >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxRadioBox >::hash = 80458918;
const int LunaTraits< wxRadioBox >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxRadioBox >::methods[] = {
	{"Create", &luna_wrapper_wxRadioBox::_bind_Create},
	{"Enable", &luna_wrapper_wxRadioBox::_bind_Enable},
	{"FindString", &luna_wrapper_wxRadioBox::_bind_FindString},
	{"GetColumnCount", &luna_wrapper_wxRadioBox::_bind_GetColumnCount},
	{"GetItemFromPoint", &luna_wrapper_wxRadioBox::_bind_GetItemFromPoint},
	{"GetItemHelpText", &luna_wrapper_wxRadioBox::_bind_GetItemHelpText},
	{"GetItemToolTip", &luna_wrapper_wxRadioBox::_bind_GetItemToolTip},
	{"GetRowCount", &luna_wrapper_wxRadioBox::_bind_GetRowCount},
	{"IsItemEnabled", &luna_wrapper_wxRadioBox::_bind_IsItemEnabled},
	{"IsItemShown", &luna_wrapper_wxRadioBox::_bind_IsItemShown},
	{"SetItemHelpText", &luna_wrapper_wxRadioBox::_bind_SetItemHelpText},
	{"SetItemToolTip", &luna_wrapper_wxRadioBox::_bind_SetItemToolTip},
	{"Show", &luna_wrapper_wxRadioBox::_bind_Show},
	{"GetCount", &luna_wrapper_wxRadioBox::_bind_GetCount},
	{"GetString", &luna_wrapper_wxRadioBox::_bind_GetString},
	{"SetString", &luna_wrapper_wxRadioBox::_bind_SetString},
	{"SetSelection", &luna_wrapper_wxRadioBox::_bind_SetSelection},
	{"GetSelection", &luna_wrapper_wxRadioBox::_bind_GetSelection},
	{"__eq", &luna_wrapper_wxRadioBox::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRadioBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxRadioBox::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRadioBox >::enumValues[] = {
	{0,0}
};


