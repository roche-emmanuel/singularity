#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxPGCellRenderer {
public:
	typedef Luna< wxPGCellRenderer > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7175101) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPGCellRenderer*)");
		}

		wxPGCellRenderer* rhs =(Luna< wxPGCellRenderer >::check(L,2));
		wxPGCellRenderer* self=(Luna< wxPGCellRenderer >::check(L,1));
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

		wxPGCellRenderer* self=(Luna< wxPGCellRenderer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPGCellRenderer");
		
		return luna_dynamicCast(L,converters,"wxPGCellRenderer",name);
	}

};

wxPGCellRenderer* LunaTraits< wxPGCellRenderer >::_bind_ctor(lua_State *L) {
	return NULL; //Type destructor explicitly removed.
}

void LunaTraits< wxPGCellRenderer >::_bind_dtor(wxPGCellRenderer* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< wxPGCellRenderer >::className[] = "wxPGCellRenderer";
const char LunaTraits< wxPGCellRenderer >::fullName[] = "wxPGCellRenderer";
const char LunaTraits< wxPGCellRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxPGCellRenderer >::parents[] = {0};
const int LunaTraits< wxPGCellRenderer >::hash = 7175101;
const int LunaTraits< wxPGCellRenderer >::uniqueIDs[] = {7175101,0};

luna_RegType LunaTraits< wxPGCellRenderer >::methods[] = {
	{"dynCast", &luna_wrapper_wxPGCellRenderer::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPGCellRenderer::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxPGCellRenderer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGCellRenderer >::enumValues[] = {
	{0,0}
};


