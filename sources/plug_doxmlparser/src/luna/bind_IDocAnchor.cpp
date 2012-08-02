#include <plug_common.h>

class luna_wrapper_IDocAnchor {
public:
	typedef Luna< IDocAnchor > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_id(lua_State *L) {
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


		IDocAnchor* self=dynamic_cast< IDocAnchor* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call id(...)");
		}
		const IString * lret = self->id();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocAnchor* LunaTraits< IDocAnchor >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocAnchor >::_bind_dtor(IDocAnchor* obj) {
	delete obj;
}

const char LunaTraits< IDocAnchor >::className[] = "IDocAnchor";
const char LunaTraits< IDocAnchor >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocAnchor >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocAnchor >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocAnchor >::methods[] = {
	{"id", &luna_wrapper_IDocAnchor::_bind_id},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocAnchor >::enumValues[] = {
	{0,0}
};


