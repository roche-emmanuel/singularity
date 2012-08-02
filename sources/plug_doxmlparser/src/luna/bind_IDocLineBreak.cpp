#include <plug_common.h>

class luna_wrapper_IDocLineBreak {
public:
	typedef Luna< IDocLineBreak > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IDocLineBreak* LunaTraits< IDocLineBreak >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocLineBreak >::_bind_dtor(IDocLineBreak* obj) {
	delete obj;
}

const char LunaTraits< IDocLineBreak >::className[] = "IDocLineBreak";
const char LunaTraits< IDocLineBreak >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocLineBreak >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocLineBreak >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocLineBreak >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDocLineBreak >::enumValues[] = {
	{0,0}
};


