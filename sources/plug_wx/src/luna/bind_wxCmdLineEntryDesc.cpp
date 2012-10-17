#include <plug_common.h>

class luna_wrapper_wxCmdLineEntryDesc {
public:
	typedef Luna< wxCmdLineEntryDesc > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62727294) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxCmdLineEntryDesc*)");
		}

		wxCmdLineEntryDesc* rhs =(Luna< wxCmdLineEntryDesc >::check(L,2));
		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
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

		wxCmdLineEntryDesc* self=(Luna< wxCmdLineEntryDesc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxCmdLineEntryDesc");
		
		return luna_dynamicCast(L,converters,"wxCmdLineEntryDesc",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxCmdLineEntryDesc* LunaTraits< wxCmdLineEntryDesc >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxCmdLineEntryDesc >::_bind_dtor(wxCmdLineEntryDesc* obj) {
	delete obj;
}

const char LunaTraits< wxCmdLineEntryDesc >::className[] = "wxCmdLineEntryDesc";
const char LunaTraits< wxCmdLineEntryDesc >::fullName[] = "wxCmdLineEntryDesc";
const char LunaTraits< wxCmdLineEntryDesc >::moduleName[] = "wx";
const char* LunaTraits< wxCmdLineEntryDesc >::parents[] = {0};
const int LunaTraits< wxCmdLineEntryDesc >::hash = 62727294;
const int LunaTraits< wxCmdLineEntryDesc >::uniqueIDs[] = {62727294,0};

luna_RegType LunaTraits< wxCmdLineEntryDesc >::methods[] = {
	{"dynCast", &luna_wrapper_wxCmdLineEntryDesc::_bind_dynCast},
	{"__eq", &luna_wrapper_wxCmdLineEntryDesc::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxCmdLineEntryDesc >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxCmdLineEntryDesc >::enumValues[] = {
	{0,0}
};


