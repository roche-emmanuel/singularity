#include <plug_common.h>

class luna_wrapper_ILT_Text {
public:
	typedef Luna< ILT_Text > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_text(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_text(lua_State *L) {
		if (!_lg_typecheck_text(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in text function, expected prototype:\ntext()");
		}


		ILT_Text* self=dynamic_cast< ILT_Text* >(Luna< ILinkedText >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call text(...)");
		}
		const IString * lret = self->text();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

ILT_Text* LunaTraits< ILT_Text >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< ILT_Text >::_bind_dtor(ILT_Text* obj) {
	delete obj;
}

const char LunaTraits< ILT_Text >::className[] = "ILT_Text";
const char LunaTraits< ILT_Text >::moduleName[] = "doxmlparser";
const char* LunaTraits< ILT_Text >::parents[] = {"doxmlparser.ILinkedText", 0};
const int LunaTraits< ILT_Text >::uniqueIDs[] = {94836970,0};

luna_RegType LunaTraits< ILT_Text >::methods[] = {
	{"text", &luna_wrapper_ILT_Text::_bind_text},
	{0,0}
};

luna_RegEnumType LunaTraits< ILT_Text >::enumValues[] = {
	{0,0}
};


