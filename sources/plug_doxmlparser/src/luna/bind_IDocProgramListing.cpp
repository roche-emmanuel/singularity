#include <plug_common.h>

class luna_wrapper_IDocProgramListing {
public:
	typedef Luna< IDocProgramListing > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_codeLines(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_codeLines(lua_State *L) {
		if (!_lg_typecheck_codeLines(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in codeLines function, expected prototype:\ncodeLines()");
		}


		IDocProgramListing* self=dynamic_cast< IDocProgramListing* >(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call codeLines(...)");
		}
		IDocIterator * lret = self->codeLines();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocProgramListing* LunaTraits< IDocProgramListing >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IDocProgramListing >::_bind_dtor(IDocProgramListing* obj) {
	delete obj;
}

const char LunaTraits< IDocProgramListing >::className[] = "IDocProgramListing";
const char LunaTraits< IDocProgramListing >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocProgramListing >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocProgramListing >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocProgramListing >::methods[] = {
	{"codeLines", &luna_wrapper_IDocProgramListing::_bind_codeLines},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocProgramListing >::enumValues[] = {
	{0,0}
};


