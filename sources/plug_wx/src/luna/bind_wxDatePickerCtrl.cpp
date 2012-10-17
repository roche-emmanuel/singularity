#include <plug_common.h>

class luna_wrapper_wxDatePickerCtrl {
public:
	typedef Luna< wxDatePickerCtrl > luna_t;

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
		wxDatePickerCtrl* ptr= dynamic_cast< wxDatePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDatePickerCtrl >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,57497519) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_isstring(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,57497519)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,57497519)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,57497519) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57497519) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxDatePickerCtrl::Create(wxWindow * parent, int id, const wxDateTime & dt = wxDefaultDateTime, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDP_DEFAULT|wxDP_SHOWCENTURY, const wxValidator & validator = wxDefaultValidator, const wxString & name = "datectrl")
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDatePickerCtrl::Create(wxWindow * parent, int id, const wxDateTime & dt = wxDefaultDateTime, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDP_DEFAULT|wxDP_SHOWCENTURY, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"datectrl\") function, expected prototype:\nbool wxDatePickerCtrl::Create(wxWindow * parent, int id, const wxDateTime & dt = wxDefaultDateTime, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDP_DEFAULT|wxDP_SHOWCENTURY, const wxValidator & validator = wxDefaultValidator, const wxString & name = \"datectrl\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 57497519\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxDateTime* dt_ptr=luatop>3 ? (Luna< wxDateTime >::check(L,4)) : NULL;
		if( luatop>3 && !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxDatePickerCtrl::Create function");
		}
		const wxDateTime & dt=luatop>3 ? *dt_ptr : wxDefaultDateTime;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDatePickerCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDatePickerCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : wxDefaultSize;
		long style=luatop>6 ? (long)lua_tointeger(L,7) : wxDP_DEFAULT|wxDP_SHOWCENTURY;
		const wxValidator* validator_ptr=luatop>7 ? dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDatePickerCtrl::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxDatePickerCtrl* self=dynamic_cast< wxDatePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDatePickerCtrl::Create(wxWindow *, int, const wxDateTime &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)");
		}
		bool lret = self->Create(parent, id, dt, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDatePickerCtrl::GetRange(wxDateTime * dt1, wxDateTime * dt2) const
	static int _bind_GetRange(lua_State *L) {
		if (!_lg_typecheck_GetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxDatePickerCtrl::GetRange(wxDateTime * dt1, wxDateTime * dt2) const function, expected prototype:\nbool wxDatePickerCtrl::GetRange(wxDateTime * dt1, wxDateTime * dt2) const\nClass arguments details:\narg 1 ID = 57497519\narg 2 ID = 57497519\n");
		}

		wxDateTime* dt1=(Luna< wxDateTime >::check(L,2));
		wxDateTime* dt2=(Luna< wxDateTime >::check(L,3));

		wxDatePickerCtrl* self=dynamic_cast< wxDatePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxDatePickerCtrl::GetRange(wxDateTime *, wxDateTime *) const");
		}
		bool lret = self->GetRange(dt1, dt2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDateTime wxDatePickerCtrl::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxDateTime wxDatePickerCtrl::GetValue() const function, expected prototype:\nwxDateTime wxDatePickerCtrl::GetValue() const\nClass arguments details:\n");
		}


		wxDatePickerCtrl* self=dynamic_cast< wxDatePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxDateTime wxDatePickerCtrl::GetValue() const");
		}
		wxDateTime stack_lret = self->GetValue();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// void wxDatePickerCtrl::SetRange(const wxDateTime & dt1, const wxDateTime & dt2)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDatePickerCtrl::SetRange(const wxDateTime & dt1, const wxDateTime & dt2) function, expected prototype:\nvoid wxDatePickerCtrl::SetRange(const wxDateTime & dt1, const wxDateTime & dt2)\nClass arguments details:\narg 1 ID = 57497519\narg 2 ID = 57497519\n");
		}

		const wxDateTime* dt1_ptr=(Luna< wxDateTime >::check(L,2));
		if( !dt1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt1 in wxDatePickerCtrl::SetRange function");
		}
		const wxDateTime & dt1=*dt1_ptr;
		const wxDateTime* dt2_ptr=(Luna< wxDateTime >::check(L,3));
		if( !dt2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt2 in wxDatePickerCtrl::SetRange function");
		}
		const wxDateTime & dt2=*dt2_ptr;

		wxDatePickerCtrl* self=dynamic_cast< wxDatePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDatePickerCtrl::SetRange(const wxDateTime &, const wxDateTime &)");
		}
		self->SetRange(dt1, dt2);

		return 0;
	}

	// void wxDatePickerCtrl::SetValue(const wxDateTime & dt)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxDatePickerCtrl::SetValue(const wxDateTime & dt) function, expected prototype:\nvoid wxDatePickerCtrl::SetValue(const wxDateTime & dt)\nClass arguments details:\narg 1 ID = 57497519\n");
		}

		const wxDateTime* dt_ptr=(Luna< wxDateTime >::check(L,2));
		if( !dt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dt in wxDatePickerCtrl::SetValue function");
		}
		const wxDateTime & dt=*dt_ptr;

		wxDatePickerCtrl* self=dynamic_cast< wxDatePickerCtrl* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxDatePickerCtrl::SetValue(const wxDateTime &)");
		}
		self->SetValue(dt);

		return 0;
	}


	// Operator binds:

};

wxDatePickerCtrl* LunaTraits< wxDatePickerCtrl >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxDatePickerCtrl::GetRange(wxDateTime * dt1, wxDateTime * dt2) const
	// wxDateTime wxDatePickerCtrl::GetValue() const
	// void wxDatePickerCtrl::SetRange(const wxDateTime & dt1, const wxDateTime & dt2)
	// void wxDatePickerCtrl::SetValue(const wxDateTime & dt)

	// Abstract operators:
}

void LunaTraits< wxDatePickerCtrl >::_bind_dtor(wxDatePickerCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxDatePickerCtrl >::className[] = "wxDatePickerCtrl";
const char LunaTraits< wxDatePickerCtrl >::fullName[] = "wxDatePickerCtrl";
const char LunaTraits< wxDatePickerCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxDatePickerCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxDatePickerCtrl >::hash = 45563350;
const int LunaTraits< wxDatePickerCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDatePickerCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxDatePickerCtrl::_bind_Create},
	{"GetRange", &luna_wrapper_wxDatePickerCtrl::_bind_GetRange},
	{"GetValue", &luna_wrapper_wxDatePickerCtrl::_bind_GetValue},
	{"SetRange", &luna_wrapper_wxDatePickerCtrl::_bind_SetRange},
	{"SetValue", &luna_wrapper_wxDatePickerCtrl::_bind_SetValue},
	{"__eq", &luna_wrapper_wxDatePickerCtrl::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDatePickerCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxDatePickerCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDatePickerCtrl >::enumValues[] = {
	{0,0}
};


