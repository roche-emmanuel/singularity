#include <plug_common.h>

class luna_wrapper_wxList {
public:
	typedef Luna< wxList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20060012) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxList*)");
		}

		wxList* rhs =(Luna< wxList >::check(L,2));
		wxList* self=(Luna< wxList >::check(L,1));
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

		wxList* self=(Luna< wxList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxList");
		
		return luna_dynamicCast(L,converters,"wxList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxList* LunaTraits< wxList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxList >::_bind_dtor(wxList* obj) {
	delete obj;
}

const char LunaTraits< wxList >::className[] = "wxList";
const char LunaTraits< wxList >::fullName[] = "wxList";
const char LunaTraits< wxList >::moduleName[] = "wx";
const char* LunaTraits< wxList >::parents[] = {0};
const int LunaTraits< wxList >::hash = 20060012;
const int LunaTraits< wxList >::uniqueIDs[] = {20060012,0};

luna_RegType LunaTraits< wxList >::methods[] = {
	{"dynCast", &luna_wrapper_wxList::_bind_dynCast},
	{"__eq", &luna_wrapper_wxList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxList >::enumValues[] = {
	{0,0}
};


