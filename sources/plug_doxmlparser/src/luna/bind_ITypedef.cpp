#include <plug_common.h>

class luna_wrapper_ITypedef {
public:
	typedef Luna< ITypedef > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

ITypedef* LunaTraits< ITypedef >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ITypedef >::_bind_dtor(ITypedef* obj) {
	delete obj;
}

const char LunaTraits< ITypedef >::className[] = "ITypedef";
const char LunaTraits< ITypedef >::moduleName[] = "doxmlparser";
const char* LunaTraits< ITypedef >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< ITypedef >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< ITypedef >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ITypedef >::enumValues[] = {
	{0,0}
};


