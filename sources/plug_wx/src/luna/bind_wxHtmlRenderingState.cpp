#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxHtmlRenderingState {
public:
	typedef Luna< wxHtmlRenderingState > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40987827) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHtmlRenderingState*)");
		}

		wxHtmlRenderingState* rhs =(Luna< wxHtmlRenderingState >::check(L,2));
		wxHtmlRenderingState* self=(Luna< wxHtmlRenderingState >::check(L,1));
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

		wxHtmlRenderingState* self=(Luna< wxHtmlRenderingState >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHtmlRenderingState");
		
		return luna_dynamicCast(L,converters,"wxHtmlRenderingState",name);
	}

};

wxHtmlRenderingState* LunaTraits< wxHtmlRenderingState >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxHtmlRenderingState >::_bind_dtor(wxHtmlRenderingState* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< wxHtmlRenderingState >::className[] = "wxHtmlRenderingState";
const char LunaTraits< wxHtmlRenderingState >::fullName[] = "wxHtmlRenderingState";
const char LunaTraits< wxHtmlRenderingState >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlRenderingState >::parents[] = {0};
const int LunaTraits< wxHtmlRenderingState >::hash = 40987827;
const int LunaTraits< wxHtmlRenderingState >::uniqueIDs[] = {40987827,0};

luna_RegType LunaTraits< wxHtmlRenderingState >::methods[] = {
	{"dynCast", &luna_wrapper_wxHtmlRenderingState::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHtmlRenderingState::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlRenderingState >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlRenderingState >::enumValues[] = {
	{0,0}
};

