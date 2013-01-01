#include <plug_common.h>

class luna_wrapper_wxVideoMode {
public:
	typedef Luna< wxVideoMode > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxVideoMode* self=(Luna< wxVideoMode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxVideoMode");
		
		return luna_dynamicCast(L,converters,"wxVideoMode",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Matches(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44802589) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44802589) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44802589) ) return false;
		return true;
	}


	// Constructor binds:
	// wxVideoMode::wxVideoMode(int width = 0, int height = 0, int depth = 0, int freq = 0)
	static wxVideoMode* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxVideoMode::wxVideoMode(int width = 0, int height = 0, int depth = 0, int freq = 0) function, expected prototype:\nwxVideoMode::wxVideoMode(int width = 0, int height = 0, int depth = 0, int freq = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int width=luatop>0 ? (int)lua_tointeger(L,1) : 0;
		int height=luatop>1 ? (int)lua_tointeger(L,2) : 0;
		int depth=luatop>2 ? (int)lua_tointeger(L,3) : 0;
		int freq=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		return new wxVideoMode(width, height, depth, freq);
	}


	// Function binds:
	// bool wxVideoMode::Matches(const wxVideoMode & other) const
	static int _bind_Matches(lua_State *L) {
		if (!_lg_typecheck_Matches(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVideoMode::Matches(const wxVideoMode & other) const function, expected prototype:\nbool wxVideoMode::Matches(const wxVideoMode & other) const\nClass arguments details:\narg 1 ID = 44802589\n");
		}

		const wxVideoMode* other_ptr=(Luna< wxVideoMode >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxVideoMode::Matches function");
		}
		const wxVideoMode & other=*other_ptr;

		wxVideoMode* self=(Luna< wxVideoMode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVideoMode::Matches(const wxVideoMode &) const. Got : '%s'",typeid(Luna< wxVideoMode >::check(L,1)).name());
		}
		bool lret = self->Matches(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxVideoMode::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVideoMode::GetWidth() const function, expected prototype:\nint wxVideoMode::GetWidth() const\nClass arguments details:\n");
		}


		wxVideoMode* self=(Luna< wxVideoMode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVideoMode::GetWidth() const. Got : '%s'",typeid(Luna< wxVideoMode >::check(L,1)).name());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxVideoMode::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVideoMode::GetHeight() const function, expected prototype:\nint wxVideoMode::GetHeight() const\nClass arguments details:\n");
		}


		wxVideoMode* self=(Luna< wxVideoMode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVideoMode::GetHeight() const. Got : '%s'",typeid(Luna< wxVideoMode >::check(L,1)).name());
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxVideoMode::GetDepth() const
	static int _bind_GetDepth(lua_State *L) {
		if (!_lg_typecheck_GetDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxVideoMode::GetDepth() const function, expected prototype:\nint wxVideoMode::GetDepth() const\nClass arguments details:\n");
		}


		wxVideoMode* self=(Luna< wxVideoMode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxVideoMode::GetDepth() const. Got : '%s'",typeid(Luna< wxVideoMode >::check(L,1)).name());
		}
		int lret = self->GetDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxVideoMode::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVideoMode::IsOk() const function, expected prototype:\nbool wxVideoMode::IsOk() const\nClass arguments details:\n");
		}


		wxVideoMode* self=(Luna< wxVideoMode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVideoMode::IsOk() const. Got : '%s'",typeid(Luna< wxVideoMode >::check(L,1)).name());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// bool wxVideoMode::operator==(const wxVideoMode & m) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVideoMode::operator==(const wxVideoMode & m) const function, expected prototype:\nbool wxVideoMode::operator==(const wxVideoMode & m) const\nClass arguments details:\narg 1 ID = 44802589\n");
		}

		const wxVideoMode* m_ptr=(Luna< wxVideoMode >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in wxVideoMode::operator== function");
		}
		const wxVideoMode & m=*m_ptr;

		wxVideoMode* self=(Luna< wxVideoMode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVideoMode::operator==(const wxVideoMode &) const. Got : '%s'",typeid(Luna< wxVideoMode >::check(L,1)).name());
		}
		bool lret = self->operator==(m);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVideoMode::operator!=(const wxVideoMode & mode) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxVideoMode::operator!=(const wxVideoMode & mode) const function, expected prototype:\nbool wxVideoMode::operator!=(const wxVideoMode & mode) const\nClass arguments details:\narg 1 ID = 44802589\n");
		}

		const wxVideoMode* mode_ptr=(Luna< wxVideoMode >::check(L,2));
		if( !mode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mode in wxVideoMode::operator!= function");
		}
		const wxVideoMode & mode=*mode_ptr;

		wxVideoMode* self=(Luna< wxVideoMode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxVideoMode::operator!=(const wxVideoMode &) const. Got : '%s'",typeid(Luna< wxVideoMode >::check(L,1)).name());
		}
		bool lret = self->operator!=(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxVideoMode* LunaTraits< wxVideoMode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxVideoMode::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxVideoMode >::_bind_dtor(wxVideoMode* obj) {
	delete obj;
}

const char LunaTraits< wxVideoMode >::className[] = "wxVideoMode";
const char LunaTraits< wxVideoMode >::fullName[] = "wxVideoMode";
const char LunaTraits< wxVideoMode >::moduleName[] = "wx";
const char* LunaTraits< wxVideoMode >::parents[] = {0};
const int LunaTraits< wxVideoMode >::hash = 44802589;
const int LunaTraits< wxVideoMode >::uniqueIDs[] = {44802589,0};

luna_RegType LunaTraits< wxVideoMode >::methods[] = {
	{"Matches", &luna_wrapper_wxVideoMode::_bind_Matches},
	{"GetWidth", &luna_wrapper_wxVideoMode::_bind_GetWidth},
	{"GetHeight", &luna_wrapper_wxVideoMode::_bind_GetHeight},
	{"GetDepth", &luna_wrapper_wxVideoMode::_bind_GetDepth},
	{"IsOk", &luna_wrapper_wxVideoMode::_bind_IsOk},
	{"__eq", &luna_wrapper_wxVideoMode::_bind___eq},
	{"op_neq", &luna_wrapper_wxVideoMode::_bind_op_neq},
	{"dynCast", &luna_wrapper_wxVideoMode::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxVideoMode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxVideoMode >::enumValues[] = {
	{0,0}
};


