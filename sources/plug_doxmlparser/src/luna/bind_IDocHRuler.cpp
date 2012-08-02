#include <plug_common.h>

class luna_wrapper_IDocHRuler {
public:
	typedef Luna< IDocHRuler > luna_t;

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

IDocHRuler* LunaTraits< IDocHRuler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocHRuler >::_bind_dtor(IDocHRuler* obj) {
	delete obj;
}

const char LunaTraits< IDocHRuler >::className[] = "IDocHRuler";
const char LunaTraits< IDocHRuler >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocHRuler >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocHRuler >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocHRuler >::methods[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDocHRuler >::enumValues[] = {
	{0,0}
};


