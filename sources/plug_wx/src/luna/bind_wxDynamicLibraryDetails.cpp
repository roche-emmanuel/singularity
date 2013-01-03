#include <plug_common.h>

class luna_wrapper_wxDynamicLibraryDetails {
public:
	typedef Luna< wxDynamicLibraryDetails > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26609032) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDynamicLibraryDetails*)");
		}

		wxDynamicLibraryDetails* rhs =(Luna< wxDynamicLibraryDetails >::check(L,2));
		wxDynamicLibraryDetails* self=(Luna< wxDynamicLibraryDetails >::check(L,1));
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

		wxDynamicLibraryDetails* self=(Luna< wxDynamicLibraryDetails >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDynamicLibraryDetails");
		
		return luna_dynamicCast(L,converters,"wxDynamicLibraryDetails",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxString wxDynamicLibraryDetails::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDynamicLibraryDetails::GetName() const function, expected prototype:\nwxString wxDynamicLibraryDetails::GetName() const\nClass arguments details:\n");
		}


		wxDynamicLibraryDetails* self=(Luna< wxDynamicLibraryDetails >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDynamicLibraryDetails::GetName() const. Got : '%s'",typeid(Luna< wxDynamicLibraryDetails >::check(L,1)).name());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDynamicLibraryDetails::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDynamicLibraryDetails::GetPath() const function, expected prototype:\nwxString wxDynamicLibraryDetails::GetPath() const\nClass arguments details:\n");
		}


		wxDynamicLibraryDetails* self=(Luna< wxDynamicLibraryDetails >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDynamicLibraryDetails::GetPath() const. Got : '%s'",typeid(Luna< wxDynamicLibraryDetails >::check(L,1)).name());
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxDynamicLibraryDetails::GetVersion() const
	static int _bind_GetVersion(lua_State *L) {
		if (!_lg_typecheck_GetVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxDynamicLibraryDetails::GetVersion() const function, expected prototype:\nwxString wxDynamicLibraryDetails::GetVersion() const\nClass arguments details:\n");
		}


		wxDynamicLibraryDetails* self=(Luna< wxDynamicLibraryDetails >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxDynamicLibraryDetails::GetVersion() const. Got : '%s'",typeid(Luna< wxDynamicLibraryDetails >::check(L,1)).name());
		}
		wxString lret = self->GetVersion();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxDynamicLibraryDetails* LunaTraits< wxDynamicLibraryDetails >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxDynamicLibraryDetails >::_bind_dtor(wxDynamicLibraryDetails* obj) {
	delete obj;
}

const char LunaTraits< wxDynamicLibraryDetails >::className[] = "wxDynamicLibraryDetails";
const char LunaTraits< wxDynamicLibraryDetails >::fullName[] = "wxDynamicLibraryDetails";
const char LunaTraits< wxDynamicLibraryDetails >::moduleName[] = "wx";
const char* LunaTraits< wxDynamicLibraryDetails >::parents[] = {0};
const int LunaTraits< wxDynamicLibraryDetails >::hash = 26609032;
const int LunaTraits< wxDynamicLibraryDetails >::uniqueIDs[] = {26609032,0};

luna_RegType LunaTraits< wxDynamicLibraryDetails >::methods[] = {
	{"GetName", &luna_wrapper_wxDynamicLibraryDetails::_bind_GetName},
	{"GetPath", &luna_wrapper_wxDynamicLibraryDetails::_bind_GetPath},
	{"GetVersion", &luna_wrapper_wxDynamicLibraryDetails::_bind_GetVersion},
	{"dynCast", &luna_wrapper_wxDynamicLibraryDetails::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDynamicLibraryDetails::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxDynamicLibraryDetails >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDynamicLibraryDetails >::enumValues[] = {
	{0,0}
};


