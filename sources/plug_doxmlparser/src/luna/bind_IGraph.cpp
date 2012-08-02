#include <plug_common.h>

class luna_wrapper_IGraph {
public:
	typedef Luna< IGraph > luna_t;

	// Function checkers:
	inline static bool _lg_typecheck_nodes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	static int _bind_nodes(lua_State *L) {
		if (!_lg_typecheck_nodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in nodes function, expected prototype:\nnodes()");
		}


		IGraph* self=(Luna< IGraph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call nodes(...)");
		}
		INodeIterator * lret = self->nodes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< INodeIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IGraph* LunaTraits< IGraph >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
}

void LunaTraits< IGraph >::_bind_dtor(IGraph* obj) {
	delete obj;
}

const char LunaTraits< IGraph >::className[] = "IGraph";
const char LunaTraits< IGraph >::moduleName[] = "doxmlparser";
const char* LunaTraits< IGraph >::parents[] = {0};
const int LunaTraits< IGraph >::uniqueIDs[] = {58990855,0};

luna_RegType LunaTraits< IGraph >::methods[] = {
	{"nodes", &luna_wrapper_IGraph::_bind_nodes},
	{0,0}
};

luna_RegEnumType LunaTraits< IGraph >::enumValues[] = {
	{0,0}
};


