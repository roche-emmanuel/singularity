#include <plug_common.h>

class luna_wrapper_IDocParameter {
public:
	typedef Luna< IDocParameter > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in name function, expected prototype:\nname()");
		}


		IDocParameter* self=dynamic_cast< IDocParameter* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call name(...)");
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocParameter* LunaTraits< IDocParameter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocParameter >::_bind_dtor(IDocParameter* obj) {
	delete obj;
}

const char LunaTraits< IDocParameter >::className[] = "IDocParameter";
const char LunaTraits< IDocParameter >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocParameter >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocParameter >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocParameter >::methods[] = {
	{"name", &luna_wrapper_IDocParameter::_bind_name},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocParameter >::enumValues[] = {
	{0,0}
};


