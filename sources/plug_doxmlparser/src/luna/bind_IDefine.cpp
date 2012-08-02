#include <plug_common.h>

class luna_wrapper_IDefine {
public:
	typedef Luna< IDefine > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IDefine* LunaTraits< IDefine >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDefine >::_bind_dtor(IDefine* obj) {
	delete obj;
}

const char LunaTraits< IDefine >::className[] = "IDefine";
const char LunaTraits< IDefine >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDefine >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IDefine >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IDefine >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDefine >::enumValues[] = {
	{0,0}
};


