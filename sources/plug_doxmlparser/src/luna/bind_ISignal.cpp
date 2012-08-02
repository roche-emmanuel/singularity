#include <plug_common.h>

class luna_wrapper_ISignal {
public:
	typedef Luna< ISignal > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

ISignal* LunaTraits< ISignal >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ISignal >::_bind_dtor(ISignal* obj) {
	delete obj;
}

const char LunaTraits< ISignal >::className[] = "ISignal";
const char LunaTraits< ISignal >::moduleName[] = "doxmlparser";
const char* LunaTraits< ISignal >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< ISignal >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< ISignal >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ISignal >::enumValues[] = {
	{0,0}
};


