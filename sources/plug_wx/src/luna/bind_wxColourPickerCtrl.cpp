#include <plug_common.h>

class luna_wrapper_wxColourPickerCtrl {
public:
	typedef Luna< wxColourPickerCtrl > luna_t;

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
		wxColourPickerCtrl* ptr= dynamic_cast< wxColourPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxColourPickerCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_isstring(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColour_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxColourPickerCtrl::wxColourPickerCtrl(wxWindow * parent, int id, const wxColour & colour = * wxBLACK, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxColourPickerCtrlNameStr)
	static wxColourPickerCtrl* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColourPickerCtrl::wxColourPickerCtrl(wxWindow * parent, int id, const wxColour & colour = * wxBLACK, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxColourPickerCtrlNameStr) function, expected prototype:\nwxColourPickerCtrl::wxColourPickerCtrl(wxWindow * parent, int id, const wxColour & colour = * wxBLACK, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxColourPickerCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxColour* colour_ptr=luatop>2 ? dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3)) : NULL;
		if( luatop>2 && !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColourPickerCtrl::wxColourPickerCtrl function");
		}
		const wxColour & colour=luatop>2 ? *colour_ptr : * wxBLACK;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxColourPickerCtrl::wxColourPickerCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxColourPickerCtrl::wxColourPickerCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : wxDefaultSize;
		long style=luatop>5 ? (long)lua_tointeger(L,6) : wxCLRP_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>6 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxColourPickerCtrl::wxColourPickerCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxColourPickerCtrl(parent, id, colour, pos, size, style, validator, name);
	}


	// Function binds:
	// bool wxColourPickerCtrl::Create(wxWindow * parent, int id, const wxColour & colour = * wxBLACK, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxColourPickerCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxColourPickerCtrl::Create(wxWindow * parent, int id, const wxColour & colour = * wxBLACK, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxColourPickerCtrlNameStr) function, expected prototype:\nbool wxColourPickerCtrl::Create(wxWindow * parent, int id, const wxColour & colour = * wxBLACK, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLRP_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxColourPickerCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxColour* colour_ptr=luatop>3 ? dynamic_cast< wxColour* >(Luna< wxObject >::check(L,4)) : NULL;
		if( luatop>3 && !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColourPickerCtrl::Create function");
		}
		const wxColour & colour=luatop>3 ? *colour_ptr : * wxBLACK;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxColourPickerCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxColourPickerCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxCLRP_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxColourPickerCtrl::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxColourPickerCtrl* self=dynamic_cast< wxColourPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxColourPickerCtrl::Create(wxWindow *, int, const wxColour &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, colour, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxColourPickerCtrl::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxColour wxColourPickerCtrl::GetColour() const function, expected prototype:\nwxColour wxColourPickerCtrl::GetColour() const\nClass arguments details:\n");
		}


		wxColourPickerCtrl* self=dynamic_cast< wxColourPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxColour wxColourPickerCtrl::GetColour() const");
		}
		wxColour stack_lret = self->GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxColourPickerCtrl::SetColour(const wxColour & col)
	static int _bind_SetColour_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetColour_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColourPickerCtrl::SetColour(const wxColour & col) function, expected prototype:\nvoid wxColourPickerCtrl::SetColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxColour* col_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxColourPickerCtrl::SetColour function");
		}
		const wxColour & col=*col_ptr;

		wxColourPickerCtrl* self=dynamic_cast< wxColourPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColourPickerCtrl::SetColour(const wxColour &)");
		}
		self->SetColour(col);

		return 0;
	}

	// void wxColourPickerCtrl::SetColour(const wxString & colname)
	static int _bind_SetColour_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetColour_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxColourPickerCtrl::SetColour(const wxString & colname) function, expected prototype:\nvoid wxColourPickerCtrl::SetColour(const wxString & colname)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString colname(lua_tostring(L,2),lua_objlen(L,2));

		wxColourPickerCtrl* self=dynamic_cast< wxColourPickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxColourPickerCtrl::SetColour(const wxString &)");
		}
		self->SetColour(colname);

		return 0;
	}

	// Overload binder for wxColourPickerCtrl::SetColour
	static int _bind_SetColour(lua_State *L) {
		if (_lg_typecheck_SetColour_overload_1(L)) return _bind_SetColour_overload_1(L);
		if (_lg_typecheck_SetColour_overload_2(L)) return _bind_SetColour_overload_2(L);

		luaL_error(L, "error in function SetColour, cannot match any of the overloads for function SetColour:\n  SetColour(const wxColour &)\n  SetColour(const wxString &)\n");
		return 0;
	}


	// Operator binds:

};

wxColourPickerCtrl* LunaTraits< wxColourPickerCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxColourPickerCtrl::_bind_ctor(L);
}

void LunaTraits< wxColourPickerCtrl >::_bind_dtor(wxColourPickerCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxColourPickerCtrl >::className[] = "wxColourPickerCtrl";
const char LunaTraits< wxColourPickerCtrl >::fullName[] = "wxColourPickerCtrl";
const char LunaTraits< wxColourPickerCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxColourPickerCtrl >::parents[] = {"wx.wxPickerBase", 0};
const int LunaTraits< wxColourPickerCtrl >::hash = 91653493;
const int LunaTraits< wxColourPickerCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxColourPickerCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxColourPickerCtrl::_bind_Create},
	{"GetColour", &luna_wrapper_wxColourPickerCtrl::_bind_GetColour},
	{"SetColour", &luna_wrapper_wxColourPickerCtrl::_bind_SetColour},
	{"__eq", &luna_wrapper_wxColourPickerCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxColourPickerCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxColourPickerCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxColourPickerCtrl >::enumValues[] = {
	{0,0}
};


