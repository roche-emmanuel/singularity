#include <plug_common.h>

class luna_wrapper_wxFindReplaceData {
public:
	typedef Luna< wxFindReplaceData > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxFindReplaceData* ptr= dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFindReplaceData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetFindString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetReplaceString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFindString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetReplaceString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFindReplaceData::wxFindReplaceData(unsigned int flags = 0)
	static wxFindReplaceData* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxFindReplaceData::wxFindReplaceData(unsigned int flags = 0) function, expected prototype:\nwxFindReplaceData::wxFindReplaceData(unsigned int flags = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>0 ? (unsigned int)lua_tointeger(L,1) : 0;

		return new wxFindReplaceData(flags);
	}


	// Function binds:
	// const wxString & wxFindReplaceData::GetFindString()
	static int _bind_GetFindString(lua_State *L) {
		if (!_lg_typecheck_GetFindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxFindReplaceData::GetFindString() function, expected prototype:\nconst wxString & wxFindReplaceData::GetFindString()\nClass arguments details:\n");
		}


		wxFindReplaceData* self=dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxFindReplaceData::GetFindString()");
		}
		const wxString & lret = self->GetFindString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxFindReplaceData::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxFindReplaceData::GetFlags() const function, expected prototype:\nint wxFindReplaceData::GetFlags() const\nClass arguments details:\n");
		}


		wxFindReplaceData* self=dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxFindReplaceData::GetFlags() const");
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxFindReplaceData::GetReplaceString()
	static int _bind_GetReplaceString(lua_State *L) {
		if (!_lg_typecheck_GetReplaceString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxFindReplaceData::GetReplaceString() function, expected prototype:\nconst wxString & wxFindReplaceData::GetReplaceString()\nClass arguments details:\n");
		}


		wxFindReplaceData* self=dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxFindReplaceData::GetReplaceString()");
		}
		const wxString & lret = self->GetReplaceString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFindReplaceData::SetFindString(const wxString & str)
	static int _bind_SetFindString(lua_State *L) {
		if (!_lg_typecheck_SetFindString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFindReplaceData::SetFindString(const wxString & str) function, expected prototype:\nvoid wxFindReplaceData::SetFindString(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxFindReplaceData* self=dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFindReplaceData::SetFindString(const wxString &)");
		}
		self->SetFindString(str);

		return 0;
	}

	// void wxFindReplaceData::SetFlags(unsigned int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFindReplaceData::SetFlags(unsigned int flags) function, expected prototype:\nvoid wxFindReplaceData::SetFlags(unsigned int flags)\nClass arguments details:\n");
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		wxFindReplaceData* self=dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFindReplaceData::SetFlags(unsigned int)");
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxFindReplaceData::SetReplaceString(const wxString & str)
	static int _bind_SetReplaceString(lua_State *L) {
		if (!_lg_typecheck_SetReplaceString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxFindReplaceData::SetReplaceString(const wxString & str) function, expected prototype:\nvoid wxFindReplaceData::SetReplaceString(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxFindReplaceData* self=dynamic_cast< wxFindReplaceData* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxFindReplaceData::SetReplaceString(const wxString &)");
		}
		self->SetReplaceString(str);

		return 0;
	}


	// Operator binds:

};

wxFindReplaceData* LunaTraits< wxFindReplaceData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFindReplaceData::_bind_ctor(L);
}

void LunaTraits< wxFindReplaceData >::_bind_dtor(wxFindReplaceData* obj) {
	delete obj;
}

const char LunaTraits< wxFindReplaceData >::className[] = "wxFindReplaceData";
const char LunaTraits< wxFindReplaceData >::fullName[] = "wxFindReplaceData";
const char LunaTraits< wxFindReplaceData >::moduleName[] = "wx";
const char* LunaTraits< wxFindReplaceData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFindReplaceData >::hash = 19074490;
const int LunaTraits< wxFindReplaceData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFindReplaceData >::methods[] = {
	{"GetFindString", &luna_wrapper_wxFindReplaceData::_bind_GetFindString},
	{"GetFlags", &luna_wrapper_wxFindReplaceData::_bind_GetFlags},
	{"GetReplaceString", &luna_wrapper_wxFindReplaceData::_bind_GetReplaceString},
	{"SetFindString", &luna_wrapper_wxFindReplaceData::_bind_SetFindString},
	{"SetFlags", &luna_wrapper_wxFindReplaceData::_bind_SetFlags},
	{"SetReplaceString", &luna_wrapper_wxFindReplaceData::_bind_SetReplaceString},
	{0,0}
};

luna_ConverterType LunaTraits< wxFindReplaceData >::converters[] = {
	{"wxObject", &luna_wrapper_wxFindReplaceData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFindReplaceData >::enumValues[] = {
	{0,0}
};


