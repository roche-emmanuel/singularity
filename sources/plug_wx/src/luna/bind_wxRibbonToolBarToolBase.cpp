#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxRibbonToolBarToolBase {
public:
	typedef Luna< wxRibbonToolBarToolBase > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53514976) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRibbonToolBarToolBase*)");
		}

		wxRibbonToolBarToolBase* rhs =(Luna< wxRibbonToolBarToolBase >::check(L,2));
		wxRibbonToolBarToolBase* self=(Luna< wxRibbonToolBarToolBase >::check(L,1));
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

		wxRibbonToolBarToolBase* self=(Luna< wxRibbonToolBarToolBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRibbonToolBarToolBase");
		
		return luna_dynamicCast(L,converters,"wxRibbonToolBarToolBase",name);
	}

};

wxRibbonToolBarToolBase* LunaTraits< wxRibbonToolBarToolBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRibbonToolBarToolBase >::_bind_dtor(wxRibbonToolBarToolBase* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< wxRibbonToolBarToolBase >::className[] = "wxRibbonToolBarToolBase";
const char LunaTraits< wxRibbonToolBarToolBase >::fullName[] = "wxRibbonToolBarToolBase";
const char LunaTraits< wxRibbonToolBarToolBase >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonToolBarToolBase >::parents[] = {0};
const int LunaTraits< wxRibbonToolBarToolBase >::hash = 53514976;
const int LunaTraits< wxRibbonToolBarToolBase >::uniqueIDs[] = {53514976,0};

luna_RegType LunaTraits< wxRibbonToolBarToolBase >::methods[] = {
	{"dynCast", &luna_wrapper_wxRibbonToolBarToolBase::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRibbonToolBarToolBase::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonToolBarToolBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonToolBarToolBase >::enumValues[] = {
	{0,0}
};

