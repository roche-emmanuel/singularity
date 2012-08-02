#include <plug_common.h>

class luna_wrapper_IDocTocList {
public:
	typedef Luna< IDocTocList > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_elements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_elements(lua_State *L) {
		if (!_lg_typecheck_elements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in elements function, expected prototype:\nelements()");
		}


		IDocTocList* self=dynamic_cast< IDocTocList* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call elements(...)");
		}
		IDocIterator * lret = self->elements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocTocList* LunaTraits< IDocTocList >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocTocList >::_bind_dtor(IDocTocList* obj) {
	delete obj;
}

const char LunaTraits< IDocTocList >::className[] = "IDocTocList";
const char LunaTraits< IDocTocList >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocTocList >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocTocList >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocTocList >::methods[] = {
	{"elements", &luna_wrapper_IDocTocList::_bind_elements},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocTocList >::enumValues[] = {
	{0,0}
};


