#include <plug_common.h>

class luna_wrapper_IDocListItem {
public:
	typedef Luna< IDocListItem > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_contents(lua_State *L) {
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


		IDocListItem* self=dynamic_cast< IDocListItem* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call contents(...)");
		}
		IDocIterator * lret = self->contents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocListItem* LunaTraits< IDocListItem >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocListItem >::_bind_dtor(IDocListItem* obj) {
	delete obj;
}

const char LunaTraits< IDocListItem >::className[] = "IDocListItem";
const char LunaTraits< IDocListItem >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocListItem >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocListItem >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocListItem >::methods[] = {
	{"contents", &luna_wrapper_IDocListItem::_bind_contents},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocListItem >::enumValues[] = {
	{0,0}
};


