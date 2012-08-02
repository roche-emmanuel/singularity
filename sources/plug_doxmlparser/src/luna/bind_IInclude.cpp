#include <plug_common.h>

class luna_wrapper_IInclude {
public:
	typedef Luna< IInclude > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_refId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in name function, expected prototype:\nname()");
		}


		IInclude* self=(Luna< IInclude >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call name(...)");
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_refId(lua_State *L) {
		if (!_lg_typecheck_refId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in refId function, expected prototype:\nrefId()");
		}


		IInclude* self=(Luna< IInclude >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call refId(...)");
		}
		const IString * lret = self->refId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_isLocal(lua_State *L) {
		if (!_lg_typecheck_isLocal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in isLocal function, expected prototype:\nisLocal()");
		}


		IInclude* self=(Luna< IInclude >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call isLocal(...)");
		}
		bool lret = self->isLocal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

IInclude* LunaTraits< IInclude >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IInclude >::_bind_dtor(IInclude* obj) {
	delete obj;
}

const char LunaTraits< IInclude >::className[] = "IInclude";
const char LunaTraits< IInclude >::moduleName[] = "doxmlparser";
const char* LunaTraits< IInclude >::parents[] = {0};
const int LunaTraits< IInclude >::uniqueIDs[] = {52441879,0};

luna_RegType LunaTraits< IInclude >::methods[] = {
	{"name", &luna_wrapper_IInclude::_bind_name},
	{"refId", &luna_wrapper_IInclude::_bind_refId},
	{"isLocal", &luna_wrapper_IInclude::_bind_isLocal},
	{0,0}
};

luna_RegEnumType LunaTraits< IInclude >::enumValues[] = {
	{0,0}
};


