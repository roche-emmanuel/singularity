#include <plug_common.h>

class luna_wrapper_wxTextCompleter {
public:
	typedef Luna< wxTextCompleter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92690309) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTextCompleter*)");
		}

		wxTextCompleter* rhs =(Luna< wxTextCompleter >::check(L,2));
		wxTextCompleter* self=(Luna< wxTextCompleter >::check(L,1));
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

		wxTextCompleter* self=(Luna< wxTextCompleter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextCompleter");
		
		return luna_dynamicCast(L,converters,"wxTextCompleter",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_Start(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool wxTextCompleter::Start(const wxString & prefix)
	static int _bind_Start(lua_State *L) {
		if (!_lg_typecheck_Start(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxTextCompleter::Start(const wxString & prefix) function, expected prototype:\nbool wxTextCompleter::Start(const wxString & prefix)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString prefix(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCompleter* self=(Luna< wxTextCompleter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxTextCompleter::Start(const wxString &)");
		}
		bool lret = self->Start(prefix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxTextCompleter::GetNext()
	static int _bind_GetNext(lua_State *L) {
		if (!_lg_typecheck_GetNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxString wxTextCompleter::GetNext() function, expected prototype:\nwxString wxTextCompleter::GetNext()\nClass arguments details:\n");
		}


		wxTextCompleter* self=(Luna< wxTextCompleter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxString wxTextCompleter::GetNext()");
		}
		wxString lret = self->GetNext();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxTextCompleter* LunaTraits< wxTextCompleter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool wxTextCompleter::Start(const wxString & prefix)
	// wxString wxTextCompleter::GetNext()

	// Abstract operators:
}

void LunaTraits< wxTextCompleter >::_bind_dtor(wxTextCompleter* obj) {
	delete obj;
}

const char LunaTraits< wxTextCompleter >::className[] = "wxTextCompleter";
const char LunaTraits< wxTextCompleter >::fullName[] = "wxTextCompleter";
const char LunaTraits< wxTextCompleter >::moduleName[] = "wx";
const char* LunaTraits< wxTextCompleter >::parents[] = {0};
const int LunaTraits< wxTextCompleter >::hash = 92690309;
const int LunaTraits< wxTextCompleter >::uniqueIDs[] = {92690309,0};

luna_RegType LunaTraits< wxTextCompleter >::methods[] = {
	{"Start", &luna_wrapper_wxTextCompleter::_bind_Start},
	{"GetNext", &luna_wrapper_wxTextCompleter::_bind_GetNext},
	{"dynCast", &luna_wrapper_wxTextCompleter::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTextCompleter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextCompleter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextCompleter >::enumValues[] = {
	{0,0}
};


