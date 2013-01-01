#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_wxScopedCharTypeBuffer_wchar_t {
public:
	typedef Luna< wxScopedCharTypeBuffer< wchar_t > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77310945) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxScopedCharTypeBuffer< wchar_t >*)");
		}

		wxScopedCharTypeBuffer< wchar_t >* rhs =(Luna< wxScopedCharTypeBuffer< wchar_t > >::check(L,2));
		wxScopedCharTypeBuffer< wchar_t >* self=(Luna< wxScopedCharTypeBuffer< wchar_t > >::check(L,1));
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

		wxScopedCharTypeBuffer< wchar_t >* self=(Luna< wxScopedCharTypeBuffer< wchar_t > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxScopedCharTypeBuffer< wchar_t >");
		
		return luna_dynamicCast(L,converters,"wxScopedCharTypeBuffer< wchar_t >",name);
	}

};

wxScopedCharTypeBuffer< wchar_t >* LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::_bind_dtor(wxScopedCharTypeBuffer< wchar_t >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::className[] = "wxScopedCharTypeBuffer_wchar_t";
const char LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::fullName[] = "wxScopedCharTypeBuffer< wchar_t >";
const char LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::moduleName[] = "wx";
const char* LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::parents[] = {0};
const int LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::hash = 77310945;
const int LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::uniqueIDs[] = {77310945,0};

luna_RegType LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::methods[] = {
	{"dynCast", &luna_wrapper_wxScopedCharTypeBuffer_wchar_t::_bind_dynCast},
	{"__eq", &luna_wrapper_wxScopedCharTypeBuffer_wchar_t::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxScopedCharTypeBuffer< wchar_t > >::enumValues[] = {
	{0,0}
};


