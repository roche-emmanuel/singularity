#include <plug_common.h>

class luna_wrapper_IFunction {
public:
	typedef Luna< IFunction > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IFunction* LunaTraits< IFunction >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IFunction >::_bind_dtor(IFunction* obj) {
	delete obj;
}

const char LunaTraits< IFunction >::className[] = "IFunction";
const char LunaTraits< IFunction >::moduleName[] = "doxmlparser";
const char* LunaTraits< IFunction >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IFunction >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IFunction >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IFunction >::enumValues[] = {
	{0,0}
};


