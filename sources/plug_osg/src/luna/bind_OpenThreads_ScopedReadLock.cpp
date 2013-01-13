#include <plug_common.h>

class luna_wrapper_OpenThreads_ScopedReadLock {
public:
	typedef Luna< OpenThreads::ScopedReadLock > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10551303) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::ScopedReadLock*)");
		}

		OpenThreads::ScopedReadLock* rhs =(Luna< OpenThreads::ScopedReadLock >::check(L,2));
		OpenThreads::ScopedReadLock* self=(Luna< OpenThreads::ScopedReadLock >::check(L,1));
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

		OpenThreads::ScopedReadLock* self=(Luna< OpenThreads::ScopedReadLock >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::ScopedReadLock");
		
		return luna_dynamicCast(L,converters,"OpenThreads::ScopedReadLock",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

OpenThreads::ScopedReadLock* LunaTraits< OpenThreads::ScopedReadLock >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< OpenThreads::ScopedReadLock >::_bind_dtor(OpenThreads::ScopedReadLock* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::ScopedReadLock >::className[] = "ScopedReadLock";
const char LunaTraits< OpenThreads::ScopedReadLock >::fullName[] = "OpenThreads::ScopedReadLock";
const char LunaTraits< OpenThreads::ScopedReadLock >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::ScopedReadLock >::parents[] = {0};
const int LunaTraits< OpenThreads::ScopedReadLock >::hash = 10551303;
const int LunaTraits< OpenThreads::ScopedReadLock >::uniqueIDs[] = {10551303,0};

luna_RegType LunaTraits< OpenThreads::ScopedReadLock >::methods[] = {
	{"dynCast", &luna_wrapper_OpenThreads_ScopedReadLock::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_ScopedReadLock::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::ScopedReadLock >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::ScopedReadLock >::enumValues[] = {
	{0,0}
};


