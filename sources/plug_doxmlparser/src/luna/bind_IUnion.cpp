#include <plug_common.h>

class luna_wrapper_IUnion {
public:
	typedef Luna< IUnion > luna_t;

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


		IUnion* self=dynamic_cast< IUnion* >(Luna< ICompound >::check(L,1));
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

IUnion* LunaTraits< IUnion >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IUnion >::_bind_dtor(IUnion* obj) {
	delete obj;
}

const char LunaTraits< IUnion >::className[] = "IUnion";
const char LunaTraits< IUnion >::moduleName[] = "doxmlparser";
const char* LunaTraits< IUnion >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IUnion >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IUnion >::methods[] = {
	{"nestedCompounds", &luna_wrapper_IUnion::_bind_nestedCompounds},
	{0,0}
};

luna_RegEnumType LunaTraits< IUnion >::enumValues[] = {
	{0,0}
};


