#include <plug_common.h>

class luna_wrapper_IPrototype {
public:
	typedef Luna< IPrototype > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IPrototype* LunaTraits< IPrototype >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IPrototype >::_bind_dtor(IPrototype* obj) {
	delete obj;
}

const char LunaTraits< IPrototype >::className[] = "IPrototype";
const char LunaTraits< IPrototype >::moduleName[] = "doxmlparser";
const char* LunaTraits< IPrototype >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IPrototype >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IPrototype >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IPrototype >::enumValues[] = {
	{0,0}
};


