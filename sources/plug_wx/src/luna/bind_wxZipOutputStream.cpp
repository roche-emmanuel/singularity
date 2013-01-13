#include <plug_common.h>

#include <luna/wrappers/wrapper_wxZipOutputStream.h>

class luna_wrapper_wxZipOutputStream {
public:
	typedef Luna< wxZipOutputStream > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxZipOutputStream* self=(Luna< wxZipOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxZipOutputStream,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22640587) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxZipOutputStream*)");
		}

		wxZipOutputStream* rhs =(Luna< wxZipOutputStream >::check(L,2));
		wxZipOutputStream* self=(Luna< wxZipOutputStream >::check(L,1));
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

		wxZipOutputStream* self=(Luna< wxZipOutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxZipOutputStream");
		
		return luna_dynamicCast(L,converters,"wxZipOutputStream",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxZipOutputStream* LunaTraits< wxZipOutputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxZipOutputStream >::_bind_dtor(wxZipOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxZipOutputStream >::className[] = "wxZipOutputStream";
const char LunaTraits< wxZipOutputStream >::fullName[] = "wxZipOutputStream";
const char LunaTraits< wxZipOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxZipOutputStream >::parents[] = {0};
const int LunaTraits< wxZipOutputStream >::hash = 22640587;
const int LunaTraits< wxZipOutputStream >::uniqueIDs[] = {22640587,0};

luna_RegType LunaTraits< wxZipOutputStream >::methods[] = {
	{"dynCast", &luna_wrapper_wxZipOutputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxZipOutputStream::_bind___eq},
	{"getTable", &luna_wrapper_wxZipOutputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxZipOutputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxZipOutputStream >::enumValues[] = {
	{0,0}
};


