#include <plug_common.h>

class luna_wrapper_wxXLocale {
public:
	typedef Luna< wxXLocale > luna_t;

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

		wxXLocale* self=(Luna< wxXLocale >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxXLocale");
		
		return luna_dynamicCast(L,converters,"wxXLocale",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCLocale(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23469565) ) return false;
		return true;
	}


	// Constructor binds:
	// wxXLocale::wxXLocale()
	static wxXLocale* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXLocale::wxXLocale() function, expected prototype:\nwxXLocale::wxXLocale()\nClass arguments details:\n");
		}


		return new wxXLocale();
	}

	// wxXLocale::wxXLocale(wxLanguage lang)
	static wxXLocale* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXLocale::wxXLocale(wxLanguage lang) function, expected prototype:\nwxXLocale::wxXLocale(wxLanguage lang)\nClass arguments details:\n");
		}

		wxLanguage lang=(wxLanguage)lua_tointeger(L,1);

		return new wxXLocale(lang);
	}

	// wxXLocale::wxXLocale(const char * loc)
	static wxXLocale* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxXLocale::wxXLocale(const char * loc) function, expected prototype:\nwxXLocale::wxXLocale(const char * loc)\nClass arguments details:\n");
		}

		const char * loc=(const char *)lua_tostring(L,1);

		return new wxXLocale(loc);
	}

	// Overload binder for wxXLocale::wxXLocale
	static wxXLocale* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxXLocale, cannot match any of the overloads for function wxXLocale:\n  wxXLocale()\n  wxXLocale(wxLanguage)\n  wxXLocale(const char *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxXLocale::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXLocale::IsOk() const function, expected prototype:\nbool wxXLocale::IsOk() const\nClass arguments details:\n");
		}


		wxXLocale* self=(Luna< wxXLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXLocale::IsOk() const. Got : '%s'",typeid(Luna< wxXLocale >::check(L,1)).name());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxXLocale & wxXLocale::GetCLocale()
	static int _bind_GetCLocale(lua_State *L) {
		if (!_lg_typecheck_GetCLocale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static wxXLocale & wxXLocale::GetCLocale() function, expected prototype:\nstatic wxXLocale & wxXLocale::GetCLocale()\nClass arguments details:\n");
		}


		const wxXLocale* lret = &wxXLocale::GetCLocale();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXLocale >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// bool wxXLocale::operator==(const wxXLocale & loc) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxXLocale::operator==(const wxXLocale & loc) const function, expected prototype:\nbool wxXLocale::operator==(const wxXLocale & loc) const\nClass arguments details:\narg 1 ID = 23469565\n");
		}

		const wxXLocale* loc_ptr=(Luna< wxXLocale >::check(L,2));
		if( !loc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg loc in wxXLocale::operator== function");
		}
		const wxXLocale & loc=*loc_ptr;

		wxXLocale* self=(Luna< wxXLocale >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxXLocale::operator==(const wxXLocale &) const. Got : '%s'",typeid(Luna< wxXLocale >::check(L,1)).name());
		}
		bool lret = self->operator==(loc);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxXLocale* LunaTraits< wxXLocale >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxXLocale::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxXLocale >::_bind_dtor(wxXLocale* obj) {
	delete obj;
}

const char LunaTraits< wxXLocale >::className[] = "wxXLocale";
const char LunaTraits< wxXLocale >::fullName[] = "wxXLocale";
const char LunaTraits< wxXLocale >::moduleName[] = "wx";
const char* LunaTraits< wxXLocale >::parents[] = {0};
const int LunaTraits< wxXLocale >::hash = 23469565;
const int LunaTraits< wxXLocale >::uniqueIDs[] = {23469565,0};

luna_RegType LunaTraits< wxXLocale >::methods[] = {
	{"IsOk", &luna_wrapper_wxXLocale::_bind_IsOk},
	{"GetCLocale", &luna_wrapper_wxXLocale::_bind_GetCLocale},
	{"__eq", &luna_wrapper_wxXLocale::_bind___eq},
	{"dynCast", &luna_wrapper_wxXLocale::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< wxXLocale >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxXLocale >::enumValues[] = {
	{0,0}
};


