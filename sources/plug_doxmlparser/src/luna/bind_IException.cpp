#include <plug_common.h>

class luna_wrapper_IException {
public:
	typedef Luna< IException > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IException* LunaTraits< IException >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IException >::_bind_dtor(IException* obj) {
	delete obj;
}

const char LunaTraits< IException >::className[] = "IException";
const char LunaTraits< IException >::moduleName[] = "doxmlparser";
const char* LunaTraits< IException >::parents[] = {"doxmlparser.ICompound", 0};
const int LunaTraits< IException >::uniqueIDs[] = {27352831,0};

luna_RegType LunaTraits< IException >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IException >::enumValues[] = {
	{0,0}
};


