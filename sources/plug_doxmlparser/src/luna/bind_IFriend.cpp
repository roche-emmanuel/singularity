#include <plug_common.h>

class luna_wrapper_IFriend {
public:
	typedef Luna< IFriend > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IFriend* LunaTraits< IFriend >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IFriend >::_bind_dtor(IFriend* obj) {
	delete obj;
}

const char LunaTraits< IFriend >::className[] = "IFriend";
const char LunaTraits< IFriend >::moduleName[] = "doxmlparser";
const char* LunaTraits< IFriend >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IFriend >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IFriend >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IFriend >::enumValues[] = {
	{0,0}
};


