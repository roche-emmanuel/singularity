#include <plug_common.h>

class luna_wrapper_IUserDefined {
public:
	typedef Luna< IUserDefined > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_header(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_header(lua_State *L) {
		if (!_lg_typecheck_header(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in header function, expected prototype:\nheader()");
		}


		IUserDefined* self=dynamic_cast< IUserDefined* >(Luna< ISection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call header(...)");
		}
		const IString * lret = self->header();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IUserDefined* LunaTraits< IUserDefined >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IUserDefined >::_bind_dtor(IUserDefined* obj) {
	delete obj;
}

const char LunaTraits< IUserDefined >::className[] = "IUserDefined";
const char LunaTraits< IUserDefined >::moduleName[] = "doxmlparser";
const char* LunaTraits< IUserDefined >::parents[] = {"doxmlparser.ISection", 0};
const int LunaTraits< IUserDefined >::uniqueIDs[] = {70042881,0};

luna_RegType LunaTraits< IUserDefined >::methods[] = {
	{"header", &luna_wrapper_IUserDefined::_bind_header},
	{0,0}
};

luna_RegEnumType LunaTraits< IUserDefined >::enumValues[] = {
	{0,0}
};


