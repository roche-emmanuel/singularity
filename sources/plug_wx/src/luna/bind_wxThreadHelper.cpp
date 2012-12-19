#include <plug_common.h>

#include <luna/wrappers/wrapper_wxThreadHelper.h>

class luna_wrapper_wxThreadHelper {
public:
	typedef Luna< wxThreadHelper > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxThreadHelper* self=(Luna< wxThreadHelper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76382729) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxThreadHelper*)");
		}

		wxThreadHelper* rhs =(Luna< wxThreadHelper >::check(L,2));
		wxThreadHelper* self=(Luna< wxThreadHelper >::check(L,1));
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

		wxThreadHelper* self=(Luna< wxThreadHelper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxThreadHelper");
		
		return luna_dynamicCast(L,converters,"wxThreadHelper",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxThreadHelper* LunaTraits< wxThreadHelper >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void * wxThreadHelper::Entry()
}

void LunaTraits< wxThreadHelper >::_bind_dtor(wxThreadHelper* obj) {
	delete obj;
}

const char LunaTraits< wxThreadHelper >::className[] = "wxThreadHelper";
const char LunaTraits< wxThreadHelper >::fullName[] = "wxThreadHelper";
const char LunaTraits< wxThreadHelper >::moduleName[] = "wx";
const char* LunaTraits< wxThreadHelper >::parents[] = {0};
const int LunaTraits< wxThreadHelper >::hash = 76382729;
const int LunaTraits< wxThreadHelper >::uniqueIDs[] = {76382729,0};

luna_RegType LunaTraits< wxThreadHelper >::methods[] = {
	{"dynCast", &luna_wrapper_wxThreadHelper::_bind_dynCast},
	{"__eq", &luna_wrapper_wxThreadHelper::_bind___eq},
	{"getTable", &luna_wrapper_wxThreadHelper::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxThreadHelper >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxThreadHelper >::enumValues[] = {
	{0,0}
};


