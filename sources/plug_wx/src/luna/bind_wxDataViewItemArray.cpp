#include <plug_common.h>

class luna_wrapper_wxDataViewItemArray {
public:
	typedef Luna< wxDataViewItemArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60705462) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataViewItemArray*)");
		}

		wxDataViewItemArray* rhs =(Luna< wxDataViewItemArray >::check(L,2));
		wxDataViewItemArray* self=(Luna< wxDataViewItemArray >::check(L,1));
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

		wxDataViewItemArray* self=(Luna< wxDataViewItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataViewItemArray");
		
		return luna_dynamicCast(L,converters,"wxDataViewItemArray",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxDataViewItemArray* LunaTraits< wxDataViewItemArray >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxDataViewItemArray >::_bind_dtor(wxDataViewItemArray* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewItemArray >::className[] = "wxDataViewItemArray";
const char LunaTraits< wxDataViewItemArray >::fullName[] = "wxDataViewItemArray";
const char LunaTraits< wxDataViewItemArray >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewItemArray >::parents[] = {0};
const int LunaTraits< wxDataViewItemArray >::hash = 60705462;
const int LunaTraits< wxDataViewItemArray >::uniqueIDs[] = {60705462,0};

luna_RegType LunaTraits< wxDataViewItemArray >::methods[] = {
	{"dynCast", &luna_wrapper_wxDataViewItemArray::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDataViewItemArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewItemArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewItemArray >::enumValues[] = {
	{0,0}
};


