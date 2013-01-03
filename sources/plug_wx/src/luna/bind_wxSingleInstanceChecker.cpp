#include <plug_common.h>

class luna_wrapper_wxSingleInstanceChecker {
public:
	typedef Luna< wxSingleInstanceChecker > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83137266) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxSingleInstanceChecker*)");
		}

		wxSingleInstanceChecker* rhs =(Luna< wxSingleInstanceChecker >::check(L,2));
		wxSingleInstanceChecker* self=(Luna< wxSingleInstanceChecker >::check(L,1));
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

		wxSingleInstanceChecker* self=(Luna< wxSingleInstanceChecker >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxSingleInstanceChecker");
		
		return luna_dynamicCast(L,converters,"wxSingleInstanceChecker",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateDefault(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsAnotherRunning(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSingleInstanceChecker::wxSingleInstanceChecker()
	static wxSingleInstanceChecker* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSingleInstanceChecker::wxSingleInstanceChecker() function, expected prototype:\nwxSingleInstanceChecker::wxSingleInstanceChecker()\nClass arguments details:\n");
		}


		return new wxSingleInstanceChecker();
	}

	// wxSingleInstanceChecker::wxSingleInstanceChecker(const wxString & name, const wxString & path = wxEmptyString)
	static wxSingleInstanceChecker* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSingleInstanceChecker::wxSingleInstanceChecker(const wxString & name, const wxString & path = wxEmptyString) function, expected prototype:\nwxSingleInstanceChecker::wxSingleInstanceChecker(const wxString & name, const wxString & path = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		return new wxSingleInstanceChecker(name, path);
	}

	// Overload binder for wxSingleInstanceChecker::wxSingleInstanceChecker
	static wxSingleInstanceChecker* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSingleInstanceChecker, cannot match any of the overloads for function wxSingleInstanceChecker:\n  wxSingleInstanceChecker()\n  wxSingleInstanceChecker(const wxString &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSingleInstanceChecker::Create(const wxString & name, const wxString & path = wxEmptyString)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleInstanceChecker::Create(const wxString & name, const wxString & path = wxEmptyString) function, expected prototype:\nbool wxSingleInstanceChecker::Create(const wxString & name, const wxString & path = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxSingleInstanceChecker* self=(Luna< wxSingleInstanceChecker >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleInstanceChecker::Create(const wxString &, const wxString &). Got : '%s'",typeid(Luna< wxSingleInstanceChecker >::check(L,1)).name());
		}
		bool lret = self->Create(name, path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleInstanceChecker::CreateDefault()
	static int _bind_CreateDefault(lua_State *L) {
		if (!_lg_typecheck_CreateDefault(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleInstanceChecker::CreateDefault() function, expected prototype:\nbool wxSingleInstanceChecker::CreateDefault()\nClass arguments details:\n");
		}


		wxSingleInstanceChecker* self=(Luna< wxSingleInstanceChecker >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleInstanceChecker::CreateDefault(). Got : '%s'",typeid(Luna< wxSingleInstanceChecker >::check(L,1)).name());
		}
		bool lret = self->CreateDefault();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSingleInstanceChecker::IsAnotherRunning() const
	static int _bind_IsAnotherRunning(lua_State *L) {
		if (!_lg_typecheck_IsAnotherRunning(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSingleInstanceChecker::IsAnotherRunning() const function, expected prototype:\nbool wxSingleInstanceChecker::IsAnotherRunning() const\nClass arguments details:\n");
		}


		wxSingleInstanceChecker* self=(Luna< wxSingleInstanceChecker >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSingleInstanceChecker::IsAnotherRunning() const. Got : '%s'",typeid(Luna< wxSingleInstanceChecker >::check(L,1)).name());
		}
		bool lret = self->IsAnotherRunning();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxSingleInstanceChecker* LunaTraits< wxSingleInstanceChecker >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSingleInstanceChecker::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxSingleInstanceChecker >::_bind_dtor(wxSingleInstanceChecker* obj) {
	delete obj;
}

const char LunaTraits< wxSingleInstanceChecker >::className[] = "wxSingleInstanceChecker";
const char LunaTraits< wxSingleInstanceChecker >::fullName[] = "wxSingleInstanceChecker";
const char LunaTraits< wxSingleInstanceChecker >::moduleName[] = "wx";
const char* LunaTraits< wxSingleInstanceChecker >::parents[] = {0};
const int LunaTraits< wxSingleInstanceChecker >::hash = 83137266;
const int LunaTraits< wxSingleInstanceChecker >::uniqueIDs[] = {83137266,0};

luna_RegType LunaTraits< wxSingleInstanceChecker >::methods[] = {
	{"Create", &luna_wrapper_wxSingleInstanceChecker::_bind_Create},
	{"CreateDefault", &luna_wrapper_wxSingleInstanceChecker::_bind_CreateDefault},
	{"IsAnotherRunning", &luna_wrapper_wxSingleInstanceChecker::_bind_IsAnotherRunning},
	{"dynCast", &luna_wrapper_wxSingleInstanceChecker::_bind_dynCast},
	{"__eq", &luna_wrapper_wxSingleInstanceChecker::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxSingleInstanceChecker >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxSingleInstanceChecker >::enumValues[] = {
	{0,0}
};


