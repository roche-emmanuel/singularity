#include <plug_common.h>

class luna_wrapper_wxMutexLocker {
public:
	typedef Luna< wxMutexLocker > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30993614) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxMutexLocker*)");
		}

		wxMutexLocker* rhs =(Luna< wxMutexLocker >::check(L,2));
		wxMutexLocker* self=(Luna< wxMutexLocker >::check(L,1));
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

		wxMutexLocker* self=(Luna< wxMutexLocker >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMutexLocker");
		
		return luna_dynamicCast(L,converters,"wxMutexLocker",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxMutexLocker* LunaTraits< wxMutexLocker >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxMutexLocker >::_bind_dtor(wxMutexLocker* obj) {
	delete obj;
}

const char LunaTraits< wxMutexLocker >::className[] = "wxMutexLocker";
const char LunaTraits< wxMutexLocker >::fullName[] = "wxMutexLocker";
const char LunaTraits< wxMutexLocker >::moduleName[] = "wx";
const char* LunaTraits< wxMutexLocker >::parents[] = {0};
const int LunaTraits< wxMutexLocker >::hash = 30993614;
const int LunaTraits< wxMutexLocker >::uniqueIDs[] = {30993614,0};

luna_RegType LunaTraits< wxMutexLocker >::methods[] = {
	{"dynCast", &luna_wrapper_wxMutexLocker::_bind_dynCast},
	{"__eq", &luna_wrapper_wxMutexLocker::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxMutexLocker >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMutexLocker >::enumValues[] = {
	{0,0}
};


