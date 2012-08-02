#include <plug_common.h>

class luna_wrapper_IDocRow {
public:
	typedef Luna< IDocRow > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_entries(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_entries(lua_State *L) {
		if (!_lg_typecheck_entries(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in entries function, expected prototype:\nentries()");
		}


		IDocRow* self=dynamic_cast< IDocRow* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call entries(...)");
		}
		IDocIterator * lret = self->entries();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocRow* LunaTraits< IDocRow >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocRow >::_bind_dtor(IDocRow* obj) {
	delete obj;
}

const char LunaTraits< IDocRow >::className[] = "IDocRow";
const char LunaTraits< IDocRow >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocRow >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocRow >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocRow >::methods[] = {
	{"entries", &luna_wrapper_IDocRow::_bind_entries},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocRow >::enumValues[] = {
	{0,0}
};


