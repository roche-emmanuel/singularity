#include <plug_common.h>

class luna_wrapper_IEnumValue {
public:
	typedef Luna< IEnumValue > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_name(lua_State *L) {
		if (!_lg_typecheck_name(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in name function, expected prototype:\nname()");
		}


		IEnumValue* self=dynamic_cast< IEnumValue* >(Luna< IMember >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call name(...)");
		}
		const IString * lret = self->name();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IEnumValue* LunaTraits< IEnumValue >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IEnumValue >::_bind_dtor(IEnumValue* obj) {
	delete obj;
}

const char LunaTraits< IEnumValue >::className[] = "IEnumValue";
const char LunaTraits< IEnumValue >::moduleName[] = "doxmlparser";
const char* LunaTraits< IEnumValue >::parents[] = {"doxmlparser.IMember", 0};
const int LunaTraits< IEnumValue >::uniqueIDs[] = {88829564,0};

luna_RegType LunaTraits< IEnumValue >::methods[] = {
	{"name", &luna_wrapper_IEnumValue::_bind_name},
	{0,0}
};

luna_RegEnumType LunaTraits< IEnumValue >::enumValues[] = {
	{0,0}
};


