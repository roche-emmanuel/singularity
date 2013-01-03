#include <plug_common.h>

class luna_wrapper_wxIconLocation {
public:
	typedef Luna< wxIconLocation > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82682189) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxIconLocation*)");
		}

		wxIconLocation* rhs =(Luna< wxIconLocation >::check(L,2));
		wxIconLocation* self=(Luna< wxIconLocation >::check(L,1));
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

		wxIconLocation* self=(Luna< wxIconLocation >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxIconLocation");
		
		return luna_dynamicCast(L,converters,"wxIconLocation",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFileName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxIconLocation::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIconLocation::IsOk() const function, expected prototype:\nbool wxIconLocation::IsOk() const\nClass arguments details:\n");
		}


		wxIconLocation* self=(Luna< wxIconLocation >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIconLocation::IsOk() const. Got : '%s'",typeid(Luna< wxIconLocation >::check(L,1)).name());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxIconLocation::SetFileName(const wxString & filename)
	static int _bind_SetFileName(lua_State *L) {
		if (!_lg_typecheck_SetFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIconLocation::SetFileName(const wxString & filename) function, expected prototype:\nvoid wxIconLocation::SetFileName(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxIconLocation* self=(Luna< wxIconLocation >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIconLocation::SetFileName(const wxString &). Got : '%s'",typeid(Luna< wxIconLocation >::check(L,1)).name());
		}
		self->SetFileName(filename);

		return 0;
	}

	// const wxString & wxIconLocation::GetFileName() const
	static int _bind_GetFileName(lua_State *L) {
		if (!_lg_typecheck_GetFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const wxString & wxIconLocation::GetFileName() const function, expected prototype:\nconst wxString & wxIconLocation::GetFileName() const\nClass arguments details:\n");
		}


		wxIconLocation* self=(Luna< wxIconLocation >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const wxString & wxIconLocation::GetFileName() const. Got : '%s'",typeid(Luna< wxIconLocation >::check(L,1)).name());
		}
		const wxString & lret = self->GetFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxIconLocation* LunaTraits< wxIconLocation >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxIconLocation >::_bind_dtor(wxIconLocation* obj) {
	delete obj;
}

const char LunaTraits< wxIconLocation >::className[] = "wxIconLocation";
const char LunaTraits< wxIconLocation >::fullName[] = "wxIconLocation";
const char LunaTraits< wxIconLocation >::moduleName[] = "wx";
const char* LunaTraits< wxIconLocation >::parents[] = {0};
const int LunaTraits< wxIconLocation >::hash = 82682189;
const int LunaTraits< wxIconLocation >::uniqueIDs[] = {82682189,0};

luna_RegType LunaTraits< wxIconLocation >::methods[] = {
	{"IsOk", &luna_wrapper_wxIconLocation::_bind_IsOk},
	{"SetFileName", &luna_wrapper_wxIconLocation::_bind_SetFileName},
	{"GetFileName", &luna_wrapper_wxIconLocation::_bind_GetFileName},
	{"dynCast", &luna_wrapper_wxIconLocation::_bind_dynCast},
	{"__eq", &luna_wrapper_wxIconLocation::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxIconLocation >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxIconLocation >::enumValues[] = {
	{0,0}
};


