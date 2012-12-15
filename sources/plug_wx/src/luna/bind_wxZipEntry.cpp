#include <plug_common.h>

#include <luna/wrappers/wrapper_wxZipEntry.h>

class luna_wrapper_wxZipEntry {
public:
	typedef Luna< wxZipEntry > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91704129) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxZipEntry*)");
		}

		wxZipEntry* rhs =(Luna< wxZipEntry >::check(L,2));
		wxZipEntry* self=(Luna< wxZipEntry >::check(L,1));
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

		wxZipEntry* self=(Luna< wxZipEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxZipEntry");
		
		return luna_dynamicCast(L,converters,"wxZipEntry",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxZipEntry* LunaTraits< wxZipEntry >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxZipEntry >::_bind_dtor(wxZipEntry* obj) {
	delete obj;
}

const char LunaTraits< wxZipEntry >::className[] = "wxZipEntry";
const char LunaTraits< wxZipEntry >::fullName[] = "wxZipEntry";
const char LunaTraits< wxZipEntry >::moduleName[] = "wx";
const char* LunaTraits< wxZipEntry >::parents[] = {0};
const int LunaTraits< wxZipEntry >::hash = 91704129;
const int LunaTraits< wxZipEntry >::uniqueIDs[] = {91704129,0};

luna_RegType LunaTraits< wxZipEntry >::methods[] = {
	{"dynCast", &luna_wrapper_wxZipEntry::_bind_dynCast},
	{"__eq", &luna_wrapper_wxZipEntry::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxZipEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxZipEntry >::enumValues[] = {
	{0,0}
};


