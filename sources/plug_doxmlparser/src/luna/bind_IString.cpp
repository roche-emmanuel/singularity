#include <plug_common.h>

class luna_wrapper_IString {
public:
	typedef Luna< IString > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_latin1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_utf8(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_unicodeCharAt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_latin1(lua_State *L) {
		if (!_lg_typecheck_latin1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in latin1 function, expected prototype:\nlatin1()");
		}


		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call latin1(...)");
		}
		const char * lret = self->latin1();
		lua_pushstring(L,lret);

		return 1;
	}

	static int _bind_utf8(lua_State *L) {
		if (!_lg_typecheck_utf8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in utf8 function, expected prototype:\nutf8()");
		}


		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call utf8(...)");
		}
		const char * lret = self->utf8();
		lua_pushstring(L,lret);

		return 1;
	}

	static int _bind_unicodeCharAt(lua_State *L) {
		if (!_lg_typecheck_unicodeCharAt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unicodeCharAt function, expected prototype:\nunicodeCharAt(int)");
		}

		int index=(int)lua_tointeger(L,2);

		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unicodeCharAt(...)");
		}
		unsigned short lret = self->unicodeCharAt(index);
		lua_pushnumber(L,lret);

		return 1;
	}

	static int _bind_isEmpty(lua_State *L) {
		if (!_lg_typecheck_isEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isEmpty function, expected prototype:\nisEmpty()");
		}


		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isEmpty(...)");
		}
		bool lret = self->isEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in length function, expected prototype:\nlength()");
		}


		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call length(...)");
		}
		int lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IString* LunaTraits< IString >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IString >::_bind_dtor(IString* obj) {
	delete obj;
}

const char LunaTraits< IString >::className[] = "IString";
const char LunaTraits< IString >::moduleName[] = "doxmlparser";
const char* LunaTraits< IString >::parents[] = {0};
const int LunaTraits< IString >::uniqueIDs[] = {74613221,0};

luna_RegType LunaTraits< IString >::methods[] = {
	{"latin1", &luna_wrapper_IString::_bind_latin1},
	{"utf8", &luna_wrapper_IString::_bind_utf8},
	{"unicodeCharAt", &luna_wrapper_IString::_bind_unicodeCharAt},
	{"isEmpty", &luna_wrapper_IString::_bind_isEmpty},
	{"length", &luna_wrapper_IString::_bind_length},
	{0,0}
};

luna_RegEnumType LunaTraits< IString >::enumValues[] = {
	{0,0}
};


