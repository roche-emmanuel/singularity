#include <plug_common.h>

class luna_wrapper_ISlot {
public:
	typedef Luna< ISlot > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

ISlot* LunaTraits< ISlot >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ISlot >::_bind_dtor(ISlot* obj) {
	delete obj;
}

const char LunaTraits< ISlot >::className[] = "ISlot";
const char LunaTraits< ISlot >::moduleName[] = "doxmlparser";
const char* LunaTraits< ISlot >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< ISlot >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< ISlot >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ISlot >::enumValues[] = {
	{0,0}
};


