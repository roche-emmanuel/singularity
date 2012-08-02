#include <plug_common.h>

class luna_wrapper_INamespace {
public:
	typedef Luna< INamespace > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_nestedCompounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_nestedCompounds(lua_State *L) {
		if (!_lg_typecheck_nestedCompounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in nestedCompounds function, expected prototype:\nnestedCompounds()");
		}


		INamespace* self=dynamic_cast< INamespace* >(Luna< ICompound >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call nestedCompounds(...)");
		}
		ICompoundIterator * lret = self->nestedCompounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

INamespace* LunaTraits< INamespace >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< INamespace >::_bind_dtor(INamespace* obj) {
	delete obj;
}

const char LunaTraits< INamespace >::className[] = "INamespace";
const char LunaTraits< INamespace >::moduleName[] = "doxmlparser";
const char* LunaTraits< INamespace >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< INamespace >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< INamespace >::methods[] = {
	{"nestedCompounds", &luna_wrapper_INamespace::_bind_nestedCompounds},
	{0,0}
};

luna_RegEnumType LunaTraits< INamespace >::enumValues[] = {
	{0,0}
};


