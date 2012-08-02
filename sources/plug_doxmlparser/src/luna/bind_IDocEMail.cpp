#include <plug_common.h>

class luna_wrapper_IDocEMail {
public:
	typedef Luna< IDocEMail > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_address(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_address(lua_State *L) {
		if (!_lg_typecheck_address(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in address function, expected prototype:\naddress()");
		}


		IDocEMail* self=dynamic_cast< IDocEMail* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call address(...)");
		}
		const IString * lret = self->address();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocEMail* LunaTraits< IDocEMail >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocEMail >::_bind_dtor(IDocEMail* obj) {
	delete obj;
}

const char LunaTraits< IDocEMail >::className[] = "IDocEMail";
const char LunaTraits< IDocEMail >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocEMail >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocEMail >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocEMail >::methods[] = {
	{"address", &luna_wrapper_IDocEMail::_bind_address},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocEMail >::enumValues[] = {
	{0,0}
};


