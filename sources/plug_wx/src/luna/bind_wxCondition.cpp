#include <plug_common.h>

class luna_wrapper_wxCondition {
public:
	typedef Luna< wxCondition > luna_t;

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

		wxCondition* self=(Luna< wxCondition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxCondition");
		
		return luna_dynamicCast(L,converters,"wxCondition",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxCondition* LunaTraits< wxCondition >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxCondition >::_bind_dtor(wxCondition* obj) {
	delete obj;
}

const char LunaTraits< wxCondition >::className[] = "wxCondition";
const char LunaTraits< wxCondition >::fullName[] = "wxCondition";
const char LunaTraits< wxCondition >::moduleName[] = "wx";
const char* LunaTraits< wxCondition >::parents[] = {0};
const int LunaTraits< wxCondition >::hash = 34092478;
const int LunaTraits< wxCondition >::uniqueIDs[] = {34092478,0};

luna_RegType LunaTraits< wxCondition >::methods[] = {
	{"dynCast", &luna_wrapper_wxCondition::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxCondition >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxCondition >::enumValues[] = {
	{0,0}
};


