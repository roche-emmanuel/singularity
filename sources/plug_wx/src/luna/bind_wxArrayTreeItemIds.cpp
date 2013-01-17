#include <plug_common.h>

class luna_wrapper_wxArrayTreeItemIds {
public:
	typedef Luna< wxArrayTreeItemIds > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99349677) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxArrayTreeItemIds*)");
		}

		wxArrayTreeItemIds* rhs =(Luna< wxArrayTreeItemIds >::check(L,2));
		wxArrayTreeItemIds* self=(Luna< wxArrayTreeItemIds >::check(L,1));
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

		wxArrayTreeItemIds* self=(Luna< wxArrayTreeItemIds >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxArrayTreeItemIds");
		
		return luna_dynamicCast(L,converters,"wxArrayTreeItemIds",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxArrayTreeItemIds* LunaTraits< wxArrayTreeItemIds >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxArrayTreeItemIds >::_bind_dtor(wxArrayTreeItemIds* obj) {
	delete obj;
}

const char LunaTraits< wxArrayTreeItemIds >::className[] = "wxArrayTreeItemIds";
const char LunaTraits< wxArrayTreeItemIds >::fullName[] = "wxArrayTreeItemIds";
const char LunaTraits< wxArrayTreeItemIds >::moduleName[] = "wx";
const char* LunaTraits< wxArrayTreeItemIds >::parents[] = {0};
const int LunaTraits< wxArrayTreeItemIds >::hash = 99349677;
const int LunaTraits< wxArrayTreeItemIds >::uniqueIDs[] = {99349677,0};

luna_RegType LunaTraits< wxArrayTreeItemIds >::methods[] = {
	{"dynCast", &luna_wrapper_wxArrayTreeItemIds::_bind_dynCast},
	{"__eq", &luna_wrapper_wxArrayTreeItemIds::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxArrayTreeItemIds >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxArrayTreeItemIds >::enumValues[] = {
	{0,0}
};


