#include <plug_common.h>

class luna_wrapper_ILinkedText {
public:
	typedef Luna< ILinkedText > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_kind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_kind(lua_State *L) {
		if (!_lg_typecheck_kind(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in kind function, expected prototype:\nkind()");
		}


		ILinkedText* self=(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call kind(...)");
		}
		ILinkedText::Kind lret = self->kind();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

ILinkedText* LunaTraits< ILinkedText >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ILinkedText >::_bind_dtor(ILinkedText* obj) {
	delete obj;
}

const char LunaTraits< ILinkedText >::className[] = "ILinkedText";
const char LunaTraits< ILinkedText >::moduleName[] = "doxmlparser";
const char* LunaTraits< ILinkedText >::parents[] = {0};
const int LunaTraits< ILinkedText >::uniqueIDs[] = {94836970,0};

luna_RegType LunaTraits< ILinkedText >::methods[] = {
	{"kind", &luna_wrapper_ILinkedText::_bind_kind},
	{0,0}
};

luna_RegEnumType LunaTraits< ILinkedText >::enumValues[] = {
	{"Kind_Text", ILinkedText::Kind_Text},
	{"Kind_Ref", ILinkedText::Kind_Ref},
	{0,0}
};


