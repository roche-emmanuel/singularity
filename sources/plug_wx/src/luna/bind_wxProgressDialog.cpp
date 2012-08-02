#include <plug_common.h>

class luna_wrapper_wxProgressDialog {
public:
	typedef Luna< wxProgressDialog > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxProgressDialog* ptr= dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxProgressDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Pulse(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Resume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WasCancelled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WasSkipped(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Update(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxProgressDialog::wxProgressDialog(const wxString & title, const wxString & message, int maximum = 100, wxWindow * parent = NULL, int style = 0x0004|0x0002)
	static wxProgressDialog* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxProgressDialog::wxProgressDialog(const wxString & title, const wxString & message, int maximum = 100, wxWindow * parent = NULL, int style = 0x0004|0x0002) function, expected prototype:\nwxProgressDialog::wxProgressDialog(const wxString & title, const wxString & message, int maximum = 100, wxWindow * parent = NULL, int style = 0x0004|0x0002)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 4 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,1),lua_objlen(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		int maximum=luatop>2 ? (int)lua_tointeger(L,3) : 100;
		wxWindow* parent=luatop>3 ? dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,4)) : (wxWindow*)NULL;
		int style=luatop>4 ? (int)lua_tointeger(L,5) : 0x0004|0x0002;

		return new wxProgressDialog(title, message, maximum, parent, style);
	}


	// Function binds:
	// int wxProgressDialog::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxProgressDialog::GetValue() const function, expected prototype:\nint wxProgressDialog::GetValue() const\nClass arguments details:\n");
		}


		wxProgressDialog* self=dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxProgressDialog::GetValue() const");
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxProgressDialog::GetRange() const
	static int _bind_GetRange(lua_State *L) {
		if (!_lg_typecheck_GetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxProgressDialog::GetRange() const function, expected prototype:\nint wxProgressDialog::GetRange() const\nClass arguments details:\n");
		}


		wxProgressDialog* self=dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxProgressDialog::GetRange() const");
		}
		int lret = self->GetRange();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxProgressDialog::GetMessage() const
	static int _bind_GetMessage(lua_State *L) {
		if (!_lg_typecheck_GetMessage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxProgressDialog::GetMessage() const function, expected prototype:\nwxString wxProgressDialog::GetMessage() const\nClass arguments details:\n");
		}


		wxProgressDialog* self=dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxProgressDialog::GetMessage() const");
		}
		wxString lret = self->GetMessage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxProgressDialog::Pulse(const wxString & newmsg = wxEmptyString, bool * skip = NULL)
	static int _bind_Pulse(lua_State *L) {
		if (!_lg_typecheck_Pulse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::Pulse(const wxString & newmsg = wxEmptyString, bool * skip = NULL) function, expected prototype:\nbool wxProgressDialog::Pulse(const wxString & newmsg = wxEmptyString, bool * skip = NULL)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString newmsg(lua_tostring(L,2),lua_objlen(L,2));
		bool skip=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : NULL;

		wxProgressDialog* self=dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::Pulse(const wxString &, bool *)");
		}
		bool lret = self->Pulse(newmsg, &skip);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::Resume()
	static int _bind_Resume(lua_State *L) {
		if (!_lg_typecheck_Resume(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::Resume() function, expected prototype:\nvoid wxProgressDialog::Resume()\nClass arguments details:\n");
		}


		wxProgressDialog* self=dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProgressDialog::Resume()");
		}
		self->Resume();

		return 0;
	}

	// void wxProgressDialog::SetRange(int maximum)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::SetRange(int maximum) function, expected prototype:\nvoid wxProgressDialog::SetRange(int maximum)\nClass arguments details:\n");
		}

		int maximum=(int)lua_tointeger(L,2);

		wxProgressDialog* self=dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxProgressDialog::SetRange(int)");
		}
		self->SetRange(maximum);

		return 0;
	}

	// bool wxProgressDialog::WasCancelled() const
	static int _bind_WasCancelled(lua_State *L) {
		if (!_lg_typecheck_WasCancelled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::WasCancelled() const function, expected prototype:\nbool wxProgressDialog::WasCancelled() const\nClass arguments details:\n");
		}


		wxProgressDialog* self=dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::WasCancelled() const");
		}
		bool lret = self->WasCancelled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::WasSkipped() const
	static int _bind_WasSkipped(lua_State *L) {
		if (!_lg_typecheck_WasSkipped(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::WasSkipped() const function, expected prototype:\nbool wxProgressDialog::WasSkipped() const\nClass arguments details:\n");
		}


		wxProgressDialog* self=dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::WasSkipped() const");
		}
		bool lret = self->WasSkipped();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::Update(int value, const wxString & newmsg = wxEmptyString, bool * skip = NULL)
	static int _bind_Update(lua_State *L) {
		if (!_lg_typecheck_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::Update(int value, const wxString & newmsg = wxEmptyString, bool * skip = NULL) function, expected prototype:\nbool wxProgressDialog::Update(int value, const wxString & newmsg = wxEmptyString, bool * skip = NULL)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		int value=(int)lua_tointeger(L,2);
		wxString newmsg(lua_tostring(L,3),lua_objlen(L,3));
		bool skip=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : NULL;

		wxProgressDialog* self=dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::Update(int, const wxString &, bool *)");
		}
		bool lret = self->Update(value, newmsg, &skip);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxProgressDialog* LunaTraits< wxProgressDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxProgressDialog::_bind_ctor(L);
}

void LunaTraits< wxProgressDialog >::_bind_dtor(wxProgressDialog* obj) {
	delete obj;
}

const char LunaTraits< wxProgressDialog >::className[] = "wxProgressDialog";
const char LunaTraits< wxProgressDialog >::fullName[] = "wxProgressDialog";
const char LunaTraits< wxProgressDialog >::moduleName[] = "wx";
const char* LunaTraits< wxProgressDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxProgressDialog >::hash = 94975242;
const int LunaTraits< wxProgressDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxProgressDialog >::methods[] = {
	{"GetValue", &luna_wrapper_wxProgressDialog::_bind_GetValue},
	{"GetRange", &luna_wrapper_wxProgressDialog::_bind_GetRange},
	{"GetMessage", &luna_wrapper_wxProgressDialog::_bind_GetMessage},
	{"Pulse", &luna_wrapper_wxProgressDialog::_bind_Pulse},
	{"Resume", &luna_wrapper_wxProgressDialog::_bind_Resume},
	{"SetRange", &luna_wrapper_wxProgressDialog::_bind_SetRange},
	{"WasCancelled", &luna_wrapper_wxProgressDialog::_bind_WasCancelled},
	{"WasSkipped", &luna_wrapper_wxProgressDialog::_bind_WasSkipped},
	{"Update", &luna_wrapper_wxProgressDialog::_bind_Update},
	{0,0}
};

luna_ConverterType LunaTraits< wxProgressDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxProgressDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxProgressDialog >::enumValues[] = {
	{0,0}
};


