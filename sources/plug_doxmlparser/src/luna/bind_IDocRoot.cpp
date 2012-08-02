#include <plug_common.h>

class luna_wrapper_IDocRoot {
public:
	typedef Luna< IDocRoot > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_contents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_internal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_contents(lua_State *L) {
		if (!_lg_typecheck_contents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in contents function, expected prototype:\ncontents()");
		}


		IDocRoot* self=dynamic_cast< IDocRoot* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call contents(...)");
		}
		IDocIterator * lret = self->contents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	static int _bind_internal(lua_State *L) {
		if (!_lg_typecheck_internal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in internal function, expected prototype:\ninternal()");
		}


		IDocRoot* self=dynamic_cast< IDocRoot* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call internal(...)");
		}
		IDocInternal * lret = self->internal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocInternal >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocRoot* LunaTraits< IDocRoot >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocRoot >::_bind_dtor(IDocRoot* obj) {
	delete obj;
}

const char LunaTraits< IDocRoot >::className[] = "IDocRoot";
const char LunaTraits< IDocRoot >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocRoot >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocRoot >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocRoot >::methods[] = {
	{"contents", &luna_wrapper_IDocRoot::_bind_contents},
	{"internal", &luna_wrapper_IDocRoot::_bind_internal},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocRoot >::enumValues[] = {
	{0,0}
};


