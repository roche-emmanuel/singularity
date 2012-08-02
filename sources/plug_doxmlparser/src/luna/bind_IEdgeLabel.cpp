#include <plug_common.h>

class luna_wrapper_IEdgeLabel {
public:
	typedef Luna< IEdgeLabel > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_label(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_label(lua_State *L) {
		if (!_lg_typecheck_label(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in label function, expected prototype:\nlabel()");
		}


		IEdgeLabel* self=(Luna< IEdgeLabel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call label(...)");
		}
		const IString * lret = self->label();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IEdgeLabel* LunaTraits< IEdgeLabel >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IEdgeLabel >::_bind_dtor(IEdgeLabel* obj) {
	delete obj;
}

const char LunaTraits< IEdgeLabel >::className[] = "IEdgeLabel";
const char LunaTraits< IEdgeLabel >::moduleName[] = "doxmlparser";
const char* LunaTraits< IEdgeLabel >::parents[] = {0};
const int LunaTraits< IEdgeLabel >::uniqueIDs[] = {18272793,0};

luna_RegType LunaTraits< IEdgeLabel >::methods[] = {
	{"label", &luna_wrapper_IEdgeLabel::_bind_label},
	{0,0}
};

luna_RegEnumType LunaTraits< IEdgeLabel >::enumValues[] = {
	{0,0}
};


