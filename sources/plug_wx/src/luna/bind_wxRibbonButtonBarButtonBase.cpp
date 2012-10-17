#include <plug_common.h>

class luna_wrapper_wxRibbonButtonBarButtonBase {
public:
	typedef Luna< wxRibbonButtonBarButtonBase > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11008561) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRibbonButtonBarButtonBase*)");
		}

		wxRibbonButtonBarButtonBase* rhs =(Luna< wxRibbonButtonBarButtonBase >::check(L,2));
		wxRibbonButtonBarButtonBase* self=(Luna< wxRibbonButtonBarButtonBase >::check(L,1));
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

		wxRibbonButtonBarButtonBase* self=(Luna< wxRibbonButtonBarButtonBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRibbonButtonBarButtonBase");
		
		return luna_dynamicCast(L,converters,"wxRibbonButtonBarButtonBase",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRibbonButtonBarButtonBase* LunaTraits< wxRibbonButtonBarButtonBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRibbonButtonBarButtonBase >::_bind_dtor(wxRibbonButtonBarButtonBase* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonButtonBarButtonBase >::className[] = "wxRibbonButtonBarButtonBase";
const char LunaTraits< wxRibbonButtonBarButtonBase >::fullName[] = "wxRibbonButtonBarButtonBase";
const char LunaTraits< wxRibbonButtonBarButtonBase >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonButtonBarButtonBase >::parents[] = {0};
const int LunaTraits< wxRibbonButtonBarButtonBase >::hash = 11008561;
const int LunaTraits< wxRibbonButtonBarButtonBase >::uniqueIDs[] = {11008561,0};

luna_RegType LunaTraits< wxRibbonButtonBarButtonBase >::methods[] = {
	{"dynCast", &luna_wrapper_wxRibbonButtonBarButtonBase::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRibbonButtonBarButtonBase::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonButtonBarButtonBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonButtonBarButtonBase >::enumValues[] = {
	{0,0}
};


