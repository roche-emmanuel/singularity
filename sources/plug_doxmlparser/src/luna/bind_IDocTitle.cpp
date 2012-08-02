#include <plug_common.h>

class luna_wrapper_IDocTitle {
public:
	typedef Luna< IDocTitle > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_title(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_title(lua_State *L) {
		if (!_lg_typecheck_title(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in title function, expected prototype:\ntitle()");
		}


		IDocTitle* self=dynamic_cast< IDocTitle* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call title(...)");
		}
		IDocIterator * lret = self->title();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocTitle* LunaTraits< IDocTitle >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocTitle >::_bind_dtor(IDocTitle* obj) {
	delete obj;
}

const char LunaTraits< IDocTitle >::className[] = "IDocTitle";
const char LunaTraits< IDocTitle >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocTitle >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocTitle >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocTitle >::methods[] = {
	{"title", &luna_wrapper_IDocTitle::_bind_title},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocTitle >::enumValues[] = {
	{0,0}
};


