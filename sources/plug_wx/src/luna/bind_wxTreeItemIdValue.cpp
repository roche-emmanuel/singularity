#include <plug_common.h>

class luna_wrapper_wxTreeItemIdValue {
public:
	typedef Luna< wxTreeItemIdValue > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24465332) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTreeItemIdValue*)");
		}

		wxTreeItemIdValue* rhs =(Luna< wxTreeItemIdValue >::check(L,2));
		wxTreeItemIdValue* self=(Luna< wxTreeItemIdValue >::check(L,1));
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

		wxTreeItemIdValue* self=(Luna< wxTreeItemIdValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTreeItemIdValue");
		
		return luna_dynamicCast(L,converters,"wxTreeItemIdValue",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxTreeItemIdValue* LunaTraits< wxTreeItemIdValue >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxTreeItemIdValue >::_bind_dtor(wxTreeItemIdValue* obj) {
	delete obj;
}

const char LunaTraits< wxTreeItemIdValue >::className[] = "wxTreeItemIdValue";
const char LunaTraits< wxTreeItemIdValue >::fullName[] = "wxTreeItemIdValue";
const char LunaTraits< wxTreeItemIdValue >::moduleName[] = "wx";
const char* LunaTraits< wxTreeItemIdValue >::parents[] = {0};
const int LunaTraits< wxTreeItemIdValue >::hash = 24465332;
const int LunaTraits< wxTreeItemIdValue >::uniqueIDs[] = {24465332,0};

luna_RegType LunaTraits< wxTreeItemIdValue >::methods[] = {
	{"dynCast", &luna_wrapper_wxTreeItemIdValue::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTreeItemIdValue::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeItemIdValue >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeItemIdValue >::enumValues[] = {
	{0,0}
};


