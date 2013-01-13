#include <plug_common.h>

class luna_wrapper_wxExecuteEnv {
public:
	typedef Luna< wxExecuteEnv > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57480074) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxExecuteEnv*)");
		}

		wxExecuteEnv* rhs =(Luna< wxExecuteEnv >::check(L,2));
		wxExecuteEnv* self=(Luna< wxExecuteEnv >::check(L,1));
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

		wxExecuteEnv* self=(Luna< wxExecuteEnv >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxExecuteEnv");
		
		return luna_dynamicCast(L,converters,"wxExecuteEnv",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getCwd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCwd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxString wxExecuteEnv::cwd()
	static int _bind_getCwd(lua_State *L) {
		if (!_lg_typecheck_getCwd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxExecuteEnv::cwd() function, expected prototype:\nwxString wxExecuteEnv::cwd()\nClass arguments details:\n");
		}


		wxExecuteEnv* self=(Luna< wxExecuteEnv >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxExecuteEnv::cwd(). Got : '%s'",typeid(Luna< wxExecuteEnv >::check(L,1)).name());
		}
		wxString lret = self->cwd;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxExecuteEnv::cwd(wxString value)
	static int _bind_setCwd(lua_State *L) {
		if (!_lg_typecheck_setCwd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxExecuteEnv::cwd(wxString value) function, expected prototype:\nvoid wxExecuteEnv::cwd(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxExecuteEnv* self=(Luna< wxExecuteEnv >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxExecuteEnv::cwd(wxString). Got : '%s'",typeid(Luna< wxExecuteEnv >::check(L,1)).name());
		}
		self->cwd = value;

		return 0;
	}


	// Operator binds:

};

wxExecuteEnv* LunaTraits< wxExecuteEnv >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxExecuteEnv >::_bind_dtor(wxExecuteEnv* obj) {
	delete obj;
}

const char LunaTraits< wxExecuteEnv >::className[] = "wxExecuteEnv";
const char LunaTraits< wxExecuteEnv >::fullName[] = "wxExecuteEnv";
const char LunaTraits< wxExecuteEnv >::moduleName[] = "wx";
const char* LunaTraits< wxExecuteEnv >::parents[] = {0};
const int LunaTraits< wxExecuteEnv >::hash = 57480074;
const int LunaTraits< wxExecuteEnv >::uniqueIDs[] = {57480074,0};

luna_RegType LunaTraits< wxExecuteEnv >::methods[] = {
	{"getCwd", &luna_wrapper_wxExecuteEnv::_bind_getCwd},
	{"setCwd", &luna_wrapper_wxExecuteEnv::_bind_setCwd},
	{"dynCast", &luna_wrapper_wxExecuteEnv::_bind_dynCast},
	{"__eq", &luna_wrapper_wxExecuteEnv::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxExecuteEnv >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxExecuteEnv >::enumValues[] = {
	{0,0}
};


