#include <plug_common.h>

class luna_wrapper_IVariable {
public:
	typedef Luna< IVariable > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IVariable* LunaTraits< IVariable >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IVariable >::_bind_dtor(IVariable* obj) {
	delete obj;
}

const char LunaTraits< IVariable >::className[] = "IVariable";
const char LunaTraits< IVariable >::moduleName[] = "doxmlparser";
const char* LunaTraits< IVariable >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IVariable >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IVariable >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IVariable >::enumValues[] = {
	{0,0}
};


