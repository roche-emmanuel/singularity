#include <plug_common.h>

class luna_wrapper_IProperty {
public:
	typedef Luna< IProperty > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IProperty* LunaTraits< IProperty >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IProperty >::_bind_dtor(IProperty* obj) {
	delete obj;
}

const char LunaTraits< IProperty >::className[] = "IProperty";
const char LunaTraits< IProperty >::moduleName[] = "doxmlparser";
const char* LunaTraits< IProperty >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IProperty >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IProperty >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IProperty >::enumValues[] = {
	{0,0}
};


