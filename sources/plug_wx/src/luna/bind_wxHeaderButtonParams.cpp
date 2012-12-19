#include <plug_common.h>

class luna_wrapper_wxHeaderButtonParams {
public:
	typedef Luna< wxHeaderButtonParams > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67488995) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHeaderButtonParams*)");
		}

		wxHeaderButtonParams* rhs =(Luna< wxHeaderButtonParams >::check(L,2));
		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
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

		wxHeaderButtonParams* self=(Luna< wxHeaderButtonParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHeaderButtonParams");
		
		return luna_dynamicCast(L,converters,"wxHeaderButtonParams",name);
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
	// wxHeaderButtonParams::wxHeaderButtonParams()
	static wxHeaderButtonParams* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxHeaderButtonParams::wxHeaderButtonParams() function, expected prototype:\nwxHeaderButtonParams::wxHeaderButtonParams()\nClass arguments details:\n");
		}


		return new wxHeaderButtonParams();
	}


	// Function binds:

	// Operator binds:

};

wxHeaderButtonParams* LunaTraits< wxHeaderButtonParams >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHeaderButtonParams::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxHeaderButtonParams >::_bind_dtor(wxHeaderButtonParams* obj) {
	delete obj;
}

const char LunaTraits< wxHeaderButtonParams >::className[] = "wxHeaderButtonParams";
const char LunaTraits< wxHeaderButtonParams >::fullName[] = "wxHeaderButtonParams";
const char LunaTraits< wxHeaderButtonParams >::moduleName[] = "wx";
const char* LunaTraits< wxHeaderButtonParams >::parents[] = {0};
const int LunaTraits< wxHeaderButtonParams >::hash = 67488995;
const int LunaTraits< wxHeaderButtonParams >::uniqueIDs[] = {67488995,0};

luna_RegType LunaTraits< wxHeaderButtonParams >::methods[] = {
	{"dynCast", &luna_wrapper_wxHeaderButtonParams::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHeaderButtonParams::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxHeaderButtonParams >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHeaderButtonParams >::enumValues[] = {
	{0,0}
};


