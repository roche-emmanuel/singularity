#include <plug_common.h>

class luna_wrapper_wxStreamBase {
public:
	typedef Luna< wxStreamBase > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxStreamBase* ptr= dynamic_cast< wxStreamBase* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStreamBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetLastError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSeekable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Reset(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStreamBase::wxStreamBase()
	static wxStreamBase* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStreamBase::wxStreamBase() function, expected prototype:\nwxStreamBase::wxStreamBase()\nClass arguments details:\n");
		}


		return new wxStreamBase();
	}


	// Function binds:
	// wxStreamError wxStreamBase::GetLastError() const
	static int _bind_GetLastError(lua_State *L) {
		if (!_lg_typecheck_GetLastError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxStreamError wxStreamBase::GetLastError() const function, expected prototype:\nwxStreamError wxStreamBase::GetLastError() const\nClass arguments details:\n");
		}


		wxStreamBase* self=dynamic_cast< wxStreamBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxStreamError wxStreamBase::GetLastError() const");
		}
		wxStreamError lret = self->GetLastError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxStreamBase::GetLength() const
	static int _bind_GetLength(lua_State *L) {
		if (!_lg_typecheck_GetLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long wxStreamBase::GetLength() const function, expected prototype:\nlong wxStreamBase::GetLength() const\nClass arguments details:\n");
		}


		wxStreamBase* self=dynamic_cast< wxStreamBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long wxStreamBase::GetLength() const");
		}
		long lret = self->GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxStreamBase::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t wxStreamBase::GetSize() const function, expected prototype:\nsize_t wxStreamBase::GetSize() const\nClass arguments details:\n");
		}


		wxStreamBase* self=dynamic_cast< wxStreamBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t wxStreamBase::GetSize() const");
		}
		size_t lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStreamBase::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStreamBase::IsOk() const function, expected prototype:\nbool wxStreamBase::IsOk() const\nClass arguments details:\n");
		}


		wxStreamBase* self=dynamic_cast< wxStreamBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStreamBase::IsOk() const");
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStreamBase::IsSeekable() const
	static int _bind_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_IsSeekable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxStreamBase::IsSeekable() const function, expected prototype:\nbool wxStreamBase::IsSeekable() const\nClass arguments details:\n");
		}


		wxStreamBase* self=dynamic_cast< wxStreamBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxStreamBase::IsSeekable() const");
		}
		bool lret = self->IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStreamBase::Reset(wxStreamError error = wxSTREAM_NO_ERROR)
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxStreamBase::Reset(wxStreamError error = wxSTREAM_NO_ERROR) function, expected prototype:\nvoid wxStreamBase::Reset(wxStreamError error = wxSTREAM_NO_ERROR)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		wxStreamError error=luatop>1 ? (wxStreamError)lua_tointeger(L,2) : wxSTREAM_NO_ERROR;

		wxStreamBase* self=dynamic_cast< wxStreamBase* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxStreamBase::Reset(wxStreamError)");
		}
		self->Reset(error);

		return 0;
	}


	// Operator binds:

};

wxStreamBase* LunaTraits< wxStreamBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStreamBase::_bind_ctor(L);
}

void LunaTraits< wxStreamBase >::_bind_dtor(wxStreamBase* obj) {
	delete obj;
}

const char LunaTraits< wxStreamBase >::className[] = "wxStreamBase";
const char LunaTraits< wxStreamBase >::fullName[] = "wxStreamBase";
const char LunaTraits< wxStreamBase >::moduleName[] = "wx";
const char* LunaTraits< wxStreamBase >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxStreamBase >::hash = 33155380;
const int LunaTraits< wxStreamBase >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStreamBase >::methods[] = {
	{"GetLastError", &luna_wrapper_wxStreamBase::_bind_GetLastError},
	{"GetLength", &luna_wrapper_wxStreamBase::_bind_GetLength},
	{"GetSize", &luna_wrapper_wxStreamBase::_bind_GetSize},
	{"IsOk", &luna_wrapper_wxStreamBase::_bind_IsOk},
	{"IsSeekable", &luna_wrapper_wxStreamBase::_bind_IsSeekable},
	{"Reset", &luna_wrapper_wxStreamBase::_bind_Reset},
	{0,0}
};

luna_ConverterType LunaTraits< wxStreamBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxStreamBase::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStreamBase >::enumValues[] = {
	{0,0}
};


