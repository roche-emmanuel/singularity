#include <plug_common.h>

class luna_wrapper_IEnum {
public:
	typedef Luna< IEnum > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_enumValues(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_enumValues(lua_State *L) {
		if (!_lg_typecheck_enumValues(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in enumValues function, expected prototype:\nenumValues()");
		}


		IEnum* self=dynamic_cast< IEnum* >(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call enumValues(...)");
		}
		IMemberIterator * lret = self->enumValues();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IMemberIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IEnum* LunaTraits< IEnum >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IEnum >::_bind_dtor(IEnum* obj) {
	delete obj;
}

const char LunaTraits< IEnum >::className[] = "IEnum";
const char LunaTraits< IEnum >::moduleName[] = "doxmlparser";
const char* LunaTraits< IEnum >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IEnum >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IEnum >::methods[] = {
	{"enumValues", &luna_wrapper_IEnum::_bind_enumValues},
	{0,0}
};

luna_RegEnumType LunaTraits< IEnum >::enumValues[] = {
	{0,0}
};


