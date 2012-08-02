#include <plug_common.h>

class luna_wrapper_IDCOP {
public:
	typedef Luna< IDCOP > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IDCOP* LunaTraits< IDCOP >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDCOP >::_bind_dtor(IDCOP* obj) {
	delete obj;
}

const char LunaTraits< IDCOP >::className[] = "IDCOP";
const char LunaTraits< IDCOP >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDCOP >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IDCOP >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IDCOP >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDCOP >::enumValues[] = {
	{0,0}
};


