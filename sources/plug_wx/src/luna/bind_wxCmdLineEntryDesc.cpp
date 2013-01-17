#include <plug_common.h>

class luna_wrapper_wxCmdLineEntryDesc {
public:
	typedef Luna< wxCmdLineEntryDesc > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62727294) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxCmdLineEntryDesc*)");
		}

		wxCmdLineEntryDesc* rhs =(Luna< wxCmdLineEntryDesc >::check(L,2));
		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxCmdLineEntryDesc");
		
		return luna_dynamicCast(L,converters,"wxCmdLineEntryDesc",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShortName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLongName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxCmdLineEntryType wxCmdLineEntryDesc::kind()
	static int _bind_getKind(lua_State *L) {
		if (!_lg_typecheck_getKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCmdLineEntryType wxCmdLineEntryDesc::kind() function, expected prototype:\nwxCmdLineEntryType wxCmdLineEntryDesc::kind()\nClass arguments details:\n");
		}


		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxCmdLineEntryType wxCmdLineEntryDesc::kind(). Got : '%s'",typeid(Luna< wxCmdLineEntryDesc >::check(L,1)).name());
		}
		wxCmdLineEntryType lret = self->kind;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * wxCmdLineEntryDesc::shortName()
	static int _bind_getShortName(lua_State *L) {
		if (!_lg_typecheck_getShortName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * wxCmdLineEntryDesc::shortName() function, expected prototype:\nconst char * wxCmdLineEntryDesc::shortName()\nClass arguments details:\n");
		}


		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * wxCmdLineEntryDesc::shortName(). Got : '%s'",typeid(Luna< wxCmdLineEntryDesc >::check(L,1)).name());
		}
		const char * lret = self->shortName;
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * wxCmdLineEntryDesc::longName()
	static int _bind_getLongName(lua_State *L) {
		if (!_lg_typecheck_getLongName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * wxCmdLineEntryDesc::longName() function, expected prototype:\nconst char * wxCmdLineEntryDesc::longName()\nClass arguments details:\n");
		}


		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * wxCmdLineEntryDesc::longName(). Got : '%s'",typeid(Luna< wxCmdLineEntryDesc >::check(L,1)).name());
		}
		const char * lret = self->longName;
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * wxCmdLineEntryDesc::description()
	static int _bind_getDescription(lua_State *L) {
		if (!_lg_typecheck_getDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * wxCmdLineEntryDesc::description() function, expected prototype:\nconst char * wxCmdLineEntryDesc::description()\nClass arguments details:\n");
		}


		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * wxCmdLineEntryDesc::description(). Got : '%s'",typeid(Luna< wxCmdLineEntryDesc >::check(L,1)).name());
		}
		const char * lret = self->description;
		lua_pushstring(L,lret);

		return 1;
	}

	// wxCmdLineParamType wxCmdLineEntryDesc::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxCmdLineParamType wxCmdLineEntryDesc::type() function, expected prototype:\nwxCmdLineParamType wxCmdLineEntryDesc::type()\nClass arguments details:\n");
		}


		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxCmdLineParamType wxCmdLineEntryDesc::type(). Got : '%s'",typeid(Luna< wxCmdLineEntryDesc >::check(L,1)).name());
		}
		wxCmdLineParamType lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxCmdLineEntryDesc::flags()
	static int _bind_getFlags(lua_State *L) {
		if (!_lg_typecheck_getFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxCmdLineEntryDesc::flags() function, expected prototype:\nint wxCmdLineEntryDesc::flags()\nClass arguments details:\n");
		}


		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxCmdLineEntryDesc::flags(). Got : '%s'",typeid(Luna< wxCmdLineEntryDesc >::check(L,1)).name());
		}
		int lret = self->flags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxCmdLineEntryDesc::kind(wxCmdLineEntryType value)
	static int _bind_setKind(lua_State *L) {
		if (!_lg_typecheck_setKind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCmdLineEntryDesc::kind(wxCmdLineEntryType value) function, expected prototype:\nvoid wxCmdLineEntryDesc::kind(wxCmdLineEntryType value)\nClass arguments details:\n");
		}

		wxCmdLineEntryType value=(wxCmdLineEntryType)lua_tointeger(L,2);

		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCmdLineEntryDesc::kind(wxCmdLineEntryType). Got : '%s'",typeid(Luna< wxCmdLineEntryDesc >::check(L,1)).name());
		}
		self->kind = value;

		return 0;
	}

	// void wxCmdLineEntryDesc::type(wxCmdLineParamType value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCmdLineEntryDesc::type(wxCmdLineParamType value) function, expected prototype:\nvoid wxCmdLineEntryDesc::type(wxCmdLineParamType value)\nClass arguments details:\n");
		}

		wxCmdLineParamType value=(wxCmdLineParamType)lua_tointeger(L,2);

		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCmdLineEntryDesc::type(wxCmdLineParamType). Got : '%s'",typeid(Luna< wxCmdLineEntryDesc >::check(L,1)).name());
		}
		self->type = value;

		return 0;
	}

	// void wxCmdLineEntryDesc::flags(int value)
	static int _bind_setFlags(lua_State *L) {
		if (!_lg_typecheck_setFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxCmdLineEntryDesc::flags(int value) function, expected prototype:\nvoid wxCmdLineEntryDesc::flags(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxCmdLineEntryDesc::flags(int). Got : '%s'",typeid(Luna< wxCmdLineEntryDesc >::check(L,1)).name());
		}
		self->flags = value;

		return 0;
	}


	// Operator binds:

};

wxCmdLineEntryDesc* LunaTraits< wxCmdLineEntryDesc >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxCmdLineEntryDesc >::_bind_dtor(wxCmdLineEntryDesc* obj) {
	delete obj;
}

const char LunaTraits< wxCmdLineEntryDesc >::className[] = "wxCmdLineEntryDesc";
const char LunaTraits< wxCmdLineEntryDesc >::fullName[] = "wxCmdLineEntryDesc";
const char LunaTraits< wxCmdLineEntryDesc >::moduleName[] = "wx";
const char* LunaTraits< wxCmdLineEntryDesc >::parents[] = {0};
const int LunaTraits< wxCmdLineEntryDesc >::hash = 62727294;
const int LunaTraits< wxCmdLineEntryDesc >::uniqueIDs[] = {62727294,0};

luna_RegType LunaTraits< wxCmdLineEntryDesc >::methods[] = {
	{"getKind", &luna_wrapper_wxCmdLineEntryDesc::_bind_getKind},
	{"getShortName", &luna_wrapper_wxCmdLineEntryDesc::_bind_getShortName},
	{"getLongName", &luna_wrapper_wxCmdLineEntryDesc::_bind_getLongName},
	{"getDescription", &luna_wrapper_wxCmdLineEntryDesc::_bind_getDescription},
	{"getType", &luna_wrapper_wxCmdLineEntryDesc::_bind_getType},
	{"getFlags", &luna_wrapper_wxCmdLineEntryDesc::_bind_getFlags},
	{"setKind", &luna_wrapper_wxCmdLineEntryDesc::_bind_setKind},
	{"setType", &luna_wrapper_wxCmdLineEntryDesc::_bind_setType},
	{"setFlags", &luna_wrapper_wxCmdLineEntryDesc::_bind_setFlags},
	{"dynCast", &luna_wrapper_wxCmdLineEntryDesc::_bind_dynCast},
	{"__eq", &luna_wrapper_wxCmdLineEntryDesc::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCmdLineEntryDesc >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxCmdLineEntryDesc >::enumValues[] = {
	{0,0}
};


