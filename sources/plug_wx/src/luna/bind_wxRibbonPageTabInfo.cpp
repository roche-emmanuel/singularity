#include <plug_common.h>

class luna_wrapper_wxRibbonPageTabInfo {
public:
	typedef Luna< wxRibbonPageTabInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51496344) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRibbonPageTabInfo*)");
		}

		wxRibbonPageTabInfo* rhs =(Luna< wxRibbonPageTabInfo >::check(L,2));
		wxRibbonPageTabInfo* self=(Luna< wxRibbonPageTabInfo >::check(L,1));
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

		wxRibbonPageTabInfo* self=(Luna< wxRibbonPageTabInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRibbonPageTabInfo");
		
		return luna_dynamicCast(L,converters,"wxRibbonPageTabInfo",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRibbonPageTabInfo* LunaTraits< wxRibbonPageTabInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRibbonPageTabInfo >::_bind_dtor(wxRibbonPageTabInfo* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonPageTabInfo >::className[] = "wxRibbonPageTabInfo";
const char LunaTraits< wxRibbonPageTabInfo >::fullName[] = "wxRibbonPageTabInfo";
const char LunaTraits< wxRibbonPageTabInfo >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonPageTabInfo >::parents[] = {0};
const int LunaTraits< wxRibbonPageTabInfo >::hash = 51496344;
const int LunaTraits< wxRibbonPageTabInfo >::uniqueIDs[] = {51496344,0};

luna_RegType LunaTraits< wxRibbonPageTabInfo >::methods[] = {
	{"dynCast", &luna_wrapper_wxRibbonPageTabInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRibbonPageTabInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonPageTabInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonPageTabInfo >::enumValues[] = {
	{0,0}
};


