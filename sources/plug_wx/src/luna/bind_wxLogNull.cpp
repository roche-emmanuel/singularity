#include <plug_common.h>

class luna_wrapper_wxLogNull {
public:
	typedef Luna< wxLogNull > luna_t;

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

		wxLogNull* self=(Luna< wxLogNull >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxLogNull");
		
		return luna_dynamicCast(L,converters,"wxLogNull",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogNull::wxLogNull()
	static wxLogNull* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxLogNull::wxLogNull() function, expected prototype:\nwxLogNull::wxLogNull()\nClass arguments details:\n");
		}


		return new wxLogNull();
	}


	// Function binds:

	// Operator binds:

};

wxLogNull* LunaTraits< wxLogNull >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogNull::_bind_ctor(L);
}

void LunaTraits< wxLogNull >::_bind_dtor(wxLogNull* obj) {
	delete obj;
}

const char LunaTraits< wxLogNull >::className[] = "wxLogNull";
const char LunaTraits< wxLogNull >::fullName[] = "wxLogNull";
const char LunaTraits< wxLogNull >::moduleName[] = "wx";
const char* LunaTraits< wxLogNull >::parents[] = {0};
const int LunaTraits< wxLogNull >::hash = 67451906;
const int LunaTraits< wxLogNull >::uniqueIDs[] = {67451906,0};

luna_RegType LunaTraits< wxLogNull >::methods[] = {
	{"dynCast", &luna_wrapper_wxLogNull::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogNull >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogNull >::enumValues[] = {
	{0,0}
};


