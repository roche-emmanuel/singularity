#include <plug_common.h>

class luna_wrapper_posix_time_ptime {
public:
	typedef Luna< posix_time::ptime > luna_t;

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

		posix_time::ptime* self=(Luna< posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("posix_time::ptime");
		
		return luna_dynamicCast(L,converters,"posix_time::ptime",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck___tostring2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,12269219)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int posix_time::ptime::ptime_tostring(posix_time::ptime * val, lua_State * L)
	static int _bind___tostring2(lua_State *L) {
		if (!_lg_typecheck___tostring2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int posix_time::ptime::ptime_tostring(posix_time::ptime * val, lua_State * L) function, expected prototype:\nint posix_time::ptime::ptime_tostring(posix_time::ptime * val, lua_State * L)\nClass arguments details:\narg 1 ID = 12269219\n");
		}

		posix_time::ptime* val=(Luna< posix_time::ptime >::check(L,1));

		return ptime_tostring(val, L);
	}


	// Operator binds:

};

posix_time::ptime* LunaTraits< posix_time::ptime >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< posix_time::ptime >::_bind_dtor(posix_time::ptime* obj) {
	delete obj;
}

const char LunaTraits< posix_time::ptime >::className[] = "ptime";
const char LunaTraits< posix_time::ptime >::fullName[] = "posix_time::ptime";
const char LunaTraits< posix_time::ptime >::moduleName[] = "posix_time";
const char* LunaTraits< posix_time::ptime >::parents[] = {0};
const int LunaTraits< posix_time::ptime >::hash = 12269219;
const int LunaTraits< posix_time::ptime >::uniqueIDs[] = {12269219,0};

luna_RegType LunaTraits< posix_time::ptime >::methods[] = {
	{"__tostring2", &luna_wrapper_posix_time_ptime::_bind___tostring2},
	{"dynCast", &luna_wrapper_posix_time_ptime::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< posix_time::ptime >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< posix_time::ptime >::enumValues[] = {
	{0,0}
};


