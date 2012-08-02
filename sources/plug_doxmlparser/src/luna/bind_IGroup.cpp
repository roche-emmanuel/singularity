#include <plug_common.h>

class luna_wrapper_IGroup {
public:
	typedef Luna< IGroup > luna_t;

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


		IGroup* self=dynamic_cast< IGroup* >(Luna< ICompound >::check(L,1));
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

IGroup* LunaTraits< IGroup >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IGroup >::_bind_dtor(IGroup* obj) {
	delete obj;
}

const char LunaTraits< IGroup >::className[] = "IGroup";
const char LunaTraits< IGroup >::moduleName[] = "doxmlparser";
const char* LunaTraits< IGroup >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IGroup >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IGroup >::methods[] = {
	{"nestedCompounds", &luna_wrapper_IGroup::_bind_nestedCompounds},
	{0,0}
};

luna_RegEnumType LunaTraits< IGroup >::enumValues[] = {
	{0,0}
};


