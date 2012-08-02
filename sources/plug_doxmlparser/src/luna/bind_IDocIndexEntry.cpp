#include <plug_common.h>

class luna_wrapper_IDocIndexEntry {
public:
	typedef Luna< IDocIndexEntry > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_primary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_secondary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_primary(lua_State *L) {
		if (!_lg_typecheck_primary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in primary function, expected prototype:\nprimary()");
		}


		IDocIndexEntry* self=dynamic_cast< IDocIndexEntry* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call primary(...)");
		}
		const IString * lret = self->primary();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_secondary(lua_State *L) {
		if (!_lg_typecheck_secondary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in secondary function, expected prototype:\nsecondary()");
		}


		IDocIndexEntry* self=dynamic_cast< IDocIndexEntry* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call secondary(...)");
		}
		const IString * lret = self->secondary();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocIndexEntry* LunaTraits< IDocIndexEntry >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocIndexEntry >::_bind_dtor(IDocIndexEntry* obj) {
	delete obj;
}

const char LunaTraits< IDocIndexEntry >::className[] = "IDocIndexEntry";
const char LunaTraits< IDocIndexEntry >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocIndexEntry >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocIndexEntry >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocIndexEntry >::methods[] = {
	{"primary", &luna_wrapper_IDocIndexEntry::_bind_primary},
	{"secondary", &luna_wrapper_IDocIndexEntry::_bind_secondary},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocIndexEntry >::enumValues[] = {
	{0,0}
};


