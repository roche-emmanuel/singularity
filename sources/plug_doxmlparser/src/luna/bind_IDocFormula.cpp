#include <plug_common.h>

class luna_wrapper_IDocFormula {
public:
	typedef Luna< IDocFormula > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_text(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in id function, expected prototype:\nid()");
		}


		IDocFormula* self=dynamic_cast< IDocFormula* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call id(...)");
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}

	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in text function, expected prototype:\ntext()");
		}


		IDocFormula* self=dynamic_cast< IDocFormula* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call text(...)");
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocFormula* LunaTraits< IDocFormula >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocFormula >::_bind_dtor(IDocFormula* obj) {
	delete obj;
}

const char LunaTraits< IDocFormula >::className[] = "IDocFormula";
const char LunaTraits< IDocFormula >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocFormula >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocFormula >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocFormula >::methods[] = {
	{"id", &luna_wrapper_IDocFormula::_bind_id},
	{"text", &luna_wrapper_IDocFormula::_bind_text},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocFormula >::enumValues[] = {
	{0,0}
};


